#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double x[],int y,double z[]){

    double sumAv = 0 ,sigma = 0,hamo = 0,geo =1 ;
    for (int i = 0; i < y; i++)
    {
        sumAv += x[i];
    }
            z[0] = sumAv/y;

    for (int i = 0; i < y; i++)
    {
        sigma += pow(x[i]-z[0],2);
    }
            z[1] = sqrt(sigma/y);

    for (int i = 0; i < y; i++)
    {
        geo *= x[i];

    }
            z[2] = pow(geo,(1.0/y));

    for (int i = 0; i < y; i++)
    {
        hamo += 1/x[i] ;
    }
            z[3] = y/hamo;
            double max = x[0],min =x[0];

    for (int i = 0; i < y; i++)
    {
        if(x[i] > max) max = x[i];
        if(x[i] < min) min = x[i];
    }
            z[4]=max;
            z[5]=min;

}