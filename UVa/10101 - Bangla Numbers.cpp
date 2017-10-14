#include <bits/stdc++.h>
using namespace std;
#define d(x) cout << #x << " = " << (x) << endl;
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
#define uul unsigned long long

uul int taka(uul int num){
    if(num < 100){
        return num;
    }
    if(num >= 10000000){
        uul int kuti = num / 10000000;
        uul int prev_kuti = kuti;
        kuti = taka(kuti);
        if(kuti != 0) printf(" %llu kuti", kuti);
        else printf(" kuti");
        num = (num - (prev_kuti*10000000));

    }
    if(num >= 100000){
        uul int lakh = num/100000;
        uul int prev_lakh = lakh;
        lakh = taka(lakh);
        if(lakh != 0) printf(" %llu lakh", lakh);
        else printf(" lakh");
        num = (num - (prev_lakh*100000));
    }
    if(num >= 1000){
        uul int hajar = num/1000;
        uul int prev_hajar = hajar;
        hajar = taka(hajar);
        if(hajar != 0) printf(" %llu hajar", hajar);
        else printf(" hajar");
        num = (num - (prev_hajar*1000));
    }
    if(num >= 100){
        uul int shata = num/100;
        uul int prev_shata = shata;
        shata = taka(shata);
        if(shata != 0) printf(" %llu shata", shata);
        else printf(" shata");
        num = (num - (prev_shata*100));
    }
    //if(num != 0) printf(" %d\n", num);
    return num;
}

int main(){
    int tr = 0;
    uul int num;
    while(cin >> num){
            tr++;
            printf("%4d.", tr);
            if(num == 0){
                printf(" 0\n");
            }
            else{
                uul int left = taka(num);
                if(left != 0) printf(" %llu\n", left);
                else printf("\n");
            }
    }
    return 0;
}
