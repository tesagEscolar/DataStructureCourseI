#include "menu.h"

menu::menu

ostream& menu::operator<<(ostream& out){

  for (auto const &[key,value] : menuSteps){
    out<<key<<": "<<value<<endl;
  }
  return out;
}