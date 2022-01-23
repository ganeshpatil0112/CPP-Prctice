//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 
class CollegeCourse
{
    //your code here
    public:
    string courseID;
    char grade;
    int credits;
    int gradePoints;
    float honorPoints;
    void set_CourseId(string CID)
    {
        courseID = CID;
    }
    
    void set_Grade(char g)
    {
        grade = g;
    }
    
    void set_Credit(int cr)
    {
        credits = cr;
    }
    
    int calculateGradePoints(char g)
    {
        if (g == 'A' or g == 'a')
        {
            gradePoints = 10;
            
        }
        else if(g=='B' or g=='b')
        {
            gradePoints = 9;
        }
        else if(g=='C' or g=='c')
        {
            gradePoints = 8;
        }
        else if(g=='D' or g=='d')
        {
            gradePoints = 7;
        }
        else if(g=='E' or g=='e')
        {
            gradePoints = 6;
        }
        else if(g=='F' or g=='f')
        {
            gradePoints = 5;
        }
        return gradePoints;
    }
    
    float calculateHonorPoints(int gp, int cr)
    {
        honorPoints = gp*cr;
        return honorPoints;
    }
    
    void display()
    {
        cout<<gradePoints<<" "<<honorPoints<<endl;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    CollegeCourse cc;
    string courseId;
    int gp;
    char grade;
    int credits;
    cin>>courseId>>grade>>credits;
    cc.set_CourseId(courseId);
    cc.set_Grade(grade);
    cc.set_Credit(credits);
    gp=cc.calculateGradePoints(grade);
    cc.calculateHonorPoints(gp,credits);
    cc.display();
    }
    return 0;
}
  // } Driver Code Ends