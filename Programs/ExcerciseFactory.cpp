#include "./Excercises/Ex1.cpp"
#include "./Excercises/MovingSquare.cpp"
#include "./Excercises/BinaryTreesDS.cpp"
// #include "Excercise.cpp"

enum class ExcerciseName{
  Simple_Linked_Lists,
  Moving_Square,
  Binary_Trees_DS
};

class ExcerciseFactory {

  public:
    static Excercise* createExcercise(ExcerciseName name){
      switch(name){ 
        case ExcerciseName::Simple_Linked_Lists:
          return new Ex1();
        case ExcerciseName::Moving_Square:
          return new MovingSquare();
        case ExcerciseName::Binary_Trees_DS:
          return new BinaryTreesDS();
        default:
          return nullptr;
      }
    }

};