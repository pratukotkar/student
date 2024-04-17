#include<stdio.h>
int main()
{
char str[100],*ptr;
int count;
printf("enter number\n");
scanf("%s",str);
ptr=str;
count=0;
while(*ptr !='\0')
{
count++;
ptr++;
}
printf("the length of string is %d\n",count);
return 0;
}

