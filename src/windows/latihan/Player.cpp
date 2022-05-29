#include "player.h"

using namespace std;

// penggunaan namespace dalam class biasa digunakan untuk mendefinisikan sebuah prototype
Player::Player(const char *name)
{
  this->name = name;
}
void Player::display()
{
  cout << "player ini adalah " << this->name << endl;
  cout << "Menggunakan senjata: " << this->weapon->getName();
}

void Player::equipWeapon(Weapon *weapon)
{
  this->weapon = weapon;
}