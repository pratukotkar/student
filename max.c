#include<stdio.h>
int *max (int*, int*);
void main()
{
int a,b;
int *m;
printf("maxinum number 1 and sencond ");
scanf("%d%d",&a,&b);
m=max(&a,&b);
printf("%d\n",*m);
}
int *max(int *x,int *y)
{
if(*x<*y)
return x;
else
 return y;
}


