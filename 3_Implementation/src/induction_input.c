#include "fun.h"
void induction_input(){
    typedef struct induction{
        int pole;  
        float voltage;
        float power;
        float slip;
        float freq;
        float pf;
        
    }ac;
    ac m;
    
    float t,ratedtq,speed;
    int n;
    printf("entre number of poles");
    scanf("%d",&m.pole);          
    printf("entre rated volatage");
    scanf("%f",&m.voltage);
    printf("entre rated power of machine");
    scanf("%f",&m.power);
    printf("entre rated speed");
    scanf("%f",&m.slip);
    printf("entre the line frequency");
    scanf("%f",&m.freq);
    printf("entre number of division of torque to calculate current for each");
    scanf("%d",&n);

    speed=(120*(m.freq))/(m.pole);
     
   
    ratedtq= (9550*m.power)/(speed);
    t=ratedtq/n;

     induction_output(t,speed,m.pf,m.voltage,n);
    
    
}