#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <stack>
#include <string>
#include <sstream>
using namespace sol859;
using namespace std;

/*takeaways
  - you will most likely make mistakes on handling the edge
    cases when A == B
    - if there are no repeated chars in A then you can't make
      the swap. For example, for "abc", you won't be able to keep
      the A the same after making the swap
*/

bool Solution::isBuddy(string A, string B)
{
  /* you can't even perform a swap */
  if (A.empty() || A.size() < 2)
    return false;
  if (A.size() != B.size())
    return false;
  /* this is the tricky part
     - in A you need to have repeated chars
       so you can swap them without changing
       A
     - that means the number of unique chars
       must be less than the size of A
  */
  if (A == B &&
      unordered_set<char>(A.begin(), A.end()).size() < A.size())
    return true;

  auto distance = 0;

  for (auto i = 0; i < A.size(); i++)
    if (A[i] != B[i])
      distance++;

  return distance == 2;
}
