#ifndef CELL_H
#define CELL_H

#include <string>

class Cell
{
    public:
        Cell();
        void setName(std::string name);
        void setObjectToCatch(std::string obj);
        void setObjectNeeded(std::string obj);
        void setComments(std::string comments);
        void setConnections(bool up, bool down, bool left, bool right);
        void setPosition(int x, int y, int z);

    protected:
        std::string _name;
        std::vector<std::string> _objectToCatch;
        std::vector<std::string> _objectNeeded;
        std::string _comments;

        struct connections {
                bool _up;
                bool _down;
                bool _left;
                bool _right;
        } _connections;

        struct position {
                int _x;
                int _y;
                int _z;
        } _position;


};

#endif // CELL_H
