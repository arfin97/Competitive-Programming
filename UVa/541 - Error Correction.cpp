#include <bits/stdc++.h>
using namespace std;
#define d(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int main(){
    int n;
    while(cin >> n && n){
        int ara[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> ara[i][j];
            }
        }

        int row_sum[n] = {0};
        int col_sum[n] = {0};

        for(int i = 0, k = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                row_sum[i] = row_sum[i] + ara[i][j];
            }
        }

        for(int i = 0, k = 0; i < n; i++, k++){
            for(int j = 0; j < n; j++){
                col_sum[i] = col_sum[i] + ara[j][i];
            }
        }

        int flag1 = 0, index1 = -1;
        int flag2 = 0, index2 = -1;
        for(int i = 0; i < n; i++){
            if(row_sum[i]%2 == 1){
                 flag1++;
                 index1 = i;
            }
            if(col_sum[i]%2 == 1){
                 flag2++;
                 index2 = i;
            }
        }

        if(flag1 == 1 && flag2 == 1){
            printf("Change bit (%d,%d)\n", ++index1, ++index2);
        }else if(flag1 == 0 && flag2 == 0){
            printf("OK\n");
        }else{
            printf("Corrupt\n");
        }

    }
    return 0;
}
