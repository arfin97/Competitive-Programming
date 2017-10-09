#include <bits/stdc++.h>
using namespace std;
#define d(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
#define ull unsigned long long

int main() {
    int n;
    while(cin >> n) {
        int ara[n];
        for(int i = 0; i < n; i++) cin >> ara[i];
        int flip = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if(ara[i] > ara[j]) {
                    flip++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", flip);
    }
}
