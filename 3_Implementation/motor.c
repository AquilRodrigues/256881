
#include "fun.h"

int main(){
     /**
      * @brief 
      * main program to choose the type of motor
      */
    int choice;
    printf("please entre choice of motor\n 1 for DC shunt\n 2 induction motor single phase \n 3 DC series motor   :  ");
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

