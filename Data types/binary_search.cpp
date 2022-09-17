/************* 
Name:bsearch 
Parameters: ‘a’, ‘n’, ‘data’ 
Purpose: To perform binary search to sorted array ‘a’ 
*******************************************/ 
int bsearch ( int a[], int n, int data) 
 { 
 int mid,lbound=0,ubound=n-1,found=0; 
 while ((lbound<=ubound) && !(found)) 
 { 
 mid = (lbound + ubound)/2; 
 if (data > a[mid] ) 
 lbound = mid +1; 
 if (data <a [mid] ) 
 ubound = mid -1; 
 else 
 found++; 
 } 
 if (found) 
 return (mid + 1); // Returning location, if present 
 else 
 return (-1); // Returning -1, if not present
 }