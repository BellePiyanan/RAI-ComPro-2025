#include<stdio.h>

int main(){
    float mcal, mphy, mcp;
    float avg;
    char grade[10], name[20];

    printf("Enter your Name : ");
    scanf("%s", name);
    printf("Enter your Calculus score : ");
    scanf("%f", &mcal);
    printf("Enter your Physics score : ");
    scanf("%f", &mphy);
    printf("Enter your Computer Programming score : ");
    scanf("%f", &mcp);

    avg = (mcal+mphy+mcp)/3;

    if(avg >= 80){
        grade[10] = 'A';
    }else if(avg >= 70 && avg < 80){
        grade[10] = 'B';
    }else if(avg >= 60 && avg < 70){
        grade[10] = 'C';
    }else if(avg >= 50 && avg < 60){
        grade[10] = 'D';
    }else if(avg < 50){
        grade[10] = 'F';
    }

    printf("%s, your average is %.2f. You got grade %c.\n", name, avg, grade[10]);

    return 0;

}