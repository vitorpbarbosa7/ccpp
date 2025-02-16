#include <iostream>
#include <climits>    // For CHAR_BIT
#include <cwchar>     // For wchar_t
#include <cuchar>     // For char16_t and char32_t

int main() {
    // char
    char c = 'A';
    std::cout << "char: " << c << " | Size: " << sizeof(char) * CHAR_BIT << " bits" << std::endl;

    // wchar_t (wide character)
    wchar_t wc = L'Ω';
    std::wcout << L"wchar_t: " << wc << L" | Size: " << sizeof(wchar_t) * CHAR_BIT << L" bits" << std::endl;

    // char16_t (Unicode 16-bit)
    char16_t c16 = u'字';
    std::cout << "char16_t: " << c16 << " | Size: " << sizeof(char16_t) * CHAR_BIT << " bits" << std::endl;

    // char32_t (Unicode 32-bit)
    char32_t c32 = U'𐍈';
    std::cout << "char32_t: " << c32 << " | Size: " << sizeof(char32_t) * CHAR_BIT << " bits" << std::endl;

    // Display ranges for char types
    std::cout << "\nCHAR_MIN: " << CHAR_MIN << ", CHAR_MAX: " << CHAR_MAX << std::endl;

    return 0;
}

