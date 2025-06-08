#include<iostream>
using namespace std;
int c=0;
class LSearch
{
    private :
    int arr[10],s,pos;
    public :
    void accept()
    {
        cout<<"Enter array elements :\n";
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
        }
    }
    void input()
    {
        cout<<"Enter element to search :\n";
        cin>>s;
    }
    int search(int n)
    {
        int i;
        for(i=0;i<10;i++)
        {
            if(arr[i]==n)
            {
                c++;
                pos=i;
                break;
            }
        }
        return pos;
    }
    void display()
    {
        int ans;
        ans=search(s);
        if(c==0)
        cout<<"Element not found!!\n";
        else
        cout<<"Element found at position "<<ans+1<<endl;
    }
};
int main()
{
    LSearch obj;
    obj.accept();
    obj.input();
    obj.display();
    return 0;
}