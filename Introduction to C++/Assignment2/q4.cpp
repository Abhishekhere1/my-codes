// WAP for finding the volume of the cylinder by taking radius and height as input.

#include <iostream>
#include <cmath>  // For M_PI constant (optional, you can also use 3.14159)
using namespace std;

int main() {
    double radius, height, volume;

    // Input radius and height
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Formula for volume of cylinder: V = π * r^2 * h
    volume = M_PI * pow(radius, 2) * height;

    // Output the volume
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}
