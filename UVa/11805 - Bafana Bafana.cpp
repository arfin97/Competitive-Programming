#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    for(int tr = 1; tr <= tc; tr++) {
        int n, k, p;
        scanf("%d %d %d", &n, &k, &p);
        int ans = (k+p)%n;
        if(ans == 0) ans = n;
        printf("Case %d: %d\n", tr, ans);
    }


    return 0;
}
