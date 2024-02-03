#include "subject.h"

void subject::attach(observer *ob) {
    observers.emplace_back(ob);
}

void subject::detach(observer *ob) {
    
}

void subject::notifyobserver() {
    for (auto ob: observers) ob->notify();
}
