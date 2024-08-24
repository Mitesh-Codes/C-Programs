#include<stdio.h>
#include<string.h>
void printstr(char str[]){
//    int i=0;
//    while(str[i]!='\0'){
//     printf("%c",str[i]);
//     i++;
//    }
    int j=strlen(str);
    for (int i = 0; i <j; i++)
    {
        printf("%c",str[i]);
    }
    
    
}

int main(){
    
    //char str[]={'M','i','t','e','s','h','\0'};
    //char str[]="Mitesh";

    // char str[7];
    // gets(str);   //To take a String input
    // puts(str);
    // printstr(str);
    
    
    return 0;
}