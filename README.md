#  알고리즘  

[에라토스테네스의 체](#에라토스테네스의-체)  
[문자열에 들어있는 숫자가 p로 나누어지는지 판별하는 방법](#문자열에-들어있는-숫자가-p로-나누어지는지-판별하는-방법)  
[셸 정렬](#셸-정렬)  

---
## 에라토스테네스의 체
- 백준 1837번, 2061번
- 소수인지 아닌지 판별하는 알고리즘
- 2부터 m까지의 숫자로 나누어서 나누어지는 수가 있으면 1을 표시한다.(소수가 아님)
- 소수인 수에는 0이 마지막까지 남아있다.

```C
//에라토스테네스의 체
//check[0] = -1;
//check[1] = -1;
for (int i = 2; i <= m; i++)
{
	if (check[i] == 0) {	//0일때만 실행(다른 것에서 안걸렸을 때)
	for (int j = i * 2; j <= m; j += i)
	{
		check[j] = 1;	//소수가 아님을 표시
	}
}
  ```
---
## 문자열에 들어있는 숫자가 p로 나누어지는지 판별하는 방법
- 백준 1837번, 2061번
```C
int mod(char *S, int p)//문자열 S가 p로 나누어지는지 확인하기 위한 함수, 우리가 큰 수 나눗셈 할때 하는 방식과 같음.
{
	// S는 수를 문자열로 표현한 것, 1234 -> "1234"
	int find= 0;
	for (int i = 0; S[i]; i++)	//S의 index 범위에 벗어나면 종료
		find= (find* 10 + (S[i] - '0')) % p;
	return find;
}
```
---
## 셸 정렬
- 백준 2309번, 3040번
- 삽입정렬을 보완한 알고리즘
- 삽입정렬이 어느정도 정렬된 배열에 대해 빠른 것에 착안
- 간격의 초깃값은 n/2
- 간격은 홀수인 것이 좋다.
```C
//셸정렬 함수
void inc_insertion_sort(int list[], int first, int last, int gap)
{
	int i, j, key;
	for (i = first + gap; i <= last; i = i + gap) {
		key = list[i];
		for (j = i - gap; j >= first && key < list[j]; j = j - gap)
			list[j + gap] = list[j];
		list[j + gap] = key;
	}
}
//
void shell_sort( int list[], int n ) // n = size
{
	int i, gap;
	for( gap=n/2; gap>0; gap = gap/2 )
	{
		if( (gap%2) == 0 )
			gap++;	//gap는를 홀수로 만들어주기 위하여
		for(i=0;i<gap;i++) // 부분 리스트의 개수는 gap
			inc_insertion_sort(list, i, n-1, gap);
	}
}
```
---
## DFS
---
## BFS
---
