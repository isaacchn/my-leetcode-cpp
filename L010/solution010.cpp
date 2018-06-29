#include "solution010.h"

/**
 *
 * @param s 源字符串
 * @param p 正则表达式
 */
bool Solution010::isMatch(string s, string p)
{
    bool result;
    if (p.empty()) result = s.empty();//pattern为空

    else
    {
        /*判断首字符是否match*/
        bool first_match = (p[0] == s[0] || p[0] == '.') && !s.empty();
        if (p.length() >= 2 && p[1] == '*')
        {
            /**
             * 如果正则表达式以"char*"的样式开头
             * 1.源字符串与去掉"char*"的正则表达式match
             * 2.源字符串首字符与char一样且去掉首字符的源字符串与正则表达式match
             * 以上两者满足一项则源字符串与正则表达式match
             */
            result = (isMatch(s, p.substr(2))
                      || (first_match && isMatch(s.substr(1), p)));
        } else
        {
            /**
             * 如果如果正则表达式以"char"的样式开头，char后面没有'*'：
             * 1.源字符串首字符与正则表达式首字符相同
             * 2.去掉首字符的源字符串与去掉首字符的正则表达式match
             * 以上两者同时满足则源字符串与正则表达式match
             */
            result = first_match && isMatch(s.substr(1), p.substr(1));
        }
    }
    cout << "s=" << s << " p=" << p << " result=" << result << endl;
    return result;
}