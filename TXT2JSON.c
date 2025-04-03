#include <stdio.h>

char* Solve(int Calories, int Proteins, int Fats, int Carbohydrates) {
    // A string JSON formatada corretamente
    static char json_string[256];  // Usamos static para que a string persista após a execução
    snprintf(json_string, sizeof(json_string), 
             "{\"Calories\":%d,\"Proteins\":%d,\"Fats\":%d,\"Carbohydrates\":%d}", 
             Calories, Proteins, Fats, Carbohydrates);
    return json_string;
}

int main() {
    int Calories, Proteins, Fats, Carbohydrates;

    // Leitura dos valores de entrada
    scanf("%d", &Calories);
    scanf("%d", &Proteins);
    scanf("%d", &Fats);
    scanf("%d", &Carbohydrates);

    // Chama a função Solve para gerar o JSON
    char* result = Solve(Calories, Proteins, Fats, Carbohydrates);

    // Exibe o resultado (JSON)
    printf("%s\n", result);

    return 0;
}
