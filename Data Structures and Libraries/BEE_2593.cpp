#include <bits/stdc++.h>
using namespace std;
//Função para verificar se é número.
bool isNumber(const string& str)
{
    for (char const &c : str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}

int main()
{
    list<string>text;
    list<int>pos;
    list<string>::iterator it;
    string S;
    cin>>S;
    //alocação da frase(s)
    for(int i=0;i<10000&&isNumber(S)==false;i++)
    {
        text.push_back(S);
        cin>>S;
    }
    int M;
    M=stoi(S);
	//Ler a palavra a ser achada
    for(int j=0;j<M;j++)
    {
        cin>>S;
        int Soma=0;
        //andar pelas palavras
        for(auto it=text.begin();it!=text.end();it++)
        {
            string X=*it;
            int x=X.length();
            //verificar a palavra são iguais e guardar a posição da primeira letra.
            if(*it==S)
                {
                pos.push_back(Soma);
                Soma+=x+1;
                }
            else
                Soma+=x+1;
        }
        //impressões
        if(pos.empty())
            cout<<-1<<endl;
        else
        {
        for(auto it=pos.begin();it!=pos.end();it++)
        {
            if(*it!=pos.back())
                cout<<*it<<" ";
            else
                cout<<*it<<"\n";
        }
        }
        pos.clear();
    }
}	
