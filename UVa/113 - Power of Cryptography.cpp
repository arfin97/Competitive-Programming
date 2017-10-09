#include <bits/stdc++.h>
using namespace std;
#define d(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
#define ull unsigned long long

int main() {
    double n, p;
    while(cin >> n >> p){
        printf("%0.0lf\n", pow(p, 1/n));

    }
}
