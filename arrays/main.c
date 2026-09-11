#include "stdio.h"



// printing whole array by an array indexing
void twoD_normal(void)
{
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    printf("2D Array:\n");

    printf("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);
    printf("%d %d %d\n", arr[1][0], arr[1][1], arr[1][2]);
}


//2d  initialization and looping/traveresing by using for loop
void twoD_initialization(void)
{
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    printf("\n2D Array using loops:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
}
void twoD_pointer(void)
{
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    int (*p)[3] = arr;//pointer pointing to an array of 3 integers

    printf("\n2D Array using pointer:\n");

    printf("%d\n", p[0][0]);
    printf("%d\n", p[0][1]);
    printf("%d\n", p[0][2]);
    printf("%d\n", p[1][0]);
    printf("%d\n", p[1][1]);
    printf("%d\n", p[1][2]);
}

//2D array using pointer arithmetic
void twoD_pointer_arithmetic(void)
{
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    int (*p)[3] = arr;

    printf("\nUsing pointer arithmetic:\n");
    //*(*(p + i) + j)

    printf("%d\n", *(*(p + 0) + 0));
    printf("%d\n", *(*(p + 0) + 1));
    printf("%d\n", *(*(p + 0) + 2));

    printf("%d\n", *(*(p + 1) + 0));
    printf("%d\n", *(*(p + 1) + 1));
    printf("%d\n", *(*(p + 1) + 2));
}
void twoD__pointer(void)
{
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    int *p = &arr[0][0];//pointing to whole array

    printf("\n2D Array using int pointer:\n");

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", *(p + i));
    }

    printf("\n");
}
// 2d memoey addreess
void twoD_memory(void)
{
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    printf("\n2D Array Memory:\n");

    printf("arr[0][0] = %d, address = %p\n",
           arr[0][0], (void *)&arr[0][0]);

}


// 3d arraing

void threeD_normal(void)
{
    int arr[2][2][3] = {
        {
            {10, 20, 30},
            {40, 50, 60}
        },
        {
            {70, 80, 90},
            {100, 110, 120}
        }
    };

    printf("\n3D Array:\n");

    printf("%d\n", arr[0][0][0]);
    printf("%d\n", arr[0][0][1]);
    printf("%d\n", arr[0][0][2]);

    printf("%d\n", arr[0][1][0]);
    printf("%d\n", arr[0][1][1]);
    printf("%d\n", arr[0][1][2]);

    printf("%d\n", arr[1][0][0]);
    printf("%d\n", arr[1][0][1]);
    printf("%d\n", arr[1][0][2]);

    printf("%d\n", arr[1][1][0]);
    printf("%d\n", arr[1][1][1]);
    printf("%d\n", arr[1][1][2]);
}


int main(void)
{
twoD_normal();
twoD_initialization();
twoD_pointer();
twoD__pointer();
twoD_memory();
threeD_normal();
}
