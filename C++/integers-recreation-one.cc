#include <utility>
#include <vector>
#include <cmath>

using ll = long long;

class SumSquaredDivisors
{
public:
  static std::vector<std::pair<ll, ll>> listSquared(ll m, ll n) {
    std::vector<std::pair<ll, ll>> ret;
    for (ll k = m; k <= n; ++k) {
      ll f_sq_sum = 0;
      for (ll f = 1; f <= k; ++f) {
        if (k % f == 0) f_sq_sum += f * f;
      }
      
      int sq = ll(::sqrt(f_sq_sum));
      if (sq * sq == f_sq_sum) {
        ret.push_back({k, f_sq_sum});
      }
    }
    return ret;
  }
};

