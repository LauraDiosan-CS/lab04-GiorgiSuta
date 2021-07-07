#include "RepoUndo.h"

RepoUndo::RepoUndo() {
	this->n = 0;
}
RepoUndo:: ~RepoUndo() {
	this->n= 0;
}
void RepoUndo::add(Undo undo) {
	this->lista[this->n++] = undo;
}
void RepoUndo::reducereN() {
	if (this->n > 0)
		this->n--;
}
Undo RepoUndo::end() {
	if (this->n > 0)
		return this->lista[this->n - 1];
	return this->lista[0];
}