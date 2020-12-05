#include "stdio.h"

char kernel[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};

void main(void)
{
    int y = 0;
    y = *(int*)(kernel[1]);

    printf("%d\n",y);
    printf("%d,%d,%d,%d",kernel,kernel[0],kernel[1],kernel[2]);
}
