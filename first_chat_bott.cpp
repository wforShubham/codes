#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"how do you feel today?"<<endl;
    cin>>a;
    if(a=="good"){
        cout<<"good to know that"<<endl;
        }
        else if(a=="not good"){
            cout<<"felt bad for you but imma machine can't help you"<<endl;
        }
        else if(a=="feeling sick"){
            cout<<"you must vist to doctor"<<endl;
        }
        else if(a=="hungry"){
            cout<<"go to your mom"<<endl;
        }
        else if(a=="i want a gf"||"want a gf"||"want to date someone"){
            cout<<"what am i  suppose to do?"<<endl;
        }

        return 0;
}
