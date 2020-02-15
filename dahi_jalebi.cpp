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
void function_2(ll n_,ll max_,ll min_);
void function_3(ll n_);
void function_4( ll n_,ll max_,ll min_,ll flag );
void function_5(ll n_,ll max_,ll min_,ll flag);
void function_6( ll n_,ll max_,ll min_,ll flag );
void function_7(ll n_,ll flag);
void function_8(ll n_);
void function_9(ll n_,string particular);
void function_10(ll n_,int flagalph);
void function_11(long long int n_);
void function_12(long long int n_);
void function_13(long long int n_,long long int m_,string str);
void function_14( ll n_ );
void function_15(ll n_ );
void function_16(ll n, ll max_, ll min_ );
void function_17(ll n_,ll root_);
void function_18(ll n_,ll max_);
void function_19(ll n);
void function_20(int n_,int k);
void function_21(ll n);
int test_cases,flag_t=1,root_,degree;

FILE* fptr;

int main()
{
  remove("generated_test_cases.txt");

  cout<<"1) Normal Array\n2) Pair-Wise Distinct Array\n3) Permutation Array\n4) Ordered Array(Sorted/Unsorted)\n5) Array of Pairs\n6) 2D Matrix\n7) 2D Matrix Permutation\n";
  cout<<"8) Number String\n9) Particular String(with Desired Characters)\n10) String of Aphabets\n11) string of Special Characters\n12) Alphanumeric Strings\n13) 2D String\n";
  cout<<"14) Star Shaped Tree\n15) Normal Tree rooted at node\n16) Binary Tree\n17) Normal tree with edge weight\n18) Normal Tree with Node Weight\n19) Graph through Adjacency Matrix\n";
  cout<<"20) Sparse Graph\n21) Undirected acyclic graph\n22) Random Graph\n23) Graph with given max degree\n24) Connected Graph\n";
  int option;
  ll n_,min_,max_;
  bool flag;
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
          function_1(n_,max_,min_,flag);
          break;
    case 2:cout<<"Enter maximum size of array : ";
                cin>>n_;
                cout<<"upper bound of array elements : ";
                cin>>max_;
                cout<<"Lower bound of array Elements : ";
                cin>>min_;
                function_2(n_,max_,min_);
                break;
    case 3:cout<<"Enter maximum size of array : ";
          cin>>n_;
          function_3(n_);
          break;
    case 4: cout<<"Enter maximum size of the sorted array : ";
                  cin>>n_;
                  cout<<"upper bound of array elements : ";
                  cin>>max_;
                  cout<<"Lower bound of array Elements : ";
                  cin>>min_;
                  cout<<"Enter 1 for sorting in ascending order and 0 for sorting in descending order: ";
                  cin>>flag;
                  function_4(n_,max_,min_,flag);
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
    case 6: cout<<"Enter the maximum of row and column: ";
                              cin>>n_;
                              cout<<"upper bound of matrix elements : ";
                              cin>>max_;
                              cout<<"Lower bound of matrix Elements : ";
                              cin>>min_;
                              cout<<"Enter 1 for square matrix : ";
                              cin>>flag;
                              function_6(n_,max_,min_,flag);
                              break;

    case 7:cout<<"Enter the maximum size of row or column : ";
           cin>>n_;
           cout<<"Do you want row size and column size to be same : ";
           cin>>flag;
           function_7(n_,flag);
           break;

    case 14: cout<<"Enter the maximum number of nodes in the star shapd tree: ";
                    cin>>n_;
                    function_14(n_);
                    break;

    case 15:  cout<<"Enter the maximum number of nodes: ";
                              cin>>n_;
                              function_15(n_);
                              break;

    case 16: cout<<"Enter the maximum number of nodes: ";
                           cin>>n_;
                           cout<<"upper bound of weight of an edge : ";
                           cin>>max_;
                           cout<<"Lower bound of weight of an edge : ";
                           cin>>min_;
                           function_16(n_,max_,min_);
                           break;
    case 17:cout<<"Enter total numbers of nodes :";
                                   cin>>n_;
                                   cout<<"Enter the root node  :";
                                   cin>>root_;
                                   function_17(n_,root_);
                                   break;
    case 18:cout<<"Enter the number of nodes : ";
           cin>>n_;
           cout<<"Enter the maximum value of the node weight : ";
           cin>>max_;
           function_18(n_,max_);
           break;
    case 19: cout<<"Enter max number of nodes in the graph: "<<endl;
          cin>>n_;
          function_19(n_);
    case 20:cout<<"Enter total numbers of node(<10000) :";
              cin>>n_;
              cout<<"Enter max Degree: ";
              cin>>degree;
              function_20(n_,degree);
              break;
    case 21:cout<<"Enter total number of node(<10000) :";
              cin>>n_;
              function_21(n_);
              break;

  }







  return 0;
}






