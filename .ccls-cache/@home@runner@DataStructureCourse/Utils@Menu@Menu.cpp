#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#ifndef HEADER_MENU_
#define HEADER_MENU_
class Menu {
  private:
    map<int, string> menuSteps;
    int numberOfOptions;

public:
  map<int, string> executionFunctions;

  Menu(int _numberOfOptions) {
    numberOfOptions = _numberOfOptions;
    menuSteps[numberOfOptions + 1] = "Salir";
  }
  friend ostream &operator<<(ostream &out, const Menu &menuObject) {
    out << "Seleccione una de las siguientes opciones." << endl;
    for (auto const &m : menuObject.menuSteps) {
      out << m.first << ": " << m.second << endl;
    }
    return out;
  }

  friend istream &operator>>(istream &in, Menu &menuObject) {
    int option;
    cout << "Selection: ";
    in >> option;
    // menuObject.executeOption(option);
    cout << endl;
    return in;
  }

  // ~Menu();

  void addOption(string option) {
    if (menuSteps.size() > numberOfOptions)
      return;

    menuSteps[menuSteps.size()] = option;
  }
  // void executeOption(int option) { executionFunctions[option](); }
};
#endif
