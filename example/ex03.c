#include<stdio.h>

int main(){
    float radius, pi, area, lenght, resistivity, R_value;
    pi = 22/7; // pi = 3.14;
    printf("Enter Radius of Resistor      : ");
    scanf("%f", &radius);
    printf("Enter Lenght of Resistor      : ");
    scanf("%f", &lenght);
    printf("Enter Resistivity of Resistor : ");
    scanf("%f", &resistivity);
    area = pi*radius*radius;
    R_value = resistivity*lenght/area;
    printf("The value of this resistor = %0.2f\n", R_value);

    return 0;
}