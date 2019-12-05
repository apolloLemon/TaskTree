#include "task.h"

int main(){ // quick one, I'll improve it later, it's just for testing purposes
	Task brain("make a brain");
	Task cells("buy braincells");
	brain.AddDependency(cells);
}
