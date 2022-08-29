#include <iostream>
//Mike Mijaro
using namespace std;

//name and structure type equivalence

struct Student {
	string status;
	int age;
};

struct School {
	string campus;
	string location;
};

int main(void){
	printf("STUDENT DETAILS:\n");
	struct Student stud;
	stud.status = "Enrolled";
	stud.age = 22;
	cout << "Status: " << stud.status << endl;
	cout << "Age: " << stud.age << endl;
	printf("\n");
	
	struct School sch;
	sch.campus = "AMA University";
	sch.location = "Quezon City";
	cout << "Campus: " << sch.campus << endl;
	cout << "Location: " << sch.location << endl;
	
	return 0;
	
}
