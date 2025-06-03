#include <iostream>
#include "inheritance.h" 


int main() {
  Weapon weapon;
  Player player;
  bool is_hit = player.overlaps_with(weapon);
  std::cout << "is_hit: " << is_hit << "\n";
  return 0;
}
