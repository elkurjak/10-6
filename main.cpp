#include <iostream>

using namespace std;

struct car{
  int num;
  int mil;
  int gall;
  };

int main() {
  const int Carnum = 5;
  car cars[Carnum];
  for (int i=0; i<Carnum; i++){
    cin >> cars[i].num;
    cin >> cars[i].mil;
    cin >> cars[i].gall;
  }
 