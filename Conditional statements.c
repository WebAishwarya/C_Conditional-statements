/*
    CONDITIONAL STATEMENTS
    
    - Conditional statements are used to check conditions.
    - Types Of Conditional statements :
        1) if
        2) if else
        3) ladder if else
        4) nested if else
        5) switch case
        
    - Conditional Operators :
        [   < - less than
            > - greater than
            <= - less than or equal to
            >= - greater than or equal to
            == - equal to equal to
            != - not equal to
        ]
        
    - Logical Operators :
        [   and - &&
            or - ||
        ]
*/

#include<stdio.h>
int main()
{
    printf("Program for Implementing Conditional statements : \n\n");
    
    // int a, b;
    
    // printf("Enter the value of a : ");
    // scanf("%d", &a);
    // printf("Enter the value of b : ");
    // scanf("%d", &b);
    
    // printf("\n1) If Statement : \n");
    // if(a < b)
    // {
    //     // If block
    //     printf("a is smaller");
    // }
    
    // printf("\n\n2) If Else : \n");
    // if(a > b)
    // {
    //     // If block
    //     printf("a is greater than b");
    // }
    // else
    // {
    //     // else block
    //     printf("a is smaller than b");
    // }
    
    // printf("\n\n 3) Ladder If Else : \n");
    // int a1, b1, c1;
    
    // printf("Enter the value of a1 : ");
    // scanf("%d", &a1);
    // printf("Enter the value of b1 : ");
    // scanf("%d", &b1);
    // printf("Enter the value of c1 : ");
    // scanf("%d", &c1);
    
    // // and (&&) Operator
    // printf("\nLadder If Else by using and (&&) Operator");
    // if(a1 > b1 && a1 > c1)
    // {
    //     printf("\na is greater");
    // }
    // else if(b1 > a1 && b1 > c1)
    // {
    //     printf("\nb is greater");
    // }
    // else
    // {
    //     printf("\nc is greater");
    // }
    
    // or(||) Operator
    // printf("\nLadder If Else by using or(||) Operator");
    // if(a1 >= b1 || a1 > c1)
    // {
    //     printf("\na is greater");
    // }
    // else if(b1 > a1 || b1 >= c1)
    // {
    //     printf("\nb is greater");
    // }
    // else
    // {
    //     printf("\nc is greater");
    // }
    
    printf("\n\n 4) Nested If Else : \n");
    int i, j;
    printf("Enter the value of i : ");
    scanf("%d", &i);
    printf("\nEnter the value of j : ");
    scanf("%d", &j);
    
    if(i==j)
    {
        printf("Outer If block \n");
        if(i!=12)
        {
            printf("Inner If block");
        }
    }
    else
    {
        printf("Outside Outer If block");
    }
    
    return 0;
}
