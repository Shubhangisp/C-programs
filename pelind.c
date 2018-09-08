#include<stdio.h>
#include<stdlib.h>

int main(int a,char *b[])
{

int n,rev=0,i,tmp,rem;

	n=atoi(b[1]);

	tmp=n;

	while(n!=0)
	{
	rem=n%10;
	
	rev=(rev*10)+rem;

	n=n/10;

	
	}

	if(tmp==rev)
	{
	printf("yes");
	}
	else
	{
	printf("no");
	}
return 0;


}
