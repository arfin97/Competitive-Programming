#include <bits/stdc++.h>
using namespace std;
#define d(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
#define ll long long
#define siz 1000000

int ara[4000];
int bana() {
    for(int i = 6; i < 4000; i+=7) {
        ara[i] = 19;
        ara[i+1] = 19;
    }
}
int main() {
    //////////////////////MAIN//////////////////////

    int tc;
    cin >> tc;
    for(int tr = 1; tr <= tc; tr++) {
        mem(ara);
        bana();
        int n;
        cin >> n;
        int p;
        cin >> p;
        int party[p];

        for(int i = 0; i < p; i++) cin >> party[i];

        for(int i = 0; i < p; i++) {
            for(int j = 1; j <= n; j++) {
                int mutliple = (j*party[i]);
                if(mutliple > n) break;
                if(ara[mutliple] != 19) ara[mutliple] = 1;
            }
        }
        int cnt = 0;
        for(int i = 1; i <= n; i++) {
            if(ara[i] == 1) cnt++;
        }
        cout << cnt << endl;
    }












    return 0;
}
