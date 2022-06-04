#pragma once

class FlyBehavior {
public:
	FlyBehavior() {}
	virtual void Fly() const = 0;
	virtual ~FlyBehavior() {}
};
