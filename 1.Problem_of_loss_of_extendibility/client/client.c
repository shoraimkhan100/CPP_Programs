#include <stdio.h>
#include "server.h"

	int main(void)
	{
		int ans;
		struct demo obj;

		scan(&obj);
		print(&obj);//use call by address because to avoid the waste memory...because it's need the call by value
		ans=addition(&obj);
		printf("Answer is %d",ans);
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
