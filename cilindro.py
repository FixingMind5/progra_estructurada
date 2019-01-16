def _volumen_cilindro(radio, altura, PI):
    volumen = PI * (radio ** 2) * altura
    return volumen


def _area_cilindro(altura, radio, PI):
    area = (2 * PI * radio) * (altura + radio)
    return area


if __name__ == '__main__':
    PI = 3.14159
    area = _area_cilindro(13.4, 21.6, PI)
    volumen = _volumen_cilindro(21.6, 13.4, PI)
    print("El area es {area}".format(area=area))
    print("El volumen es {}".format(volumen))
