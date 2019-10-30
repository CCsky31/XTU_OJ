#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
int gcd(int _a, int _b){ //取最大公约数 
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
    int T, a, b;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &a, &b);
        if (a == 0 || b == 0) printf("0\n");
        else if (a == 1 && b == 1) printf("1\n");
        else printf("%d/%d\n", 2 * a * b / gcd(2 * a * b, (a + b) * ((a + b) - 1)), (a + b) * ((a + b)-1) / gcd(2 * a * b, (a + b) * ((a + b) - 1)));
    }
    return 0;
}
