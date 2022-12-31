#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


class AbstractClass {
    virtual void askForPromotion() = 0;                     // Now any class that extends this calss will have to make this funtion
};

class {
    public:
    int b = 100;
} a, b;


class Employee: AbstractClass {
    private: 
        string name;
        string company;
        int age;
    public:

        void abc(){
            cout << "EMP\n";
        }
        Employee(string n, string comp, int a){
            name = n;
            company = comp;
            age = a;
        }

        // These methods need to be created cause our variables are private and cannot be set directly
        void setName(string n){
            name = n;
        }
        string getName(){
            return name;
        }
        void introduceYourself(){
            cout << "Name : " << name << "\n";
            cout << "Company : " << company << "\n";
            cout << "Age : " << age << "\n";
        }



        void askForPromotion ()  {                                      // Abstraction
            if(age > 10){
                cout << "Permission given\n";
            }
            else{
                cout << "Permission Not given\n";
            }
        }

};


/*
                    Public      Private     Protected

Public              Public      Private     Protected      
Private             Private     Private     Private
Protected           Protected   Private     Protected

*/


class Developer:public Employee {                                             // By default inheritance is privatre
    public:
        string favLanguage;

        Developer(string n, string comp, int a, string fav)
        : Employee(n, comp, a) {                                        // We are calling the Employee constructor to set the rest of the things for us
            favLanguage = fav;
        }


        void fixBug(){
            cout << getName() << " fixed bug using " << favLanguage << "\n";        // We need to use getName cause name is private
        }

        void abc(){
            cout << "DEV\n";
        }

} ;


class Deriveed: public Developer{
public:
    // void abc(){
    //     cout << "DERIVED\n";
    // }

    Deriveed(): Developer("Anish", "Company", 11, "C++"){
        return;
    }
};


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    Employee emp1 = Employee("Shloik", "Company", 11 );
    // emp1.abc();

    // emp1.introduceYourself();
    // emp1.askForPromotion();

    // Developer *d1 = new Developer("Shloik", "Company", 11, "C++");

    // Developer d = Developer("Anish", "Company", 11, "C++");

    // Employee *d2 = new Developer("Anish", "Company", 11, "C++");
    // Developer *d2 = new Deriveed();
    // Deriveed *d2 = new Deriveed();
    Employee *d2 = new Deriveed();



    d2->abc();


    // d.fixBug();
    // a.b;
    // b.b;
}



// OOP All features test 
/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;




void access(){

}

class AbstractClass{
private:
    int abc = 0;

    friend class BaseClass;


public:
    virtual string getName() = 0;

    
};


class BaseClass: public AbstractClass{
private:
    int age;
    string name;

    int getAge(){
        return age;
    }

    friend int main();

public:
    BaseClass(){
        cout << "base class constructor called\n";
        abc = 123;
    }

    BaseClass(int a, string n){
        age = a;
        name = n;
    }

    BaseClass(int a){
        age = a;
        name = "Lodu";
    }

    string getName() {
        cout << "abc = " << abc << '\n';
        return name;
    }; 

    string getName(int i){
        
        return name + "_" + to_string(i);
    }
    

};

class DerivedClass: public BaseClass{
private:
    int role;

public:
    DerivedClass(int a, string n, int r)
    // : BaseClass(a, n)
    {
        role = r;
        cout << "Derived ka object bana diya\n";
    }

    
};


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);


    AbstractClass *a = new DerivedClass(12, "anish", 1);
    cout << a->getName() << "\n";

    cout <<"------------------------------\n";
    DerivedClass d = DerivedClass(1, "name", 1);
    cout << d.getName(1) << "\n";
    cout << d.name << "\n";



    cout <<"------------------------------\n";
    BaseClass b = BaseClass(18, "shlok");
    cout << b.getName() << "\n";
    cout << b.getName(1) << "\n";
    cout << b.name << "\n";



}
*/


/*
    There are three access modifiers;
    Public, Private, Protected

    Members of a class are default private



    Three rules for constructors
    1) It doesnot have a return type
    2) It will have same name as Class
    3) Constructor needs to be public                                   // Will give error elsewise

    When we create a constructor we loose the default constructor
    Employee emp1 = Employee(param1, param2, param3);                   // This will create it in the stack section of memory




    Encapsulation:
    Binding (or wrapping) code and data together into a single unit is known as encapsulation. 
    For example: capsule, it is wrapped with different medicines.


    Abstraction:
    Hiding internal details and showing functionality is known as abstraction. For example: phone call, we don't know the internal processing.
    In C++, we use abstract class and interface to achieve abstraction.


*/