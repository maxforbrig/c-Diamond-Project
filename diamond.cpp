#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter a number except zero"<< endl;
    cin >> x;
    for(int y = 0; y < x; y++)
    {
        for(int z = x - y; z > 0 ; z--)
            {
                cout <<  " ";
            }
        for(int i = y + x; i > x; i--)
            {
            cout << "*";

            }
            for(int i = y + x - 1; i > x; i--)
            {
            cout << "*";


            }
    cout << "" << endl;
    }
    for(int j = 0; j < x; j++)
       {

           for(int i = j + x; i > x; i--)
               {
               cout << " ";

               }
  for(int z = x - j; z > 0 ; z--)
               {
               cout << "*";


               }
  for(int z = x - j-1; z > 0 ; z--)
                 {
                 cout << "*";

                 }
       cout << "" << endl;
       }
}

