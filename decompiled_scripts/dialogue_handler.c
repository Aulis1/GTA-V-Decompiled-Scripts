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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (GAMEPLAY::IS_BIT_SET(Global_7357, 1))
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_7356, 20))
			{
				if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				{
					if (Global_19474)
					{
						func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_19429)
						{
							func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					GAMEPLAY::CLEAR_BIT(&Global_7357, 1);
				}
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_19671, 0))
		{
			if (!func_118())
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_19671, 1))
				{
					GAMEPLAY::SET_BIT(&Global_19671, 1);
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uLocal_106 = NETWORK::GET_NETWORK_TIME();
					}
					else
					{
						iLocal_102 = GAMEPLAY::GET_GAME_TIMER();
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_108 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_106);
				}
				else
				{
					iLocal_103 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_108 = (iLocal_103 - iLocal_102);
				}
				if (iLocal_108 < 3000)
				{
					if (func_111(&Global_20259, &Global_20875, &Global_20795, Global_20808, Global_21790, Global_21791, 0))
					{
						Global_19671 = 0;
					}
				}
				else
				{
					Global_19671 = 0;
				}
			}
		}
		if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_17, 4)) && !func_110()) && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1085924656) == 0)
		{
			if (Global_20805 != 0)
			{
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
				{
					func_109();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_105();
		}
		switch (Global_20805)
		{
			case 0:
				break;
			
			case 1:
				if (Global_20811)
				{
					if (Global_20801 == 0)
					{
						func_103();
					}
					else
					{
						func_102();
						func_103();
					}
				}
				else if (Global_20801 == 0)
				{
					func_92();
				}
				else
				{
					func_102();
					func_74();
				}
				break;
			
			case 2:
				func_68();
				break;
			
			case 3:
				func_64();
				break;
			
			case 4:
				if (Global_20811)
				{
					if (Global_20813)
					{
						func_63();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()
{
	Global_20815 = 0;
	Global_19485 = 0;
	func_2();
}

void func_2()
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_20816 = 0;
	Global_20817 = 0;
	Global_20818 = 0;
	Global_20819 = 0;
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
	Global_20809 = 0;
	Global_20810 = 0;
	Global_20852 = 0;
	Global_20853 = 0;
	Global_20856 = 0;
	Global_20858 = 0;
	Global_20857 = 0;
	Global_20860 = 0;
	Global_20859 = 0;
	Global_21822 = 0;
	Global_20862 = 0;
	if (Global_19486.f_1 == 10)
	{
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_7356, 11))
	{
		func_3();
	}
	Global_20811 = 0;
	Global_20812 = 0;
	Global_20813 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21795 = 0;
	Global_21802 = 0;
	Global_21801 = 0;
	Global_21798 = 0;
	Global_21797 = 0;
	Global_21799 = 0;
	Global_21800 = 0;
	Global_20801 = 0;
	Global_20802 = 0;
	Global_20803 = 0;
	Global_20804 = 0;
	Global_21063 = 0;
	Global_21826 = 5000;
	Global_19469 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_7356, 20);
	GAMEPLAY::CLEAR_BIT(&Global_7356, 24);
	GAMEPLAY::CLEAR_BIT(&Global_7357, 23);
	GAMEPLAY::CLEAR_BIT(&Global_7358, 0);
	GAMEPLAY::CLEAR_BIT(&Global_7357, 9);
	GAMEPLAY::CLEAR_BIT(&Global_7357, 31);
	GAMEPLAY::CLEAR_BIT(&Global_7357, 17);
	GAMEPLAY::CLEAR_BIT(&Global_7358, 5);
	Global_21789 = 0;
	Global_21788 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Global_20805 = 4;
	}
	else
	{
		Global_20805 = 0;
		Global_21816 = 0;
		Global_21827 = GAMEPLAY::GET_GAME_TIMER();
	}
}

void func_3()
{
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 11))
			{
				if (!Global_19429)
				{
					AI::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
				}
				if (Global_76622)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 1);
				}
				GAMEPLAY::CLEAR_BIT(&Global_7356, 11);
			}
		}
	}
}

void func_4()
{
	Global_20815 = 0;
	Global_19485 = 0;
	func_2();
}

void func_5()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_20861 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_21797 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_21816 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_21816 == 0)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_31 = 0;
		}
	}
	else if (Global_21799 > 0)
	{
		iLocal_37 = GAMEPLAY::GET_GAME_TIMER();
		if ((iLocal_37 - iLocal_36) > Global_21799)
		{
			AUDIO::START_PRELOADED_CONVERSATION();
			Global_21797 = 0;
		}
	}
	if (Global_21816 == 0)
	{
		if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Global_20805 = 6;
		}
	}
}

void func_6()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
	}
}

