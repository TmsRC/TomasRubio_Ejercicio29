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
    double deltaX = 0.01;
    double deltaT= 0.01;
    double tmax = 6;
    double c = 1/2;
    
    
    double malla[100][2];
    
    for(int i=0; i<100; i++) {
        malla[i][0] = sin(M_PI*i/100)
    }
    
    
    
    
    outfile.close();
    
}