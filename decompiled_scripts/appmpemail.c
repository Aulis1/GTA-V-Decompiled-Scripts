void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
	{
		func_61();
	}
	func_60();
	Global_21871 = 0;
	Global_111638.f_14046[Global_19486].f_18 = 0;
	Global_19663 = 0;
	func_59();
	func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_53();
	func_51();
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 7;
	}
	iLocal_43 = GAMEPLAY::GET_GAME_TIMER();
	Global_19490 = 0;
	MOBILE::GET_MOBILE_PHONE_POSITION(&Local_1366);
	Local_1363 = { Local_1366 };
	Local_1363.x = (Local_1363.x - 10f);
	Local_1363.y = (Local_1363.y + 20f);
	Global_21838 = 0;
	Global_21839 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_21839 == 0 && Global_21838 == 1)
		{
			func_50();
		}
		if (Global_21839 == 1 && Global_21838 == 0)
		{
			func_45();
		}
		if (iLocal_42 == 0)
		{
			iLocal_44 = GAMEPLAY::GET_GAME_TIMER();
			if ((iLocal_44 - iLocal_43) > 500)
			{
				iLocal_42 = 1;
			}
		}
		if ((Global_19486.f_1 != 9 && Global_21839 == 0) && Global_21838 == 0)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					if (Global_21871 == 0)
					{
						if (Global_2547059 == 0)
						{
							func_44();
							func_37();
						}
					}
					break;
				
				case 8:
					if (Global_21871 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_21871 == 0)
			{
				if (func_4())
				{
					Global_21838 = 1;
				}
			}
			else if (func_3(2, Global_19454, 0) || GAMEPLAY::IS_BIT_SET(Global_7357, 12))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_36]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					GAMEPLAY::CLEAR_BIT(&Global_7357, 12);
					func_2();
					Global_19464 = 1;
					Global_21871 = 0;
					if (Global_19486.f_1 > 3)
					{
						Global_19486.f_1 = 7;
					}
					if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
					{
						func_61();
					}
					func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_53();
					func_51();
					if (Global_4268500[iLocal_36].f_29 > 0)
					{
						if (Global_4268500[iLocal_36].f_31 == 1)
						{
							Global_4268500[iLocal_36].f_29 = 4;
							Global_4268500[iLocal_36].f_24 = 1;
						}
						else
						{
							Global_4268500[iLocal_36].f_24 = 1;
						}
					}
				}
			}
		}
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
		{
			func_61();
		}
		if (func_1())
		{
			func_61();
		}
	}
}

int func_1()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_19475, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (GAMEPLAY::IS_PC_VERSION())
		{
			if (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && CONTROLS::_IS_INPUT_DISABLED(2)))
			{
				return 0;
			}
		}
		if (UI::IS_PAUSE_MENU_ACTIVE() || UI::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (iLocal_39)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_39 = 0;
		}
	}
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_39 == 0)
	{
		if (func_3(2, Global_19462, 0))
		{
			func_9();
			iLocal_39 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_19463, 0))
		{
			func_6();
			iLocal_39 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_6()
{
	func_58(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, 1);
	func_7();
}

void func_7()
{
	if (func_8())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_MOVE_FINGER(1);
		}
	}
}

