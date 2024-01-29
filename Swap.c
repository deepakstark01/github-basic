#include<stdio.h>
void main()
{
    int a = 12, b = 5;
    int c ;
    printf("Before Swaping value : \n A = %d \n B =  %d\n", a, b);
    c = a;
    a = b;
    b= c;
    printf("After  Swaping value : \n A = %d \n B =  %d", a, b);

}