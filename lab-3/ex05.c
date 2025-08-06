#include<stdio.h>

int main(){
    float volume, radius, height;
    float pi =3.14159265359;

    printf("Enter cone height : ");
    scanf("%f", &height);
    printf("Enter cone base radius : ");
    scanf("%f", &radius);

    volume = (pi*radius*radius*height) / 3;

    printf("Cone volume : %.1f\n", volume);

    if(volume<260){
        printf("This cone is perfect for Supun project.\n");
    }else{
        printf("This cone is not perfect for Supun project.\n");
    }
    return 0;
}