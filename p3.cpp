#include <iostream>
int main() {
	int birthYear;
	std::cout << "Please enter your birth year:";
	std::cin >> birthYear;
	int age = 2018 - birthYear;
	std::cout << "Your age is: " << age;
}