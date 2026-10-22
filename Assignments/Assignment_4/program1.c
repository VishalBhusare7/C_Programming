//Write a program that accepts an integer from the user and determines whether the entered number is positive, negetive or zero
#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf(" The Number Is Positive ");
    }
    else if(iNo < 0)
    {
        printf(" The Number Is Negative ");
    }
    else if(iNo == 0)
    {
        printf(" The Number Is Zero ");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}