//Check number is prime or not and if it is prime then calculate its squareroot
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc,char * argv[])
{

int n,i,flag=1;

float b; 

n=atoi(argv[1]);

	for(i=2;i<n;i++)
	{
	if(n%i==0)
	{
	flag=0;
	}
	}

	if(flag==1)
	{
	b=sqrt(n);
	printf("%.2f",b);
	}
	else
	{
	printf("0.00");
	}
return 0;

}
