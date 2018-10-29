res = []
ans = []

def f(n,k):
    if(n == 0 and k == 0):
        ans.append(res)
    elif(n < 0 or k < 0):
        return;
    for i in range(1,n):
    	res.append(i);
    	f(n-i, k-1);
        res.remove(i)
;
f(5,2)
print(ans)	