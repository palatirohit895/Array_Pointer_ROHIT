#include "stdio.h"
int UART_Receive(unsigned char *buffer, int size){
    unsigned char data[]={10 ,20, 30. 40 ,50};
    for (int i=0; i<10;i++){
        buffer[i]=data[i];
    }
return size;



}



int main(){
unsigned char rx[10];
UART_Receive(rx, 5);
}