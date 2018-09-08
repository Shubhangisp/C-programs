#include<stdio.h>
#include<stdlib.h>
void fib(int);
void prm(int);
int i,j;
void fib(int n)
{
int t1=0,t2=1,t3;

	for(i=3;i<=n;i++)
	{
	
	t3=t1+t2;
	t1=t2;
	t2=t3;
	}
	printf("%d",t3);

}

void prm(int n)
{
int flag=0,cnt=0;
for(i=1;i<=100;i++)
{
	for(j=2;j<i/2;j++)
	{
	if(i%j==0)
	{
	flag=0;

	}
	else
	{flag==1;}
	}

	if(flag==1)
	{
	cnt++;
	}
	if(n==cnt)
	{
		
		printf("%d",i);
		break;
	}
}


}

int main()
{

int n,e;

scanf("%d",&n);

e=n/2;

if(n%2==0)
{

prm(e);
}

else
{
fib(e+1);

}

return 0;


}
