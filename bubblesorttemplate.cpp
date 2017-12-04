#include<iostream>
using namespace std;
template <class t>
class bubble
{

t a[25];

public:

void get(int);

void sort(int);

void display(int);

};

template <class t>

void bubble <t>::get(int n)

{

int i;

cout<<"\nEnter the array elements:";

for(i=0; i<n;i++)

cin>>a[i];

}

template <class t>

void bubble <t>::display(int n)

{

int i;

cout<<"\n The sorted array is…\n";

for(i=0;i<n;i++)

cout<<a[i];

}

template <class t>

void bubble <t>::sort(int n)

{

int i,j;

t temp;

for(i=0;i<n;i++)

{

for(j=i+1;j<n;j++)

{

if(a[i]>a[j])

{

temp=a[i];

a[i]=a[j];

a[j]=temp;

}

}

}

}

int main()

{

int n;

bubble<int> b1;
bubble<float> b2;
bubble<char> b3;

cout<<"\n Bubble Sort on Integer Values…";

cout<<"\n Enter the size of array:\n";

cin>>n;

b1.get(n);

b1.sort(n);

b1.display(n);

cout<<"\n Bubble Sort on Float Values…";

cout<<"\n Enter the size of array:\n";

cin>>n;

b2.get(n);

b2.sort(n);

b2.display(n);
cout<<"\n Bubble Sort on Integer Values…";

cout<<"\n Enter the size of array:\n";

cin>>n;

b3.get(n);

b3.sort(n);

b3.display(n);
return 0;
}
