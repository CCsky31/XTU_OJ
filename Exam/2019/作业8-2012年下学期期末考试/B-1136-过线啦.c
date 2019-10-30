#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include<stdio.h>
int main(){
    int k;
    scanf("%d", &k);
    while (k--) {
        int n, a, b, judge = 1, sum = 0, i;
        int grade[100];
        scanf("%d %d %d", &n, &a, &b);
        i = n;
        judge = 1;
        sum = 0;
        while (n--) {
            scanf("%d", &grade[n]);
            sum += grade[n];
            if (grade[n] < b)
                judge = 0;
        }
        if (sum < (i * a))
            judge = 0;
        if (judge == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}