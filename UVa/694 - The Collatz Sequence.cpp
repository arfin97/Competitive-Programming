#include <bits/stdc++.h>
using namespace std;
#define D(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));



int main() {

    long long int a, l;

    for(long long int i = 1; scanf("%lld %lld", &a, &l) == 2 && a > -1 && l > -1; i++){
        long long int A = a;
        long long int limit = 0;
        while(a != 1 && a <= l) {
            if(a%2 == 0) a = a/2;
            else a = 3*a+1;
            limit++;
        }
        if(a == 1) limit++;
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", i, A, l, limit);
    }

    return 0;
}