void func_7()
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_7356, 11))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (Global_76622 == 0)
					{
						func_61();
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (Global_76622 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_76622 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_21816 == 1)
		{
			if (Global_21817 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(1);
				iLocal_31 = 1;
				Global_21817 = 0;
			}
		}
	}
	else if (Global_21816 == 0)
	{
		if (Global_21817 == 1)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_31 = 0;
			Global_21817 = 0;
		}
	}
	if (Global_20858 == 0)
	{
		if (!Global_20818)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_7357, 31))
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_7357, 27))
				{
					if (func_54())
					{
						if (Global_19486.f_1 > 6)
						{
							GAMEPLAY::SET_BIT(&Global_7357, 24);
							GAMEPLAY::SET_BIT(&Global_7357, 27);
							GAMEPLAY::CLEAR_BIT(&Global_7357, 26);
							GAMEPLAY::CLEAR_BIT(&Global_7357, 25);
						}
					}
				}
			}
		}
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() == 0 && Global_20818 == 0)
	{
		if (Global_20858 == 1)
		{
			GAMEPLAY::SET_BIT(&Global_7357, 23);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&Global_7357, 23);
		}
		if (Global_20862)
		{
			if (Global_20858 == 0)
			{
				Global_20424 = { Global_20863 };
				Global_20881 = { Global_20869 };
				Global_20815 = 0;
				Global_21822 = 6;
				func_53();
				return;
			}
		}
		if (!Global_20860)
		{
			while (Global_20858 == 1)
			{
				SYSTEM::WAIT(0);
				if (Global_19486.f_1 < 6)
				{
					Global_20858 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						if (Global_20860)
						{
							iLocal_30 = 1;
							Global_21820 = 1;
							func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_20947, &(Global_1798[Global_6671].f_7), &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_3), 0);
							func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_19474)
							{
								func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_119(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								GAMEPLAY::SET_BIT(&Global_7356, 17);
								func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_119(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								GAMEPLAY::SET_BIT(&Global_7356, 17);
								func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_21818 = 1;
							if (func_50(Global_6671, Global_19486) == 0)
							{
								func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_20947, "CELL_300", &(Global_117[Global_6671].f_4), "CELL_195", 0);
								func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_20947, &(Global_1798[Global_6671].f_7), &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_3), 0);
								func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_19474)
							{
								func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
						}
					}
					if (func_49(2, Global_19455, 0))
					{
						func_47();
						Global_19412 = 0.19f;
						Global_20858 = 0;
						func_45();
						if (Global_20860)
						{
							Global_20424 = { Global_20941 };
							Global_21822 = 5;
						}
						else if (Global_20803 > 0)
						{
							Global_21063 = 1;
							Global_20805 = 0;
							Global_21826 = 0;
							if (GAMEPLAY::IS_BIT_SET(Global_7357, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_21789 + 1)
								{
									uLocal_111[iVar0] = func_44(&(Global_21064[iVar0]));
									uLocal_142[iVar0] = func_44(&(Global_21426[iVar0]));
									iVar0++;
								}
								func_43(Global_21789, &Global_20094, Global_6671, &Global_20881, &uLocal_111, &uLocal_142, 9, 0, 0, 0, 0);
							}
							else if (Global_20803 == 2)
							{
								func_25(&Global_20094, Global_6671, &Global_20881, &(Global_20959[0]), &(Global_21011[0]), &(Global_20959[1]), &(Global_21011[1]), 9, 0, 0, 0, 0);
							}
							Global_21822 = 1;
							Global_21818 = 0;
							Global_21820 = 0;
							Global_20815 = 0;
							func_23();
							return;
						}
						else
						{
							Global_20424 = { Global_20899 };
							Global_21822 = 1;
						}
						Global_21818 = 0;
						Global_21820 = 0;
						Global_20815 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19456, 0) || GAMEPLAY::IS_BIT_SET(Global_7356, 24))
					{
						func_47();
						Global_19412 = 0.19f;
						Global_20858 = 0;
						func_45();
						if (Global_20860)
						{
							Global_20424 = { Global_20935 };
							Global_21822 = 4;
						}
						else if (Global_20803 > 0)
						{
							Global_21063 = 1;
							Global_20805 = 0;
							Global_21826 = 0;
							if (GAMEPLAY::IS_BIT_SET(Global_7357, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_21788 + 1)
								{
									uLocal_173[iVar1] = func_44(&(Global_21245[iVar1]));
									uLocal_204[iVar1] = func_44(&(Global_21607[iVar1]));
									iVar1++;
								}
								func_43(Global_21788, &Global_20094, Global_6671, &Global_20881, &uLocal_173, &uLocal_204, 9, 0, 0, 0, 0);
							}
							else if (Global_20803 == 2)
							{
								func_25(&Global_20094, Global_6671, &Global_20881, &(Global_20972[0]), &(Global_21024[0]), &(Global_20972[1]), &(Global_21024[1]), 9, 0, 0, 0, 0);
							}
							Global_21822 = 2;
							Global_21818 = 0;
							Global_21820 = 0;
							Global_20815 = 0;
							func_23();
							return;
						}
						else
						{
							Global_20424 = { Global_20905 };
							Global_21822 = 2;
						}
						Global_21818 = 0;
						Global_21820 = 0;
						Global_20815 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19458, 0))
					{
						if (Global_20860)
						{
							Global_19412 = 0.19f;
							Global_20858 = 0;
							func_45();
							func_47();
							Global_20424 = { Global_20929 };
							Global_21822 = 3;
							Global_21818 = 0;
							Global_21820 = 0;
							Global_20815 = 0;
							func_23();
							func_53();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_20858)
			{
				SYSTEM::WAIT(0);
				if (Global_19486.f_1 < 6)
				{
					Global_20858 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						func_51(Global_19467, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_51(Global_19467, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_19467, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_19474)
						{
							func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
						iLocal_235 = 0;
						iLocal_30 = 1;
					}
					func_16();
					if (func_49(2, Global_19455, 0))
					{
						func_47();
						Global_20858 = 0;
						func_45();
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "GET_CURRENT_SELECTION");
						uLocal_236 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
						while (!GRAPHICS::_0x768FF8961BA904D6(uLocal_236))
						{
							SYSTEM::WAIT(0);
						}
						iVar2 = GRAPHICS::_0x2DE7EFA66B906036(uLocal_236);
						switch (iVar2)
						{
							case 0:
								Global_20424 = { Global_20935 };
								Global_21822 = 4;
								break;
							
							case 1:
								Global_20424 = { Global_20929 };
								Global_21822 = 3;
								break;
							
							case 2:
								Global_20424 = { Global_20941 };
								Global_21822 = 5;
								break;
						}
						Global_21818 = 0;
						Global_21820 = 0;
						Global_20815 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19456, 0))
					{
						Global_20858 = 0;
						func_45();
					}
				}
			}
		}
		if (Global_20806 == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 900 && Global_19486.f_1 == 9)
			{
				SYSTEM::WAIT(0);
			}
			Global_20805 = 6;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_19475, 1);
		func_15();
		Global_19486.f_1 = Global_19488;
		func_8();
	}
	else if (Global_19664 == 0)
	{
		if (func_49(2, Global_19454, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
					{
					}
					else
					{
						Global_19464 = 1;
						func_45();
						AUDIO::STOP_SCRIPTED_CONVERSATION(0);
						Global_20854 = 1;
						Global_20855 = 1;
						Global_20805 = 6;
						func_15();
						Global_19486.f_1 = Global_19488;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
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
			func_51(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_7961);
			if (Global_7961 == 1)
			{
				func_51(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19490;
			}
			else
			{
				func_51(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19491), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			}
			else if (Global_76622)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_119(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_119(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_119(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_119(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				GAMEPLAY::SET_BIT(&Global_7356, 17);
			}
			if (Global_76622)
			{
				func_11();
				GAMEPLAY::CLEAR_BIT(&Global_7358, 9);
				func_51(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_119(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19485 == 1)
			{
				func_10();
				func_51(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_20818)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CONDFON");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else if (func_50(Global_6671, Global_19486) == 0)
				{
					func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), "CELL_217", &(Global_1798[Global_6671].f_3), 0);
				}
				func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_51(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_20818)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CONDFON");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else
				{
					if (Global_21063)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (func_50(Global_6671, Global_19486) == 0)
					{
						func_51(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_51(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), &Var0, &(Global_1798[Global_6671].f_3), 0);
					}
				}
				func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_23();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_10()
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

void func_11()
{
	if (Global_76622)
	{
		if (func_12() == 0)
		{
			return;
		}
		func_119(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::SET_BIT(&Global_7356, 17);
	}
}

int func_12()
{
	return 0;
}

void func_13(int iParam0)
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
		if (func_14(14))
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
								func_9(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
								func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
									func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
									func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_9(&(Global_7363[iVar1]));
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
								func_9(&(Global_7363[iVar1]));
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
								func_9(&(Global_7363[iVar1]));
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
								func_9(&(Global_7363[iVar1]));
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
								func_9(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (Global_7363[iVar1].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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

bool func_14(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_15()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return;
	}
	switch (Global_19488)
	{
		case 5:
			Global_19488 = 6;
			break;
		
		case 6:
			if (GAMEPLAY::IS_BIT_SET(Global_7357, 5))
			{
				Global_19488 = 6;
				GAMEPLAY::CLEAR_BIT(&Global_7357, 5);
			}
			else
			{
				Global_19488 = 3;
			}
			break;
		
		case 7:
			Global_19488 = 3;
			break;
		
		case 3:
			if (GAMEPLAY::IS_BIT_SET(Global_7357, 5))
			{
				Global_19488 = 6;
				GAMEPLAY::CLEAR_BIT(&Global_7357, 5);
			}
			else
			{
				Global_19488 = 3;
			}
			break;
		
		default:
			Global_19488 = 3;
			break;
	}
}

void func_16()
{
	if (iLocal_235)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_235 = 0;
		}
	}
	if (iLocal_235 == 0)
	{
		if (func_49(2, Global_19462, 0) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			func_20();
			iLocal_235 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_49(2, Global_19463, 0) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			func_17();
			iLocal_235 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_17()
{
	func_51(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, 1);
	func_18();
}

void func_18()
{
	if (func_19())
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

int func_19()
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

void func_20()
{
	func_51(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, 1);
	func_21();
}

void func_21()
{
	if (func_19())
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

void func_22(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	func_9(sParam2);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_9(sParam3);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_9(sParam4);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_9(sParam5);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_9(sParam6);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_23()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		func_24();
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			func_119(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_24()
{
	if (Global_76622)
	{
		func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
	}
}

int func_25(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	func_42(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_41();
	if (iParam8 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_39(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_26(&uVar0, &uVar11, iParam7, bParam11);
}

int func_26(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam2 > Global_20807)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
				}
				else
				{
					func_109();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_37();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21801 = Global_21802;
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20424.f_370 = Global_21794;
		Global_20801 = Global_20802;
		Global_20803 = Global_20804;
		if (Global_21063 == 0)
		{
			Global_20959[0] = { Global_20985[0] };
			Global_20959[1] = { Global_20985[1] };
			Global_21011[0] = { Global_21037[0] };
			Global_21011[1] = { Global_21037[1] };
			Global_20972[0] = { Global_20998[0] };
			Global_20972[1] = { Global_20998[1] };
			Global_21024[0] = { Global_21050[0] };
			Global_21024[1] = { Global_21050[1] };
		}
		if (Global_20811)
		{
			GAMEPLAY::CLEAR_BIT(&Global_7356, 20);
			GAMEPLAY::CLEAR_BIT(&Global_7357, 17);
			GAMEPLAY::CLEAR_BIT(&Global_7358, 0);
			if (bParam3)
			{
				func_30();
				if (Global_8161[Global_19486][0].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_29())
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), -72657034))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (Global_21063 == 0)
					{
						if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
						if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						{
							return 0;
						}
					}
				}
			}
			if (func_28())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_27();
			Global_20815 = bParam3;
		}
		Global_20807 = iParam2;
		if (Global_20801 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_20801)
			{
				StringCopy(&(Global_20424.f_6[iVar0]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20424.f_187[iVar0]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_19671 = 0;
		func_53();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_20807 || iParam2 == Global_20807)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_109();
	}
	return 0;
}

void func_27()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_7357, 16);
}

int func_28()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_29()
{
	if (Global_76622)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == 100416529 || iVar1 == 205991906) || iVar1 == 856002082)
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_30()
{
	if (func_14(14))
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
			if (func_33(iVar0) && (!func_14(14) || Global_110589))
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
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0] = 0;
		StringCopy(&(Global_20094[iVar0].f_1), "", 24);
		Global_20094[iVar0].f_7 = 0;
		Global_20094[iVar0].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_38(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

void func_39(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_40(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_40(var uParam0)
{
	Global_20802 = uParam0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
}

void func_41()
{
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_20819 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
}

void func_42(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

int func_43(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_42(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_41();
	if (iParam7 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	func_40(uParam0);
	return func_26(uParam4, uParam5, iParam6, bParam10);
}

var func_44(var uParam0)
{
	return uParam0;
}

void func_45()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_19475, 1);
		func_46();
	}
}

void func_46()
{
	if (func_19())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

void func_47()
{
	if (func_48())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!Global_19429)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_7356, 11))
					{
						func_61();
					}
				}
			}
		}
	}
}

int func_48()
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
		if (func_14(14))
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

int func_49(int iParam0, int iParam1, int iParam2)
{
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2 == 1 && CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
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

int func_50(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_24[iParam1];
}

void func_51(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_52()
{
	if (func_48())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!Global_19429)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_7356, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_53()
{
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_20805 = 1;
}

int func_54()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_108 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_107);
	}
	else
	{
		iLocal_105 = GAMEPLAY::GET_GAME_TIMER();
		iLocal_108 = (iLocal_105 - iLocal_104);
	}
	return 0;
}

void func_55(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_58())
		{
			func_56(1, 1);
		}
		else
		{
			func_56(0, 0);
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
	if (!func_28())
	{
		Global_19486.f_1 = 3;
	}
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_57(0))
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

int func_57(int iParam0)
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

bool func_58()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

bool func_59()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

void func_60()
{
	if (func_49(2, Global_19463, 0))
	{
		if (Global_21816 == 0)
		{
			if (Global_20811)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_7357, 17))
				{
				}
				else
				{
					AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE();
				}
			}
		}
	}
}

void func_61()
{
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_62() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
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

int func_62()
{
	uVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_63()
{
	if (Global_76622 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_21818 = 1;
		if (func_50(Global_6671, Global_19486) == 0)
		{
			func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_20947, "CELL_300", "CELL_195", "CELL_195", 0);
			func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_20947, &(Global_1798[Global_6671].f_7), &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_3), 0);
			func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_19412 = 0.2f;
		if (Global_19474)
		{
			func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_119(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
	}
	if (Global_20858 == 1)
	{
		if (Global_19486.f_1 < 6)
		{
			Global_20858 = 0;
		}
		else
		{
			if (Global_19426 == 0)
			{
				if (func_49(2, Global_19455, 0))
				{
					Global_19412 = 0.19f;
					Global_20858 = 0;
					func_45();
					Global_21823 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_49(2, Global_19456, 0))
			{
				Global_19412 = 0.19f;
				Global_20858 = 0;
				func_45();
				Global_21823 = 2;
			}
		}
	}
	else if (Global_21823 == 2)
	{
		if (Global_20806 == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			Global_20805 = 6;
		}
		func_15();
		Global_19486.f_1 = Global_19488;
		func_8();
	}
	else if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		iLocal_32 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_19475, 1);
		func_15();
		Global_19486.f_1 = Global_19488;
		func_8();
	}
}

void func_64()
{
	if (Global_19672 == 1)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
			if (AUDIO::_0xE73364DB90778FFA())
			{
				Global_19672 = 0;
			}
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			Global_19672 = 0;
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			Global_20805 = 6;
		}
	}
	if (SYSTEM::TIMERB() > iLocal_35)
	{
		if (Global_19672 == 1)
		{
			Global_19672 = 0;
		}
	}
	if (SYSTEM::TIMERA() < Global_21826 || Global_19672 == 1)
	{
		if (func_49(2, Global_19454, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
					{
					}
					else
					{
						Global_19464 = 1;
						func_45();
						AUDIO::STOP_SCRIPTED_CONVERSATION(0);
						Global_20854 = 1;
						Global_20805 = 6;
						GAMEPLAY::CLEAR_BIT(&Global_7356, 27);
						if (!Global_20816)
						{
							GAMEPLAY::SET_BIT(&Global_7357, 5);
						}
						func_15();
						Global_19486.f_1 = Global_19488;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 27);
		Global_20805 = 4;
		Global_20862 = 0;
		func_67();
		func_66();
		if (!Global_20818)
		{
			if (Global_21822 == 0)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_7358, 5))
				{
					AUDIO::START_PRELOADED_CONVERSATION();
				}
				GAMEPLAY::CLEAR_BIT(&Global_7358, 5);
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_20424.f_368, Global_20424.f_369);
			}
		}
		func_65();
	}
}

void func_65()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uLocal_107 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_104 = GAMEPLAY::GET_GAME_TIMER();
	}
}

void func_66()
{
	if (Global_20818)
	{
		if (Global_76622)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
			{
				if (!GAMEPLAY::IS_PC_VERSION())
				{
					func_119(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					GAMEPLAY::SET_BIT(&(Global_2537071.f_1732), 15);
				}
			}
		}
	}
}

void func_67()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		if (!Global_20813)
		{
			func_119(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20818)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CONDFON");
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			else if (func_50(Global_6671, Global_19486) == 0)
			{
				func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_119(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), "CELL_219", &(Global_1798[Global_6671].f_3), 0);
			}
		}
		func_51(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_68()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_109 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_95);
		iLocal_110 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_98);
	}
	else
	{
		iLocal_94 = GAMEPLAY::GET_GAME_TIMER();
		iLocal_109 = (iLocal_94 - iLocal_93);
		iLocal_97 = GAMEPLAY::GET_GAME_TIMER();
		iLocal_110 = (iLocal_97 - iLocal_96);
	}
	if (Global_20852 == 1)
	{
		if (func_48())
		{
			if (iLocal_109 > 4000)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_7356, 14))
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
					{
						func_45();
						Global_19485 = 2;
						func_67();
						func_66();
					}
				}
			}
		}
		else if (iLocal_109 > 2000)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 14))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
				{
					func_45();
					Global_19485 = 2;
					func_67();
					func_66();
				}
			}
		}
	}
	if (iLocal_110 > 10000)
	{
		Global_19485 = 3;
	}
	if (Global_19485 == 2)
	{
		iLocal_30 = 0;
		Global_20805 = 4;
		func_61();
		Global_20862 = 0;
		func_67();
		func_66();
		if (!Global_20818)
		{
			if (Global_21822 == 0)
			{
				AUDIO::START_PRELOADED_CONVERSATION();
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_20424.f_368, Global_20424.f_369);
			}
		}
		func_65();
		Global_21821 = 0;
	}
	if (Global_20852 == 0)
	{
		if (Global_19485 == 3)
		{
			if (Global_20818)
			{
				func_70();
				func_55(0);
			}
			else
			{
				func_69();
				Global_21821 = 1;
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				Global_20805 = 6;
				func_15();
				Global_19486.f_1 = Global_19488;
				func_8();
			}
		}
	}
	else if (Global_19485 == 3)
	{
	}
}

