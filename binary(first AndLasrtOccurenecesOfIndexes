pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here // this is code  in which no lb and uppper bound is there here i only use binary search ,  
    int first = -1;
    int low = 0;
    int high = n - 1;
    while(low<=high) {// firstly for finding the first occuring element from the list  
        int mid = low+ (high - low) / 2;
        if(arr[mid] == k){
             first = mid;
             high  = mid -1;// move tpoward lesft dont mug up , just imagine and dry run and thwn implement codde 
        }
        else if(arr[mid] <k) low = mid+1;
        else high =  mid -1;
    }
    int last = -1;
    low = 0;
    high = n-1;
    while(low<=high) {//  this is for last occuring imdex 
       int  mid = low + (high - low) / 2;
        if(arr[mid ] == k) {
            last = mid;
            low = mid+1; //  jiudt imagine and then write code 
        }
        else if(arr[mid] < k) {
            low = mid+1;

        }
        else high = mid - 1;

    }
    if(first  == -1|| last == -1) return {-1 , -1};
    return {first , last };
}
