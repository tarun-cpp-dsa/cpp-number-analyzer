//Numberanalyzer
#include<iostream>
#include<array>
#include<climits>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value given by the user:";
        cin>>arr[i];
    }
    cout<<"=====Number Analyzer====="<<endl;
    while(true)
    {
        int ch;
        cout<<"Enter the choice given by the user:"<<endl;
        cout<<"1.Display the number"<<endl;
        cout<<"2.Find Minimum"<<endl;
        cout<<"3.Find Maximum"<<endl;
        cout<<"4.Find Sum"<<endl;
        cout<<"5.Find Average"<<endl;
        cout<<"6.Exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"The display of the array:"<<endl;
                for(int i=0;i<n;i++)
                {
                    cout<<" "<<arr[i]<<"\t"<<endl;
                }
                break;
            case 2:
                {
                    int min_ele=INT_MAX;
                    for(int i=0;i<n;i++)
                    {
                        if(arr[i]<min_ele)
                        {
                            min_ele=arr[i];
                        }
                    }
                    cout<<"the minimum element:"<<min_ele<<endl;
                    break;
                }
            case 3:
                {
                    int max_ele=INT_MIN;
                    for(int i=0;i<n;i++)
                    {
                        if(arr[i]>max_ele)
                        {
                            max_ele=arr[i];
                        }
                    }
                    cout<<"the maximum element:"<<max_ele<<endl;
                    break;
                }
            case 4:
                {
                    int sum=0;
                    for(int i=0;i<n;i++)
                    {
                        sum+=arr[i];
                    }
                    cout<<"the sum of array:"<<sum<<endl;
                    break;
                }
            case 5:
                {
                    int sum=0;
                    for(int i=0;i<n;i++)
                    {
                        sum+=arr[i];
                    }
                    float avg=(float)sum/n;
                    cout<<"the average of the array:"<<avg<<endl;
                    break;
                }
            case 6:
                cout<<"Number Analyze is closed"<<endl;
                return 0;
            default:
                cout<<"wrong input"<<endl;
        }
    }
    return 0;
}