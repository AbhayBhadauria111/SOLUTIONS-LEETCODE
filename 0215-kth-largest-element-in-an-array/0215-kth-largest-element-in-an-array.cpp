// O(n logn) time O(1) extra space assuming mutable nums
// O(n) extra space when nums is immutable
class Solution1 {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k];
    }
};

// Quickselect(LOMUTO PARTITIONING)
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0, high = n-1;
        while(true) {
            int x = partition(low+1, high, nums[low], nums);
            x--;
            swap(nums[low], nums[x]);
            if(x == k-1) return nums[k-1];
            else if(k-1 < x) high = x - 1;
            else low = x + 1;
        }
    }
private:
    // O(n) time
    int partition(int low, int high, int pivot, vector<int>& nums) {
        int i = low, j = low;
        while(j <= high) {
            if(nums[j] <= pivot) j++;
            else {
                swap(nums[i], nums[j]);
                i++; j++;
            }
        }
        return i;
    }
};




