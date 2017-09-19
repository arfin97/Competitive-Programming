//https://www.youtube.com/watch?v=7pMLa8OWYwk
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

int main(){
    double a, b, c;
    while(scanf("%lf %lf %lf", &a, &b, &c) == 3){
        double s = (a + b + c)/2.0;
        double area = sqrt(s*(s-a)*(s-b)*(s-c));
        double ans = (4.0/3.0) * area;
        (area > 0) ? printf("%0.3lf\n", ans) : printf("-1.000\n");
    }
}
