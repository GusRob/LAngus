# Syntax Laws for LAngus


## Basic syntax laws

  | Operation                       | Syntax                                                |
  | ------------------------------- | ----------------------------------------------------- |
  | variable assignment             | `type variableName = value`                           |
  | function definition             | `functionName(type1 value1, type2 value2...) {}`      |
  | inline arithmetic operators     | `value1 + value2`  [supports +,-,*,/,^]               |
  | inline comparison boolean operators| `value1 && value2`  [supports &&,&#124;&#124;,==,!=]|
  | inline bitwise boolean operators| `value1 & value2`  [supports &,&#124;,^,!]            |
  | the tertiary operator           | `boolean ? value1 : value2`                           |

## StdLib commands

  | Operation                       | Syntax                        |
  | ------------------------------- | ----------------------------- |
  | print to console                | `output(string1)`             |
  | read from console               | `variable1 = input()`         |
  | write to existing/create file   | `outputToFile(string1)`       |
  | read from existing file         | `variable1 = inputFromFile()` |
  | string operations               | `array1.contains()` etc.      |

## StdLibGUI commands [Extension?]

  | Operation                         | Syntax                        |
  | --------------------------------- | ----------------------------- |
  | create a new window               | `window1 = window(string1)`   |
  | edit window properties            | `window1.setSize(int1, int2)` [supports size,visible,title etc.]|
  | add html-style component from file| `window1.addFile(file)`       |
  | add drawing canvas                | `window.addCanvas`            |
  | add GUI component                 | `window1.add(button1)` [supports button,textbox,image etc.]|
