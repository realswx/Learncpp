#ifndef EX7_43_H_INCLUDED
#define EX7_43_H_INCLUDED

class NoDefault {
public:
    NoDefault(int i) {}
};
class C {
public:
    C(): def(0) {}
private:
    NoDefault def;
};

#endif // EX7_43_H_INCLUDED
