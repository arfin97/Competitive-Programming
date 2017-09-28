#include <bits/stdc++.h>
using namespace std;
#define D(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int dp[7490] =
int coin[5] = {1, 5, 10, 25, 50};

int main(){
    fill_n(dp, 7490, 1);

    for(int i = 1; i < 5; i++){
        for(int j = 1; j < 7490; j++){
            if(j >= coin[i]){
                dp[j] = dp[j] + dp[j-coin[i]];
            }
        }
    }

    int n;
    while(cin >> n){
        cout << dp[n] << endl;
    }

    return 0;
}
