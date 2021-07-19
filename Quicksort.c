#include <stdio.h>



int quickSort(int array[],int start,int finish)
{
    int i,j,pivot,temp;

    if(start<finish)
    {
        pivot=start;
        i=start;
        j=finish;
          printf("\n");
        int x=0;
         for(x=0; x<=9; x++)
       {
        printf("%3d",array[x]);
       }
        printf("\n");


        while(i<j)
        {
            while(array[i]<=array[pivot] && i<finish)
                i++;
            while(array[j]>array[pivot])
                j--;
            if(i<j)
            {
                temp = array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
         printf("\n");
       // int x=0;
         for(x=0; x<=9; x++)
       {
        printf("%3d",array[x]);
       }
        printf("\n");

        temp=array[pivot];
        array[pivot]=array[j];
        array[j]=temp;

        quickSort(array,start,j-1);
        quickSort(array,j+1,finish);

    }


}


int main()
{
    int array[]= {18,7,4,11,9,20,6,1,22,19};
    quickSort(array,0,9);
    int i;
    for(i=0; i<=9; i++)
    {
        printf("%3d",array[i]);
    }

}

