#include "bits/stdc++.h"
#include "algorithm"
using namespace std;

class ElevatorButtons 
{
    public:
    vector <int> nextStops( int currentFloor, int currentDirection, vector <int> buttonsPressed ) 
    {
        vector <int> lowpass, highpass, result;
        for(auto x : buttonsPressed)
        {
			if(x>currentFloor && find(highpass.begin(), highpass.end(), x)==highpass.end())
				highpass.push_back(x);
			else if(x<currentFloor && find(lowpass.begin(), lowpass.end(), x)==lowpass.end())
				lowpass.push_back(x);
		}
		sort(highpass.begin(), highpass.end());
		sort(lowpass.begin(), lowpass.end(), greater<int>());
		if(currentDirection==1)
		{
			for(auto x : highpass)
				result.push_back(x);
			for(auto x : lowpass)
				result.push_back(x);
		}
		else if(currentDirection==-1)
		{
			for(auto x : lowpass)
				result.push_back(x);
			for(auto x : highpass)
				result.push_back(x);
		}
		return result;
    }
};

// BEGIN CUT HERE
#include <cstdio>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
namespace moj_harness {
	using std::string;
	using std::vector;
	int run_test_case(int);
	void run_test(int casenum = -1, bool quiet = false) {
		if (casenum != -1) {
			if (run_test_case(casenum) == -1 && !quiet) {
				std::cerr << "Illegal input! Test case " << casenum << " does not exist." << std::endl;
			}
			return;
		}
		
		int correct = 0, total = 0;
		for (int i=0;; ++i) {
			int x = run_test_case(i);
			if (x == -1) {
				if (i >= 100) break;
				continue;
			}
			correct += x;
			++total;
		}
		
		if (total == 0) {
			std::cerr << "No test cases run." << std::endl;
		} else if (correct < total) {
			std::cerr << "Some cases FAILED (passed " << correct << " of " << total << ")." << std::endl;
		} else {
			std::cerr << "All " << total << " tests passed!" << std::endl;
		}
	}
	
	template<typename T> std::ostream& operator<<(std::ostream &os, const vector<T> &v) { os << "{"; for (typename vector<T>::const_iterator vi=v.begin(); vi!=v.end(); ++vi) { if (vi != v.begin()) os << ","; os << " " << *vi; } os << " }"; return os; }

	int verify_case(int casenum, const vector <int> &expected, const vector <int> &received, std::clock_t elapsed) { 
		std::cerr << "Example " << casenum << "... "; 
		
		string verdict;
		vector<string> info;
		char buf[100];
		
		if (elapsed > CLOCKS_PER_SEC / 200) {
			std::sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}
		
		if (expected == received) {
			verdict = "PASSED";
		} else {
			verdict = "FAILED";
		}
		
		std::cerr << verdict;
		if (!info.empty()) {
			std::cerr << " (";
			for (size_t i=0; i<info.size(); ++i) {
				if (i > 0) std::cerr << ", ";
				std::cerr << info[i];
			}
			std::cerr << ")";
		}
		std::cerr << std::endl;
		
		if (verdict == "FAILED") {
			std::cerr << "    Expected: " << expected << std::endl; 
			std::cerr << "    Received: " << received << std::endl; 
		}
		
		return verdict == "PASSED";
	}

