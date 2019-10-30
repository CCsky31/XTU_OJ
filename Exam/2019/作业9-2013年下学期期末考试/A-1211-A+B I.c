#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>

int main(){
    int k;
    scanf("%d", &k);
    while (k--) {
        int a, b, c;
        scanf("%d+%d=%d", &a, &b, &c);
        if (a + b == c) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
