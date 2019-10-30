#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>

int main() {
    int T, a, b, i, sum, bs, x, y;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &a, &b);
        bs = 1;
        sum = a + b;
        while (a != 0 && b != 0) {
            bs *= 10;
            x = a % 10;
            y = b % 10;
            if (x + y >= 10) {
                sum -= bs;
            }
            a /= 10;
            b /= 10;
        }
        printf("%d\n", sum);
    }
}
