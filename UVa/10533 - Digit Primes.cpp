#include <bits/stdc++.h>
using namespace std;
#define d(x) cout << #x << " = " << (x) << endl;
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));
#define siz 1000010
#define max 1000002
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

unsigned long long int sod(unsigned long long int num) {
    unsigned long long int sum = 0;

    while(num != 0) {
        int digit = num%10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

unsigned long long int bal[1000005];

void precalc() {
    siv[0] = false;
    siv[1] = false;
    
    int n = 0;
    int p = 1000005;
    int cnt = 0;
    for(int i = n; i < p; i++) {
        if(siv[i] == true && siv[sod(i)] == true) {
                cnt++;
        }
        bal[i] = cnt;
    }
}

int main() {
    sieve();
    precalc();

    int tc;
    scanf("%d", &tc);
    for(int tr = 1; tr <= tc; tr++) {
        unsigned long long int n;
        unsigned long long int p;
        scanf("%llu %llu", &n, &p);
        if((n-1) < 0) n = 1;
        printf("%llu\n", bal[p]-bal[n-1]);
    }   


    return 0;
}
