#include <stdio.h>
#include <math.h>

int main() {
	double x, y, x0, y0, r, dist;
	scanf("%lf %lf %lf %lf %lf", &x, &y, &x0, &y0, &r);

	dist = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));

	if (dist > r)
		printf("Outside\n");
	else if (dist == r)
		printf("On\n");
	else
		printf("Inside\n");
}