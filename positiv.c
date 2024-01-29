// C Program to Check Whether a Number is Positive, Negative, or Zero

#include<stdio.h>
void main ()
{

    int num ;
    printf("Enter your number : \n");
    scanf("%d",&num);
    if (num>0)
    {
        printf("You number is %d is positive ", num);
    }
    else
    {
        printf("You number is %d is Negative ", num);

    }
}