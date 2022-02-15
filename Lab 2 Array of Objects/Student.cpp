#include <iostream>
#include <string>
#include "Student.h"

Student::Student(){
  
}
Student::Student(string student_name, int student_score){
  name = student_name;
  score = student_score;

  if (score >= 90 && score <= 100)
    grade = 'A';
  else if (score < 90 && score >= 80)
    grade = 'B';
  else if (score >= 70 && score < 80)
    grade = 'C';
  else if (score < 70 && score >= 60)
    grade = 'D';
  else
    grade = 'F';
};
void Student::print(){
  cout << name << "    " << score << "    " << grade << endl;
};