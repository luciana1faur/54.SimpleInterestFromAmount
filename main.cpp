#include <iostream>
#include <cmath> 
using namespace std;

int main() {
  double suma, perioada, procentDobanda;
  double sumaDobanda;
  cout << "Introduceti suma imprumutata: ";
  cin >> suma;
  cout << "Introduceti perioada de returnare a sumei: ";
  cin >> perioada;
  cout << "Introduceti rata dobanzii anuale: ";
  cin >> procentDobanda;
  sumaDobanda = suma * procentDobanda /100 * perioada;
  cout << "Dobanda platita de " << procentDobanda << " % pe o perioada de " << perioada << " ani pentru o suma de " << suma << " este " << sumaDobanda << endl;
  cout << endl;
  return 0;  
}
//Write a program in C++ to enter P, T, R and calculate Simple Interest....Principle = P, Time = T, Rate of interest = R