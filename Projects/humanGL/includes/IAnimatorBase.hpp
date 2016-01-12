#ifndef IANIMATORBASE_HPP
# define IANIMATORBASE_HPP

class Transformable;

class IAnimatorBase
{
public:
	virtual IAnimatorBase * clone(void) const = 0;
	virtual float getDuration(void) const = 0;
	virtual float getTimerStart(void) const = 0;
	virtual float getTimerEnd(void) const = 0;

	virtual void update(float animationTimer, float frameTime) = 0;
	virtual void animate(Transformable & transformable) = 0;

};

#endif