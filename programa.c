//1
#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++)
        printf("%d\n", i);
    return 0;
}

//2
#include <stdio.h>
int main() {
    for (int i = -1; i >= -5; i--)
        printf("%d\n", i);
    return 0;
}

//3
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
    return 0;
}

//4
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a * b);
    return 0;
}

//5
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n + 1);
    return 0;
}

//6
#include <stdio.h>
#include <math.h>
int main() {
    double n;
    scanf("%lf", &n);
    printf("%.2f\n", sqrt(n));
    return 0;
}

//7
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n * n);
    return 0;
}

//8
#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.0f\n", pow(a, b));
    printf("%.0f\n", pow(b, a));
    return 0;
}

//9
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a % b);
    return 0;
}

//10
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a / b);
    return 0;
}

//11
#include <stdio.h>
int main() {
    int n, pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        if (n > 0) pos++;
        else if (n < 0) neg++;
        else zero++;
    }
    printf("Positivos: %d\nNegativos: %d\nZeros: %d\n", pos, neg, zero);
    return 0;
}

//12
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
        int atual = n + 2;
        for (int i = 0; i < 10; i++, atual += 2)
            printf("%d\n", atual);
    }
    return 0;
}

//13
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 5; i++)
        printf("%d\n", n + i);
    return 0;
}

//14
#include <stdio.h>
int main() {
    int n;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        printf("%d\n", n);
    }
    return 0;
}

//15
#include <stdio.h>
int main() {
    float soma = 0, nota;
    for (int i = 0; i < 5; i++) {
        scanf("%f", &nota);
        soma += nota;
    }
    printf("%.2f\n", soma / 5);
    return 0;
}

//16
#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%.2f\n", (a + b + c) / 3.0);
    return 0;
}

//17
#include <stdio.h>
#include <math.h>
int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.2f\n", sqrt(a * a + b * b));
    return 0;
}

//18
#include <stdio.h>
int main() {
    for (int i = 1; i <= 10; i++)
        printf("4 x %d = %d\n", i, 4 * i);
    return 0;
}

//19
#include <stdio.h>
int main() {
    int n, pos = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        if (n > 0) pos++;
    }
    printf("%d\n", pos);
    return 0;
}

//20
#include <stdio.h>
int main() {
    int n, par = 0, impar = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) par++;
        else impar++;
    }
    printf("Pares: %d\nImpares: %d\n", par, impar);
    return 0;
}

//21
#include <stdio.h>
int main() {
    int a, b, prod = 0;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < b; i++)
        prod += a;
    printf("%d\n", prod);
    return 0;
}

//22
#include <stdio.h>
int main() {
    int n, continuar;
    do {
        scanf("%d", &n);
        for (int i = 1; i <= 10; i++)
            printf("%d * %d = %d\n", n, i, n * i);
        printf("Continuar? (1-SIM 0-NAO): ");
        scanf("%d", &continuar);
    } while (continuar == 1);
    return 0;
}

//23
#include <stdio.h>
int main() {
    float altura, maior = -1, menor = 9999, somaF = 0;
    int sexo, homens = 0, mulheres = 0, mulheresAbaixo = 0;
    scanf("%f %d", &altura, &sexo);
    while (altura > 0) {
        if (altura > maior) maior = altura;
        if (altura < menor) menor = altura;
        if (sexo == 1) homens++;
        else {
            mulheres++;
            somaF += altura;
            if (altura < 1.68) mulheresAbaixo++;
        }
        scanf("%f %d", &altura, &sexo);
    }
    printf("Maior: %.2f\nMenor: %.2f\n", maior, menor);
    printf("Homens: %d\n", homens);
    if (mulheres > 0) {
        printf("Media altura mulheres: %.2f\n", somaF / mulheres);
        printf("Percentual mulheres abaixo 1.68: %.2f%%\n", (float)mulheresAbaixo / mulheres * 100);
    }
    return 0;
}

//24
#include <stdio.h>
int main() {
    float s = 0;
    for (int i = 1; i <= 50; i++)
        s += (float)(51 - i) / i;
    printf("%.2f\n", s);
    return 0;
}

//25
#include <stdio.h>
int main() {
    float l, c, total = 0;
    int cont;
    do {
        printf("Largura e comprimento: ");
        scanf("%f %f", &l, &c);
        total += l * c;
        printf("Continuar? (1-SIM 0-NAO): ");
        scanf("%d", &cont);
    } while (cont == 1);
    printf("Area total: %.2f\n", total);
    return 0;
}

//26
#include <stdio.h>
void imprimir(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++)
            printf("%d ", i);
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
    imprimir(n);
    return 0;
}

//27
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    while (n != 0) {
        int soma = 0, m = 0, impar = 1;
        while (soma < n) {
            soma += impar;
            impar += 2;
            m++;
        }
        if (soma == n)
            printf("Raiz de %d = %d\n", n, m);
        else
            printf("%d nao e quadrado perfeito\n", n);
        scanf("%d", &n);
    }
    return 0;
}

