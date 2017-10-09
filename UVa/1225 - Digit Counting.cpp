#include <bits/stdc++.h>
using namespace std;
#define d(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
#define ull unsigned long long

int main() {
    int tc;
    cin >> tc;
    for(int tr = 1; tr <= tc; tr++){
        int cnt[10];
        for(int i = 0; i < 10; i++) cnt[i]=0;
        int n;
        cin >> n;
        for(int i=1; i<=n; i++) {
            int num = i;
            while(num != 0) {
                int digit = num%10;
                cnt[digit]++;
                num/=10;
            }
        }
        for(int i = 0; i < 9; i++) printf("%d ", cnt[i]);
        printf("%d\n", cnt[9]);
    }
    return 0;
}
