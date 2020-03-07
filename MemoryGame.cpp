#include "bits/stdc++.h"
using namespace std;

class MemoryGame 
{
    public:
    long long countSteps( int N, int seed ) 
    {
        //start
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
	
	int verify_case(int casenum, const long long &expected, const long long &received, std::clock_t elapsed) { 
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
			int N                     = 1;
			int seed                  = 47;
			long long expected__      = 1;

			std::clock_t start__      = std::clock();
			long long received__      = MemoryGame().countSteps(N, seed);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			int N                     = 2;
			int seed                  = 47474747;
			long long expected__      = 2;

			std::clock_t start__      = std::clock();
			long long received__      = MemoryGame().countSteps(N, seed);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			int N                     = 2;
			int seed                  = 42;
			long long expected__      = 3;

			std::clock_t start__      = std::clock();
			long long received__      = MemoryGame().countSteps(N, seed);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			int N                     = 7;
			int seed                  = 123456;
			long long expected__      = 12;

			std::clock_t start__      = std::clock();
			long long received__      = MemoryGame().countSteps(N, seed);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			int N                     = 100;
			int seed                  = 100;
			long long expected__      = 166;

			std::clock_t start__      = std::clock();
			long long received__      = MemoryGame().countSteps(N, seed);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			int N                     = ;
			int seed                  = ;
			long long expected__      = ;

			std::clock_t start__      = std::clock();
			long long received__      = MemoryGame().countSteps(N, seed);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			int N                     = ;
			int seed                  = ;
			long long expected__      = ;

			std::clock_t start__      = std::clock();
			long long received__      = MemoryGame().countSteps(N, seed);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			int N                     = ;
			int seed                  = ;
			long long expected__      = ;

			std::clock_t start__      = std::clock();
			long long received__      = MemoryGame().countSteps(N, seed);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 8: {
			int N                     = ;
			int seed                  = ;
			long long expected__      = ;

			std::clock_t start__      = std::clock();
			long long received__      = MemoryGame().countSteps(N, seed);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 9: {
			int N                     = ;
			int seed                  = ;
			long long expected__      = ;

			std::clock_t start__      = std::clock();
			long long received__      = MemoryGame().countSteps(N, seed);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 10: {
			int N                     = ;
			int seed                  = ;
			long long expected__      = ;

			std::clock_t start__      = std::clock();
			long long received__      = MemoryGame().countSteps(N, seed);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 11: {
			int N                     = ;
			int seed                  = ;
			long long expected__      = ;

			std::clock_t start__      = std::clock();
			long long received__      = MemoryGame().countSteps(N, seed);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 12: {
			int N                     = ;
			int seed                  = ;
			long long expected__      = ;

			std::clock_t start__      = std::clock();
			long long received__      = MemoryGame().countSteps(N, seed);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 13: {
			int N                     = ;
			int seed                  = ;
			long long expected__      = ;

			std::clock_t start__      = std::clock();
			long long received__      = MemoryGame().countSteps(N, seed);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 14: {
			int N                     = ;
			int seed                  = ;
			long long expected__      = ;

			std::clock_t start__      = std::clock();
			long long received__      = MemoryGame().countSteps(N, seed);
			return verify_case(casenum__, expected__, received__, clock()-start__);
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
