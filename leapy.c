#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int y,i;

y=atoi(argv[1]);

	if(y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
			{
			printf("leap year");
			}
			else
			{
			printf("not leap year");
			}
		}

		else
		{
		printf("leap year");
		}
	}
		else
			{
			printf("not leap year");
			}

return 0;
}
