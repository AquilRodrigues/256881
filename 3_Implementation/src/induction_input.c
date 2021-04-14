#include "fun.h"
void induction_input(){
    typedef struct induction{
        int pole;  
        float voltage;
        float power;
        int slip;
        float freq;
        float pf;
        
    }ac;
    ac m;
    
    float n,t,i,ratedtq,speed;
    float *ptr;
    printf("entre number of poles");
    scanf("%d",&m.pole);          
    printf("entre rated volatage");
    scanf("%d",&m.voltage);
    printf("entre rated power of machine");
    scanf("%d",&m.power);
    printf("entre rated speed");
    scanf("%d",&m.slip);
    printf("entre the line frequency");
    scanf("%d",&m.freq);
    printf("entre number of division of torque to calculate current for each");
    scanf("%d",&n);

    speed=(120*(m.freq))/(m.pole);
     
   
    ratedtq= (9550*m.power)/(speed);
    t=ratedtq/n;

     induction_output(t,speed,m.pf,m.voltage,n);
    
    
}