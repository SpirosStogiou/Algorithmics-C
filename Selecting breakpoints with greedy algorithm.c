#include <stdio.h>

int break_point(int apos,int cap, int st[]) {
    int dist_covered=0;
    int i=0;
    int dp=cap;
    int stath[5]= {0,0,0,0,0};
    int plithos=0;

    if(st[0]>cap)
        return -1;

    dp=dp-st[0];

    while((dist_covered<apos)&&(i<4)) {
        dist_covered=st[i];

        if(st[i+1]-st[i]>cap)
            return -1;

        if(st[i+1]-st[i]>dp) {
            dp=cap;
            plithos++;
            stath[i]=1;
        }

        dp=dp-(st[i+1]-st[i]);
        i++;

    }

    dist_covered=st[i];


    if(apos-st[i]>dp) {
        if(apos-dist_covered>cap)
            return -1;
        plithos++;
        stath[i]=1;

    }

    int j;

    for(j=0; j<5; j++)
        printf("%d\n",stath[j]);

    return plithos;



}


int main() {
    int apostasi=600;
    int capacity=200;
    int stations[5]= {150,270,350,500,570};

    printf("%d",break_point(apostasi,capacity,stations));

}

