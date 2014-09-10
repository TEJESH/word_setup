#include<stdio.h>
#include<malloc.h>
#include<ctype.h>

int funct1(int);
int funct2(int);
int funct3(int);
int funct4(int);
int funct5(int);

int m,a,b,c,d,o,x,w,q;
void main()
{	
	int n;
	printf("enter no: \a\n");
	scanf("%d",&n);

	if(n<10)
	{
		funct1(n);
	}
	else if(n>=10 && n<100)
	{	
		if(n%10==0)
		{
			w=n/10;
			funct4(w);
			
		}
	     	else if(n>10 && n<20)
		{
			funct5(n);
		}
		else
		{	
			funct2(n);
		}	
	}
	else if(n>=100 && n<1000)
	{
		funct3(n);
	}
	

	else
		printf("no. out of range");
	printf("\n");
	
}
int funct1(int n)
{
	
	//if(n==0)
	//printf("zero");	

	if(n==1)
	printf("one");

	if(n==2)
	printf("two");

	if(n==3)
	printf("three");

	if(n==4)
	printf("four");

	if(n==5)
	printf("five");

	if(n==6)
	printf("six");

	if(n==7)
	printf("seven");

	if(n==8)
	printf("eight");

	if(n==9)
	printf("nine");

	

	//if(n==10)
	//printf("\n");


return n;

}
int funct4(int n)
{
	//if(n==0)
	//printf("zero");	

	if(n==1)
	printf("ten");

	if(n==2)
	printf("twenty");

	if(n==3)
	printf("thirty");

	if(n==4)
	printf("fourty");

	if(n==5)
	printf("fifty");

	if(n==6)
	printf("sixty");

	if(n==7)
	printf("seventy");

	if(n==8)
	printf("eighty");

	if(n==9)
	printf("ninty");

	

	//if(n==10)
	//printf("\n");

return n;
}
int funct2(int n)
{
	m = n%10;
	o = n/10;
		funct4(o);
		//printf("ty");
		funct1(m);
	//printf("\n");
	return n;
}

int funct3(int n)
{
	a = n%10;
	q = n%100;
	b = n/10;

	c = b%10;
	d = b/10;

	funct1(d);
	printf(" hundred & ");
	if(q>10 && q<20)
	{
		funct5(q);
	}
	else
	{
	funct4(c);
	printf("-");
	//printf("ty");
	funct1(a);
	}
	//printf("\n");
	
	return n;
}

int funct5(int n)
{
	if(n==11)
	printf("eleven");

	if(n==12)
	printf("twelve");

	if(n==13)
	printf("thirteen");

	if(n==14)
	printf("fourteen");

	if(n==15)
	printf("fifteen");

	if(n==16)
	printf("sixteen");

	if(n==17)
	printf("seventeen");

	if(n==18)
	printf("eighteen");

	if(n==19)
	printf("ninteen");

return n;
}

