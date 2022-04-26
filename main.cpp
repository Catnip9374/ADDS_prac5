

#include "MapTriple.h"
#include"MapAbsoluteValue.h"
#include"FilterForTwoDigitPostitive.h"
#include"FilterOdd.h"
#include"ReduceMinimum.h"
#include"ReduceGCD.h"
#include<iostream>
#include<string>
#include <sstream>
using namespace std;

int main(){
    // ={6,-11,53,-16,73,128,105,104,-71,-179,102,12,21,-145,-99,199,-156,-186,43,-189}
    vector<int> t;
    
    int num;
    string str;
    getline(cin, str);
    stringstream ss(str);
    while(ss>>num){
        t.push_back(num);
    }
    cout << t.size();
    MapAbsoluteValue m1;
    MapTriple m2;
    FilterForTwoDigitPositive f1;
    FilterOdd f2;
    ReduceGCD r1;
    ReduceMinimum r2;
    t = m1.map(t);
    t = m2.map(t);
    t = f1.filter(t);
    t = f2.filter(t);
    cout << " min gcd: ";
    cout << r2.reduce(t) << " " << r1.reduce(t);
}