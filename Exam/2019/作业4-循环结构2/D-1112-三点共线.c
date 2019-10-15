#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
int main() {
    int T,x1=0,x2=0,x3=0,y1=0,y2=0,y3=0,a1=0,b1=0,a2=0,b2=0;
    double k1, k2;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &x1, &y1);
        scanf("%d %d", &x2, &y2);
        scanf("%d %d", &x3, &y3);
        a1 = x2 - x1;
        b1 = y2 - y1;
        a2 = x3 - x1;
        b2 = y3 - y1;
        if (a1 * b2 - b1 * a2 ==0) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
    return 0;
}
