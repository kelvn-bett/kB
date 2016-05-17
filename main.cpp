#include <iostream>

#include <string>

#include "car.h"

#include "driver.h"

using namespace std;

int main() {

	Driver *d = new Driver("Ms. Pop Diva");
	{

		cout << "Our driver is, " << d->getName()

			<< "!" << endl;
		Car car(d);

		cout << car.whosDriving() << "!!" << endl;

	}

	cout << "Lone survivor: " << d->getName() << endl;

	delete d;

}
