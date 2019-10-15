#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文


#include <stdio.h>
int main() {
    int T,x1=0,x2=0,y1=0,y2=0,x,y;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &x1, &y1);
        scanf("%d %d", &x2, &y2);
        if (x1 < y1) {
            x1 = x1 + y1;
            y1 = x1 - y1;
            x1 = x1 - y1;
        }
        if (x2 < y2) {
            x2 = x2 + y2;
            y2 = x2 - y2;
            x2 = x2 - y2;
        }
        x = x2 - y1;
        y = y2 - x1;
        if (x * y <= 0) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
    return 0;
}
