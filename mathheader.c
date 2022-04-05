#include<stdio.h>
#include<math.h>

void main()
{
	int a,b,e,f;
	a=10;b=3;e=1;f=2;
	float c,d;
	c=2.7;
	d=10000;
	printf("Remainder of %d and % d  : %lf",a,b,fmod(a,b));
	printf("\nLog of value %.2f ........ : %lf",c,log(c));
	printf("\nLog10 of value %.2f ...... : %lf",d,log10(d));
	printf("\nExponential value of %d .. : %lf",e,exp(e));
	printf("\nExponential value of %d .. : %lf",f,exp(f));
}
