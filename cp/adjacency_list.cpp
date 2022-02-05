#include <iostream>
#include <vector>
#include<utility>
using namespace std;

#define pii pair< int, int >
#define ppi pair< pii, int >
#define ff first
#define ss second
const int MAX = 100;
typedef pair< int, int > Edge; // to, weight

int main () {
//    pair<int,int> px,py;
//    pair<int,int> p1(23,43);
//    cout<<p1.first << " " <<p1.second <<endl;
//    pair< int, int > p2 = pair< int, int >(234, 534);
//    px = p1;
//    py.first = p2.first * px.second, py.second = p2.second * px.first;
//    cout << "py: (" << py.first << ", " << py.second << ")\n";
//
//    pair< pair< int, int >, pair< int, int > > p3;
//    p3 = pair< pair<int, int>, pair< int, int > > (px, py);
//    cout << "p3: ((";
//    cout << p3.first.first << ", " << p3.first.second << "), (";
//    cout << p3.second.first << ", " << p3.second.second << "))\n";
    ppi p1;
    pii p2;
    cin >> p2.ff >> p2.ss;
    p1 = ppi( p2, p2.ss * p2.ff );
    cout << "entry: " << p1.ff.ff << ", " << p1.ff.ss << endl;
    cout << "product: " << p1.ss << endl;
    return 0;
//    int n, e, i, j, u, v, w;
//    vector< Edge > G[MAX]; // adjacency list for MAX vertices
//    while(cin >> n >> e) {
//        // n nodes in range [0,n), e edges
//        for(i = 0; i < n; i++) G[i].clear(); // forget previous info
//        for(i = 0; i < e; i++) {
//            // directed edge from u to v with cost w
//            cin >> u >> v >> w;
//            G[u].push_back(Edge(v, w));
//        }
//        // now show the graph
//        for(i = 0; i < n; i++) {
//            cout << "Degree of " << i << ": " << G[i].size() << endl;
//            cout << "Adjacents:\n";
//            for(j = 0; j < (int)G[i].size(); j++) {
//                cout << ' ' << G[i][j].first << "(" << G[i][j].second << ")\n";
//            }
//            cout << endl;
//        }
//    }
    return 0;
}
