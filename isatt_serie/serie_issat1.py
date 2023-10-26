def Exercice1():
    n1 = float(input("Entrez la première note!: "))
    n2 = float(input("Entrez la deuxième note!: "))
    n3 = float(input("Entrez la troisième note!: "))
    moyen = 0
    np1 = False
    np2 = False
    np3 = False

    if n1 >= 9:
        np1 = True
    else:
        np1 = False

    if n2 >= 9:
        np2 = True
    else:
        np2 = False

    if n3 >= 9:
        np3 = True
    else:
        np3 = False

    if np1 == True and np2 ==True and np3== True:
        print("Admis")


        moyen = n1 + n2 + n3

        if n1 == 8 or n2 == 8 or n3 == 8:
            if moyen >= 10:
                print("Admis")
            else:
                print("non admis")


def Exercice2():
    su = float(input("Le prix unitaire d'une heure : "))
    sd = float(input("Donner la salaire : "))

    s = 39 * su
    s1 = s + (s * 50 / 100)
    s2 = s + (s * 75 / 100)
    s3 = s * 2
    if s1 <= sd < s2:
        print("il a travaillé entre 40 heures et 44 heures")
    elif s2 <= sd < s3:
        print("il a travaillé entre 45 heures et 49 heures")
    elif sd >= s3:
        print("il a travaillé 50 heures ou plus")
    else:
        print("Il travaille exactement !")



def Exercice3():
        day = int(input("Entrez le jour : "))
        month = int(input("Entrez le mois : "))
        year = int(input("Entrez l'année : "))

        mois = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

        day += 1

        if day > mois[month - 1]:
            day = 1
            month += 1

        if month > 12:
            month = 1
            year += 1

        print("Jour :", day, "Mois :", month, "Année :", year)



def Exercice3():
    car = input("Entrer un caractére: ")

    if car.isalpha():
        print("Le caractère est une lettre.")
    elif car.isdigit():
        print("Le caractère est un chiffre.")
    else:
        print(":(")




def Exercice6():
    n1 = int(input("n1: "))
    n2 = int(input("n2: "))
    n3 = int(input("n3: "))


    maxx = n1
    minn = n1

    if (n2 < minn):
        minn = n2

    if (n3 < minn):
        minn = n3

    if (n2 > maxx):
        maxx = n2

    if (n3 > maxx):
        maxx = n3


    print(maxx)
    print(minn)


def Exercice8():
    x = int(input("Entrez x: "))
    y = int(input("Entrez y: "))

    x_x = x*x
    x_2_y = x*2*y
    y_y= y*y


    z = x_x + x_2_y + y_y


    print(f"(x+y)² = {z}")



def Exercice9():
    x = int(input("Entrez x: "))
    binary = ""

    while (x > 0):
        rest = x %2
        x = x // 2
        binary = str(rest) + binary


    print(binary)

Exercice9()
