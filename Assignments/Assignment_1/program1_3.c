// Program to print 5 to 1 numbers on screen
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Prints Number 5 to 1
//  Input        : 
//  Output       : 5 4 3 2 1 
//  Date         : 19/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

void Display()
{
    int i = 0;

    i = 5;
    while(i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
}
int main()
{
    Display();

    return EXIT_SUCCESS;
}