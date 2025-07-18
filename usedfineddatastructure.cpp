#include<iostream>
using namespace std;
class Vector{
public:
        int size;
        int capacity;
        int* arr;
        Vector(){
            size=0;
            capacity=1;
            arr=new int[1];
        }
        void add(int ele){
            if(size==capacity){
                capacity*=2;
                int* arr2=new int[capacity];
                for(int i=0;i<size;i++){
                    arr2[i]=arr[i];
                }
                arr=arr2;

            }
            arr[size]=ele;
            size++;
        }
        void print(){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        int get(int idx){
            if(size==0){
                cout<<"array is empty "<<endl;
                return -1;
            }
            if(idx>=size || idx<0){
                cout<<"invalid index"<<endl;
            }
            return arr[idx];
        }
        void remove(){
            if(size==0){
                cout<<"array is empty "<<endl;
            }
            size--;
        }

};
int main(){
    Vector v1;
    //cout<<v1.size<<" "<<v1.capacity<<endl;
    v1.add(10);
    v1.print();
    v1.add(5);
    v1.add(2);
    v1.add(1);
    v1.print();
   // cout<<v1.size<<" "<<v1.capacity<<endl;
    cout<<v1.get(1)<<endl;
    v1.remove();
    v1.print();

}