#include <iostream>
using namespace std;
class B;
class A
{
protected: int i;
public:
	A(int x1 = 0) :i(x1) { cout << "Inside A" << endl; }
	A(const B& b);
	virtual void print()const { cout << "i=" << i << endl; }
	virtual ~A() { i--; print(); }
};
class B :public A
{
	int j;
public:
	B(int x1, int y1) :A(x1), j(y1) { cout << "Inside B" << endl; }
	void print() {
		i--;
		A::print();
		cout << "j=" << j << endl;
	}
	~B() { cout << "Exit B" << endl; }
	friend class A;
};
A::A(const B& b)
{
	i = b.i * b.j;
}
int main()
{
	B b(2, 5);
	//A* a = &b;

	
	return 0;
}



