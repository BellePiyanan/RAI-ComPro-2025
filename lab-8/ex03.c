#include<stdio.h>

int sos(int c, int d){
    int sum1 = c*c;
    int sum2 = d*d;
    int sum = sum1 + sum2;
    return sum;
}

int main(){
    int a, b;
    printf("Enter the two integers: ");
    scanf("%d %d", &a, &b);

    printf("Sum of squares of %d and %d is %d\n", a, b, sos(a, b));

    return 0;
}