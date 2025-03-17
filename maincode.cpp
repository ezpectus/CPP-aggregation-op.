#include <iostream>
#include <vector>
#include <algorithm>  // std::sort
#include <cstdlib>    // rand(), srand()
#include <ctime>      // time()

using namespace std;


int main(){
	srand(time(0));
	vector<int> nums(20);



	for (int& num : nums) {
		num = rand() % 100 + 1;
	}


	cout << " Unsorted: ";
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
	cout << endl;


	int minNum = *min_element(nums.begin(), nums.end());
	int maxNum = *max_element(nums.begin(), nums.end());


	int sum = 0;
	for (int num : nums) {
		sum += num;
	}
	double avg = sum / (double)nums.size();

	sort(nums.begin(), nums.end());	


	double med = 0;
	int n = nums.size();
	if (n % 2 == 0) {
		med = (nums[n / 2 - 1] + nums[n / 2]) / 2.0;

	}
	else {
		med = nums[n / 2];
	}



	cout << "min: " << minNum << endl;
	cout << "max: " << maxNum << endl;
	cout << "sum: " << sum << endl;
	cout << "avg: " << avg << endl;
	cout << "med: " << med << endl;


	return 0;
}
