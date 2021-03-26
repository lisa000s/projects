#include <iostream>
using namespace std;

void introduceYourself(string name,int age);

class Person {
public:
	string name;
	int age;
};


void main() {
	/*Person person1;
	person1.name = "Anna";
	person1.age = 25;*/
	introduceYourself("Anna", 25);
	system("pause>0");
}

void introduceYourself(string name, int age) {
	cout << "My name is " << name << ". I am " << age << " years old." << endl;
}