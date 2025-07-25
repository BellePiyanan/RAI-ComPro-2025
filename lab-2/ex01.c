#include<stdio.h>

int main(){
    int int1;
    float float1;
    char ch1[1];
    printf("Please enter an integer value : ");
    scanf("%d", &int1);
    printf("You entered %d", int1);

    printf("\nPlease enter a float value : ");
    scanf("%f", &float1);
    printf("You entered %.1f", float1);

    printf("\nPlease enter a character : ");
    scanf("%s", ch1);
    printf("You entered %s\n", ch1);

    return 0;
}