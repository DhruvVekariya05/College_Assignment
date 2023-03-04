#include<stdio.h>

struct player {
    char name[50];
    int runs_scored;
};

int main() {
    int n, i, total_runs=0;
    
    printf("Enter the number of players: ");
    scanf("%d", &n);
    struct player p[n];
    for(i=0; i<n; i++) {
        printf("Enter the name of player %d: ", i+1);
        scanf("%s", p[i].name);
        printf("Enter the runs scored by player %d: ", i+1);
        scanf("%d", &p[i].runs_scored);
        total_runs += p[i].runs_scored;
    }
    printf("\nTotal runs scored by the cricket team: %d", total_runs);
    
    return 0;
}