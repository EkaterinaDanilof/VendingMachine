#include "SnackSlot.h"
#include "Snack.h"



SnackSlot::SnackSlot(int kolSn)
{
	_kolSn = kolSn;
}

void SnackSlot::addSnack(Snack*)
{
	_kolSn++;
}

void SnackSlot::takeSnack(Snack*)
{
	_kolSn--;
}


