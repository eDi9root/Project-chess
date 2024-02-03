#ifndef SUBJECT_H
#define SUBJECT_H
#include <vector>
#include "observer.h"

class subject {
    vector<observer*> observers;
public:
    void attach(observer* ob)
    void detach(observer* ob)
    void notifyobservers()
    virtual ~subject() = 0;
    
};

#endif
