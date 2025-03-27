/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2012 - 2016 Symless Ltd.
 * SPDX-FileCopyrightText: (C) 2002 Chris Schoeneman
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#include "deskflow/KeyTypes.h"

const KeyNameMapEntry kKeyNameMap[] = {
    {"AltGr", kKeyAltGr},
    {"Alt_L", kKeyAlt_L},
    {"Alt_R", kKeyAlt_R},
    {"AppMail", kKeyAppMail},
    {"AppMedia", kKeyAppMedia},
    {"AppUser1", kKeyAppUser1},
    {"AppUser2", kKeyAppUser2},
    {"AudioDown", kKeyAudioDown},
    {"AudioMute", kKeyAudioMute},
    {"AudioNext", kKeyAudioNext},
    {"AudioPlay", kKeyAudioPlay},
    {"AudioPrev", kKeyAudioPrev},
    {"AudioStop", kKeyAudioStop},
    {"AudioUp", kKeyAudioUp},
    {"BackSpace", kKeyBackSpace},
    {"Begin", kKeyBegin},
    {"Break", kKeyBreak},
    {"Cancel", kKeyCancel},
    {"CapsLock", kKeyCapsLock},
    {"Clear", kKeyClear},
    {"Control_L", kKeyControl_L},
    {"Control_R", kKeyControl_R},
    {"Delete", kKeyDelete},
    {"Down", kKeyDown},
    {"Eject", kKeyEject},
    {"End", kKeyEnd},
    {"Escape", kKeyEscape},
    {"Execute", kKeyExecute},
    {"F1", kKeyF1},
    {"F2", kKeyF2},
    {"F3", kKeyF3},
    {"F4", kKeyF4},
    {"F5", kKeyF5},
    {"F6", kKeyF6},
    {"F7", kKeyF7},
    {"F8", kKeyF8},
    {"F9", kKeyF9},
    {"F10", kKeyF10},
    {"F11", kKeyF11},
    {"F12", kKeyF12},
    {"F13", kKeyF13},
    {"F14", kKeyF14},
    {"F15", kKeyF15},
    {"F16", kKeyF16},
    {"F17", kKeyF17},
    {"F18", kKeyF18},
    {"F19", kKeyF19},
    {"F20", kKeyF20},
    {"F21", kKeyF21},
    {"F22", kKeyF22},
    {"F23", kKeyF23},
    {"F24", kKeyF24},
    {"F25", kKeyF25},
    {"F26", kKeyF26},
    {"F27", kKeyF27},
    {"F28", kKeyF28},
    {"F29", kKeyF29},
    {"F30", kKeyF30},
    {"F31", kKeyF31},
    {"F32", kKeyF32},
    {"F33", kKeyF33},
    {"F34", kKeyF34},
    {"F35", kKeyF35},
    {"Find", kKeyFind},
    {"Help", kKeyHelp},
    {"Henkan", kKeyHenkan},
    {"Home", kKeyHome},
    {"Hyper_L", kKeyHyper_L},
    {"Hyper_R", kKeyHyper_R},
    {"Insert", kKeyInsert},
    {"KP_0", kKeyKP_0},
    {"KP_1", kKeyKP_1},
    {"KP_2", kKeyKP_2},
    {"KP_3", kKeyKP_3},
    {"KP_4", kKeyKP_4},
    {"KP_5", kKeyKP_5},
    {"KP_6", kKeyKP_6},
    {"KP_7", kKeyKP_7},
    {"KP_8", kKeyKP_8},
    {"KP_9", kKeyKP_9},
    {"KP_Add", kKeyKP_Add},
    {"KP_Begin", kKeyKP_Begin},
    {"KP_Decimal", kKeyKP_Decimal},
    {"KP_Delete", kKeyKP_Delete},
    {"KP_Divide", kKeyKP_Divide},
    {"KP_Down", kKeyKP_Down},
    {"KP_End", kKeyKP_End},
    {"KP_Enter", kKeyKP_Enter},
    {"KP_Equal", kKeyKP_Equal},
    {"KP_F1", kKeyKP_F1},
    {"KP_F2", kKeyKP_F2},
    {"KP_F3", kKeyKP_F3},
    {"KP_F4", kKeyKP_F4},
    {"KP_Home", kKeyKP_Home},
    {"KP_Insert", kKeyKP_Insert},
    {"KP_Left", kKeyKP_Left},
    {"KP_Multiply", kKeyKP_Multiply},
    {"KP_PageDown", kKeyKP_PageDown},
    {"KP_PageUp", kKeyKP_PageUp},
    {"KP_Right", kKeyKP_Right},
    {"KP_Separator", kKeyKP_Separator},
    {"KP_Space", kKeyKP_Space},
    {"KP_Subtract", kKeyKP_Subtract},
    {"KP_Tab", kKeyKP_Tab},
    {"KP_Up", kKeyKP_Up},
    {"Left", kKeyLeft},
    {"LeftTab", kKeyLeftTab},
    {"Linefeed", kKeyLinefeed},
    {"Menu", kKeyMenu},
    {"Meta_L", kKeyMeta_L},
    {"Meta_R", kKeyMeta_R},
    {"NumLock", kKeyNumLock},
    {"PageDown", kKeyPageDown},
    {"PageUp", kKeyPageUp},
    {"Pause", kKeyPause},
    {"Print", kKeyPrint},
    {"Redo", kKeyRedo},
    {"Return", kKeyReturn},
    {"Right", kKeyRight},
    {"ScrollLock", kKeyScrollLock},
    {"Select", kKeySelect},
    {"ShiftLock", kKeyShiftLock},
    {"Shift_L", kKeyShift_L},
    {"Shift_R", kKeyShift_R},
    {"Sleep", kKeySleep},
    {"Super_L", kKeySuper_L},
    {"Super_R", kKeySuper_R},
    {"SysReq", kKeySysReq},
    {"Tab", kKeyTab},
    {"Undo", kKeyUndo},
    {"Up", kKeyUp},
    {"WWWBack", kKeyWWWBack},
    {"WWWFavorites", kKeyWWWFavorites},
    {"WWWForward", kKeyWWWForward},
    {"WWWHome", kKeyWWWHome},
    {"WWWRefresh", kKeyWWWRefresh},
    {"WWWSearch", kKeyWWWSearch},
    {"WWWStop", kKeyWWWStop},
    {"Zenkaku", kKeyZenkaku},
    {"Space", 0x0020},
    {"Exclaim", 0x0021},
    {"DoubleQuote", 0x0022},
    {"Number", 0x0023},
    {"Dollar", 0x0024},
    {"Percent", 0x0025},
    {"Ampersand", 0x0026},
    {"Apostrophe", 0x0027},
    {"ParenthesisL", 0x0028},
    {"ParenthesisR", 0x0029},
    {"Asterisk", 0x002a},
    {"Plus", 0x002b},
    {"Comma", 0x002c},
    {"Minus", 0x002d},
    {"Period", 0x002e},
    {"Slash", 0x002f},
    {"Colon", 0x003a},
    {"Semicolon", 0x003b},
    {"Less", 0x003c},
    {"Equal", 0x003d},
    {"Greater", 0x003e},
    {"Question", 0x003f},
    {"At", 0x0040},
    {"BracketL", 0x005b},
    {"Backslash", 0x005c},
    {"BracketR", 0x005d},
    {"Circumflex", 0x005e},
    {"Underscore", 0x005f},
    {"Grave", 0x0060},
    {"BraceL", 0x007b},
    {"Bar", 0x007c},
    {"BraceR", 0x007d},
    {"Tilde", 0x007e},
    {NULL, 0},
};

const KeyModifierNameMapEntry kModifierNameMap[] = {
    {"Alt", KeyModifierAlt},
    {"AltGr", KeyModifierAltGr},
    //    { "CapsLock",        KeyModifierCapsLock },
    {"Control", KeyModifierControl},
    {"Meta", KeyModifierMeta},
    //    { "NumLock",        KeyModifierNumLock },
    //    { "ScrollLock",        KeyModifierScrollLock },
    {"Shift", KeyModifierShift},
    {"Super", KeyModifierSuper},
    {NULL, 0},
};
