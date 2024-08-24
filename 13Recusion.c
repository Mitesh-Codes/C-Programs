#include<stdio.h>

double factorial(double number){
    if (number==1||number==0){

        return 1;
    }
    else{
        return (number*factorial(number-1));
    }
    
}

int main(){
    
    
    int num;
    
    do{
        printf("Enter the number for factorial or enter -1 to end :");
        
        scanf("%d",&num);
        if(num>170){
          printf("Really nigga!!");
          goto end;
        }
        printf("The factorial of %d is %lf\n",num,factorial(num));
        if (num==-1){
            goto end;
        }
        
        

        
    }while((num<170));
    
    end:
    
    return 0;
}