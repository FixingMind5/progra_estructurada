if __name__ == '__main__':
    print("Bienvenido a adivina el numero\n")
    print("Adivina el numero escondido")
    numero_escondido = 5
    numero_usuario = int(input("Ingresa aqui el valor que supones -> "))
    if numero_usuario == numero_escondido:
        print("GANASTE!!!\n")
    elif numero_usuario != numero_escondido:
        print("PERDISTE :C\n")
    else:
        print("No me preguntes a mi, o se que paso\n")
