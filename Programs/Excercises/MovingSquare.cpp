#include <ctime>
#include<unistd.h>

#include "../Excercise.cpp"

class MovingSquare: public Excercise {

private:
  map<int, std::function<void(MovingSquare *)>> executionFunctions;
  
  void movingSquare() {

    for(int i = 0; i < 5; i++){
      cout << setw(4*i)<<"****";
      sleep(1);
    }
  }

  
  void wait(int sec)
  {
    clock_t endwait;
    endwait = clock() + sec * CLOCKS_PER_SEC;
    while (clock() < endwait) {}
  }


public:
    MovingSquare() : Excercise(1) {
      executionFunctions = {{1, &MovingSquare::movingSquare}};
    
      this->menu.addOption("Show Moving Square");
  }




  
  void executeExcercise(int option) { executionFunctions[option](this); }
};