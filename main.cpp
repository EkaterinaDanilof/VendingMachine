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
	int a = 3;/*���������� ����������, ������� ���������� � ����*/
	SnackSlot* slotB = new SnackSlot(a);
	SnackSlot* slotS = new SnackSlot(a);
	SnackSlot* slotMars = new SnackSlot(a);
	SnackSlot* slotMilky = new SnackSlot(a);
	slotB->addSnack(bounty); //��������� �������� � ����
	slotS->addSnack(snickers);
	slotMars->addSnack(mars);
	slotMilky->addSnack(milky);
	int slotCount = 10; /*���������� ������ ��� ������*/
	VendingMachine* machine = new VendingMachine(slotCount);
	machine->addSlot(slotB);
	machine->addSlot(slotS);// �������� ���� ������� � �������
	machine->addSlot(slotMars);
	machine->addSlot(slotMilky);

	cout << machine->getEmptySlotsCount(); // ������ �������� ���������� ������ ������ ��� ������
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