void generate_numbers_1(ll n, LL x, LL y,int flag) {
	LL mod = (y - x + 1);
	LL displace = x;

	for(int i=1; i<=n; ++i) {
		LL number = ((LL)rand() * rand()) % mod + displace;
		assert(number >= x && number <= y);
    double r = static_cast <double> (rand()) / static_cast <double> (RAND_MAX);
    if(flag)
		printf("%lf", number*r);
    else
    printf("%lld", number);
		if (i < n) {
			printf(" ");
		}
	}
	printf("\n");
}
void function_1(ll n_,ll max_,ll min_,ll flag)
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
		generate_numbers_1(n, range_low, range_high,flag);
	}
}
//1
//2
void function_2(ll n_,ll max_,ll min_)
{
  fptr = freopen("generated_test_cases.txt", "a", stdout);

  if(flag_t==1)
    {
      cout<<test_cases<<endl;
      flag_t=0;
    }
  for(int i=1;i<=test_cases;i++)
  {
    ll n=rand()%n_+1;

  ll bucketmax_=max_/n;
  ll prev=min_;
    vector<ll> v;
  while(v.size()<=n)
  {
    ll curr=prev+rand()%bucketmax_+1;
    v.push_back(curr);
    prev=curr;
  }
  random_shuffle(v.begin(),v.end());
  cout<<n<<endl;
  for(int i=0;i<v.size();i++)
  cout<<v[i]<<" ";
  cout<<endl;
  }
}
//2



//3
void generate_permutation_array_3(int n) {
	vector<int> perm(n);

	for(int i=0; i<n; ++i) {
		perm[i] = i+1;
	}

	random_shuffle(perm.begin(), perm.end());

	for(int i=0; i<n; ++i) {
		printf("%d ", perm[i]);
	}
	printf("\n");

	vector<int> mark(n);

	for(int i=0; i<n; ++i) {
		mark[perm[i] - 1] = 1;
	}

	bool all_marked = true;

	for(int i=0; i<n; ++i) {
		all_marked &= mark[i];
	}

	assert(all_marked);
	assert(perm.size() == n);
}

void function_3(ll n_)
{
  fptr = freopen("generated_test_cases.txt", "a", stdout);
  if(flag_t==1)
    {
      cout<<test_cases<<endl;
      flag_t=0;
    }
    for(int t=1; t<=test_cases; ++t)
    {
    		int n = rand() % n_ + 1;
    		printf("%d\n", n);
    		generate_permutation_array_3(n);
    }
}
//3


//4
void generate_numbers_4(ll n, LL x, LL y,int flag) {

  vector<LL> A;

	LL mod = (y - x + 1);
	LL displace = x;

	for(int i=1; i<=n; ++i) {
		LL number = ((LL)rand() * rand()) % mod + displace;
		assert(number >= x && number <= y);
    double r = static_cast <double> (rand()) / static_cast <double> (RAND_MAX);
    A.pb(number);
	}



  if(flag)
  {
    sort(A.begin(),A.end());
  }else{
    sort(A.begin(),A.end(),greater<int>());
  }


	for(int i=0; i<n; i++)
  {
    printf("%lld ",A[i]);
  }

  printf("\n");

}



void function_4(ll n_,ll max_,ll min_,ll flag)
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
		generate_numbers_4(n, range_low, range_high,flag);
	}

}
//4

//5
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
//5

