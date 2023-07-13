#include <game.hpp>

PlayerInfo::PlayerInfo(std::string name, int age, int language) {
  name_ = name;
  age_ = age;
  language_ = language;
}

PlayerInfo::~PlayerInfo() {}

void PlayerInfo::play() {
  std::cout << "Hi!" << name_ << "  Welcom to Bokemon!!" << std::endl;
}

int main() {
  PlayerInfo player1("KOKI", 23, 0);
  player1.play();

  PlayerInfo player2("Kim", 10, 2);
  player2.play();

  // std::cout << "Player Information/ Name: " << player1.name << " age: " << player1.age << " language: " << player1.language << std::endl;
  // std::cout << "Player Information/ Name: " << player2.name << " age: " << player2.age << " language: " << player2.language << std::endl;

  return 0;
}