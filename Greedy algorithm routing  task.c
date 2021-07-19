#include <stdio.h>

struct activity {
    char id[5];
    int start;
    int finish;
};

void activitySelection(struct activity activities[],int n) {
    int i,j;
    struct activity temp;

    for(i=0; i<n; i++) {
        for(j=0; j<n-1; j++) {
            if(activities[j].finish>=activities[j+1].finish) {
                temp=activities[j];
                activities[j]=activities[j+1];
                activities[j+1]=temp;

            }
        }
    }
    printf("id:%s\nStart:%d\nFinish:%d\n\n",activities[0].id,activities[0].start,activities[0].finish);
    i=0;
    for(j=1; j<n; j++) {
        if(activities[j].start>=activities[i].finish){
            printf("id:%s\nStart:%d\nFinish:%d\n\n",activities[j].id,activities[j].start,activities[j].finish);
            i=j;
        }
    }
}

int main() {
    struct activity activities[8]= {{"act1",1,3},{"act2",1,2},{"act3",0,1},{"act4",3,4},{"act5",4,6},{"act6",2,4},{"act7",4,5},{"act8",4,6}};

    int n=8;

    activitySelection(activities,n);
    return 0;

}
