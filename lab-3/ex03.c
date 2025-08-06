#include<stdio.h>

int main(){
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);

    switch(num<100 && num>0){
        case 1:
            switch(num%2 == 0){
                case 1:
                    printf("%d is even.\n", num);
                    break;
                default:
                    printf("%d is odd.\n", num);
                    break;
            }
        break;
    default:
            printf("%d is not in range\n", num);
            break;
    }

    return 0;
}