#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>   //boolean is data type in c++ but if we wont to boolean in c we include header file such as stdbool.h//

bool CheckEven(int iNo)
{
  if((iNo % 2) == 0)
    {
       return true;

    }
    else
    {
       return false;       // bussiness logic
    }

}
int main()
{
    int iValue = 0;
    bool bRet = false;     //in int i = 0, so boolean = false

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("it is even\n");
    }
    else
    {
        printf("it is odd\n");
    }

  
    return EXIT_SUCCESS;
}