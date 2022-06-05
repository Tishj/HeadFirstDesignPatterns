#pragma once

#include "common/unordered_set.hpp"
#include "observer/observer.hpp"

enum class SubjectType {
	WEATHER_DATA
};

class Subject {
public:
	Subject(SubjectType type);
	virtual ~Subject();
public:
	SubjectType Type() const;
	void	RegisterObserver(Observer* observer);
	void	RemoveObserver(Observer* observer);
	void	SetChanged();
	virtual void	NotifyObservers();
protected:
protected:
	unordered_set<Observer*> observers;
private:
	SubjectType type;
	bool changed;
private:
};
