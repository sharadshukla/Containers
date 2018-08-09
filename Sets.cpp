/*
 * Sets.cpp
 * Basic functionality of Set Container
 */

#include<iostream>
#include<set>

using namespace std;

class Student {
    int id;
    string name;
    
public:
    //constructor which accepts parameter
    Student(int id, string name): id(id), name(name) {}
    
    void print() const {
        cout<<id<<":"<<name<<endl;
    }
    //Bool operator is used to sort the enteries 
    bool operator<(const Student &other) const {
        return name < other.name;
    }
};


int main(){
    
    set<int> numbers;
    
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(10);
    numbers.insert(30);
    
    // Duplicate elements are discarded in set
    for(set<int>::iterator it=numbers.begin(); it !=numbers.end(); it++) {
        cout<<*it<<endl;
    }
    
    set<int>::iterator itf =numbers.find(30);
    
    if (itf != numbers.end()){
        cout<<"Found: "<<*itf<<endl;
    }
    
    // Sorting happens simultaneously with each entry added in Set.
    set<Student> st;
    
    st.insert(Student(10, "Mike"));
    st.insert(Student(20, "Raj"));
    st.insert(Student(30, "Peter"));
    st.insert(Student(20, "Mike"));
    
    for(set<Student>::iterator sit=st.begin(); sit !=st.end(); sit++) {
        sit->print();
    }
    
    return 0;
}

