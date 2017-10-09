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
        int sh, sm, eh, em;
        scanf("%d:%d %d:%d", &sh, &sm, &eh, &em);
        sh = sh*60 + sm, eh = eh*60 + em;

        int ah, am, bh, bm;
        scanf("%d:%d %d:%d", &ah, &am, &bh, &bm);
        ah = ah*60 + am, bh = bh*60 + bm;

        printf("Case %d: ", tr);
        if(eh < ah || sh > bh)
            puts("Hits Meeting");
        else
            puts("Mrs Meeting");
    }
    return 0;
}
