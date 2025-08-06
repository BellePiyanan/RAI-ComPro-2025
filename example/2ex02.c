#include<stdio.h>

int main(){
    char first[20], last[20];
    int score1, score3;
    float score2;


    printf("Enter your name : ");
    scanf("%s %s", first, last);

    printf("Enter your Programming score : ");
    scanf("%d", &score1);
    printf("Enter your Drawing score : ");
    scanf("%f", &score2);
    printf("Enter your Physics score : ");
    scanf("%d", &score3);

    float avg;
    avg = (score1 + score2 + score3) / 3;

    printf("\nName : %s %s", first, last);
    printf("\nAVG score : %.2f\n", avg);

    return 0;
}