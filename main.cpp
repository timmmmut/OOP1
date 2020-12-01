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
	Fraction div(Fraction b) {
		Fraction c;
		c.nom = nom * b.denom;
		c.denom = denom * b.nom;
		return c;
	}
	Fraction add(Fraction b) {
		Fraction c;
		c.denom = denom * b.denom;
		c.nom = nom * b.denom;
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