#include<stdio.h>
#include<stdlib.h>

int main(int a,char *b[])
{

int n,i,t1=0,t2=1,t3;

n=atoi(b[1]);


	for(i=0;i<n;i++)
	{
	printf("%d \t",t1);

	t3=t1+t2;
	t1=t2;
	t2=t3;
	
	}

return 0;


}
