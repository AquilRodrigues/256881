
#include "fun.h"

int main(){
    int choice;
    printf("please entre choice of motor\n 1 for DC series\n 2 for DC shunt motor \n 3 for AC single phase:");
    scanf("%d",&choice);
    if(choice==1){
         
         shunt();
    }
    else if(choice==2){
         induction();
    }
    else if(choice==3){
         induction();
    }
    else{
        printf("invalid input");
    }
}

