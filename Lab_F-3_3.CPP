#include<bits/stdc++.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

double Function(double a){

    double res;
    res=1/1+exp(-a);

    return res;

}


void Linspace(double upl,double low,int n){

    double limt;
    limt = (upl-low)/n;

    double* a = new double[n+1];

    a[0]=low;
    for(int i=1;i<(n+1);i++){
        a[i]=a[i-1]+limt;
    }

    double out[n+1];
   // freopen("linspace.txt","w",stdout);
    for(int i=0;i<(n+1);i++){

        out[i] = Function(a[i]);
        cout<<a[i]<<"  "<<out[i]<<endl;
    }

}

int main(){

    double upl;
    double low;
    int siz;
    cout<<"Upper Value :";
    cin>>upl;
    cout<<"Lower Value :";
    cin>>low;
    cout<<"Div (n) :";
    cin>>siz;

    Linspace(upl,low,siz);
}
