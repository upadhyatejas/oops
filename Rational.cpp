#include<iostream>
using namespace std;
class rational
{
 int nem,deno;
 public:
 rational()
 {
 nem=0;
 deno=1;
 }
 rational(int a,int b)
 { nem=a;
 deno=b;
 }
 void reduce()
 { int gcd;
 int rem,i;
 int n1=nem,n2=deno;
 //GCD
 for(i=1; i <= n1 && i <= n2; ++i)
 {
 // Checks if i is factor of both integers
 if(n1%i==0 && n2%i==0)
 gcd = i;
 }
 nem/=gcd; //Dividing Numerator and Denominator by GCD
 deno/=gcd;
 }
 friend ostream &operator << (ostream &output,rational &p);
 friend istream &operator >> (istream &input,rational &p);
};
 ostream &operator << (ostream &output,rational &p) //Operator Overloading
 {
 output<<p.nem<<"/"<<p.deno<<endl;
 return output;
 }
 istream &operator >> (istream &input,rational &p)
 {
 cout<<"Enter enter a rational num in new & deno form \n";
 input>>p.nem>>p.deno;
 return input;
 }
int main()
{
 rational r(8,4);
 cin>>r;
 r.reduce();
 cout<<r;
 return 0;
}
