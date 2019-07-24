//
// Created by Maria.Baburina on 10/23/2015.
//
#include <iostream>
#include <vector>
#include <forward_list>
#include <set>
#include <list>
#include <deque>
#include <unordered_map>
#include <stdio.h>
#include <valarray>
#include "header.h"

using namespace std;

template <typename T>
void foo1(vector<T>& v1) {
    printf("foo1");
}

template <typename T>
void foo2(deque<T>& d1) {
    printf("foo2");
}

template <typename T>
void foo3(forward_list<T>& fl1) {
    printf("foo3");
}

template <typename T>
void foo4(unordered_map<T, T>& fl1) {
    printf("foo4");
}

template <typename T>
void foo5(multiset<T>& fl1) {
    printf("foo4");
}


bool fncomp (int lhs, int rhs) {return lhs<rhs;}

struct classcomp {
    bool operator() (const int& lhs, const int& rhs) const
    {return lhs<rhs;}
};


typedef std::unordered_map<std::string,std::string> stringmap;

stringmap merge (stringmap a,stringmap b) {
    stringmap temp(a); temp.insert(b.begin(),b.end()); return temp;
}

int main ()
{
    stringmap mfirst;
    stringmap msecond ( {{"apple","red"},{"lemon","yellow"}} );
    stringmap mthird ( {{"orange","orange"},{"strawberry","red"}} );
    stringmap mfourth (msecond);
    stringmap mfifth (merge(mthird,mfourth));
    stringmap msixth (mfifth.begin(),mfifth.end());

    foo4(mfirst);
    foo4(msecond);
    foo4(mthird);
    foo4(mfourth);
    foo4(mfifth);

    std::set<int> sfirst;
    int myints[]= {10,20,30,40,50};
    std::set<int> ssecond (myints,myints+5);
    std::set<int> sthird (ssecond);
    std::set<int> sfourth (ssecond.begin(), ssecond.end());
    std::set<int,classcomp> fifth;


    bool(*fn_pt)(int,int) = fncomp;
    std::set<int,bool(*)(int,int)> sixth (fn_pt);

    std::multiset<int> msfirst;
    std::multiset<int> mssecond (myints,myints+5);
    std::multiset<int> msthird (mssecond);
    std::multiset<int> msfourth (mssecond.begin(), mssecond.end());
    std::multiset<int,classcomp> msfifth;

    bool(*fn_pt2)(int,int) = fncomp;
    std::multiset<int,bool(*)(int,int)> mssixth (fn_pt2);

    std::valarray<std::string> valStr("h", 4);

    foo5(msfirst);
    foo5(mssecond);
    foo5(msthird);
    foo5(msfourth);

    /*std::deque<int> dfirst;
    std::deque<int> dsecond (4,100);
    std::deque<int> dthird (dsecond.begin(),dsecond.end()); // False parameter type mismatch

    foo2(dthird);

    std::list<int> lfirst;
    std::list<int> lsecond (4,100);
    std::list<int> lthird (lsecond.begin(),lsecond.end()); // False parameter type mismatch
    std::list<int> lfourth (lthird);

    std::vector<int> vfirst;
    std::vector<int> vsecond (4,100);
    std::vector<int> vthird (vsecond.begin(),vsecond.end()); // False parameter type mismatch
    std::vector<int> vfourth (vthird);

    vector<string> vs2(SIZE_8 - 1);
    vector<string> vs3(SIZE_64);
    vector<string> vs31(SIZE_64 + 10);
    vector<string> vs4(SIZE_1024);
    vector<string> vs41(SIZE_1024 - 25);
    vector<string> vs5(SIZE_2048);

    foo1(vs2);
    foo1(vs3);
    foo1(vs31);
    foo1(vs4);
    foo1(vs41);
    foo1(vs5);
    foo1(vthird);

    forward_list<int> flfirst;
    forward_list<int> flsecond (3,77);
    forward_list<int> flthird (flsecond.begin(), flsecond.end()); // False parameter type mismatch

    foo3(flthird);
*/
    return 0;
}