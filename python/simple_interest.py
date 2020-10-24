# Python3 program to find simple interest 
# for given principal amount, time and 
# rate of interest. 


def simple_interest(p,t,r): 
	print('The principal is ', p) 
	print('The time period is ', t) 
	print('The rate of interest is ',r) 
	
	return (p * t * r)/100

# Driver code 
print('The simple interest is ', simple_interest(8, 6, 8))
