//accept one charecter from user and check whether that charecter is vowel(a,e,i,o,u) or not
#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if(CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U' || CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u')
      {
        return TRUE;
      }
      else
      {
        return FALSE;
      }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Charecter : \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It Is Vowel");
    }
    else
    {
        printf("It Is Not Vowel");
    }

    return EXIT_SUCCESS;
}