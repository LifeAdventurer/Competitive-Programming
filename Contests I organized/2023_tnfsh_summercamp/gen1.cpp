#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

void gen_task1();

int main(int argc, char **argv) {
  registerGen(argc, argv, 1);

  std::string MODE = argv[1];
  if (MODE == "task1") {
    gen_task1();
  }

  return 0;
}

void gen_task1() {
  int n = rnd.next(1, 1000);
  cout << n << endl;
  // 0 1

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << rnd.next(0, 1) << " \n"[j == n - 1];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << rnd.next(1, (int)1e9) << " \n"[j == n - 1];
    }
  }
}