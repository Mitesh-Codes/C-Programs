#include<stdio.h>

int main(){
    
    // label:
    //    printf("we are in label");
    //    goto end;
    
    // printf("Hello");
    
    // goto label;
   
    // end:
    //   printf("We are at end");
    
    int num;
    for (int i = 0; i < 8; i++){
        printf("%d\n",i);
        for(int j=0; j<8;j++){
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d",&num);
            if(num==0){
                goto end;
            }
        }
    }
    end:


    //Typecasting
    
    int a=3;
    float b=(float)54/5;
    printf("The value of a is %f\n",b);
    return 0;

    return 0;
}