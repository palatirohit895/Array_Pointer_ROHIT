#include "stdio.h"
int main(){
int config[4] = {10, 20, 30, 40};
int *p = config;
for(int i =0;i<4;i++)
{
    printf("adding 5 =%d\n",*(p+i)+5);

}
}