#include <iostream>
#include <vector>
#include "inheritance.hpp" 


int main() {
  Player p;Tree t; Projectile b;
  std::vector<Entity*> entities {&t};
  while(true) {
    for (auto& entity: entities) {
      entity->update();
      entity->render();
    }
  }
  return 0;
}
