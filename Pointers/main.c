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
    printf(" adding 1 =%d\n",*p+1); //here add 1 to lement
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
//null pointer
//a pointer point to nothing.
void null_pointer(void)
{
    int *p=NULL;
    printf("Address stored in p = %p\n", (void *)p);
    if (p==NULL) printf("p is null pointer\n");



}
// wild pointer
//A wild pointer is a pointer that has not been initialized.
void wild_pointer(void)
{
    int x = 10;
    int *p;
    p=&x;


    printf("this  wild pointer is a pointer that has not been initialized.= %d\n", *p);
}
//dangling point
//it cantain address but but the object at that address has already stopped existing.


    void dangling_pointer(void)
{
    int *p;

    {
        int x = 10;
        p = &x;

        printf("%d\n", *p);
    }

    printf("p is now dangling\n");
}
//void pointer that can hold the address of different data types.
void void_pointer(void)
{
    int x = 10;
    float y = 5.5f;
    char z = 'A';

    void *p;

    p = &x;
    printf("Integer = %d\n", *(int *)p); //using type casting

    p = &y;
    printf("Float = %.1f\n", *(float *)p);

    p = &z;
    printf("Character = %c\n", *(char *)p);
}

//A function pointer stores the address of a function.

int add(int a ,int b)
{
    return a + b;
}
void function_pointer(void)
{
    int (*fp)(int,int);
    fp=add;
     printf("Result = %d\n", fp(10, 20));
}
//pointer with const keyword
void display(const int *p)
{
   // cannot change the value through p.
    printf("%d\n", *p);
   // *p = 50;// cannot change but int p can change
}

//const pointer here we can change value
void cost_ponter(int *const p)
{
    *p=50;
}
void both_const(const int *const p)
{
    printf("to read but both are protected we cannot change %d\n", *p);
}




int main(){
    basic_pointers();
    arthnatic_pointer();
    pointer_to_pointer();
    array_pointer();
    array_looping();
    pointer_to_array();
    array_of_pointers();
    null_pointer();
    wild_pointer();
    void_pointer();
    function_pointer();
    
    int x = 10;
    int y=10;

    display(&x);
    cost_ponter(&y);
    both_const(&x);
    printf("changed value %d\n",y);


    return 0;

}