int func_8()
{
	if (Global_76622)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4270043 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_9()
{
	func_58(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, 1);
	func_10();
}

void func_10()
{
	if (func_8())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_MOVE_FINGER(2);
		}
	}
}

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_4268500[iLocal_36].f_24 == 1)
	{
		if (Global_19464 == 0)
		{
			if (CONTROLS::IS_CONTROL_PRESSED(2, Global_19457))
			{
				func_2();
				Global_19464 = 1;
				func_30();
				if (Global_4268500[iLocal_36].f_27 == 1)
				{
					Global_4268500[iLocal_36].f_99[0] = 0;
					Global_4268500[iLocal_36].f_99[1] = 0;
					Global_4268500[iLocal_36].f_99[2] = 0;
				}
				else
				{
					Global_4268500[iLocal_36].f_99[Global_19486] = 0;
				}
				if (func_29(iLocal_36))
				{
				}
				else
				{
					Global_4268500[iLocal_36].f_24 = 0;
					Global_4268500[iLocal_36].f_28 = 0;
				}
				UI::_REMOVE_NOTIFICATION(Global_4268500[iLocal_36].f_16);
				func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				if (iLocal_34 > 0)
				{
					iLocal_34 = (iLocal_34 - 1);
				}
				func_51();
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
					Global_21871 = 0;
				}
			}
		}
	}
	else if (Global_19464 == 0)
	{
		if (CONTROLS::IS_CONTROL_PRESSED(2, Global_19458))
		{
			if (iLocal_38 == 1)
			{
				if (Global_19486.f_1 > 3)
				{
					StringCopy(&Global_73809, UI::_GET_LABEL_TEXT(&Global_21846), 64);
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&Global_73809, "HARDCODED_4207156"))
					{
						Global_19486.f_1 = 3;
						Global_1694146 = 1;
					}
					else
					{
						Global_73938 = 7;
						GAMEPLAY::SET_BIT(&Global_7357, 10);
						Global_19486.f_1 = 6;
					}
				}
				func_61();
			}
		}
	}
	if (Global_4268500[iLocal_36].f_31 == 1)
	{
		if (Global_19464 == 0)
		{
			if (func_3(2, Global_19458, 0))
			{
				func_27();
				Global_19464 = 1;
				Global_4268500[iLocal_36].f_29 = 2;
				Global_4268500[iLocal_36].f_24 = 1;
				Global_4268500[iLocal_36].f_31 = 0;
				GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
				Global_21871 = 0;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
				}
				func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				func_51();
			}
		}
	}
	if (Global_19464 == 0 && iLocal_42 == 1)
	{
		if (func_3(2, Global_19455, 0))
		{
			Global_19464 = 1;
			if (Global_4268500[iLocal_36].f_29 > 0)
			{
				func_27();
				Global_4268500[iLocal_36].f_29 = 3;
				Global_4268500[iLocal_36].f_24 = 1;
				Global_21871 = 0;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
				}
				func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				func_51();
			}
			else if (Global_4268500[iLocal_36].f_30 == 1)
			{
				func_27();
				Global_6671 = 144;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 10;
					func_25();
				}
				func_24("appContacts");
				Global_19484 = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_6671 = Global_4268500[iLocal_36].f_17;
				if (func_23(Global_6671, Global_19486) == 0)
				{
					func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), "CELL_211", &(Global_1798[Global_6671].f_3), 0);
				}
				func_13();
				func_61();
			}
		}
	}
}

