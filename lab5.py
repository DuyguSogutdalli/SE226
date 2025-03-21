import random
import string

char_mapping = {}
selected_chars = set()

while len(selected_chars) < 5:
    char = input("Enter a lowercase character: ")
    if char in selected_chars or char not in string.ascii_lowercase:
        print("Invalid or duplicate character. Try again.")
        continue
    replacements = set()
    while len(replacements) < 3:
        replacement = input(f"Enter a replacement for '{char}': ")
        if len(replacement) != 1 or replacement in replacements:
            print("Invalid or duplicate replacement. Try again.")
            continue
        replacements.add(replacement)
    char_mapping[char] = list(replacements)
    selected_chars.add(char)

passwords = []
for _ in range(5):
    password = "".join(random.choices(string.ascii_lowercase, k=10))
    passwords.append(password)

categorized_passwords = {"strong": [], "weak": []}

for password in passwords:
    new_password = ""
    replaced_count = 0
    for char in password:
        if char in char_mapping:
            new_char = random.choice(char_mapping[char])
            new_password += new_char
            replaced_count += 1
        else:
            new_password += char
    if replaced_count > 4:
        categorized_passwords["strong"].append(new_password)
    else:
        categorized_passwords["weak"].append(new_password)

print("\nGenerated Passwords:")
print("\nSTRONG PASSWORDS:")
for pwd in categorized_passwords["strong"]:
    print(pwd)

print("\nWEAK PASSWORDS:")
for pwd in categorized_passwords["weak"]:
    print(pwd)
