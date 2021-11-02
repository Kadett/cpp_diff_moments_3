#pragma once

#include <iostream>
#include <initializer_list>


class MyRange {
    int *m_range{};
    int m_size{};
public:
    MyRange(const std::initializer_list<int> &list);

    virtual ~MyRange();

    class iterator {
    public:
        int *ptr;

        iterator(int *i_ptr = nullptr) : ptr(i_ptr) {}

        int &operator*() const { return *ptr; }

        int *operator->() { return ptr; }

        int *operator++() { return ++ptr; }

        int *operator--() { return --ptr; }

        bool operator==(MyRange::iterator &other) const { return ptr == other.ptr; }

        bool operator!=(MyRange::iterator &other) const { return !(*this == other); }
    };

    size_t size() const { return m_size; }

    iterator begin() { return m_range; }

    iterator end() { return m_range + m_size; }
};
