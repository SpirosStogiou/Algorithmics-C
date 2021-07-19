#include<stdio.h>
#define N 9

int A[] = {-2 , 1, -3, 4, -1, 2, 1, -5, 4};
int main()
{
    int i, j;
    int sum=0;
    int max=0;

    max= A[0];
    for(i = 0; i < N; i++)
    {
        sum=0;
        for(j = i; j < N; j++)
        {
            sum+=A[j];
            if(sum>max)
                max=sum;
        }
    }
    printf("To max einai: %d\n",max);
    return 0;
}
