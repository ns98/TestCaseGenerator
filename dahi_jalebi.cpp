#include<bits/stdc++.h>
using namespace std;

#define DEBUG(x) cout <<">>"<<#x<<": "<<(x)<< endl;
#define DEBUG2(x,y) cout<<#x<<" :: "<<x<<"    "<<#y<<" :: "<<y<<endl;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define mem(x,val) memset((x),(val),sizeof(x))
#define fi first
#define sc second
#define pb push_back
#define mp make_pair
#define ll long long int
#define LL long long int
#define pii pair<ll,ll>
const ll INF = 2e18;
ll M = 1000000007 ;
void function_1(ll n_,ll max_,ll min_,ll flag);
void function_5(ll n_,ll max_,ll min_,ll flag);
void function_8(ll n_);
void function_9(ll n_,string particular);
void function_10(ll n_,int flagalph);
void function_11(long long int n_);
void function_12(long long int n_);
void function_13(long long int n_,long long int m_,string str);
int test_cases,flag_t=1;

FILE* fptr;

int main()
{
  remove("generated_test_cases.txt");

  cout<<"1) Normal Array\n2) Pair-Wise Distinct Array\n3) Permutation Array\n4) Ordered Array(Sorted/Unsorted)\n5) Array of Pairs\n6) 2D Matrix\n7) 2D Matrix Permutation\n";
  cout<<"8) Number String\n9) Particular String(with Desired Characters)\n10) String of Aphabets\n11) string of Special Characters\n12) Alphanumeric Strings\n13) 2D String\n";
  cout<<"14) Star Shaped Tree\n15) Normal Tree rooted at node\n16) Binary Tree\n17) Normal tree with edge weight\n 18) Normal Tree with Node Weight\n19) Graph through Adjacency Matrix\n";
  cout<<"20) Sparse Graph\n21) Undirected acyclic graph\n22) Random Graph\n23) Graph with given max degree\n24) Connected Graph\n";
  int option;
  ll n_,m_,min_,max_;
  string particular;
  bool flag;
  int flagalph;
  cout<<"Enter Your option(1-24)\n";
  cin>>option;
  cout<<"Enter number of Test cases\n";
  cin>>test_cases;
  switch(option)
  {
    case 1:cout<<"Enter maximum size of array : ";
          cin>>n_;
          cout<<"upper bound of array elements : ";
          cin>>max_;
          cout<<"Lower bound of array Elements : ";
          cin>>min_;
          cout<<"Do you need float values";
          cin>>flag;
          //function_1(n_,max_,min_,flag);
          break;
    case 5:cout<<"Enter maximum size of array of pairs: ";
          cin>>n_;
          cout<<"upper bound of array elements : ";
          cin>>max_;
          cout<<"Lower bound of array Elements : ";
          cin>>min_;
          cout<<"Do you need float values";
          cin>>flag;
          function_5(n_,max_,min_,flag);
          break;
    case 8:cout<<"Enter maximum size of string : ";
          cin>>n_;
          function_8(n_);
          break;                
    case 9:cout<<"Enter maximum size of string : ";
          cin>>n_;
          cout<<"Enter the diff character that will be used in the string:";
          cin>>particular;
          function_9(n_,particular);
          break;
    case 10:cout<<"Enter maximum size of string : ";
          cin>>n_;
          cout<<"Enter 1. for lowercase string only\n2. for uppercase string only\n 3.for mixed characters\n";
          cin>>flagalph;
          function_10(n_,flagalph);
          break;
    case 11:cout<<"Enter maximum size of string : ";
          cin>>n_;
          function_11(n_);
          break;    
    case 12:cout<<"Enter maximum size of string : ";
          cin>>n_;
          function_12(n_);
          break;
    case 13:cout<<"Enter maximum width of 2D-string : ";
          cin>>n_;
          cout<<"Enter maximum height of 2D-string : ";
          cin>>m_;
          cout<<"Enter the diff character that will be used in the string:";
          cin>>particular;
          function_13(n_,m_,particular);
          break;                              
          
          


  }







  return 0;
}






void generate_numbers_5(ll n, LL x, LL y,int flag) {
	LL mod = (y - x + 1);
	LL displace = x;

	for(int i=1; i<=n; ++i) {
		LL number1 = ((LL)rand() * rand()) % mod + displace;
		LL number2 = ((LL)rand() * rand()) % mod + displace;
		
		assert(number1 >= x && number1 <= y);
		assert(number2 >= x && number2 <= y);
		double r1 = static_cast <double> (rand()) / static_cast <double> (RAND_MAX);
		double r2 = static_cast <double> (rand()) / static_cast <double> (RAND_MAX);
	        if(flag)
		{
				printf("%lf %lf", number1*r1, number2*r2);
			}
                else
		{
		        	printf("%lld %lld", number1, number2);
		        }
		if (i < n) {
				printf("\n");
		}
	}
	printf("\n");
}
void function_5(ll n_,ll max_,ll min_,ll flag)
{
  fptr = freopen("generated_test_cases.txt", "a", stdout);
  if(flag_t==1)
    {
      cout<<test_cases<<endl;
      flag_t=0;
    }
  for(int t=1; t<=test_cases; ++t) {
		ll n = rand() % n_ + 1;
		printf("%lld\n", n);
		LL range_low = min_;
		LL range_high = max_;
		generate_numbers_5(n, range_low, range_high,flag);
	}
}








