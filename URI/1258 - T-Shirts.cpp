//https://www.urionlinejudge.com.br/judge/en/problems/view/1258
#include <bits/stdc++.h>
using namespace std;

struct tee{
    string name;
    string color;
    string s_ize;
};

bool cmp(const struct tee& s1, const struct tee& s2){
    if(s2.color.compare(s1.color) > 0) return true;
    else if((s1.color.compare(s2.color)) == 0 && (s2.s_ize.compare(s1.s_ize) < 0)) return true;
    else if((s1.color.compare(s2.color)) == 0 && (s1.s_ize.compare(s2.s_ize) == 0) && (s2.name.compare(s1.name) > 0)) return true;
    else false;
}

int main(){
    int n;
    int first = 0;
    while(scanf("%d", &n) == 1){
    	if(n == 0) break;
    	if(first != 0) cout << endl;
    	first = 1;
        vector<tee> shirt;
        for(int i = 0; i < n; i++){
            getchar();
            //input variables
            string n;
            string c;
            string s;
            //taking input
            getline(cin, n);
            cin >> c;
            cin >> s;
            //pushing back input
            shirt.push_back(tee());
            shirt[i].name = n;
            shirt[i].color = c;
            shirt[i].s_ize = s;

        }

        sort(shirt.begin(), shirt.end(), cmp);

        for(int i = 0; i < shirt.size(); i++){
            cout << shirt[i].color << " ";
            cout << shirt[i].s_ize << " ";
            cout << shirt[i].name << endl;
        }
    }
    return 0;
}

