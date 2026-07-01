#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    unsigned int a;
   unsigned long b;
    char c;
    float d;
    double e;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    
    cout << fixed <<std::setprecision(9);
    
    cout <<""<< a;
    cout <<"\n"<< b;
    cout <<"\n"<< c;
     cout <<"\n"<< d;
      cout <<"\n"<< e;
      return 0;
      
}
