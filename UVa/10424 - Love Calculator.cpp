#include <bits/stdc++.h>
using namespace std;
#define D(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int sod(int n) {
    int rev = 0;
    while(n != 0) {
        rev += n%10;
        n = n/10;
    }
    return rev;
}

int one_digit(int n) {
    while(n >= 10) {
        n = sod(n);
    }
    return n;
}

int nam_sum(string str) {
    int temp = 0;
    for(int i = 0; i < str.length(); i++) {
        if(isalpha(str[i])) {
            int ch = tolower(str[i]) - 'a';
            temp += (ch+1);

        }
    }
    return temp;
}

int main() {

    string female;
    string male;
    while(getline(cin, female)) {
        getline(cin, male);
        int f = nam_sum(female);
        int m = nam_sum(male);

        f = one_digit(f);
        m = one_digit(m);

        int nom = (f > m) ? m:f;
        int denom = (f > m) ? f:m;

        double ans = (nom*1.0/denom*1.0)*100.0;
        cout << fixed << setprecision(2) << ans << " %" << endl;
    }

    return 0;
}