void function_8(long long int n_) {
	  fptr = freopen("generated_test_cases.txt", "a", stdout);
	  if(flag_t==1)
    	  {
      		cout<<test_cases<<endl;
      		flag_t=0;
    	  }
	string user = "0123456789";
	long long int mod = user.length();
	for(int k=0;k<test_cases;k++)
	{	ll n = rand() % n_ + 1;
		for(long long int i=1; i<=n; ++i) {
			long long int number = rand() % mod;
			assert(number >= 0 && number < mod);
			char ch = user[number];
			printf("%c", ch);
		}
		cout<<"\n";
		
	}
}

void function_9(long long int n_,string str) {
	  fptr = freopen("generated_test_cases.txt", "a", stdout);
	  if(flag_t==1)
    	  {
      		cout<<test_cases<<endl;
      		flag_t=0;
    	  }
	string user = str;
	long long int mod = user.length();
	for(int k=0;k<test_cases;k++)
	{	ll n = rand() % n_ + 1;
		for(long long int i=1; i<=n; ++i) {
			long long int number = rand() % mod;
			assert(number >= 0 && number < mod);
			char ch = user[number];
			printf("%c", ch);
		}
		cout<<"\n";
		
	}
}


void function_10(long long int n_,int flagalph) {
	  fptr = freopen("generated_test_cases.txt", "a", stdout);
	  if(flag_t==1)
    	  {
      		cout<<test_cases<<endl;
      		flag_t=0;
    	  }
    	  string user;
    	  if(flagalph==1)
		user = "qwertyuioplkjhgfdsazxcvbnm";
	  else if(flagalph==2)
	  	user = "QWERTYUIOPLKJHGFDSAZXCVBNM";
	  else
	  	user = "QWERTYUIOPLKqwertyuioplkjhgfdsazxcvbnmJHGFDSAZXCVBNM";		
	long long int mod = user.length();
	for(int k=0;k<test_cases;k++)
	{	ll n = rand() % n_ + 1;
		for(long long int i=1; i<=n; ++i) {
			long long int number = rand() % mod;
			assert(number >= 0 && number < mod);
			char ch = user[number];
			printf("%c", ch);
		}
		cout<<"\n";
		
	}
}





void function_11(long long int n_) {
	  fptr = freopen("generated_test_cases.txt", "a", stdout);
	  if(flag_t==1)
    	  {
      		cout<<test_cases<<endl;
      		flag_t=0;
    	  }
	string user = "!~`@#$%^&*()_-+=][}{|;:><?/";
	long long int mod = user.length();
	for(int k=0;k<test_cases;k++)
	{	ll n = rand() % n_ + 1;
		for(long long int i=1; i<=n; ++i) {
			long long int number = rand() % mod;
			assert(number >= 0 && number < mod);
			char ch = user[number];
			printf("%c", ch);
		}
		cout<<"\n";
		
	}
}



void function_12(long long int n_) {
	  fptr = freopen("generated_test_cases.txt", "a", stdout);
	  if(flag_t==1)
    	  {
      		cout<<test_cases<<endl;
      		flag_t=0;
    	  }
	string user = "0123456789QWERTYUIOPLKqwertyuioplkjhgfdsazxcvbnmJHGFDSAZXCVBNM";
	long long int mod = user.length();
	for(int k=0;k<test_cases;k++)
	{	ll n = rand() % n_ + 1;
		for(long long int i=1; i<=n; ++i) {
			long long int number = rand() % mod;
			assert(number >= 0 && number < mod);
			char ch = user[number];
			printf("%c", ch);
		}
		cout<<"\n";
		
	}
}


void function_13(long long int n_,long long int m_,string str) {
	  fptr = freopen("generated_test_cases.txt", "a", stdout);
	  if(flag_t==1)
    	  {
      		cout<<test_cases<<endl;
      		flag_t=0;
    	  }
	string user = str;
	long long int mod = user.length();
	for(int k=0;k<test_cases;k++)
	{	ll n = rand() % n_ + 1;
		ll m = rand() % m_ + 1;
		for(long long int i=1; i<=m; ++i) 
		{
			for(long long int j=1;j<=n; ++j)
			{	long long int number = rand() % mod;
				assert(number >= 0 && number < mod);
				char ch = user[number];
				printf("%c", ch);
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
}
