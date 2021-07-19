#include <stdio.h>
#include <stdio.h>

int knapsack(int n,float w[],float v[],float cap);

int main() {
    int n=15,i,j;
    float capacity=7.0;
    float w[n],v[n],r[n];
    for(i=0; i<n; i++) {
        printf("Give v,w: ");
        scanf("%f %f",&v[i],&w[i]);
    }
    for(i=0; i<n; i++) {
        r[i]=v[i]/w[i];
    }
    for(i=0; i<n; i++) {
        for(j=i; j<n; j++) {
            if(r[i]<r[j]) {
                float temp=r[i];
                r[i]=r[j];
                r[j]=temp;

                temp=w[i];
                w[i]=w[j];
                w[j]=temp;

                temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
    knapsack(n,w,v,capacity);
    return 0;
}

int knapsack(int n,float w[],float v[],float cap) {
    float x[n],u=cap,total_profit=0.0;
    int i;
    for(i=0; i<n; i++) {
        x[i]=0.0;
    }
    for(i=0; i<n; i++) {
        if(w[i]>u) {
            break;
        } else {
            x[i]=1.0;
            total_profit+=v[i];
            u-=w[i];
        }
    }
    printf("%f %f ",u, w[i]);

    if(i<n) {
        x[i]=u/w[i];
    }
    total_profit+=x[i]*v[i];
    for(i=0; i<n; i++) {
        printf("%f ",x[i]);
    }
    printf("\n%f",total_profit);

}