void func_13()
{
	if (Global_19469 == 1)
	{
		return;
	}
	if (Global_19486.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		if (Global_76622)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_19486.f_1)
	{
		case 6:
			func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(Global_7961);
			if (Global_7961 == 1)
			{
				func_58(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19490;
			}
			else
			{
				func_58(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19491), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			}
			else if (Global_76622)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				GAMEPLAY::SET_BIT(&Global_7356, 17);
			}
			if (Global_76622)
			{
				func_18();
				GAMEPLAY::CLEAR_BIT(&Global_7358, 9);
				func_58(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_58(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19485 == 1)
			{
				func_17();
				func_58(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_20818)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CONDFON");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					func_16("CELL_300");
					func_16("CELL_217");
					func_16("CELL_217");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else if (func_23(Global_6671, Global_19486) == 0)
				{
					func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), "CELL_217", &(Global_1798[Global_6671].f_3), 0);
				}
				func_58(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_58(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_17();
				if (Global_20818)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CONDFON");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					func_16("CELL_300");
					func_16("CELL_219");
					func_16("CELL_219");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else
				{
					if (Global_21063)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_23(Global_6671, Global_19486) == 0)
					{
						func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), &cVar0, &(Global_1798[Global_6671].f_3), 0);
					}
				}
				func_58(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		func_15();
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15()
{
	if (Global_76622)
	{
		func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
	}
}

void func_16(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_17()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_19486 == 0)
		{
			switch (Global_111638.f_14046[Global_19486].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 1)
		{
			switch (Global_111638.f_14046[Global_19486].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 2)
		{
			switch (Global_111638.f_14046[Global_19486].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 3)
		{
			switch (Global_4270041)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_18()
{
	if (Global_76622)
	{
		if (func_19() == 0)
		{
			return;
		}
		func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::SET_BIT(&Global_7356, 17);
	}
}

int func_19()
{
	return 0;
}

void func_20(int iParam0)
{
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_21(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_16(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76622)
								{
									iVar4 = 0;
									iVar4 = Global_4268499;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268500[iVar5].f_24 != 0)
										{
											if (Global_4268500[iVar5].f_28 == 0)
											{
												if (Global_4268500[iVar5].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42607;
											break;
										
										case 1:
											iVar6 = Global_42608;
											break;
										
										case 2:
											iVar6 = Global_42609;
											break;
										
										default:
											break;
									}
									func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_16(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7362);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 2)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_16(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_16(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar8);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_16(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if ((iVar1 == 23 && GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_7363[iVar1]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_7357, 6))
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_16(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (Global_7363[iVar1].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else
							{
								func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_21(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_22(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_16(sParam7);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_16(sParam8);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_16(sParam9);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_16(sParam10);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_16(sParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

int func_23(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_24[iParam1];
}

void func_24(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_25()
{
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_26() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
			if (Global_76622)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_19429)
			{
				if (Global_6671 != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
							}
							else
							{
								if (Global_76622)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 0);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 0);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 0);
								}
								GAMEPLAY::SET_BIT(&Global_7356, 11);
								AI::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_26()
{
	uVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_27()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_19475, 1);
		func_28();
	}
}

void func_28()
{
	if (func_8())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

int func_29(int iParam0)
{
	if ((Global_111638.f_14136[iParam0].f_99[0] == 1 || Global_111638.f_14136[iParam0].f_99[1] == 1) || Global_111638.f_14136[iParam0].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_30()
{
	if (func_21(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_31();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

var func_31()
{
	func_32();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_32()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_35(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_34(PLAYER::PLAYER_PED_ID());
			if (func_33(iVar0) && (!func_21(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_33(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_1798[iParam0];
}

void func_37()
{
	if (Global_19464 == 0)
	{
		if ((func_3(2, Global_19455, 0) || Global_4269750 == 1) || Global_21865 == 1)
		{
			if (Global_4269750 == 0 && Global_21865 == 0)
			{
				func_27();
			}
			Global_19464 = 1;
			iLocal_42 = 0;
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			iLocal_36 = iLocal_19[iLocal_34];
			if (iLocal_34 == iLocal_33 || iLocal_34 > iLocal_33)
			{
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 8;
					Global_21871 = 1;
					iLocal_35 = iLocal_34;
					SOCIALCLUB::_0x4737980E8A283806(iLocal_19[iLocal_34], &Local_1374);
				}
				SYSTEM::SETTIMERB(0);
				iLocal_40 = 0;
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "GET_CURRENT_SELECTION");
				uLocal_45 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
				while (!GRAPHICS::_0x768FF8961BA904D6(uLocal_45) && iLocal_40 == 0)
				{
					SYSTEM::WAIT(0);
					if (SYSTEM::TIMERB() > 2000)
					{
						iLocal_40 = 1;
					}
				}
				func_42();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(9);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_16("CELL_1");
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_TO_FIELD");
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_FROM_FIELD");
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_2));
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_EMAIL_BCON");
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[0]));
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[1]));
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[2]));
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[3]));
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[4]));
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[5]));
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[6]));
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[7]));
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[8]));
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[9]));
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_2000");
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_2));
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				switch (Local_1374.f_313)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("EmailAds_Dock_Tease");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
						break;
					
					case 3:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("EmailAds_Warstock");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
						break;
					
					case 4:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("EmailAds_Legendary_Motorsport");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
						break;
					
					case 5:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("EmailAds_LS_Customs");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
						break;
					
					case 6:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("EmailAds_Elitas_Travel");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
						break;
					
					case 7:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("EmailAds_LS_Tourist_Info");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
						break;
					
					case 8:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("emailads_dynasty8");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
						break;
					
					case 9:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("emailads_bennys");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
						break;
					
					case 10:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("emailads_ammunation");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
						break;
					
					case 11:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("emailads_SSSA");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
						break;
					
					case 12:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("emailads_maze_bank");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
						break;
					
					case 13:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("emailads_shark");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
						break;
					
					case 14:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("emailads_RP");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
						break;
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_58(Global_19467, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_34 == iLocal_33)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_4269765, 25))
					{
						GAMEPLAY::CLEAR_BIT(&Global_4269765, 25);
					}
					if (Global_4268499 > 0)
					{
						func_39(9980, uLocal_1369, -1, 1, 0);
						if (Global_4268499 > 0)
						{
							Global_4268499 = 0;
						}
					}
				}
				return;
			}
			if (Global_4268500[iLocal_36].f_24 != 0)
			{
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 8;
				}
				if (Global_4269750 == 1 || Global_21865 == 1)
				{
					iLocal_36 = iLocal_19[0];
					iLocal_35 = 0;
					if (Global_4269750 == 1)
					{
					}
					Global_21865 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_40 = 0;
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "GET_CURRENT_SELECTION");
					uLocal_45 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
					while (!GRAPHICS::_0x768FF8961BA904D6(uLocal_45) && iLocal_40 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_40 = 1;
						}
					}
					if (iLocal_40 == 1)
					{
						iLocal_41 = 0;
					}
					else
					{
						iLocal_41 = GRAPHICS::_0x2DE7EFA66B906036(uLocal_45);
					}
					if (iLocal_41 < 0)
					{
						iLocal_41 = 0;
					}
					iLocal_36 = iLocal_19[iLocal_34];
					iLocal_35 = iLocal_34;
				}
				Global_4268500[iLocal_36].f_28 = 1;
				iLocal_38 = 0;
				StringCopy(&Global_21846, "NO_HYPERLINK", 64);
				Var0 = { Global_4268500[iLocal_36] };
				StringConCat(&Var0, "_LINK", 64);
				if (UI::DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_21846 = { Var0 };
					iLocal_38 = 1;
					if (Global_19474)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					GAMEPLAY::SET_BIT(&Global_7356, 17);
					Global_4268500[iLocal_36].f_26 = 1;
					Global_4268500[iLocal_36].f_24 = 2;
				}
				if (Global_4268500[iLocal_36].f_26 == 0)
				{
					Global_4268500[iLocal_36].f_24 = 1;
				}
				func_42();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(9);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_16("CELL_1");
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_TO_FIELD");
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				if (Global_4268500[iLocal_36].f_17 == 145)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_FROM_FIELD");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_36].f_50));
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_FROM_FIELD");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1798[Global_4268500[iLocal_36].f_17].f_3));
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				switch (Global_4268500[iLocal_36].f_32)
				{
					case 0:
						func_16(&(Global_4268500[iLocal_36]));
						break;
					
					case 1:
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_4268500[iLocal_36]));
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_36].f_33));
						if (Global_4268500[iLocal_36].f_66 == 1 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_36].f_67), "NULL"))
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_36].f_67));
						}
						if ((Global_4268500[iLocal_36].f_66 == 2 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_36].f_67), "NULL")) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_36].f_83), "NULL"))
						{
							if (UI::DOES_TEXT_LABEL_EXIST(&(Global_4268500[iLocal_36].f_67)))
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268500[iLocal_36].f_67));
							}
							else
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_36].f_67));
							}
							if (UI::DOES_TEXT_LABEL_EXIST(&(Global_4268500[iLocal_36].f_83)))
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268500[iLocal_36].f_83));
							}
							else
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_36].f_83));
							}
						}
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
						break;
					
					case 2:
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_4268500[iLocal_36]));
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_4268500[iLocal_36].f_49);
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
						break;
					
					case 3:
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_4268500[iLocal_36]));
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_36].f_33));
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_4268500[iLocal_36].f_49);
						if (Global_4268500[iLocal_36].f_66 == 1 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_36].f_67), "NULL"))
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_36].f_67));
						}
						if ((Global_4268500[iLocal_36].f_66 == 2 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_36].f_67), "NULL")) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_36].f_83), "NULL"))
						{
							if (UI::DOES_TEXT_LABEL_EXIST(&(Global_4268500[iLocal_36].f_67)))
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268500[iLocal_36].f_67));
							}
							else
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_36].f_67));
							}
							if (UI::DOES_TEXT_LABEL_EXIST(&(Global_4268500[iLocal_36].f_83)))
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268500[iLocal_36].f_83));
							}
							else
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_36].f_83));
							}
						}
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
						break;
					
					case 4:
						func_38(iLocal_36);
						break;
					
					case 5:
						func_38(iLocal_36);
						break;
					
					case 6:
						func_38(iLocal_36);
						break;
					
					case 7:
						func_38(iLocal_36);
						break;
					
					case 8:
						func_38(iLocal_36);
						break;
					
					case 9:
						func_38(iLocal_36);
						break;
					
					case 10:
						func_38(iLocal_36);
						break;
					
					case 11:
						func_38(iLocal_36);
						break;
				}
				if (Global_4268500[iLocal_36].f_17 == 145)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_2000");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_36].f_50));
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else
				{
					func_16(&(Global_1798[Global_4268500[iLocal_36].f_17].f_3));
				}
				if (Global_4268500[iLocal_36].f_17 == 149)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("emailads_maze_bank");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
				}
				if (Global_4268500[iLocal_36].f_17 == 140)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("EmailAds_Warstock");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
				}
				if (Global_4268500[iLocal_36].f_17 == 155)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("emailads_arena");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
				}
				if (Global_4268500[iLocal_36].f_17 == 160)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("emailads_diamond");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				Global_21871 = 1;
				func_58(Global_19467, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				UI::_REMOVE_NOTIFICATION(Global_4268500[iLocal_36].f_16);
				if (Global_4268500[iLocal_36].f_29 > 0)
				{
					if (Global_19474)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4268500[iLocal_36].f_30 == 1)
				{
					if (Global_19474)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4268500[iLocal_36].f_29 > 0)
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_36]), "CELL_FINV"))
					{
						if (Global_19474)
						{
							func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_19474)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4268500[iLocal_36].f_24 == 2)
				{
					if (Global_4268500[iLocal_36].f_31 == 1)
					{
						iLocal_38 = 0;
						if (Global_19474)
						{
							func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						GAMEPLAY::SET_BIT(&Global_7356, 17);
					}
					else if (iLocal_38 == 0)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
					}
				}
				else if (Global_19474)
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					GAMEPLAY::SET_BIT(&Global_7356, 17);
				}
				else
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					GAMEPLAY::SET_BIT(&Global_7356, 17);
				}
				Global_111638.f_14046[Global_19486].f_18 = 0;
				Global_4269750 = 0;
			}
			else
			{
				Global_111638.f_14046[Global_19486].f_18 = 0;
				Global_4269750 = 0;
			}
		}
		if (Global_2547059 == 0)
		{
			if (Global_76622)
			{
			}
		}
	}
}

