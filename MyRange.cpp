#include "MyRange.h"

MyRange::MyRange(const std::initializer_list<int> &list) {
    m_size = list.size();
    m_range = new int(list.size());
    int count{};
    for(auto &el: list){
        m_range[count] = el;
        ++count;
    }
}

MyRange::~MyRange() {
    delete [] m_range;
}
