#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++)
	{
		if(i % 2 == 1)
		{
			printf("%d\n",i);
		}
	}
}