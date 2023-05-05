#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int cont=0,X;
    string conta;
    char P[1200];
    while(cin>>conta)
    {
        X=conta.length();
        stack<char>pilha;
        //leitura e alocação dos dados
        for(int i=0;i<X;i++)
        {
            P[i]=conta.at(i);
        }
        for(int i2=0;i2<X;i2++)
        {
            pilha.push(P[i2]);
            cont++;
            //organização e verificação
            if(pilha.top() != '(' && pilha.top() != ')')
                pilha.pop();
            else if(pilha.top()==')')
             {
                pilha.pop();
                if(pilha.empty() || pilha.top() != '(')
                {
                    pilha.push(P[i2]);
                    i2=X;
                }
                else
                {
                    pilha.pop();
                }
             }
        }
        if(pilha.empty())
            cout<<"correct\n";
        else
            cout<<"incorrect\n";
        while(!pilha.empty())
            {
                pilha.pop();
            }
    }
    return 0;
}
