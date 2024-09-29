#include <stdio.h>

int main() {
    double radius, width, length, height, diameter, min_dimension;

    scanf("%lf", &radius);

    scanf("%lf %lf %lf", &width, &length, &height);

    diameter = 2 * radius;

    min_dimension = width;
    if (length < min_dimension) {
        min_dimension = length;
    }
    if (height < min_dimension) {
        min_dimension = height;
    }

    if (diameter <= min_dimension) {
        printf("Yes.\n");
    } else {
        printf("No.\n");
    }

    return 0;
}
