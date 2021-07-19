#include<stdio.h>
#include<limits.h>

//Mergesort

int array[] = {-13, 2, -27, 7, 1, 5, 35,-2};


int mergeSort(int left,int right)
{
    int mid;

    if(left < right)
    {
        mid = (left + right) / 2;
        mergeSort(left, mid);
        mergeSort(mid + 1, right);
        merge(left, mid, right);
    }
}

int merge(int left, int mid, int right)
{
    int table[8];
    int i = left;
    int j = mid+1;
    int k = 0;


    while(i <= mid && j <= right){
        if(array[i] > array[j])
            table[k++] = array[j++];
        else
            table[k++] = array[i++];

   // printf("%d %d %d\n",i ,j ,mid);
    }
    if(i==mid+1)
         for(j; j<=right; j++){
            printf("\n1: %d",array[j]);
            table[k++] = array[j];
         }

    if(j==right+1)
        for(i; i<=mid; i++){
            printf("\n2: %d",array[i]);
            table[k++]=array[i];
        }

    k=0;

    for(i=left; i<=right; i++){
        array[i]=table[k++];
    }
}

int main()
{

    int i;
    printf("\nNo sorting array: ");
    for(i=0; i<8; i++)
        printf("%3d",array[i]);

        mergeSort(0,7);
        printf("\n\nSorting array: ");

    for(i=0; i<8; i++)
        printf("%3d",array[i]);

        printf("\n");



    return 0;
}

