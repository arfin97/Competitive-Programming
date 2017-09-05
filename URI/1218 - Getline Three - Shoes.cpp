//https://www.urionlinejudge.com.br/judge/en/problems/view/1218
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << (x) << endl;
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int main(){
    string shoe;
    int tr = 1;
    int first_print = 0;
    while(cin >> shoe){
    	if(first_print != 0) cout << endl;
        first_print = 1;
        printf("Caso %d:\n", tr);
        tr++;
        int payer = 0;
        int male = 0;
        int female = 0;
        getchar();
        string data;
        getline(cin, data);
        for(int i = 0; i < data.length(); i+=5){
            if(data[i] == shoe[0] && data[i+1] == shoe[1]){
                payer++;
                if(data[i+3] == 'M') male++;
                if(data[i+3] == 'F') female++;
            }
        }

        printf("Pares Iguais: %d\n", payer);
        printf("F: %d\n", female);
        printf("M: %d\n", male);

    }
    return 0;
}
