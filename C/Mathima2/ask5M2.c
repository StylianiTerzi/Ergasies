#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct player{
    char name[50];
    int age;
    int total_games;
    int* goals;
    int goals_sum;
}PLAYER;

void player_data(PLAYER* player, char* name, int age, int total_games){
    strcpy(player->name, name);
    player->age = age;
    player->total_games = total_games;
    player->goals_sum = 0;

}

void goals(PLAYER* player, int N){
    player->goals_sum = N;
    player->goals = (int*) malloc(N * sizeof(int));
    printf("Dwse ta goals tou paikth %s se kathe paixnidi: \n", player->name);
    for(int i=0; i<N; i++){
        printf("Goals paixnidiou %d: ", i+1);
        scanf("%d", &player->goals[i]);
    }

}

void statistika(PLAYER player[],int N){
    printf("Statistika paikthwn: \n");
    for(int i=0;i<N;i++){
        printf("Onoma: %s\n",player[i].name);
        printf("Hlikia: %d\n",player[i].age);
        printf("Synolo paixnidion: %d\n",player[i].total_games);
        printf("Synolo goals: %d\n",player[i].goals_sum);
        printf("\n");
    }
    int total=0;
    int max=0;
    for(int i=0;i<N;i++){
        total+=player[i].goals_sum;
        if(player[i].goals_sum>max){
            max=player[i].goals_sum;
        }
    }
    float average=(float)total/N;
    printf("Mesos oros goals ana paikth: %.2f\n",average);
    printf("Synolo goals olwn twn paikthwn: %d\n",total);
    printf("O megistos arithmos goals einai: %d\n",max);
}

int main(){
    PLAYER* player;
    printf("player 1\n");
    char name1[50];
    int age1, total_games1, goals_sum1;
    printf("Dwse to onoma tou paikth 1: ");
    scanf("%s", name1);
    printf("Dwse thn hlikia tou paikth 1: ");
    scanf("%d", &age1);
    printf("Dwse to synolo paixnidion tou paikth 1: ");
    scanf("%d", &total_games1);
    player_data(&player[0], name1, age1, total_games1);
    printf("posoys agwnes ekane o paikth 1: ");
    scanf("%d", &goals_sum1);
    goals(&player[0], goals_sum1);
    //===============================================================
    printf("player 2\n");
    char name2[50];
    int age2, total_games2, goals_sum2;
    printf("Dwse to onoma tou paikth 2: ");
    scanf("%s", name2);
    printf("Dwse thn hlikia tou paikth 2: ");
    scanf("%d", &age2);
    printf("Dwse to synolo paixnidion tou paikth 2: ");
    scanf("%d", &total_games2);
    player_data(&player[1], name2, age2, total_games2);
    printf("posoys agwnes ekane o paikth 2: ");
    scanf("%d", &goals_sum2);
    goals(&player[1], goals_sum2);
    statistika(player,2);
    return 0;

}