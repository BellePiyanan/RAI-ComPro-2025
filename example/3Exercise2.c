#include<stdio.h>

int main(){
    int num1, num2, calculator, Ans;
    printf("Enter Num1 : ");
    scanf("%d", &num1);
    printf("Enter Num2 : ");
    scanf("%d", &num2);
    printf("Calculator Menu : 1. +  2. -  3. *  4. /");
    printf("\nChoose calculator : ");
    scanf("%d", &calculator);

    switch (calculator){
        case 1:
            Ans = num1 + num2;
            printf("Ans : Num1 + Num2 = %d", Ans);
            break;
        case 2:
            Ans = num1 - num2;
            printf("Ans : Num1 - Num2 = %d", Ans);
            break;
        case 3:
            Ans = num1 * num2;
            printf("Ans : Num1 * Num2 = %d", Ans);
            break;            
        case 4:
            Ans = num1 / num2;
            printf("Ans : Num1 / Num2 = %d", Ans);
            break;        
        default:
        break;
    }
    return 0;
}