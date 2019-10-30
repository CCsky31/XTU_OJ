#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>

int main() {
    int T, i, a, num[10001], cha, judge;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &a);
        for (i = 0; i < a; i++) {
            scanf("%d", &num[i]);
        }
        cha = num[1] - num[0];
        judge = 0;
        for (i = 2; i < a; i++) {
            if (num[i] - num[i - 1] != cha) {
                judge = 1;
                break;
            }
        }
        if (judge == 1) {
            printf("No\n");
        }
        else {
            printf("Yes\n");
        }
    }

}
