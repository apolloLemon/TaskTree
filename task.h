#pragma once
#include <string>
#include <vector>

class Actor {

};

class Task {

	bool done;
	std::string taskName;
	std::vector<Task> dependencies;


public:
	Task(std::string const & s);
	//Task(std::string, std::vector<Task>);

	//getters
	bool IsDone() const{return done;}
	bool IsReady() const;
	//std::list<Task> Dependencies();

	//settters
	void SetDone(){done=true;}
	void AddDependency(Task const & t);
	//void RemoveDependency(Task);

	//operators


};

class TaskManager { // reminder: Apply singleton's design pattern
 public:
	std::vector<Task> ReadyTasks()const;
};
