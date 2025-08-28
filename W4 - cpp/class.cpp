#include <iostream>
#include <string>

using namespace std;

class student {
    public: 
        int age;
        string name;
    public:
        void setName(string n){
            name = n;
        }

        void setAge(int a){
            age = a;
        }
        void displayStudent(){
            cout << "student name: " << name << endl;
            cout << "student age: " << age << endl;

        }
};


// int main(){
//         student student1;

//         student1.setName("ren");
//         student1.setAge(19);

//         student1.displayStudent();

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// class student {
// public:
//     int age;
//     string name;

//     // Parameterized constructor
//     // This function is automatically called when a 'student' object is created.
//     student(string n, int a) {
//         name = n;
//         age = a;
//     }

//     void displayStudent() {
//         cout << "student name: " << name << endl;
//         cout << "student age: " << age << endl;
//     }
// };

// int main() {
//     // Create a student object and initialize it using the constructor
//     // You pass the name and age directly during object creation.
//     student student1("ren", 19);

//     student1.displayStudent();

//     return 0;
// }