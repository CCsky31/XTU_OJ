#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>

int main() {
    int T,i,n=0,j,k;
    while (scanf("%d", &T) && T) {
        i = T;
        n = 0;
        for (j = i - 1; j > 0; j--) {
            printf(" ");
        }
        printf("1\n");
        for (i--; i > 0; i--) {
            n++;
            for (j = i - 1; j > 0; j--) {
                printf(" ");
            }
            for (k = 1; k <= n; k++) {
                printf("%d", k);
            }
            printf("+");
            for (k = n; k > 0; k--) {
                printf("%d", k);
            }
            printf("\n");
        }
    }
    return 0;
}