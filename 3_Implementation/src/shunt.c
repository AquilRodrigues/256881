#include "fun.h"
void shunt(){
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
    
    float t,i,maxtq;
    float *ptr,eb;
    int j,n;
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
     
    ptr = (float*) calloc(n,sizeof(float));
    maxtq= s.power/(2*3.142*s.speed);
    printf("%f",maxtq);
    t=maxtq/n;
     printf("%f",t);

    eb=(s.pole*s.flux*s.z*s.speed)/(60*s.a);
     printf("%f",eb);
     printf("torque | current\n");
    printf("-------|----------\n");
    
    for( j=1; j<=n; j++){
        *ptr = (t*j*2*3.142*s.speed)/eb;
        printf("%f  | %f \n",j*t,*ptr);
        printf("-------|--------\n");
        
        ptr++;
        
    }
}

