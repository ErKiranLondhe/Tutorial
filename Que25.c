/*Input:  iRow = 6   iCol = 5
Output: 1   2   3   4     
        1   *   *   4   
        1   *   *   4   
        1   2   3   4   
        

        
        */

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0; 
    int j = 0;
    for (i = 1; i <= iRow; i++)
    {
     for (j = 1; j <= iCol; j++)
     {
        if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
        {
            printf("%d\t",j);
          
        }
        else 
        {
          printf("*\t");  
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
    scanf("%d", &iValue1);

    printf("Enter the number of columns: \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
