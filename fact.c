#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{

int fact=1,n,i;

n=atoi(argv[1]);

for(i=1;i<=n;i++)
{
fact=fact*i;

}

printf("%d",fact);

return 0;

}
