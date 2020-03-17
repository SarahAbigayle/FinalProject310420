#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

#include "MiscClasses.h"
#include "Page.h"
#include "Journal.h"

void Journal_BBTest1and2();
void Journal_BBTest3_ForceFailure();

int main()
{
	Journal_BBTest1and2();
	Journal_BBTest3_ForceFailure();
	return 0;
}


// Serves as blackbox test 1 and 2, which state:
//		BBTest1: Call major features
//		BBTest2: Generate a workload
void Journal_BBTest1and2()
{
	Journal myFirstJournal("Test");
	Page myFirstPage("PageTest", "Collection", "My2020Year");
}

// Serves as blackbox test 3, which states:
//		BBTest3: Force failure of specific features that the code will rely on
//
//		These failures are commented out currently to allow the program to compile.
void Journal_BBTest3_ForceFailure()
{
//	Journal myFirstJournal;
//	Page myFirstPage("1", "2", "3", "4");
}