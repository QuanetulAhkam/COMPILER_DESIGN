#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;


void Linspace(double upl,double low,int siz){

    double limt;
    limt = (upl-low)/siz;

    double* a = new double[siz+1];

    a[0]=low;
    for(int i=1;i<(siz+1);i++){
        a[i]=a[i-1]+limt;
    }

    for(int i=0;i<(siz+1);i++){
        cout<<a[i]<<"  ";
    }

}

int main(){

    double upl;
    double low;
    int siz;

    cin>>upl;
    cin>>low;
    cin>>siz;

    Linspace(upl,low,siz);
}
