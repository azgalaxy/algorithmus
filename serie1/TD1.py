#EXERCICE 1
def EXERCICE1():
    num = int(input("Entrer Un nombre alétoire: "))

    if (num > 0):
        print("Cette nombre est postif")
    else:
        if num < 0:
            print(("Cette nombre est négatif"))

#EXERCICE 2
def EXERCICE2():
    num1 = int(input("Entrez un nombre: "))
    num2 = int(input("Entrez un nombre: "))

    if (num1 >0 and num2 >0) or (num1 < 0 and num2 < 0):
          print("Le produit est positif")
    else:
        if (num1 < 0 and num2 >0) or (num1 > 0 and num2 < 0):
            print("Le produit est négatif")
#EXERCICE 3
def EXERCICE3():
    num = int(input("Entrer Un nombre alétoire:"))

    if (num == 0):
       raise ValueError("Le nombre 0 n'est ni négatif ni positif")
    elif (num < 0):
        print("Cette nombre est négatif")
    elif (num >0):
        print("Cette nombre est positif")


#EXERCICE 4

def EXERCICE4():
   num1 = int(input("Entrez un nombre: "))
   num2 = int(input("Entrez un autre nombre: "))

   if num1 == 0 or num2 == 0:
       if num1 == 0 or num2 == 0:
           print("Le produit est 0")
   else:
           if (num1>0 and num2 > 0) or (num1 < 0 and num2<0):
            print("Le produit est positif")
           else:
               print("Le produit est négatif")


#EXERCICE 5
def EXERCICE5():
    age = int(input("Entez l'age d'un enfant: "))

    if age >= 6 and age <=7:
        print("La catégorie de l'enfant est Poussin")
    else:
        if age >= 8 and age <= 9:
            print("La catégorie de l'enfant est Pupille")
        else:
            if age >=10 and age <= 11:
                print("La catégorie de l'enfant est Pupille")
            else:
                print("La catégorie de l'enfant est Cadet")
EXERCICE5()






