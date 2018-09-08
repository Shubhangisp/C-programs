#include<stdio.h>
#include<stdlib.h>
#define pi 3.14
int main(int argc,char *argv[])
{

int d;

float a=0.0;

d=atoi(argv[1]);

a=(pi *(d/2)*(d/2));

printf("%.2f",a);

return 0;
}
