#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include<stdio.h>
int main() {
    int n, pos, times;
    for (; scanf("%d", &n) != EOF && n; printf("%d\n", times))
        for (times = pos = 1; (pos = pos > n ? (pos - n) * 2 - 1 : pos * 2) - 1; times++);
    return 0;
}