//28
#include <stdio.h>
int main() {
    float altura, somaF = 0, somaTotal = 0;
    int sexo, homens = 0, mulheres = 0, mulheresAbaixo = 0;
    for (int i = 0; i < 50; i++) {
        scanf("%f %d", &altura, &sexo);
        somaTotal += altura;
        if (sexo == 0) homens++;
        else {
            mulheres++;
            somaF += altura;
            if (altura < 1.65) mulheresAbaixo++;
        }
    }
    printf("Media mulheres: %.2f\n", somaF / mulheres);
    printf("Media populacao: %.2f\n", somaTotal / 50);
    printf("Percentual homens: %.2f%%\n", (float)homens / 50 * 100);
    printf("Quantidade mulheres: %d\n", mulheres);
    printf("Percentual mulheres abaixo 1.65: %.2f%%\n", (float)mulheresAbaixo / mulheres * 100);
    return 0;
}

//29
#include <stdio.h>
int main() {
    int dias, hospedes = 0, maisDe20 = 0;
    float valor, somaValor = 0, somaDias = 0, maiorConta = 0;
    scanf("%d", &dias);
    while (dias != 0) {
        hospedes++;
        if (dias > 20) maisDe20++;
        valor = dias * 150.0;
        float desc = dias <= 5 ? 0.05 : (dias <= 10 ? 0.10 : 0.15);
        valor -= valor * desc;
        somaValor += valor;
        somaDias += dias;
        if (valor > maiorConta) maiorConta = valor;
        printf("Hospede %d: R$%.2f\n", hospedes, valor);
        scanf("%d", &dias);
    }
    if (hospedes > 0) {
        printf("Hospedes > 20 dias: %d\n", maisDe20);
        printf("Media contas: R$%.2f\n", somaValor / hospedes);
        printf("Media dias: %.2f\n", somaDias / hospedes);
        printf("Maior conta: R$%.2f\n", maiorConta);
    }
    return 0;
}

//30
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n >= 0 && n <= 9)
        for (int i = 1; i <= 10; i++)
            printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}

//31
#include <stdio.h>
int main() {
    int anos, cigDia;
    float preco;
    scanf("%d %d %f", &anos, &cigDia, &preco);
    float total = anos * 365 * (cigDia / 20.0) * preco;
    printf("R$%.2f\n", total);
    return 0;
}

//32
#include <stdio.h>
#define PI 3.14159
int main() {
    float r;
    scanf("%f", &r);
    printf("%.2f\n", 2 * PI * r);
    return 0;
}

//33
#include <stdio.h>
#define PI 3.14159
int main() {
    float r;
    scanf("%f", &r);
    printf("%.2f\n", PI * r * r);
    return 0;
}

//34
#include <stdio.h>
#define PI 3.14159
int main() {
    float r;
    scanf("%f", &r);
    printf("%.2f\n", (4.0 / 3) * PI * r * r * r);
    return 0;
}

//35
#include <stdio.h>
#define PI 3.14159
int main() {
    float r, h;
    scanf("%f %f", &r, &h);
    printf("%.2f\n", PI * r * r * h);
    return 0;
}

//36
#include <stdio.h>
int main() {
    float pot, larg, comp;
    scanf("%f %f %f", &pot, &larg, &comp);
    float necessario = larg * comp * 18;
    int lampadas = (int)(necessario / pot);
    if (necessario > lampadas * pot) lampadas++;
    printf("%d lampadas\n", lampadas);
    return 0;
}

//37
#include <stdio.h>
int main() {
    float odoBefore, odoAfter, litros, preco;
    scanf("%f %f %f %f", &odoBefore, &odoAfter, &litros, &preco);
    float km = odoAfter - odoBefore;
    printf("Km rodados: %.2f\n", km);
    printf("Km/L: %.2f\n", km / litros);
    printf("Custo: R$%.2f\n", litros * preco);
    return 0;
}

//38
#include <stdio.h>
int main() {
    char nome[50];
    int horas, dep;
    scanf("%s %d %d", nome, &horas, &dep);
    float salario = horas * 3.0 + dep * 100.0;
    float liquido = salario - salario * 0.135;
    printf("%s: R$%.2f\n", nome, liquido);
    return 0;
}

//39
#include <stdio.h>
int main() {
    float custo;
    scanf("%f", &custo);
    float total = custo + custo * 0.28 + custo * 0.45;
    printf("R$%.2f\n", total);
    return 0;
}

//40
#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float r = (float)(a + b) * (a + b);
    float s = (float)(b + c) * (b + c);
    printf("%.2f\n", (r + s) / 2.0);
    return 0;
}

