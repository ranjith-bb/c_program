#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    double radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    printf("Area of the circle: %lf\n", area);

    return 0;
}
