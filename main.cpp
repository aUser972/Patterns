#include <iostream>
#include "factory_method.hpp"

shooter* choose_fighter()
{
  std::cout << "Input 1 for Arabican\nInput 2 for Russian\n";
  int x = 0;
  // std::cin >>  x;
  // switch(x)
  // {
  //   case 1:
  //     s = new arabican_shooter();
  //     break;
  //   case 2:
  shooter* s = new russian_shooter();  
  //     break;
  //   default: break;
  // }
  return s;
}

weapon* choose_weapon()
{
  std::cout << "Input 1 for AK 47\nInput 2 for Glock 11\n";
  int x = 0;
  // std::cin >>  x;
  // switch(x)
  // {
  //   case 1:
  //     g = new ak_47();
  //     break;
  //   case 2:

  weapon* g = new glock_11();
  
  //     break;
  //   default: break;
  // }
  return g;
}

int main()
{
  weapon* gun = nullptr;
  shooter* fighter = nullptr;
  gun = choose_weapon();
  fighter = choose_fighter();
  fighter->attack(gun);
  return 0;
}