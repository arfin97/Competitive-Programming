#include <bits/stdc++.h>
using namespace std;
#define d(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));


int main() {
    int tc;
    cin >> tc;
    string str;
    double a, b;
    double ans;
    for(int tr = 1; tr <= tc; tr++) {
        cin >> a;
        getline(cin, str);
        b = (str.length() > 3)? b = str[3]-'0': 0;
        ans = a*0.5+b*0.05;
        cout << "Case " << tr << ": " << ans << endl;
    }
    return 0;
}
