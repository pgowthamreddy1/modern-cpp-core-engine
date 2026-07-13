#include <iostream>
using namespace std;
int main() {
    int a,b,sum=0;
    int differ=0,difference=0;
    cin >> a >> b;
    sum= a + b;
    differ = a-b;
    difference = b-a;
    if(differ>0)
    {
    cout << sum << endl<< differ;
    }
    else if(difference>0)
    {
        cout << sum << endl<< difference;
    }
    
    

    return 0;
}
