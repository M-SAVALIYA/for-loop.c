#include<stdio.h>

main()
{
    int n, i, sum = 0;
    
    printf("Enter is a sum : ");
    scanf("%d",&n);
 
    for(i=1; i <= n; ++i)
    {
        sum += i; 
    }
 
    printf("Sum = %d",sum);
 
}