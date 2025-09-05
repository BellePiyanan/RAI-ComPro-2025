#include<stdio.h>

int main(){

    int i;
    struct profile{
        char name[50];
        char surname[50];
        int age;
        float score;
    } s[3];

    for(i=0;i<3;i++){
        int x=i+1;
        printf("Student %d 's name: ", x);
        scanf("%s %s", s[i].name, s[i].surname);
        printf("Student %d 's age: ", x);
        scanf("%d", &s[i].age);
        printf("Student %d 's score: ", x);
        scanf("%f", &s[i].score);
    }
    printf("\n");

    for(i=0;i<3;i++){
        int x=1+i;
        printf("Student %d name is \"%s %s\", age %d.\n", x, s[i].name, s[i].surname, s[i].age);
    }





    return 0;
}