def roundRobin(process, n, quantum):
    res = [0]*n
    final = [0]*n
    pend = n
    burst = process.copy()
    i = 0
    cur = 0
    while pend > 0:
        
        if process[i] > 0:
            cur += quantum  
            process[i] -= quantum
            if process[i] <= 0:
                cur += process[i]
                final[i] = cur
                pend -= 1
        i = (i+1)%n
    for i in range(n):
        res[i] = final[i]-burst[i]

    return res      



print(roundRobin([5,4,3], 3, 2))