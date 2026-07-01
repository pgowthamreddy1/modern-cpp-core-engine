#include <iostream>
using namespace std;

int x = 10; 

int main() {
    int x = 20;
    
    {
        int x = 30; 
        cout << x << endl;
    }
    
    cout << x << endl;
    return 0;

  
 /* the first no is 30
  and second is 20
  and to your question 
  ans is 
  the variable x takes 30 only between the braces inside 
  and when the braces over ,the compiler comes out then it takes the value of x as local variable 20 of the main function
  and also when the braces of main function also over then the compiler takes the value of x as 10 as it declared as the global variable in the total code  
*/

  
}
