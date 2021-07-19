#include<stdio.h>


int table[] = {-12,-10,1,2,3,8,81,109};

int binary(int start, int end, int x)
{
    int mid = (start + end) / 2;

    if(start>end)
    {
         printf("\nDidn't find\n");
         return -1;
    }else if (x==table[mid])
        return mid;
    else if (x>table[mid] )
        return binary(mid + 1, end, x);
    else if (x<table[mid])
        return binary(start, mid - 1, x);
}
int main()
{
    int x;

    printf("Give a number : \n");
    scanf("%d", &x);

    printf("Posotion : %d",binary(0, 7, x));

    return 0;
}

