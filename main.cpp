#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol859;

/*
Input: A = "ab", B = "ba"
Output: true
*/
tuple<string, string, bool>
testFixture1()
{
  return make_tuple("ab", "ba", true);
}

/*
Input: A = "ab", B = "ab"
Output: false
*/
tuple<string, string, bool>
testFixture2()
{
  return make_tuple("ab", "ab", false);
}

/*
Input: A = "aa", B = "aa"
Output: true
*/
tuple<string, string, bool>
testFixture3()
{
  return make_tuple("aa", "aa", true);
}

/*
Input: A = "aaaaaaabc", B = "aaaaaaacb"
Output: true
*/
tuple<string, string, bool>
testFixture4()
{
  return make_tuple("aaaaaaabc", "aaaaaaacb", true);
}

/*
Input: A = "", B = "aa"
Output: false
*/
tuple<string, string, bool>
testFixture5()
{
  return make_tuple("", "aa", false);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  cout << "Expect to see " << get<2>(f) << ": " << sol.isBuddy(get<0>(f), get<1>(f)) << endl;
}
void test2()
{
  auto f = testFixture2();
  Solution sol;
  cout << "Expect to see " << get<2>(f) << ": " << sol.isBuddy(get<0>(f), get<1>(f)) << endl;
}
void test3()
{
  auto f = testFixture3();
  Solution sol;
  cout << "Expect to see " << get<2>(f) << ": " << sol.isBuddy(get<0>(f), get<1>(f)) << endl;
}
void test4()
{
  auto f = testFixture4();
  Solution sol;
  cout << "Expect to see " << get<2>(f) << ": " << sol.isBuddy(get<0>(f), get<1>(f)) << endl;
}
void test5()
{
  auto f = testFixture5();
  Solution sol;
  cout << "Expect to see " << get<2>(f) << ": " << sol.isBuddy(get<0>(f), get<1>(f)) << endl;
}

main()
{
  test1();
  test2();
  test3();
  test4();
  test5();
  return 0;
}