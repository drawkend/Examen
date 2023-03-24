#include <stdio.h>

float celsius2fahrenheit(float celsius) {
    return (9.0/5.0) * celsius + 32.0;
}

float fahrenheit2celsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0/9.0;
}

int main() {
    int choix;
    float temperature, resultat;
    
    printf("Souhaitez-vous convertir de Celsius en Fahrenheit (tapez 1) ou l'inverse (tapez 2) ? ");
    scanf("%d", &choix);
    
    if (choix == 1) {
        printf("Entrez une température en Celsius : ");
        scanf("%f", &temperature);
        resultat = celsius2fahrenheit(temperature);
        printf("%.2f°C correspond à %.2f°F.\n", temperature, resultat);
    } else if (choix == 2) {
        printf("Entrez une température en Fahrenheit : ");
        scanf("%f", &temperature);
        resultat = fahrenheit2celsius(temperature);
        printf("%.2f°F correspond à %.2f°C.\n", temperature, resultat);
    } else {
        printf("Choix invalide.\n");
    }
    
    return 0;
}
