#include<stdio.h>

int main(){
    int test = 0;
    int *ptr;
    ptr = &test;
    printf("The address of test variable is at: %p\n", &test);

    return 0;
}