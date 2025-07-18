#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg; 
    Cricketer(string name, int runs, float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    } 
    void print(int runs){
    cout<<name<<" "<<this->runs<<" "<<avg<<" "<<endl;
    cout<<runs<<endl;
}
};
int main(){
    Cricketer c1("virat kohli", 25000, 95);
    /*c1.name="virat kohli";
    c1.runs=25000;
    c1.avg=96;
    Cricketer c2;
    c2.name="rohit sharma";
    c2.runs=18000;
    c2.avg=92;
    */
   Cricketer c2("rohit sharma", 18000, 92);
    c1.print(5);
    c2.print(8);
}