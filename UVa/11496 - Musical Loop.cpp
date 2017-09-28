#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << endl
#define Read(r) freopen("in.txt", "r", stdin)
#define Write(w) freopen("out.txt", "w", stdout)
#define LL long long

int gcd(int a, int b);
unsigned long long int power(unsigned long long int base, unsigned long long int exp);

int main(){
    int n;
    while(cin >> n){
        if(n == 0) break;
        int ara[n];
        for(int i = 0; i < n; i++) cin >> ara[i];

        int peak = 0;
        for(int i = 1; i < n-1; i++){
            if(ara[i] < ara[i-1] && ara[i] < ara[i+1]){
                peak++;
            }
            else if(ara[i] > ara[i-1] && ara[i] > ara[i+1]){
                peak++;
            }
        }

        if(ara[n-1] < ara[n-2] && ara[n-1] < ara[0]) peak++;
        else if(ara[n-1] > ara[n-2] && ara[n-1] > ara[0]) peak++;

        if(ara[0] < ara[n-1] && ara[0] < ara[1]) peak++;
        else if(ara[0] > ara[n-1] && ara[0] > ara[1]) peak++;

        cout << peak << endl;
    }
    return 0;
}


int gcd(int a, int b){
    int temp;
    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

unsigned long long int power(unsigned long long int base, unsigned long long int exp){
    unsigned long long int result = 1;
    for(int i = 1; i <= exp; i++){
        result *= base;
    }
    return result;
}

//ios_base::sync_with_stdio(false);cin.tie(NULL);