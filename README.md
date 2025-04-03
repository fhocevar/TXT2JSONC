# TXT to JSON Converter

Este repositório contém um programa em C que converte os valores de calorias, proteínas, gorduras e carboidratos de um formato de texto simples para uma string no formato JSON, sem espaços entre os pares de chave e valor.

## Descrição

O programa recebe quatro valores inteiros que representam:
- Calorias
- Proteínas
- Gorduras
- Carboidratos

Esses valores são convertidos para uma string JSON formatada da seguinte forma:

```json
{"Calories":100,"Proteins":30,"Fats":40,"Carbohydrates":30}
