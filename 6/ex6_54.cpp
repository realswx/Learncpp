#include<vector>

using namespace std;

int func(int m, int n) {

}

using pFunc1 = decltype(func) *;
typedef decltype(func) *pFunc2;
using pFunc3 = int (*)(int m, int n);
using pFunc4 = int(int m, int n);
typedef int(*pFunc5)(int m, int n);
using pFunc6 = decltype(func);


vector<pFunc1> vec1;
vector<pFunc2> vec2;
vector<pFunc3> vec3;
vector<pFunc4*> vec4;
vector<pFunc5> vec5;
vector<pFunc6*> vec6;
