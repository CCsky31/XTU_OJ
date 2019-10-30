#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include<stdio.h>
int main() {
    int T,a,salary;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &a);
        salary = 200;
        for (; a > 100; a--) {
            salary += 2;
        }
        for (; a < 100 && a >= 0; a++) {
            salary -= 3;
        }
        printf("%d\n", salary);
    }
    return 0;
}
