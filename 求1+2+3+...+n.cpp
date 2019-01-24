/*题目描述
求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
乍一看很简单，但是有要求的限制就挺难得了，可以用&&来做。
短路求值原理！即&&中前一项为假则不再执行
*/
class Solution {
public:
    int Sum_Solution(int n) {
        int ans = n;
        ans && (ans += Sum_Solution(n - 1));
        return ans;
    }
};
