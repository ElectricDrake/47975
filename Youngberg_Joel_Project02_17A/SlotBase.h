#ifndef SLOTBASE_H
#define SLOTBASE_H
#include <string>
using namespace std;

template <class T>
class SlotBase{
private:
    T slotVal;
    string white;
    string black;
    string empty;
    string invis;

public:
    SlotBase();//Constructor
    void setSlotVal(T);
    T getSlotVal();
    string getBlack();
    string getWhite();
    string getEmpty();
    string getInvis();

};

template <class T>
SlotBase<T>::SlotBase(){//Constructor Initialization
    slotVal = 0;
    white = " *";
    black = " O";
    empty = "[]";
    invis = "  ";

}
//Getter and Setter Functions
template <class T>
void SlotBase<T>::setSlotVal(T val){
slotVal = val;
}

template <class T>
T SlotBase<T>::getSlotVal(){
return slotVal;
}

template <class T>
string SlotBase<T>::getBlack(){
    return black;
}

template <class T>
string SlotBase<T>::getWhite(){
    return white;
}

template <class T>
string SlotBase<T>::getEmpty(){
    return empty;
}

template <class T>
string SlotBase<T>::getInvis(){
    return invis;
}



#endif // SLOTBASE_H
