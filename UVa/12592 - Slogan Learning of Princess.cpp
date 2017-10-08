#include <bits/stdc++.h>
using namespace std;
#define d(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int main(){
    int n;
    cin >> n;
    getchar();
    map<string, string> mymap;
    string temp1, temp2, query;
    for(int i = 0; i < n; i++){
        getline(cin, temp1);
        getline(cin, temp2);
        mymap[temp1] = temp2;
    }
    int q;
    cin >> q;
    getchar();
    for(int i = 0; i < q; i++){
        getline(cin, query);
        cout << mymap[query] << endl;
    }
    return 0;
}
