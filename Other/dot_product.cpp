#include <iostream>
using namespace std;

class Vector{
    public:
        int size;
        int*arr;
        Vector(int size){
            this->size = size;   
            arr = new int[size]; // we have created an array here of size no of elements     
        }
        void display(){
            for(int i=0; i<size;i++){
                cout<<arr[i]<<endl;
            }
        }
        int dotproduct(Vector &v){
            int dp=0;
            for(int i=0; i<size; i++){
                dp = dp + (this->arr[i]*v.arr[i]);
            }
            return dp;
        }
};

int main(){
    Vector v1(3);
    v1.arr[0] = 3;
    v1.arr[1] = 4;
    v1.arr[2] = 5;
    v1.display();

    Vector v2(3);
    v2.arr[0] = 5;
    v2.arr[1] = 6;
    v2.arr[2] = 7;
    v2.display();

    int dp = v1.dotproduct(v2);
    cout<<dp<<" is the dot product of v1 and v2"<<endl;
}