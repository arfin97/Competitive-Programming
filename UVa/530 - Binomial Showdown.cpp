#include <bits/stdc++.h>
using namespace std;
#define d(x) cout << #x << " = " << (x) << endl;
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
#define siz 1000000
unsigned long long nCr(unsigned long long n,long long m) {
    long long res=1,i;
    if(n-m<m)
        m=n-m;
    for(i=1; i<=m; i++,n--) {
        res=res*n;
        res=res/i;
    }
    return res;
}
int main() {
    int n, r;
    while(cin >> n >> r){
        if(n == 0 && r == 0) break;
        cout << nCr(n, r) << endl;
    }
    return 0;
}
