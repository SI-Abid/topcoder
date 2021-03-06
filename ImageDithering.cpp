#include "bits/stdc++.h"
using namespace std;

class ImageDithering 
{
    public:
    int count( string dithered, vector <string> screen ) 
    {
        int result=0;
        for(int i=0; i<dithered.length(); i++)
        {
			for(int j=0; j<screen.size(); j++)
			{
				for(int k=0; k<screen[j].length(); k++)
				{
					if(dithered[i]==screen[j][k])
						result++;
				}
			}
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
			string dithered           = "BW";
			string screen[]           = {"AAAAAAAA",
 "ABWBWBWA",
 "AWBWBWBA",
 "ABWBWBWA",
 "AWBWBWBA",
 "AAAAAAAA"};
			int expected__            = 24;

			std::clock_t start__      = std::clock();
			int received__            = ImageDithering().count(dithered, vector <string>(screen, screen + (sizeof screen / sizeof screen[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			string dithered           = "BW";
			string screen[]           = {"BBBBBBBB",
 "BBWBWBWB",
 "BWBWBWBB",
 "BBWBWBWB",
 "BWBWBWBB",
 "BBBBBBBB"};
			int expected__            = 48;

			std::clock_t start__      = std::clock();
			int received__            = ImageDithering().count(dithered, vector <string>(screen, screen + (sizeof screen / sizeof screen[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			string dithered           = "ACEGIKMOQSUWY";
			string screen[]           = {"ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX",
 "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX",
 "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX",
 "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX",
 "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX",
 "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX"};
			int expected__            = 150;

			std::clock_t start__      = std::clock();
			int received__            = ImageDithering().count(dithered, vector <string>(screen, screen + (sizeof screen / sizeof screen[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			string dithered           = "CA";
			string screen[]           = {"BBBBBBB",
 "BBBBBBB",
 "BBBBBBB"};
			int expected__            = 0;

			std::clock_t start__      = std::clock();
			int received__            = ImageDithering().count(dithered, vector <string>(screen, screen + (sizeof screen / sizeof screen[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			string dithered           = "DCBA";
			string screen[]           = {"ACBD"};
			int expected__            = 4;

			std::clock_t start__      = std::clock();
			int received__            = ImageDithering().count(dithered, vector <string>(screen, screen + (sizeof screen / sizeof screen[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			string dithered           = ;
			string screen[]           = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = ImageDithering().count(dithered, vector <string>(screen, screen + (sizeof screen / sizeof screen[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			string dithered           = ;
			string screen[]           = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = ImageDithering().count(dithered, vector <string>(screen, screen + (sizeof screen / sizeof screen[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			string dithered           = ;
			string screen[]           = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = ImageDithering().count(dithered, vector <string>(screen, screen + (sizeof screen / sizeof screen[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 8: {
			string dithered           = ;
			string screen[]           = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = ImageDithering().count(dithered, vector <string>(screen, screen + (sizeof screen / sizeof screen[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 9: {
			string dithered           = ;
			string screen[]           = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = ImageDithering().count(dithered, vector <string>(screen, screen + (sizeof screen / sizeof screen[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 10: {
			string dithered           = ;
			string screen[]           = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = ImageDithering().count(dithered, vector <string>(screen, screen + (sizeof screen / sizeof screen[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 11: {
			string dithered           = ;
			string screen[]           = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = ImageDithering().count(dithered, vector <string>(screen, screen + (sizeof screen / sizeof screen[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 12: {
			string dithered           = ;
			string screen[]           = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = ImageDithering().count(dithered, vector <string>(screen, screen + (sizeof screen / sizeof screen[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 13: {
			string dithered           = ;
			string screen[]           = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = ImageDithering().count(dithered, vector <string>(screen, screen + (sizeof screen / sizeof screen[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 14: {
			string dithered           = ;
			string screen[]           = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = ImageDithering().count(dithered, vector <string>(screen, screen + (sizeof screen / sizeof screen[0])));
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
