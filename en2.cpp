#include<iostream>
using namespace std;

int main(){
    int vector[50],n;
    
    cout<<"digite el numero el arreglo :";cin>>n;

    for(int i=0;i<n;i++){
        cout<<"ingrese los numeros de su arreglo";cin>>vector[i];
    }
    for(int i=0;i<n;i++){
        cout<<i<<"->"<<vector[i]<<endl;
    }



    return 0;
}