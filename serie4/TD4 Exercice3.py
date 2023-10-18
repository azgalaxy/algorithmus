def EXERCICE2():
    conteur = 0
    tm = []
    for i in range(0,29):
        co = str(input("Entrer un charactére: "))
        conteur += 1
        tm.append(co)
        if tm[i] == 'z':
            break

    print(f"Les nombres de lettres est :{conteur}")


    a= 0
    b=0
    c=0
    d=0
    e=0
    f=0
    g=0
    h=0
    l=0
    m=0
    n=0
    o=0
    p=0
    q=0
    r=0
    t=0
    u=0
    v=0
    w=0
    x=0
    y =0


    for i in range(len(tm)):
        if tm[i]=='a':
            a += 1
        if tm[i]=='b':
            b += 1
        if tm[i]=='c':
            c += 1
        if tm[i]=='d':
            d += 1
        if tm[i]=='e':
            e += 1
        if tm[i]=='f':
            f += 1
        if tm[i]=='g':
            g += 1
        if tm[i]=='h':
            h += 1
        if tm[i]=='i':
            i += 1
        if tm[i]=='j':
            j += 1
        if tm[i]=='k':
            k += 1
        if tm[i]=='l':
            l += 1
        if tm[i]=='m':
            m += 1
        if tm[i]=='n':
            n += 1
        if tm[i]=='o':
            o += 1
        if tm[i]=='p':
            p += 1
        if tm[i]=='q':
            q += 1
        if tm[i]=='r':
            r += 1
        if tm[i]=='s':
            s += 1
        if tm[i]=='t':
            t += 1
        if tm[i]=='u':
            u += 1
        if tm[i]=='v':
            v += 1
        if tm[i]=='w':
            w += 1
        if tm[i]=='x':
            x += 1
        if tm[i]=='y':
            y += 1



    print(f"a:{a}, b:{b}, c:{c}, d:{d}, e:{e}, f:{f}, g:{g}, h:{h}, l:{l}, m:{m}, n:{n}, o:{o}, p:{p}, q:{q}, r:{r}, t:{t}, u:{u}, v:{v}, w:{w}, x:{x}, y:{y}")


EXERCICE2()


