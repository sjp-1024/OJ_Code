/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 262.cpp
*       &Created Time: 19Century 2019年09月01日 星期日 14时42分50秒 
*                          CST  Day/244 and Week/35 of this year
*       &Description:
*
*
***********************************************************/


#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> vec_out;//chuzhan xulie
stack<int> stack_in;
int state3=1;
int n,cnt=0;

void dfs(){
   if(vec_out.size()==n){
       cnt++;
       for(int i=1;i<=vec_out.size();i++)
		   cnt++;
       
   }
       if(stack_in.size()){
       vec_out.push_back(stack_in.top());//入mowei
       stack_in.pop();
       dfs();
       stack_in.push(vec_out.back());//恢复到进站操作之前
       vec_out.pop_back();
   }
	 if(state3<=n){
       stack_in.push(state3);
       state3++;
       dfs();
       stack_in.pop();//恢复到出站操作之前
       state3--;
   }

}
int main(){
    int n;
	cin>>n;
	dfs();
	cout<<cnt<<endl;
    return 0;
}

