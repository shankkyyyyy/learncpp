#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin >> t;
	while (t != 0)
	{
	    int C,D,N; 
	    int x;
	    cin >> x; 
	    std::string B; 
	    cin >> B; 
	    for (int i = 0; i < 14; i++)
//none
	    {
	        if(B[i] == 'C')
	            {
	                C += 2;
	            }
	        else if (B[i] == 'N')
	            {
	                N += 2;
	            }
	        else 
	            {
	                C += 1;
	                N += 1;
	            }
	    }
	    
	    if(C > N)
	        {
	            std::cout << x * 60 << std::endl; 
	        }
	    else if (C < N)
	        {
	            std::cout << x * 40 << std::endl; 
	        }
	   else 
	    {
	        std::cout << 55 * x << std::endl; 
	    }
	    t--; 
	}
}

