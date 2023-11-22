/**              _         ___                       _
 *              | |    _  /  _|                     | |                        _
 *              | |   |_| | |  _____     ____    ___| |__    __ _____  _____  | |   _   _  ____  _____  ____
 *    author:   | |    _ [   ]/  _  \   /  _ \  /  _  |\ \  / //  _  \|  _  \[   ] | | | ||  __|/  _  \|  __|
 *              | L__ | | | | | ____|   | |_\ \ | |_| | \ \/ / | ____|| | | | | |_ | |_| || /   | ____|| /
 *              L____||_| |_| \_____|   \____\_\\_____/  \__/  \_____||_| |_| |___|\_____/|_|   \_____||_|
 *
 *    Life is an adventure. Be adventurous.
 *
 *    created: 18.Sep.2022
 *
 *    mood: ^_^   weather: cloudy
 *
**/
int query(int k);

int answer() {
  long long l = 0, r = (1 << 31) - 1, mid, ans;
  while(l <= r){
    mid = (l + r) / 2;
    int res = query(mid);
    if(res == 1){
      r = mid - 1;
    } 
    else if(res == -1){
      l = mid + 1;
    }
    else{
      ans = mid;
      break;
    }
  }

  return ans;
}

/**
 *        "To stop trying is never the solution."
 *        "You are not alone."
 *        "Failure is another blessing. Only by accepting it calmly can it bring growth."
**/
 
// Be awesome !
// fighting~
// I will fulfill my dreams!
