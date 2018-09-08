#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{

int n,i,cnt=0;

int b[32];

n=atoi(argv[1]);


	while(n!=0)
	{
	b[cnt]=n%2;

	n=n/2;

cnt++;
	}

	for(i=(cnt-1);i>=0;i--)
	{
	printf("%d",b[i]);
	}
return 0;
}
