#include <iostream>

#include "Deep.hpp"

using namespace std;

void displayDeep(Deep);
int main(){
	Deep obj1(100);
	displayDeep(obj1);
	/*Ahora cuando esta funcion se llame y termine, no se borrara la data de todos los objetos dejandola
	 * invalida, si no, ahora solo se liberara la de ese objeto en el heap, las otras se mantendran*/
	Deep obj2(obj1);
	obj2.setData(1000);
	return 0;
}

void displayDeep(Deep d){
	cout << d.getData() << endl;
}
