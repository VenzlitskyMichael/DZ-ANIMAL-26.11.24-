#include <iostream>
using namespace std;

class Animal {
protected:
	string name;
	string sp;
	string continent;
	double kg;
public:
	Animal() {}
	Animal(string nm, string s, string cont, double k) {
		name = nm;
		sp = s;
		continent = cont;
		kg = k;
	}
	void Input() {
		cout << "Name: ";
		cin >> name;
		cout << "Sp: ";
		cin >> sp;
		cout << "Continent: ";
		cin >> continent;
		cout << "Kg: ";
		cin >> kg;
	}
	void Print() const{
		cout << name << "\t\t" << sp << "\t" << continent << "\t" << kg  <<endl;
	}
	void Eat() {
		cout << "Non Information\n";
	}
	void Sound() {
		cout << "Non ingormation\n";
	}
};

class Cat :public Animal {
public:
	Cat() {};
	Cat(string nm, string s, string cont, double k) :Animal(nm, s, cont, k) {}
	void Eat() {
		cout << "Cat is the predator\n";
	}
	void Sound() {
		cout << "Myu Myu!!\n";
	}
};

class  Elephant : public Animal{
public:
	Elephant() {};
	Elephant(string nm, string s, string cont, double k) : Animal(nm, s, cont, k){}
	void Eat() {
		cout << "Elephant omnivore\n";
	}
	void Sound() {
		cout << "Go to the zoo and hear this voice\n"; 
	}
};

class Dog : public Animal {
public: 
	Dog() {};
	Dog(string nm, string s, string cont, double k) : Animal (nm, s, cont, k){}
	void Eat() {
		cout << "Dog omnivore\n";
	}
	void Sound() {
		cout << "Sound of dog hear like GAV GAV\n";
	}
};

class Parrot : public Animal {
public: 
	Parrot() {};
	Parrot(string nm, string s, string cont, double k) : Animal(nm, s, cont, k){}
	void Eat(){
		cout << "Parrot herbivores\n"; 
	}
	void Sound() {
		cout << "Sound of Parrot are different\t";
	}
};

int main()
{
	Cat obj1("Black cat", "Cat", "most part of world", 5);
	obj1.Print();
	obj1.Eat();
	obj1.Sound();

	cout << endl << endl;

	Elephant obj2("Indian Elephant", "Elephant", "India", 5000);
	obj2.Print();
	obj2.Eat();
	obj2.Sound();

	cout << endl << endl;

	Dog obj3("Chuvava", "Dog", "most part of world", 3);
	obj3.Print();
	obj3.Eat();
	obj3.Sound();

	cout << endl << endl;

	Parrot obj4("Red Parrot", "Parrot", "south Amerika", 0.5);
	obj4.Print();
	obj4.Eat();
	obj4.Sound();
	
	cout << endl << endl;
}

