#EXERCICE 1
def Nombre_negatif_ou_postif_v1():
    num = int(input("Entrez Un nombre : "))

    if num > 0:
        print("Le nombre est négatif")
    elif num < 0:
        print("Le nombre est positif")

#EXERCICE 2
def Produit_negatif_ou_positif_v1():
    num1 = int(input("Entrer Un nombre: "))
    num2 = int(input("Entrer Un autre nombre:"))

	if (num1 > 0 ET num2 > 0) or (num1 < 0 ET num2 < 0):
		print("Le produit est postif")
	elif (num1 < 0 ET num2 > 0) or (num1 > 0 ET num2 < 0):
			Ecrire("Le produit est négatif")

#EXERCICE 3
def Nombre_negatif_ou_positif_v2():
    num = int(input("Entrer Un nombre:"))

	if num == 0:
		print("Le nombre 0 n'est ni négatif ni positif")
	elif num < 0:
        print("Le nombre est négatif")
    else    
        print("Le nombre est positif")
	FinSi   

#EXERCICE 4

def Produit_negatif_ou_positif_v2():
    num1 = int(input("Entrer Un nombre: "))
    num2 = int(input("Entrer Un autre nombre: "))

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






