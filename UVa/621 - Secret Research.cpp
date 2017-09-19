#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int main(){
    int tc;
    cin >> tc;
    for(int tr = 1; tr <= tc; tr++){
        string str;
        cin >> str;
        if(str == "1" || str == "4" || str == "78"){
            printf("+\n");
        }else if(str[str.length()-1] == '5' && str[str.length()-2] == '3'){
            printf("-\n");
        }else if(str[0] == '9' && str[str.length()-1] == '4'){
            printf("*\n");
        }else{
            printf("?\n");
        }
    }
}
