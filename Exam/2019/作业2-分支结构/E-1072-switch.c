#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ

//����Ϊ��������



#include <stdio.H>
#include <math.h>
int main(){
    double x,y;
    scanf("%lf",&x);
    if(x >= 0 && x < 30){
        if(x >= 20){
            y=cos(x+4.0);
            y=pow(y,4);
        }
        if(x>=10&&x<20){
            y=cos(x+7.5);
            y=pow(y,2);
        }
        if(x<10){
            y=cos(x+3.0);
        }
        printf("%0.5f",y);
    } else {
        printf("Not define");
    }
    return 0;
}