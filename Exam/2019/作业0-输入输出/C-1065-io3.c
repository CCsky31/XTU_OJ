#pragma warning(disable:4996)； //关闭scanf不可用的提示
//以下为代码正文

#include <stdio.h>
int main() {
    float a;
    scanf("%f", &a);
    printf("%0.3f", a);
    return 0;
}