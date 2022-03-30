#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
char Calp[26];
char Salp[26];
char num[9];
char Sp[5]={'$','#','%','&','!'};

string password(){

    srand(time(0));

    Calp[0]='A';
    Salp[0]='a';
    num[0]='0';
    for(int i=1;i<26;i++){
        Calp[i]=Calp[0]+i;
    }


    for(int i=1;i<26;i++){
        Salp[i]=Salp[0]+i;
    }

    for(int i=1;i<9;i++){
        num[i]=num[0]+i;
    }

    string s="";
    s+=Calp[rand()%27];

    for(int j=0;j<5;j++){
        s+=Salp[rand()%27];
    }
    for(int j=0;j<2;j++){
        s+=num[rand()%10];

    }
    s+=Sp[rand()%6];



    return s;
}

int main(){


    string s2 = password();
    cout<<s2;

}