//6
void generate_numbers_6(ll row, ll col, ll x, ll y)
{


  LL mod = (y - x + 1);
  LL displace = x;

  printf("%lld ",row);
  printf("%lld\n",col);

  for(int i=1; i<=row; i++)
  {
    for(int j=1; j<=col; j++)
    {
        LL number = ((LL)rand() * rand()) % mod + displace;
        printf("%lld ",number);
    }
      printf("\n");
  }

}

void function_6(ll n_,ll max_,ll min_,ll flag)
{
  fptr = freopen("generated_test_cases.txt", "a", stdout);
  if(flag_t==1)
    {
      cout<<test_cases<<endl;
      flag_t=0;
    }
  for(int t=1; t<=test_cases; ++t) {
		ll row = rand() % n_ + 1;
    ll col;
    if(flag)
      col = row;
    else
      col = rand() % n_ + 1;

		//printf("%lld\n", n);
		LL range_low = min_;
		LL range_high = max_;
		generate_numbers_6(row,col,range_low, range_high);
	}

}

//6

//7
void generate_permutation_array_7(int n,int m) {
	vector<int> perm(n*m);

	for(int i=0; i<n*m; ++i) {
		perm[i] = i+1;
	}

	random_shuffle(perm.begin(), perm.end());

	for(int i=0; i<n; ++i) {
    for(int j=0;j<m;j++)
		printf("%d ", perm[i*m + j ]);
    cout<<endl;
	}
	printf("\n");

	vector<int> mark(n*m);

	for(int i=0; i<n*m; ++i) {
		mark[perm[i] - 1] = 1;
	}

	bool all_marked = true;

	for(int i=0; i<n*m; ++i) {
		all_marked &= mark[i];
	}

	assert(all_marked);
	assert(perm.size() == n*m);
}

void function_7(ll n_,ll flag)
{
  fptr = freopen("generated_test_cases.txt", "a", stdout);
  if(flag_t==1)
    {
      cout<<test_cases<<endl;
      flag_t=0;
    }
    for(int t=1; t<=test_cases; ++t)
    {
    		int n = rand() % n_ + 1;
        int m = rand() % n + 1;
    		printf("%d %d\n", n,m);
    		generate_permutation_array_7(n,m);
    }
}
//7

//8

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
//8
//9


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
//9
//10

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
//10
//11





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

//11
//12


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

//12
//13


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
//13
//14
void function_14(ll n) {

    fptr = freopen("generated_test_cases.txt", "a", stdout);

  	int node = rand() % n + 1;

  	vector< pair<int,int> > graph;
  	for(int i=1; i<=n; ++i) {
  		if (i == node) {
  			continue;
  		}
  		int x = node;
  		int y = i;
  		if (rand() % 3 == 0) {
  			swap(x, y);
  		}
  		graph.push_back(make_pair(x, y));
  	}

  	random_shuffle(graph.begin(), graph.end());

    printf("%lld\n",n);
    printf("%d\n",node);

  	for(int i=0; i<n-1; ++i) {
  		printf("%d %d\n", graph[i].first, graph[i].second);
  	}

  	printf("\n");
  }

  //14
  //15
  void generate_unweighted_tree(int n, vector<int> &adj ) {
    	set< pair<int,int> > duplicates;
    	vector< pair<int,int> > graph;

    	for(int i=2; i<=n; ++i) {
    		int x = i;
    		int y = rand() % (i - 1) + 1;
    		if (i % 10 == 0) {
    			swap(x, y);
    		}
    		assert (1 <= x <= n);
    		assert (1 <= y <= n);
    		assert (x != y);
    		if (duplicates.find(make_pair(x, y)) != duplicates.end()) {
    			i -= 1;
    			continue;
    		}
    		if (duplicates.find(make_pair(y, x)) != duplicates.end()) {
    			i -= 1;
    			continue;
    		}
    		duplicates.insert(make_pair(x, y));

    		graph.push_back(make_pair(x, y));
    	}

    	random_shuffle(graph.begin(), graph.end());



      //printf("%d",n);
    	for(int i=0; i<n-1; ++i) {
    		printf("%d %d\n", graph[i].first, graph[i].second);
    	}

    	printf("\n");
    }



  void function_15(ll n)
  {
    fptr = freopen("generated_test_cases.txt", "a", stdout);
    if(flag_t==1)
      {
        cout<<test_cases<<endl;
        flag_t=0;
      }
    vector<int> adj;
    adj.resize(n+1,0);

    for(int t=1; t<=test_cases; ++t) {
      int p = (rand() % n) + 1;
      printf("%d\n", p);
      generate_unweighted_tree(p,adj);
    }

  }




