/* Julie Schneider */

#include <iostream>
#include <string>
int main() {

  int num = 0;
  std::cout << "Enter Num: ";
  std::cin >> num;
  
  std::string name;
  std::cout << "Name: ";
  std::cin >> name;
  std::cout << "Hello World!\t" << name << std::endl;
  return 0;
}