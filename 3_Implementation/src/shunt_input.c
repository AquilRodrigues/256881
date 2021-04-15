#include "fun.h"

void shunt_input(){
    typedef struct shunt{
        int pole;
        float flux;
        int z;
        int a;
        float voltage;
        float power;
        int speed;
        
    }sh;
    sh s;
    
    float t,maxtq;
    float eb;
    int n;
    printf("entre number of poles");
    scanf("%d",&s.pole);
    printf("entre flux per pole");
    scanf("%f",&s.flux);
    printf("entre number of conductors");
    scanf("%d",&s.z);
    printf("entre armature parallel path");
    scanf("%d",&s.a);
    printf("entre rated volatage");
    scanf("%f",&s.voltage);
    printf("entre rated power of machine");
    scanf("%f",&s.power);
    printf("entre rated speed");
    scanf("%d",&s.speed);
    printf("entre number of division of torque to calculate current for each");
    scanf("%d",&n);
     
    
    maxtq= (s.power*1000)/(2*3.142*s.speed);
    
    t=maxtq/n;
     

    eb=(s.pole*s.flux*s.z*s.speed)/(60*s.a);
    

      shunt_output(t,s.speed,eb,n);
     
}

