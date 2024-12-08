#pragma once

class Array {
private:
    size_t size;
    int* array;

public:
    Array(size_t n = 0);
    Array(size_t n, int min, int max);
    Array(const Array& other);
    ~Array();

    int min() const;
    int max() const;
    void sorted();

    void clear();
    int pop();
    //int top() const;

    void print() const;
};