void func_38(int iParam0)
{
	iVar0 = 0;
	switch (Global_111638.f_14136[iParam0].f_49)
	{
		case 1:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL01");
			break;
		
		case 2:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL02");
			break;
		
		case 3:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL03");
			break;
		
		case 4:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL04");
			break;
		
		case 5:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL05");
			break;
		
		case 6:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL06");
			break;
		
		case 7:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL07");
			break;
		
		case 8:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL08");
			break;
		
		case 9:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL09");
			break;
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_111638.f_14136[iParam0]));
	while (iVar0 < Global_111638.f_14136[iParam0].f_49)
	{
		switch (Global_111638.f_14136[iParam0].f_32)
		{
			case 4:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2537071.f_1662[iVar0]));
				break;
			
			case 5:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662018[iVar0]));
				break;
			
			case 6:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662059[iVar0]));
				break;
			
			case 7:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662080[iVar0]));
				break;
			
			case 8:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662097[iVar0]));
				break;
			
			case 9:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662110[iVar0]));
				break;
			
			case 10:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662123[iVar0]));
				break;
			
			case 11:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662136[iVar0]));
				break;
		}
		iVar0++;
	}
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_39(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_40(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

int func_40(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

int func_41()
{
	return Global_1312745;
}

void func_42()
{
	if (iLocal_1362)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_46);
	}
	iLocal_1362 = 0;
	if (Global_4268500[iLocal_36].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 59)
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_36]), &(Local_62[iVar0])))
			{
				if (func_43(&(Local_62[iVar0])))
				{
					StringCopy(&Local_46, "BAT_CASE_", 64);
					StringIntConCat(&Local_46, Global_1694138, 64);
				}
				else
				{
					Local_46 = { Local_417[iVar0] };
				}
				iLocal_1362 = 1;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&Local_46, 0);
				while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&Local_46))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

