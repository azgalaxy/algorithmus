def Sum(tableau, target):
    somme = tableau[0] + tableau[1] + tableau[2]
    min = somme - target

    for i in range(len(tableau) - 2):
        for j in range(i + 1, len(tableau) - 1):
            for k in range(j + 1, len(tableau) - 1):
                somme = tableau[i] + tableau[j] + tableau[k]
                diff = somme - target

                if diff == 0:
                    return somme
                if (diff > 0 and diff < min) or (diff < 0 and -diff < min):
                    min = diff
                    somme = tableau[i] + tableau[j] + tableau[k]
    return somme


def main1():
    nums = []
    while True:
        s = int(input("Entrez l'element: "))
        if 3 <= s <= 500:
            break
    while True:
        for i in range(s):
            temp = int(input(f"Entrez l'element {i}: "))
            nums.append(temp)
        if -1000 <= temp <= 1000:
            break
    while True:
        target = int(input(f"Entrez le Target: "))
        if -(10**4) <= target <= 10**4:
            break

    print(Sum(nums, target))


def index(tableau, target, s):
    found = False
    for i in range(s):
        if tableau[i] == target:
            print(i)
            found = True
    if found == False:
        print("-1,-1")


def main2():
    nums = []
    while True:
        s = int(input("Entrez la taille: "))
        if 1 <= s <= 5000:
            break
    while True:
        for i in range(s):
            temp = int(input(f"Entrez l'element {i}: "))
            nums.append(temp)
        if -(10**4) <= temp <= 10**4:
            break
    while True:
        target = int(input("Entrez le Target: "))
        if -(10**4) <= target <= 10**4:
            break
    index(nums, target, s)


def main3():
    phrase = str(input("Entrez la phrase: "))
    mot = ""
    space = " "
    mot1 = phrase[phrase[0]: space]
    mot2 = phrase[mot1:space]
    mot3 = phrase[mot2:space]
    mot4 = phrase[mot3:space]
    mot5 = phrase[mot4, phrase[len(phrase)]]

    mot = mot5 + mot4 + mot3 + mot2 + mot1

    print(mot)


def main3_1():
    def main3():
    phrase = input("Entrez la phrase : ")
    mots = phrase.split()

    reversed_phrase = ' '.join(mots[::-1])

    print("Phrase inversée :", reversed_phrase)

main3()
