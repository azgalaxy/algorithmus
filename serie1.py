#EXERCICE 1
def EXERCICE1():
    num = int(input("Entrer Un nombre alétoire: "))

    if (num > 0):
        print("Cette nombre est postif")
    else:
        print(("Cette nombre est négatif"))

#EXERCICE 2
def EXERCICE2():
    num1 = int(input("Entrer Un nombre alétoire: "))
    num2 = int(input("Entrer Un autre nombre alétoire:"))

    if (num1 <0 ):
        ps1 = False
    else:
        ps1 = True

    if (num2 < 0):
        ps2 = False
    else:
        ps2 = True

    if ps1 == True and ps2 == True:
        print("Le nombre est positif")
    elif ps1 == True and ps2 == False:
        print("Le nombre est négatif")
    elif ps2 == True and ps1 == False:
        print("Le nombre est négatif")
    elif ps2 == False and ps1 == False:
        print("Le nombre est positif")



#EXERCICE 3
def EXERCICE3():
    num = int(input("Entrer Un nombre alétoire:"))

    if (num == 0):
       raise ValueError("0 est incorrectible")
    elif (num < 0):
        print("Cette nombre est négatif")
    elif (num >0):
        print("Cette nombre est positif")


#EXERCICE 4

def EXERCICE4():
    num1 = int(input("Entrer Un nombre alétoire: "))
    num2 = int(input("Entrer Un autre nombre alétoire:"))

    if (num1 <0 ):
        ps1 = False
    else:
        ps1 = True

    if (num2 < 0):
        ps2 = False
    else:
        ps2 = True

    if (num1 == 0 ):
        raise ValueError("0 est incorrectible")
    elif (num2 ==0 ):
        raise ValueError("0 est incorrectible")
    elif ps1 == True and ps2 == True:
        print("Le nombre est positif")
    elif ps1 == True and ps2 == False:
        print("Le nombre est négatif")
    elif ps2 == True and ps1 == False:
        print("Le nombre est négatif")
    elif ps2 == False and ps1 == False:
        print("Le nombre est positif")


#EXERCICE 5
def EXERCICE5():
    age = int(input("Entrer Ton Age: "))




    if age in [6,7]:
        print("Poussin")

    if age in [8,9]:
        print("Pupille")
    if age in [10,11]:
        print("Minime")

    if age in [12,]:
        print("Cadet")

    if age == 0:
       exit()






