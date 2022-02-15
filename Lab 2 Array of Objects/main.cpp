// Demo Time: 7:33PM
#include <iostream>
#include "Student.h"

int main() {
  Student StudentArr[5] = {{"Tom",85},{"Alice",71},{"Jack",93},{"Mary",65},{"Sue",54}};
  for(int i = 0; i < 5; i++)
  {
    StudentArr[i].print();
  }
}
