//Aadi Padmawar

#include <iostream>
#include <string>
#include <vector>
#include "AirParticles.cpp"
#include <array>

using namespace std;

class AirParticleCollection {
protected:
  //Contains all the AirParticles objects
  vector<AirParticles> collection;
public:

  //Constructor taking in an array of air particles
  AirParticleCollection(AirParticles a[], int size) {
    for(int i = 0; i < size; i++) {
      collection.push_back(a[i]);
    }
  }
  //Constructor taking in an vector of air particles
  AirParticleCollection(vector<AirParticles> a) {
    for(int i = 0; i < a.size(); i++) {
      collection.push_back(a.at(i));
    }
  }
  //Add additional Air Particles that are contained in an array
  void addToCollection(AirParticles a[], int size) {
    for(int i = 0; i < size; i++) {
      collection.push_back(a[i]);
    }
  }
  //Add additional Air Particles that are contained in a vector
  void addToCollection(vector<AirParticles> a) {
    for(int i = 0; i < a.size(); i++) {
      collection.push_back(a.at(i));
    }
  }
  //Gets the max value in the vector
  string maximum() {
    int large = collection.at(0).number();
    for (int i = 1; i < collection.size(); i++) {
      if (collection.at(i).number() > large)
        large = collection.at(i).number();
    }
    return to_string(large) + "PPM";
  }
  //Gets the min value in the vector
  string minimum() {
    int small = collection.at(0).number();
    for (int i = 1; i < collection.size(); i++) {
      if (collection.at(i).number() < small)
        small = collection.at(i).number();
    }
    return to_string(small) + "PPM";
  }
  //Used in bubble sort, swaps values at the two locations
  void swap(int loc1, int loc2) {
    AirParticles a = collection.at(loc1);
    collection.at(loc1) = collection.at(loc2);
    collection.at(loc2) = a;
  }
  //Applies bubblesort to the vector
  void numSort() {
    for (int i = 0; i < collection.size() ; i++ ) {
      for (int j = 0; j < collection.size()-1 ; j++ ) {
        if (collection.at(j).number() > collection.at(j+1).number()) {
          swap(j, j+1);
        }
      }
    }
  }
  //Calculates average of all AirParticles contained in the vector
  string average() {
    double avg;
    avg = 0;
    for (int i = 0; i < collection.size() ; i++) {
      avg += collection.at(i).number();
    }
    avg /= collection.size();
    return to_string(avg) + "PPM";
  }

  string print() {
    string a;
    for (int i = 0; i < collection.size() ; i++) {
      a += collection.at(i).getPPM() + "\t";
    }
    return a;
  }

};
