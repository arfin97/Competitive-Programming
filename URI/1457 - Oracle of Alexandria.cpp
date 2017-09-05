//https://www.urionlinejudge.com.br/judge/en/problems/view/1457
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << (x) << endl;
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int main(){
    int tc;
    cin >> tc;
    for(int tr = 1; tr <= tc; tr++){
        string str;
        cin >> str;
        long long int k = 0;
        long long int n = atoi(str.c_str());
        for(long long int i = 0; i < str.length(); i++){
            if(str[i] == '!') k++;
        }

        long long int fact = 1;
        long long int i = 0;
        while((n-(i*k)) > 0){
            fact = fact * ((n-(i*k)));
            i++;
        }
        printf("%lld\n", fact);
    }
    return 0;
}
