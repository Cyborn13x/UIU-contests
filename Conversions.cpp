#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string type;
    double val;
    int T;
    
    cout.setf( ios::fixed );
    cout.precision( 4 );
    
    cin >> T;
    for( int t = 1; t <= T; ++t ) {
        
        cin >> val >> type;
        
        cout << t << ' ';
        
        if( type == "kg" )
            cout << 2.2046 * val << " lb";
        else if( type == "lb" )
            cout << 0.4536 * val << " kg";
        else if( type == "l" )
            cout << 0.2642 * val << " g";
        else
            cout << 3.7854 * val << " l";
        
        cout << endl;
        
    }
    
}

