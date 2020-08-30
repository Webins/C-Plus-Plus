#include <iostream>

#include "Shallow.hpp"

using namespace std;

void displayShallow(Shallow);
int main(){
	Shallow obj1(100);
	displayShallow(obj1);
	/*Cuando esta funcion es llamada by value, copiara el obj1 y como tiene un pointer tendras dos objetos
	apuntando a la misma data, y debido al scope de esta funcion, enseguida cuando esta termina, el destructor
	es llamado, liberando asi la data que tiene en si y dejando al obj1 original apuntado a una data invalida
	por que ya no existe.
	*/
	// Shallow obj2(obj1) tenemos dos objetos apuntando a una data invalida;
	// aqui cambiara el valor de los dos pointer tanto obj1 como obj2 a 1000, pero a una data invalida.
	//obj2.setData(1000);
	// cuando se termine todo el programa y se trate de liberar estos recursos, el programa crasheara.
	return 0;
}

void displayShallow(Shallow s){
	cout << s.getData() << endl;
}
