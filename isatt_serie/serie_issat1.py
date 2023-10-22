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

    day += 1

    max_days = 0

    if month in [1, 3, 5, 7, 8, 10, 12]:
        max_days = 31
    elif month == 2:
        if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
            max_days = 29
        else:
            max_days = 28
    else:
        max_days = 30

    if day > max_days:
        day = 1
        month += 1

    if month > 12:
        month = 1
        year += 1

    print("Jour : ", day, " Mois : ", month, " Année : ", year)



Exercice3()