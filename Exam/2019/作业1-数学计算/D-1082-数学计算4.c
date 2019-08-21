#pragma warning(disable:4996)； //关闭scanf不可用的提示
//以下为代码正文

#include <stdio.h>
#include<math.h>
int main() {
    double PI = 3.14159265;
    double a = pow(sin(PI/4),2)+sin(PI/4)*cos(PI/4)-pow(cos(PI/4),2);
    printf("%g\n",a);
    return 0;
}
