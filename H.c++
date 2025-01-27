#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float n, m;
    cin >> n  >> m;
    cout << "floar" << n << "/" << m << "=" << floor(n/m) << endl;
    cout << "ceil" << n << "/" << m << "=" << ceil(n/m) << endl;
    cout << "round" << n << "/" << m << "=" << round(n/m) << endl;
    return 0;

}

/* output
5 10
floar5/10=0
ceil5/10=1
round5/10=1*/