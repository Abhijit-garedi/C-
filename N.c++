#include <iostream>
using namespace std;
int main(){
    char x;
    cin >>x;
    int i=x;
    if(i >= 97)
    cout << char(i-32);
    else 
    cout << char(i+32);
}
/*output
a
A*/