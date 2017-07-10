//Mini Student Record Management System
//AUTHOR: M. Ahmed Baig

#include <iostream>
#include <string>

using namespace std;
//Global Declerations
int inStudents, track = 0;

typedef struct{
	string Fname;
	string Lname;
	int testScore;
	char grade;
}studentType;

void displayStudents(studentType student[25]);
void addStudents(studentType student[25]);
void highestStudents(studentType student[25]);

void displayStudents(studentType student[25]){
	int i;
	for (i = 0; i < track; i++){
		cout << "\t|\t" << student[i].Lname << ", " << student[i].Fname << ", Score: " << student[i].testScore << ", Grade: " << student[i].grade << "\t|" << endl;
	}
}

void addStudents(studentType student[25]){
	inStudents++;
	int n, i;
	cout << "\n\nHow many students would you like to enter? \n\nWe can enter " << (20 - inStudents) << " students. \n\nChoice: ";
	cin >> n;
	if (inStudents == 20){
		cout << "\n\n Our showroom lot in full. Try later";
		return;
	}
	else{
		for (i = 0; i < n; i++){
			cout << "\nEnter student first name " << track << endl;
			cin >> student[track].Fname;
			cout << "\nEnter student last name " << track << endl;
			cin >> student[track].Lname;
			cout << "\nEnter test score (Between 0-100)" << track << endl;
			cin >> student[track].testScore;
			cout << "\nEnter student grade " << track << endl;
			cin >> student[track].grade;
			track++;
		}
	}
}

void highestStudents(studentType student[25]){
	int i;
	student[20].testScore = 0; //Validate the highest student.
	for (i = 0; i < track; i++){
		if (student[20].testScore < student[i].testScore){
			student[20].testScore = student[i].testScore;
			student[20].Fname = student[i].Fname;
			student[20].Lname = student[i].Lname;
			student[20].grade = student[i].grade;
		}
	}
	cout << "\n\nHighest Score is:" << endl;
	cout << "\n\n\t|\t" << student[20].Lname << ", " << student[20].Fname << ", Score: " << student[20].testScore << ", Grade: " << student[20].grade << "\t|" << endl;
}

void main(){
	int n;
	studentType students[25];
	while (1){
		cout << "\n\n1/ Display all students" << "  2/ Add student" << "  3/ Highest student score" << "  4/ Exit" << "\n\nChoice: ";
		cin >> n;
		switch (n){
		case 1:
			displayStudents(students);
			break;
		case 2:
			addStudents(students);
			break;
		case 3:
			highestStudents(students);
			break;
		case 4:
			exit(0);
			break;
		default:
			cout << "\n\nError 32* -Logic error" << endl;
			break;
		}
	}
	system("PAUSE");
}