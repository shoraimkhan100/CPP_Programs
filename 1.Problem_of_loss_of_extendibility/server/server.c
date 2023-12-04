#include <stdio.h>
#include "server.h"

	void scan(struct demo *pObj)
	{
		printf("Enter The First Number : ");
		scanf("%d",&pObj->no1);
		printf("Enter The Second Number : ");
		scanf("%d",&pObj->no2);
	}
	void print(const struct demo *pObj)
	{
		printf("First Value is %d : ",pObj->no1);
		printf("Second Value is %d : ",pObj->no2);
	}
	int addition(const struct demo *pObj)
	{
		return pObj->no1 + pObj->no2;
	}
	
	
	
	
	
	
	
	
	
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

