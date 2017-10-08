#include <bits/stdc++.h>
using namespace std;
#define d(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

unsigned int countSetBit(int n) {
    unsigned int cnt = 0;
    while(n) {
        n = (n&(n-1));
        cnt++;
    }
    return cnt;
}

string binary = "";
void convertToBinary(unsigned int n){
    if(n/2 != 0){
        convertToBinary(n/2);
    }
    binary += char((n%2)+'0');
}

int main() {
    int n;
    while(cin >> n && n) {
        convertToBinary(n);
        printf("The parity of %s is %d (mod 2).\n", binary.c_str(), countSetBit(n));
        binary.clear();
    }
    return 0;
}
