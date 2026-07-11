#include <iostream>
using namespace std;
struct employee
    {
        string company;
        int id;
        string name;
        float salary;
        string department;
        
    };
int main() {
    struct employee gowtham;
    gowtham.company = "google";
    gowtham.id = 1;
    gowtham.name = "gowtham";
    gowtham.salary = 100000;
    gowtham.department = "software";

    struct employee purushothama_reddy;
    purushothama_reddy.company = "TCS";
    purushothama_reddy.id = 2;
    purushothama_reddy.name = "purushothama reddy";
    purushothama_reddy.salary = 200000;
    purushothama_reddy.department = "software";

    struct employee jyothi;
    jyothi.company = "amazon";
    jyothi.id = 3;
    jyothi.name = "jyothi";
    jyothi.salary = 30000;
    jyothi.department = "hardware";
cout <<endl;
cout <<endl;
cout <<endl;
    cout << "        ************ EMPLOYEE DETAILS ************" << endl;
    cout << "       --------------------------------------------"<<endl;
    cout << "        name:       " << gowtham.name                                 << endl<<endl;
    cout << "        id:         " << gowtham.id                                     << endl<<endl;
    cout << "        company:    " << gowtham.company                           << endl<<endl;
    cout << "        salary:     " << gowtham.salary                             << endl<<endl;
    cout << "        department: " << gowtham.department                    << endl;
    cout << "       ---------------------------------------------" << endl;
    cout <<endl;
    cout <<endl;
         cout << "        ************ EMPLOYEE DETAILS ************" << endl;
    cout << "       --------------------------------------------"<<endl;
    cout << "        name:       " << purushothama_reddy.name <<endl<<endl;
    cout << "        id:         " << purushothama_reddy.id << endl<<endl;
    cout << "        company:    " << purushothama_reddy.company << endl<<endl;
    cout << "        salary:     " << purushothama_reddy.salary << endl<<endl;
    cout << "        department: " << purushothama_reddy.department << endl;
    cout << "       ---------------------------------------------" << endl;
    cout <<endl;
    cout <<endl;
    cout <<"        ************ EMPLOYEE DETAILS ************" << endl;
    cout << "       --------------------------------------------"<<endl;
    cout << "        name:       " << jyothi.name                               << endl<<endl;
    cout << "        id:         " << jyothi.id                               << endl<<endl;
    cout << "        company:    " << jyothi.company                           << endl<<endl;
    cout << "        salary:     " << jyothi.salary                             << endl<<endl;
    cout << "        department: " << jyothi.department                     << endl;
    cout << "       ---------------------------------------------" << endl;
    cout <<endl;
    cout <<endl;
    return 0;
}
