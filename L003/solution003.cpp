//
// Created by Isaac on 2018/6/28.
//

#include "solution003.h"

int Solution003::lengthOfLongestSubstring(string s) {
    int length = s.length();
    if (length > 0) {
        string cur;
        vector<string> collection;
        for (unsigned int i = 0; i < length; i++) {
            char c = s.at(i);
            int pos = cur.find(c);
            if (pos == -1) {
                //cur doesn't contains current char
                cur.append(1, c);
            } else {
                collection.push_back(cur);
                cur.erase(0, pos + 1);
                //cout << "erase: " << pos << " char: " << c << endl;
                //cout << "after erase: " << cur << endl;
                cur.append(1, c);
                //cout << "after append: " << cur << endl;
            }
        }
        //print_v(collection);
        collection.push_back(cur);
        unsigned int max_idx = 0, max_len = 0;
        for (unsigned int i = 0; i < collection.size(); i++) {
            unsigned int len = collection.at(i).length();
            if (len > max_len) {
                max_len = len;
                max_idx = i;
            }
        }
        cout << "max_len=" << max_len << " str=" << collection.at(max_idx) << endl;
        return max_len;
    }
    return 0;
}