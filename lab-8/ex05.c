#include<stdio.h>

int oddeven(int n, int num[n]){
    int even=0, odd=0;
    for(int i=0; i<n; i++){
        if(num[i] % 2 == 0){
            even = even + num[i];
        }else{
            odd = odd +num[i];
        }
    }
    printf("Sum of even number: %d\n", even);
    printf("Sum of odd number: %d\n", odd);
}

int main(){
    int n;
    printf("Input n : ");
    scanf("%d", &n);

    int num[n];

    for(int i=0; i<n; i++){
        printf("Input num%d : ", i+1);
        scanf("%d", &num[i]);
    }
    oddeven(n, num);

    return 0;
}