#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{
  if((iNo % 2) == 0)
    {
        printf("even number\n");

    }
    else
    {
        printf("odd number\n");  // bussiness logic
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    CheckEven(iValue);

  
    return EXIT_SUCCESS;
}