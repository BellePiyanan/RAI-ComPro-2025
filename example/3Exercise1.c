#include<stdio.h>

int main(){
    int num1, num2, calculator;

    printf("Enter Num1 : ");
    scanf("%d", &num1);
    printf("Enter Num2 : ");
    scanf("%d", &num2);

    printf("Calculator Menu : 1. +  2. -  3. *  4. /");
    printf("\nChoose calculator : ");
    scanf("%d", &calculator);

    if (calculator == 1){
        int Ans = num1 + num2;
        printf("Answer = %d\n", Ans);
    }else if (calculator == 2){
        int Ans = num1 - num2;
        printf("Answer = %d\n", Ans);
    }else if (calculator == 3){
        int Ans = num1 * num2;
        printf("Answer = %d\n", Ans);
    }else if (calculator == 4){
        float Ans = num1/num2; 
        printf("Answer = %.2f\n", Ans);
    }
   
    return(0);

}