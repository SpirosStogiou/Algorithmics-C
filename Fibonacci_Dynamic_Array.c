//Spyros Stogiou
#include <stdio.h>
void fib(int number){
   int i,array[30];
   array[0]=0;
   array[1]=1;


    for(i=2; i<=30; i++){
        array[i]=array[i-1]+array[i-2];
    }

      for(i=0; i<=number; i++){
        printf("%2d ",array[i]);
    }
}

int main()
{

    int number;

    printf("Give a number:");
    scanf("%d",&number);

    fib(number);

    return 0;
}
