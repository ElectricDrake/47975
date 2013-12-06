#ifndef SLOTBASE_H
#define SLOTBASE_H
#include <string>
using namespace std;


class SlotBase{
private:
    int slotVal;
    string white;
    string black;
    string empty;
    string invis;

public:
    SlotBase();//Constructor
    void setSlotVal(int);
    int getSlotVal();
    string getBlack();
    string getWhite();
    string getEmpty();
    string getInvis();

};

SlotBase::SlotBase(){//Constructor Initialization
    slotVal = 0;
    white = " *";
    black = " O";
    empty = "[]";
    invis = "  ";

}
//Getter and Setter Functions
void SlotBase::setSlotVal(int val){
slotVal = val;
}

int SlotBase::getSlotVal(){
return slotVal;
}

string SlotBase::getBlack(){
    return black;
}

string SlotBase::getWhite(){
    return white;
}

string SlotBase::getEmpty(){
    return empty;
}

string SlotBase::getInvis(){
    return invis;
}



#endif // SLOTBASE_H
