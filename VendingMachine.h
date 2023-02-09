#pragma once
#include "SnackSlot.h"

class VendingMachine
{
	int _slotCount;
	

public:
	VendingMachine(int slotCount): _slotCount(slotCount){}

	int addSlot(SnackSlot*);
	int takeSlot(SnackSlot*);

	int getEmptySlotsCount();

};