void func_69()
{
}

void func_70()
{
	Global_2543673.f_2 = 1;
	Global_2543673.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::_0x855BC38818F6F684())
		{
			while (NETWORK::_0xEF0912DDF7C4CB4B())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2543673 = 0;
			Global_2543673.f_2 = 0;
		}
		else if (func_73(Global_2543673.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2543673.f_20)))
			{
				if (!NETWORK::_0x87EB7A3FFCB314DB(&(Global_2543673.f_20)))
				{
					func_71();
				}
			}
		}
		else
		{
			func_71();
		}
	}
	else
	{
		func_71();
	}
	if (Global_2543673.f_37)
	{
		func_55(0);
	}
	Global_2543673.f_37 = 0;
	Global_2543673.f_3 = 0;
}

void func_71()
{
	Global_2543673.f_1 = 0;
	Global_2543673 = 0;
	Global_2543673.f_2 = 0;
	Global_2543673.f_33 = -1;
	Global_2543673.f_34 = -1;
	StringCopy(&(Global_2543673.f_4), "", 64);
	StringCopy(&(Global_2543673.f_39[0]), "", 64);
	Global_2543673.f_38 = 0;
	Global_2543673.f_56 = 0;
	Global_2543673.f_57 = 0;
	Global_2543673.f_58 = -2;
	Global_2543673.f_3 = 0;
	func_72(&(Global_2543673.f_20));
}

