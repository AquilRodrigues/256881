
#include "fun.h"

int main(){
    int choice;
    printf("please entre choice of motor\n 1 for DC series\n 2 for DC shunt motor \n 3 for AC single phase:");
    scanf("%d",&choice);
    if(choice==1){
         
         shunt_input();
    }
    else if(choice==2){
         induction_input();
    }
    else if(choice==3){
         induction_input();
    }
    else{
        printf("invalid input");
    }
}

