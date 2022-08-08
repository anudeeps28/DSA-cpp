// in this, the code is same, just the style of code is different.
#include<iostream>
using namespace std;

class Element
{
public:
    int i; // row number  
    int j; // column number
    int x; // element itself
};

class Sparse
{
private:
    int m; // m,n are dimensions of the members
    int n;
    int num; // number of non-0 elements
    Element *ele; // array taken as pointer so that we can create an element in the heap of the desired size
public: // inside the public block, we will have all the data members of the block
    Sparse(int m, int n, int num) //constructor = used for initializing the members of the class declared in private
    {
        this -> m = m;
        this ->n = n;
        this -> num = num;
        ele = new Element[this -> num];
    }

    // we cannot have any non parametrized constructor because we cannot take any default number of elements

    ~Sparse() // destructor
    {
        delete [] ele;
    }
    // operator overloading
    // friend functions for reading and displaying the matrices
    Sparse operator+(Sparse &s); 
    friend istream & operator >> (istream &is, Sparse &s); // this is for reading
    friend ostream & operator << (ostream &os, Sparse &s); // this is for displaying
};

Sparse Sparse::operator+(Sparse &s)
{
    int i,j,k;
    if (m!=s.m || n!=s.n)
        return Sparse(0,0,0);
    Sparse *sum = new Sparse(m,n,num+s.num);

    i = j = k = 0;
    while(i < num && j < s.num)
    {
        if (ele[i].i < s.ele[j].i)
            sum -> ele[k++] = ele[i++];
        else if (ele[i].i > s.ele[j].j)
            sum -> ele[k++] = s.ele[j++];
        else
        {
            if (ele[i].j < s.ele[j].i)
            sum -> ele[k++] = ele[i++];
            else if (ele[i].i > s.ele[j].i)
                sum -> ele[k++] = s.ele[j++];
            else
            {
                sum -> ele[k] = ele[i];
                sum -> ele[k++].x = ele[i++].x + s.ele[j++].x;
            }
        }

    }

    for (; i<num;i++)sum->ele[k++] = ele[i];
    for (; j<s.num;j++)sum->ele[k++] = s.ele[j];
    sum -> num = k;

    return *sum;
}

istream & operator >> (istream &is, Sparse &s)
{
    cout << "enter non- 0 elements";
    for (int i = 0; i < s.num; i++)
        cin >> s.ele[i].i >> s.ele[i].j >> s.ele[i].x;
    return is;
}

ostream & operator << (ostream &os, Sparse &s)
{   int k;
    for (int i = 0; i < s.m; i++)
    {
        for (int j = 0;j < s.n; j++)
        {
            if (s.ele[k].i == i && s.ele[k].j == j)
                cout << s.ele[k+1].x << " ";
            else
              cout << "0 ";
        }
        cout << endl;
    }  

    return os;
}



int main()
{
    Sparse s1(5,5,5);
    Sparse s2(5,5,5);

    cin >> s1;
    cin >> s2;

    Sparse sum = s1 + s2;

    cout << "first matrix" << endl << s1;
    cout << "second matrix" << endl << s2;
    cout << "Sum Matrix" << endl << sum;

    return 0;
}

//////////////////////////////////////////////////////////////////////////
// instructor's solution

// #include <iostream>
// using namespace std;
// class Element
// {
// public:
//  int i;
//  int j;
//  int x;
// };
// class Sparse
// {
// private:
//  int m;
//  int n;
//  int num;
//  Element *ele;
// public:
//  Sparse(int m,int n,int num)
//  {
//  this->m=m;
//  this->n=n;
//  this->num=num;
//  ele=new Element[this->num];
//  }
//  ~Sparse()
//  {
//  delete [] ele;
//  }

//  Sparse operator+(Sparse &s);

//  friend istream & operator>>(istream &is,Sparse &s);
//  friend ostream & operator<<(ostream &os,Sparse &s);


// };
// Sparse Sparse::operator+(Sparse &s)
// {
//  int i,j,k;
//  if(m!=s.m || n!=s.n)
//  return Sparse(0,0,0);
//  Sparse *sum=new Sparse(m,n,num+s.num);

//  i=j=k=0;
//  while(i<num && j<s.num)
//  {
//  if(ele[i].i<s.ele[j].i)
//  sum->ele[k++]=ele[i++];
//  else if(ele[i].i > s.ele[j].i)
//  sum->ele[k++]=s.ele[j++];
//  else
//  {
//  if(ele[i].j<s.ele[j].j)
//  sum->ele[k++]=ele[i++];
//  else if(ele[i].j > s.ele[j].j)
//  sum->ele[k++]=s.ele[j++];
//  else
//  {
//  sum->ele[k]=ele[i];
//  sum->ele[k++].x=ele[i++].x+s.ele[j++].x;
//  }
//  }
//  }
//  for(;i<num;i++)sum->ele[k++]=ele[i];
//  for(;j<s.num;j++)sum->ele[k++]=s.ele[j];
//  sum->num=k;

//  return *sum;

// }
//  istream & operator>>(istream &is,Sparse &s)
//  {
//  cout<<"Enter non-zero elements";
//  for(int i=0;i<s.num;i++)
//  cin>>s.ele[i].i>>s.ele[i].j>>s.ele[i].x;
//  return is;
//  }
//  ostream & operator<<(ostream &os,Sparse &s)
//  {
//  int k=0;
//  for(int i=0;i<s.m;i++)
//  {
//  for(int j=0;j<s.n;j++)
//  {
//  if(s.ele[k].i==i && s.ele[k].j==j)
//  cout<<s.ele[k++].x<<" ";
//  else
//  cout<<"0 ";
//  }
//  cout<<endl;
//  }
//  return os;
//  }

// int main()
// {
//  Sparse s1(5,5,5);
//  Sparse s2(5,5,5);

//  cin>>s1;
//  cin>>s2;

//  Sparse sum=s1+s2;

//  cout<<"First Matrix"<<endl<<s1;
//  cout<<"Second MAtrix"<<endl<<s2;
//  cout<<"Sum Matrix"<<endl<<sum;

//  return 0;
// }