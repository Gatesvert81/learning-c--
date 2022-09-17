#include<bits/stdc++.h>
using namespace std;


/*
 Vectord are defined by 
 vector<type> indentier;
 
*/
int main(){ 
    vector<int> v;
    v.push_back(5); //Adds an element to the end of the vector
    v.push_back(6);
    v.push_back(3);
    v.size(); //Returns the size of the vector
    
    cout << v[0] << " " << v[2] ;
    v.pop_back(); // Pops out an element from the end of the vector
    v.clear(); // Erases all elements
}