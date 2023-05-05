#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int c1=0,c2=0,c3=0,c4=0;
	string X;
	stack<string>p;
	stack<string>v;
	//Rep de Palpites e Vencedores.
	for(int i=0;i<N;i++)
	{
	    cin>>X;
	    cin.ignore();
	    //Leitura de cada Palpite
	    for(int g=0;g<4;g++)
	        {
	            getline(cin,X);
	            p.push(X);
	        }
	   cin>>X;
	   cin.ignore();
	   //Leitura dos vencedores
	   for(int f=0;f<4;f++)
	        {
	            getline(cin,X);
	            v.push(X);
	        }
	    //Comparação entre palpite e vencedores.
		for(int j=4;j>=1;j--)
		{
			if(p.top()==v.top())
			{
				if(j==1)
					c1++;
				else if(j==2)
					c2++;
				else if(j==3)
					c3++;
				else if(j==4)
					c4++;		
			}
			p.pop();
			v.pop();
		}
	}
	//Impressões das categorias
	if(c1==0)
		cout<<"1";
	if(c2==0)
	{
		if(c1==0)
		{cout<<" ";}
		cout<<"2";	
	}
	if(c3==0)
	{
		if(c1==0||c2==0)
			{cout<<" ";}
			cout<<"3";
	}
	if(c4==0)
	{
		if(c1==0||c2==0||c3==0)
			{cout<<" ";}
			cout<<"4";
	}
	cout<<endl;
}	

