#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int N;
    int cnt=0;
    int Vet[1010];
    
    while(cin>>N,N)
    {
        int n=0;
        while(n==0)
        {
			//leitura do número dos vagões
			for(int i=0;i<N;i++)
			{
				cin>>Vet[i];
				if(Vet[0]==0)
				{
					i=N;
					++n;
				}
			}
			if(n!=0)
			{
				cout<<"\n";
			}
			else
			{
				stack<int>pilha;
				//verificar se é possivel organizar da forma solicitada (por exemplo: 5,4,3,2,1).
				for(int i=1;i<=N;i++)
				{
					pilha.push(i);
					while(!pilha.empty()&&pilha.top()==Vet[cnt])
					{
						pilha.pop();
						cnt++;
					}
				}
			cout<<(cnt==N?"Yes\n":"No\n");
			cnt=0;
			}
		}
    }
    return 0;
}
