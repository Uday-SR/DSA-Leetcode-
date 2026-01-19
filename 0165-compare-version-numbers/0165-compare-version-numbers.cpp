class Solution {
public:
    int compareVersion(string version1, string version2) {
        int val1 = 0;
        int val2 = 0;

        int i = 0, j = 0;

        while(i < version1.size() || j < version2.size()) {
    
            while(i < version1.size() &&  version1[i] != '.') {
                val1 = val1 * 10 + (version1[i] - '0');
                i++;
            }

            while(j < version2.size() && version2[j] != '.') {
                val2 = val2 * 10 + (version2[j] - '0');
                j++;
            }

            if(val1 < val2) return -1;
            if(val1 > val2) return 1;

            val1 = 0, val2 = 0;

            i++, j++;
        }

        return 0;
    }
};