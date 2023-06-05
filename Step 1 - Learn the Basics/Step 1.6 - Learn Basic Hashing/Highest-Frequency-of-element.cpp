#include <bits/stdc++.h>
using namespace std;


int maxFrequency(vector<int>& nums, int k) {
	sort(nums.begin(), nums.end());

	int sum = 0;
	int left = 0;
	int right = 0;
	int max_f = 1;
	
	while (true){
		if (right == nums.size()){
			break;
		}
		if ( sum + k > nums[right] * (right - left + 1) ){
			sum += nums[right];
			right++;
		}
		else{
			sum -= nums[left];
			left++;
		}
		max_f = max(max_f, right - left + 1);
	}
	return max_f;
}

int main(){
	vector<int> nums = {1,4,8,13};
	int k = 5;
	cout << maxFrequency(nums, k);

}
