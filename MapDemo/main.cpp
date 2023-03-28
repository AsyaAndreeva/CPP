#include <iostream>
#include <string>
#include <list>

//sorted map
#include <map>

//unsorted map - faster
#include <unordered_map>

using namespace std;

int main() {


    //map of strings
    map<string, string> myDictionary;
    myDictionary.insert(pair<string, string>("apple", "mela, pomo"));
    myDictionary.insert(pair<string, string>("banana", "banano"));
    myDictionary.insert(pair<string, string>("orange", "arancia"));
    myDictionary.insert(pair<string, string>("strawberries", "fragole"));

    //access and changes the value
    //myDictionary["strawberries"] = "5";

    //gets the size of the map
    cout<< myDictionary.size()<<endl;

    //clearing the map
    myDictionary.clear();

    for(auto pair:myDictionary){
        cout<<pair.first<<"-"<<pair.second<<endl;
    }

    //map of strings and lists
    map<string, list<string>> pokedex;

    list<string> pikachuAttacks {"thunder shock", "tail whip", "quick attack"};
    list<string> charmanderAttacks {"flame thrower", "scary face"};
    list<string> chikoritaAttacks { "razor leaf", "poison power"};

    pokedex.insert(pair<string, list<string>>("Pikachu", pikachuAttacks));
    pokedex.insert(pair<string, list<string>>("Charmander", charmanderAttacks));
    pokedex.insert(pair<string, list<string>>("Chikorita", chikoritaAttacks));

    for(auto pair : pokedex){
        cout<<pair.first<<"-";

        for(auto attack : pair.second){
            cout<<attack<<", ";
            cout<<endl;
        }

    }


    return 0;
}
