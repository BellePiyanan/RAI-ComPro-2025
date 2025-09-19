#include<stdio.h>

float cir(float rad){
    float c;
    c = 2 * 22.00/7.00 * rad;
    return c;

}

float area(float radias){
    float a;
    a = 22.00/7.00 * radias * radias;
    return a;
}


int main(){
    float r;

    printf("Enter the radius in cm: ");
    scanf("%f", &r);

    printf("Circumference of the Circle = %.2f\n", cir(r));
    printf("Area of the Circle = %.2f\n", area(r));

    return 0;
}

