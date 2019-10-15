#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>

int main() {
    int T,i,n,num;
    long long int n1[1024];
    while (scanf("%d", &T) != EOF && T) {
        i = 1;
        num = 0;
        while (i <= T) {
            scanf("%I64d", &n1[i]);
            i++;
        }
        for (i = 1; i <= T; i++) {
            for (n = 1; n <= T; n++) {
                if (n1[i] == n1[n] * n1[n]) {
                    num++;
                }
            }
        }
        printf("%d\n", num);
    }
    return 0;
}
