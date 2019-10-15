#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>

int main() {
    int T,i,x;
    unsigned long int a;
    scanf("%d", &T);
    while (T--) {
        scanf("%I64d", &a);
        i = 0;
        x = 0;
        while (a){
            //printf("%d %d %d\n", a, a & 1,i);
            if (a & 1)
                i++;
            else {
                if (i >= x) x = i;
                i = 0;
            }
            a >>= 1;
            if (i >= x) x = i;
        }
        printf("%d\n", x);
    }
    return 0;
}
