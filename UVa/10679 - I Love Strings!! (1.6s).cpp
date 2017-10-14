#include <bits/stdc++.h>
using namespace std;

vector<int> lps;
void computeLPSArray(string str) {
    lps.resize(str.size());
    lps[0] = 0;
    int i = 1;
    int j = 0;
    while(i < str.size()) {
        if(str[j] == str[i]) {
            lps[i] = j+1;
            i++;
            j++;
        } else {
            if(j == 0) i++;
            else j = lps[j-1];
        }
    }
}

int KMPsearch(string str, string pattern) {
    computeLPSArray(pattern);

    int i = 0;
    int j = 0;
    int cnt = 0;

    while(i < str.length()) {
        if(str[i] == pattern[j]) {
            if(j == pattern.size()-1) {
                i++;
                j = 0;
                cnt++;

            } else {
                i++;
                j++;
            }
        } else {
            if(j == 0) i++;
            else j = lps[j-1];
        }
    }
    return cnt;
}

int main() {
    int tc;
    cin >> tc;
    for(int tr = 1; tr <= tc; tr++){
        string str;
        cin >> str;
        int q; cin >> q;
        string query;
        for(int i = 0; i < q; i++){
            cin >> query;
            if(KMPsearch(str, query)){
                printf("y\n");
            }else{
                printf("n\n");
            }
        }
    }
    return 0;
}
