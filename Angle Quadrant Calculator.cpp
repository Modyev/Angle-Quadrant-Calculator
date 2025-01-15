#include <iostream>

using namespace std;

int Quadrant(int angle);

int main() {

	cout << "Enter an angle: ";
	int angle;
	cin >> angle;
	int quad;
	int _tempAngle;


	// For angles which are in negative
	if (angle < 0) {
		int TempAngle = angle;

		while (TempAngle < 0) {
			TempAngle += 360;
		}

		_tempAngle = TempAngle;

		quad = Quadrant(TempAngle);
	}

	// For angles which are in positive
	else if (angle > 0) {
		int TempAngle = angle;

		while (TempAngle >= 360) {
			TempAngle -= 360;
		}

		_tempAngle = TempAngle;
		quad = Quadrant(TempAngle);
	}

	switch (quad) {
		cout << endl;
	case 1:
		cout << "[1st Quadrant] The angle \'" << angle << "\' is in the 1st Quadrant (\"" << _tempAngle << "\")\n";
		break;
	case 2:
		cout << "[2nd Quadrant] The angle \'" << angle << "\' is in the 2nd Quadrant (\"" << _tempAngle << "\")\n";
		break;
	case 3:
		cout << "[3rd Quadrant] The angle \'" << angle << "\' is in the 3rd Quadrant (\"" << _tempAngle << "\")\n";
		break;
	case 4:
		cout << "[4th Quadrant] The angle \'" << angle << "\' is in the 4th Quadrant (\"" << _tempAngle << "\")\n";
		break;
	case -1:
		cout << "[Special Case] The angle \'" << angle << "\' is a special case and it's not on a specific quadrant";
		break;
	}



	return 0;

}

int Quadrant(int angle) {
	if (angle >= 0 && angle < 90) {
		return 1;
	}
	else if (angle >= 90 && angle < 180) {
		return 2;
	}
	else if (angle >= 180 && angle < 270) {
		return 3;
	}
	else if (angle >= 270 && angle < 360) {
		return 4;
	}

	// Edge cases
	else if (angle == 90) {
		return 2;
	}
	else if (angle == 180) {
		return 3;
	}
	else if (angle == 270) {
		return 4;
	}
	else if (angle == 360) {
		return 1;
	}


	else {
		cout << "[DEBUG] angle: " << angle << endl;
		return -1;
	}
}