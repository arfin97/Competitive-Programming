//https://www.urionlinejudge.com.br/judge/en/problems/view/1278
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << (x) << endl;
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int main(){
    int tc;
    int first_print = 0;
    while(cin >> tc){
    	if(tc == 0) break;
    	if(first_print == 1) cout << endl;
    	first_print = 1;
        getchar();
        int hi_line = 0;
        vector<string> v;
        for(int tr = 0; tr < tc; tr++){
            string str;
            getline(cin, str);
            int i = 0;
            string res;
            while(str[i] == ' ') i++;
            while(str[i] != '\0'){
                if(isalpha(str[i])){
                    while(isalpha(str[i]) != 0 && str[i] != '\0'){
                        res+= str[i];
                        i++;
                    }
                }

                if(str[i] == ' '){
                    while(str[i] == ' ' && str[i] != '\0'){
                        i++;
                    }
                    if(str[i] != '\0' && isalpha(str[i])){
                        res+=' ';
                    }
                }
            }
            if(res.length() > hi_line) hi_line = res.length();
            v.push_back(res);
        }
        for(int i = 0; i < v.size(); i++){
            cout << right << setw(hi_line) << v[i] << endl;
        }

    }
    return 0;
}
