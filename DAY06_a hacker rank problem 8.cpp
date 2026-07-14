#include <iostream>
using namespace std;
int main() {
    string a,b,c;
    int length1,length2;
    cin >> a >> b;
    length1 = a.length();
    length2 = b.length();
    c = a + b;
    cout << length1 <<  " " << length2 << endl;
    cout << c << endl;
char c0 = a[0];
char c1 = b[0];
swap(c0,c1);
a[0] = c0;
b[0] = c1;
cout << a << " " << b ; 



    return 0;
}
