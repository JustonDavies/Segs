/*
 * SEGS - Super Entity Game Server
 * http://www.segs.io/
 * Copyright (c) 2006 - 2018 SEGS Team (see AUTHORS.md)
 * This software is licensed under the terms of the 3-clause BSD License. See LICENSE.md for details.
 */

#pragma once
#include <vector>
#include <QtCore/QString>
#include <QMap>

enum ModKeys
{
    NO_MOD    = 0,
    CTRL_MOD  = 1,
    SHIFT_MOD = 2,
    ALT_MOD   = 3,
};

enum KeyName : int32_t
{
    COH_INPUT_INVALID          = 0,
    COH_INPUT_ESCAPE           = 1,
    COH_INPUT_1                = 2,
    COH_INPUT_2                = 3,
    COH_INPUT_3                = 4,
    COH_INPUT_4                = 5,
    COH_INPUT_5                = 6,
    COH_INPUT_6                = 7,
    COH_INPUT_7                = 8,
    COH_INPUT_8                = 9,
    COH_INPUT_9                = 10,
    COH_INPUT_0                = 11,
    COH_INPUT_MINUS            = 12,
    COH_INPUT_EQUALS           = 13,
    COH_INPUT_BACKSPACE        = 14,
    COH_INPUT_TAB              = 15,
    COH_INPUT_Q                = 16,
    COH_INPUT_W                = 17,
    COH_INPUT_E                = 18,
    COH_INPUT_R                = 19,
    COH_INPUT_T                = 20,
    COH_INPUT_Y                = 21,
    COH_INPUT_U                = 22,
    COH_INPUT_I                = 23,
    COH_INPUT_O                = 24,
    COH_INPUT_P                = 25,
    COH_INPUT_LBRACKET         = 26,
    COH_INPUT_RBRACKET         = 27,
    COH_INPUT_RETURN           = 28,
    COH_INPUT_LCONTROL         = 29,
    COH_INPUT_A                = 30,
    COH_INPUT_S                = 31,
    COH_INPUT_D                = 32,
    COH_INPUT_F                = 33,
    COH_INPUT_G                = 34,
    COH_INPUT_H                = 35,
    COH_INPUT_J                = 36,
    COH_INPUT_K                = 37,
    COH_INPUT_L                = 38,
    COH_INPUT_SEMICOLON        = 39,
    COH_INPUT_APOSTROPHE       = 40,
    COH_INPUT_TILDE            = 41,
    COH_INPUT_LSHIFT           = 42,
    COH_INPUT_BACKSLASH        = 43,
    COH_INPUT_Z                = 44,
    COH_INPUT_X                = 45,
    COH_INPUT_C                = 46,
    COH_INPUT_V                = 47,
    COH_INPUT_B                = 48,
    COH_INPUT_N                = 49,
    COH_INPUT_M                = 50,
    COH_INPUT_COMMA            = 51,
    COH_INPUT_PERIOD           = 52,
    COH_INPUT_SLASH            = 53,
    COH_INPUT_RSHIFT           = 54,
    COH_INPUT_MULTIPLY         = 55,
    COH_INPUT_SPACE            = 57,
    COH_INPUT_F1               = 59,
    COH_INPUT_F2               = 60,
    COH_INPUT_F3               = 61,
    COH_INPUT_F4               = 62,
    COH_INPUT_F5               = 63,
    COH_INPUT_F6               = 64,
    COH_INPUT_F7               = 65,
    COH_INPUT_F8               = 66,
    COH_INPUT_F9               = 67,
    COH_INPUT_F10              = 68,
    COH_INPUT_NUMLOCK          = 69,
    COH_INPUT_SCROLL           = 70,
    COH_INPUT_NUMPAD7          = 71,
    COH_INPUT_NUMPAD8          = 72,
    COH_INPUT_NUMPAD9          = 73,
    COH_INPUT_NUMPAD4          = 75,
    COH_INPUT_NUMPAD5          = 76,
    COH_INPUT_NUMPAD6          = 77,
    COH_INPUT_NUMPAD1          = 79,
    COH_INPUT_NUMPAD2          = 80,
    COH_INPUT_NUMPAD3          = 81,
    COH_INPUT_NUMPAD0          = 82,
    COH_INPUT_F11              = 87,
    COH_INPUT_F12              = 88,
    COH_INPUT_F13              = 100,
    COH_INPUT_F14              = 101,
    COH_INPUT_F15              = 102,
    COH_INPUT_NUMPADEQUALS     = 141,
    COH_INPUT_ABNT_C1          = 115,
    COH_INPUT_ABNT_C2          = 126,
    COH_INPUT_COLON            = 146,
    COH_INPUT_UNDERLINE        = 147,
    COH_INPUT_NEXTTRACK        = 153,
    COH_INPUT_NUMPADENTER      = 156,
    COH_INPUT_RCONTROL         = 157,
    COH_INPUT_MUTE             = 160,
    COH_INPUT_CALCULATOR       = 161,
    COH_INPUT_PLAYPAUSE        = 162,
    COH_INPUT_MEDIASTOP        = 164,
    COH_INPUT_VOLUMEDOWN       = 174,
    COH_INPUT_VOLUMEUP         = 176,
    COH_INPUT_WEBHOME          = 178,
    COH_INPUT_NUMPADCOMMA      = 179,
    COH_INPUT_SYSRQ            = 183,
    COH_INPUT_PAUSE            = 197,
    COH_INPUT_HOME             = 199,
    COH_INPUT_END              = 207,
    COH_INPUT_INSERT           = 210,
    COH_INPUT_DELETE           = 211,
    COH_INPUT_WEBSEARCH        = 229,
    COH_INPUT_WEBFAVORITES     = 230,
    COH_INPUT_WEBREFRESH       = 231,
    COH_INPUT_WEBSTOP          = 232,
    COH_INPUT_WEBFORWARD       = 233,
    COH_INPUT_WEBBACK          = 234,
    COH_INPUT_MYCOMPUTER       = 235,
    COH_INPUT_MAIL             = 236,
    COH_INPUT_MEDIASELECT      = 237,
    COH_INPUT_NUMPADSTAR       = 55,
    COH_INPUT_LALT             = 56,
    COH_INPUT_CAPSLOCK         = 58,
    COH_INPUT_NUMPADMINUS      = 74,
    COH_INPUT_NUMPADPLUS       = 78,
    COH_INPUT_NUMPADPERIOD     = 83,
    COH_INPUT_NUMPADSLASH      = 181,
    COH_INPUT_RALT             = 184,
    COH_INPUT_UPARROW          = 200,
    COH_INPUT_PGUP             = 201,
    COH_INPUT_LEFTARROW        = 203,
    COH_INPUT_RIGHTARROW       = 205,
    COH_INPUT_DOWNARROW        = 208,
    COH_INPUT_PGDN             = 209,
    COH_INPUT_LBUTTON          = 238,
    COH_INPUT_MBUTTON          = 239,
    COH_INPUT_RBUTTON          = 240,
    COH_INPUT_BUTTON4          = 241,
    COH_INPUT_BUTTON5          = 242,
    COH_INPUT_BUTTON6          = 243,
    COH_INPUT_BUTTON7          = 244,
    COH_INPUT_BUTTON8          = 245,
    COH_INPUT_MOUSE_SCROLL     = 246,
    COH_INPUT_JOY1             = 90,
    COH_INPUT_JOY2             = 91,
    COH_INPUT_JOY3             = 92,
    COH_INPUT_JOY4             = 93,
    COH_INPUT_JOY5             = 94,
    COH_INPUT_JOY6             = 95,
    COH_INPUT_JOY7             = 96,
    COH_INPUT_JOY8             = 97,
    COH_INPUT_JOY9             = 98,
    COH_INPUT_JOY10            = 99,
    COH_INPUT_JOY11            = 127,
    COH_INPUT_JOY12            = 128,
    COH_INPUT_JOY13            = 129,
    COH_INPUT_JOY14            = 130,
    COH_INPUT_JOY15            = 131,
    COH_INPUT_JOY16            = 132,
    COH_INPUT_JOY17            = 133,
    COH_INPUT_JOY18            = 134,
    COH_INPUT_JOY19            = 135,
    COH_INPUT_JOY20            = 136,
    COH_INPUT_JOY21            = 137,
    COH_INPUT_JOY22            = 138,
    COH_INPUT_JOY23            = 139,
    COH_INPUT_JOY24            = 140,
    COH_INPUT_JOY25            = 89,
    COH_INPUT_JOYPAD_UP        = 185,
    COH_INPUT_JOYPAD_DOWN      = 186,
    COH_INPUT_JOYPAD_LEFT      = 187,
    COH_INPUT_JOYPAD_RIGHT     = 188,
    COH_INPUT_POV1_UP          = 103,
    COH_INPUT_POV1_DOWN        = 104,
    COH_INPUT_POV1_LEFT        = 105,
    COH_INPUT_POV1_RIGHT       = 113,
    COH_INPUT_POV2_UP          = 114,
    COH_INPUT_POV2_DOWN        = 116,
    COH_INPUT_POV2_LEFT        = 117,
    COH_INPUT_POV2_RIGHT       = 118,
    COH_INPUT_POV3_UP          = 119,
    COH_INPUT_POV3_DOWN        = 122,
    COH_INPUT_POV3_LEFT        = 124,
    COH_INPUT_POV3_RIGHT       = 142,
    COH_INPUT_JOYSTICK1_UP     = 189,
    COH_INPUT_JOYSTICK1_DOWN   = 190,
    COH_INPUT_JOYSTICK1_LEFT   = 191,
    COH_INPUT_JOYSTICK1_RIGHT  = 192,
    COH_INPUT_JOYSTICK2_UP     = 165,
    COH_INPUT_JOYSTICK2_DOWN   = 166,
    COH_INPUT_JOYSTICK2_LEFT   = 167,
    COH_INPUT_JOYSTICK2_RIGHT  = 168,
    COH_INPUT_JOYSTICK3_UP     = 143,
    COH_INPUT_JOYSTICK3_DOWN   = 152,
    COH_INPUT_JOYSTICK3_LEFT   = 154,
    COH_INPUT_JOYSTICK3_RIGHT  = 155,
    COH_INPUT_LAST_NON_GENERIC = 256,
    COH_KEY_GENERIC_CONTROL    = 0x801, // either of control keys
    COH_KEY_GENERIC_SHIFT      = 0x802, // either of shift keys
    COH_KEY_GENERIC_ALT        = 0x803, // either of alt keys
    COH_MOUSE_MOVE             = 0x1000,
};

