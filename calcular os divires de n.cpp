/******************************************************************************

/******************************************************************************

Calcular os divisores de um número n em um intervalo de inteiros [a,b].


*******************************************************************************/

/*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "digite a: " << endl;
    cin >> x;
    cout << "digite b: " << endl;
    cin >> y;
    
    for(int i = 1; i<=y; i++){
        if( x%i==0 ){

      cout << i << endl;

            
        }



    }

    return 0; 
}

