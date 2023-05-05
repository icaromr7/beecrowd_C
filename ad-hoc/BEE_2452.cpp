#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int F,R;
        cin>>F>>R;
        int dia=0;
        int cont = R;
        int r2= R+R;
        int v[r2];
        int pos=0;
        int r;
        //Montar posições que já tem gota
        for(int i =0;i<R;i++){
            cin>>r;
            v[pos]=r;
            pos++;
            v[pos]=r;
            pos++;
        }
        //Repetir até está tudo preenchido.
        while(cont<F){
			//Andar e verificar as posições 
            for(int i=0;i<r2;i=i+1){
                if(i==0){
                    if(v[i]>1){
                    v[i]=v[i]-1;
                    cont=cont+1;
                    }
                }
                else{
                    if(i%2==0&&v[i]>(v[i-1]+1)){
                        v[i]=v[i]-1;
                        cont=cont+1;
                    }
                    else {
                        if(i==(r2-1)){
                            if(v[i]<F){
                            v[i]=v[i]+1;
                            cont=cont+1;
                            }
                        }else{
                            if(i%2!=0&&v[i]<(v[i+1]-1)){
                                v[i]=v[i]+1;
                                cont=cont+1;
                            }
                        }
                    }
                }    
            }
            dia= dia+1;
        }
        cout<<dia<<endl;
}
