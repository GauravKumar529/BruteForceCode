class Solution {
  public:
  int hours(vector<int >&arr,int speed){ // this is a brute force code for this as we;ll 
      int ans = 0;
      for(int i = 0;i<arr.size();i++){
          ans += (arr[i] + speed - 1 ) / speed ;
      }
      return ans;
  }
    int kokoEat(vector<int>& arr, int k) {
        // Code here
       // int  n = arr.size();
        int low = 1;
        int high  = *max_element(arr.begin() , arr.end());
       // int ans = 0;
        for(int i = low;i<=high ;i++){
            int  hourCnt = hours(arr, i);
            if(hourCnt <= k)return i;
        }
        return -1;
    }
};

//tc -> o(n) + o(n)+ o(n) {this one for *max_element ;
sc-> o(1);
