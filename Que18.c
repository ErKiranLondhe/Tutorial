/*Input:  iRow = 5   iCol = 5
Output: a b c d e
        1 2 3 4 5
        a b c d e
        1 2 3 4 5

        */

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'a';
    
  for(i = 1; i <= iRow; i++)
 {
  for(j = 1; j <= iCol; j++)
  {
    if((i % 2) == 0) 
   {
    printf("%c\t",ch);
    ch++;
    
   }
   else
   {
    printf("%d\t",j);
   
   }
  }
   printf("\n");
   
 }
 
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter the number of rows: \n");
    scanf("%d",&iValue1);

    printf("Enter the number of column: \n");
    scanf("%d",&iValue2);


    Pattern(iValue1,iValue2);

    return 0;
}
