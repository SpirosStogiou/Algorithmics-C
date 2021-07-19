//Spyros Stogiou

#include <stdio.h>
void fib(){
    int array[3];
    int i,number;

    array[0]=0;
    array[1]=1;

    printf("Give a number::");
    scanf("%d",&number);

    for(i=2; i<=number; i++)
    {
        printf("i: %d, imod3: %d, number %d\n", i,i%3,array[(i-1)%3] + array[(i-2)%3]);
        array[i%3]=array[(i-1)%3] + array[(i-2)%3];
    }

    printf("The fibonacci number is : %d",array[(i-1)%3]);

}

int main()
{
  fib();
}

