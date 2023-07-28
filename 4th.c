//prg to check a number is armstrong or not
#include<stdio.h>
int main()
{
	int rem,sum=0,num=153;
	int temp;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(temp==sum)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not armstrong");
	}
	return 0;
}
