#include <iostream>
using namespace std ;
int main (){

    typedef struct pokemon{

        int speed ;
        int power ;
        char level ;

    } pokemon_name ;

    pokemon_name pikachu ;

    pikachu.speed = 100 ;
    pikachu.power = 120 ;
    pikachu.level = 's' ;

    pokemon_name charmander ;

    cout << "Enter speed of charmander : " ;
    cin >> charmander.speed ;

    cout << "Enter power of charmander : " ;
    cin >> charmander.power ;

    cout << "Enter level of charmander : " ;
    cin >> charmander.level ;

    cout << "Speed of charmander : " << charmander.speed << endl ;
    cout << "Power of charmander : " << charmander.power << endl ;
    cout << "Level of charmander : " << charmander.level << endl << endl ;

    cout << "Speed of pikachu : " << pikachu.speed << endl ;
    cout << "Power of pikachu : " << pikachu.power << endl ;
    cout << "Level of pikachu : " << pikachu.level << endl ;

    return 0 ;
}