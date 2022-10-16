class Solution {
    public:
        int longestMountain(std::vector<int>& arr) {
  
            int max = 0, minima;
            bool minimaset = false, maximaset = false;
            
            for (int i = 0; i + 1 < arr.size(); i++) {
                if (!minimaset) {
                    if (arr[i] < arr[i + 1]) {
                        minimaset = true;
                        maximaset = false;
                        minima = i;
                    }
                    else if (arr[i] > arr[i + 1] && maximaset) {
                        while (i + 1 < arr.size() && arr[i] > arr[i + 1])
                            i++;    
                        maximaset = false;
                        max = std::max(max, i - minima + 1);
                        i--;
                    }
                }
                else {
                    if (arr[i] == arr[i + 1] && !maximaset) {
                        minimaset = false;
                        maximaset = false;
                    }
                    else if (arr[i] > arr[i + 1] && !maximaset) {
                        minimaset = false;
                        maximaset = true;
                        i--;
                    }
                }
            }
            return max;
        }
    };
