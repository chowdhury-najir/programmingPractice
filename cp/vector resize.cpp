#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int>vec;
    for(unsigned i=0;i<=10;i++) vec.push_back(i);
    cout<<vec.size()<<endl;
    vec.resize(20);
    cout<<"vector size after resize : " <<vec.size()<<endl;
    vec.erase(vec.begin(),vec.begin()+4);
    cout<<"vector size after erase : " <<vec.size()<<endl;
    //print the vector
    cout<<"elements of the vector  is  : " ;
    for(auto const &i : vec)
    {
        cout<<i<< " ";
    }
}
