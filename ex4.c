#include <stdio.h>
#include<math.h>
int main() {
    double a, b, c, disc, r1, r2;

    scanf("%lf %lf %lf", &a, &b, &c);

    disc = b * b - 4 * a * c;

    if (disc > 0) {
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        printf("%.2lf and %.2lf\n", r1, r2);
    }
    else if (disc == 0) {
        r1 = -b / (2 * a);
        printf("%.2lf\n", r1);
    }
    else {
        printf("No real roots\n");
    }

    return 0;
}
