#include <string>
#include <list>

class Actor {

};

class Task {

	bool done;
	std::string taskName;
	std::list<Task> dependencies;


public:
	Task(std::string);
	Task(std::string, std::list<Task>);

	//get
	bool Done();
	bool Ready();

	std::list<Task> ReadyTasks();
	std::list<Task> Dependencies();

	//set
	void SetDone();
	void AddDependency(Task);
	void RemoveDependency(Task);

};

class TaskManager {
	
};