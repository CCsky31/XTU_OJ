#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
int main() {
    int i,k,judge;
    unsigned long int m;
    while (scanf("%d", &m) != EOF)
    {
        if (m == 0) return 0;
        if (m == 1) {
            printf("No\n");
            continue;
        }
        judge = 0;
        for (i = 2; i * i <= m; i++) {
            if (m % i == 0) {
                judge = 1;
                break;
            }
        }
        if (judge == 1) printf("No\n");
        else printf("Yes\n");
    }
}
