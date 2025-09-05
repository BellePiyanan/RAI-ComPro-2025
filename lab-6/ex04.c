#include<stdio.h>

int main(){

    int i;
    struct Vector{
        float x;
        float y;
    } v[2];

    for(i=0;i<2;i++){
        int s=i+1;
        printf("x%d: ", s);
        scanf("%f", &v[i].x);
        printf("y%d: ", s);
        scanf("%f", &v[i].y);
    }

    float sumx, sumy;

    sumx = v[0].x + v[1].x;
    sumy = v[0].y + v[1].y;

    printf("Resultant vector is equvalence to %.1fi + %.1fj\n", sumx, sumy);

    return 0;
}