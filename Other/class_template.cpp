#include <iostream>
using namespace std;

template <typename T>
class Vector{
    public:
        T size;
        T*arr;
        Vector(int size){
            this->size = size;   
            arr = new T[size]; // we have created an array here of size no of elements     
        }
        void display(){
            for(int i=0; i<size;i--){
                cout<<arr[i]<<endl;
            }
        }
        T dotproduct(Vector &v){
            T dp=0;
            for(int i=0; i<size; i++){
                dp = dp + (this->arr[i]*v.arr[i]);
            }
            return dp;
        }
};

int main(){
    Vector<int> v1(3);
    v1.arr[0] = 3;
    v1.arr[1] = 4;
    v1.arr[2] = 5;
    v1.display();

    Vector<int> v2(3);
    v2.arr[0] = 5;
    v2.arr[1] = 6;
    v2.arr[2] = 7;
    v2.display();

    int dp = v1.dotproduct(v2);
    cout<<dp<<" is the dot product of v1 and v2"<<endl;

    Vector<double> v3(3);
    v3.arr[0] = 3.2;
    v3.arr[1] = 4.4;
    v3.arr[2] = 5.1;
    v3.display();

    Vector<double> v4(3);
    v4.arr[0] = 5.3;
    v4.arr[1] = 6.6;
    v4.arr[2] = 7;
    v4.display();

    double dp1 = v3.dotproduct(v4);
    cout<<dp1<<" is the dot product of v3 and v4"<<endl;
}