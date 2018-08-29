/*输入一个递增排序的数组和一个数字S，在数组中查找两个数，使得他们的和正好是S，如果有多对数字的和等于S，输出两个数的乘积最小的*/
/*对应每个测试案例，输出两个数，小的先输出。*/
/*思路：题目说了是一个递增数组，要找两个乘积最小的使他们和为S

那么，从开始从两头找,找到a[i]+a[j]=sum的则输出当前两个数

加起来小于sum，说明a[j]够大，a[i]有些小 ，i=i+1；

加起来大于sum，说明a[i]够小，a[j]有些大，j=j-1；

关于返回结果同样需要用vector容器保存，结果返回它即可
果然这些题还是接触的少啊。
*/

class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        int len=array.size();
        int i=0,j=len-1;
        vector<int> res;
        while(i<j)
        {
            if(array[i]+array[j]==sum)
            {
                res.push_back(array[i]);
                res.push_back(array[j]);
                return res;
                break;
            }
            if(array[i]+array[j]<sum)
                i++;
            if(array[i]+array[j]>sum)
                j--;
        }
        return res;
    }
};