void func_72(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

bool func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_74()
{
	iLocal_92 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_92 < Global_20801)
	{
		func_91();
		func_90();
		func_89();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_44 = { Global_20424.f_6[iLocal_92] };
			StringConCat(&cLocal_44, "A", 24);
			Global_19673[iVar2] = { Global_20424.f_6[iLocal_92] };
			StringConCat(&(Global_19673[iVar2]), "_", 24);
			StringIntConCat(&(Global_19673[iVar2]), iVar1, 24);
			cLocal_38 = { Global_19673[iVar2] };
			StringConCat(&cLocal_38, "A", 24);
			if (UI::DOES_TEXT_LABEL_EXIST(&cLocal_38))
			{
				StringCopy(&cLocal_50, UI::_GET_LABEL_TEXT(&cLocal_38), 64);
				iVar3 = func_88(iVar13);
				iVar4 = func_87(iVar13);
				uVar5 = func_85(iVar13);
				uLocal_82 = func_84();
				uLocal_83 = func_83();
				uLocal_84 = func_82();
				uVar6 = func_81(iVar13);
				uVar7 = func_80(iVar13);
				uVar8 = func_79(iVar13);
				uVar12 = func_78(iVar13);
				uVar9 = func_77(iVar13);
				uVar10 = func_76(iVar13);
				uVar11 = func_75(iVar13);
				if (UI::DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar2])))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_19673[iVar2]), &(Global_20424.f_187[iLocal_92])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &(Global_19673[iVar2]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (UI::DOES_TEXT_LABEL_EXIST(&cLocal_44))
			{
				StringCopy(&cLocal_50, UI::_GET_LABEL_TEXT(&cLocal_44), 64);
				iVar3 = func_88(0);
				iVar4 = func_87(0);
				uVar5 = func_85(0);
				uLocal_82 = func_84();
				uLocal_83 = func_83();
				uLocal_84 = func_82();
				uVar6 = func_81(0);
				uVar7 = func_80(0);
				uVar8 = func_79(0);
				uVar12 = func_78(0);
				uVar9 = func_77(0);
				uVar10 = func_76(0);
				uVar11 = func_75(0);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &(Global_20424.f_6[iLocal_92]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_19673[iVar2]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_19673[iVar2]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_92++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_20811 == 0)
	{
		AUDIO::_0x0B568201DD99F0EB(uLocal_83);
		AUDIO::_0x61631F5DF50D1C34(uLocal_84);
		AUDIO::START_SCRIPT_CONVERSATION(Global_20424.f_368, Global_20424.f_369, Global_20424.f_370, uLocal_82);
		Global_20805 = 4;
	}
}

int func_75(int iParam0)
{
	uVar0 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76(int iParam0)
{
	uVar0 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	uVar0 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	uVar0 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 1;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "1"))
	{
		return 1;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "2"))
	{
		return 2;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "3"))
	{
		return 3;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_79(int iParam0)
{
	uVar0 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0)
{
	uVar0 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0)
{
	uVar0 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7, iParam0 * 7 + 1);
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_82()
{
	uVar0 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_73), 2, 3);
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_83()
{
	uVar0 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_73), 1, 2);
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_84()
{
	uVar0 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_73), 0, 1);
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)
{
	uVar0 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_66), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_86(uVar0);
}

