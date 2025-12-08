nim = input("masukan nim: ")

# ubah string menjadi array digit
digit = [int(c)for c in nim]

#Total
total = 0
for d in digit:
    total += d

#Max 
maks = digit[0]
for d in digit:
    if d > maks :
        maks = d
    
#Min
minim = digit[0]
for d in digit:
    if d > minim:
        minim = d 

#rata
rata = total / len(digit)

#reverse array
rev = []
for i in range(len(digit)-1, -1, -1):
    rev.append(digit[i])

    print("digit        :", digit)
    print("total        =", total)
    print("maksimum     =",maks)
    print("minimum      =", minim)
    print("rata rata    =", rata)
    print("reverse array:", rev)