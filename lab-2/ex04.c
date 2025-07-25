#include<stdio.h>

int main(){
    char name[20];
    int id;
    float score1, score2, score3, gpa;

    printf("Enter your Name : ");
    scanf("%s", name);
    printf("Enter your student ID : ");
    scanf("%d", &id);
    printf("Enter your Programming score : ");
    scanf("%f", &score1);
    printf("Enter your Physics score : ");
    scanf("%f", &score2);
    printf("Enter your Calculus score : ");
    scanf("%f", &score3);

    gpa = (score1 + score2 + score3) / 3;

    printf("\nHi %s(%d)! Your GPA is %.2f\n", name, id, gpa);
    
    return 0;
}