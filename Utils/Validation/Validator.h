#include <string>

#ifndef HEADER_VALIDATOR_
#define HEADER_VALIDATOR_
template<typename  T> class Validator {  
  protected:
  const std::string errorMsg; 
  virtual bool validate(T input) = 0;
};
#endif