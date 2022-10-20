class Solution {
public:
    string intToRoman(int nums) {
        /*
        M=1000
        CM=900
        D=500
        CD=400
        C=100
        XC=90
        L=50
        XL=40
        X=10
        IX=9
        V=5
        IV=4
        I=1
        */
        string res="";
        while(nums>=1000)
        {
            res+="M";
            nums-=1000;
        }
        if(nums>=900)
        {
            res+="CM";
            nums-=900;
        }
        if(nums>=500)
        {
            res+="D";
            nums-=500;
        }
        if(nums>=400)
        {
            res+="CD";
            nums-=400;
        }
        while(nums>=100)
        {
            res+="C";
            nums-=100;
        }
        if(nums>=90)
        {
            res+="XC";
            nums-=90;
        }
        if(nums>=50)
        {
            res+="L";
            nums-=50;
        }
        if(nums>=40)
        {
            res+="XL";
            nums-=40;
        }
        while(nums>=10)
        {
            res+="X";
            nums-=10;
        }
        if(nums>=9)
        {
            res+="IX";
            nums-=9;
        }
        if(nums>=5)
        {
            res+="V";
            nums-=5;
        }
        if(nums>=4)
        {
            res+="IV";
            nums-=4;
        }
        while(nums>=1)
        {
            res+="I";
            nums-=1;
        }
        return res;
    }
};
