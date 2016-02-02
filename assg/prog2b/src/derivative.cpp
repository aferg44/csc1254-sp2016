#include <iostream>
#include <sstream>
#include <string>

int a(std::string term) {
  int pos = term.find("x");
  if (pos != std::string::npos)
       return std::stoi(term.substr(0, pos));
  else return std::stoi(term);
}

int b(std::string term) {
  int pos = term.find("^");
  if (pos != std::string::npos)
       return std::stoi(term.substr(pos+1, term.size()-1));
  else return 1;
}

std::string derivative(std::string term) {
  std::stringstream ss; 
  int coeff = a(term);
  int power = b(term);
  coeff *= power;
  power--;
       if (power==0) ss << coeff;
  else if (power> 0) ss << coeff << "x";
  if      (power >1) ss << "^"   << power; 
  return ss.str();
}

std::string differentiate(std::string s) {
  std::stringstream ss(s); 
  std::string term, result;
  while (ss >> term) {
    if (term == "+") 
         result += term;
    else result += derivative(term);
  }
  if (result.back()  == '+') result.pop_back();
  if (result.front() == '+') result = result.substr(1, result.size());
  return result;
}

int main() {
  std::string polynomial;
  std::cout << "Enter a polynomial: ";
  std::cin  >> polynomial;
  std::cout << "The derivative is:  " << differentiate(polynomial) << std::endl;
}
