#include <bits/stdc++.h>
using namespace std;
#define d(x) cout << #x << " = " << (x) << endl;
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
#define uul unsigned long long

int main(){

    
    map<char, char> mymap;
    mymap['A'] = 'A';
    mymap['E'] = '3';
    mymap['H'] = 'H';
    mymap['I'] = 'I';
    mymap['J'] = 'L';
    mymap['L'] = 'J';
    mymap['M'] = 'M';
    mymap['O'] = 'O';
    mymap['S'] = '2';
    mymap['T'] = 'T';
    mymap['U'] = 'U';
    mymap['V'] = 'V';
    mymap['W'] = 'W';
    mymap['X'] = 'X';
    mymap['Y'] = 'Y';
    mymap['Z'] = '5';
    mymap['1'] = '1';
    mymap['2'] = 'S';
    mymap['3'] = 'E';
    mymap['5'] = 'Z';
    mymap['8'] = '8';
    
    string str;
    while(cin >> str){
        int len = str.length();
        int pali = 1;
        for(int i = 0; i < len; i++){
            if(str[i] != str[(len-1)-i]){
                pali = 0;
                break;
            }
        }

        int mirror = 1;
        for(int i = 0; i < len; i++){
            if(mymap.find(str[i]) != mymap.end()){
                if(mymap[str[i]] != str[(len-1)-i]){
                    mirror = 0;
                    break;
                }
            }
            else{
                mirror = 0;
                break;
            }
        }

        if(pali == 1 && mirror == 1) printf("%s -- is a mirrored palindrome.\n\n", str.c_str());
        else if(pali == 1 && mirror == 0) printf("%s -- is a regular palindrome.\n\n", str.c_str());
        else if(pali == 0 && mirror == 1) printf("%s -- is a mirrored string.\n\n", str.c_str());
        else printf("%s -- is not a palindrome.\n\n", str.c_str());
    }
    
    return 0;
}