int func_43(var uParam0)
{
	switch (GAMEPLAY::GET_HASH_KEY(uParam0))
	{
		case 368818696:
		case -242537573:
		case 293851599:
		case 1276417163:
		case -695052470:
		case -272335065:
		case 1286719131:
		case -1417266496:
		case -469944288:
		case -687436221:
		case 1989355620:
		case 549480519:
		case 1944388503:
		case -934641488:
		case -728564821:
		case 1522380948:
		case -1256768569:
		case -320488889:
		case -539437394:
		case -1801936221:
			return 1;
		
		default:
	}
	return 0;
}

void func_44()
{
	if (iLocal_39)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_39 = 0;
		}
	}
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_34++;
			if (iLocal_34 == iLocal_32)
			{
				iLocal_34 = 0;
			}
			func_6();
		}
	}
	if (iLocal_39 == 0)
	{
		if (func_3(2, Global_19462, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
				func_9();
			}
			iLocal_39 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_19463, 0))
		{
			iLocal_34++;
			if (iLocal_34 == iLocal_32)
			{
				iLocal_34 = 0;
			}
			func_6();
			iLocal_39 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_45()
{
	fVar0 = func_46(Local_1366, Local_1363, Global_19446, -90f, 0f, 90f, 350f, 0);
	MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_21839 = 0;
		iLocal_18 = 0;
	}
}

