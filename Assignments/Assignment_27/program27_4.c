//Write a program which accept string from user and check whether it contains vowels in it or not
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: ChkVowel
//  Description  : program which accept string from user and check whether it contains vowels in it or not
//  Input        : String
//  Output       : String
//  Date         : 11/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char *str)
{
    while (*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || 
           *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
           {
            return TRUE;
           }
           str++;
    }
    return FALSE;
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There Is No Vowel");
    }

    return EXIT_SUCCESS;
}