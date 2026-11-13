//Write a program which accepts string from user and display it in reverse order
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Reverse
//  Description  : program which accepts string from user and display it in reverse order
//  Input        : String
//  Output       : String
//  Date         : 11/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void Reverse(char *str)
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

    while (str[0] != '\0')
    {
        printf("%c",*str);
        str++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);

    Reverse(Arr);

    return EXIT_SUCCESS;
}