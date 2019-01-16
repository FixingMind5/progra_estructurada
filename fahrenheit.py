def _from_fahrenheit(fahrenheit):
    celcius = (((fahrenheit - 32) * 5) / 9)
    return celcius


if __name__ == '__main__':
    fahrenheit = float(input("Hey!, pasame tus grados fahrenheit --> "))
    celcius = _from_fahrenheit(fahrenheit)
    print(celcius)
