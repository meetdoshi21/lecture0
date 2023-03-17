/******************************************************************************
Date: 17 March 2023
Name: Meet Doshi
Description: For given N x M dimenstional paper,print possible squares

*******************************************************************************/

#include <stdio.h>


// Function : Print the possoble square from the paper
// Input :( n,m) length and width dimensions 
// Output : Print the squares with dimensions

void paperDimensions(int n, int m)
{
    if( n<0 || m < 0)
    {
        printf(" Dimensions should postive values");
    }
    if( n ==0 && m==0)
    {
        return;
    }
    
    else if(n==m)
    {
        printf(" %d x %d,",n,m);
    }
    else if (n > m )
    {
        printf(" %d x %d, ",m,m);
        paperDimensions((n-m),m);
        
    }
     else if (n < m )
    {
        printf(" %d x %d, ",n,n);
        paperDimensions((m-n),n);
    }
}

int main()
{
    int length;
    int width;
    printf("Enter Paper Dimensions:\n");
    printf("Length:");
    scanf("%d",&length);
    printf("Width:");
    scanf("%d",&width);
    paperDimensions(length,width);
    return 0;
}
