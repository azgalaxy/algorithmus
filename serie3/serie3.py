#EXERCICE1
def monais():
     money = int(input("Entrer le monais"))

     rest = money // 100


     rest1=  money // 100
     rest  %= 100
     rest2 = rest // 50
     rest  %= 50
     rest3 = rest // 10
     rest  %= 10
     rest4 = rest // 5
     rest %= 5
     rest5 = rest // 2
     rest %= 2
     rest6 = rest//1
     rest %= 1



     print(f"div1 :{rest1},div2:{rest2},div3:{rest3},div4:{rest4},div5:{rest5}  ,div6:{rest6}  ")









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