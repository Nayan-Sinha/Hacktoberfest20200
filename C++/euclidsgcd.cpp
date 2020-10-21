#include <iostream>
using namespace std;


long long int computegcd(long long int a,long long int b){

//base cases
if(a==0)return b;
if(b==0)return a;





long long int r;
if(a>=b){
r=a%b;
return computegcd(b,r);
}
else if(a<b){
r=b%a;
return computegcd(a,r);

}

}


int main(){
//Euclid's algorithm to find gcd of two integers

long long int a,b;
cout<<"enter the two numbers:"<<endl;
cin>>a>>b;
if(a<0)a=a*-1;
if(b<0)b=b*-1;
cout<<"the gcd of "<<a<<" and "<<b<<" is "<<computegcd(a,b)<<endl;




}
    