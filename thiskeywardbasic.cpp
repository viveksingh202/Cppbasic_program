#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;

    Cricketer(string name, int runs){
        this->name=name;
        this->runs=runs;
    }
    void print(){
        cout<<name<<" "<<this->runs<<endl;
    }
};
int main(){
    Cricketer c1("virat kohli", 25000);
    Cricketer c2("rohit sharma",18000);

    //cout<<c1.name<<" "<<c1.runs<<endl;
    //cout<<c2.name<<" "<<c2.runs<<endl;
    c1.print();
    c2.print();

}