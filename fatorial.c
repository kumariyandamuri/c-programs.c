#include<stdio.h>
main()
{
	int k,evensum=0,oddsum=0,n,i=1;
	printf("Enter value of k: ");
	printf("%d",&k);
	printf("Enter value of n: ");
	printf("%d",&n);
	while(n<=k)
	{
	if(i%n==0);
    {	
	printf("%d",i);
	if(i%2==0)
	{
	oddsum+=i;
    }
	else{
	evensum+=i;   
	}
    }
	i++;	
    }
    printf("\nOddsum=%d\nEvensum=%d\n",oddsum,evensum);
	return 0;
	}
	
