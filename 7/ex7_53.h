#ifndef EX7_53_H_INCLUDED
#define EX7_53_H_INCLUDED

class Debug {
public:
    constexpr Debug(bool b = true): rt(b), io(b), other(b) { }
    constexpr Debug(bool r, bool i, bool o):
        rt(r), io(i), other(o) { }
    constexpr bool any() { return rt || io || other;}
    void set_io(bool b) { io = b;}
    void set_rt(bool b) { rt = b;}
    void set_other(bool b) { other = b;}
private:
    bool rt;
    bool io;
    bool other;
};

#endif // EX7_53_H_INCLUDED
