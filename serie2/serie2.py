#EXERCICE1:
def EXERCICE1():
    trys = int(input("how much you want to try?: "))
    for i in range(trys):
        demande = int(input("Entrer un nombre entre 10 et 20: "))
        if demande == 0:
            raise ValueError("0 est incorrectible")
        if demande > 20:
            print("Plus grand")
        if demande < 20:
            print("Plus petit")

#EXERCICE2:
def ECERCICE2_v1():
    num = int(input("Entrer un nombre: "))

    for num in range(num,num+9):
        résultat = num + 1
        print(résultat)
#EXERCICE2-v2:
def ECERCICE2_v2():
    num = int(input("Entrer un nombre: "))

    counter = 1
    while counter <= 9:
        print(num + counter)
        counter += 1


#EXERCICE3
def EXERCICE3():
  n = int(input("how much you want to do this: "))
  list = []


  for i in range(n):
    variable = int(input("Enter a number: "))
    list.append(variable)


  list.sort()
  mex = list[-1]
  print(f"the max number is {mex}")

#EWERCICE4
def EXERCICE4():
    constante = 25
    trys = int(input("Entrer combien tu veux : "))
    for i in range(trys):
        guess =int(input("Entrer un nombre: "))
        if guess == constante:
            print("Bravo")
            break
        if guess > constante:
            print("Plus grand")
        if guess < constante :
            print("Plus Petit")

EXERCICE4()
