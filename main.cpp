#include "Programs/ExcerciseFactory.cpp"
#include <iostream>
using namespace std;


int main() {
  ExcerciseFactory::createExcercise(ExcerciseName::Binary_Trees_DS)->execute();
}