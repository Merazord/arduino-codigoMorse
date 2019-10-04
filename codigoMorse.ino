int pin = 2;
int corto = 200;
int largo = 600;

void setup()
{
    pinMode(pin, OUTPUT);
}

void pulsoLargo()
{
    digitalWrite(pin, HIGH);
    delay(largo);
    digitalWrite(pin, LOW);
    delay(corto);
}

void pulsoCorto()
{
    digitalWrite(pin, HIGH);
    delay(corto);
    digitalWrite(pin, LOW);
    delay(corto);
}

void pulsoFinal()
{
    digitalWrite(pin, LOW);
    delay(corto * 2);
}

void pulsoEspacio()
{
    digitalWrite(pin, LOW);
    delay(largo * 3);
}

void morse(char letra)
{
    switch (letra)
    {
    case 'a':
        pulsoCorto();
        pulsoLargo();
        break;

    case 'b':
        pulsoLargo();
        pulsoCorto();
        pulsoCorto();
        pulsoCorto();
        break;

    case 'c':
        pulsoLargo();
        pulsoCorto();
        pulsoLargo();
        pulsoCorto();
        break;

    case 'd':
        pulsoLargo();
        pulsoCorto();
        pulsoCorto();
        break;

    case 'e':
        pulsoCorto();
        break;

    case 'f':
        pulsoCorto();
        pulsoCorto();
        pulsoLargo();
        pulsoCorto();
        break;

    case 'g':
        pulsoLargo();
        pulsoLargo();
        pulsoCorto();
        break;

    case 'h':
        pulsoCorto();
        pulsoCorto();
        pulsoCorto();
        pulsoCorto();
        break;

    case 'i':
        pulsoCorto();
        pulsoCorto();
        break;

    case 'j':
        pulsoCorto();
        pulsoLargo();
        pulsoLargo();
        pulsoLargo();
        break;

    case 'k':
        pulsoLargo();
        pulsoCorto();
        pulsoLargo();
        break;

    case 'l':
        pulsoCorto();
        pulsoLargo();
        pulsoCorto();
        pulsoCorto();
        break;

    case 'm':
        pulsoLargo();
        pulsoLargo();
        break;

    case 'n':
        pulsoLargo();
        pulsoCorto();
        break;

    case 'o':
        pulsoLargo();
        pulsoLargo();
        pulsoLargo();
        break;

    case 'p':
        pulsoCorto();
        pulsoLargo();
        pulsoLargo();
        pulsoCorto();
        break;

    case 'q':
        pulsoLargo();
        pulsoLargo();
        pulsoCorto();
        pulsoLargo();
        break;

    case 'r':
        pulsoCorto();
        pulsoLargo();
        pulsoCorto();
        break;

    case 's':
        pulsoCorto();
        pulsoCorto();
        pulsoCorto();
        break;

    case 't':
        pulsoLargo();
        break;

    case 'u':
        pulsoCorto();
        pulsoCorto();
        pulsoLargo();
        break;

    case 'v':
        pulsoCorto();
        pulsoCorto();
        pulsoCorto();
        pulsoLargo();
        break;

    case 'w':
        pulsoCorto();
        pulsoLargo();
        pulsoLargo();
        break;

    case 'x':
        pulsoLargo();
        pulsoCorto();
        pulsoCorto();
        pulsoLargo();
        break;

    case 'y':
        pulsoLargo();
        pulsoCorto();
        pulsoLargo();
        pulsoLargo();
        break;

    case 'z':
        pulsoLargo();
        pulsoLargo();
        pulsoCorto();
        pulsoCorto();
        break;

    case ' ':
        pulsoEspacio();
        break;

    case '0':
        pulsoLargo();
        pulsoLargo();
        pulsoLargo();
        pulsoLargo();
        pulsoLargo();

    case '1':
        pulsoCorto();
        pulsoLargo();
        pulsoLargo();
        pulsoLargo();
        pulsoLargo();

    case '2':
        pulsoCorto();
        pulsoCorto();
        pulsoLargo();
        pulsoLargo();
        pulsoLargo();

    case '3':
        pulsoCorto();
        pulsoCorto();
        pulsoCorto();
        pulsoLargo();
        pulsoLargo();

    case '4':
        pulsoCorto();
        pulsoCorto();
        pulsoCorto();
        pulsoCorto();
        pulsoLargo();

    case '5':
        pulsoCorto();
        pulsoCorto();
        pulsoCorto();
        pulsoCorto();
        pulsoCorto();

    case '6':
        pulsoLargo();
        pulsoCorto();
        pulsoCorto();
        pulsoCorto();
        pulsoCorto();

    case '7':
        pulsoLargo();
        pulsoLargo();
        pulsoCorto();
        pulsoCorto();
        pulsoCorto();

    case '8':
        pulsoLargo();
        pulsoLargo();
        pulsoLargo();
        pulsoCorto();
        pulsoCorto();

    case '9':
        pulsoLargo();
        pulsoLargo();
        pulsoLargo();
        pulsoLargo();
        pulsoCorto();
    }
}

void loop()
{
    char palabra[] = "hola mundo";
    int contador = strlen(palabra);
    char letra;
    for (int i = 0; i <= contador; i++)
    {
        letra = palabra[i];
        morse(letra);
        if (i != contador)
            pulsoFinal();
    }
    pulsoEspacio();
}
