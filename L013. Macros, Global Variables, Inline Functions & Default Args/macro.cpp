#include <iostream>
using namespace std;

#define PI 3.1416 //MACRO
#define AREA(r) (PI*(r)*(r)) //MACRO

int main() {

	float r = 7; // radius of circle

	cout<<"Area of Circle with radius " << r <<": "<< AREA(r);

	return 0;
}
