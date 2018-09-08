#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{

int a,b,small,i;

a=atoi(argv[1]);
b=atoi(argv[2]);

small=a>b?a:b;
	for(i=small;i>=1;i--)
	{
	if((a%i==0) && (b%i==0))
	{
	printf("%d",i);
		break;
	}

	}

return 0;

}
