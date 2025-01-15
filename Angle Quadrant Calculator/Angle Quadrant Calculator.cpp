// Angle Quadrant Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int Quadrant(int angle);
int main()
{
	//330
	int angle;
	cout << "Enter your angle: ";
	cin >> angle;

	if (angle > 0) {
		int tempAngle = angle;
		while (tempAngle > 360) {
			tempAngle -= 360;
		}
		switch (Quadrant(tempAngle)) {
			case 1:
				cout << "Your Angle " << angle << " lies in the 1st Quadrant" << endl;
				break;
			case 2:
				cout << "Your Angle " << angle << "lies in the 2nd Quadrant" << endl;
	
			case 3:
				cout << "Your Angle " << angle << " lies in the 3rd Quadrant" << endl;
				break;
			case 4:
				cout << "Your Angle " << angle << " lies in the 4th Quadrant" << endl;
			case -1:
				cout << "Your Angle " << angle << " Doesn't lie on any quadrant because it's an edge case\n";
		}
	}

}

int Quadrant(int angle) {
	if (angle > 0 && angle < 90) {
		return 1;
	}
	else if (angle > 90 && angle < 180) {
		return 2;
	}
	else if (angle > 180 && angle < 270) {
		return 3;
	}
	else if (angle > 270 && angle < 360) {
		return 4;
	}
	else {
		return -1;
	}
}
