#define TRUE 1
#define FALSE 0
#include<stdio.h>

typedef int BOOL;

BOOL ChkDigit(char ch)
{ 

 if((ch >= '0') && (ch <= '9'))
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

  printf("Enter the Character : \n");
  scanf("%c",&cValue);

  bRet = ChkDigit(cValue);
  if(bRet == TRUE)
  {
    printf("It is Digit : \n");
  }
  else
  {
    printf("It is not Digit : \n");
  }

  return 0;
}