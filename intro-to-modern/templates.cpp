#include <iostream>
#include <stdexcept>


template<typename T>
class Vector {
private:
    T* elem;
    int sz;
public:
    explicit Vector(int s);
    ~Vector() { delete[] elem; }

    T& operator[](int i);
    const T& operator[](int i) const;
    int size() const { return sz; }
};


template<typename T>
Vector<T>::Vector(int s) {
    if (s<0) throw;
    elem = new T[s];
    sz = s;
}

template<typename T>
const T& Vector<T>::operator[](int i) const {
    if (i<0 || size()<=i) {
        throw std::out_of_range{"Vector::operator[]"};
    }
    return elem[i];
}


template<typename T>
T* begin(Vector<T>& x) {
    return x.size() ? &x[0] : nullptr;
}

template<typename T>
T* end(Vector<T>& x) {
    return begin(x) + x.size();
}

int main() {


    std::cout << "Hello World\n";
    Vector<char> vc(200);
    Vector<std::string> vs(17);

    return 0;


}
