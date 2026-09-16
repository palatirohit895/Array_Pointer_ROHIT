#include "stdio.h"
int main(){
int sensor[6] = {25, 40, 32, 55, 28, 42};
int *p = sensor;
int max=*p;
for(int i =0;i<6;i++){
    if(max<*(p+i))
    max=*(p+i);
}
printf("maximum=%d",max);



}