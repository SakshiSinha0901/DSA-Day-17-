// CONTAINERS

// 3. QUEUE
//    (FIRST IN , FIRST OUT)

// A. push(const T & value)  &  pop()
#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // 10,20,30,40
    q.pop();
    // 20,30,40
    q.pop();
    // 30,40
    
}

// B. size()
#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // 10,20,30,40
    q.pop();
    // 20,30,40
    q.pop();
    // 30,40
    cout<<q.size()<<endl;  //size()
}

// C. empty()
#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    // 10,20
    q.pop();
    // 20
    if (q.empty() == true){
        cout<<"Queue is empty."<<endl;
    }
    else{
        cout<<"Queue is not empty."<<endl;
    }
}    

// D. front() & back()
#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // 10,20,30,40    
    cout<<"Front : "<<q.front()<<endl;   //front()
    cout<<"Back : "<<q.back()<<endl;     //back()
}    

// E. swap()
#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // 10,20,30,40    
    
    queue<int>p;
    p.push(100);
    p.push(200);
    p.push(300);
    p.push(400);
    // 100,200,300,400

    q.swap(p);  //swap()
    cout<<"Front:"<<q.front()<<" Back:"<<q.back()<<endl;
}  

