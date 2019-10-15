#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>

int main(){
    int a, b, c, k, sum;
    scanf("%d", &k);
    while (k--) {
        scanf("%d-%d-%d", &a, &b, &c);
        switch (b){
        case 1:sum = 0; break;
        case 2:sum = 31; break;
        case 3:sum = 59; break;
        case 4:sum = 90; break;
        case 5:sum = 120; break;
        case 6:sum = 151; break;
        case 7:sum = 181; break;
        case 8:sum = 212; break;
        case 9:sum = 243; break;
        case 10:sum = 273; break;
        case 11:sum = 304; break;
        case 12:sum = 334; break;
        }
        sum = sum + c;
        if (((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0)) && b > 2) {
            sum++;
        }
        printf("%d\n", sum);
    }
    return 0;
}
