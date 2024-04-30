//Stadard Template Library
// in normal array we can not add elements in middle of an array
// also no simple way to delete any particular element
// to avoid this we use linked list
// it is like a chain
// vector, lists, maps
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v1){
    cout<<"Vector elements are : ";
    for(int i=0; i<3; i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v1; 
    //vector<type> name create reference variable for vector
    // size is dynamic unlike array
    int num;
    for(int i=0; i<3; i++){
        cout<<"Enter the number : ";
        cin>>num;
        v1.push_back(num); // enters the num in the vector
    }
    display(v1);
    v1.pop_back();
    vector<int>:: iterator itr;//creating iterator
    itr = v1.begin();//pointing iterator to particular place
    //itr = v1.end();
    //giving particular location
    v1.insert(itr+2,3,41); // at 2nd location 0,1,2 middle number denotes the no. of times we want to add it
    v1.insert(itr,38); // to insert values at random places needs an iterator
    display(v1);
}