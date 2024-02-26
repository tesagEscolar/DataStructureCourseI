#include "../../Utils/DataStructures/LinkedList/LinkedList.cpp"
#include "../../Utils/Validation/UserInput.cpp"
#include "../Excercise.cpp"

class Ex1 : public Excercise {

private:
  map<int, std::function<void(Ex1 *)>> executionFunctions;
  LinkedList<int> list;

public:
  Ex1() : Excercise(2) {

    executionFunctions = {{1, &Ex1::showListElements},
                          {2, &Ex1::insertListElement}};

    this->menu.addOption("Show All List Elements");
    this->menu.addOption("Insert Element in List");
  }

  void showListElements() { cout << list << endl<<endl; }

  void insertListElement() {
    UserInput<int> ui("Entre el elemento: ");
    list.insert(ui.getUserInput());
  }

  void executeExcercise(int option) { executionFunctions[option](this); }
};