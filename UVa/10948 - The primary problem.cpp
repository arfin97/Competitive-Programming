#include <bits/stdc++.h>
using namespace std;
#define D(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

const int siz = 1000000; //10^6
bool siv[siz];
vector<int> prime;

void sieve(){
    memset(siv, true, sizeof(siv));
    int root = sqrt(siz);
    for(int i = 2; i<=root; i++){
        for(int j = i*2; j <= siz; j+=i){
            siv[j] = false;
        }
    }
}

void pri(){
    sieve();
    siv[0] = false;
    siv[1] = false;
    for(int i = 0; i < siz; i++) if(siv[i] == true) prime.push_back(i);
}

int main(){
    pri();
    int n;
    while(cin >> n && n != 0){
        int a, b;
        int flag = 0;
        for(int i = 0; prime[i] <= ((n/2)+1); i++){
            a = prime[i];
            b = n-prime[i];
            if(siv[b] == true) {
                flag = 1;
                break;
            }
        }
        printf("%d:\n", n);
        if(flag == 1) printf("%d+%d\n", a, b);
        else printf("NO WAY!\n");
    }

}
