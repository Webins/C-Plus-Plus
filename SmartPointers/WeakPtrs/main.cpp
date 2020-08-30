#include <iostream>
#include <memory>

using namespace std;

class B;

class A{
	shared_ptr<B> b_ptr;
public:
	void set_B(shared_ptr<B> &b){b_ptr = b;};
	A(){cout <<"Constructor called" << endl;}
	~A(){cout <<"Destructor called" << endl;}

};

//class B{
//	shared_ptr<A> a_ptr; //strong circular reference, makes a memory leak, they'll never call the destructor because when a go out of scope, the b_ptr inside him is being
//referecing by a_ptr and will have a use_count of 1, we need to make a weak_ptr because it won't increment the use count;
//public:
//	void set_A(shared_ptr<A> &a){a_ptr = a;};
//	B(){"Constructor called";}
//	~B(){"Destructor called";}
//};

class B{
	weak_ptr<A> a_ptr; //strong circular reference
public:
	void set_A(shared_ptr<A> &a){a_ptr = a;};
	B(){cout <<"Constructor called" << endl;}
	~B(){cout <<"Destructor called" << endl;}
};

int main(){
	shared_ptr<A> a = make_shared<A>();
	shared_ptr<B> b = make_shared<B>();
	a->set_B(b);
	b->set_A(a);
	return 0;
}
