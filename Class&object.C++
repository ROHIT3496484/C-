// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Teacher{ //Class is the blueprint of entities
    private: 
    double salary;
    public:
    // properties and attributes
    string name;
    string dept;
    string subject;
    //Methods
    void changedept(string newdpt){
        dept = newdpt;
    }
    //setter- private values ko set karna
    void setsalary(double s){
        salary = s;
    }
    //getter- private values ki value get karne k liye use karte hai
    double getsalary(){
        return salary;
    }
};
int main() {
    // Write C++ code here
    Teacher t1; // Obejcts are the entities
    t1.name = "Rana";
    t1.dept = "CSE";
    t1.subject = "C++";
    t1.changedept("ECE");
    t1.setsalary(50000);

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.getsalary() << endl;

    return 0;
}
