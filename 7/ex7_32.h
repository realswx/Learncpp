#ifndef EX7_32_H_INCLUDED
#define EX7_32_H_INCLUDED

#include<string>
#inlcude<vector>
#include<iostream>
using namespace std;

class Window_mgr
{
public:
    using ScreenIndex = vector<Screen>::size_type;
    void clear(ScreenIndex);

private:
    vector<Screen> screens{Screen(24, 80, ' ')};
};
class Screen
{
    friend void Window_mgr::clear(ScreenIndex);

public:
    using pos = std::string::size_type;

    Screen() = default;
    Screen(pos ht,pos wd):height(ht),width(wd),contents(ht*wd,' '){}
    Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}

    char get() const {return contents[cursor];}
    char get(pos r,pos c) const {return contents[r*width+c];}
    inline Screen& move(pos r,pos c);
    inline Screen& set(char ch);
    inline Screen& set(pos r,pos c,char ch);

    const Screen& display(std::ostream& os)const
    {
        do_display(os);
        return *this;
    }
    Screen& display(std::ostream& os)
    {
        do_display(os);
        return *this;
    }

private:
    void do_display(std::ostream& os) const {os<<contents;}

private:
    pos cursor = 0;
    pos height = 0,width = 0;
    std::string contents;

};

void Window_mgr::clear(ScreenIndex i) {
    Screen &s = screen[i];
    s.contents = string(s.height * s.width, ' ');
}

inline Screen& Screen::move(pos r,pos c)
{
    cursor = r*width+c;
    return *this;
}

inline Screen& Screen::set(char ch)
{
    contents[cursor] = ch;
    return *this;
}

inline Screen& Screen::set(pos r,pos c,char ch)
{
    contents[r*width+c] = ch;
    return *this;
}
#endif // EX7_32_H_INCLUDED
