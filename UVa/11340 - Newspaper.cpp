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
        int k;
        cin >> k;
        getchar();

        double ara[300];
        memset(ara, 0, sizeof(ara));
        char ch;
        double val;
        for(int i = 0; i < k; i++){
            scanf(" %c %lf", &ch, &val);
//            cout << ch << " " << val << endl;
            int temp = ch;
//            cout << temp << endl;
            ara[temp] = val;
        }

        int m;
        cin >> m;
        getchar();

        string str;
        double sum = 0;
        for(int i = 0; i < m; i++){
            getline(cin, str);
            for(int j = 0; j < str.length(); j++){
                sum += ara[int(str[j])];
            }
        }
        sum = sum/100.0;
        printf("%0.2lf$\n", sum);
    }
}
