#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

class Player{
    //atributtes
    string name = "Player";
    string voc;
    int health = 100;
    int exp = 0;
public:
    //methods
    string getName(){
        return name;
    } 
        
    int getHealth() {
        return health;
    }
    string getVoc(){
        return voc;
    }
    void setVoc(string v){
        vector<string> strs = {"Knight", "Paladin", "Sorcerer", "Druid"};
        for(auto &c: v )
        c = tolower(c);
        v[0] = toupper(v[0]);
        for(auto &str : strs) {
            if(v == str) {
                voc = v;
                return;
            }
        }
        voc = "No-Voc";
    }
    void setName(string n){
        for(int i =0; i < n.size(); i++){
            if(isdigit(n.at(i))) {
                name = "Player"; //Because cant have digits
                return;
            }
        }
        name = n;
    }
    void setHealth(int h){
        if(h > 99 && h < 999) health = h;
        else h = 100; // default health
    }
    void talk(string s){
        cout << name << " Says" << ": " << s << endl;
    };
    bool isDead(){
        bool dead;
        health==0? dead =true: dead= false;
        return dead;
    }
};

class Account{
public:  
    string name = "Account";
    double balance = 0.0;

    void deposit(double d){
        balance += d;
        cout << "Depositing " << d << "$ into " << name << "'s account" << endl;
    }
    void withdraw(double w){
        balance -= w;
        cout << "Whitdrawing " << w << "$ into " << name << "'s account" << endl;
    };
};

int main(){

    //Player class
    vector <Player> Players;
    //create objects
    Player Frank;
    Player Hero;
    //create objects on the heap
    Player * Newbie = nullptr;
    Newbie = new Player();

    //accessing the attributes 
   /*  Frank.voc = "Knight";
    Frank.name = "Frank";
    Frank.exp = 1000;
    Frank.health = Frank.health + 50; */
    /* cout << boolalpha;
    cout << Frank.isDead() << endl; */
    
    //franks char
    Frank.setHealth(500);
    Frank.setName("Frank");
    Frank.setVoc("knight");
    cout << "Name: "<< Frank.getName() << "\nVoc: " << Frank.getVoc() << "\nHealth: " << Frank.getHealth() << endl; 
    Frank.talk("Hello my name is frank");


    //hero char
    Hero.setVoc("PALADIN");
    Hero.setName("Hero");
    Hero.setHealth(350);

    cout << "Name: "<< Hero.getName() << "\nVoc: " << Hero.getVoc() << "\nHealth: " << Hero.getHealth() << endl; 
    Hero.talk("Im the hero of this game");

    //newbie char 
    Newbie -> setVoc("Druid");
    Newbie -> setName("Noobmaster69"); //error
    cout << "Name: "<< Newbie-> getName() << "\nVoc: " << Newbie-> getVoc() << "\nHealth: " << Newbie-> getHealth() << endl; 
    Newbie -> talk("Im a newbie help me");

    
    Players.push_back(Frank);
    Players.push_back(Hero);
    Players.push_back(*Newbie);
    delete Newbie;
    cout<< "------------------------------------------------------------" << endl;

    //Account class
    Account George, Ana;
    George.name = "George";
    Ana.name = "Ana";
    George.deposit(50000);
    Ana.deposit(1500);
    George.withdraw(4000);
    
    return 0;
}