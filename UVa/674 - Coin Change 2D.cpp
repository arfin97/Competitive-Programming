#include <bits/stdc++.h>
using namespace std;
#define D(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int dp[10000][10000];
int coin[5] = {1, 5, 10, 25, 50};

int main(){
    for(int i = 0; i < 10000; i++){
        fill_n(dp[i], 10000, 1);
    }

    for(int i = 1; i < 5; i++){
        for(int j = 1; j <= 7489; j++){
            if(coin[i] > j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j] + dp[i][j-coin[i]];
            }
        }
    }

    int n;
    while(cin >> n){
        cout << dp[4][n] << endl;
    }

    return 0;
}
