// Copyright 2002-2004 Frozenbyte Ltd.

// from 1650

#define GS_CMD_BASE 1650

GS_CMD(0, GS_CMD_GETOPTIONVALUE, "getOptionValue", STRING)
GS_CMD(1, GS_CMD_SETOPTIONVALUE, "setOptionValue", STRING)
GS_CMD(2, GS_CMD_PRINTOPTIONVALUE, "printOptionValue", STRING)
GS_CMD(3, GS_CMD_LISTOPTIONS, "listOptions", NONE)
GS_CMD(4, GS_CMD_SETOPTIONSTRINGVALUETO, "setOptionStringValueTo", STRING)
GS_CMD(5, GS_CMD_SETOPTIONFLOATVALUETO, "setOptionFloatValueTo", STRING)
GS_CMD(6, GS_CMD_SETOPTIONINTVALUETO, "setOptionIntValueTo", STRING)
GS_CMD(7, GS_CMD_SETOPTIONBOOLVALUETO, "setOptionBoolValueTo", STRING)
GS_CMD(8, GS_CMD_TOGGLEOPTION, "toggleOption", STRING)
GS_CMD(9, GS_CMD_APPLYOPTIONS, "applyOptions", NONE)
GS_CMD(10, GS_CMD_SETOPTIONSTRINGVALUE, "setOptionStringValue", STRING)
GS_CMD_SIMPLE(11, unlockBonusOption, STRING)
GS_CMD_SIMPLE(12, makeBonusOptionsAvailable, NONE)
GS_CMD_SIMPLE(13, getBonusOptionsAvailable, NONE)

#undef GS_CMD_BASE

// up to 1699
