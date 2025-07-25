#include<stdio.h>

int main(){
    char first[20], last[20], uni[20];
    int age;
    float height;


    printf("Enter your name : ");
    scanf("%s %s", first, last);
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Enter your height : ");
    scanf("%f", &height);
    printf("Enter your University name : ");
    scanf("%s", uni);

    printf("\nHi! Everyone. This is %c.%s from %s. I am %d years old and my height is %.1f cm tall.\n", last[0], first, uni, age, height);

    return 0;
}