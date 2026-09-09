#include "stdio.h"
int main(){
    int temperature[10] = {25, 27, 30, 28, 95, 31, 29, 26, 24, 100};
    for(int i=0;i<10;i++){
        if(temperature[i]>20 && temperature[i]<80){
            //printf("no faults%d\n",temperature[i]);
        }
        else{
        printf("fault detected%d\n",temperature[i]);}



}
}
