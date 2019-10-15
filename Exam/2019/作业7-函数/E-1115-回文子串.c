#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>

int main() {
    int T,a,b,i,n,temp;
    char s[201];
    scanf("%d", &T);
    getchar();
    while (T--) {
        scanf("%s", s);
        scanf("%d %d", &a, &b);
        n = a-1;
        temp = 0;
        for (i = a + b - 2; i >= a - 1 + b/2; i--) {
            if (s[i] != s[n]) {
                temp = 1;
                break;
            }
            n++;
        }
        printf("%s\n", temp != 1 ? "Yes" : "No");
    }
    return 0;
}
