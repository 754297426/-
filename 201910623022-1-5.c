#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	float r,c;
	scanf("%f", &r);
	c = 2 * r * 3.1415;
	printf("圆的周长是%.2f \n", c);
	return 0;
}