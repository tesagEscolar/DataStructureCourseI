#include "../Validator.h"
#include <string>

template<typename  T> class MaxMinValidator : public Validator<T>{
private:
  T minValue, maxValue;
  

public:
  MaxMinValidator(int minValue, int maxValue){
    this->minValue = minValue;
    this->maxValue = maxValue;
    this->errorMsg = "Value must be between " + std::to_string(minValue) + " and " + std::to_string(maxValue);
  }

  MaxMinValidator(T minValue, T maxValue){
    this->minValue = minValue;
    this->maxValue = maxValue;
    this->errorMsg = "Value must be bewteen " + to_string(minValue) + " and " + to_string(maxValue);
  }

  MaxMinValidator(T minValue, T maxValue, std::string errorMsg){
    this->minValue = minValue;
    this->maxValue = maxValue;
    this->errorMsg = errorMsg;
  }

  bool validate(T value){
    return value >= minValue && value <= maxValue;
  }
};