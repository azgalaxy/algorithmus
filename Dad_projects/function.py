from settings import Settings
class Convert():
    #Decimal to Binary
  def convert_decimal_binary(N):
        num = int(N)
        quotient = num
        remainder = ""
        while not  quotient == 0:
            B = quotient // 2
            rest = quotient % 2
            remainder += str(rest)
            quotient = B
        remainder = remainder[::-1]

        return remainder
   #Binary to octal
  def binary_to_octal(binary):
      b_str   = str(binary)
      binary = b_str[::-1]

      decimal = 0
      octal = ""

      for i, bit in enumerate(binary):
        digit = int(bit)

        decimal += digit * (2 ** i)


      while decimal > 0:
        remainder = decimal % 8
        octal = str(remainder) + octal
        decimal //= 8

      return octal

  def decimal_to_hex(decimal_num):
   num = int(decimal_num)
   hex_digits = "0123456789ABCDEF"
   hex_string = ""

   while num > 0:
     remainder = num % 16
     hex_string = hex_digits[remainder] + hex_string
     num //= 16

   return hex_string.upper()

  def octal_to_hex(octal_number):
        oct_str = str(octal_number)
        decimal = 0
        for i, digit in enumerate((oct_str[::-1])):
          digit_value = int(digit)
          decimal += digit_value * (8 ** i)

        hex_map = {10: 'A', 11: 'B', 12: 'C', 13: 'D', 14: 'E', 15: 'F'}
        hex_number = ""
        while decimal > 0:
          remainder = decimal % 16
          if remainder > 9:
            hex_number = hex_map[remainder] + hex_number
          else:
            hex_number = str(remainder) + hex_number
          decimal //= 16

        return hex_number



    #Binary to Decimal
  def connvert_binary_decimal(N):
        num = str(N)
        decimal = 0
        for i in range(len(num) - 1, -1, -1):
          power = len(num) - 1 - i
          decimal += int(num[i]) * 2**power

        return decimal

    #Decimal to Octal
  def convert_decimal_octal(N):
        num = int(N)
        quotient = num
        remainder = ""
        while not quotient == 0:
            B = quotient // 8
            rest = quotient % 8
            remainder += str(rest)
            quotient = B
        remainder = remainder[::-1]

        return  str(remainder)

    #octal to decimal
  def convert_octal_decimal(N):
        num = str(N)
        decimal = 0
        for i in range(len(num) - 1, -1, -1):
          power = len(num) - 1 - i
          decimal += int(num[i]) * 8**power
        return str(decimal)


     # hexadecimal to binary
  def convert_hex_binary(N):
        bin_num = ""
        hex_digits = "0123456789ABCDEF"

        for digit in N.upper():
            if digit in hex_digits:
                bin_val = format(hex_digits.index(digit), '04b')
                bin_num += bin_val
            else:
                continue

        return bin_num
     # hexadecimal to octal
  def hex_to_octal(hex_number):

    decimal = int(hex_number, 16)

    octal = ""
    while decimal > 0:
      remainder = decimal % 8
      octal = str(remainder) + octal
      decimal //= 8

    return octal


  def octal_to_binary(octal_num):

   if not all(char in "01234567" for char in octal_num):
      return None

   decimal_value = int(octal_num, 8)

   binary_string = bin(decimal_value)[2:]

   return binary_string


  def convert_bin_hex(N):

        n_str = str(N)
        hex_digits = "0123456789ABCDEF"
        hex_num = ""


        if len(n_str) % 4 != 0:
            n_str = n_str.zfill(len(n_str) + 4 - len(n_str) % 4)

        for i in range(0, len(n_str), 4):
            n = n_str[i:i+4]

            decimal_val = 0
            for j in range(len(n)):
                decimal_val += int(n[j]) * (2 ** (3 - j))

            hex_val = hex_digits[int(decimal_val)]
            hex_num += hex_val

        return hex_num


  def hex_to_decimal(hex_number):
        hex_number = hex_number.upper().strip()
        hex_digits = {
            "0": 0, "1": 1, "2": 2, "3": 3, "4": 4, "5": 5, "6": 6, "7": 7,
            "8": 8, "9": 9, "A": 10, "B": 11, "C": 12, "D": 13, "E": 14, "F": 15
        }
        decimal = 0
        for i, digit in enumerate(hex_number[::-1]):
          decimal_value = hex_digits[digit]
          decimal += decimal_value * (16 ** i)

        return decimal
def main():
  print("--------------------------------------------")
  print(">>> Welcome to Number System Converter <<<")
  print("--------------------------------------------")
  print(">> Select Conversion Type:  ")
  print("  1. Binary Conversion ")
  print("  2. Decimal Conversion")
  print("  3. Octal Conversion")
  print("  4. Hexadecimal Conversion")
  print("  4. Leave the program")

  n = int(input(""))

  if n == 1:
    while True:
      b = int(input("Entrez Le Nombre Binary: "))
      if Settings.isbinary(b):
        break
      else:
        print("Not binary")
    print(Convert.convert_bin_hex(b))
  elif n == 2:
    while True:
      d = int(input("Entrez Le Nombre decimal: "))
      if not(Settings.isbinary(d)):
        break
      else:
        print("Not decimal")
    print(Convert.convert_decimal_binary(d))
  elif n== 3:
    while True:
      o = int(input("Entrez Le Nombre octal: "))
      if (Settings.isoctal(o)):
        break
      else:
        print("Not octal")
    print(Convert.convert_octal_decimal(o))
  elif n == 4:
    while True:
      h = str(input("Entrez Le Nombre hexadecimal: "))
      if (Settings.ishexa(h)):
        break
      else:
        print("Not hexadecimal")
    print(Convert.convert_hex_binary(h))
  elif n == 5:
    print("left the program")
    exit()


#print(Convert.decimal_to_hex("7000"))

