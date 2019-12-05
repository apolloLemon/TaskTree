#include "task.h"

/****************** ACTOR ***************/


/******************* TASK **************/

Task::Task(std::string const & s):
	done(false),taskName(s){}

bool Task::IsReady() const{
	for (unsigned int i=0;i<dependencies.size();i++){
		if(dependencies[i].IsDone()==false) return false;
	}
	return true;
}

void Task::AddDependency(Task const & t){
	dependencies.push_back(t);
}
/*************** TASK MANAGER **************/
