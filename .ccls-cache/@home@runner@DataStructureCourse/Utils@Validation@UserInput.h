#include "Validator.h"
#include <iostream>
using namespace std;

template<class T> class UserInput {
private:
  string requestMsg;
  Validator<T>* const validators[];
  // bool validateValidators(T);

public:
  UserInput(string requestMsg){
    this->requestMsg = requestMsg;
  }
  UserInput(string requestMsg, Validator<T>* const validators[] ){
    this->requestMsg = requestMsg;
    this->validators = validators;
  }
  T getUserInput(){
  T input;
  cout<<requestMsg<<endl;
  do{
    if(typeid(T) == typeid(string)){
      string in = input;
      getline(cin, in);
      input = in;
    }else{
      cin>>input;
    }

    if(cin.fail()){
      cin.clear();
      cout<<"You have entered wrong input"<<endl;
    }else{
      return input;
    }
  }while(true);
}

};