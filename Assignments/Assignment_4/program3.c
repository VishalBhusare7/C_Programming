//Accept two imtegers and determine which number is greater. if both numbers are equal, display an appropriate message
#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("%d Is Greater \n",iNo1);
    }
    else if(iNo1 < iNo2)
    {
        printf("%d Is Greater \n",iNo2);
    }
    else
    {
        printf("Both Numbers Are Equal \n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}