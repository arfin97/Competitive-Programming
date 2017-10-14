#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
#define siz 1000000
bool siv[siz];
vector<unsigned long long int> prime;
void sieve() {
    memset(siv, true, sizeof(siv));
    int root = sqrt(siz);
    for(int i = 2; i<=root; i++) {
        for(int j = i*2; j <= siz; j+=i) {
            siv[j] = false;
        }
    }
}

void pri() {
    sieve();
    siv[0] = false;
    siv[1] = false;
    for(int i = 0; i < siz; i++) if(siv[i] == true) prime.push_back(i);
}

unsigned long long int rev(unsigned long long int num){
    unsigned long long int rev = 0;
    while(num != 0){
        rev = (rev*10) + (num%10);
        num /= 10;
    }
    return rev;
}

int main() {
    pri();
    unsigned long long int num;
    while(cin >> num){
        unsigned long long int r = rev(num);
        if((siv[num] == true && siv[r] == true) && (num != r)){
            printf("%llu is emirp.\n", num);
        }
        else if(siv[num] == true){
            printf("%llu is prime.\n", num);
        }
        else{
            printf("%llu is not prime.\n", num);
        }
    }
    return 0;
}
