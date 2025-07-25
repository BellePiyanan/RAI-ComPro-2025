#include<stdio.h>

int main(){

    int minute;
    printf("Enter total minutes : ");
    scanf("%d", &minute);

    int hour;
    int min;

    hour = minute /60;
    min = minute % 60;

    printf("%d minutes is %d hour(s) and %d minute(s)\n", minute, hour, min);

    return 0;
}