#include <bits/stdc++.h>
using namespace std;

class PowerOutage {
public:
   int estimateTimeOut( vector <int> fromJunction, vector <int> toJunction, vector <int> ductLength ) {
	int total_cost =0;
	
	for(int i=0; i<(int)ductLength.size(); i++)
		total_cost = ductLength[i] *2;
	
	int max_cost = maxPath(fromJunction, toJunction, ductLength, 0);
	
	cout<<total_cost<<endl<<max_cost<<endl;
	return total_cost - max_cost;
   }
private:
	int maxPath( vector <int> fromJunction, vector <int> toJunction, vector <int> ductLength, int start)
	{
		int cost = 0;
		int max = 0;
		int ductcost = 0;
		for(int i=0; i<(int)fromJunction.size(); i++)
		{
			if (fromJunction[i]!=start)
				continue;
			
			ductcost = ductLength[i];
			cost = maxPath(fromJunction, toJunction, ductLength, toJunction[i]);
			if(cost+ductcost>max)
				max=cost+ductcost;
		}
		return max;
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
			int fromJunction[]        = {0};
			int toJunction[]          = {1};
			int ductLength[]          = {10};
			int expected__            = 10;

			std::clock_t start__      = std::clock();
			int received__            = PowerOutage().estimateTimeOut(vector <int>(fromJunction, fromJunction + (sizeof fromJunction / sizeof fromJunction[0])), vector <int>(toJunction, toJunction + (sizeof toJunction / sizeof toJunction[0])), vector <int>(ductLength, ductLength + (sizeof ductLength / sizeof ductLength[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			int fromJunction[]        = {0,1,0};
			int toJunction[]          = {1,2,3};
			int ductLength[]          = {10,10,10};
			int expected__            = 40;

			std::clock_t start__      = std::clock();
			int received__            = PowerOutage().estimateTimeOut(vector <int>(fromJunction, fromJunction + (sizeof fromJunction / sizeof fromJunction[0])), vector <int>(toJunction, toJunction + (sizeof toJunction / sizeof toJunction[0])), vector <int>(ductLength, ductLength + (sizeof ductLength / sizeof ductLength[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			int fromJunction[]        = {0,0,0,1,4};
			int toJunction[]          = {1,3,4,2,5};
			int ductLength[]          = {10,10,100,10,5};
			int expected__            = 165;

			std::clock_t start__      = std::clock();
			int received__            = PowerOutage().estimateTimeOut(vector <int>(fromJunction, fromJunction + (sizeof fromJunction / sizeof fromJunction[0])), vector <int>(toJunction, toJunction + (sizeof toJunction / sizeof toJunction[0])), vector <int>(ductLength, ductLength + (sizeof ductLength / sizeof ductLength[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			int fromJunction[]        = {0,0,0,1,4,4,6,7,7,7,20};
			int toJunction[]          = {1,3,4,2,5,6,7,20,9,10,31};
			int ductLength[]          = {10,10,100,10,5,1,1,100,1,1,5};
			int expected__            = 281;

			std::clock_t start__      = std::clock();
			int received__            = PowerOutage().estimateTimeOut(vector <int>(fromJunction, fromJunction + (sizeof fromJunction / sizeof fromJunction[0])), vector <int>(toJunction, toJunction + (sizeof toJunction / sizeof toJunction[0])), vector <int>(ductLength, ductLength + (sizeof ductLength / sizeof ductLength[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			int fromJunction[]        = {0,0,0,0,0};
			int toJunction[]          = {1,2,3,4,5};
			int ductLength[]          = {100,200,300,400,500};
			int expected__            = 2500;

			std::clock_t start__      = std::clock();
			int received__            = PowerOutage().estimateTimeOut(vector <int>(fromJunction, fromJunction + (sizeof fromJunction / sizeof fromJunction[0])), vector <int>(toJunction, toJunction + (sizeof toJunction / sizeof toJunction[0])), vector <int>(ductLength, ductLength + (sizeof ductLength / sizeof ductLength[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			int fromJunction[]        = ;
			int toJunction[]          = ;
			int ductLength[]          = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = PowerOutage().estimateTimeOut(vector <int>(fromJunction, fromJunction + (sizeof fromJunction / sizeof fromJunction[0])), vector <int>(toJunction, toJunction + (sizeof toJunction / sizeof toJunction[0])), vector <int>(ductLength, ductLength + (sizeof ductLength / sizeof ductLength[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			int fromJunction[]        = ;
			int toJunction[]          = ;
			int ductLength[]          = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = PowerOutage().estimateTimeOut(vector <int>(fromJunction, fromJunction + (sizeof fromJunction / sizeof fromJunction[0])), vector <int>(toJunction, toJunction + (sizeof toJunction / sizeof toJunction[0])), vector <int>(ductLength, ductLength + (sizeof ductLength / sizeof ductLength[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			int fromJunction[]        = ;
			int toJunction[]          = ;
			int ductLength[]          = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = PowerOutage().estimateTimeOut(vector <int>(fromJunction, fromJunction + (sizeof fromJunction / sizeof fromJunction[0])), vector <int>(toJunction, toJunction + (sizeof toJunction / sizeof toJunction[0])), vector <int>(ductLength, ductLength + (sizeof ductLength / sizeof ductLength[0])));
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
