#pragma warning(disable:4996)； //关闭scanf不可用的提示
//以下为代码正文

#include <stdio.h>
int main() {
    double a;
    scanf("%lf", &a);
    printf("%0.8f", a);
    return 0;
}