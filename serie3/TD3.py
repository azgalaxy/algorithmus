#EXERCICE1
def monais():
     money = int(input("Entrer le monais"))

     rest = money // 100


     b100=  money // 100
     rest  %= 100
     b50 = rest // 50
     rest  %= 50
     b10 = rest // 10
     rest  %= 10
     b5 = rest // 5
     rest %= 5
     p2 = rest // 2
     rest %= 2
     p1 = rest//1
     rest %= 1



     print("La monnaie de n en billets de 100, de 50, de 10, de 5 dinars, ainsi qu'en pièces de 2 et 1 dinars : ",
	       b100, b50, b10, b5, p2, p1)








#EXERCICE2
def EXERCICE2():
    nombre = int(input("Entrer un nombre entre 0 et 365: "))
    months_days = [31,28,31,30,31,30,31,31,30,31,30,31]
    month_names = ["Janvier","février","mars","avril","mai","juin","juillet","août","septembre","octobre","novembre","décembre"]

    days = nombre
    i = 0

    while(days > months_days[i]):
          days = days - months_days[i]
          i += 1

    print("Mois/Jour",month_names[i],days)

monais()