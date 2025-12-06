#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter number of juices sold:";
    cin>>n;
    float price;
    float smallJuicePrice=0;
    float total=0;
    float smallJuiceTotal=0;
    int count=0;
    for(int i=1;i<=n;i++){

        cout<<"enter price of juice number "<<i<<":";
        cin>>price;

         if(price<100){

            cout<<"Small Juice"<<endl;
            smallJuicePrice+=price;
            count++;
         }

        total+=price;
    }
    cout<<"Total sales amount:"<<total<<endl;
    cout<<"Number of small juices sold:"<<count<<endl;
    cout<<"Total amount from small juices:"<<smallJuicePrice<<endl;
    return 0;
}