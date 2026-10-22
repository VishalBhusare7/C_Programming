// Accept one Number from User if Number is less than 10 then Print "Hello" otherwise Print "Demo"
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Accept number from user and print "Hello" if Number is less than 10 otherwise Print "Demo"
//  Input        : Integer
//  Output       : String
//  Date         : 19/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}