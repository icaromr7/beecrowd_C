#include <bits/stdc++.h>
using namespace std;

int main()
{
	int P,A,R;
	string S,SR,C;
	list<string>t1;
	list<string>v;
	list<string>pf;
	map<string,string>t2;
	list<string>::iterator it;
	cin>>P>>A>>R;
	while(P!=0||A!=0||R!=0)
	{
		cin.ignore();
		//alocar as pérolas
		for(int i=0;i<P;i++)
		{
			getline(cin,S);
			stringstream ss(S);
			string text;
			while(ss>>text)
				{t1.push_back(text);}
				SR=t1.back();
				t1.pop_back();
			for(auto it=t1.begin();it!=t1.end();it++)	
				{S+=(*it);}
				t2[S]=SR;
				t1.clear();
		}
		int maior=0;
		//Alunos
		for(int i=0;i<A;i++)
		{
			cin>>C;
			int n=0;
			cin.ignore();
			//Repostas do aluno
			for(int j=0;j<R;j++)
			{
			getline(cin,S);
			stringstream ss(S);
			string text;
			int jf=0;
			//verificar as respostas
			for(auto it=pf.begin();it!=pf.end();it++)
				{if(*it==S)
					{
					jf++;
					break;
					}
				}
				pf.push_back(S);
				if(jf==0)
				{
					while(ss>>text)
						{t1.push_back(text);}
						SR=t1.back();
						t1.pop_back();
						
					for(auto it=t1.begin();it!=t1.end();it++)
						{S+=(*it);}
						if(t2[S]==SR)
							{n++;}
							t1.clear();
				}
			}
			//comparação de quantidade de pérolas.
			if(n==maior)
			{
				int comp=0;
				
				for(auto it=v.begin();it!=v.end();it++)
				{
					if(*it==C)
					{
						comp++;
						break;
					} 
				}
				if(comp==0)
				v.push_back(C);
			}
			else if(n>maior)
			{
				maior=n;
				v.clear();
				v.push_back(C);
			}
			pf.clear();
		}
		v.sort();
		int cont=v.size();
		int m=1;
		//Impressão
		for(auto it=v.begin();it!=v.end();it++)
		{
			if(m!=cont)
				{
					cout<<*it<<", ";
				}
			else
				{cout<<*it;}
				m++;
		}
		cout<<endl;
		t1.clear();
		v.clear();
		t2.clear();
		cin>>P>>A>>R;
	}
	return 0;
}	
