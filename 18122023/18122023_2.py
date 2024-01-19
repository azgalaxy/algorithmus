def fill_1(T, a):
    for i in range(a):
        T.append(int(input(f"Entrez l'element {i}: ")))
    return T


def fill_2(T, b):
    for z in range(b):
        T.append(int(input(f"Entrez l'element {z}: ")))
    return T


def main():
    T1 = []
    T2 = []
    a = int(input("Entrez la taille a: "))
    b = int(input("Entrez la taille b: "))


    fill_1(T1,a)
    fill_2(T2,b)

    pos = int(input("Entrez la position: "))

    for i in range(len(T2)):
        if T1[pos] % T2[i] == 0:
            print(T2[i])

main()
