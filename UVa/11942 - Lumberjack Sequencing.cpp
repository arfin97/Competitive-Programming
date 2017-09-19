#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int main(){
    int tc;
    cin >> tc;
    printf("Lumberjacks:\n");
    for(int tr = 1; tr <= tc; tr++){
        int n = 10;
        int ara[n];
        for(int i = 0; i < n; i++) cin >> ara[i];

        int desc = 1;
        for(int i = 1; i < n; i++){
            if(ara[i-1] < ara[i]){
                desc = 0;
                break;
            }
        }

        int asc = 1;
        for(int i = 1; i < n; i++){
            if(ara[i-1] > ara[i]){
                asc = 0;
                break;
            }
        }

        if(asc == 1 || desc == 1){
            printf("Ordered\n");
        }else{
            printf("Unordered\n");
        }
    }
}
