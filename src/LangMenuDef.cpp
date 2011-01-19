/* Generated by script gen_c_from_strings_file.py
   DO NOT EDIT MANUALLY */

#include <windows.h>
#include "LangMenuDef.h"

#define _LANGID(lang) MAKELANGID(lang, SUBLANG_NEUTRAL)

LangDef g_langs[LANGS_COUNT] = {
    { "en", "English", _LANGID(LANG_ENGLISH) },
    { "af", "Afrikaans", _LANGID(LANG_AFRIKAANS) },
    { "ar", "Arabic (\330\247\331\204\331\222\330\271\331\216\330\261\331\216\330\250\331\212\331\221\330\251)", _LANGID(LANG_ARABIC) },
    { "am", "Armenian (\325\200\325\241\325\265\325\245\326\200\325\245\325\266)", _LANGID(LANG_ARMENIAN) },
    { "eu", "Basque (Euskara)", _LANGID(LANG_BASQUE) },
    { "by", "Belarusian (\320\221\320\265\320\273\320\260\321\200\321\203\321\201\320\272\320\260\321\217)", _LANGID(LANG_BELARUSIAN) },
    { "bn", "Bengali (\340\246\254\340\246\276\340\246\202\340\246\262\340\246\276)", _LANGID(LANG_BENGALI) },
    { "bg", "Bulgarian (\320\221\321\212\320\273\320\263\320\260\321\200\321\201\320\272\320\270)", _LANGID(LANG_BULGARIAN) },
    { "mm", "Burmese (\341\200\227\341\200\231\341\200\254 \341\200\205\341\200\254)", -1 },
    { "ca", "Catalan (Catal\303\240)", _LANGID(LANG_CATALAN) },
    { "cn", "Chinese Simplified (\347\256\200\344\275\223\344\270\255\346\226\207)", MAKELANGID(LANG_CHINESE, SUBLANG_CHINESE_SIMPLIFIED) },
    { "tw", "Chinese Traditional (\347\271\201\351\253\224\344\270\255\346\226\207)", MAKELANGID(LANG_CHINESE, SUBLANG_CHINESE_TRADITIONAL) },
    { "kw", "Cornish (Kernewek)", -1 },
    { "hr", "Croatian (Hrvatski)", _LANGID(LANG_CROATIAN) },
    { "cz", "Czech (\304\214e\305\241tina)", _LANGID(LANG_CZECH) },
    { "dk", "Danish (Dansk)", _LANGID(LANG_DANISH) },
    { "nl", "Dutch (Nederlands)", _LANGID(LANG_DUTCH) },
    { "fi", "Finnish (Suomi)", _LANGID(LANG_FINNISH) },
    { "fr", "French (Fran\303\247ais)", _LANGID(LANG_FRENCH) },
    { "fy-nl", "Frisian (Frysk)", _LANGID(LANG_FRISIAN) },
    { "gl", "Galician (Galego)", _LANGID(LANG_GALICIAN) },
    { "de", "German (Deutsch)", _LANGID(LANG_GERMAN) },
    { "gr", "Greek (\316\225\316\273\316\273\316\267\316\275\316\271\316\272\316\254)", _LANGID(LANG_GREEK) },
    { "he", "Hebrew (\327\242\327\221\327\250\327\231\327\252)", _LANGID(LANG_HEBREW) },
    { "hi", "Hindi (\340\244\271\340\244\277\340\244\202\340\244\246\340\245\200)", _LANGID(LANG_HINDI) },
    { "hu", "Hungarian (Magyar)", _LANGID(LANG_HUNGARIAN) },
    { "id", "Indonesian (Bahasa Indonesia)", _LANGID(LANG_INDONESIAN) },
    { "ga", "Irish (Gaeilge)", _LANGID(LANG_IRISH) },
    { "it", "Italian (Italiano)", _LANGID(LANG_ITALIAN) },
    { "ja", "Japanese (\346\227\245\346\234\254\350\252\236)", _LANGID(LANG_JAPANESE) },
    { "kr", "Korean (\355\225\234\352\265\255\354\226\264)", _LANGID(LANG_KOREAN) },
    { "lt", "Lithuanian (Lietuvi\305\263)", _LANGID(LANG_LITHUANIAN) },
    { "mk", "Macedonian (\320\274\320\260\320\272\320\265\320\264\320\276\320\275\321\201\320\272\320\270)", _LANGID(LANG_MACEDONIAN) },
    { "ml", "Malayalam (\340\264\256\340\264\262\340\264\257\340\264\276\340\264\263\340\264\202)", _LANGID(LANG_MALAYALAM) },
    { "my", "Malaysian (Bahasa Melayu)", _LANGID(LANG_MALAY) },
    { "no", "Norwegian (Norsk)", MAKELANGID(LANG_NORWEGIAN, SUBLANG_NORWEGIAN_BOKMAL) },
    { "nn", "Norwegian Neo-Norwegian (Norsk nynorsk)", MAKELANGID(LANG_NORWEGIAN, SUBLANG_NORWEGIAN_NYNORSK) },
    { "fa", "Persian (\331\201\330\247\330\261\330\263\333\214)", _LANGID(LANG_FARSI) },
    { "pl", "Polish (Polski)", _LANGID(LANG_POLISH) },
    { "br", "Portuguese - Brazil (Portugu\303\252s)", MAKELANGID(LANG_PORTUGUESE, SUBLANG_PORTUGUESE_BRAZILIAN) },
    { "pt", "Portuguese - Portugal (Portugu\303\252s)", _LANGID(LANG_PORTUGUESE) },
    { "pa", "Punjabi (\340\250\252\340\251\260\340\250\234\340\250\276\340\250\254\340\251\200)", _LANGID(LANG_PUNJABI) },
    { "ro", "Romanian (Rom\303\242n\304\203)", _LANGID(LANG_ROMANIAN) },
    { "ru", "Russian (\320\240\321\203\321\201\321\201\320\272\320\270\320\271)", _LANGID(LANG_RUSSIAN) },
    { "sr-rs", "Serbian (Cyrillic)", MAKELANGID(LANG_SERBIAN, SUBLANG_SERBIAN_CYRILLIC) },
    { "sp-rs", "Serbian (Latin)", MAKELANGID(LANG_SERBIAN, SUBLANG_SERBIAN_LATIN) },
    { "sn", "Shona (Shona)", -1 },
    { "si", "Sinhala (\340\267\203\340\267\222\340\266\202\340\267\204\340\266\275)", _LANGID(LANG_SINHALESE) },
    { "sk", "Slovak (Sloven\304\215ina)", _LANGID(LANG_SLOVAK) },
    { "sl", "Slovenian (Sloven\305\241\304\215ina)", _LANGID(LANG_SLOVENIAN) },
    { "es", "Spanish (Espa\303\261ol)", _LANGID(LANG_SPANISH) },
    { "sv", "Swedish (Svenska)", _LANGID(LANG_SWEDISH) },
    { "tl", "Tagalog (Tagalog)", _LANGID(LANG_FILIPINO) },
    { "ta", "Tamil (\340\256\244\340\256\256\340\256\277\340\256\264\340\257\215)", _LANGID(LANG_TAMIL) },
    { "th", "Thai (\340\270\240\340\270\262\340\270\251\340\270\262\340\271\204\340\270\227\340\270\242)", _LANGID(LANG_THAI) },
    { "tr", "Turkish (T\303\274rk\303\247e)", _LANGID(LANG_TURKISH) },
    { "uk", "Ukrainian (\320\243\320\272\321\200\320\260\321\227\320\275\321\201\321\214\320\272\320\260)", _LANGID(LANG_UKRAINIAN) },
    { "va", "Valencian (Valenci\303\240)", -1 },
    { "vn", "Vietnamese (Vi\341\273\207t Nam)", _LANGID(LANG_VIETNAMESE) },
    { "cy", "Welsh (Cymraeg)", _LANGID(LANG_WELSH) },
};
