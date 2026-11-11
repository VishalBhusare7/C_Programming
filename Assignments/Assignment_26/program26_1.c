//Write a program which display ASCII table.
//Table contains symbol, Decimal, Hexadecimal and octal representation of every member from 0 to 255.
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: DisplayASCII
//  Description  : program which display ASCII table.
//  Input        : 
//  Output       : Decimal , Hexadecimal , Octal , Charecter
//  Date         : 10/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int iCnt = 0;

    printf("dec\thex\toct\tchar\n");

    for (iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d\t%x\t%o\t%c\n", iCnt, iCnt, iCnt, iCnt);   
    }   
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}