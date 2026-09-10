#include "stdio.h"
void basic_pointers(void)
{
    int x=10;
    int *p=&x;
    printf("%d\n",x);   //value
    printf("%p\n",&x);//adress
    printf("%p\n",(void*)p);// address stored in p
    printf("%d\n",*p);// dereferencing to get actuval value stored at p
}
void arthnatic_pointer(void)
{
    int arr[4]={10,20,30,40};
    int *p=arr;
    printf("arr[0] = %d\n", *p);
    printf("arr[1] = %d\n", *(p + 1));
    p++;
    printf("%d\n",*p);


}
void pointer_to_pointer(void)
{
    int x=10;
    int *p=&x;
    int **pp=&p;//pointer stroing another pointer address
    printf("x     = %d\n", x);// value
    printf("*p    = %d\n", *p);
    printf("**pp  = %d\n", **pp);
    **pp=60;
    printf("%d\n",x);
}

//array pointers
void array_pointer(void)
{
    int arr[4]={10,20,30,40};
    int *p=arr;// poniter p storing 1st element address
    printf(" value of first ele=%d\n",*p);
    printf(" address of first ele=%p\n",p);
    printf(" adding 1 =%d\n",*p+1); //here 1 adds to 2nd element
    printf("moving next elemnet=%d\n",*(p+1));//moving elements


}
//arrray traverersing
void array_looping(void)
{ 
    int arr[4]={10,20,30,40};
    int *p=arr;
    for(int i=0;i<4;i++)
    {
        printf("array looping=%d\n",arr[i]);//its prints all elements


    }

}
//pointer to array
//2d arrays
void pointer_to_array(void)
{
    int arr[2][3]={{10,20,30},{40,50,60}};
    int (*p)[3]=arr;//pointer to an array of 3 integers

    printf("%d\n",arr[0][1]);
    printf("%d\n",*(*(p)+2));

}
//array of pointers
//here
void array_of_pointers(void)
{
    int a =10;
    int b=20;
    int c=30;
    int *p[3]={&a,&b,&c};
    printf("%d\n",*p[0]);
    printf("%d\n",*p[1]);
    printf("%d\n",*p[1]);

}






int main(){
    basic_pointers();
    arthnatic_pointer();
    pointer_to_pointer();
    array_pointer();
    array_looping();
    pointer_to_array();
    array_of_pointers();

}