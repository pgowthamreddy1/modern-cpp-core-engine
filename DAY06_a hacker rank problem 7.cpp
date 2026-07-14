#include <iostream>
using namespace std;
struct hacker
{
    int age;
    string firstname;
    string lastname;
    int grade;
};
int main() {
    hacker h;
    cin>>h.age;
    cin>>h.firstname;
    cin>>h.lastname;
    cin>>h.grade;

    cout << h.age << " " << h.firstname << " " << h.lastname << " " << h.grade;
    return 0;
}
