#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<unsigned long long, unsigned long long>& x, const pair<unsigned long long, unsigned long long>& y){
    if(x.second == y.second)
        return x.first < y.first;
    return x.second > y.second;
}

map<unsigned long long, unsigned long long> a;

int main()
{
    ios::sync_with_stdio(false);
    unsigned long long ti, pa;
    unsigned long long xu;

    while(scanf("%I64d %I64d %I64d", &ti, &xu, &pa) == 3){
        if(1 <= pa && pa <= 12)
            a[xu] += 32;else
        if(13 <= pa && pa <= 24)
            a[xu] += 16;else
        if(25 <= pa && pa <= 48)
            a[xu] += 8;else
        if(49 <= pa && pa <= 96)
            a[xu] += 4;else
        if(97 <= pa && pa <= 192)
            a[xu] += 2;
        else if(pa >= 193)
            a[xu] += 1;
    }
    vector<pair<unsigned long long, unsigned long long>> b(a.begin(), a.end());
    sort(b.begin(), b.end(), cmp);
    double maxn = b[0].second;
    for(int i = 0; i < b.size(); i++)
        b[i].second = 100.5 + 10 * log(b[i].second / maxn);
    sort(b.begin(), b.end(), cmp);
    for(unsigned long long i = 0; i < b.size(); i++)
        printf("%I64d %d\n", b[i].first, b[i].second);
    return 0;
}
