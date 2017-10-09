#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    for(int tr = 1; tr <= tc; tr++){
        double l;
        cin >> l;
        double radius = l/5.0;
        double circle =  (radius*radius)*acos(-1);
        double width = ((6.0*l)/10.0);
        double react = width*l;
        double area = react-circle;
        //cout << circle << " " << area << endl;
        printf("%0.2lf %0.2lf\n", circle, area);
    }
    return 0;
}