int func_86(var uParam0)
{
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 0;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "1"))
	{
		return 1;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "2"))
	{
		return 2;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "3"))
	{
		return 3;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "4"))
	{
		return 4;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "5"))
	{
		return 5;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "6"))
	{
		return 6;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "7"))
	{
		return 7;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "8"))
	{
		return 8;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "9"))
	{
		return 9;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "A"))
	{
		return 10;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "B"))
	{
		return 11;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "C"))
	{
		return 12;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "D"))
	{
		return 13;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "E"))
	{
		return 14;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "F"))
	{
		return 15;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "G"))
	{
		return 16;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "H"))
	{
		return 17;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "I"))
	{
		return 18;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "J"))
	{
		return 19;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "K"))
	{
		return 20;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "L"))
	{
		return 21;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "M"))
	{
		return 22;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "N"))
	{
		return 23;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "O"))
	{
		return 24;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "P"))
	{
		return 25;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "Q"))
	{
		return 26;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "R"))
	{
		return 27;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "S"))
	{
		return 28;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "T"))
	{
		return 29;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "U"))
	{
		return 30;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "V"))
	{
		return 31;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "W"))
	{
		return 32;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "X"))
	{
		return 33;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "Y"))
	{
		return 34;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "Z"))
	{
		return 35;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_87(int iParam0)
{
	uVar0 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_66), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_86(uVar0);
}

int func_88(int iParam0)
{
	uVar0 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_66), iParam0 * 3, iParam0 * 3 + 1);
	return func_86(uVar0);
}

void func_89()
{
	cLocal_85 = { Global_20424.f_6[iLocal_92] };
	StringConCat(&cLocal_85, "LF", 24);
	if (UI::DOES_TEXT_LABEL_EXIST(&cLocal_85))
	{
		sLocal_91 = UI::_GET_LABEL_TEXT(&cLocal_85);
		if (GAMEPLAY::IS_STRING_NULL(sLocal_91))
		{
		}
	}
}

