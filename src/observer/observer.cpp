#include "observer/observer.hpp"
#include "observer/subject.hpp"

Observer::Observer(Subject* subject) : subject(subject)
{
	subject->RegisterObserver(this);
}

Observer::~Observer()
{
	subject->RemoveObserver(this);
}
