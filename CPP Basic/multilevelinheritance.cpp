#include <iostream>
using namespace std;

class student
{
    protected :
        int roll_number;
        
    public:
        void set_number(int a)
        {
            roll_number = a;
        }
        
        void display_number()
        {
            cout<<roll_number<<endl;
        }
};


class test: public student 
{
    
    public:
    float arr[5];
    void set_marks(float temp[])
    {
        for(int i = 0; i < 5; i++)
        {
            arr[i] = temp[i];
        }
    }
};

class result: public test
{
    
    public:
    float total = 0, count = 0;
    float avg;
    
    void display()
    {
        for(int i = 0; i < 5; i++)
        {
            total += arr[i];
            count++;
        }
        avg = total / count;
        cout<<roll_number<<" "<<total<<" "<<avg<<endl;
    }
};


int main() {
	int t;
	cin>>t;
    result student1;
	int n;
    cin>>n;
    student1.set_number(n);
    float temp[5];
    int i;
    for(i = 0; i < 5; i++)
    {
        cin>>temp[i];
    }
    student1.set_marks(temp);
    student1.display();

	return 0;    
}