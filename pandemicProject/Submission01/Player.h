//
//  Player.h
//  pandemic
//
//  Created by Jefffrey McIntire on 10/14/13.
//  
//

#ifndef Player_h
#define Player_h

//#inlcude <iostream>
#include <string>
#include <vector>
#include "Card.h"
#include "City.h"
using namespace std;

class Player{
private:
    string playerName;
    string playerRole;
    City * location;
    vector<Card*> hand;
    
public:
    Player(string _name, string _role, City* _location){playerName = _name; playerRole = _role;location =_location;}
    Player(string _name, string _role){playerName = _name; playerRole = _role;}
    Player(){playerName = "default";playerRole = "default";}
    void addCard(Card* _toAdd);
    void removeCard(int _toRemove);
    void setPlayerName(string _name){playerName=_name;}
    void setPlayerLocation(City * _location){location = _location;}
    void setPlayerRole(string _role){playerRole = _role;}
    void setHand(vector<Card*> _hand){hand = _hand;}
    Card* getCard(int _toGet){return hand[_toGet];}
    string getPlayerRole(){return playerRole;}
    string getPlayerName(){return playerName;}
    City * getPlayerLocation(){return location;}
    vector<Card*> getHand(){return hand;}
    int getHandSize(){return (int)hand.size();}      //get the size of the a players hand.
 
    
    
    
};

#include "Player.cpp"

#endif
