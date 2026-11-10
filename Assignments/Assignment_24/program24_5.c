//write a program which accept string from user and reverse that string in place
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: StrRevX
//  Description  : program which accept string from user and reverse that string in place
//  Input        : String 
//  Output       : String
//  Date         : 10/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    int strlen = 0, iLastEl = 0;
    char temp = '\0';

    while (str[strlen] != '\0')
    {
        strlen++;
    }

    iLastEl = strlen - 1;

    for(strlen = 0; strlen < iLastEl; strlen++, iLastEl--)
    {
        temp = str[strlen];
        str[strlen] = str[iLastEl];
        str[iLastEl] = temp;
    }
}

int main()
{
    char Arr[20];

    printf("Enter Your String : \n");
    scanf("%[^\n]s",&Arr);

    StrRevX(Arr);

    printf("Modified String is : %s",Arr);

    return EXIT_SUCCESS;
}