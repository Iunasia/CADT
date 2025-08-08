#include <iostream>
using namespace std;

class StudentRecord {
public:
    char grade = 'A';
};

int main() {
    int studentScore = 70;
    int student_score = 60;
    const int MAX_BUFFER_SIZE = 1000;

    StudentRecord student;

    cout << "Student Score: " << studentScore << endl;
    cout << "Grade = " << student.grade << endl;
    cout << "Student score = " << student_score << endl;
    cout << "Max buffer size = " << MAX_BUFFER_SIZE << endl;

    return 0;
}
