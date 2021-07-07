#include <iostream>
#include "UI.h"
#include "test.h"

using namespace std;


int main() {
	MyTest();
	TestService();
	UI ui;
	ui.run();
	return 0;
}