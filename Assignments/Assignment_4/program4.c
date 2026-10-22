/*
Accept the age of a person and determine whether the person is eligible to vote.
A person must be at least 18 years old to vote.
A negative age should be considered invalid.
*/
#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iNo)
{
    if(iNo < 0)
    {
        printf("Invalid Age");
        return;
    }
    else if(iNo >= 18)
    {
        printf("Eligible for Voting");
    }
    else //if(iNo < 18 && iNo >= 0)
    {
        printf("Not Eligible for Voting");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter Your Age : \n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}