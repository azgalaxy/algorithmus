class Settings():
    def ishexa(N):
        n = str(N).upper()
        valid_hex_digits = set("0123456789ABCDEF")
        for char in n:
         if char not in valid_hex_digits:
            return False
        return True

    def isbinary(N):
        n = str(N)
        conteur = 0
        for i in range(len(str(N))):
            if n[i] == "1" or n[i] =="0":
                conteur += 1

        if conteur == len(n):
            return True
        else:
            return False

    def isoctal(N):
        conteur = 0
        n = str(N)
        for i in range(len(n)):
            if n[i].upper() in ["1","2","3","4","5","6","7"]:
                conteur += 1

        if conteur == len(n):
            return True
        else:
            return False








