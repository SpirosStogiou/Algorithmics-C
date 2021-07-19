#include <stdio.h>

int A[]={2,20,6,4,5};



int main(){ // int A[]={2,20,6,4,5};
   int count =divide(0,4);
   printf("count swap: %d\n",count);
  int k;
  for(k=0;k<5;k++)
      printf("%d\n",A[k]);
}
int divide(int left,int right)
{
    int mid;
    int count=0;
    if(left<right)
    {
        mid=(left+right)/2;
        count=  divide(left,mid);
        count+= divide(mid+1,right);
        count+= merge(left,mid+1,right);
    }
    return count;
}


int merge(int left ,int  mid,int right){
   int table[5];
   int i=left;
   int j=mid;
   int k=0,count=0;

   while(i<=mid-1 && j<=right) {
    if(A[i]>A[j])
        {table[k++]=A[j++];
        count+=(mid-i);}
    else
        table[k++]=A[i++];

    }


        for(j;j<=right;j++)
         table[k++]=A[j];

        for(i;i<mid;i++)
          table[k++]=A[i];


    k=0;

    for(i=left;i<=right;i++)
        A[i]=table[k++];


     return count;

  }
