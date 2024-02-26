#include "Validator.h"
#include <iostream>
#include <limits>
using namespace std;


#ifndef HEADER_USERINPUT_
#define HEADER_USERINPUT_
template <class T> class UserInput {
private:
  string requestMsg;
  Validator<T> *const validators[];
  // bool validateValidators(T);

public:
  UserInput(string requestMsg) { this->requestMsg = requestMsg; }
  UserInput(string requestMsg, Validator<T> *const validators[]) {
    this->requestMsg = requestMsg;
    this->validators = validators;
  }

  T getUserInput() {
    cout << requestMsg;
    T input;
    do {
      cin >> input;
      if (!cin.fail())
        return input;

      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "You have entered invalid type input. Try again: ";
    } while (true);
  }
};
#endif