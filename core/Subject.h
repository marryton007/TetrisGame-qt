#ifndef RESTONCE_SUBJECT_H
#define RESTONCE_SUBJECT_H

#include <set>

namespace restonce {

class Observer;

class Subject
{
public :
    void attachObserver(Observer *o);
protected:
    Subject() = default;
    virtual ~Subject() = default;
    void notifyObservers() ;
private:
    std::set<Observer *> m_observers;
};

} // namespace restonce

#endif // RESTONCE_SUBJECT_H
