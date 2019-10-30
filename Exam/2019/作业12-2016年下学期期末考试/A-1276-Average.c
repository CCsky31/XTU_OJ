#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
int main(){
    int k;
    scanf("%d", &k);
    while (k--) {
        int x, y, judge = 0;
        double pj;
        scanf("%d %d", &x, &y);
        pj = x + y;
        pj = pj / 2;
        if (x > pj)
            printf("Bob %g\n", pj - y);
        else if (x < pj)
            printf("Alice %g\n", pj - x);
        else
            printf("None\n");
    }
    return 0;
}
