class Solution {
public:
    int totalFruit(vector<int>& fruits) {
  int start = 0;
  int end = 0;
  int maxs = 1;
  int tempmax = 0;
  int firstfruit = fruits[0];
  int secondfruit = INT_MAX;

  while (end < fruits.size()){
    if(fruits[end] != firstfruit && secondfruit == INT_MAX){
      secondfruit = fruits[end];
    }
    if(fruits[end] == firstfruit || fruits[end] == secondfruit){
      tempmax++;
    }
    else{
      int tempstart = end-1;
      tempmax = 2;
      start = end-1;

      while(fruits[tempstart] == fruits[start]){
          tempstart--;
          tempmax++;
      }
      tempmax--;
      start = tempstart+1;
      firstfruit = fruits[start];
      secondfruit = fruits[end];

    }
    maxs = max(maxs, tempmax);
    end++;
  }
    return maxs;
  }
};