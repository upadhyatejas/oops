#include<iostream>
using namespace std;       
      void test(int a)
       {
            
              try
              {

                  if(a==1)
                      throw a;                  //throwing integer exception

                  else if(a==2)
                      throw 'A';                //throwing character exception

                  else if(a==3)
                      throw 4.5;                //throwing float exception

              }
              catch(int a)
              {
                  cout<<"\nInteger exception caught.";
                  throw;
              }
              catch(char ch)
              {
                  cout<<"\nCharacter exception caught.";
                  throw;
              }
              catch(double d)
              {
                  cout<<"\nDouble exception caught.";
                  throw;
              }

              cout<<"\nEnd of program.";
        
       }
       
       int main()
       {
           try{
               
               test (2);
           }
           catch(...)
           {
               cout<< " \n caught rethrown exception in main";
           }
           return 0;
       }
