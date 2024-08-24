#include<stdio.h>
#include<string.h>
int main(){
    
    //char s1[]="harah";
    //char s2[]="Mitesh";
    printf("Please Enter a String you want to check for Palindrome:");
    char s1[51];
    gets(s1);
    char s2[51];
    strcpy(s2,s1);
    //char s3[]=strrev(s2);

    


    //printf("the Strcmp for s1,s2 returned %d\n",strcmp(s1,strrev(s1)));
    //puts(strrev(s2));
    int i=strcmp(s1,strrev(s2));
    if(i==0){
        printf("String is Palindrome");
    }
    else{
        printf("String is not a palindrome");
    }
    //char s3[1];
    //puts(strcat(s1,s2));
    //printf("length of s1 is %d",strlen(s1));
    //puts(strrev(s1));
    //strcpy(s3, s2);
    //puts(s3);
    return 0;
}