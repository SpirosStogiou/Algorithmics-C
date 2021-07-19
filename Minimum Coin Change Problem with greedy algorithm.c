
#include <stdio.h>


int poso = 1273;
int coin[]= {1,2,5,10,20,50,100,500};
int table[]= {0,0,0,0,0,0,0,0};

int main()
{
    int i = 8;
    while(poso>0)
    {
        i--;
        table[i] = poso/coin[i];
        poso= poso%coin[i];
        printf("\nPoso :%d\n",poso);
        printf("%d %d\n",table[i],coin[i]);
    }
    for(i=0; i<8; i++){
        printf("The coin is : %d an we take this %d times\n",coin[i],table[i]);
    }
    return 0;

}
