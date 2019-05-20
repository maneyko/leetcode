/**
 * Medium
 * https://leetcode.com/problems/longest-palindromic-substring/
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

bool check_palindrome(string s) {
    if (s.length() <= 1)
        return true;
    for (int i = 0, j = s.length()-1; i <= j; i++, j--)
        if (s[i] != s[j]) return false;
    return true;
}

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() <= 1)
            return s;

        string curr("");
        string longest_pal = "";

        // string input1 = "abcdbbfcba";
        for (int i = 0; i < s.length(); i++) {
            for (int j = 1; j <= s.length()-i; j++) {
                curr = s.substr(i, j);
                // cout
                //     << "i: "
                //     << i
                //     << ", j: "
                //     << j
                //     << ", curr: "
                //     << curr
                //     << endl;
                if (check_palindrome(curr))
                    if (curr.length() > longest_pal.length())
                        longest_pal = curr;
            }
        }
        return longest_pal;
    }
};

int main(void) {

    string input1 = "abcdbbfcba";

    string input2 = 
"apqjpwedlhmvvpexxnntxheeynxmgzwxhnhfdvziuxnuusymklgca\
 cndoyhqkoahnkyaikohwkmnuphipftmzmihvmoetskioeypwjujvvu\
 saxynzxxdugnebsisrtgeujkqkgwjuplijhluumqcdurovyjsbowmn\
 qndejwkihzbbdyxjunkduyqeihektaknbmkzgnnmgywylulxwyywrv\
 ieqfenjeljofkqqqisdjsbfkvqgahxwkfkcucvrbbpyhwkfztjdboav\
 tfynrudneieelwlcezqsuhmllcsadcnoyemsfdlrijoyj";


    string input3 =
"lcnvoknqgejxbfhijmxglisfzjwbtvhodwummdqeggzfczmetrdnoet\
mcydwddmtubcqmdjwnpzdqcdhplxtezctvgnpobnnscrmeqkwgiedhzsv\
skrxwfyklynkplbgefjbyhlgmkkfpwngdkvwmbdskvagkcfsidrdgwgmn\
qjtdbtltzwxaokrvbxqqqhljszmefsyewwggylpugmdmemvcnlugipqdj\
nriythsanfdxpvbatsnatmlusspqizgknabhnqayeuzflkuysqyhfxojh\
fponsndytvjpbzlbfzjhmwoxcbwvhnvnzwmkhjxvuszgtqhctbqsxnasn\
hrusodeqmzrlcsrafghbqjpyklaaqximcjmpsxpzbyxqvpexytrhwhmrk\
uybtvqhwxdqhsnbecpfiudaqpzsvfaywvkhargputojdxonvlprzwvrjl\
mvqmrlftzbytqdusgeupuofhgonqoyffhmartpcbgybshllnjaapaixdb\
bljvjomdrrgfeqhwffcknmcqbhvulwiwmsxntropqzefwboozphjectnu\
dtvzzlcmeruszqxvjgikcpfclnrayokxsqxpicfkvaerljmxchwcmxhtb\
witsexfqowsflgzzeynuzhtzdaixhjtnielbablmckqzcccalpuyahwow\
qpcskjencokprybrpmpdnswslpunohafvminfolekdleusuaeiatdqsoa\
tputmymqvxjqpikumgmxaxidlrlfmrhpkzmnxjtvdnopcgsiedvtfkltv\
plfcfflmwyqffktsmpezbxlnjegdlrcubwqvhxdammpkwkycrqtegepyx\
tohspeasrdtinjhbesilsvffnzznltsspjwuogdyzvanalohmzrywdwqq\
cukjceothydlgtocukc";

    cout
        << "input3: "
        << input3
        << endl;
    string ret = Solution().longestPalindrome(input3);
    cout
        << "output: "
        << ret
        << endl;

    cout << "done." << endl;
    return 0;
}
