#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <limits>
#include <iomanip>
#include <type_traits>
#include <algorithm>

using namespace std;
const long double zero = 0.0;
long double dp[128][128] = {0.0};
string name;

string write(long double dp[128], int idx, string x[128], string LB, string UB){


    string name = "";
    name += "(FPCore (x) :name \"" + name  + to_string(idx) + "\" ";
    name += '\n';
    name += ":pre (and (>= x " + LB + ") (<= x " + UB + "))";
    name += '\n';
    string s = "";
    bool flag = false;
    for ( int i = 0; i <= idx; i++ ){
        string val = to_string(dp[i]);
        if (val.compare("0.000000") == 0 || val.compare("-0.000000") == 0 ) continue;
        if ( !flag ) {
            s = val;
            if ( i != 0 ) s = "(* " + s + " " + x[i] + " )";
            flag = true;
        }
        else {
            s = "(+ " + s + " " + "(* " + val + " " + x[i] + "))";           
        }
    }
    s += ")";
    s += '\n';
    s = name + s;
    return s;
}
void laguerre(){
    dp[0][0] = 1;
    dp[1][0] = 1;
    dp[1][1] = -1;
    for ( int i = 2; i < 128; i++ ){
        for ( int j = 0; j < i; j++ ){
            dp[i][j] += (-dp[i-2][j] * (i-1) + (2*(i-1) + 1) * dp[i-1][j]) / i;
            dp[i][j+1] -= dp[i-1][j] / i;
        }
    }
}
void hermite(){
    dp[0][0] = 1;
    dp[1][1] = 2;
    for ( int i = 2; i < 128; i++ ){
        for ( int j = 0; j < i; j++ ){
            dp[i][j] -= 2 * dp[i-2][j] * (i-1);
            dp[i][j+1] += 2 * dp[i-1][j];
        }
    }
}
void legendre(){
    dp[0][0] = 1;
    dp[1][1] = 1;
    for ( int i = 2; i < 128; i++ ){
        for ( int j = 0; j < i; j++ ){
            dp[i][j] -=  (dp[i-2][j] * (i-1)) / i;
            dp[i][j+1] += ((2 * (i - 1) + 1) * dp[i-1][j]) / i;
        }
    }
}
int main(int argc, char *argv[]){
    string filename = "";
    if ( argv[1] == string("0") ){
        laguerre();
        filename = "laguerre_formula_";
        name = "Laguerre";
    }
    else if ( argv[1] == string("1")){
        hermite();
        filename = "hermite_formula_";
        name = "Hermite";
    }
    else{
        legendre();
        filename = "legendre_formula_";
        name = "Legendre";
    }

    string LB = argv[2];
    string UB = argv[3];
//    double LB = ;
//    double UB = 0.01;

    string x[128];
    x[0] = "";
    x[1] = "x";
    string s;
    for ( int i = 2; i < 128; i++ ) x[i] = "(* " + x[i-1] + " x)";    
    ofstream out;
    filename += LB + "_" + UB +  ".fpcore";

    out.open(filename);
    for ( int i = 0; i < 20; i++ ) {
        s = write(dp[i], i, x, LB, UB);
        out << s;
    }
    out.close();

}

