#include <iostream>
using namespace std;

int main() {
	// An enum is a special type that represents a group of constants (unchangeble values)

	// 1. Basic enum: Values start from 0
	enum Humidity {
		DRY,
		NORMAL,
		HUMID
	};

	enum Humidity humidLevel = DRY;
	cout << "Humidity level is " << humidLevel << endl;

	// 2. Changing enum values
	enum Temp {
		COOL = 15,
		ROOM_TEMP = 25,
		HOT = 30
	};

	enum Temp currentTemp = HOT;
	cout << "Room Temp is " << currentTemp << endl;

	// 3. Auto-assign all values when only one value assigned.
	enum FanSpeed {
		VERY_LOW = 1,
		LOW,
		MEDIUM,
		HIGH,
		VERY_HIGH
	};

	enum FanSpeed fanSpeed = HIGH;
	cout << "So, fan speed set to " << fanSpeed << endl;

	/*
	Why use Enum?
	Enums give names to constants improving code readability.
	*/

	return 0;
}
