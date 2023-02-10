#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, d, e, f, g, h;

	printf("Enter number A: ");
	scanf("%f", &a);
	printf("Enter number B: ");
	scanf("%f", &b);
	printf("Enter number C: ");
	scanf("%f", &c);
	d = 4*a*c;
	e = sqrt(fabs(b*b-d));
	f = 2*a;
	g = (-b + e)/f;
	h = (-b - e)/f;

	if (g == h){
		printf("Answer: %f", g);
	}
	else if (g == 0){
		printf("Answer: %f", h);
	}
	else if (h == 0){
		printf("Answer: %f", g);
	}
	else{
		printf("Answer: %f and %f\n", g, h);
	}

/*	printf("Number A: %f\n", a);
	printf("Number B: %f\n", b);
	printf("Number C: %f", c);*/

	return 0;
}
