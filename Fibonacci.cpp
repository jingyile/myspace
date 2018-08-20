class Solution {
public:
    int Fibonacci(int n) {
if(n==0)
    return 0;
else if(n==1||n==2)
     return 1;
 int a=1,b=1;
 int  m=0;
for(int i=3;i<=n;i++)
        {
          m=a+b;
          a=b;
          b=m;  
        }
        return m;
    }
};
