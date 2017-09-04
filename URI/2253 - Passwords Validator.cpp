//https://www.urionlinejudge.com.br/judge/en/problems/view/2253
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << (x) << endl;
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int main(){
    string str;
    while(getline(cin, str)){
        int upper = 0, lower = 0, digit = 0, punct = 1, space = 1, len = 0;
		if(str.length() >= 6 && str.length() <= 32) len = 1;

        for(int i = 0; i < str.length(); i++){
            if(isupper(str[i]) != 0) upper = 1;
            if(islower(str[i]) != 0) lower = 1;
            if(isdigit(str[i]) != 0) digit = 1;
            if(ispunct(str[i]) != 0) punct = 0;
            if(isspace(str[i]) != 0) space = 0;
        }
        if(upper && lower && digit && punct && space && len){
                printf("Senha valida.\n");
        }else{
            printf("Senha invalida.\n");
        }
    }
    return 0;
}
