#include<iostream>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"
using namespace std;

int main() {
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	Snack* mars = new Snack("Mars");
	Snack* milky = new Snack("Milky");
	int a = 3;/*количество батончиков, которые помещаютс€ в слот*/
	SnackSlot* slotB = new SnackSlot(a);
	SnackSlot* slotS = new SnackSlot(a);
	SnackSlot* slotMars = new SnackSlot(a);
	SnackSlot* slotMilky = new SnackSlot(a);
	slotB->addSnack(bounty); //ƒобавл€ем батончик в слот
	slotS->addSnack(snickers);
	slotMars->addSnack(mars);
	slotMilky->addSnack(milky);
	int slotCount = 10; /* оличество слотов дл€ снеков*/
	VendingMachine* machine = new VendingMachine(slotCount);
	machine->addSlot(slotB);
	machine->addSlot(slotS);// ѕомещаем слот обратно в аппарат
	machine->addSlot(slotMars);
	machine->addSlot(slotMilky);

	cout << machine->getEmptySlotsCount(); // ƒолжно выводить количество пустых слотов дл€ снеков
	delete machine;
	delete slotB;
	delete slotS;
	delete slotMars;
	delete slotMilky;
	delete milky;
	delete mars;
	delete snickers;
	delete bounty;
}