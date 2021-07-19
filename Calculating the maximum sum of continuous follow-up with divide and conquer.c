#include<stdio.h>
#include<limits.h>

int A[] = { -2 , 1, -3, 4, -1, 2, 1, -5, 4};

int divide(int l, int r){
    if (l == r)
        return A[l];

    int m = (l + r) / 2;

    return max3(divide(l,m), divide(m+1, r), subSum(l,r,m));
}
int subSum(int l, int r, int m){
    int Sum1 = 0;
    int Sum2 = 0;
    int lmax = INT_MIN;
    int rmax = INT_MIN;
    int i=0;

    for (i = 0; i <= m; i++){
        Sum1 += A[i];
        if (Sum1 > lmax){
            lmax = Sum1;
        }
    }


    for (i = r; i > m; i--){
        Sum2 += A[i];
        if (Sum2 > rmax){
            rmax = Sum2;
        }
    }

    return lmax + rmax;
}
int max (int a, int b){
    return a>b?a:b;
}

int max3(int a, int b, int c){
    return max(max(a,b),c);
}

int main(){
    printf("%d", divide(0,8));

    return 0;
}


