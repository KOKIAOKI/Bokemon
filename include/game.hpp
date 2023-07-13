#include <iostream>

class PlayerInfo {
public:
  PlayerInfo(std::string name, int age, int language);
  ~PlayerInfo();

  void play();

  void setName(std::string name) { name_ = name; }

  void setAge(int age) { age_ = age; }

  void setLanguage(int language) { language_ = language; }

  std::string getName() { return name_; }

  int getAge() { return age_; }

  int getLanguage() { return language_; }

protected:
  std::string name_;
  int age_;
  int language_;  // 0: Japanese, 1: Chinese, 2: Korean
};