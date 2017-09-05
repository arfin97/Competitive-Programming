//https://www.urionlinejudge.com.br/judge/en/problems/view/1276
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << (x) << endl;
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int main(){
    string str;
    while(getline(cin, str)){
        sort(str.begin(), str.end());
        for(int i = 0; i < str.length(); i++){
            for(int j = i+1; j < str.length(); j++){
                if(str[i] == str[j]){
                    str[j] = '0';
                }
            }
        }

        string str2;
        for(int i = 0; i < str.length(); i++){
            if(isalpha(str[i]) != 0 && str[i] != '0') str2 += str[i];
        }
        str = str2;

        string alpha = "abcdefghijklmnopqrstuvwxyz";
        int first_print = 0;
        for(int i = 0; i < str.length(); i++){
            char first;
            char last;
            for(int j = 0; j < alpha.length(); j++){
                first = str[i];
                last = str[i];
                int flag = 0;
                while((str[i] == alpha[j]) && (i < str.length()) && (j < alpha.length())){
                    i++; j++;
                    flag = 1;
                }
                if(flag == 1){
                    i--; j--;
                    last = str[i];
                    break;
                }
            }
            if(first_print == 0){cout << first << ":" << last; first_print = 1;}
            else{cout <<", " << first << ":" << last;}
        }
        cout << endl;
    }
    return 0;
}
