if __name__ == '__main__':
    larga_lista = [ [1, 4, 5, 6],
                    [34, -2, 35, 7],
                    [12, 31, 85, 36],
                    [0, 0, 'ajolotes', 'pistaches', 'lentes']
                  ]

    for i in range(len(larga_lista)):
        for j in range(len(larga_lista[i])):
            print("Pos ({}, {}): {}".format(i, j, larga_lista[i][j]))
