#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

Bool CheckEven(int iNo )
{
    if((iNo % 2)== 0)
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
    int iValue = 0;
    Bool bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = Checkeven(iValue);

    if(bRet == TRUE)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }


    return 0;
}