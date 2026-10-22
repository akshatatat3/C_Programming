/* Input : e  output : TRUE
   Input : b  output : False   (a,e,i,o,u ) = true
*/

#include<stdio.h>
typedef int Bool;

#define TRUE 1
#define FALSE 0


Bool Checkvowel(char cValue )
{
    if(cValue == 'a' || cValue =='e' ||
       cValue == 'i' || cValue =='o' ||
       cValue == 'u' || cValue =='A' ||
       cValue == 'E' || cValue =='I' ||
       cValue == 'O' || cValue =='U'  )
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
    int cValue = 0;
    Bool bRet = FALSE;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = Checkvowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is vowel-TRUE");
    }
    else
    {
        printf("It is not a vowel-FALSE");
    }


    return 0;
}