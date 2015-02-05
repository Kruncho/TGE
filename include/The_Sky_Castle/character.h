#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>

#include "cell.h"

class Character
{
    public:
        Character(std::string name);
        std::string getName() {return _name;}
        position getPosition() {return _position;}

    protected:
        static std::string _name;         // Name of the character
        std::vector<std::string> _bag;

        struct position
        {
                int _x;
                int _y;
                int _z;
        } _position;


};

#endif // CHARACTER_H
