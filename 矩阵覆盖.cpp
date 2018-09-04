/*我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？*/
class Solution {
public:
    int rectCover(int number) {
if(number==0)
    return 0;
if(number==1||number==2)
    return number;
 int a=1,b=2,m=0;
        for(int i=3;i<=number;i++)
        {
            m=a+b;
            a=b;
            b=m;
        }
        return m;
    }
};
/*
n cnt
1  1
2  2
3  3
4  5
其实分析过程就发现了这又是个fib数列...
*/