static const QMap<QString,ModKeys> modNameToEnum = {
    {"LCTRL",CTRL_MOD},
    {"LCONTROL",CTRL_MOD},
    {"RCTRL",CTRL_MOD},
    {"RCONTROL",CTRL_MOD},
    {"LALT",ALT_MOD},
    {"RALT",ALT_MOD},
    {"LSHIFT",SHIFT_MOD},
    {"RSHIFT",SHIFT_MOD},
};

static const QMap<QString,KeyName> keyNameToEnum = {
    {"ESCAPE",COH_INPUT_ESCAPE},
    {"ESC",COH_INPUT_ESCAPE},
    {"1",COH_INPUT_1},
    {"2",COH_INPUT_2},
    {"3",COH_INPUT_3},
    {"4",COH_INPUT_4},
    {"5",COH_INPUT_5},
    {"6",COH_INPUT_6},
    {"7",COH_INPUT_7},
    {"8",COH_INPUT_8},
    {"9",COH_INPUT_9},
    {"0",COH_INPUT_0},
    {"MINUS",COH_INPUT_MINUS},
    {"-",COH_INPUT_MINUS},
    {"EQUALS",COH_INPUT_EQUALS},
    {"TAB",COH_INPUT_TAB},
    {"Q",COH_INPUT_Q},
    {"W",COH_INPUT_W},
    {"E",COH_INPUT_E},
    {"R",COH_INPUT_R},
    {"T",COH_INPUT_T},
    {"Y",COH_INPUT_Y},
    {"U",COH_INPUT_U},
    {"I",COH_INPUT_I},
    {"O",COH_INPUT_O},
    {"P",COH_INPUT_P},
    {"LBRACKET",COH_INPUT_LBRACKET},
    {"RBRACKET",COH_INPUT_RBRACKET},
    {"RETURN",COH_INPUT_RETURN},
    {"ENTER",COH_INPUT_RETURN},
    {"LCONTROL",COH_INPUT_LCONTROL},
    {"LCTRL",COH_INPUT_LCONTROL},
    {"A",COH_INPUT_A},
    {"S",COH_INPUT_S},
    {"D",COH_INPUT_D},
    {"F",COH_INPUT_F},
    {"G",COH_INPUT_G},
    {"H",COH_INPUT_H},
    {"J",COH_INPUT_J},
    {"K",COH_INPUT_K},
    {"L",COH_INPUT_L},
    {"SEMICOLON",COH_INPUT_SEMICOLON},
    {";",COH_INPUT_SEMICOLON},
    {"APOSTROPHE",COH_INPUT_APOSTROPHE},
    {"'",COH_INPUT_APOSTROPHE},
    {"TILDE",COH_INPUT_TILDE},
    {"LSHIFT",COH_INPUT_LSHIFT},
    {"BACKSLASH",COH_INPUT_BACKSLASH},
    {"\\",COH_INPUT_BACKSLASH},
    {"Z",COH_INPUT_Z},
    {"X",COH_INPUT_X},
    {"C",COH_INPUT_C},
    {"V",COH_INPUT_V},
    {"B",COH_INPUT_B},
    {"N",COH_INPUT_N},
    {"M",COH_INPUT_M},
    {"COMMA",COH_INPUT_COMMA},
    {",",COH_INPUT_COMMA},
    {"PERIOD",COH_INPUT_PERIOD},
    {".",COH_INPUT_PERIOD},
    {"SLASH",COH_INPUT_SLASH},
    {"/",COH_INPUT_SLASH},
    {"RSHIFT",COH_INPUT_RSHIFT},
    {"MULTIPLY",COH_INPUT_MULTIPLY},
    {"SPACE",COH_INPUT_SPACE},
    {"F1",COH_INPUT_F1},
    {"F2",COH_INPUT_F2},
    {"F3",COH_INPUT_F3},
    {"F4",COH_INPUT_F4},
    {"F5",COH_INPUT_F5},
    {"F6",COH_INPUT_F6},
    {"F7",COH_INPUT_F7},
    {"F8",COH_INPUT_F8},
    {"F9",COH_INPUT_F9},
    {"F10",COH_INPUT_F10},
    {"NUMLOCK",COH_INPUT_NUMLOCK},
    {"SCROLL",COH_INPUT_SCROLL},
    {"NUMPAD7",COH_INPUT_NUMPAD7},
    {"NUMPAD8",COH_INPUT_NUMPAD8},
    {"NUMPAD9",COH_INPUT_NUMPAD9},
    {"NUMPAD4",COH_INPUT_NUMPAD4},
    {"NUMPAD5",COH_INPUT_NUMPAD5},
    {"NUMPAD6",COH_INPUT_NUMPAD6},
    {"NUMPAD1",COH_INPUT_NUMPAD1},
    {"NUMPAD2",COH_INPUT_NUMPAD2},
    {"NUMPAD3",COH_INPUT_NUMPAD3},
    {"NUMPAD0",COH_INPUT_NUMPAD0},
    {"F11",COH_INPUT_F11},
    {"F12",COH_INPUT_F12},
    {"F13",COH_INPUT_F13},
    {"F14",COH_INPUT_F14},
    {"F15",COH_INPUT_F15},
    {"NUMPADEQUALS",COH_INPUT_NUMPADEQUALS},
    {"ABNT_C1",COH_INPUT_ABNT_C1},
    {"ABNT_C2",COH_INPUT_ABNT_C2},
    {"COLON",COH_INPUT_COLON},
    {"UNDERLINE",COH_INPUT_UNDERLINE},
    {"NEXTTRACK",COH_INPUT_NEXTTRACK},
    {"NUMPADENTER",COH_INPUT_NUMPADENTER},
    {"RCONTROL",COH_INPUT_RCONTROL},
    {"RCTRL",COH_INPUT_RCONTROL},
    {"MUTE",COH_INPUT_MUTE},
    {"CALCULATOR",COH_INPUT_CALCULATOR},
    {"PLAYPAUSE",COH_INPUT_PLAYPAUSE},
    {"MEDIASTOP",COH_INPUT_MEDIASTOP},
    {"VOLUMEDOWN",COH_INPUT_VOLUMEDOWN},
    {"VOLUMEUP",COH_INPUT_VOLUMEUP},
    {"WEBHOME",COH_INPUT_WEBHOME},
    {"NUMPADCOMMA",COH_INPUT_NUMPADCOMMA},
    {"SYSRQ",COH_INPUT_SYSRQ},
    {"PAUSE",COH_INPUT_PAUSE},
    {"HOME",COH_INPUT_HOME},
    {"END",COH_INPUT_END},
    {"INSERT",COH_INPUT_INSERT},
    {"DELETE",COH_INPUT_DELETE},
    {"WEBSEARCH",COH_INPUT_WEBSEARCH},
    {"WEBFAVORITES",COH_INPUT_WEBFAVORITES},
    {"WEBREFRESH",COH_INPUT_WEBREFRESH},
    {"WEBSTOP",COH_INPUT_WEBSTOP},
    {"WEBFORWARD",COH_INPUT_WEBFORWARD},
    {"WEBBACK",COH_INPUT_WEBBACK},
    {"MYCOMPUTER",COH_INPUT_MYCOMPUTER},
    {"MAIL",COH_INPUT_MAIL},
    {"MEDIASELECT",COH_INPUT_MEDIASELECT},
    {"BACKSPACE",COH_INPUT_BACKSPACE},
    {"NUMPADSTAR",COH_INPUT_NUMPADSTAR},
    {"LALT",COH_INPUT_LALT},
    {"CAPSLOCK",COH_INPUT_CAPSLOCK},
    {"NUMPADMINUS",COH_INPUT_NUMPADMINUS},
    {"NUMPADPLUS",COH_INPUT_NUMPADPLUS},
    {"NUMPADPERIOD",COH_INPUT_NUMPADPERIOD},
    {"NUMPADSLASH",COH_INPUT_NUMPADSLASH},
    {"RALT",COH_INPUT_RALT},
    {"UPARROW",COH_INPUT_UPARROW},
    {"PGUP",COH_INPUT_PGUP},
    {"PAGEUP",COH_INPUT_PGUP},
    {"LEFTARROW",COH_INPUT_LEFTARROW},
    {"RIGHTARROW",COH_INPUT_RIGHTARROW},
    {"DOWNARROW",COH_INPUT_DOWNARROW},
    {"PGDN",COH_INPUT_PGDN},
    {"PAGEDOWN",COH_INPUT_PGDN},
    {"LBUTTON",COH_INPUT_LBUTTON},
    {"MBUTTON",COH_INPUT_MBUTTON},
    {"RBUTTON",COH_INPUT_RBUTTON},
    {"BUTTON4",COH_INPUT_BUTTON4},
    {"BUTTON5",COH_INPUT_BUTTON5},
    {"BUTTON6",COH_INPUT_BUTTON6},
    {"BUTTON7",COH_INPUT_BUTTON7},
    {"BUTTON8",COH_INPUT_BUTTON8},
    {"MOUSE_SCROLL",COH_INPUT_MOUSE_SCROLL},
    {"MOUSEWHEEL",COH_INPUT_MOUSE_SCROLL},
    {"JOY1",COH_INPUT_JOY1},
    {"JOY2",COH_INPUT_JOY2},
    {"JOY3",COH_INPUT_JOY3},
    {"JOY4",COH_INPUT_JOY4},
    {"JOY5",COH_INPUT_JOY5},
    {"JOY6",COH_INPUT_JOY6},
    {"JOY7",COH_INPUT_JOY7},
    {"JOY8",COH_INPUT_JOY8},
    {"JOY9",COH_INPUT_JOY9},
    {"JOY10",COH_INPUT_JOY10},
    {"JOY11",COH_INPUT_JOY11},
    {"JOY12",COH_INPUT_JOY12},
    {"JOY13",COH_INPUT_JOY13},
    {"JOY14",COH_INPUT_JOY14},
    {"JOY15",COH_INPUT_JOY15},
    {"JOY16",COH_INPUT_JOY16},
    {"JOY17",COH_INPUT_JOY17},
    {"JOY18",COH_INPUT_JOY18},
    {"JOY19",COH_INPUT_JOY19},
    {"JOY20",COH_INPUT_JOY20},
    {"JOY21",COH_INPUT_JOY21},
    {"JOY22",COH_INPUT_JOY22},
    {"JOY23",COH_INPUT_JOY23},
    {"JOY24",COH_INPUT_JOY24},
    {"JOY25",COH_INPUT_JOY25},
    {"JOYPAD_UP",COH_INPUT_JOYPAD_UP},
    {"JOYPAD_DOWN",COH_INPUT_JOYPAD_DOWN},
    {"JOYPAD_LEFT",COH_INPUT_JOYPAD_LEFT},
    {"JOYPAD_RIGHT",COH_INPUT_JOYPAD_RIGHT},
    {"POV1_UP",COH_INPUT_POV1_UP},
    {"POV1_DOWN",COH_INPUT_POV1_DOWN},
    {"POV1_LEFT",COH_INPUT_POV1_LEFT},
    {"POV1_RIGHT",COH_INPUT_POV1_RIGHT},
    {"POV2_UP",COH_INPUT_POV2_UP},
    {"POV2_DOWN",COH_INPUT_POV2_DOWN},
    {"POV2_LEFT",COH_INPUT_POV2_LEFT},
    {"POV2_RIGHT",COH_INPUT_POV2_RIGHT},
    {"POV3_UP",COH_INPUT_POV3_UP},
    {"POV3_DOWN",COH_INPUT_POV3_DOWN},
    {"POV3_LEFT",COH_INPUT_POV3_LEFT},
    {"POV3_RIGHT",COH_INPUT_POV3_RIGHT},
    {"JOYSTICK1_UP",COH_INPUT_JOYSTICK1_UP},
    {"JOYSTICK1_DOWN",COH_INPUT_JOYSTICK1_DOWN},
    {"JOYSTICK1_LEFT",COH_INPUT_JOYSTICK1_LEFT},
    {"JOYSTICK1_RIGHT",COH_INPUT_JOYSTICK1_RIGHT},
    {"JOYSTICK2_UP",COH_INPUT_JOYSTICK2_UP},
    {"JOYSTICK2_DOWN",COH_INPUT_JOYSTICK2_DOWN},
    {"JOYSTICK2_LEFT",COH_INPUT_JOYSTICK2_LEFT},
    {"JOYSTICK2_RIGHT",COH_INPUT_JOYSTICK2_RIGHT},
    {"JOYSTICK3_UP",COH_INPUT_JOYSTICK3_UP},
    {"JOYSTICK3_DOWN",COH_INPUT_JOYSTICK3_DOWN},
    {"JOYSTICK3_LEFT",COH_INPUT_JOYSTICK3_LEFT},
    {"JOYSTICK3_RIGHT",COH_INPUT_JOYSTICK3_RIGHT},
};

