#include<stdio.h>

main()
{
    int i, n;
    printf("Enter value i = ");
    scanf("%d",&n);

     for(i=2; i<=n; i+=2)
    {
        printf("%d\n", i);
    }
}