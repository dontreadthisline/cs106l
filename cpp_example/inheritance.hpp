#ifndef INHERITANCE_H
#define INHERITANCE_H
#include <iostream> 

class Entity {
  double x,y,z;
public:
  void update();
  void render();
  bool overlaps_with(const Entity &other);
};
bool Entity::overlaps_with(const Entity &other) {
  return true;
}
class Weapon: public Entity {
};

class Tree: public Entity {
};

class Projectile: public Entity {
};

class Actor: public Entity {
};

class Player: public Actor {
};

class NPC: public Actor {
};
/* 
NPC->Actor->Entity 
Player->Actor->Entity 
Tree->Entity 
Weapon->Entity
Projectile->Entity
*/
#endif
