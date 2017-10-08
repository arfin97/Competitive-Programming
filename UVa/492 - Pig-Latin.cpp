#include <bits/stdc++.h>
using namespace std;
#define d(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int main() {

    string str;
    while(getline(cin, str)) {
        string word  = "";

        int first = 0;
        for(int i = 0; i < str.length(); i++) {
            if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                word+=str[i];
            } else {
                if(!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && word == "") {
                    printf("%c", str[i]);
                    continue;
                }

                int flag = 1;
                for(int i = 0; i < word.length(); i++) {
                    if(!isalpha(word[i])) {

                        flag = 0;
                    }
                }
                if(flag == 1) {
                    char first = tolower(word[0]);
                    if(first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u') {
                        word+="ay";
                    } else {
                        word = word + word[0] + "ay";
                        word.erase(word.begin());
                    }
                }
                if(first == 1) {
                    cout << " " << word;
                } else {
                    cout << word;
                }
                printf("%c", str[i]);
                word = "";
            }
        }
        if(word != "") {
            int flag = 1;
            for(int i = 0; i < word.length(); i++) {
                if(!isalpha(word[i])) {
                    flag = 0;
                }
            }
            if(flag == 1) {
                char first = tolower(word[0]);
                if(first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u') {
                    word+="ay";
                } else {
                    word = word + word[0] + "ay";
                    word.erase(word.begin());
                }
            }
            if(first == 1) {
                cout << " " << word;
            } else {
                cout << word;
            }
            word = "";
        }

        cout << endl;
    }
    return 0;
}
