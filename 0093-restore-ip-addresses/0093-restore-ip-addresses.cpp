class Solution {
public:
    vector<string> restoreIpAddresses(string& s) {
        vector<string> res;
        if (s.size() > 12) {
            return res;
        }
        string ip = "";
        string buf = "";
        backtrack(s, ip, buf, res, 0, 3);
        return res;
    }

    void backtrack(string& source, string ip, string buf, vector<string>& res, int pointer, int dotsLeft)
    {
        if (pointer == source.size())
        {
            if (dotsLeft == 0)
            {
                res.push_back(ip);
                cout << ip << endl;
            }
            else if (dotsLeft == 1)
            {
                ip.push_back('.');
                ip.append(buf);
                res.push_back(ip);
            }
        }
        else if (dotsLeft == 0)
        {
            return;
        }
        else
        {
            // 1. add to buf if there is still valid number
            if (buf != "0")
            {
                buf.push_back(source[pointer]);
                int i = stoi(buf);
                if (i <= 255) {
                    backtrack(source, ip, buf, res, pointer + 1, dotsLeft);
                }
                buf.pop_back();
            }
            // 2. add dot (if ip is not impty) and buf
            if (!buf.empty()) 
            {
                bool first = ip.empty();
                if (!first)
                {
                    ip.push_back('.');
                }
                ip.append(buf);
                backtrack(source, ip, "", res, pointer, first ? dotsLeft : dotsLeft - 1);
            }
        }
    }

};