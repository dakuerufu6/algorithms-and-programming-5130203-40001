#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, k=1, d1=0, d2=0, d11=0,d22=0, chetd2=0, nechetd1=1, nod=0, x,y;
    cout<<"Enter A: "<<endl;
    cin>>a;
    cout<<"Enter B: "<<endl;
    cin>>b;
    if(a>=10 && a<=1000 && b>=10 && a<=1000){
        while (k<=a){
            if (a%k==0){
                d1++;
                d11+=k;
                if (k%2!=0){
                    nechetd1*=k;
                }
            }
            k++;
        }
        k=1;
        while (k<=b){
            if (b%k==0){
                d2++;
                d22=d22+k;
                if (k%2==0){
                    chetd2+=k;
                }
            }
            k++;
        }
        k=1;

        x=a;
        y=b;
        while(x>0 && y>0){
            if (x>y){
                x%=y;
            }
            else{
                y%=x;
            }
        }
        nod = x+y;
        
    }
    cout<<k<<endl;
    cout<<"A "<< d1<<" B "<<d2<<endl;
    cout<<"summa: "<<d11+d22<<endl;
    cout<<"proizvedenie: "<<d1*d2<<endl;
    cout<<"summa chet nechet: "<<nechetd1+chetd2<<endl;
    if (nod!=0){
        cout<<"nod: "<<nod<<endl;
    }
    else{
        cout<<"it's simple numbers."<<endl;
    }
    return 0;
}