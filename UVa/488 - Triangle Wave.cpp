#include <bits/stdc++.h>
using namespace std;
#define d(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
#define ull unsigned long long

int main() {
    int n, f;
    int tc;
    cin >> tc;
    for(int tr = 1; tr <= tc; tr++){
        cin >> n >> f;
        for(int k = 1; k <= f; k++) {
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= i; j++) {
                    printf("%d", i);
                }
                printf("\n");
            }
            for(int i = n-1; i >= 1; i--) {
                for(int j = i; j >= 1; j--) {
                    printf("%d", i);
                }
                printf("\n");
            }
            if(k != f) printf("\n");
        }
        if(tr != tc) printf("\n");
    }
}
