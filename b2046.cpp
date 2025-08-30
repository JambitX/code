#include <iostream>
#include "stdio.h"
using namespace std;
int main(){
  int dis;
  cin >> dis;
  if (double walkT = dis / 1.2, bikeT = dis / 3.0 + 50; walkT < bikeT) {puts("Walk");
  } else if(walkT == bikeT) {
    puts("All");
  } else {
    puts("Bike");
  }
}