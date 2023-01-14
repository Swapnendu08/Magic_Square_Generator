// Magic_Square_Generator
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[1000][1000], n, row = 0, col, k = 1,sum1,sum2,sum3;
    sum1=sum2=sum3=0;
    printf("WELCOME TO MAGIC SQUARE GENERATOR...........!!!\n");
    printf("We have the NxN square where N is odd!!!\n");
    printf("Enter the value of N\n");
    scanf("%d", &n);
    col = (row + n) / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    while (k <= (n * n))
    {
        if (arr[row][col] == 0)
        {
            arr[row][col] = k;
            if (row >= 0)
            {
                row = (row - 1) % n;
                if (row < 0)
                {
                    row = n - 1;
                }
            }
            else
            {
                row = n - 1;
            }
            col = (col + 1) % n;
            k++;
        }
        else
        {
            row=(row+1)%n;
            col=(col-1)%n;
            if(col<0)
            {
                col=n-1;
            }
            row=(row+1)%n;
            arr[row][col] = k;
            if (row >= 0)
            {
                row = (row - 1) % n;
                if (row < 0)
                {
                    row = n - 1;
                }
            }
            else
            {
                row = n - 1;
            }
            col = (col + 1) % n;
            k++;
        }
    }
    printf("--------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j]>=0 && arr[i][j]<=9)
            {
                printf("0%d  ",arr[i][j]);
            }
            else
            {
            printf("%d  ", arr[i][j]);
            }
        }
        printf("\n");
    }
    printf("--------------------------------------------------------------------------\n");
    printf("Lets check whether it is a Magic Square or not!!!!\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==0)
            sum1=sum1+arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j==0)
            sum2=sum2+arr[j][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum3=sum3+arr[i][j];
            break;
        }
    }
    printf("--------------------------------------------------------------------------\n");
    printf("Sum along the horizontal in square matrix=%d\n",sum1);
    printf("Sum along the vertical in square matrix=%d\n",sum2);
    printf("Sum along the diagonal in square matrix=%d\n",sum3);
    printf("--------------------------------------------------------------------------\n");
    printf("--------------------------------------------------------------------------\n");
    if (sum1==sum2 && sum1==sum3 && sum2==sum3)
    {
        printf("Since,all the sum along horizontal,vertical and diagonal is equal,it is a Magic Square!!!!!\n");
    }
    else
    {
        printf("Since ,the size of square matrix is even, it is not a square matrix!!!!\n");
    }
    printf("--------------------------------------------------------------------------\n");


    return 0;
}
