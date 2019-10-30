#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>

int main() {
    int T, a, b, x[1024], i, j, key,cha1,cha2,position,sum;
    scanf("%d", &T);
    while (T--) {
        //变量初始化
        cha1 = 0;
        cha2 = 9999999;
        sum = 0;
        position = 0;
        scanf("%d %d", &a, &b);
        getchar();//处理换行符
        for (i = 0; i < a; i++) {
            scanf("%d", &x[i]);
        }
        //插入排序-升序
        for (j = 1; j <= a - 1; j++) {
            key = x[j];
            i = j - 1;
            while (i >= 0 && x[i] > key) {
                x[i + 1] = x[i];
                i--;
            }
            x[i + 1] = key;
        }
        //此时数组x中存放着排列好顺序的价格
        for (i = 0; i + b <= a; i++) {
            cha1 = x[i + b-1] - x[i];
            if (cha1 < cha2) {
                cha2 = cha1;
                position = i;
            }
        }
        //开始计算sum值
        for (; b > 0; b--) {
            sum += x[position];
            position++;
        }
        printf("%d %d", cha2, sum);
        printf("\n");
    }
    return 0;
}
