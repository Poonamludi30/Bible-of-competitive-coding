class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {

        if(arr.size()==1)
            return arr[0];


        int num = floor(0.25*arr.size()) + 1;

        int n = arr[0],occ = 1;
        for(int i=1;i<arr.size();i++)
        {
            if(n != arr[i])
            {
                n = arr[i];
                occ = 1;
            }
            else
            {
                occ++;
                if(occ == num)
                {
                    break;
                }
            }
        }
        return n;
    }
};