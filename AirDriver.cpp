//Aadi Padmawar

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include "AirParticleCollection.cpp"

using namespace std;

int main() {
  //initializes values
  AirParticles a1 = AirParticles(15);
  AirParticles a2 = AirParticles(17);
  AirParticles a3 = AirParticles(16);
  AirParticles a4 = AirParticles(14);
  AirParticles a5 = AirParticles(14);

  //creates an array with above values
  AirParticles as[] = {a1, a2, a3, a4, a5};

  //Creates an AirParticleCollection objects
  AirParticleCollection col = AirParticleCollection(as, 5);

  //tests meathods in object
  cout << col.print() << endl;
  cout << "avg = " << col.average() << endl;
  cout << "max = " << col.maximum() << endl;
  cout << "min = " << col.minimum() << endl;

  AirParticles a6 = AirParticles(23);
  AirParticles a7 = AirParticles(9);

  vector<AirParticles> as2;
  as2.push_back(a6);
  as2.push_back(a7);

  col.addToCollection(as2);

  cout << col.print() << endl;
  col.numSort();
  cout << col.print() << endl;

  cout << a1 << endl;
}
