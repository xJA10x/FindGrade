/**********************************

Find Grade

***********************************/

#include <iostream>
using namespace std;

// Function prototype.
// Takes one parameter,
// variable grade in the main function.
int findGrade(int grade);

int main() {

  // Outputs empty line.
  cout << endl;
  // Outputs to the console.
  cout << "############### Running Program ###################" << endl;
  // Outputs empty line.
  cout << endl;

  // Declares variable.
  int grade;
  // Declares variable
  // to store function call.
  int theGrade;
  // Declares loop control variable.
  int control;

  // Prompts user.
  cout << "Enter -1 to quit program: ";
  // Stores input in the variable control;
  cin >> control;
  // Outputs empty line.
  cout << endl;

  // Builds sentinel while loop.
  while(control != -1) {

    // Prompts user.
    cout << "Please enter grade: ";
    // Stores input in the variable grade.
    cin >> grade;
    // Outputs emtpy line.
    cout << endl;

    // Function call.
    // Takes one parameter,
    // stores output in the variable theGrade.
    theGrade = findGrade(grade);

    // Prompts user.
    cout << "Enter -1 to quit program: ";
    // Stores input in the variable control.
    cin >> control;
    // Outputs empty line.
    cout << endl;

  }

  // Outputs empty line.
  cout << endl;
  // Outputs to the console.
  cout << "################ Exiting Program ####################" << endl;
  // Outputs empty line.
  cout << endl;

  // Exits main function.
  // Returns 0 the Operating System.
  return 0;

}

// Builds function.
// Takes one parameter,
// variable grade in the main function.
int findGrade(int grade) {

  // Builds if statement.
  if(grade >= 90) {

    cout << "Grade is A" << endl;

  } else if(grade >= 80) {

    cout << "Grade is B" << endl;

  } else if(grade >=  70) {

    cout << "Grade is C" << endl;

  } else if(grade >= 60) {

    cout << "Grade is D" << endl;

  } else {

    cout << "Grade is F" << endl;

  }

  // Returns grade.
  return grade;

}
