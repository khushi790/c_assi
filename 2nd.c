//prg to print check a number is pallindrome or not 
#include<stdio.h>
int main()
{
	int rem,num=12321,sum=0;
	int temp;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	if(temp==sum)
	{
		printf("number is pallindrome");
	}
	else 
	{
		printf("number is not pallindrome");
	}
	return 0;
}
