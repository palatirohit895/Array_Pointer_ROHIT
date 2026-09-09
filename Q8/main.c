#include "stdio.h"
int main(){
char uart_rx[10] = "HELLO";
for(int i=0; i<10;i++){
    printf("%c\n",uart_rx[i]);
}



}