//https://www.urionlinejudge.com.br/judge/en/problems/view/1383
#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int tr = 1; tr <= tc; tr++){
        printf("Instancia %d\n", tr);

        //taking input
        int n = 9;
        int ara[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> ara[i][j];
            }
        }

        //initializing marker and flags
        int mrk[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        int flag = 1;

        //row checker;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                mrk[ara[i][j]]++;
            }
            //marker checker
            for(int k = 1; k <= n; k++){
                if(mrk[k] != 1){
                    flag = 0;
                    printf("NAO\n\n");
                    break;
                }
            }
            mem(mrk);
            if(flag == 0) break;
        }
        if(flag == 0) continue;

        //column checker
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                mrk[ara[j][i]]++;
            }
            //marker checker
            for(int k = 1; k <= n; k++){
                if(mrk[k] != 1){
                    flag = 0;
                    printf("NAO\n\n");
                    break;
                }
            }
            mem(mrk);
            if(flag == 0) break;
        }
        if(flag == 0) continue;
        mem(mrk);

        //sub matrix checker;
        //first two loops for getting sub-matrices first element
        for(int f = 0; f < 9; f = f+3){
            for(int k = 0; k < 9; k = k +3){
                //looping through sub-matrix elements
                for(int i = f; i < (f+3); i++){
                    for(int j = k; j < (k+3); j++){
                        mrk[ara[i][j]]++;
                    }
                }
                //checker
                for(int it = 1; it <= 9; it++){
                    if(mrk[it] != 1){
                        flag = 0;
                        printf("NAO\n\n");
                        break;
                    }
                }
                mem(mrk);
                if(flag == 0) break;
            }
            if(flag == 0) break;
        }
        if(flag == 0) continue;
        //if every check fails to make flag = 0, this means the suduku passed all tests, it's a valid game.
        if(flag == 1) printf("SIM\n\n");

    }
    return 0;
}
