#include<iostream>
using namespace std;

int main(){
    int moises[]={2,1,40,9,23};
    int mayor=0;


    for (int i=0;i<5;i++){
        if (moises [i] > mayor){
            mayor = moises[i];
        }

    }
    cout<<"el mayor del vector es:"<<mayor<<endl;
    


    return 0;
}