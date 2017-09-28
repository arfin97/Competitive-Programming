#include <bits/stdc++.h>
using namespace std;
#define D(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int main(){
    int tc;
    cin >> tc;
    getchar();
    map<string, set<string> > mymap;
    for(int tr = 1; tr <= tc; tr++){
        string str;
        getline(cin, str);
        int pos = str.find(" ");
        mymap[str.substr(0, pos)].insert(str.substr(pos+1));
    }

    map<string, set<string> >::iterator it;
    for(it = mymap.begin(); it != mymap.end(); ++it){
        cout << (*it).first << " " << (*it).second.size() << endl;
    }
    return 0;
}
