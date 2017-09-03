//https://www.urionlinejudge.com.br/judge/en/problems/view/1077
#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

using namespace std;
bool has_high_pres(char ch1/*top*/, char ch2){
    map<char, int> mymap;
    mymap['-'] = 1;
    mymap['+'] = 2;
    mymap['/'] = 3;
    mymap['*'] = 4;
    mymap['^'] = 5;

    if(mymap[ch1] > mymap[ch2])
        return true;
    else
        return false;
}

bool isoperator(char ch){
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
        return true;
    else
        return false;
}
bool isopening(char ch){
    if(ch == '(' || ch == '{' || ch == '[')
        return true;
    else
        return false;
}

bool isclosing(char ch){
    if(ch == ')' || ch == '}' || ch == ']')
        return true;
    return
        false;
}

int main(){
    int tc;
    cin >> tc;
    for(int tr = 1; tr <= tc; tr++){
        string str;
        cin >> str;
        stack<char> s;
        string res;
        for(int i = 0; i < str.length(); i++){
            if(!isoperator(str[i]) && !isopening(str[i]) && !isclosing(str[i])){
                res = res + str[i];
            }
            if(isoperator(str[i])){
                while(!s.empty() && !isopening(str[i]) && !has_high_pres(str[i], s.top())){
                    res += s.top();
                    s.pop();
                }
                s.push(str[i]);
            }
            if(isopening(str[i])){
                s.push(str[i]);
            }
            if(isclosing(str[i])){
                while(!s.empty() && !isopening(s.top())){
                    res += s.top();
                    s.pop();
                }
                s.pop();
            }
        }

        while(!s.empty()){
            res += s.top();
            s.pop();
        }

        cout << res << endl;
    }
    return 0;
}
