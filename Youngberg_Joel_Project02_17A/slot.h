#ifndef SLOT_H
#define SLOT_H

template <class T>
class BaseSlot{
private:
    T white;//white Graphic
    T black;//black Graphic
    T empty;//displays when empty

protected:
    T slotVal;//Empty = 0 White = 1 or Black = 2

public:
    BaseSlot(T s, T w, T b, T e,){//Constructor
        slotVal = s;
        white = w;
        black = b;
        empty = e;
    }
};

class Slot: public BaseSlot{

public:


};

class InvisibleSlot: public BaseSlot{
private:
    string invis;//to make it invisible

};

#endif // SLOT_H