	int run_test_case(int casenum__) {
		switch (casenum__) {
		case 0: {
			int currentFloor          = 10;
			int currentDirection      = 1;
			int buttonsPressed[]      = {7, 15};
			int expected__[]          = {15, 7 };

			std::clock_t start__      = std::clock();
			vector <int> received__   = ElevatorButtons().nextStops(currentFloor, currentDirection, vector <int>(buttonsPressed, buttonsPressed + (sizeof buttonsPressed / sizeof buttonsPressed[0])));
			return verify_case(casenum__, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}
		case 1: {
			int currentFloor          = 10;
			int currentDirection      = -1;
			int buttonsPressed[]      = {7, 15};
			int expected__[]          = {7, 15 };

			std::clock_t start__      = std::clock();
			vector <int> received__   = ElevatorButtons().nextStops(currentFloor, currentDirection, vector <int>(buttonsPressed, buttonsPressed + (sizeof buttonsPressed / sizeof buttonsPressed[0])));
			return verify_case(casenum__, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}
		case 2: {
			int currentFloor          = 10;
			int currentDirection      = -1;
			int buttonsPressed[]      = {47, 47, 47, 47, 47};
			int expected__[]          = {47 };

			std::clock_t start__      = std::clock();
			vector <int> received__   = ElevatorButtons().nextStops(currentFloor, currentDirection, vector <int>(buttonsPressed, buttonsPressed + (sizeof buttonsPressed / sizeof buttonsPressed[0])));
			return verify_case(casenum__, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}
		case 3: {
			int currentFloor          = 500;
			int currentDirection      = 1;
			int buttonsPressed[]      = {420, 570, 140, 230, 915, 820, 499, 820, 177};
			int expected__[]          = {570, 820, 915, 499, 420, 230, 177, 140 };

			std::clock_t start__      = std::clock();
			vector <int> received__   = ElevatorButtons().nextStops(currentFloor, currentDirection, vector <int>(buttonsPressed, buttonsPressed + (sizeof buttonsPressed / sizeof buttonsPressed[0])));
			return verify_case(casenum__, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}
		case 4: {
			int currentFloor          = 1000;
			int currentDirection      = -1;
			int buttonsPressed[]      = {0};
			int expected__[]          = {0 };

			std::clock_t start__      = std::clock();
			vector <int> received__   = ElevatorButtons().nextStops(currentFloor, currentDirection, vector <int>(buttonsPressed, buttonsPressed + (sizeof buttonsPressed / sizeof buttonsPressed[0])));
			return verify_case(casenum__, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}
		case 5: {
			int currentFloor          = 600;
			int currentDirection      = -1;
			int buttonsPressed[]      = {420, 570, 140, 230, 915, 820, 499, 820, 177};
			int expected__[]          = {570, 499, 420, 230, 177, 140, 820, 915 };

			std::clock_t start__      = std::clock();
			vector <int> received__   = ElevatorButtons().nextStops(currentFloor, currentDirection, vector <int>(buttonsPressed, buttonsPressed + (sizeof buttonsPressed / sizeof buttonsPressed[0])));
			return verify_case(casenum__, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}

		// custom cases

/*      case 6: {
			int currentFloor          = ;
			int currentDirection      = ;
			int buttonsPressed[]      = ;
			int expected__[]          = ;

			std::clock_t start__      = std::clock();
			vector <int> received__   = ElevatorButtons().nextStops(currentFloor, currentDirection, vector <int>(buttonsPressed, buttonsPressed + (sizeof buttonsPressed / sizeof buttonsPressed[0])));
			return verify_case(casenum__, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}*/
/*      case 7: {
			int currentFloor          = ;
			int currentDirection      = ;
			int buttonsPressed[]      = ;
			int expected__[]          = ;

			std::clock_t start__      = std::clock();
			vector <int> received__   = ElevatorButtons().nextStops(currentFloor, currentDirection, vector <int>(buttonsPressed, buttonsPressed + (sizeof buttonsPressed / sizeof buttonsPressed[0])));
			return verify_case(casenum__, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}*/
/*      case 8: {
			int currentFloor          = ;
			int currentDirection      = ;
			int buttonsPressed[]      = ;
			int expected__[]          = ;

			std::clock_t start__      = std::clock();
			vector <int> received__   = ElevatorButtons().nextStops(currentFloor, currentDirection, vector <int>(buttonsPressed, buttonsPressed + (sizeof buttonsPressed / sizeof buttonsPressed[0])));
			return verify_case(casenum__, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}*/
/*      case 9: {
			int currentFloor          = ;
			int currentDirection      = ;
			int buttonsPressed[]      = ;
			int expected__[]          = ;

			std::clock_t start__      = std::clock();
			vector <int> received__   = ElevatorButtons().nextStops(currentFloor, currentDirection, vector <int>(buttonsPressed, buttonsPressed + (sizeof buttonsPressed / sizeof buttonsPressed[0])));
			return verify_case(casenum__, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}*/
/*      case 10: {
			int currentFloor          = ;
			int currentDirection      = ;
			int buttonsPressed[]      = ;
			int expected__[]          = ;

			std::clock_t start__      = std::clock();
			vector <int> received__   = ElevatorButtons().nextStops(currentFloor, currentDirection, vector <int>(buttonsPressed, buttonsPressed + (sizeof buttonsPressed / sizeof buttonsPressed[0])));
			return verify_case(casenum__, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}*/
/*      case 11: {
			int currentFloor          = ;
			int currentDirection      = ;
			int buttonsPressed[]      = ;
			int expected__[]          = ;

			std::clock_t start__      = std::clock();
			vector <int> received__   = ElevatorButtons().nextStops(currentFloor, currentDirection, vector <int>(buttonsPressed, buttonsPressed + (sizeof buttonsPressed / sizeof buttonsPressed[0])));
			return verify_case(casenum__, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}*/
/*      case 12: {
			int currentFloor          = ;
			int currentDirection      = ;
			int buttonsPressed[]      = ;
			int expected__[]          = ;

			std::clock_t start__      = std::clock();
			vector <int> received__   = ElevatorButtons().nextStops(currentFloor, currentDirection, vector <int>(buttonsPressed, buttonsPressed + (sizeof buttonsPressed / sizeof buttonsPressed[0])));
			return verify_case(casenum__, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}*/
/*      case 13: {
			int currentFloor          = ;
			int currentDirection      = ;
			int buttonsPressed[]      = ;
			int expected__[]          = ;

			std::clock_t start__      = std::clock();
			vector <int> received__   = ElevatorButtons().nextStops(currentFloor, currentDirection, vector <int>(buttonsPressed, buttonsPressed + (sizeof buttonsPressed / sizeof buttonsPressed[0])));
			return verify_case(casenum__, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}*/
/*      case 14: {
			int currentFloor          = ;
			int currentDirection      = ;
			int buttonsPressed[]      = ;
			int expected__[]          = ;

			std::clock_t start__      = std::clock();
			vector <int> received__   = ElevatorButtons().nextStops(currentFloor, currentDirection, vector <int>(buttonsPressed, buttonsPressed + (sizeof buttonsPressed / sizeof buttonsPressed[0])));
			return verify_case(casenum__, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}*/
/*      case 15: {
			int currentFloor          = ;
			int currentDirection      = ;
			int buttonsPressed[]      = ;
			int expected__[]          = ;

			std::clock_t start__      = std::clock();
			vector <int> received__   = ElevatorButtons().nextStops(currentFloor, currentDirection, vector <int>(buttonsPressed, buttonsPressed + (sizeof buttonsPressed / sizeof buttonsPressed[0])));
			return verify_case(casenum__, vector <int>(expected__, expected__ + (sizeof expected__ / sizeof expected__[0])), received__, clock()-start__);
		}*/
		default:
			return -1;
		}
	}
}


#include <cstdlib>
int main(int argc, char *argv[]) {
	if (argc == 1) {
		moj_harness::run_test();
	} else {
		for (int i=1; i<argc; ++i)
			moj_harness::run_test(std::atoi(argv[i]));
	}
}
// END CUT HERE
