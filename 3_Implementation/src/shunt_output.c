#include "fun.h"

int shunt_output(float t, float speed, float eb, int n){
    
    float *ptr;
    ptr = (float*) calloc(n,sizeof(float));
    
    printf("torque    | current\n");
    printf("----------|----------\n");
    
    for( int j=1; j<=n; j++){
        *ptr = (t*j*2*3.142*speed)/eb;
        printf("%f  | %f \n",j*t,*ptr);
        printf("----------|--------\n");
        
        ptr++;
        
    }

    return 0;

}