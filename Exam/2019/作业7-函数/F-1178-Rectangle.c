#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>

int min(int a, int b) {
    int z;
    if (a > b) {
        z = a;
        a = b;
        b = z;
    }
    return a;
}

int max(int a, int b) {
    int z;
    if (a > b) {
        z = a;
        a = b;
        b = z;
    }
    return b;
}

int judge(int a, int b, int c, int d) {
    if (a<d && b>c)
        return 1;
    else
        return 0;
}

int main(){
    int k;
    scanf("%d", &k);
    while (k--) {
        int a, b, c, d, x1, y1, x2, y2, pd1, pd2, z;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        z = a;
        a = min(a, c);
        c = max(z, c);
        z = b;
        b = min(b, d);
        d = max(z, d);
        z = x1;
        x1 = min(x1, x2);
        x2 = max(z, x2);
        z = y1;
        y1 = min(y1, y2);
        y2 = max(z, y2);
        pd1 = judge(a, c, x1, x2);
        pd2 = judge(b, d, y1, y2);
        if (pd1 && pd2) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
