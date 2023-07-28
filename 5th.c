//maximum of ten numbers
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	printf("enter value of a,b,c,d,e,f,g,h,i and j:");
	scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	if(a>b && a>c && a>d && a>e && a>f && a>g && a>h && a>i &&a>j)
	{
		printf("a is maximum");
	}
	else if(b>a && b>c && b>d && b>e && b>f && b>g && b>h && b>i && b>j)
	{
		printf("b is maximum");
	}
	else if(c>a && c>b && c>d && c>e && c>f && c>g && c>h && c>i && c>j)
	{
		printf("c is maximum");
	}
	else if(d>a && d>b && d>c && d>e && d>f && d>g && d>h && d>i && d>j)
	{
		printf("d is maximum");
	}
	else if(e>a && e>b && e>c && e>d && e>f && e>g && e>h && e>i && e>j)
	{
		printf("e is maximum");
	}
	else if(f>a && f>b && f>c && f>d && f>e && f>g && f>h && f>i && f>j)
	{
		printf("f is maximum");
	}
	else if(g>a && g>b && g>c && g>d && g>e && g>f && g>h && g>i && g>j)
	{
		printf("g is maximum");
	}
	else if(h>a && h>b && h>c && h>d && h>e && h>f && h>g && h>i && h>j)
	{
		printf("h is maximum");
	}
	else if(i>a && i>b && i>c && i>d &&i>e && i>f && i>g && i>h && i>j)
	{
		printf("i is maximum");
	}
	else if(j>a && j>b && j>c && j>d &&j>e && j>f && j>g && j>h && j>i)
	{
		printf("j is maximum");
	}
	else
	{
		printf("values are equal");
	}
	return 0;
}
