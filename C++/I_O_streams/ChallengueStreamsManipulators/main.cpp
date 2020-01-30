#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <memory>
using namespace std;


struct City{
	string name;
	long long populations;
	double cost;
};

struct Country{
	string name;
	vector<City> cities;
};

struct Tours{
	string title;
	vector <Country> countries;
};



void display(const unique_ptr<Tours>);
int main(){
	unique_ptr<Tours> tours;
	tours =make_unique<Tours>();
	* tours ={
		"TOURS TICKETS PRICES FROM MIAMI",
		{
				{
					"COLOMBIA",
					{
							{"BOGOTA", 87780000, 400.98},
							{"CALI", 2401000, 424.12},
							{"MEDELLIN", 2464000, 350.98},
							{"CARTAGENA", 972000, 345.34}
					},
				},
				{
					"BRAZIL",
					{
							{"RIO DE JANEIRO", 13500000, 567.45},
							{"SAO PAULO", 11310000, 975.45},
							{"SALVADOR", 18234000, 855.99}
					},
				},
				{
					"CHILE",
					{
							{"VALDIVIA", 260000, 569.12},
							{"SANTIAGO", 7040000, 520.00}
					},
				},
				{
					"ARGENTINA",
					{
							{"BUENOS AIRES", 3010000, 723.77}
					},
				}
		}
	};

	display(move(tours));
	return 0;
}



void display(const unique_ptr<Tours> t){
	cout << setw(55) << t->title << endl << endl;
	for(auto const &country : t->countries){
		cout << setfill(' ');
		cout  << left << setw(12) << " " +country.name;
		cout << left << setw(20) << "TICKETS AVAILABLE: ";
		cout << setw(16) << left <<"|     CITY" ;
		cout << setw(16) << left <<"|   POPULATION";
		cout << setw(9) << left <<"| PRICE"  << "|" << endl;
		for(auto const &cities: country.cities){
			cout << setfill('~');
			cout << left << setw(32) << ' ';
			cout << setfill(' ');
			cout << left << setw(16) << '|' + cities.name ;
			cout << left << setw(16) << "|"+to_string(cities.populations);

			cout << '|' << left << setprecision(2) << fixed << setw(7) << cities.cost << "$|" << endl;
		}
		cout << setfill('~');
		cout << left << setw(32+42) << ' ' << endl << endl;
	}

}
