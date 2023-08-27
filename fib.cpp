#include <iostream>
#include <string>

int fibonacci(int n);

int main(){
  std::string s;
  int i;
  
  std::cout << "Enter a Number:";
  std::cin >> s;
  i = stoi(s);

  
  std::cout << fibonacci(i) << '\n';
}

int fibonacci(int n){
  return n;
}
