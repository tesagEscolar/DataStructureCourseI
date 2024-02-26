#include <bits/stdc++.h>

using namespace std; 
using func = function<string()>;

class Menu {
private:
  map<int, string> menuSteps;
  int numberOfOptions;  

public:
  menu(int _numberOfOptions);
    

  ~menu();

  void addOption();

  ostream& operator<<(ostream&);

};