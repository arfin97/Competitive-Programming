#include <bits/stdc++.h>
using namespace std;
/*First of all, this is an incredibly bad problem. The trick is based on incorrect math. The only reason I even found out how to solve it is by checking the UVa forums for a tip (only did so because I was frustrated?). The premise is straightforward ? find what range of factorials is within 10000 and 6227020800. That calculation can be done very easily. There?s some flawed logic regarding negative inputs however. I assumed there would be no negative inputs because negative factorials are undefined. Of course, the factorial of 0 (0 / 0) is undefined. The problem assumes this value to be infinity! As a result, an even factorial is an underflow, and an odd factorial is an overflow. Mathematically, this is blatantly wrong, so I think this is a poor problem altogether. You can see what the idea behind the logic is*/
int main() {
    int n;
    while(cin >> n) {
        if((n>=0 && n<=7) || (n<0 && n%2==0))
            printf("Underflow!\n");
        else if(n == 8)
            printf("40320\n");
        else if(n == 9)
            printf("362880\n");
        else if(n == 10)
            printf("3628800\n");
        else if(n == 11)
            printf("39916800\n");
        else if(n == 12)
            printf("479001600\n");
        else if(n == 13)
            printf("6227020800\n");
        else
            printf("Overflow!\n");
    }
    return 0;
}
