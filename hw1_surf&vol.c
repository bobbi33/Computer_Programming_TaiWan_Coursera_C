//Homework 1_表面積與體積


#include <stdio.h>

int main(void) {
	int a  = 0, b = 0,c = 0,d = 0,e = 0;
	int surf = 0, vol = 0;
	
	scanf("%d\n%d\n%d\n%d\n%d\n",&a,&b,&c,&d,&e);
	surf = 2*(a*c + a*b + b*c) + 8*(d*(a - 2*e)+ d*(c- 2*e)+ d*(b- 2*e));
	vol = a*b*c - 2*d*(a-2*e)*(c-2*e) - 2*d*(a-2*e)*(b-2*e)-2*d*(b-2*e)*(c-2*e);
	printf("%d %d",surf,vol);
	
	return 0;
}
