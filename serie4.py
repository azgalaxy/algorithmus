def Multipler_matrice(a, b, n, m, p):
   c= []
   for i in range(n):
    f = []
    for j in range(p):
        temp = 0
        for k in range(m):
            temp += a[i][k] * b[k][j]
        f.append(temp)
    c.append(f)
    return c


def main():
    n = int(input("Entrer N: "))
    m = int(input("Entrer M: "))
    p = int(input("Entrer P: "))
    a = []
    b = []


    for i in range(n):
       row = []
       for j in range(m):
           temp = int(input("Enter element: "))
           row.append(temp)
       a.append(row)


    for j in range(n):
      col = []
      for k in range(m):
         temp2 = int(input("Enter element: "))
         col.append(temp)
      b.append(col)

    c = Multipler_matrice(a, b, n, m, p)

    #for h in c:
       #for g  in row:
        #   print(element, end=" ")
    print(c)


main()
