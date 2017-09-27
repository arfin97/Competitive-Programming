#include <bits/stdc++.h>
using namespace std;
#define D(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int main() {
    string str;
    set<string> string_set;
    while(getline(cin, str)){
        string str2 = "";
        for(int i = 0; i < str.length(); i++) {
            if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                str2+=str[i];
            } else{
                transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
                string_set.insert(str2);
                str2 = "";
            }
        }
        transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
        if(str2.length() > 0) string_set.insert(str2);
    }
    set<string>::iterator it=string_set.begin();
        for(++it; it != string_set.end(); ++it){
            cout << *it << endl;
        }
    return 0;
}
