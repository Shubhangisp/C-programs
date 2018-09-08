//Check the number is Armstrong number or not
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int a,char *b[])
{
int n,rem,sum=0,tmp,cnt=0;

n=atoi(b[1]);

	tmp=n;
	while(n!=0)
	{
	n=n/10;

	cnt++;

	
	}


	n=tmp;

	while(n!=0)
	{
	rem=n/10;
	
	sum = sum + pow(rem,cnt);
	n=n%10;

	}

	if(tmp==sum)
	{printf("yes");	}
	else
	{
	printf("no");
	}

return 0;

}
