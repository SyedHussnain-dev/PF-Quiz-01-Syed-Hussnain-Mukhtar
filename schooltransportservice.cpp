#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter number of students:";
    cin>>n;
    
    float fee;
    float total=0;
    int count=0;
    for(int i=1;i<=n;i++){

        cout<<"enter monthly bus fee for student no "<<i<<":";
        cin>>fee;

         if(fee<900){

            cout<<"Concession Given"<<endl;
            count++;
         }

        total+=fee;
    }

    cout<<"Total bus fee collected:"<<total<<endl;
    cout<<"Number of students given concession:"<<count<<endl;

    return 0;

}