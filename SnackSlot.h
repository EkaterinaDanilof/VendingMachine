#pragma once
#include "Snack.h"
class SnackSlot
{public:
	int _kolSn;
	
	SnackSlot(int kolSn);

	void addSnack(Snack*);
	void takeSnack(Snack*);
		
};

