#include <iostream> 
#include <cmath>

using namespace std;

int main () {
  float radius, volume;

  cout << "Enter the Radius of Sphare: ";
  cin >> radius;

  volume = 4/(float)3 * M_PI * (radius * radius * radius);

  cout << "Volume of The Sphare is: " << volume << endl;


  return 0;
}