#include <iostream>
using namespace std;
int main ()
{
int a,b,c,d ;
cin>> a >> b;

d=a*b;
if(a==b)
{
c=a;
}
else {
while ((a!=0)&&(b!=0)){
if(a>b){
a=a%b;}
else if(b>a)
{b=b%a;}

}
c=a+b;
}
cout<<d/c;
}

