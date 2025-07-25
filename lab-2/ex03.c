#include<stdio.h>

int main(){
    char name[20];
    int age, weight;
    float height;
    char gender[2];
    char edu[20];
    printf("Enter your Name : ");
    scanf("%s", name);
    printf("Enter your Age : ");
    scanf("%d", &age);
    printf("Enter your height : ");
    scanf("%f", &height);
    printf("Enter your weight : ");
    scanf("%d", &weight);
    printf("Enter your gender : ");
    scanf("%s", gender);
    printf("Enter your Education Qualification : ");
    scanf(" %[^\n]", edu);
    printf("\nName : %s", name);
    printf("\nAge : %d", age);
    printf("\nGender : %s", gender);
    printf("\nHeight : %f", height);
    printf("\nWeight : %d", weight);
    printf("\nEducation : %s\n", edu);
    return 0;
}