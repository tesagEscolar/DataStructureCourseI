#include <iostream>

template<typename  T> class Validator {  

  virtual bool validate(T input);
};