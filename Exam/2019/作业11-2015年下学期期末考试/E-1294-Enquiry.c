#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <bits/stdc++.h>
int main(){
    int T,i,left,right,times,sum;
    char str[10002];
    scanf("%d",&T);
    while(T--){
        scanf("%s",str);
        getchar();
        scanf("%d",&times);
        while(times--){
            sum=0;
            scanf("%d %d",&left,&right);
            for(i=left;i<=right-1;i++){
                if(str[i] == 'M' && str[i-1] == 'F'){
                    sum++;
                }
                if(str[i] == 'F' && str[i-1] == 'M'){
                    sum++;
                }
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
