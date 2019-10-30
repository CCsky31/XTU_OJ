#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
#include <math.h>

int main() {
    int T, a, b, i, sum, tmp, count;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &a, &b);
        sum = a + b;
        count = 1;
        for (i = 2; i*i <= sum; i++) {
            tmp = 0;
            if (sum % i == 0) {
                while (sum % i == 0) {
                    tmp++;
                    sum /= i;
                }
            }
            count *= (tmp + 1);
            if (sum == 1) break;
        }
        if (sum != 1) count *= 2;
        printf("%d\n", count);
    }
    return 0;
}