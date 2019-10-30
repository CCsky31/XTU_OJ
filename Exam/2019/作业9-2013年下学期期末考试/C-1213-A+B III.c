#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
int gcd(int _a, int _b){ //取最小公倍数
    int c;
    while (_b) {
        _a = _a % _b;
        c = _a;
        _a = _b;
        _b = c;
    }
    return _a;
}

int main() {
    int T, n, m,i,a,b;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &n, &m);
        if (m < 3) printf("0\n");
        else if (m == n) printf("1\n");
        else{
            a = m * (m - 1) * (m - 2);
            b = n * (n - 1) * (n - 2);
            printf("%d/%d\n",a/gcd(a,b),b/gcd(a,b));
        }
    }
    return 0;
}