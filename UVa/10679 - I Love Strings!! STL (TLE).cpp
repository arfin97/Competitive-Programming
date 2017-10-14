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
        string str;
        cin >> str;
        int q;
        cin >> q;
        for(int i = 0; i < q; i++){
            string str2;
            cin >> str2;
            if(str.find(str2) != string::npos){
                printf("y\n");
            }else{
                printf("n\n");
            }
        }
    }
    return 0;
}
