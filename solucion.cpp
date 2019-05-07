#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

void resolver();

int main(){
    
    resolver();
}

void resolver() {
    
    ofstream outfile;
    outfile.open("datos.dat");
    
    double L = 1;
    double dx = 0.01;
    double dt= 0.01;
    double t = 0;
    double tmax = 6;
    double c = 1/2;
    double c1 = dx/dt;
    double r = c*c/c1/c1;
    
    
    double malla[101][3];
    
    for(int i=0; i<101; i++) {
        malla[i][0] = sin(M_PI*i/100);
    }
    
    while(t<tmax) {
        
        malla[0][1] = 0;
        malla[100][2] = 0;
        for(int i=1; i<100; i++) {
            malla[i][1] = malla[i][0] + 0.5*r*(malla[i+1][0]+malla[i-1][0]+2*malla[i][0]);
            malla[i][2] = 2*malla[i][1] - malla[i][0] + c1*(malla[i+1][1]+malla[i-1][1]+2*malla[i][1]);
        }
        for(int i=0; i<100; i++) {
            outfile << malla[i][0] << " ";
            malla[i][0] = malla[i][1];
            malla[i][1] = malla[i][2];
        }
        outfile << endl;
        t+=dt;
    }
    outfile.close();
    
}