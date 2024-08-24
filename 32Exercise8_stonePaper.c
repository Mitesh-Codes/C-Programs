#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    printf("Enter your name to play this game\n");
    char name[9];
    scanf("%s",&name);
    getchar();
    int hmnscore=0;
    int cmpscore=0;
    for (int i = 0; i < 3; i++){
        srand(time(NULL));
        int cmp=rand()%3; 
        printf("Please choose one of them\n1.Rock\n2.Paper\n3.Scissor\n");
        int hmn;
        scanf("%d",&hmn);
        getchar();
        if (hmn==1)
        {
            printf("You choose rock\n");
        }
        else if (hmn==2)
        {
            printf("You choose Paper\n");
        }
        else if (hmn==3)
        {
            printf("You choose Scissor\n");
        }
        if (cmp==0)
        {
            printf("Computer choose rock\n");
        }
        else if (cmp==1)
        {
            printf("Computer choose Paper\n");
        }
        else if (cmp==2)
        {
            printf("Computer choose Scissor\n");
        }

        if(hmn==1&&cmp==0){
            hmnscore;
            cmpscore;
            printf("Both choose same\nYour score=%d\nComputer score=%d\n",hmnscore,cmpscore);
        }
        if(hmn==1&&cmp==1){
            hmnscore;
            cmpscore=cmpscore+1;
            printf("computer wins\nYour score=%d\nComputer score=%d\n",hmnscore,cmpscore);
        }
        if(hmn==1&&cmp==2){
            hmnscore=hmnscore+1;
            cmpscore;
            printf("You win\nYour score=%d\nComputer score=%d\n",hmnscore,cmpscore);
        }
        if(hmn==2&&cmp==0){
            hmnscore=hmnscore+1;
            cmpscore;
            printf("You win\nYour score=%d\nComputer score=%d\n",hmnscore,cmpscore);
        }
        if(hmn==2&&cmp==1){
            hmnscore;
            cmpscore;
            printf("Both choose same\nYour score=%d\nComputer score=%d\n",hmnscore,cmpscore);
        }
        if(hmn==2&&cmp==2){
            hmnscore;
            cmpscore=cmpscore+1;
            printf("computer wins\nYour score=%d\nComputer score=%d\n",hmnscore,cmpscore);
        }
        if(hmn==3&&cmp==0){
            hmnscore;
            cmpscore=cmpscore+1;
            printf("computer wins\nYour score=%d\nComputer score=%d\n",hmnscore,cmpscore);
        }
        if(hmn==3&&cmp==1){
            hmnscore=hmnscore+1;
            cmpscore;
            printf("You win\nYour score=%d\nComputer score=%d\n",hmnscore,cmpscore);
        }
        if(hmn==3&&cmp==2){
            hmnscore;
            cmpscore;
            printf("Both choose same\nYour score=%d\nComputer score=%d\n",hmnscore,cmpscore);
        }
    }
    if(hmnscore>cmpscore){
        printf("\n\n%s WINS\n",name);
    }
    else if(hmnscore<cmpscore){
        printf("\n\nComputer wins\n");
    }
    else{
        printf("\n\nYou both have same score\n");
    }
    return 0;
}