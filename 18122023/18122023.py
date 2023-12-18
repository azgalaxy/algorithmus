def Saisie(a, b, td, te):
    for i in range(a):
        td.append(int(input(f"Ecrire l'element de td {i}: ")))
    for j in range(b):
        te.append(int(input(f"Ecrire l'element de te {j}: ")))


def main():
    te = []
    td = []
    indice = []

    while True:
        a = int(input("Entrez la taille a: "))
        if 3 <= a <= 20:
            break
    while True:
        b = int(input("Entrez la taille b: "))
        if 5 <= b <= 20:
            break

    Saisie(a, b, td, te)
    u = 0


    i, j = 0, 0

    while i < len(td) and j < len(te):
        if td[i] == te[j]:
         i += 1
        j += 1

    if i == len(td):
        print("td is a subarray of te")
    else:
        print("td is not a subarray of te")

main()
