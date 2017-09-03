//https://www.urionlinejudge.com.br/judge/en/problems/view/1786
#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << (x) << endl;
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
using namespace std;

int main(){
    string str;
    while(cin >> str){
        //for b1;
        int counter = 1;
        int b1 = 0;
        for(int i = 0; i < str.length(); i++){
            int digit = int(str[i]-'0');
            b1 += (digit*counter);
            counter++;
        }
        b1 = b1%11;
        if(b1 == 10) b1 = 0;

        //for b2;
        counter = 9;
        int b2 = 0;
        for(int i = 0; i < str.length(); i++){
            int digit = int(str[i]-'0');
            b2 += (digit*counter);
            counter--;
        }
        b2 = b2%11;
        if(b2 == 10) b2 = 0;
//        for(int i = 0; i < str.length(); i++){
//            printf("%c", str[i]);
//            if((i+1)%3 == 0 && (i+1) != str.length()) printf(".");
//        }
        cout <<str[0]<<str[1]<<str[2]<<'.'<<str[3]<<str[4]<<str[5]<<'.'<<str[6]<<str[7]<<str[8]<<'-'<<b1<<b2<<endl;
    }
    return 0;
}
