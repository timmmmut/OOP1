//Класс дробь
#include <iostream>
using namespace std;

class Fraction {
private:
	int nom;
	int denom;
public:
	Fraction() {
		nom = 0;
		denom = 1;
	}
	void setNom(int fnom) { nom = fnom; }
	int getNom() { return nom;  }
	void setDenom(int fdenom) { nom = fdenom; }
	int getDenom() { return denom; }
	void print() { cout << nom << '/' << denom << endl; }
	Fraction mul(Fraction b) {
		Fraction c;
		c.nom = nom * b.nom;
		return c;
	}
};
int main() {
	Fraction a;
	a.setNom(1);
	a.setDenom(2);
	a.print;
	return 0;
}