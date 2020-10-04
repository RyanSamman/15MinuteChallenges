#include <iostream>
#include <bitset>

extern "C" void ANDBytes(char &i1, char &i2);
extern "C" void ORBytes(char &i1, char &i2);
extern "C" void XORBytes(char &i1, char &i2);
extern "C" void NOTByte(char &i1);
extern "C" void LCLByte(char& i1);
extern "C" void RCLByte(char& i1);

using namespace std;

void AND() {

	char i1 = 0b0011;
	char i2 = 0b0101;

	cout << "I1: " << bitset<4>(i1) << endl;
	cout << "I2: " << bitset<4>(i2) << endl;

	ANDBytes(i1, i2);

	cout << "Result: " << bitset<4>(i1) << endl;
}

void OR() {
	char i1 = 0b0011;
	char i2 = 0b0101;

	cout << "I1: " << bitset<4>(i1) << endl;
	cout << "I2: " << bitset<4>(i2) << endl;

	ORBytes(i1, i2);

	cout << "RE: " << bitset<4>(i1) << endl;
}

void XOR() {
	char i1 = 0b0011;
	char i2 = 0b0101;

	cout << "I1: " << bitset<4>(i1) << endl;
	cout << "I2: " << bitset<4>(i2) << endl;

	XORBytes(i1, i2);
	cout << "RE: " << bitset<4>(i1) << endl;

}

void NOT() {
	char i1 = 0b111;

	cout << "I: " << bitset<4>(i1) << endl;

	NOTByte(i1);

	cout << "R: " << bitset<4>(i1) << endl;
}

void L() {
	char i1 = 0b111;

	cout << "I: " << bitset<4>(i1) << endl;

	NOTByte(i1);

	cout << "R: " << bitset<4>(i1) << endl;
}

void NOT6() {
	char i1 = 0b111;

	cout << "I: " << bitset<4>(i1) << endl;

	NOTByte(i1);

	cout << "R: " << bitset<4>(i1) << endl;
}

int main() {
	cout << "AND: " << endl;
	AND();

	cout << "OR: " << endl;
	OR();

	cout << "XOR: " << endl;
	XOR();

	cout << "NOT: " << endl;
	NOT();
}