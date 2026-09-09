#include "stdio.h"
int main(){
    int voltage[10] = {12, 13, 12, 14, 15, 13, 16, 12, 17, 13};
    //count over voltage
    int count=0;
    for(int i=0; i<10;i++)
    {
        if(voltage[i]>14){
        //printf("%d\n",voltage[i]);
        count++;

        }
       // printf("%d\n",count);

    }
     printf("Number of over-voltage conditions=%d\n",count);
}


