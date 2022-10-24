using ull = unsigned long long;

std::vector<std::vector<ull>> mem;

ull dfs(ull r, ull p) {
  if (r == 0) return 1;
  
  ull ret = 0;
  
  for (ull i = p; i <= r; ++i) {
    if (mem[r - i][i] == 0) {
      mem[r - i][i] = dfs(r - i, i);
    }
    ret += mem[r - i][i];
  }
  return ret;
}


ull exp_sum(unsigned int n) {
  mem.assign(n + 1, std::vector<ull>(n + 1, {}));
  return dfs(n, 1);
}

