#ifndef STUDENT_h
#define STUDENT_h
#include <cstdlib>
#include <string>

using namespace std;

class Student{
private:
    string name;
    int score;
    char grade;
public:
    Student(); // Empty Constructor
    Student(string student_name, int student_score);
    void print(); // Display name (left alignment), score, grade
};

#endif