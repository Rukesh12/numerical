#include<stdio.h>
#include<conio.h>
#define f(x)(1/(1+x*x))
int main()
{
	int i,n;
	float a,b,h,x[10],y[10],iv;
	printf("enetr the number of segment:");
	scanf("%d",&n);
	printf("enter the upper limit and lower limit:");
	scanf("%f%f",&b,&a);
	h=(b-a)/n;
	x[0]=a;
	x[n]=b;
	
	for(i=1;i<n;i++)
	{
		x[i]=x[i-1]+h;
		y[i]=f(x[i]);
	}
	
	iv=f(a)+f(b);
	for(i=1;i<n;i++)
	{
	if(i%2==0)
	iv=iv+2*y[i];
	else
	iv=iv+4*y[i];
	}
	iv=iv*(h/3);
	printf("the solution of integral value is %f",iv);
}	
