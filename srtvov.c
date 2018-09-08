#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{

char *str=argv[1];

int i;


	for(i=0; str[i]!='\0'; i++)
	{

	if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')

	{
		str[i]=str[i]-32;
		//str[i]=strupr(str[i]);
		//printf("%c",str[i]);

	}
			

	}

	//for(i=0; i!='\0' ; i++)
	
printf("%s",str);


return 0;
}
