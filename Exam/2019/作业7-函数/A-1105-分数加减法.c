#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
int gcd(int _a, int _b) { //取最小公倍数
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
    int T,a1,b1,c1,d1,a2,b2,c2,d2;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d %d", &a1, &b1, &c1, &d1);
        //通分
        a2 = a1 * d1;
        b2 = b1 * d1;
        c2 = c1 * b1;
        d2 = d1 * b1;

        //输出和
        if ((a2 + c2) % b2 == 0) //整数
            printf("%d", (a2 + c2) / b2);
        else
            if (b2 / gcd((a2 + c2), b2) < 0 && (a2 + c2) / gcd((a2 + c2), b2) > 0)
                printf("-%d/%d", (a2 + c2) / gcd((a2 + c2), b2), -1 * b2 / gcd((a2 + c2), b2));
            else if(b2 / gcd((a2 + c2), b2) < 0 && (a2 + c2) / gcd((a2 + c2), b2) < 0)
                printf("%d/%d", -1 * (a2 + c2) / gcd((a2 + c2), b2), -1 * b2 / gcd((a2 + c2), b2));
            else
                printf("%d/%d", (a2 + c2) / gcd((a2 + c2), b2), b2 / gcd((a2 + c2), b2));
            
        printf(" ");
        //输出差
        if ((a2 - c2) % b2 == 0) //整数
            printf("%d", (a2 - c2) / b2);
        else
            if(b2 / gcd((a2 - c2), b2) <0 && (a2 - c2) / gcd((a2 - c2), b2) > 0)
                printf("-%d/%d", (a2 - c2) / gcd((a2 - c2), b2), -1 * b2 / gcd((a2 - c2), b2));
            else if(b2 / gcd((a2 - c2), b2) < 0 && (a2 - c2) / gcd((a2 - c2), b2) < 0)
                printf("%d/%d", -1 * (a2 - c2) / gcd((a2 - c2), b2), -1 * b2 / gcd((a2 - c2), b2));
            else
                printf("%d/%d", (a2 - c2) / gcd((a2 - c2), b2), b2 / gcd((a2 - c2), b2));
        printf("\n");
    }
    return 0;
}
