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
int main()
{
    int n;
    int i;
    cout << "Enter the number of employees: ";
    cin >> n;
    struct employee employees[n];
    for ( i = 0; i < n; i++)
    {
        cout << "Enter details for employee   " << i + 1 << ":" << endl;
        cout << "Company: ";
        cin >> employees[i].company;
        cout << "ID: ";
        cin >> employees[i].id;
        cout << "Name: ";
        cin >> employees[i].name;
        cout << "Salary: ";
        cin >> employees[i].salary;
        cout << "Department: ";
        cin >> employees[i].department;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    

    for( i=0 ; i< n; i++)
    {
        cout << "  ************ EMPLOYEE NO : "<<i+1<< "DETAILS ************" << endl;
        cout << "   --------------------------------------------------------" << endl;
        cout << "    name:       " << employees[i].name << endl
             << endl;
        cout << "    id:         " << employees[i].id << endl
             << endl;
        cout << "    company:    " << employees[i].company << endl
             << endl;
        cout << "    salary:     " << employees[i].salary << endl
             << endl;
        cout << "    department: " << employees[i].department << endl;
        cout << "   --------------------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
   



    return 0;
}
