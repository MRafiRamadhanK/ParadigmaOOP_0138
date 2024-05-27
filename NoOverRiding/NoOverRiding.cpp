#include<iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalan() {
		cout << "Hallo saya function dari base class";
	}
};
class derivideclass : public baseClass {
public:
	void perkenalan() {
		cout << "hallo saya function dari derived class";
	}
};

int 