float func_46(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	if (Global_4270044 == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_7356, 14) && Global_19486.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_19439[Global_19431].f_1 == Var0.f_1)
			{
				Global_4270044 = 1;
			}
		}
	}
	if (func_49() && Global_4270044 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = GAMEPLAY::GET_GAME_TIMER();
	}
	fVar3 = func_48((SYSTEM::TO_FLOAT((GAMEPLAY::GET_GAME_TIMER() - iLocal_18)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = SYSTEM::SIN((fVar3 * 90f));
		}
		Global_19414 = { func_47(Param0, Param3, fVar4) };
		Global_19417 = { func_47(Param6, Param9, fVar4) };
	}
	else
	{
		Global_19414 = { Param3 };
		Global_19417 = { Param9 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_19417, 0);
	return fVar3;
}

Vector3 func_47(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_48(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_49()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			if (Global_19429 == 0)
			{
				if (Global_6671 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_20805 != 2)
						{
						}
					}
				}
			}
		}
		if (func_21(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!CAM::_0x4F32C0D5A90A9B40())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (Global_110686)
		{
			return 0;
		}
	}
	if (Global_76622)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_0x4F32C0D5A90A9B40()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(uVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(uVar3))) || ENTITY::GET_ENTITY_MODEL(uVar3) == -1030275036) || ENTITY::GET_ENTITY_MODEL(uVar3) == -616331036) || ENTITY::GET_ENTITY_MODEL(uVar3) == 782665360) || ENTITY::GET_ENTITY_MODEL(uVar3) == 771711535) || ENTITY::GET_ENTITY_MODEL(uVar3) == -1066334226) || ENTITY::GET_ENTITY_MODEL(uVar3) == 1070967343)
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4270043 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(361769742) > 0 || Global_111638.f_14046.f_89)
		{
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-622120100) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_50()
{
	fVar0 = func_46(Local_1363, Local_1366, -90f, 0f, 90f, Global_19446, 350f, 0);
	MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_21838 = 0;
		func_61();
		iLocal_18 = 0;
	}
}

void func_51()
{
	if (Global_4269750 == 0)
	{
		if (iLocal_35 < 0)
		{
			iLocal_35 = 0;
		}
		func_52(Global_19467, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_58(Global_19467, "DISPLAY_VIEW", 8f, SYSTEM::TO_FLOAT(iLocal_35), -1082130432, -1082130432, -1082130432);
		if (Global_19474)
		{
			if (iLocal_32 > 0)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_32 > 0)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_76622)
		{
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
		}
	}
	else
	{
		iLocal_35 = 0;
	}
}

