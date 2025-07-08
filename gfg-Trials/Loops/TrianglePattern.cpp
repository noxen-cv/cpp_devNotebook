#include <iostream>
using namespace std;

void outlineTriangle(int n){
        for(int i = 1; i <= n; i++) {
            for(int j = 1;j<=n;j++) {
                if (i == n || j == i || j == 1 ) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
        cout << endl;
        }
    }

void invertedTriangle(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i + 1; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }

void rightTriangle(int n) {
        for (int i = 1; i <= n; i++) { 
            for (int j = 1; j <= n; j++) { 
                if (j <= i) 
                    cout << "* "; 
                else 
                    cout << "  "; 
            }
            cout << endl;
        }   
}


int main() {
    int n;
    cin >> n;

    

    return 0;
}

/* 

Outer loops represent rows (i) and inner loops represent columns (j).
i = 1 → j from 1 to 5:
    j=1 → j <= 1 → * 
    j=2 → j > 1 →   
    j=3 → j > 1 →   
    j=4 → j > 1 →   
    j=5 → j > 1 →   

Output: *            

i = 2 → j from 1 to 5:
    j=1 → j <= 2 → * 
    j=2 → j <= 2 → * 
    j=3 → j > 2  →   
    j=4 → j > 2  →   
    j=5 → j > 2  →   

Output: * *          

i = 3:
    
    j=1 → j <= 3 → * 
    j=2 → j <= 3 → * 
    j=3 → j > 3  → *  
    j=4 → j > 3  → 
    j=5 → j > 3  →   

    Output: * * *           

i = 4:
    j=1 → j <= 4 → * 
    j=2 → j <= 4 → * 
    j=3 → j > 4 → * 
    j=4 → j > 4 → *     

Output:   * * * *    



 i \ j	1	2	3	4

 1	    *			
 2	    *	*		
 3	    *	*	*	
 4  	*	*	*	*



*/