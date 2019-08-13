#include <stdio.h>
int main() {
    float a = 1 + 1.0/5;
    a = 1 + 1.0/a;
    a = 1 + 1.0/a;
    printf("%g\n", a);
    //1.54545
    return 0;
}