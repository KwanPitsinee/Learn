#ifndef _CP_PAIR_INCLUDED_
#define _CP_PAIR_INCLUDED_


#include <iostream>
#include <assert.h>

namespace CP {

template <typename T1,typename T2>
class pair
{
  public:
    T1  first;
    T2  second;

    // default constructor, using list initialize
    pair() : first(), second() {}

    // custom constructor, using list initialize
    pair(const T1 &a,const T2 &b) : first(a), second(b) { }

    // we have no destructor

    // equality operator
    bool operator==(const pair<T1,T2> &other) {
      std::cout << "You cannot call operator==" << std::endl;
      assert(false);
    }

    // comparison operator
    bool operator<(const pair<T1,T2>& other) const {
      std::cout << "You cannot call operator<" << std::endl;
      assert(false);
    }

    bool operator>=(const pair<T1,T2>& other) const;

    friend pair<T1,T2> operator+(pair<T1,T2> l, pair<T1,T2>& r){
    l.first+=r.first;
    l.second+=r.second;
    return l;
} 
    friend std::ostream& operator<<(std::ostream& out, const pair<T1,T2>& x){
    return out<<x.first<<" and "<<x.second<<"\n";
}
};


}

#endif
