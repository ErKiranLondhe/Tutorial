#include<stdio.h>

void Strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
          *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
          *str = *str + 32;
        }
    
       str++;

    }

}
  

int main()
{
  char arr[20];
  
  printf("Enter string : \n");
  scanf("%[^'\n]s",arr);

  Strtogglex(arr);
  printf("Modified string is : %s\n",arr);
  
  return 0;
}