struct Keybind
{
    KeyName Key;
    ModKeys Mods; // Mod  0, 1 - CONTROL_KEY_PRESSED, 2 - SHIFT PRESSED, 3 - ALT PRESSED
    QString KeyString;
    QString Command;
    bool    IsSecondary = false;
};

struct Keybind_Profiles
{
    QString DisplayName;
    QString Name;
    std::vector<Keybind> KeybindArr;
};

struct CommandEntry {
    QString KeyString;
    KeyName Key;
    ModKeys Mods; // Mod  0, 1 - CONTROL_KEY_PRESSED, 2 - SHIFT PRESSED, 3 - ALT PRESSED
};
struct Command
{
    QString CmdString;
    QString DisplayName;
    CommandEntry CommandArr[2];
};
struct CommandCategory_Entry
{
    QString DisplayName;
    std::vector<Command> commands;
};

using Parse_AllKeyProfiles = std::vector<Keybind_Profiles>;
using CurrentKeybinds = std::vector<Keybind>;
using Parse_AllCommandCategories = std::vector<CommandCategory_Entry>;

class KeybindSettings
{
public:
// Keybind serialization class version
static const constexpr  uint32_t class_version = 1;
public:
        // Keybind Members
        Parse_AllKeyProfiles    m_keybind_profiles;
        QString                 m_cur_keybind_profile = "Default";

                                KeybindSettings();
        // Keybind Methods
        void                    setKeybindProfile(QString &profile);
        const CurrentKeybinds & getCurrentKeybinds() const;
        void                    resetKeybinds(const Parse_AllKeyProfiles &default_profiles);
        void                    setKeybind(QString &profile, KeyName &key, ModKeys &mods, QString &command, bool &is_secondary);
        void                    removeKeybind(QString &profile, KeyName &key, ModKeys &mods);
        void                    keybindsDump();
};
