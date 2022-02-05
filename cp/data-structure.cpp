#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<set>
#include<map>
#include<string>
#include<iterator>

using namespace std;

typedef struct student
{
    string name ;
    int id ;
};
struct data
{
    int first,second;
};

//compare function for customizing sort function
bool compare(int a, int b)
{
    return a > b ;
}
int main()
{
    int a[] = {2,2,43,4,4};
    int len = sizeof(a)/sizeof(a[0]);;
    sort(a,a+len , compare);
    cout << a[0] << endl;
    cout << sizeof(a);

    //structure
    student std1 ;
    std1.name = "najir";
    std1.id = 10;
    cout<<std1.name << " id :  " <<std1.id ;

    //

    //set
    set<int> set1;
    for (unsigned i=0;i<5 ;i++) set1.insert(a[i]);
    cout << " size of set : " << set1.size() <<endl;

    //map
     map< string, int  > m;
    string goru;
    cout<< "map exercise : \n";
    while( cin >> goru ) {
        if( goru == "moro" ) break;
        m[ goru ] ++;
        cout << goru <<" ase " << m[ goru ] << " ta :D " << endl;
    }

    //string stream
    char line[1000];
    cout<<"string stream exercise : \n" ;
    while( gets( line ) ) {
        stringstream ss( line ); // initialize kortesi
        int num; vector< int > v;
        while( ss >> num ) v.push_back( num ); // :P
        sort( v.begin(), v.end() );
        // print routine
    }
}
