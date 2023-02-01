// Inheritance

#include <iostream>
using namespace std;

class A {
    private:
    int no =10;
    public:
    int data;
    void sum(int a, int b) {
        cout << "The sum is " << (a+b) << endl;
    }
};

class B: public A {
    public:
    void calc(int a, int b) { cout << (a+b); }
    void calc(float a, float b) { cout << (a+b); }
    void calc(int a) { cout << (a*a); }
};


class impAb {
private:
	int a, b;

public:
	void set(int x, int y)
	{
		a = x;
		b = y;
	}

	void display()
	{
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
};

int main() {
    B b;
    b.sum(1,2);
    b.calc(2);
    impAb obj;
	obj.set(10, 20);
	obj.display();
    return 0;
}