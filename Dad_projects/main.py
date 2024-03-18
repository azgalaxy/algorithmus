from function import Convert
from settings import Settings

file = open("tests.txt", "r")
result = open("results.txt", "w")

for words in file.readlines():
    if not (Settings.ishexa(words.strip())):
        result.write(f"{str(words):<2} {Convert.convert_hex_binary(words):<2} {Convert.hex_to_octal((words)):<2} {Convert.hex_to_decimal(str(words)):<2} \n")
    elif   (Settings.isbinary(int(words.strip()))):
       result.write(
            f"{str(words):<2} {Convert.connvert_binary_decimal(str(words).strip()):<2} {Convert.binary_to_octal((str(words).strip())):<2} {Convert.convert_bin_hex(str(words.strip())):<2} \n")
    elif (Settings.isoctal(int(words.strip()))):
        result.write(
           f"{str(words):<2} {Convert.octal_to_binary(str(words).strip()):<2} {Convert.convert_octal_decimal((str(words).strip())):<2} {Convert.octal_to_hex(str(words.strip())):<2} \n")
    else:
        result.write(
            f"{str(words):<2} {Convert.convert_decimal_binary(str(words).strip()):<2} {Convert.convert_decimal_octal((str(words).strip())):<2} {Convert.decimal_to_hex(str(words.strip())):<2} \n")





result.close()

result = open("results.txt", "r")

print(result.read())
