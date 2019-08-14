#include <stdio.h>
#include<math.h>
int main() {
    double PI = 3.14159265;
    double a = pow(sin(PI/4),2)+sin(PI/4)*cos(PI/4)-pow(cos(PI/4),2);
    printf("%g\n",a);
    return 0;
}