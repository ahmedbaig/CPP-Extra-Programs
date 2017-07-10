//Car Show Room Program
//AUTHOR: M. Ahmed Baig

#include <iostream>
#include <string>

using namespace std;
//Global Declerations
int inCars, track = 3;

struct car {
	string carMake;
	string carModel;
	int yearModel;
	double cost;
};

void displayCars(struct car cars[25]);
void addCars(struct car cars[25]);

void displayCars(struct car cars[25]){
	int i;
	cout << "\n\n\t|\tMake\t\t\tModel\t\t\tYear\t\t\tCost\t|" << endl;
	for (i = 0; i < track; i++){
		cout << "\t|\t" << cars[i].carMake << "\t\t\t" << cars[i].carModel << "\t\t\t" << cars[i].yearModel << "\t\t\t" << cars[i].cost << "\t|" << endl;
	}
}

void addCars(struct car cars[25]){
	inCars++;
	int n,i;
	cout << "\n\nHow many cars would you want to enter? \n\nWe can enter " << (22 - inCars) << " cars. \n\nChoice: ";
	cin >> n;
	if (inCars == 25){
		cout << "\n\n Our showroom lot in full. Try later";
	}
	else{
		for (i = 0; i < n; i++){
			cout << "\nEnter car Maker " << track << endl;
			cin >> cars[track].carMake;
			cout << "\nEnter car Model " << track << endl;
			cin >> cars[track].carModel;
			cout << "\nEnter year model " << track << endl;
			cin >> cars[track].yearModel;
			cout << "\nEnter car cost " << track << endl;
			cin >> cars[track].cost;
			track++;
		}
	}
}

void main(){
	struct car cars[25];
	int n;
	//fixed built-in data
	cars[0].carMake = "Ford";
	cars[0].carModel = "Taurus";
	cars[0].yearModel = 1997;
	cars[0].cost = 21000;

	cars[1].carMake = "Honda";
	cars[1].carModel = "Accord";
	cars[1].yearModel = 1992;
	cars[1].cost = 11000;

	cars[2].carMake = "Lamborghini";
	cars[2].carModel = "Countach";
	cars[2].yearModel = 1997;
	cars[2].cost = 200000;

	while (1){
		cout << "\n\n1/ Display showroom" << "  2/ Add car to showroom" << "  3/ Exit" << "\n\nChoice: ";
		cin >> n;
		switch (n){
		case 1:
			displayCars(cars);
			break;
		case 2:
			addCars(cars);
			break;
		case 3:
			exit(0);
			break;
		default:
			cout << "\n\nError 32* -Logic error" << endl;
			break;
		}
	}
	system("PAUSE");
}
