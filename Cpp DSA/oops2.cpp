#include<iostream>
using namespace std;

class hero{
    //properties
    private:
    int health = 70;
    public:
    char level = 'A';

    // Default Constructor 
    hero(){
        cout<<"Constructor called"<<endl;
    }

    // Parameterised Constructor
    hero(int health){
        this -> health = health;
    }

    hero(int health, char level){
        this -> level = level;
        this -> health = health;
    }

    // copy constructor 
    hero(hero& temp){
        this -> health = temp.health;
    }

    void print(){
        cout<<"health is "<< health<<endl;
        cout<< "level is "<<level<<endl;
    } 

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void stehealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }
};

int main(){

    hero s(40, 's');
    s.print();

    //copy constructor
    hero r(s);
    r.print();











    // // object created statically
    // hero obj1(19);
    // cout << obj1.gethealth() << endl;;

    // hero obj3(13, 'h');
    // cout<< obj3.gethealth()<< endl;
    // cout<< obj3.getlevel()<< endl;


    // cout<<"difference"<<endl;
    // object created dynamically
    // hero *obj2 = new hero;



    // // Creation of object 
    // hero obj1;
    // // obj1.health = 68;
    // // use setter
    // obj1.stehealth(70);
    // obj1.level = 'A';

    // cout<<"Health :" << obj1.gethealth()<<endl;
    // cout<<"Level :" << obj1.level<<endl;

    // cout<<"Size of obj1 :"<< sizeof(obj1)<<endl;


    // // static allocation 
    // hero a;
    // cout<< " level is  " << a.level<< endl;
    // cout<< " health is " << a.gethealth()<<endl;

    // //dynamically allocation
    // hero *b = new hero;
    // cout << " level is " << (*b).level<<endl;
    // cout << " health is " << (*b).gethealth()<<endl;
    // //OR
    // cout << " level is " << b->level<<endl;
    // cout << " health is " << b->gethealth()<<endl;

    
}