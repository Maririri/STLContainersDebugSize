#include "header.h"
/*
Sequence containers:
array
vector
deque
forward_list
list
*/
#include <vector>
#include <string>
#include <deque>
#include <forward_list>

/*
Container adaptors:
stack
queue
priority_queue
*/

/*
Associative containers:
set
multiset
map
multimap
*/

/*
Unordered associative containers:
unordered_set
unordered_multiset
unordered_map
unordered_multimap
 */

using namespace std;

int main() {

    /*vector<string> vs0(0);
    vector<string> vs1(SIZE_8);
    vector<string> vs2(SIZE_8 - 1);
    vector<string> vs3(SIZE_64);
    vector<string> vs31(SIZE_64 + 10);
    vector<string> vs4(SIZE_1024);
    vector<string> vs41(SIZE_1024 - 25);
    vector<string> vs5(SIZE_2048);
    vector<string> vs51(SIZE_2048 - 48);
    vector<string> vs52(SIZE_2048 - 49);
    vector<string> vs53(SIZE_2048 - 50);
    vector<string> vs6(SIZE_65535);
    vector<string> vs61(SIZE_65535 + 1);*/

    /*deque<string> ds0(0);
    deque<string> ds1(SIZE_8);
    deque<string> ds2(SIZE_8 - 1);
    deque<string> ds3(SIZE_64);
    deque<string> ds31(SIZE_64 + 10);
    deque<string> ds4(SIZE_1024);
    deque<string> ds41(SIZE_1024 - 25);
    deque<string> ds5(SIZE_2048);
    deque<string> ds51(SIZE_2048 - 48);
    deque<string> ds52(SIZE_2048 - 49);
    deque<string> ds53(SIZE_2048 - 50);
    deque<string> ds6(SIZE_65535);
    deque<string> ds61(SIZE_65535 + 1);*/

    /*deque<int> ds0(0);
    deque<int> ds1(SIZE_8);
    deque<int> ds2(SIZE_8 - 1);
    deque<int> ds3(SIZE_64);
    deque<int> ds31(SIZE_64 + 10);
    deque<int> ds4(SIZE_1024);
    deque<int> ds41(SIZE_1024 - 25);
    deque<int> ds5(SIZE_2048);
    deque<int> ds51(SIZE_2048 - 48);
    deque<int> ds52(SIZE_2048 - 49);
    deque<int> ds53(SIZE_2048 - 50);
    deque<int> ds6(SIZE_65535);
    deque<int> ds61(SIZE_65535 + 1);*/


    forward_list<int> first;                      // default: empty
    forward_list<int> second (3,77);              // fill: 3 seventy-sevens
    forward_list<int> third (second.begin(), second.end()); // range initialization
    forward_list<int> fourth (third);            // copy constructor
    forward_list<int> fifth (std::move(fourth));  // move ctor. (fourth wasted)
    forward_list<int> sixth = {3, 52, 25, 90};

    return 0;
}