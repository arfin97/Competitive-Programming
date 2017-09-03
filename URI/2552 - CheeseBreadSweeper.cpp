//https://www.urionlinejudge.com.br/judge/en/problems/view/2552
#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << (x) << endl;
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
using namespace std;

int main(){
    int n, m;
    while(cin >> n >> m){
        int ara[n][m];
        int result[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> ara[i][j];
                result[i][j] = 0;
            }
        }


        int cnt = 0;
        int left, right, top, bottom;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cnt = 0;
                left = j - 1;
                right = j + 1;
                top = i - 1;
                bottom = i + 1;
                if(left < 0){
                    left = -9;
                }
                if(right >= m){
                    right = -9;
                }
                if(top < 0){
                    top = -9;
                }
                if(bottom >= n){
                    bottom = -9;
                }
                if(left != -9 && ara[i][left] == 1){
                    cnt++;
                }
                if(right != -9 && ara[i][right] == 1){
                    cnt++;
                }
                if(top != -9 && ara[top][j] == 1){
                    cnt++;
                }
                if(bottom != -9 && ara[bottom][j] == 1){
                    cnt++;
                }

                if(ara[i][j] == 1){
                    result[i][j] = 9;
                }
                else{
                    result[i][j] = cnt;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << result[i][j];
            }
            cout << endl;
        }

    }
    return 0;
}
