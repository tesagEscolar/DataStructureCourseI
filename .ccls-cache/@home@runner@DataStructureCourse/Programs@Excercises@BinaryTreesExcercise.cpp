#include "../../Utils/DataStructures/Trees/BinaryTree.cpp"
#include "../../Utils/Validation/UserInput.cpp"
#include "../Excercise.cpp"

class BinaryTreesDS : public Excercise {

private:
  map<int, std::function<void(Ex1 *)>> executionFunctions;
  BinaryTree<int> tree;

public:
  Ex1() : Excercise(2) {

    executionFunctions = {{1, &Ex1::showListElements},
                          {2, &Ex1::insertListElement}};

    this->menu.addOption("Show All List Elements");
    this->menu.addOption("Insert Element in tree");
  }

  void showListElements() { tree.printInorder();  }

  void insertListElement() {
    UserInput<int> ui("Entre el elemento: ");
    tree.insert(ui.getUserInput());
  }

  void executeExcercise(int option) { executionFunctions[option](this); }
};