#include<stdio.h>
#define PI 3.14159

int main(){

    // float a=4.23223;
    // printf("%5.5f",a);

    //Constants
    float b=34.54;
    b=34.45;

    printf("%f", PI);
    //PI=3.14359;

    //but
    const float a=34.54;
    //a=34.45; can't
    return 0;
}