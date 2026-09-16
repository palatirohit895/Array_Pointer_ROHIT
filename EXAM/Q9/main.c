#include "stdio.h"
int main(){
unsigned char rx_buffer[8] = {10, 20, 10, 30, 10, 40, 50, 10};
int count=0;
for(int i =0;i<8;i++){
    if(rx_buffer[i]==10)
    count++;

}
printf("%d",count);

}