void func_52(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	func_16(sParam2);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_16(sParam3);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_16(sParam4);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_16(sParam5);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_16(sParam6);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_53()
{
	iLocal_32 = 0;
	iLocal_33 = 0;
	func_30();
	iVar13 = 0;
	iVar14 = 0;
	while (iVar13 < 11)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
		{
			func_61();
		}
		iVar15 = 0;
		iVar16 = 11;
		Global_4268500[iVar16].f_18 = -1;
		Global_4268500[iVar16].f_18.f_1 = 0;
		Global_4268500[iVar16].f_18.f_2 = 0;
		Global_4268500[iVar16].f_18.f_3 = 0;
		Global_4268500[iVar16].f_18.f_5 = 0;
		while (iVar15 < 12)
		{
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
			{
				func_61();
			}
			if (iVar0[iVar15] == 0)
			{
				if (Global_4268500[iVar15].f_24 != 0)
				{
					if (Global_4268500[iVar15].f_99[Global_19486] == 1)
					{
						if (func_57(Global_4268500[iVar15].f_18, Global_4268500[iVar16].f_18))
						{
							iVar16 = iVar15;
							if (Global_4268500[iVar16].f_28 == 0)
							{
								iLocal_37 = 0;
							}
							else
							{
								iLocal_37 = 1;
							}
						}
					}
				}
			}
			iVar15++;
		}
		iLocal_19[iVar13] = iVar16;
		iVar0[iVar16] = 1;
		if (Global_4268500[iVar16].f_24 != 0)
		{
			if (Global_4268500[iVar16].f_99[Global_19486] == 1)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(8);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar13);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iLocal_37);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
				if (Global_4268500[iVar16].f_17 == 145)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_2000");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iVar16].f_50));
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else
				{
					func_16(&(Global_1798[Global_4268500[iVar16].f_17].f_3));
				}
				Var17 = { Global_4268500[iVar16] };
				if (func_43(&(Global_4268500[iVar16])))
				{
					iVar33 = func_54(7315, -1, -1);
					switch (iVar33)
					{
						case 0:
							StringCopy(&Var17, "BONEMAIL_TXT_SUB", 64);
							break;
						
						case 1:
							StringCopy(&Var17, "BONEMAIL2_TXT_SUB", 64);
							break;
						
						case 2:
							StringCopy(&Var17, "BONEMAIL3_TXT_SUB", 64);
							break;
						
						case 3:
							StringCopy(&Var17, "BONEMAIL4_TXT_SUB", 64);
							break;
						
						case 4:
							StringCopy(&Var17, "BONEMAIL5_TXT_SUB", 64);
							break;
					}
				}
				else
				{
					StringConCat(&Var17, "_SUB", 64);
				}
				func_16(&Var17);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				iLocal_32++;
				iLocal_33++;
			}
		}
		iVar13++;
	}
	iVar13 = iLocal_32;
	iVar45 = 0;
	while (iVar13 < (iLocal_1373 + iLocal_32))
	{
		iVar14 = 0;
		iVar45 = 0;
		while (iVar14 < iLocal_1373 && iVar45 == 0)
		{
			SOCIALCLUB::_0x4737980E8A283806(iVar14, &Local_1374);
			if (iVar34[iVar14] == 0)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(8);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar13);
				if (iVar13 == 0)
				{
					if (Global_4268499 == 0)
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
					}
					else
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					}
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_2000");
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_2));
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_EMAIL_SUBJ");
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_23[0]));
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_23[1]));
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				iVar34[iVar14] = 1;
				iLocal_19[iVar13] = iVar14;
				iVar45 = 1;
				iLocal_32++;
				if (iVar14 == 0)
				{
					uLocal_1369 = Local_1374.f_1;
				}
			}
			iVar14++;
		}
		iVar13++;
	}
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	iVar0 = 0;
	iVar1 = func_56(iParam0, iParam1);
	uVar2 = func_55(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_55(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - STATS::_0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - STATS::_0x94F12ABF9C79E339((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_56(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

int func_57(struct<6> Param0, struct<6> Param6)
{
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_58(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_59()
{
	switch (UNK::_GET_CURRENT_LANGUAGE_ID())
	{
		case -1:
			unk_0x07DBD622D9533857("gta5mkt_en");
			break;
		
		case 0:
			unk_0x07DBD622D9533857("gta5mkt_en");
			break;
		
		case 1:
			unk_0x07DBD622D9533857("gta5mkt_fr");
			break;
		
		case 2:
			unk_0x07DBD622D9533857("gta5mkt_ge");
			break;
		
		case 3:
			unk_0x07DBD622D9533857("gta5mkt_it");
			break;
		
		case 4:
			unk_0x07DBD622D9533857("gta5mkt_sp");
			break;
		
		case 5:
			unk_0x07DBD622D9533857("gta5mkt_pt");
			break;
		
		case 6:
			unk_0x07DBD622D9533857("gta5mkt_pl");
			break;
		
		case 7:
			unk_0x07DBD622D9533857("gta5mkt_ru");
			break;
		
		case 8:
			unk_0x07DBD622D9533857("gta5mkt_ko");
			break;
		
		case 9:
			unk_0x07DBD622D9533857("gta5mkt_ch");
			break;
		
		case 10:
			unk_0x07DBD622D9533857("gta5mkt_ja");
			break;
		
		case 11:
			unk_0x07DBD622D9533857("gta5mkt_me");
			break;
		
		case 12:
			unk_0x07DBD622D9533857("gta5mkt_cn");
			break;
	}
	SOCIALCLUB::_0x040ADDCBAFA1018A(0, 6);
	SYSTEM::WAIT(0);
	iLocal_1370 = 1;
	bLocal_1371 = false;
	while (iLocal_1370 && Global_19486.f_1 > 3)
	{
		SYSTEM::WAIT(0);
		iLocal_1372 = SOCIALCLUB::_0x16DA8172459434AA();
		if (func_4())
		{
			Global_19486.f_1 = 3;
			iLocal_1370 = 0;
			bLocal_1371 = false;
		}
		switch (iLocal_1372)
		{
			case 3:
				iLocal_1370 = 0;
				bLocal_1371 = true;
				break;
			
			case 0:
				iLocal_1370 = 0;
				bLocal_1371 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_1370 = 0;
				bLocal_1371 = false;
				break;
			
			case 2:
				iLocal_1370 = 0;
				bLocal_1371 = false;
				break;
		}
	}
	if (bLocal_1371)
	{
		iLocal_1373 = unk_0x7DB18CA8CAD5B098();
	}
	else
	{
		iLocal_1373 = 0;
	}
}

void func_60()
{
	StringCopy(&(Local_62[0]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_417[0]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[1]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_417[1]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[2]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_417[2]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[3]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_417[3]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_62[4]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_417[4]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_62[5]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_417[5]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_62[6]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_417[6]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[7]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_417[7]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[8]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_417[8]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[9]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_417[9]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[10]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_417[10]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[11]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_417[11]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[12]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_417[12]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_62[13]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_417[13]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_62[14]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_417[14]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_62[15]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_417[15]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[16]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_417[16]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[17]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_417[17]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[18]), "SOL2_PASS", 24);
	StringCopy(&(Local_417[18]), "executiveproducer", 64);
	StringCopy(&(Local_62[19]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_417[19]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_62[20]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_417[20]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_62[21]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_417[21]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_62[22]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_417[22]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_62[23]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_417[23]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_62[24]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_417[24]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_62[25]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_417[25]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_62[26]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_417[26]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_62[27]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_417[27]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_62[28]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_417[28]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_62[29]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_417[29]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_62[30]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_417[30]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_62[31]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_417[31]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_62[32]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_417[32]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_62[33]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_417[33]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_62[34]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_417[34]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_62[35]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_417[35]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_62[36]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_417[36]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_62[37]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_417[37]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_62[38]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_417[38]), "NHP_prep_mines", 64);
	StringCopy(&(Local_62[39]), "BONEPIC1_TXT", 24);
	StringCopy(&(Local_417[39]), "", 64);
	StringCopy(&(Local_62[40]), "BONEPIC2_TXT", 24);
	StringCopy(&(Local_417[40]), "", 64);
	StringCopy(&(Local_62[41]), "BONEPIC3_TXT", 24);
	StringCopy(&(Local_417[41]), "", 64);
	StringCopy(&(Local_62[42]), "BONEPIC4_TXT", 24);
	StringCopy(&(Local_417[42]), "", 64);
	StringCopy(&(Local_62[43]), "BONEPIC5_TXT", 24);
	StringCopy(&(Local_417[43]), "", 64);
	StringCopy(&(Local_62[44]), "BONEPIC6_TXT", 24);
	StringCopy(&(Local_417[44]), "", 64);
	StringCopy(&(Local_62[45]), "BONEPIC7_TXT", 24);
	StringCopy(&(Local_417[45]), "", 64);
	StringCopy(&(Local_62[46]), "BONEPIC8_TXT", 24);
	StringCopy(&(Local_417[46]), "", 64);
	StringCopy(&(Local_62[47]), "BONEPIC9_TXT", 24);
	StringCopy(&(Local_417[47]), "", 64);
	StringCopy(&(Local_62[48]), "BONEPIC10_TXT", 24);
	StringCopy(&(Local_417[48]), "", 64);
	StringCopy(&(Local_62[49]), "BONEPIC11_TXT", 24);
	StringCopy(&(Local_417[49]), "", 64);
	StringCopy(&(Local_62[50]), "BONEPIC12_TXT", 24);
	StringCopy(&(Local_417[50]), "", 64);
	StringCopy(&(Local_62[51]), "BONEPIC13_TXT", 24);
	StringCopy(&(Local_417[51]), "", 64);
	StringCopy(&(Local_62[52]), "BONEPIC14_TXT", 24);
	StringCopy(&(Local_417[52]), "", 64);
	StringCopy(&(Local_62[53]), "BONEPIC15_TXT", 24);
	StringCopy(&(Local_417[53]), "", 64);
	StringCopy(&(Local_62[54]), "BONEPIC16_TXT", 24);
	StringCopy(&(Local_417[54]), "", 64);
	StringCopy(&(Local_62[55]), "BONEPIC17_TXT", 24);
	StringCopy(&(Local_417[55]), "", 64);
	StringCopy(&(Local_62[56]), "BONEPIC18_TXT", 24);
	StringCopy(&(Local_417[56]), "", 64);
	StringCopy(&(Local_62[57]), "BONEPIC19_TXT", 24);
	StringCopy(&(Local_417[57]), "", 64);
	StringCopy(&(Local_62[58]), "BONEPIC20_TXT", 24);
	StringCopy(&(Local_417[58]), "", 64);
}

void func_61()
{
	if (func_49() == 0)
	{
		MOBILE::SET_MOBILE_PHONE_POSITION(Global_19439[Global_19431]);
	}
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
	{
		func_62(0);
	}
	if (iLocal_1362)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_46);
	}
	Global_21839 = 0;
	Global_21838 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_62(int iParam0)
{
	if (func_67())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_66())
		{
			func_64(1, 1);
		}
		else
		{
			func_64(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_63())
	{
		Global_19486.f_1 = 3;
	}
}

int func_63()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_64(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_65(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

int func_65(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_66()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

bool func_67()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}
