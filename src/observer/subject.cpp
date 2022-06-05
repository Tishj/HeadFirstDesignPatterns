#include "observer/subject.hpp"
#include "common/iostream.hpp"

Subject::Subject(SubjectType type) : type(type) {}

Subject::~Subject() {
	this->observers.clear();
}

void Subject::RegisterObserver(Observer* observer)
{
	this->observers.insert(observer);
}

void Subject::RemoveObserver(Observer* observer)
{
	this->observers.erase(observer);
}

SubjectType Subject::Type() const
{
	return type;
}

void Subject::SetChanged()
{
	changed = true;
}

void Subject::NotifyObservers() {
	if (!changed) {
		return;
	}
	for (auto& observer : observers) {
		observer->Update(this);
	}
	changed = false;
}
