//Aadi Padmawar

//This is a container for each air particle data. It only holds one measure of air particles and should be in PPM.
#include <iostream>
#include <string>

using namespace std;

class AirParticles {

protected:
  //variable to hold air particles in PPM
  int particles;
public:
  //Constructor to initialize the object
  AirParticles(int particles) {
    this->particles = particles;
  }
  //returns the Air Particles in PPM as a string
  string getPPM() {
    string ppm;
    ppm = to_string(particles) + " PPM";
    return ppm;
  }
  //returns the Air Particles in PPB as a string
  string getPPB() {
    string ppb;
    ppb = to_string(particles * 1000) + " PPB";
    return ppb;
  }

  //prints out the air quality in PPM
  friend ostream& operator <<( ostream& str, AirParticles& p ) {
    str << p.getPPM();
    return str;
  }
  //initializes the object through cin
  friend istream& operator >>( istream& str, AirParticles& p ) {
    cout << "What is the amount of particles in the air? (in PPM): ";
    str >> p.particles;
    return str;
  }
  //used in collection for data sorts
  int number() {
    return particles;
  }


};
