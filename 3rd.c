//prg to number swap
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value of a and b:");
	scanf("%d %d",&a,&b);
	printf("value of a before swapping=%d\n",a);
	printf("value of b before swapping=%d\n",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value of a after swapping=%d\n",a);
	printf("value of b after swapping=%d\n",b);
	return 0;
}
