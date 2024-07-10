## Patterns
#### Pattern 1 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P1.png)
```c++
void nForest(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
```
#### Pattern 2 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P2.png)
```c++
void nForest(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
```
#### Pattern 3 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P3.png)
```c++
void nTriangle(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<j+1<<" ";
		}
		cout<<endl;
	}
}
```
#### Pattern 4 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P4.png)
```c++
void triangle(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<i+1<<" ";
		}
		cout<<endl;
	}
}
```
#### Pattern 5 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P5.png)
```c++
void seeding(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
```
#### Pattern 6 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P6.png)
```c++
void nNumberTriangle(int n) {
    for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<<j+1<<" ";
		}
		cout<<endl;
	}
}
```
#### Pattern 7 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P7.png)
```c++
void nStarTriangle(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
			cout<<" ";
		}
		for(int j=0;j<2*i+1;j++){
			cout<<"*";
		}
        for(int j=0;j<n-1-i;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}
```
#### Pattern 8 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P8.png)
```c++
void nStarTriangle(int n) {
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n-1-i;j++){
			cout<<" ";
		}
		for(int j=0;j<2*i+1;j++){
			cout<<"*";
		}
        for(int j=0;j<n-1-i;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}
```
#### Pattern 9 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P9.png)
```c++
void nStarDiamond(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
			cout<<" ";
		}
		for(int j=0;j<2*i+1;j++){
			cout<<"*";
		}
        for(int j=0;j<n-1-i;j++){
			cout<<" ";
		}
		cout<<endl;
	}
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n-1-i;j++){
			cout<<" ";
		}
		for(int j=0;j<2*i+1;j++){
			cout<<"*";
		}
        for(int j=0;j<n-1-i;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}
```
#### Pattern 10 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P10.png)
```c++
void nStarTriangle(int n) {
    int stars = 1;
    for (int i=0;i<2*n-1;i++){
        for(int j=0;j<stars;j++){
            cout<<"*";
        }
        if (i<n-1) 
            stars++;
        else 
            stars--;
        cout<<endl;
    }
}
```
#### Pattern 11 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P11.png)
```c++
void nBinaryTriangle(int n) {
    for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
            if((i+j)%2==0){
                cout<<1<<" ";
            }else{
                cout<<0<<" ";
            }
		}
		cout<<endl;
	}
}
```
#### Pattern 12 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P12.png)
```c++
void numberCrown(int n) {
    for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<j+1<<" ";
		}
        
        for(int j=i;j>=0;j--){
			cout<<j+1<<" ";
		}
		cout<<endl;
	}
}
```
#### Pattern 13 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P13.png)
```c++
void nNumberTriangle(int n) {
    int count=0;
    for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
            count++;
			cout<<count<<" ";
		}
		cout<<endl;
	}
}
```
#### Pattern 14 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P14.png)
```c++
void nLetterTriangle(int n) {
    char c='A';
    for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
            cout<<char(c+j)<<" ";
		}
		cout<<endl;
	}
}
```
#### Pattern 15 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P15.png)
```c++
void nLetterTriangle(int n) {
    char c='A';
    for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<<char(c+j)<<" ";
		}
		cout<<endl;
	}
}
```
#### Pattern 16 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P16.png)
```c++
void alphaRamp(int n) {
    char c='A';
    for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
            cout<<c<<" ";
		}
		cout<<endl;
        c=char(c+1);
	}
}
```
#### Pattern 17 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P17.png)
```c++
void alphaHill(int n) {
    
    for(int i=0;i<n;i++){
        char c = 'A';
        for(int j=0;j<n-1-i;j++){
			cout<<" ";
		}
		for(int j=0;j<2*i+1;j++){
            cout<<c<<" ";
			if(j<i){
                c=char(c+1);
            }else{
                c=char(c-1);
            }
		}
        for(int j=0;j<n-1-i;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}
```
#### Pattern 18 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P18.png)
```c++
void alphaTriangle(int n) {
    char c = char('A'+n-1);
    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(c-j)<<" ";
        }
        cout<<endl;
    }

}
```
#### Pattern 19 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P19.png)
```c++
void symmetry(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        for(int j=0;j<2*i;j++){
            cout<<"  ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        for(int j=0;j<2*(n-i);j++){
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
```
#### Pattern 20 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P20.png)
```c++
```
#### Pattern 21 :
![alt text](https://static.takeuforward.org/wp/uploads/2023/01/Screenshot-2023-01-02-at-1.54.55-PM-1.jpg)
```c++
```
#### Pattern 22 :
![alt text](https://static.takeuforward.org/wp/uploads/2022/08/P22.png)
```c++
```
