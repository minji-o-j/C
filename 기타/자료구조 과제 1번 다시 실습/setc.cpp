// ======================================================================

#include <stdio.h>
#include <stdlib.h>
#include "setc.h"

// ======================================================================

SET *create(void)
{
	//SET* arr = (SET*)malloc(sizeof(SET));
	SET* arr = (SET*)calloc(1, sizeof(SET));
	return arr;

}
// ======================================================================
int member(SET * set, int element)
{
	for (int i = 0; i < set->count; i++)
	{
		if (element == set->arr[i])
			return TRUE;	//같은게 있다
	}
	return FALSE;	//같은게 없다
	

}
// ======================================================================

int length(SET * set)
{

	return set->count;

}

// ======================================================================

SET *insert(SET * set, int element)
{
	//중복이 있으면 넣지 않는다.
	if (member(set, element) == FALSE)
	{
		set->arr[set->count] = element;
		set->count++;
	}
	return set;

}
// ======================================================================

SET *_delete(SET * set, int element)
{
	for (int i = 0; i < set->count; i++)
	{
		if (set->arr[i] == element)
		{
			for (int j=i;j<set->count-1;j++)
			{
				set->arr[j] = set->arr[j+ 1];
			}

			set->count--;
			return set;
		}
	}
	//return set;

}
// ======================================================================

SET *sunion(SET * set1, SET * set2)
{
	SET* set3 = create();//합집합 넣을 새로운 집합

	for (int i = 0; i < set1->count; i++)
		insert(set3, set1->arr[i]);
	for (int j = 0; j < set2->count; j++)
		insert(set3, set2->arr[j]);
	return set3;
}
// =====================================================================
SET *intersection(SET * set1, SET * set2)
{
	SET*set4 = create();//교집합 넣을 새로운 집합
	for (int i = 0; i < set1->count; i++)
	{
		for (int j = 0; j < set2->count; j++)
		{
			if (set1->arr[i] == set2->arr[j])
				insert(set4, set1->arr[i]);
		}
	}
	return set4;

}

// ======================================================================

SET *difference(SET * set1, SET * set2)
{
	SET*set5 = create();
	//print(set1); print(set2);
	//set1을 set5에 그대로 넣음
	for (int i = 0; i < set1->count; i++)
		insert(set5, set1->arr[i]);

	//set1와 set2가 같은 것이 있으면 제거함
	for (int j = 0; j < set2->count; j++)
		_delete(set5, set2->arr[j]);

	return set5;
}

// ======================================================================

void print(SET * set)
{
	printf("{ ");
	for (int i = 0; i < set->count-1; i++)
	{
		printf("%d, ", set->arr[i]);
	}
	printf("%d}\n",set->arr[set->count-1]);
}

// ======================================================================

int main(void)
{
	SET *s1, *s2, *s3, *s4, *s5, *s6;

	// s1
	s1 = create();
	s1 = insert(s1, -10);
	s1 = insert(s1, 30);
	s1 = insert(s1, -20);
	s1 = insert(s1, 5);
	s1 = insert(s1, -20);
	s1 = insert(s1, 90);
	s1 = insert(s1, -70);

	printf("s1=");
	print(s1);

	// s2
	s2 = create();
	s2 = insert(s2, 5);
	s2 = insert(s2, -15);
	s2 = insert(s2, -20);
	s2 = insert(s2, -50);
	s2 = insert(s2, 15);
	s2 = insert(s2, -70);
	s2 = insert(s2, 90);
	s2 = insert(s2, -3);
	printf("s2=");
	print(s2);

	// member
	if (member(s1, 30) == TRUE)
		printf("member(s1,30)=TRUE\n");
	else if (member(s1, 30) == FALSE)
		printf("member(s1,30)=FALSE\n");
	else
		printf("member(s1,30)=???\n");

	if (member(s2, 99) == TRUE)
		printf("member(s2,-90)=TRUE\n");
	else if (member(s2, 99) == FALSE)
		printf("member(s2,-90)=FALSE\n");
	else
		printf("member(s2,-90)=???\n");

	// length
	printf("length(s1)=%d\n", length(s1));
	printf("length(s2)=%d\n", length(s2));

	// s3 = s1 U s2
	s3 = sunion(s1, s2);
	printf("s1Us2=");
	print(s3);

	// s4 = s1 ^ s2
	s4 = intersection(s1, s2);
	printf("s1^s2=");
	print(s4);

	// s5 = s1 - s2
	s5 = difference(s1, s2);
	printf("s1-s2=");
	print(s5);

	// s6 = s2 - s1
	s6 = difference(s2, s1);
	printf("s2-s1=");
	print(s6);

	return EXIT_SUCCESS;
}

// ======================================================================
