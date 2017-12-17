#include<iostream>
#include<string>
#include<unordered_map>
#include<unordered_set>

using namespace std;

int main()
{
    unordered_set <string> myset = 
    {"Mecury", "venus", "earth", "mars", "jupiter", "saturn", "uranus", "neptune"};

    cout<<"myset :";
    for(auto it=myset.begin();i!=myset.end(); ++it){
        cout<<"9"<<*it;
    cout<<endl;
    }
    return 0;
}
