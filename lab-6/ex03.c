#include<stdio.h>
#include<math.h>

int main(){

    int i;
    struct coor{
        float x;
        float y;
    } c[2];

    for(i=0;i<2;i++){
        int s=i+1;
        printf("x%d: ", s);
        scanf("%f", &c[i].x);
        printf("y%d: ", s);
        scanf("%f", &c[i].y);
    }

    float d;
    d = sqrt( pow(c[0].x - c[1].x, 2) + pow(c[0].y - c[1].y, 2) );

    printf("Distance between (%.2f, %.2f) and (%.2f, %.2f) is %.3f unit(S).\n", c[0].x, c[0].y, c[1].x, c[1].y, d);


    return 0;
}