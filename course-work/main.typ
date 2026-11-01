#import "@preview/typo-stp:0.1.1": *

// Титульный лист
#include "document/front-page.typ"
// Лист задания
#include "document/assignment-sheet.typ"

#show: template

// Содержание
#outline()

// Введение
#include "document/introduction.typ"

// Обзор литературы
#include "document/literature-review.typ"

// Разработка структуры устройства
#include "document/device-structure-development.typ"

// Обоснование выбора узлов, элементов функциональной схемы устройства
#include "document/components-selection-justification.typ"

// Разработка принципиальной электрической схемы устройства
// #include "document/electrical-schematic-diagram-development.typ"

// Разработка программного обеспечения
// #include "document/software-development.typ"

// Заключение
// #include "document/conclusion.typ"

#bibliography("sources.yml")

#appendix(
  "обязательное",
  "Структурная схема устройства"
) <structural-scheme>

#appendix(
  "обязательное",
  "Функциональная электрическая схема блока управления"
) <functional-scheme>

#appendix(
  "обязательное",
  "Принципиальная электрическая схема устройства"
) <principal-electrical-scheme>

#appendix(
  "обязательное",
  "Листинг исходного кода"
) <source-code>
// #include "document/source-code.typ"

