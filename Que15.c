#include<stdio.h>

void Reverse(char *str)
{
  char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
       temp = *start;
       *start = *end;
       *end = temp;

       start++;
       end--; 
    }


}
  

int main()
{
  char arr[20];
  int iRet = 0;
  

  printf("Enter string : \n");
  scanf(" %[^'\n]s",arr);

  Reverse(arr);
  printf("Reverse string is : %s\n",arr);
  
  return 0;
}