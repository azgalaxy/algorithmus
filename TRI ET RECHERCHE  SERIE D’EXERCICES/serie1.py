def Exercice1():
    T = [5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31]
    somme = 0
    n = 27

    for i in range(n):
        for j in range(i +1,n):
            if T[i] < T[j]:
                temp = T[i]
                T[i] = T[j]
                T[j] = temp


    for a in range(n):
        somme = somme+T[a]


    print(somme)

    print(T)

def exercice2():
    nombre = input("Entrer un nombre de 5 : ")
    N_s = list(nombre)

    for i in range(len(N_s)):
        for j in range(i+1,len(N_s)):
            if N_s[i] < N_s[j]:
                temp = N_s[i]
                N_s[i] = N_s[j]
                N_s[j] = temp

    nombre_sorted = ''.join(N_s)
    print("Le numéro est :", nombre_sorted)

def exercice4():
    n = int(input("Entrer la taille : "))
    T1 = []
    T2 = []

    for i in range(1, n + 1):
        caractere = input(f"Entrer un caractère dans le tableau (élément {i}/{n}): ")
        T1.append(caractere)

    for j in range(1, n + 1):
        T2.append("")

    for t in range(n):
        min_val = T1[0]
        indiceMin = 0

        for d in range(n):
            if ord(T1[d]) < ord(min_val):
                min_val = T1[d]
                indiceMin = d

        T1[indiceMin] = "a"

    for h in range(n):
        T2[h] = T1[h]

    for x in range(n):
        for y in range(n):
            if T2[x] < T2[y]:
                temp = T2[x]
                T2[x] = T2[y]
                T2[y] = temp

    print("Les éléments de T1 triés par ordre croissant :")
    for r in range(n):
        print(T1[r])

    print("Les éléments de T1 triés par ordre décroissant :")
    for u in range(n):
        print(T2[u])


def exercice5():
    N = int(input("Entrer la taille N (5<=N<=30): "))
    T = [0] * N
    V = [0] * N
    max_val = 0

    for i in range(N):
        T[i] = int(input(f"Entrer un entier dans le tableau T (élément {i+1}/{N}): "))

    for i in range(N):
        max_val = 0

        for j in range(N):
            if T[j] > max_val:
                max_val = T[j]

        V[i] = max_val

        for j in range(N):
            if T[j] == max_val:
                T[j] = -1

    print("Le tableau V trié par ordre décroissant est :")
    for i in range(N):
        print(V[i])



def exercice6():
    N = 20
    T = []
    M = []
    for i in range(0,N-1):
        t = str(input(f"Entrez le nom de l'eléve {i}: "))
        T.append(t)

    for j in range(0,N-1):
        m = int(input(f"Entrez le moyenne de l'eléve {j}: "))
        M.append(m)

    for a in range(0,N-1):
        for b in range(0,N-1):
            if (M[a] < M[b]) or (M[a] == M[b] and T[a] > T[b]):
                temp1 = M[a]
                M[a] = M[b]
                M[b] = temp1

                temp2 = T[a]
                T[a] = T[b]
                T[b] = temp2

    for c in range(0,N-1):
        print(f"les eleves : {T[c]} , le moyen {M[c]}")


def exercice8():
    N = 10
    M = 10
    T = []
    V = []
    W = []
    a, b, c = 0, 0, 0

    for i in range(N):
        t = int(input(f"Entrer les éléments du tableau T{i} : "))
        T.append(t)

    for j in range(M):
        v = int(input(f"Entrer les éléments du tableau V{j} : "))
        V.append(v)
    a, b, c = 0, 0, 0

    while a < N and b < M:
        if T[a] <= V[b]:
           W.append(T[a])
           a += 1
        else:
            W.append(V[b])
            b += 1
        c += 1

    while a < N:
        W.append(T[a])
        a += 1
        c += 1

    while b < M:
        W.append(V[b])
        b += 1
        c += 1
    print(T)
    print(V)
    print(W)


exercice8()


