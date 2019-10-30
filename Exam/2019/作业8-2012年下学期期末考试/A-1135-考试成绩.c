#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
int main() {
    int T,a,b,c,d,e;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        printf("%d\n", a + b + c + d + e);
    }
}