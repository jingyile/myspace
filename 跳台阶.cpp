class Solution {
public:
    int jumpFloor(int number) {
        if(number==1)
            return 1;
        if(number==2)
            return 2;
        int a=1,b=2,m=0;
        for(int i=3;i<=number;++i)
        {
            m=a+b;
            a=b;
            b=m;
        }
        return m;
    }
};
