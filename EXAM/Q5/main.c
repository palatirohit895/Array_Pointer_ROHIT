#include "stdio.h"
int main(){
int adc[5] = {100, 200, 300, 400, 500};
int *p = adc;
for (int i =0;i<5;i++){
    printf("%d\n",*(p+i));
}




}