#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117068
int main () {
	int r;
	float vol;
	printf("Input the radius of sphere(in meters): ");
	scanf("%d",&r);
	vol=(4/3)*pi*pow(r,3);
	printf("The volume of sphere of radius %d is %f cubic meter.\n",r,vol);
}
