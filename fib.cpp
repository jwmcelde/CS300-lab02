#include <iostream>
#include <string>

int main(){
  std::string s;
  int i;
  
  std::cout << "Enter a Number:";
  std::cin >> s;
  i = stoi(s);

  
  std::cout << i;
}
