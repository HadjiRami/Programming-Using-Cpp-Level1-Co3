#include <iostream>
#include <string>
using namespace std;

int main()
{
	int Day = 4;
	switch (Day) {
	case 1:
		cout << "Sunday";
		break;
	case 2:
		cout << "Monday";
		break;
	case 3:
		cout << "Tuseday";
		break;
	case 4:
			cout << "Wensday";
			break;

	case 5:
		cout << "Thursday";
		break;
	case 6:
		cout << "Friday";
		break;
	case 7:
		cout << "Saturday";
		break;
	default: cout << "Not a week days.";

	}
}

