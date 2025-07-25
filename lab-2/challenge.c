#include<stdio.h>
int main(){
    int int1, int2, int3;
    printf("Enter integer1: ");
    scanf("%d", &int1);
    printf("Enter integer2: ");
    scanf("%d", &int2);
    printf("Enter integer3: ");
    scanf("%d", &int3);
    if(int1 > int2 && int1 > int3 && int2 > int3){
        printf("Minimum : %d\n", int3);
        printf("Maximum : %d\n", int1);
    }else if(int1 > int2 && int1 > int3 && int2 < int3){
        printf("Minimum : %d\n", int2);
        printf("Maximum : %d\n", int1);
    }else if(int2 > int1 && int2 > int3 && int1 > int3){
        printf("Minimum : %d\n", int3);
        printf("Maximum : %d\n", int2);
    }else if(int2 > int1 && int2 > int3 && int1 < int3){
        printf("Minimum : %d\n", int1);
        printf("Maximum : %d\n", int2);
    }else if(int3 > int1 && int3 > int2 && int1 > int2){
        printf("Minimum : %d\n", int2);
        printf("Maximum : %d\n", int3);
    }else if(int3 > int1 && int3 > int2 && int1 < int2){
        printf("Minimum : %d\n", int1);
        printf("Maximum : %d\n", int3);
    }   
    int sum = int1 + int2 + int3;
    float avg = sum / 3.00;
    printf("Sum : %d\n", sum);
    printf("Average : %.2f\n", avg);

    return 0;
}