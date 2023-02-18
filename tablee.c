#include<stdio.h>
main()
{
	int i=1,Evensum=0,Oddsum=0,k,n;
	printf("Enter a value:");
	scanf("%d",&n);
	printf("Enter b value:");
	scanf("%d",&k);
	while(i<=n)
	{
		if(i%k==0)
		{
		printf("%d\t",i);
		
		if(i%2==0){
		Oddsum+=i;
 }
		else{
	    Evensum+=i;   
	}
}
	    	i++;	
}
	printf("\nOddsum=%d\nEvensum=%d\n",Oddsum,Evensum);
	return 0;
}
