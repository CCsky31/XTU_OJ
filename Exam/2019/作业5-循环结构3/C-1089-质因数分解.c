#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include<stdio.h>

int main() {
    int x, k, i, c;
    while (scanf("%d", &x) != EOF) {
        for (i = 2; i * i <= x; i++) {
            for (c = 0; x % i == 0; c++) {
                x /= i;
            }
            if (c == 0) continue;
            if (c == 1) printf("%d", i);
            else if (c >= 1) {
                printf("%d^%d", i, c);
            }
            if (x != 1) putchar('*');
            else break;
        }
        if (x != 1) printf("%d", x);
        putchar('\n');
    }
}
