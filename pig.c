#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generateCCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "#include <stdio.h>\n\n");
        fprintf(file, "void hello() {\n");
        fprintf(file, "    printf(\"Hello, World!\\n\");\n");
        fprintf(file, "}\n\n");
        fprintf(file, "int main() {\n");
        fprintf(file, "    hello();\n");
        fprintf(file, "    return 0;\n");
        fprintf(file, "}\n");
    } else {
        fprintf(file, "#include <stdio.h>\n\n");
        fprintf(file, "int main() {\n");
        fprintf(file, "    printf(\"Hello, World!\\n\");\n");
        fprintf(file, "    return 0;\n");
        fprintf(file, "}\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для C.\n", fileName);
}

void generateCppCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "#include <iostream>\n\n");
        fprintf(file, "void hello() {\n");
        fprintf(file, "    std::cout << \"Hello, World!\" << std::endl;\n");
        fprintf(file, "}\n\n");
        fprintf(file, "int main() {\n");
        fprintf(file, "    hello();\n");
        fprintf(file, "    return 0;\n");
        fprintf(file, "}\n");
    } else {
        fprintf(file, "#include <iostream>\n\n");
        fprintf(file, "int main() {\n");
        fprintf(file, "    std::cout << \"Hello, World!\" << std::endl;\n");
        fprintf(file, "    return 0;\n");
        fprintf(file, "}\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для C++.\n", fileName);
}

void generateCSharpCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "using System;\n\n");
        fprintf(file, "class Program {\n");
        fprintf(file, "    static void hello() {\n");
        fprintf(file, "        Console.WriteLine(\"Hello, World!\");\n");
        fprintf(file, "    }\n\n");
        fprintf(file, "    static void Main() {\n");
        fprintf(file, "        hello();\n");
        fprintf(file, "    }\n");
        fprintf(file, "}\n");
    } else {
        fprintf(file, "using System;\n\n");
        fprintf(file, "class Program {\n");
        fprintf(file, "    static void Main() {\n");
        fprintf(file, "        Console.WriteLine(\"Hello, World!\");\n");
        fprintf(file, "    }\n");
        fprintf(file, "}\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для C#.\n", fileName);
}

void generateJavaCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "public class Main {\n");
        fprintf(file, "    static void hello() {\n");
        fprintf(file, "        System.out.println(\"Hello, World!\");\n");
        fprintf(file, "    }\n\n");
        fprintf(file, "    public static void main(String[] args) {\n");
        fprintf(file, "        hello();\n");
        fprintf(file, "    }\n");
        fprintf(file, "}\n");
    } else {
        fprintf(file, "public class Main {\n");
        fprintf(file, "    public static void main(String[] args) {\n");
        fprintf(file, "        System.out.println(\"Hello, World!\");\n");
        fprintf(file, "    }\n");
        fprintf(file, "}\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для Java.\n", fileName);
}

void generatePythonCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "def hello():\n");
        fprintf(file, "    print(\"Hello, World!\")\n\n");
        fprintf(file, "if __name__ == \"__main__\":\n");
        fprintf(file, "    hello()\n");
    } else {
        fprintf(file, "print(\"Hello, World!\")\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для Python.\n", fileName);
}

void generateJavaScriptCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "function hello() {\n");
        fprintf(file, "    console.log(\"Hello, World!\");\n");
        fprintf(file, "}\n\n");
        fprintf(file, "hello();\n");
    } else {
        fprintf(file, "console.log(\"Hello, World!\");\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для JavaScript.\n", fileName);
}

void generateRubyCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "def hello\n");
        fprintf(file, "    puts \"Hello, World!\"\n");
        fprintf(file, "end\n\n");
        fprintf(file, "hello\n");
    } else {
        fprintf(file, "puts \"Hello, World!\"\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для Ruby.\n", fileName);
}

void generateGoCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "package main\n\n");
        fprintf(file, "import \"fmt\"\n\n");
        fprintf(file, "func hello() {\n");
        fprintf(file, "    fmt.Println(\"Hello, World!\")\n");
        fprintf(file, "}\n\n");
        fprintf(file, "func main() {\n");
        fprintf(file, "    hello()\n");
        fprintf(file, "}\n");
    } else {
        fprintf(file, "package main\n\n");
        fprintf(file, "import \"fmt\"\n\n");
        fprintf(file, "func main() {\n");
        fprintf(file, "    fmt.Println(\"Hello, World!\")\n");
        fprintf(file, "}\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для Go.\n", fileName);
}

void generateSwiftCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "func hello() {\n");
        fprintf(file, "    print(\"Hello, World!\")\n");
        fprintf(file, "}\n\n");
        fprintf(file, "hello()\n");
    } else {
        fprintf(file, "print(\"Hello, World!\")\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для Swift.\n", fileName);
}

void generateKotlinCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "fun hello() {\n");
        fprintf(file, "    println(\"Hello, World!\")\n");
        fprintf(file, "}\n\n");
        fprintf(file, "fun main() {\n");
        fprintf(file, "    hello()\n");
        fprintf(file, "}\n");
    } else {
        fprintf(file, "fun main() {\n");
        fprintf(file, "    println(\"Hello, World!\")\n");
        fprintf(file, "}\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для Kotlin.\n", fileName);
}

void generatePHPCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "<?php\n");
        fprintf(file, "function hello() {\n");
        fprintf(file, "    echo \"Hello, World!\\n\";\n");
        fprintf(file, "}\n\n");
        fprintf(file, "hello();\n");
    } else {
        fprintf(file, "<?php\n");
        fprintf(file, "echo \"Hello, World!\\n\";\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для PHP.\n", fileName);
}

void generateRustCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "fn hello() {\n");
        fprintf(file, "    println!(\"Hello, World!\");\n");
        fprintf(file, "}\n\n");
        fprintf(file, "fn main() {\n");
        fprintf(file, "    hello();\n");
        fprintf(file, "}\n");
    } else {
        fprintf(file, "fn main() {\n");
        fprintf(file, "    println!(\"Hello, World!\");\n");
        fprintf(file, "}\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для Rust.\n", fileName);
}

void generateHaskellCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "hello :: IO ()\n");
        fprintf(file, "hello = putStrLn \"Hello, World!\"\n\n");
        fprintf(file, "main :: IO ()\n");
        fprintf(file, "main = hello\n");
    } else {
        fprintf(file, "main :: IO ()\n");
        fprintf(file, "main = putStrLn \"Hello, World!\"\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для Haskell.\n", fileName);
}

void generateTypeScriptCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "function hello(): void {\n");
        fprintf(file, "    console.log(\"Hello, World!\");\n");
        fprintf(file, "}\n\n");
        fprintf(file, "hello();\n");
    } else {
        fprintf(file, "console.log(\"Hello, World!\");\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для TypeScript.\n", fileName);
}

void generateElixirCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "defmodule Hello do\n");
        fprintf(file, "  def hello do\n");
        fprintf(file, "    IO.puts(\"Hello, World!\")\n");
        fprintf(file, "  end\n");
        fprintf(file, "end\n\n");
        fprintf(file, "Hello.hello()\n");
    } else {
        fprintf(file, "IO.puts(\"Hello, World!\")\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для Elixir.\n", fileName);
}

void generateScalaCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "object Hello {\n");
        fprintf(file, "  def hello(): Unit = {\n");
        fprintf(file, "    println(\"Hello, World!\")\n");
        fprintf(file, "  }\n\n");
        fprintf(file, "  def main(args: Array[String]): Unit = {\n");
        fprintf(file, "    hello()\n");
        fprintf(file, "  }\n");
        fprintf(file, "}\n");
    } else {
        fprintf(file, "object Hello {\n");
        fprintf(file, "  def main(args: Array[String]): Unit = {\n");
        fprintf(file, "    println(\"Hello, World!\")\n");
        fprintf(file, "  }\n");
        fprintf(file, "}\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для Scala.\n", fileName);
}

void generateDartCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "void hello() {\n");
        fprintf(file, "    print(\"Hello, World!\");\n");
        fprintf(file, "}\n\n");
        fprintf(file, "void main() {\n");
        fprintf(file, "    hello();\n");
        fprintf(file, "}\n");
    } else {
        fprintf(file, "void main() {\n");
        fprintf(file, "    print(\"Hello, World!\");\n");
        fprintf(file, "}\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для Dart.\n", fileName);
}

void generatePerlCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "sub hello {\n");
        fprintf(file, "    print \"Hello, World!\\n\";\n");
        fprintf(file, "}\n\n");
        fprintf(file, "hello();\n");
    } else {
        fprintf(file, "print \"Hello, World!\\n\";\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для Perl.\n", fileName);
}

void generateShellCode(const char *fileName, const char *codeType) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Ошибка при создании файла");
        exit(1);
    }

    if (strcmp(codeType, "function") == 0) {
        fprintf(file, "#!/bin/bash\n");
        fprintf(file, "hello() {\n");
        fprintf(file, "    echo \"Hello World!\"\n");
        fprintf(file, "}\n\n");
        fprintf(file, "hello\n");
    } else {
        fprintf(file, "#!/bin/bash\n");
        fprintf(file, "echo \"Hello, World!\"\n");
    }

    fclose(file);
    printf("Сгенерирован файл %s для Shell.\n", fileName);
}

int main() {
    int choice;
    char fileName[100];
    char codeType[20];

    printf("Выберите язык программирования для генерации кода:\n");
    printf("1. C\n");
    printf("2. C++\n");
    printf("3. C#\n");
    printf("4. Java\n");
    printf("5. Python\n");
    printf("6. JavaScript\n");
    printf("7. Ruby\n");
    printf("8. Go\n");
    printf("9. Swift\n");
    printf("10. Kotlin\n");
    printf("11. PHP\n");
    printf("12. Rust\n");
    printf("13. Haskell\n");
    printf("14. TypeScript\n");
    printf("15. Elixir\n");
    printf("16. Scala\n");
    printf("17. Dart\n");
    printf("18. Perl\n");
    printf("19. Shell\n");
    printf("Введите номер выбранного языка: ");

    if (scanf("%d", &choice) != 1) {
        printf("Ошибка ввода. Пожалуйста, введите число.\n");
        return 1;
    }

    printf("Введите название файла (без расширения): ");
    scanf("%s", fileName);

    printf("Выберите тип кода (function/main): ");
    scanf("%s", codeType);

    // Добавляем соответствующее расширение и генерируем код
    switch (choice) {
        case 1:
            strcat(fileName, ".c");
            generateCCode(fileName, codeType);
            break;
        case 2:
            strcat(fileName, ".cpp");
            generateCppCode(fileName, codeType);
            break;
        case 3:
            strcat(fileName, ".cs");
            generateCSharpCode(fileName, codeType);
            break;
        case 4:
            strcat(fileName, ".java");
            generateJavaCode(fileName, codeType);
            break;
        case 5:
            strcat(fileName, ".py");
            generatePythonCode(fileName, codeType);
            break;
        case 6:
            strcat(fileName, ".js");
            generateJavaScriptCode(fileName, codeType);
            break;
        case 7:
            strcat(fileName, ".rb");
            generateRubyCode(fileName, codeType);
            break;
        case 8:
            strcat(fileName, ".go");
            generateGoCode(fileName, codeType);
            break;
        case 9:
            strcat(fileName, ".swift");
            generateSwiftCode(fileName, codeType);
            break;
        case 10:
            strcat(fileName, ".kt");
            generateKotlinCode(fileName, codeType);
            break;
        case 11:
            strcat(fileName, ".php");
            generatePHPCode(fileName, codeType);
            break;
        case 12:
            strcat(fileName, ".rs");
            generateRustCode(fileName, codeType);
            break;
        case 13:
            strcat(fileName, ".hs");
            generateHaskellCode(fileName, codeType);
            break;
        case 14:
            strcat(fileName, ".ts");
            generateTypeScriptCode(fileName, codeType);
            break;
        case 15:
            strcat(fileName, ".ex");
            generateElixirCode(fileName, codeType);
            break;
        case 16:
            strcat(fileName, ".scala");
            generateScalaCode(fileName, codeType);
            break;
        case 17:
            strcat(fileName, ".dart");
            generateDartCode(fileName, codeType);
            break;
        case 18:
            strcat(fileName, ".pl");
            generatePerlCode(fileName, codeType);
            break;
        case 19:
            strcat(fileName, ".sh");
            generateShellCode(fileName, codeType);
            break;
        default:
            printf("Ошибка: неверный выбор.\n");
            return 1;
    }

    return 0;
}