#include<stdio.h>
#include<string.h>

struct trvl{
    char name[70];
    char DL[150];
    char route[150];
    char kms[4];
};
struct trvl n1,n2,n3;

int main(){
    printf("Welcome to Travel Agency\nPlease enter your details\n");
    
        
        
    printf("Please Enter your details Driver no.1\n");
    printf("Your name:");
    gets(n1.name);
    printf("Your DL no.:");
    gets(n1.DL);
    printf("Enter your route:");
    gets(n1.route);
    printf("Enter total kilometers covered in jouney:");
    gets(n1.kms);


    printf("************ Printing infromation of drivers ***********\n");
    printf("For driver no.1\nName is %s\n",n1.name);
    printf("DL no. is %s\n",n1.DL);
    printf("route is %s\n",n1.route);
    printf("kms are %s\n",n1.kms);

 
    

    
    
    
    

    
    return 0;
}