void func_90()
{
	cLocal_73 = { Global_20424.f_6[iLocal_92] };
	StringConCat(&cLocal_73, "IF", 24);
	if (UI::DOES_TEXT_LABEL_EXIST(&cLocal_73))
	{
		sLocal_79 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_73), 0, 1);
		if (GAMEPLAY::IS_STRING_NULL(sLocal_79))
		{
		}
		sLocal_80 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_73), 1, 2);
		if (GAMEPLAY::IS_STRING_NULL(sLocal_80))
		{
		}
		sLocal_81 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_73), 2, 3);
		if (GAMEPLAY::IS_STRING_NULL(sLocal_81))
		{
		}
	}
}

void func_91()
{
	cLocal_66 = { Global_20424.f_6[iLocal_92] };
	StringConCat(&cLocal_66, "SL", 24);
	if (UI::DOES_TEXT_LABEL_EXIST(&cLocal_66))
	{
		sLocal_72 = UI::_GET_LABEL_TEXT(&cLocal_66);
		if (GAMEPLAY::IS_STRING_NULL(sLocal_72))
		{
		}
	}
}

void func_92()
{
	func_93();
	AUDIO::_0x0B568201DD99F0EB(uLocal_83);
	AUDIO::_0x61631F5DF50D1C34(uLocal_84);
	if (Global_21797)
	{
		AUDIO::PRELOAD_SCRIPT_CONVERSATION(Global_20424.f_368, Global_20424.f_369, Global_20424.f_370, uLocal_82);
		iLocal_36 = GAMEPLAY::GET_GAME_TIMER();
	}
	else
	{
		AUDIO::START_SCRIPT_CONVERSATION(Global_20424.f_368, Global_20424.f_369, Global_20424.f_370, uLocal_82);
	}
	Global_20805 = 4;
}

