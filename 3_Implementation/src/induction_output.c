#include "fun.h"
/**
 * @brief 
 * parameters are used to calculate torque vs current.
 * 
 * @param t 
 * @param speed 
 * @param pf 
 * @param voltage 
 * @param n 
 * @return int 
 */
int induction_output(float t, float speed, float pf, float voltage, int n){
    
    float *ptr;

     ptr = (float*) calloc(n,sizeof(float));

    printf("torque    | current\n");
    printf("----------|----------\n");
    
    for(int j=1; j<=n; j++){

        *ptr= (n*t*2*3.142*speed)/(voltage*pf);
     
        printf("%f  |  %f \n",t*j, *ptr);
        printf("----------|--------\n");
        
        ptr++;
        
    }



 return 0;

}