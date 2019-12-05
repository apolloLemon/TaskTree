FAGS = -Wall -std=c++14
BOSS = main.cpp
MINIONS = task.cpp
WORKER = exe

main: $(BOSS) $(MINIONS)
	g++ $(FAGS) $(BOSS) $(MINIONS) -o $(WORKER)

clean:
	rm $(WORKER)
