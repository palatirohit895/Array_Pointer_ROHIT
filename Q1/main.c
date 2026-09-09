#include "stdio.h"
int main(){
    int adc[5] = {120, 125, 130, 128, 132};
    int max=adc[0];
    int min=adc[0];
    for(int i=0; i<5; i++){
        if(max<adc[i]){
            max=adc[i];
           // printf("%d\n",max);
        }
        //printf("%d\n",max);
    }
    printf("printing maximum=%d\n",max);
    for(int i=0; i<5; i++){
        if(max>adc[i]){
            max=adc[i];
        }
    printf("%d\n",adc[i]);
    }
     printf("printing minimum=%d\n",max);
     

    
}
