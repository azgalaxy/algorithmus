def Exercice():
        dec = False
        e = 0
        somme = 0
        t = []
        tp = []
        tn = []
        pos = -1
        pos2 = -1

    # TD4_1_1
        while e < 5:
            n = int(input("Entrer un nombre entre -30 et 30: "))
            if n > 30 or n < -30:
                raise ValueError("Il faut une valeur entre -30 et 30")
            t.append(n)
            e += 1

        for element in t:
            somme = somme + element

        if dec:
            print(somme)

    # TD4_1_2
        for d in range(5):
            if t[d] >= 0:  # Changed to include zero
                tp.append(t[d])
            else:
                tn.append(t[d])

        print(f"Tableau positif ou nul : {tp}")
        print(f"Tableau négatif : {tn}")

    # TD4_1_3
        for u in range(4):
            if tp[u] == 0:
                pos = u
                break

        print(f"La position du zéro est {pos}")

        for z in range(len(tp) - 1, -1, -1):
            if tp[z] == 0:
                pos2 = z
                break

        print(f"La dernière présence du zéro est à la position {pos2}")

        t.reverse()
        print(t)


Exercice()
