//https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int n=seats.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            c=c+(abs(seats[i]-students[i]));
        }
        return c;
    }
};
