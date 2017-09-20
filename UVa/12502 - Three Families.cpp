#include <bits/stdc++.h>
using namespace std;
#define D(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int main(){
    int tc;
    cin >> tc;
    for(int tr = 1; tr <= tc; tr++){
        double a, b, money;
        cin >> a >> b >> money;
        double sum = a + b; //9
        double work_hour = sum/3.0; //3
        double a_did_more = a - work_hour; //5-3=2
        double a_will_get = (a_did_more*1.0/work_hour*1.0)*money*1.0; //2/3
        printf("%0.0lf\n", a_will_get);
    }
    return 0;
}
