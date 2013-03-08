/*Patties*/


#include <iostream>
using namespace std;

int main()
{
        int P, M, C, K, R, V;
        cin >>P>>M>>C;
        cin >> K>>R>>V;
        cout<<min(min(P/K, M/R),C/V)<<endl;
        return 0;
}
