#ifndef _OBSERVER_H_
#define _OBSERVER_H_

class subject;

class observer {
public:
    virtual void notify() = 0;
    virtual ~observer() = default;
};

#endif
