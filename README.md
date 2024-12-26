# Práctica 2: Programación con Threads

![Language](https://img.shields.io/badge/language-C-blue)  
![Status](https://img.shields.io/badge/status-in%20progress-orange)

## Tabla de Contenidos

- [Descripción](#descripción)
- [Características Principales](#características-principales)
- [Requisitos](#requisitos)
- [Configuración Inicial](#configuración-inicial)
- [Ejecución](#ejecución)
- [Ejemplo de Salida](#ejemplo-de-salida)
- [Estadísticas Finales](#estadísticas-finales)
- [Normas de Estilo](#normas-de-estilo)
- [Autores](#autores)

---

## Descripción

Este proyecto implementa un sistema que simula una campaña de vacunación contra una pandemia en un país pequeño. Utilizando **threads**, el programa gestiona:
- La fabricación de vacunas por parte de tres fábricas.
- El reparto de estas vacunas a cinco centros de vacunación.
- La vacunación de todos los habitantes en tandas organizadas.

Se asegura la sincronización correcta entre procesos y se evita la inanición y los interbloqueos.

---

## Características Principales

- **Simulación de Vacunación**: 
  - Gestión de habitantes que eligen centros para vacunarse.
  - Manejo de tandas organizadas para evitar sobrecarga.

- **Fabricación y Reparto de Vacunas**:
  - Producción aleatoria por tandas y distribución eficiente basada en demanda.

- **Gestión de Threads**:
  - Implementación eficiente utilizando la biblioteca `pthread`.

---

## Requisitos

### Entrada

El programa toma como entrada un fichero de configuración con los siguientes datos:
1. Número total de habitantes.
2. Vacunas iniciales por centro.
3. Número mínimo y máximo de vacunas producidas por tanda.
4. Tiempos mínimos y máximos para fabricación y reparto.
5. Tiempos máximos para la reacción de los habitantes y su desplazamiento al centro.

Ejemplo de entrada:
