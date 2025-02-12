def main():
    ced = int(input('Informe um numero: '))
    
    if (ced > 0) and (ced < 1000000):
        a = ced // 100
        ced = ced % 100

        b = ced // 50
        ced = ced % 50

        c = ced // 20
        ced = ced % 20

        d = ced // 10
        ced = ced % 10

        e = ced // 5
        ced = ced % 5

        f = ced// 2
        ced = ced % 2

        g = ced // 1

        print(f'''{ced}
            {a} nota(s) de R$100,00
            {b} nota(s) de R$50,00
            {c} nota(s) de R$20,00
            {d} nota(s) de R$10,00
            {e} nota(s) de R$5,00
            {f} nota(s) de R$2,00
            {g} nota(s) de R$1,00''')

main()