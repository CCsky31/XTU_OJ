#pragma warning(disable:4996)； //关闭scanf不可用的提示
//以下为代码正文

#include <stdio.h>
int main(){
    int a, b, r, m, n;
    scanf("%d %d", &a, &b);
    while (a != 0 && b != 0){
        m = a;
        n = b;
        do {
            r = m % n;
            m = n;
            n = r;
        } while (r != 0);
        printf("%d\n", a * b / m);
        scanf("%d %d", &a, &b);
    }
    return 0;
}