//41
#include <stdio.h>
int main() {
    int codigo, carros;
    char nome[50];
    float totalVendas, salarioFixo, comissaoCarro;
    scanf("%d %s %d %f %f %f", &codigo, nome, &carros, &totalVendas, &salarioFixo, &comissaoCarro);
    float salario = salarioFixo + carros * comissaoCarro + totalVendas * 0.05;
    printf("Codigo: %d | Nome: %s | Salario: R$%.2f\n", codigo, nome, salario);
    return 0;
}

//42
#include <stdio.h>
int main() {
    float c;
    scanf("%f", &c);
    printf("%.2f\n", c * 9.0 / 5 + 32);
    return 0;
}

//43
#include <stdio.h>
int main() {
    float f;
    scanf("%f", &f);
    printf("%.2f\n", 5.0 / 9 * (f - 32));
    return 0;
}

//44
#include <stdio.h>
int main() {
    printf("Celsius\tFahrenheit\n");
    for (int c = 0; c <= 50; c += 10)
        printf("%d\t%.2f\n", c, c * 9.0 / 5 + 32);
    return 0;
}

//45
#include <stdio.h>
int main() {
    int r, a1, an;
    scanf("%d %d %d", &r, &a1, &an);
    int n = (an - a1) / r + 1;
    int soma = n * (a1 + an) / 2;
    printf("%d\n", soma);
    return 0;
}

//46
#include <stdio.h>
#include <math.h>
int main() {
    float x1, y1, x2, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    printf("%.2f\n", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
    return 0;
}

//47
#include <stdio.h>
int main() {
    int qtd;
    float salarioFixo, comissao, totalSalarios = 0, maiorFixo = 0;
    for (int i = 0; i < 1200; i++) {
        scanf("%d %f", &qtd, &salarioFixo);
        if (qtd <= 5) comissao = qtd * 1.50;
        else if (qtd <= 50) comissao = qtd * 2.00;
        else comissao = qtd * 2.50;
        float salario = salarioFixo + comissao;
        totalSalarios += salario;
        if (salarioFixo > maiorFixo) maiorFixo = salarioFixo;
        printf("Salario: R$%.2f\n", salario);
    }
    printf("Media salarios: R$%.2f\n", totalSalarios / 1200);
    printf("Maior salario fixo: R$%.2f\n", maiorFixo);
    return 0;
}

//48
#include <stdio.h>
int main() {
    float h, r, altAtual, dist;
    int n;
    scanf("%f %f %d", &h, &r, &n);
    dist = h;
    altAtual = h;
    for (int i = 1; i <= n; i++) {
        altAtual *= r;
        dist += 2 * altAtual;
    }
    printf("Distancia: %.2f\n", dist);
    printf("Altura no %d salto: %.2f\n", n, altAtual);
    return 0;
}

//49
#include <stdio.h>
int main() {
    int vezes, total = 0, menos10 = 0, entre10e15 = 0, acima15 = 0;
    scanf("%d", &vezes);
    while (vezes >= 0) {
        total++;
        if (vezes < 10) menos10++;
        else if (vezes <= 15) entre10e15++;
        else acima15++;
        scanf("%d", &vezes);
    }
    if (total > 0) {
        printf("Menos de 10: %.2f%%\n", (float)menos10 / total * 100);
        printf("Entre 10 e 15: %.2f%%\n", (float)entre10e15 / total * 100);
        printf("Acima de 15: %.2f%%\n", (float)acima15 / total * 100);
        printf("Total alunos: %d\n", total);
    }
    return 0;
}

//50
#include <stdio.h>
int main() {
    int secreto, tentativa, acertou = 0;
    scanf("%d", &secreto);
    for (int i = 1; i <= 4; i++) {
        scanf("%d", &tentativa);
        if (tentativa == secreto) {
            printf("Acertou na tentativa %d!\n", i);
            acertou = 1;
            break;
        }
    }
    if (!acertou) printf("Nao adivinhou.\n");
    return 0;
}

//51
#include <stdio.h>
int main() {
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);
    if (linhas < 1) linhas = 1;
    if (linhas > 20) linhas = 20;
    if (colunas < 1) colunas = 1;
    if (colunas > 20) colunas = 20;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

//52
#include <stdio.h>
int main() {
    int idade, acidente, totalAcidente = 0;
    float salario, somaIdadeAcidente = 0, totalLiquido = 0;
    scanf("%f", &salario);
    while (salario >= 0) {
        scanf("%d %d", &idade, &acidente);
        float liquido = salario > 1500 ? salario * 0.90 : salario;
        totalLiquido += liquido;
        if (acidente == 1) {
            somaIdadeAcidente += idade;
            totalAcidente++;
        }
        scanf("%f", &salario);
    }
    if (totalAcidente > 0)
        printf("Media idade acidentados: %.2f\n", somaIdadeAcidente / totalAcidente);
    printf("Total salarios liquidos: R$%.2f\n", totalLiquido);
    return 0;
}
