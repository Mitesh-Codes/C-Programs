#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
void star(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}

int takenumber(){
    int i;
    scanf("%d",&i);
    return i+1;
}

void name(){
    printf("Mitesh");
}

int main(){

    int a,b,c;
    a=56;
    b=56;
    c=sum(a,b);
    //printf("%d",c);
    //star(6);
    //c=takenumber();
    //printf("%d",c);
    name();
    
    return 0;
}