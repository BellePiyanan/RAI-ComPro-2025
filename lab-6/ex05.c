#include<stdio.h>

int main(){

    int i;
    struct time{
        int minute;
        int second;
    } t[2];

    for(i=0;i<3;i++){
        printf("Time input (m:s) : ");
        scanf("%d:%d", &t[i].minute, &t[i].second);
    }

    int sec=0;

    for(i=0;i<3;i++){
        int ss = t[i].minute * 60 + t[i].second;
        sec=sec+ss;
    }

    printf("Total time elasped: %d second(s)\n", sec);

    return 0;
}