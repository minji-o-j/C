# 새로 알게된 알고리즘  

[에라토스테네스의 체](#에라토스테네스의-체)  
[문자열에 들어있는 숫자가 p로 나누어지는지 판별하는 방법](#문자열에-들어있는-숫자가-p로-나누어지는지-판별하는-방법)

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
	if (check[i] == 0) {
	for (int j = i * 2; j <= m; j += i)
	{
		check[j] = 1;//소수가 아님을 표시
	}
}
  ```

## 문자열에 들어있는 숫자가 p로 나누어지는지 판별하는 방법
- 백준 1837번, 2061번
```C
int mod(char *S, int p)//문자열 S가 p로 나누어지는지 확인하기 위한 함수, 우리가 큰 수 나눗셈 할때 하는 방식과 같음.
{
	// S는 수를 문자열로 표현한 것, 1234 -> "1234"
	int find= 0;
	for (int i = 0; S[i]; i++)//S의 index 범위에 벗어나면 종료
		find= (find* 10 + (S[i] - '0')) % p;
	return find;
}
```
