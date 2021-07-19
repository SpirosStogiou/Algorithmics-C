
#include<stdbool.h>
#include<stdio.h>
#define NODE 5
int graph[NODE][NODE];
int path[NODE];

void displayCycle() {
    printf("The Hamilton Cycle : ");

    for (int i = 0; i < NODE; i++)
        printf("%d ", path[i] );
    printf("%d\n", path[0] );
}

bool isValid(int v, int k) {
    if (graph [path[k-1]][v] == 0)
        return false;

    for (int i = 0; i < k; i++)
        if (path[i] == v)
            return false;
    return true;
}

bool cycleFound(int k) {
    if (k == NODE) {
        if (graph[path[k-1]][ path[0] ] == 1 )
            return true;
        else
            return false;
    }

    for (int v = 1; v < NODE; v++) {
        if (isValid(v,k)) {
            path[k] = v;
            if (cycleFound (k+1) == true)
                return true;
            path[k] = -1;
        }
    }
    return false;
}

bool hamiltonianCycle() {
    for (int i = 0; i < NODE; i++)
        path[i] = -1;
    path[0] = 0;

    if ( cycleFound(1) == false ) {
        printf("Sorry friend");
        return false;
    }

    displayCycle();
    return true;
}

int main() {
    int i,j;
    printf( "Enter the Graph : ");
    for (i=0; i<NODE; i++) {
        for (j=0; j<NODE; j++) {
            printf( "Graph G( %d , %d ) \n", (i+1), (j+1));
            scanf("%d", &graph[i][j]);
        }
    }
    printf( "The Graph :\n");
    for (i=0; i<NODE; i++) {
        for (j=0; j<NODE; j++) {
            printf("%d\t", graph [i][j] );
        }
        printf("\n" );
    }
    printf("\n" );

    hamiltonianCycle();
}
