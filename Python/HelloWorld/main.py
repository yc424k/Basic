from random import *
import sys
import time


def merge(p, q, r, A=[]):
    i = p
    j = q + 1
    k = p
    tmp = []

    while i <= q & j <= r:
        if A[i] <= A[j]:
            tmp.append(A[i])
            i += 1
        else:
            tmp.append(A[j])
            j += 1
    while i <= q:
        tmp.append(A[i])
        i += 1
    while j <= r:
        tmp.append(A[j])
        j += 1
    for p in r:
        A[r] = tmp[p]

    return tmp


def mergeSort(p, r, A =[]):
    if p < r:
        q = (p+r)/2
        mergeSort(p, q, A)
        mergeSort(q+1, r, A)
        merge(p, q, r, A)


mergeInput = []
quickInput = []

print("Merge Sort:")
for i in range(0,10):
    mergeInput.append(randint(0,100))

print(mergeInput)

mergeSort(0,9,mergeInput)

print(mergeInput)

i = randint(0, sys.maxsize)
print(i)

start = time.time()
end = time.time()
print(end-start)
