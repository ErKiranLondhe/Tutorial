#define TRUE 1
#define FALSE 0
#include<stdio.h>

typedef int BOOL;

BOOL ChkCapital(char ch)
{
 if((ch >= 'A') && (ch <= 'Z'))
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

  bRet = ChkCapital(cValue);
  if(bRet == TRUE)
  {
    printf("It is Capital : \n");
  }
  else
  {
    printf("It is not Capital : \n");
  }

  return 0;
}