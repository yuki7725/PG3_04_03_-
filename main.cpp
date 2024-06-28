#include <stdio.h>
#include "animal.h"
#include "dog.h"
#include "cat.h"

int main() {

	/*animal* animal_1;
	animal* animal_2;

	animal_1 = new cat;
	animal_2 = new dog;

	animal_1->cry();
	animal_2->cry();

	delete animal_1;
	delete animal_2;*/


	animal* animal_[2];

	//¶¬
	for (int i = 0; i < 2; i++) {
		if (i == 1) {
			animal_[i] = new cat;
		}
		if (i == 0) {
			animal_[i] = new dog;
		}
	}

	//–Â‚«º‚Ìo—Í
	for (int i = 0; i < 3; i++) {
		if (i == 1) {
			animal_[i]->cry();
		}
		if (i == 0) {
			animal_[i]->cry();
		}
	}

	//”jŠü
	for (int i = 0; i < 2; i++) {
		if (i == 1) {
			delete animal_[i];
		}if (i == 0) {
			delete animal_[i];
		}
	}

	return 0;
}


