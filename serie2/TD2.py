#EXERCICE1:
def EXERCICE1():
    while nombre < 10 and nombre >20:
        nombre = int(input("Entrez un nombre entre 10 et 20: "))

        if(nombre<10):
            print("Plus grand!")
        if (nombre >20):
            print("Plus petit!")


#EXERCICE2:
def ECERCICE2_v1():
    num = int(input("Entrer un nombre: "))

    for compteur in range(10):
        print(compteur + num)
#EXERCICE2-v2:
def ECERCICE2_v2():
    num = int(input("Entrer un nombre: "))

    compteur = 1
    while compteur <= 8:
        compteur += 1
        print(num + compteur)


#EXERCICE3
def EXERCICE3():
    for compteur in range(1,20):
        nombre = int(input("Entrez un nombre: "))

        if nombre > maximum :
            maximum  = nombre
#EWERCICE4
def EXERCICE4():
    nombre_à_devinir = 25
    for tentatives in range(1,5):
        nombre_propsé = int(input("Proposser un nombre: "))

        if nombre_propsé == nombre_à_devinir:
            print("Bravo,nombre deviné")
        else:
            if nombre_propsé < nombre_à_devinir:
                print("Plus grand !")
            else:
                if nombre_propsé > nombre_à_devinir:
                    print("Plus Petit")
EXERCICE4()
