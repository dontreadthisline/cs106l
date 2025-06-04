#ifndef INHERITANCE_H
#define INHERITANCE_H
#include <iostream> 
class Hitbox {
};
class Entity {
protected:
  double x,y,z;
  Hitbox hitbox;
public:
  /* 
  //not pure virtual func child could impement it optinal 
  //but the parent class must implement in default or base func
  //that means u should not wirte as below 
  // virtual void update(); //link symbol error when compile
  // virtual void render(); //link symbol error when compile
  virtual void update() {}
  virtual void render() {}
  */
  //pure virtual func, child call must implements it
  virtual void update() = 0;
  virtual void render() = 0;
  bool overlaps_with(const Entity &other);
};
/*
void Entity::update() {
}

void Entity::render() {
}
*/
bool Entity::overlaps_with(const Entity &other) {
  return true;
}

class Weapon: public Entity {
public:
  void update() override;
  void render() override;
};

void Weapon::update() {
  std::cout << "update in weapon\n";
}

void Weapon::render() {
  std::cout << "render in weapon\n";
}

class Tree: public Entity {
public:
  void update() override;
  void render() override;
};

void Tree::update() {
}

void Tree::render() {
}

class Projectile: public Entity {
private:
  double vx,vy,vz;
public:
  void move() {
    x += vx;
    y += vy;
    z += vz;
  }
  void update() override;
  void render() override;
};

void Projectile::update() {
}

void Projectile::render() {
}

class Actor: public Entity {
public:
  void update() override;
  void render() override;
};

void Actor::update() {
}

void Actor::render() {
}

class Player: public Actor {
public:
  void update() override;
  void render() override;
};

void Player::update() {
}

void Player::render() {
}

class NPC: public Actor {
public:
  void update() override;
  void render() override;
};
void NPC::update() {
}

void NPC::render() {
}

/* 
NPC->Actor->Entity 
Player->Actor->Entity 
Tree->Entity 
Weapon->Entity
Projectile->Entity
*/
#endif
