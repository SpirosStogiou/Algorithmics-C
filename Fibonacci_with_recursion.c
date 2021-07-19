//Spyros Stogiou 

#include <stdio.h>


int fib(int x){
    if(x==0) return 0;
    if(x==1) return 1;

    return fib(x-1)+fib(x-2);

}

int main(){
    int number;

    printf("Give a number:");
    scanf("%d",&number);

    printf("Fibonacci number is : %d",fib(number));

    return 0;
}
