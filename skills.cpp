#include <iostream>
#include <string>

using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       string s[n];
        int eg=0;
        int og=0;
        int eb=0;
        int ob=0;
        int ans;
        for (int i=0;i<n;i++){
            cin>>s[i];
            if(i%2==0){
                if(s[i]=="xx")
                eg++;
                else
                eb++;
                }
                if(i%2!=0){
                if(s[i]=="xx")
                og++;
                else
                ob++;
                
                }
                
                }
                
                if (s[0]=="xx"){
                    if (eg+og==1 && eb+ob==0)
                    ans=0;
                   if (eg+og>1&& eb+ob==0)
                ans = -1; 
                else
                 ans=min(eg,ob);
                }
                
                if (s[0]=="xy"){
                    if (eg+og==0 && eb+ob==1)
                    ans=0;
                  if (eg+og==0 && eb+ob>1)
                ans = -1; 
                else 
                 ans=min (eb,og);
                }
           
                
                cout<<ans<<endl;
        
    }
    return 0;
}