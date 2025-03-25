//Thi is the programme by using vector with a Custom Structure pushback

#include <bits/stdc++.h>
using namespace std;

struct Person{                       //struct is public by default 
                                    //class is private by default
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {} //a constructor must have a body

};

int main(){
    vector<Person> people;

    people.push_back(Person("Allice", 25));
    people.push_back(Person("Bob", 30));

    for(const Person &p : people){
        cout << p.name << " is " << p.age << " years old.\n";
    }
    return 0;
}