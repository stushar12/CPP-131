#include<iostream>
using namespace std;

string countAndSay(int n) 
    {
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        
        string temp="",str="11";
        int c=0;
        for (int i = 3; i<=n; i++) 
    {
        str += '$'; 
        int len = str.length(); 
  
        int cnt = 1; 
        string  tmp = ""; 
   
        for (int j = 1; j < len; j++) 
        { 
            
            if (str[j] != str[j-1]) 
            { 
                tmp += to_string(cnt); 

                tmp += str[j-1]; 

                cnt = 1; 
            } 
  
 
            else 
                cnt++; 
        } 
  
        str = tmp; 
    }
  
    return str; 
} 

int main()
 {
     int p;
     cin>>p;
     while(p--)
{
    int n;
    cin>>n;
	string a=countAndSay(n);
	cout<<a<<endl;
}
}
