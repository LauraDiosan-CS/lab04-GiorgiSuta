#include "undo.h"

Undo::Undo() {
	this->i = 0;

}

Undo::Undo(int i, Produs produs) {
	this->i = i;
	this->produs = produs;
}
Undo::Undo(const Undo& undo)
{
	this->i = undo.i;
	this->produs = undo.produs;
}

int Undo::getI() {
	return this->i;
}
void Undo::setI(int newI) {
	this->i = newI;
}
Produs Undo::getProdus() {
	return this->produs;
}
Undo& Undo::operator=(const Undo& undo) {
	this->i = undo.i;
	this->produs = undo.produs;
	return *this;
}
Undo::~Undo() {
	this->i = 0;
}