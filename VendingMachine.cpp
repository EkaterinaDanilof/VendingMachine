#include "VendingMachine.h"



int VendingMachine::addSlot(SnackSlot*)
{
    return --_slotCount;
}

int VendingMachine::takeSlot(SnackSlot*)
{
    return ++_slotCount;
}

int VendingMachine::getEmptySlotsCount()
{
   return _slotCount;
}
