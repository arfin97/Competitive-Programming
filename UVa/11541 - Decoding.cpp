#include <bits/stdc++.h>
#define d(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
using namespace std;
int main() {
    int tc;
    cin >> tc;
    for(int tr = 1; tr <= tc; tr++) {
        string str;
        cin >> str;
        printf("Case %d: ", tr);
        for(int i = 0; i < str.length(); i++) {
            if(isalpha(str[i])) {
                int num = 0;
                char ch = str[i];
                i++;
                while(isdigit(str[i])) {
                    num = (10*num)+(str[i]-'0');
                    i++;
                }

                for(int k = 0; k < num; k++) {
                    printf("%c", ch);
                }

                i--;
            }
        }
        printf("\n");
    }
    return 0;
}