//15

//16
void generate_weighted_tree_16(int n, LL x, LL y, vector<int> &adj ) {

   LL mod = (y-x+1);
   LL displace  = x;

   set< pair<int,int> > duplicates;
   vector< pair<int,int> > graph;

   for(int i=2; i<=n; ++i) {
     int x = i;
     int y = rand() % (i - 1) + 1;
     if (i % 10 == 0) {
       swap(x, y);
     }
     assert (1 <= x <= n);
     assert (1 <= y <= n);
     assert (x != y);
     if (duplicates.find(make_pair(x, y)) != duplicates.end()) {
       i -= 1;
       continue;
     }
     if (duplicates.find(make_pair(y, x)) != duplicates.end()) {
       i -= 1;
       continue;
     }
     duplicates.insert(make_pair(x, y));

     graph.push_back(make_pair(x, y));
   }

   random_shuffle(graph.begin(), graph.end());



   printf("%d\n",n);

   LL number = ((LL)rand() * rand()) % mod + displace;
   printf("%lld\n",number);

   for(int i=0; i<n-1; ++i) {
     number = ((LL)rand() * rand()) % mod + displace;
     printf("%d %d %lld \n", graph[i].first, graph[i].second, number);
   }


 }




void function_16(ll n, ll max_, ll min_ )
{
 fptr = freopen("generated_test_cases.txt", "a", stdout);
 if(flag_t==1)
   {
     cout<<test_cases<<endl;
     flag_t=0;
   }

 vector<int> adj;
 adj.resize(n+1,0);

 for(int t=1; t<=test_cases; ++t) {
   int p = (rand() % n) + 1;
   generate_weighted_tree_16(p,min_,max_,adj);
 }

}
//16
//17
void function_17(ll n_,ll root_)
{

  fptr = freopen("generated_test_cases.txt", "a", stdout);
  if(flag_t==1)
    {
      cout<<test_cases<<endl;
      flag_t=0;
    }
  for(int i=1;i<=test_cases;i++)
  {
    ll n=rand()%n_+1;
    ll degree[n+1]={0};

     unordered_set<ll> s;
    vector<ll> v;
  for(int j=1;j<=n;j++)
  {
    if(j!=root_)
    v.push_back(j);
  }
  s.insert(root_);
  random_shuffle(v.begin(),v.end());
  cout<<n-1<<endl;
  for(int j=0;j<v.size();j++)
  {

    ll ele=*(s.begin());
    cout<<ele<<" "<<v[j]<<endl;
    degree[ele]++;
    degree[v[j]]++;
    s.insert(v[j]);
    if(degree[ele]>=3)
    s.erase(ele);
  }
  }
}
//17
//18

const int lim_n = 100005;

vector<int> adj[lim_n+1];
int visited[lim_n+1];

void check_graph(int n) {
	memset(visited, false, sizeof(visited));
	queue<int> q;
	q.push(1);
	visited[1] = true;
	while(!q.empty()) {
		int u = q.front();
		q.pop();
		for(vector<int>::iterator it = adj[u].begin(); it != adj[u].end(); ++it) {
			if (!visited[*it]) {
				visited[*it] = true;
				q.push(*it);
			}
		}
	}

	bool connected = true;
	for(int i=1; i<=n; ++i) {
		connected &= visited[i];
	}

	assert(connected);
}

