#ifndef HEADER_INCLUDED_
#define HEADER_INCLUDED_

#include "../Utils/Menu/Menu.cpp"
class Excercise {

protected:
  Menu menu = NULL;
  int numberOfOptions = 0;
  virtual void executeExcercise(int) = 0;

public:
  void execute() {
    int option;
    do {
      cout << this->menu << endl << "Option: ";
      cin >> option;
      if (option > numberOfOptions)
        return;

      executeExcercise(option);
    } while (true);
  }

  Excercise(int _numberOfOptions) {
    menu = Menu(_numberOfOptions);
    this->numberOfOptions = _numberOfOptions;
  }
};

#endif