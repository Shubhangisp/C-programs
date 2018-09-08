#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int d,char *e[])
{

int a,b;
float c;

//printf("");

//scanf("%d %d",&a,&b);


a=atoi(e[1]);
b=atoi(e[2]);
c=sqrt((a*a)+(b*b));

printf("%.2f",c);

return 0;
}
