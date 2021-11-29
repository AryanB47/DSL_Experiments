 ​//​A-06_Bhatt Aryan Prateek
  
 ​#​include​ ​<​stdio.h​> 
 ​#​include​ ​<​conio.h​> 
 ​void​ ​insert​(​void​); 
 ​void​ delete(​void​); 
 ​void​ ​display​(​void​); 
 ​int​ queue[​100​], n, ch,i; 
 ​int​ front=-​1​; 
 ​int​ rear=-​1​; 
 ​int​ ​main​() 
 ​{ 
 ​    ​printf​(​"​Enter the size of queue less than 100​\n​"​); 
 ​    ​scanf​(​"​%d​"​, &n); 
 ​    ​do 
 ​    { 
 ​        ​printf​(​"​Enter the choice ​\n​1. Insert​\n​2. Delete​\n​3. Display​\n​4. Exit​\n​"​); 
 ​        ​scanf​(​"​%d​"​, &ch); 
 ​        ​switch​(ch) 
 ​        { 
 ​            ​case​ ​1​: 
 ​                ​insert​(); 
 ​                ​break​; 
 ​            ​case​ ​2​: 
 ​                delete(); 
 ​                ​break​; 
 ​            ​case​ ​3​: 
 ​                ​display​(); 
 ​                ​break​; 
 ​            ​case​ ​4​: 
 ​                ​printf​(​"​Exit​"​); 
 ​                ​break​; 
 ​            ​default​: 
 ​                ​printf​(​"​Invalid Choice​"​); 
 ​        } 
 ​    } ​while​ (ch!=​4​); 
 ​}  
 ​void​ ​insert​() 
 ​{ 
 ​    ​int​ num; 
 ​    ​if​(rear>=n-​1​) 
 ​    { 
 ​        ​printf​(​"​Queue is Overflow​"​); 
 ​    } 
 ​    ​else 
 ​    { 
 ​        ​if​(front==-​1​) 
 ​        { 
 ​            front=​0​; 
 ​        } 
 ​        ​printf​(​"​Enter the element to insert​\n​"​); 
 ​        ​scanf​(​"​%d​"​, &num); 
 ​        rear = rear+​1​; 
 ​        queue[rear]=num; 
 ​    } 
 ​} 
 ​void​ delete() 
 ​{ 
 ​    ​if​(front==-​1​||front>rear) 
 ​    { 
 ​        ​printf​(​"​Queue is underflow​\n​"​); 
 ​    } 
 ​    ​else 
 ​    { 
 ​        ​printf​(​"​Element deleted from queue is :​%d​\n​"​, queue[front]); 
 ​        front = front + ​1​; 
 ​    } 
 ​} 
 ​void​ ​display​() 
 ​{ 
 ​    ​if​(front==-​1​) 
 ​    { 
 ​        ​printf​(​"​Queue is empty​\n​"​); 
 ​    } 
 ​    ​else 
 ​    { 
 ​        ​for​(i=front;i<=rear;i++) 
 ​        { 
 ​            ​printf​(​"​%d​ ​"​, queue[i]); 
 ​        } 
 ​        ​printf​(​"​\n​"​); 
 ​    } 
 ​}