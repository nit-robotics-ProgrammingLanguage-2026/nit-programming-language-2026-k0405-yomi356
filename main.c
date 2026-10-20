#include <stdio.h>

int main(void) {
    double x;
    double angle;

    scanf("%lf",&x);
    angle=x/(3.141592*4)*360;
    printf("%f\n",angle);
     
    return 0;
}
