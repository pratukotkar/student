#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
int n;
int*arr;
int max;
printf("how many element you want to add\n");
scanf("%d",&n);
arr=(int*)moalloc(n, sizeof(int));
if(arr==NULL)
{ 
printf("error");
return 1;
}
printf("\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
max=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]>max){
max=arr[i];
}
}
printf("\n largest element %d\n",max);
free(arr);
return 0;
}