void generate_unweighted_tree_18(int n,int max_) {
	set< pair<int,int> > duplicates;
	vector< pair<int,int> > graph;

	for(int i=2; i<=n; ++i) {
		int x = i;
		int y = rand() % (i - 1) + 1;
		if (i % 10 == 0) {
			swap(x, y);
		}
		assert (1 <= x <= n);
		assert (1 <= y <= n);
		assert (x != y);
		if (duplicates.find(make_pair(x, y)) != duplicates.end()) {
			i -= 1;
			continue;
		}
		if (duplicates.find(make_pair(y, x)) != duplicates.end()) {
			i -= 1;
			continue;
		}
		duplicates.insert(make_pair(x, y));
		adj[x].push_back(y);
		adj[y].push_back(x);
		graph.push_back(make_pair(x, y));
	}

	random_shuffle(graph.begin(), graph.end());

	for(int i=0; i<n-1; ++i) {
		printf("%d %d\n", graph[i].first, graph[i].second);
	}

	check_graph(n);

	for(int i=1; i<=n; ++i) {
		adj[i].clear();
	}


  for(int i=1;i<=n;i++)
  {
    cout<<rand()%max_<<" ";
  }
  cout<<endl;
}

void function_18(ll n_,ll max_)
{
  fptr = freopen("generated_test_cases.txt", "a", stdout);
  if(flag_t==1)
    {
      cout<<test_cases<<endl;
      flag_t=0;
    }
    for(int t=1; t<=test_cases; ++t)
    {
    		int n = rand() % n_ + 1;
    		printf("%d \n", n);
    		generate_unweighted_tree_18(n,max_);
    }
}

//18

//19
void generate_adjacencymatrix(int n)
{
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      LL  number = ((LL)rand() * rand()) % 2;
      printf("%lld ",number);
    }
    printf("\n");
  }

}


void function_19(ll n)
{
  fptr = freopen("generated_test_cases.txt", "a", stdout);
  if(flag_t==1)
    {
      cout<<test_cases<<endl;
      flag_t=0;
    }

    for(int t=1; t<=test_cases; ++t) {
      int p = (rand() % n) + 1;
      cout<<p<<endl;
      generate_adjacencymatrix(p);
    }
}
//19
//20
void function_20(int n_,int k)
{
  fptr = freopen("generated_test_cases.txt", "a", stdout);
  cout<<test_cases<<endl;
  for(int i=1;i<=test_cases;i++)
  {
    vector<pair<int,int>> v;
    int n=rand()%n_+1;
    int deg[1001];
    for(int j=1;j<=n;j++)
    deg[j]=k;
    for(int j=1;j<=n;j++)
    {
      if(deg[j]>0)
      {
      int curdeg=rand()%deg[j]+1;
      int size=(n-j)/curdeg;
      int pre=j;
      int five=5;
      while(curdeg>0&&size>0)
      {
        int ele=pre+rand()%size+1;
        if(deg[ele]>0)
        v.push_back(make_pair(j,ele));
        deg[ele]--;
        curdeg--;
        pre=ele;


      }
      }
    }
    cout<<v.size()<<endl;
    random_shuffle(v.begin(),v.end());
    for(int j=0;j<v.size();j++)
    {
      cout<<v[j].first<<" "<<v[j].second<<endl;
    }

  }

}
//20
//21

void function_21(ll n)
{
  fptr = freopen("generated_test_cases.txt", "a", stdout);
  cout<<test_cases<<endl;
  while(test_cases--)
  {
  ll first=rand()%n+1;
  vector<ll> v;
  vector<pair<ll,ll>> v2;
  unordered_set<ll> s;


  v.push_back(first);
  for(ll i=1;i<=n;i++)
  {
    if(i!=first)
    {
    ll r=rand()%(v.size());
    v.push_back(i);
    s.insert(i*10000000+v[r]);
    s.insert(v[r]*10000000+i);
    }
  }

  ll tot=rand()%(n*n)+1-s.size();
   for(ll i=0;i<tot;i++)
    {
      ll one=rand()%n+1;
      ll two=rand()%n+1+one;
      s.insert(one*10000000+two);

    }

    cout<<s.size()<<endl;
    for(auto it=s.begin();it!=s.end();++it)
    {
      ll one=(*it)/10000000;
      ll two=(*it)%10000000;
      cout<<one<<" "<<two<<endl;

     }
   }
}
//21
