class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int arr[2]={0};
        int n=students.size();
        for(int &stud:students)
        {
            arr[stud]++;
        }
        for(int i=0;i<n;i++)
        {
            int sand=sandwiches[i];
            if(arr[sand]==0)
            {
                return arr[0]+arr[1];
            }
            arr[sand]--;
        }
        return 0;
    }
};