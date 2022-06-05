#pragma once

class Subject;

class Observer {
public:
	Observer(Subject* subject);
	virtual ~Observer();
public:
	virtual void Update(Subject* subject) = 0;
protected:
	Subject* subject;
protected:
private:
private:
};
