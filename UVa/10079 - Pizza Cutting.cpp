#include <bits/stdc++.h>
using namespace std;
#define d(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
#define ll long long
#define siz 1000000

int main() {
    ll int n;
    while(cin >> n && n >= 0){
        printf("%lld\n", ((n*(n+1))/2)+1);
    }

    return 0;
}
