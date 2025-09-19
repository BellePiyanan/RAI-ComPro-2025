#include<stdio.h>
#include<string.h>

int vowel(char str[]){
    int v=0;

    for(int i=0; str[i]; i++){
        char c=str[i];
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            v++;
        }
    }
    return v;
}

int main(){

    char str[100];
    printf("Input: ");
    scanf("%[^\n]*c", str);
    printf("Number of vowels: %d\n", vowel(str));

    return 0;
}