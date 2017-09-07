#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int ara[3000000];

int main(){
        int n, k;
        while(scanf("%d %d", &n, &k) == 2){
        if(n == 0 && k == 0) break;
        for(int i = 0; i < n; i++) scanf("%d", &ara[i]);
        sort(ara, ara+n);
        int res = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            cnt = 0;
            int hand = ara[i];
            while(hand == ara[i] && (i < n)){
                cnt++;
                i++;
            }
            i--;
            if(cnt >= k) res++;
        }
        cout <<  res << endl;
        }

    return 0;
}
