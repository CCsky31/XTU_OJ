#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>

int main() {
    int T,a,b;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &a, &b);
        a ^= b;
        b = 0;
        while (a){
            if (a & 1) b++;
            a >>= 1;
        }
        printf("%d\n", b);
    }
    return 0;
}
