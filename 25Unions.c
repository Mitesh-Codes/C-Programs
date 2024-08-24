#include<stdio.h>

union student{
    char a;
    int id;
    float marks;
};
int main(){
    
    union student s1;
    s1.a='a';
    s1.marks=45;
    s1.id=4;

    printf("The char is %c\n",s1.a);
    printf("tje %f\n",s1.marks);
    printf("jd %d\n",s1.id);
    
    
    return 0;
}