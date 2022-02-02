// Type your code here, or load an example.
#include<iostream>
using namespace std;
int main() 
{
    int x = 8;
    cout << "enter a number except zero"<< endl;
    //cin >> x;
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
    for(int j = x; j < x; j++)
    {
        for(int e = x - j; e < 0 ; e--)
            {
                cout <<  " ";
            }
        //for(int i = j + x; i > x; i--)
            {
            //cout << "*";

        
            //}    
            //for(int i = y + x; i > x; i--)
            //{
            //cout << "*";

        
            //}   
    cout << "*" << endl;
    }

}
}
