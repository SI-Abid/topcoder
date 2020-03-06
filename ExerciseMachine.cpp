#include <bits/stdc++.h>
using namespace std;

class ExerciseMachine {
public:
    int getPercentages( string time ) {
	int totalsec = 0;
	
	totalsec = time[7]-'0' + ((time[6] - '0') *10);			//handle seconds
	totalsec+= ((time[4]-'0') *60) + ((time[3]-'0') *600);  	//handle minutes
	totalsec+= ((time[1]-'0') *3600) + ((time[0]-'0') *36000);	//handle hours
	
	return gcd(totalsec,100) -1;
    }
private:
	int gcd(int a, int b)
	{
		return a % b == 0 ? b : gcd(b, a%b);
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
	
	int verify_case(int casenum, const int &expected, const int &received, std::clock_t elapsed) { 
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
			string time               = "00:30:00";
			int expected__            = 99;

			std::clock_t start__      = std::clock();
			int received__            = ExerciseMachine().getPercentages(time);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			string time               = "00:28:00";
			int expected__            = 19;

			std::clock_t start__      = std::clock();
			int received__            = ExerciseMachine().getPercentages(time);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			string time               = "23:59:59";
			int expected__            = 0;

			std::clock_t start__      = std::clock();
			int received__            = ExerciseMachine().getPercentages(time);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			string time               = "00:14:10";
			int expected__            = 49;

			std::clock_t start__      = std::clock();
			int received__            = ExerciseMachine().getPercentages(time);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			string time               = "00:19:16";
			int expected__            = 3;

			std::clock_t start__      = std::clock();
			int received__            = ExerciseMachine().getPercentages(time);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			string time               = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = ExerciseMachine().getPercentages(time);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			string time               = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = ExerciseMachine().getPercentages(time);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			string time               = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = ExerciseMachine().getPercentages(time);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 8: {
			string time               = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = ExerciseMachine().getPercentages(time);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 9: {
			string time               = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = ExerciseMachine().getPercentages(time);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 10: {
			string time               = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = ExerciseMachine().getPercentages(time);
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