void func_93()
{
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (UI::DOES_TEXT_BLOCK_EXIST(&Global_20881))
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&Global_20881, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (GAMEPLAY::IS_ORBIS_VERSION() || GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (Global_1573348 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_76622 || func_101())
		{
			if (Global_1573348 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_99())
		{
			iVar14 = 1;
		}
		if (func_98(GAMEPLAY::GET_HASH_KEY(&Global_20881)))
		{
			iVar14 = 0;
			Global_2621442 = 0;
			iVar13 = 1;
		}
		if (((Global_20807 < 5 || Global_20807 == 10) || Global_20807 == 12) || Global_20807 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				UI::REQUEST_ADDITIONAL_TEXT(&Global_20881, 7);
				while (!UI::HAS_ADDITIONAL_TEXT_LOADED(7))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				UI::_REQUEST_ADDITIONAL_TEXT_2(&Global_20881, 15);
				while (!UI::HAS_ADDITIONAL_TEXT_LOADED(15))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			UI::REQUEST_ADDITIONAL_TEXT(&Global_20881, 6);
			while (!UI::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			UI::_REQUEST_ADDITIONAL_TEXT_2(&Global_20881, 14);
			while (!UI::HAS_ADDITIONAL_TEXT_LOADED(14))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_97();
	func_96();
	func_95();
	func_94();
	Global_21815 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_44 = { Global_20424 };
		StringConCat(&cLocal_44, "A", 24);
		Global_19673[iVar2] = { Global_20424 };
		StringConCat(&(Global_19673[iVar2]), "_", 24);
		StringIntConCat(&(Global_19673[iVar2]), iVar1, 24);
		cLocal_38 = { Global_19673[iVar2] };
		StringConCat(&cLocal_38, "A", 24);
		if (UI::DOES_TEXT_LABEL_EXIST(&cLocal_38))
		{
			StringCopy(&cLocal_50, UI::_GET_LABEL_TEXT(&cLocal_38), 64);
			iVar3 = func_88(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4269953 == 0)
				{
				}
			}
			iVar4 = func_87(iVar2);
			uVar5 = func_85(iVar2);
			uLocal_82 = func_84();
			uLocal_83 = func_83();
			uLocal_84 = func_82();
			uVar6 = func_81(iVar2);
			uVar7 = func_80(iVar2);
			uVar8 = func_79(iVar2);
			uVar12 = func_78(iVar2);
			uVar9 = func_77(iVar2);
			uVar10 = func_76(iVar2);
			uVar11 = func_75(iVar2);
			if (UI::DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar2])))
			{
				if (Global_21795 == 0 && Global_21801 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &(Global_19673[iVar2]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_19673[iVar2]), &Global_21803))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &(Global_19673[iVar2]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_21815 = iVar2;
					if (Global_21801 == 1)
					{
						Global_21801 = 0;
					}
				}
			}
			else if (Global_21801 == 0 && Global_21795 == 0)
			{
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &cLocal_50, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (UI::DOES_TEXT_LABEL_EXIST(&cLocal_44))
			{
				StringCopy(&cLocal_50, UI::_GET_LABEL_TEXT(&cLocal_44), 64);
				iVar3 = func_88(iVar2);
				iVar4 = func_87(iVar2);
				uVar5 = func_85(iVar2);
				uLocal_82 = func_84();
				uLocal_83 = func_83();
				uLocal_84 = func_82();
				uVar6 = func_81(iVar2);
				uVar7 = func_80(iVar2);
				uVar8 = func_79(iVar2);
				uVar12 = func_78(iVar2);
				uVar9 = func_77(iVar2);
				uVar10 = func_76(iVar2);
				uVar11 = func_75(iVar2);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &Global_20424, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_94()
{
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_20094[iVar0].f_7 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_20094[iVar0]) || Global_20094[iVar0] == 0)
			{
				AUDIO::ADD_PED_TO_CONVERSATION(iVar0, Global_20094[iVar0], &(Global_20094[iVar0].f_1));
			}
			if (Global_20094.f_161 == iVar0)
			{
				if ((Global_20094.f_162 != 0f && Global_20094.f_162.f_1 != 0f) && Global_20094.f_162.f_2 != 0f)
				{
					SYSTEM::WAIT(0);
					AUDIO::_0x33E3C6C6F2F0B506(Global_20094.f_161, Global_20094.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4269953 == 1)
	{
		Global_4269953 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4269772[iVar0].f_7 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_4269772[iVar0]) || Global_4269772[iVar0] == 0)
				{
					AUDIO::ADD_PED_TO_CONVERSATION(Global_4269772[iVar0].f_8, Global_4269772[iVar0], &(Global_4269772[iVar0].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_95()
{
	cLocal_85 = { Global_20424 };
	StringConCat(&cLocal_85, "LF", 24);
	if (UI::DOES_TEXT_LABEL_EXIST(&cLocal_85))
	{
		sLocal_91 = UI::_GET_LABEL_TEXT(&cLocal_85);
		if (GAMEPLAY::IS_STRING_NULL(sLocal_91))
		{
		}
	}
}

void func_96()
{
	cLocal_73 = { Global_20424 };
	StringConCat(&cLocal_73, "IF", 24);
	if (UI::DOES_TEXT_LABEL_EXIST(&cLocal_73))
	{
		sLocal_79 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_73), 0, 1);
		if (GAMEPLAY::IS_STRING_NULL(sLocal_79))
		{
		}
		sLocal_80 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_73), 1, 2);
		if (GAMEPLAY::IS_STRING_NULL(sLocal_80))
		{
		}
		sLocal_81 = UI::_GET_TEXT_SUBSTRING(UI::_GET_LABEL_TEXT(&cLocal_73), 2, 3);
		if (GAMEPLAY::IS_STRING_NULL(sLocal_81))
		{
		}
	}
}

void func_97()
{
	cLocal_66 = { Global_20424 };
	StringConCat(&cLocal_66, "SL", 24);
	if (UI::DOES_TEXT_LABEL_EXIST(&cLocal_66))
	{
		sLocal_72 = UI::_GET_LABEL_TEXT(&cLocal_66);
		if (GAMEPLAY::IS_STRING_NULL(sLocal_72))
		{
		}
	}
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case -1311531715:
		case -389729032:
		case -2064440312:
		case 1151576899:
		case -360992886:
		case 677852396:
		case 1017913414:
		case 1994430427:
		case 1430620518:
		case 1883599394:
		case 1146168957:
		case 785850502:
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case -351584050:
		case 1854373416:
		case -1753835094:
		case -353948811:
		case -1883622926:
		case -46742865:
		case 1260190997:
		case 1080008561:
		case 1151572586:
		case 964109535:
		case -436910453:
		case 659972380:
		case 2120484290:
		case 1439733926:
		case 26437732:
		case 303339033:
		case 2088730730:
		case -1771498136:
		case -1993049002:
		case -1370815517:
		case -1267951531:
		case 60077066:
		case 1821448936:
		case 2043251532:
		case 1314391445:
		case -1267946537:
		case 1507036282:
		case 214936528:
		case 1071832486:
		case 379745124:
		case 409276020:
		case -495085533:
		case -383711312:
		case -1809286053:
		case -229061423:
		case 1399593776:
		case -1592188591:
		case 2119072113:
		case -2005721953:
		case -439426052:
		case 101634771:
		case -7767504:
		case -1576797630:
		case -556967217:
		case 510894735:
		case -96774198:
		case 1931750438:
		case 962651001:
		case -805815803:
		case -1396474296:
		case 188331744:
		case -667145730:
		case 1027410289:
		case -190066836:
		case 5422313:
		case -591754196:
		case 1414208944:
		case -657203993:
		case 365230037:
		case -1508790734:
		case 1751613877:
		case 502358067:
		case -701873518:
		case -387856564:
		case -342942601:
		case -450026770:
		case -2121613853:
		case 1192484316:
		case -839727634:
		case 700260812:
		case -1133857112:
			return 1;
		
		default:
	}
	return 0;
}

int func_99()
{
	if (Global_2621550)
	{
		if (func_14(0))
		{
			if (Global_3145728 || func_100(0))
			{
				return 1;
			}
		}
	}
	if (Global_2621549)
	{
		if (func_14(0))
		{
			if (Global_3670016 || func_100(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_100(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
}

var func_101()
{
	return Global_1312854;
}

void func_102()
{
	iVar0 = 0;
	if (GAMEPLAY::IS_ORBIS_VERSION() || GAMEPLAY::IS_DURANGO_VERSION())
	{
		if (Global_1573348 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_76622)
	{
		if (Global_1573348 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_99())
	{
		iVar1 = 1;
	}
	if (UI::DOES_TEXT_BLOCK_EXIST(&Global_20881))
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&Global_20881, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if (func_98(GAMEPLAY::GET_HASH_KEY(&Global_20881)))
	{
		iVar1 = 0;
		Global_2621442 = 0;
		iVar0 = 1;
	}
	if (((Global_20807 < 5 || Global_20807 == 10) || Global_20807 == 12) || Global_20807 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			UI::REQUEST_ADDITIONAL_TEXT(&Global_20881, 7);
			while (!UI::HAS_ADDITIONAL_TEXT_LOADED(7))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			UI::_REQUEST_ADDITIONAL_TEXT_2(&Global_20881, 15);
			while (!UI::HAS_ADDITIONAL_TEXT_LOADED(15))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		UI::REQUEST_ADDITIONAL_TEXT(&Global_20881, 6);
		while (!UI::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		UI::_REQUEST_ADDITIONAL_TEXT_2(&Global_20881, 14);
		while (!UI::HAS_ADDITIONAL_TEXT_LOADED(14))
		{
			SYSTEM::WAIT(0);
		}
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_94();
}

void func_103()
{
	while (Global_19469 == 1 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		SYSTEM::WAIT(0);
	}
	Global_19469 = 0;
	if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
	{
		GAMEPLAY::SET_BIT(&Global_7357, 1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7357, 1);
	}
	Global_19470 = 0;
	if (Global_20801 == 0)
	{
		if (!Global_20818)
		{
			func_93();
		}
	}
	else
	{
		func_74();
	}
	Global_19672 = 0;
	if (Global_20815)
	{
		if (Global_21822 == 0)
		{
			if (Global_20818 == 0)
			{
				iLocal_34 = 5000;
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_20424.f_368, Global_20424.f_369);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_19672 = 1;
		SYSTEM::SETTIMERB(0);
		while ((Global_19672 == 1 && Global_20805 == 1) && SYSTEM::TIMERB() < iLocal_34)
		{
			SYSTEM::WAIT(0);
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Global_19672 = 0;
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				Global_20805 = 6;
			}
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				if (AUDIO::_0xE73364DB90778FFA())
				{
					Global_19672 = 0;
				}
			}
		}
		if (SYSTEM::TIMERB() > iLocal_34)
		{
		}
		if (Global_20805 != 1)
		{
		}
		if (Global_19672 == 0)
		{
		}
	}
	Global_19672 = 0;
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 0) || Global_20805 != 1) || Global_19452 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
	}
	else
	{
		if (Global_20813)
		{
			Global_21823 = 0;
			iLocal_32 = 0;
		}
		if (Global_20815 == 0)
		{
			if (Global_20856 == 0)
			{
				Global_19488 = Global_19486.f_1;
				Global_20856 = 1;
			}
			iLocal_30 = 0;
			if (Global_21822 == 0)
			{
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_20424.f_368, Global_20424.f_369);
				SYSTEM::WAIT(0);
				Global_20805 = 3;
				Global_19672 = 1;
				SYSTEM::SETTIMERB(0);
				GAMEPLAY::SET_BIT(&Global_7356, 27);
				SYSTEM::SETTIMERA(0);
			}
			else
			{
				Global_19672 = 0;
				Global_20805 = 4;
			}
			Global_19485 = 0;
			if (Global_20816 == 1)
			{
				if (Global_19486.f_1 == 10)
				{
				}
				if (!Global_19486.f_1 == 9)
				{
					if (Global_19486.f_1 > 4)
					{
						if (Global_19469 == 0)
						{
							Global_19486.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_19486.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_19486.f_1 == 4)
				{
					SYSTEM::WAIT(0);
					if (Global_19672 == 1)
					{
						if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
						{
							if (AUDIO::_0xE73364DB90778FFA())
							{
								Global_19672 = 0;
							}
						}
					}
				}
				if (Global_19486.f_1 == 6)
				{
				}
				if (Global_19486.f_1 == 10)
				{
				}
				if (Global_19486.f_1 == 3)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_20805 = 6;
					Global_19470 = 1;
					return;
				}
				Global_19486.f_1 = 9;
				func_8();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_101 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_99 = GAMEPLAY::GET_GAME_TIMER();
			}
			while (Global_19486.f_1 != 9 && Global_19469 == 0)
			{
				SYSTEM::WAIT(0);
				if (Global_19672 == 1)
				{
					if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
					{
						if (AUDIO::_0xE73364DB90778FFA())
						{
							Global_19672 = 0;
						}
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_108 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_101);
				}
				else
				{
					iLocal_100 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
				{
					if (iLocal_108 > 15000)
					{
						Global_21821 = 1;
						Global_19469 = 1;
					}
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_7356, 11))
			{
				if (func_48() == 0)
				{
					func_61();
				}
			}
			if (Global_19469 == 0)
			{
				if (!Global_21822 == 0)
				{
					Global_20862 = 0;
					func_67();
					func_66();
					if (!Global_20818)
					{
						if (Global_21822 == 0)
						{
							AUDIO::START_PRELOADED_CONVERSATION();
						}
						else
						{
							AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_20424.f_368, Global_20424.f_369);
						}
					}
					func_65();
				}
			}
			else
			{
				func_104();
				Global_19470 = 1;
			}
		}
		else
		{
			Global_19485 = 1;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (Global_19486.f_1 == 3)
					{
					}
				}
				else
				{
					GAMEPLAY::CLEAR_BIT(&Global_7357, 21);
				}
			}
			if (Global_20856 == 0)
			{
				Global_19488 = Global_19486.f_1;
				Global_20856 = 1;
			}
			if (Global_19486.f_1 == 3)
			{
				Global_19486.f_1 = 4;
			}
			else
			{
				while (Global_19486.f_1 == 4)
				{
					SYSTEM::WAIT(0);
				}
				if (Global_19486.f_1 == 6)
				{
				}
				Global_19486.f_1 = 9;
				func_8();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_101 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_99 = GAMEPLAY::GET_GAME_TIMER();
			}
			while (Global_19486.f_1 != 9 && Global_19469 == 0)
			{
				SYSTEM::WAIT(0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_108 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_101);
				}
				else
				{
					iLocal_100 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
				{
					if (iLocal_108 > 20000)
					{
						Global_21821 = 1;
						Global_19469 = 1;
						GAMEPLAY::CLEAR_BIT(&Global_7357, 21);
					}
				}
			}
			if (Global_19469 == 0)
			{
				Global_20805 = 2;
			}
			else
			{
				func_104();
				Global_19470 = 1;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_95 = NETWORK::GET_NETWORK_TIME();
				uLocal_98 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_93 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_96 = GAMEPLAY::GET_GAME_TIMER();
			}
		}
	}
}

void func_104()
{
	Global_19671 = 0;
	func_109();
}

void func_105()
{
	fVar0 = func_106(Global_19439[Global_19431], Global_19432[Global_19431], Global_19446, Global_19417, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_21819 == 0)
		{
			UI::DISPLAY_RADAR(1);
		}
		iLocal_32 = 0;
	}
}

float func_106(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
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
	if (func_48() && Global_4270044 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = GAMEPLAY::GET_GAME_TIMER();
	}
	fVar3 = func_108((SYSTEM::TO_FLOAT((GAMEPLAY::GET_GAME_TIMER() - iLocal_18)) / fParam12), 0f, 1f);
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
		Global_19414 = { func_107(Param0, Param3, fVar4) };
		Global_19417 = { func_107(Param6, Param9, fVar4) };
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

Vector3 func_107(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_108(float fParam0, float fParam1, float fParam2)
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

void func_109()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_20805 = 6;
		return;
	}
}

bool func_110()
{
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_226020, 12);
}

bool func_111(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_42(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_112(sParam2, iParam3, 0);
}

int func_112(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_109();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_37();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			GAMEPLAY::CLEAR_BIT(&Global_7356, 20);
			GAMEPLAY::CLEAR_BIT(&Global_7357, 17);
			GAMEPLAY::CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_30();
				if (Global_8161[Global_19486][0].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_29())
				{
					return 0;
				}
				if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), -72657034))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_28())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_27();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_53();
		func_113();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_109();
	}
	return 0;
}

void func_113()
{
	if (!func_114())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

int func_114()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_117())
	{
		return 0;
	}
	if (func_115(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_115(int iParam0)
{
	return func_116(iParam0, 20);
}

bool func_116(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_117()
{
	return -1;
}

int func_118()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_119(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_9(sParam7);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_9(iParam8);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_9(iParam9);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_9(iParam10);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_9(iParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}
