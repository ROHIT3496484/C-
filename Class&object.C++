
// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Teacher{ //Class is the blueprint of entities
    private: // Access Modifiers
    double salary; // Data Hiding
    public:
    Teacher(){
        cout<<"Hi, I am Constructor"<< endl;
        course = "head";
    }
    
    //properties/attributes
    string name;
    string dept;
    string subject;
    string course;
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
    Teacher t1; // Obejcts are the entities // constructor call
    t1.name = "Rana";
    t1.dept = "CSE";
    t1.subject = "C++";
    t1.changedept("ECE");
    t1.setsalary(50000);

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.getsalary() << endl;
    cout << "Course: " << t1.course << endl;

    return 0;
}

//Encapsulation is the wrapping up of data and member functions in a single unit called a class. The above teacher example is encapsulation.
// Used for data hiding--> Access Modifier-->> Private

// Constructor- Special method invoked automatically at the time of object creation. Used for initialization
--->Same name as class// Constructor does not have return type // Only called once(automatically), at object creation // Memory allocation happens when constructor is called

#include <iostream>
#include <string>
using namespace std;

class Teacher{ //Class is the blueprint of entities
    private: // Access Modifiers
    double salary; // Data Hiding
    public:
    // Non Parameterized constructor
    Teacher(){
        cout<<"Hi, I am Constructor"<< endl;
        course = "head";
    }
    //Parameterized Constructor
    Teacher(string n, string d, string s){
        this->name = n; // This keyword used for showing objedt properties
        this->dept = d;
        this->subject = s;
    }
    
    //properties/attributes
    string name;
    string dept;
    string subject;
    string course;
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
    void getinfo(){
    cout << "Name: " << name << endl;
    cout << "Department: " << dept << endl;
    cout << "Subject: " << subject << endl;
    cout << "Salary: " << getsalary() << endl;
    cout << "Course: " << course << endl;
    }
};
int main() {
    // Write C++ code here
    Teacher t1("Rana", "CSE", "C++"); // Obejcts are the entities // constructor call
    t1.getinfo();
    t1.changedept("ECE");
    t1.setsalary(50000);

    

    return 0;
}

// Constructor Overloading ----> Polymorphism
//Copy Constructor--->Default constructor used to copy properties of one object into another.

#include <iostream>
#include <string>
using namespace std;

class Teacher{ //Class is the blueprint of entities
    private: // Access Modifiers
    double salary; // Data Hiding
    public:
    // Non Parameterized constructor
    Teacher(){
        cout<<"Hi, I am Constructor"<< endl;
        course = "head";
    }
    //Parameterized Constructor
    Teacher(string n, string d, string s){
        this->name = n;
        this->dept = d;
        this->subject = s;
    }
    
    //properties/attributes
    string name;
    string dept;
    string subject;
    string course;
    //Methods
    void changedept(string newdpt){
        dept = newdpt;
    }
    ~Teacher(){
        cout<< "Hi, I am destructor";
    }
    //setter- private values ko set karna
    void setsalary(double s){
        salary = s;
    }
    //getter- private values ki value get karne k liye use karte hai
    double getsalary(){
        return salary;
    }
    void getinfo(){
    cout << "Name: " << name << endl;
    cout << "Department: " << dept << endl;
    cout << "Subject: " << subject << endl;
    cout << "Salary: " << getsalary() << endl;
    cout << "Course: " << course << endl;
    }
};
int main() {
    // Write C++ code here
    Teacher t1("Rana", "CSE", "C++"); // Obejcts are the entities // constructor call
    //t1.getinfo();
    Teacher t2(t1);
    t2.getinfo();// default copy constructor
    return 0;
}
//Shallow -A shallow copy of an object copies all of the member values from one object to another.
// Deep Copy- A deep copy, on the other hand, not only copies the member values but also makes copies of any dynamically allocated memory that the members point to.
// Dynamic Memory Allocation

// Destructor--> static deallocate the memory for dynamically allocated memory, we have to delete them one by one.


//Inheritance ----> when properties and member functions of the  base class are passed on to the derived class

#include <iostream>
#include <string>
using namespace std;

class Student{ //Class is the blueprint of entities
    
    public:
    // Non Parameterized constructor
    string name;
    string rollno;
    //Parameterized Constructor
    Student(string n, int r){
        this->name = n;
        this->rollno = r;
    }
    
};   //properties/attributes
class Person: public Student{
    public:
    int classname;
    Person(string name, int rollno, int classname):Student(name, rollno){
        this->classname = classname;
        
    }
    void getinfo(){
    cout << "Name: " << name << endl;
    cout << "ROllno: " << rollno << endl;
    cout << "class: " << classname << endl;
    }  
};
int main() {
    // Write C++ code here
    Person P1("Rana", 21, 4);
    P1.getinfo();
    return 0;
}

// Polymorphism ---> ability of objects to take on different forms depending on the context in which they used.
// Compile time Polymorphism--> constructor overloading and function overloading
#include <iostream>
#include <string>
using namespace std;

class values{ //Class is the blueprint of entities
    public:
    void show(int x){
        cout<<x<< endl;
    }
    void show(char ch){
        cout<<ch<<endl;
    }
   
};
int main() {
    // Write C++ code here
    values p1;
    p1.show(2);
    values p2;
    p2.show('w');
    return 0;
}
// Run Time Polymorphism --> function overiding
// Virtual function - dynamic in nature, called during runtime
#include <iostream>
#include <string>
using namespace std;

class parent{ //Class is the blueprint of entities
    public:
    void show(){
        cout<<"This is parent\n";
    }
    virtual void hell(){
        cout<<"This is virtual parent\n";
    }
};
class child: public parent{
    public:
    void show(){
        cout<<"This is child\n";
    }
    void hell(){
        cout<<"This is virtual child\n";
    }
   
};
int main() {
    // Write C++ code here
    child c;
    c.show();
    c.hell();
    return 0;
}

// Abstraction--> Hiding all unnecessary details and showing only important parts.
