#include<stdio.h>
#include<string.h>

struct Student
{
    int rollno;
    char name[5];
    float marks;
};
struct Student class1,class2;


int main(){
    
    
    // class1.rollno=13;
    // strcpy(class1.name,"Ravi");
    // class1.marks=45.31;
    // printf("Name=%s Rollno=%d Marks=%5.2f",class1.name,class1.rollno,class1.marks);

 //Typedef
    typedef int integer;
    integer a1=45;

    typedef int* intt;
    intt a,b;
    int c=76;
    a=&c;
    b=&c;

    
    return 0;
}