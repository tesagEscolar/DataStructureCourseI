#include "../../Utils/DataStructures/Trees/BinaryTree.cpp"
#include "../../Utils/Validation/UserInput.cpp"
#include "../Excercise.cpp"

class BinaryTreesDS : public Excercise {

private:
  map<int, std::function<void(BinaryTreesDS *)>> executionFunctions;
  BinaryTree<int> tree;

public:
  BinaryTreesDS() : Excercise(4) {

    executionFunctions = {{1, &BinaryTreesDS::showInorder},
                          {2, &BinaryTreesDS::showPreOrder},
                          {3, &BinaryTreesDS::showPostOrder},
                          {4, &BinaryTreesDS::insertListElement}};

    tree = BinaryTree<int>();
    this->menu.addOption("Print Inorder");
    this->menu.addOption("Print PreOrder");
    this->menu.addOption("Print PostOrder");
    this->menu.addOption("Insert Element in tree");
  }

  void showInorder() {
    tree.Inorder();
    cout << endl;
  }

  void showPostOrder() {
    tree.postOrder();
    cout << endl;
  }

  void showPreOrder() {
    tree.preOrder();
    cout << endl;
  }

  void insertListElement() {
    UserInput<int> ui("Entre el elemento: ");
    tree.insert(ui.getUserInput());
  }

  void executeExcercise(int option) { executionFunctions[option](this); }
};