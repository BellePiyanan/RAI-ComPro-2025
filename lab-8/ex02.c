#include<stdio.h>

int prime(int start, int end){
    for(int num= start; num<=end; num++){
        if(num<=1) continue;
        int p=1;
        for (int i = 2; i < num; i++) {
            if (num % i == 0){
                p=0;
                break;
            }
        }       
        if(p == 1){
            printf("%d ", num);
        }
    }
}

int main(){
    int s, e;
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &s, &e);

    printf("The prime numbers within the intervals are: ");
    prime(s, e);
    printf("\n");

    return 0;
}