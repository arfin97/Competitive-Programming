#include <bits/stdc++.h>
#define d(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
#define ull unsigned long long
using namespace std;
ull int fib[1000000];
ull int total[1000000];
int main() {
    fib[0] = 1;
    fib[1] = 1;
    total[0] = 1;
    total[1] = 2;
    for(ull int i = 2; i < 1000; i++) {
        fib[i] = fib[i-1]+fib[i-2];
        total[i] = total[i-1]+fib[i];
    }
    int n;
    while(cin >> n && n >= 0) {
        if(n == 0) {
            printf("%d %d\n", 0, 1);
        } else {
            cout << total[n-1] << " " << total[n] << endl;
        }
    }
    return 0;
}
