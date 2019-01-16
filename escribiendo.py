import csv

some_students = [{
                    'first_name': 'Manuel',
                    'last_name': 'Aguilar',
                    'age': 18
                },
                 {
                    'first_name': 'Ricardo',
                    'last_name': 'Aguilar',
                    'age': 14
                }]

STUDENTS_SCHEMA = ['first_name', 'last_name', 'age']


def _save_students():
    with open("students.csv", mode="w+") as f:
        writer = csv.DictWriter(f, fieldnames = STUDENTS_SCHEMA)
        for row in some_students:
            writer.writerow(row)


def _read_students():
    with open("students.csv", mode="r") as f:
        reader = csv.DictReader(f, fieldnames = STUDENTS_SCHEMA)

        print(reader)


if __name__ == '__main__':
    _save_students()
    _read_students()
