#include <iostream>
using namespace std;

class AbstraksiClass{
private:
	string x, y;
public:
	void setXY(string a, string b) {
		x = a;
		y = b;
	}
	void display() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};

int main() {
	AbstraksiClass ak;
	ak.setXY("yogyakarta", "Kampus");
	ak.display();

	return 0;
}