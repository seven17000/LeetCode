/*
*问题：最小子串覆盖
*举例：给出source = "ADOBECODEBANC"，target = "ABC" 满足要求的解  "BANC"
*答者：Seven17000
*思路：给出一个哈希表，表中先放入目标字符串的字符并置1，
*      接着遍历源字符串，当访问到目标字符串里的字符时，
*      使哈希表内对应位置value减一，当所有目标字符都为零
*      时，说明找到子串覆盖。此时不能确定是否为最小覆盖，
*      所以应继续遍历直到遍历完源字符串。最小覆盖可以通
*      过头尾两字符距离判断。
*/

string minWindow(string &s, string &t) {
        // write your code here
		unordered_map<char, int> mp;
        for (char now : t) {
            mp[now] ++;
        }
        int count = mp.size();
        int j = 0;
        int ans = INT_MAX;
        string res; 
        for (int i = 0; i < s.size(); i++) {
            while(count != 0 && j < s.size()) {
                mp[s[j]]--;
                if (mp[s[j]] == 0) {
                    count--;
                }
                j++;
                if (count == 0) {
                    break;
                }
            }
            if (count == 0 && j - i< ans) {
                ans = j - i;
                res = s.substr(i, j - i);
                
            }
            if(mp[s[i]] == 0) {
                count++;
            }
            mp[s[i]]++;
        }
        return res;

    }