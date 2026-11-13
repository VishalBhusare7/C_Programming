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

    printf("Decimal\t\tHexadecimal\tOctal\t\tCharecter\n");

    for (iCnt = 0; iCnt <= 255; iCnt++)
    {
        if(iCnt >= 33 && iCnt <= 126)
        {
            printf("%d\t\t%x\t\t%o\t\t%c\n", iCnt, iCnt, iCnt, iCnt);  
        }
        else
        {
            printf("%d\t\t%x\t\t%o\t\tN/A\n", iCnt, iCnt, iCnt);
        }
    }   
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}