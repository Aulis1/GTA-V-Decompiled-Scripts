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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_522 = -2;
	iLocal_913 = 1;
	iLocal_1222 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	}
	func_1218();
	func_1191(ScriptParam_0);
	while (true)
	{
		func_1190();
		if (func_1182())
		{
			func_1176();
		}
		if (func_1174(PLAYER::PLAYER_ID()))
		{
			func_1176();
		}
		if (Global_1676376)
		{
			func_1176();
		}
		switch (func_1173())
		{
			case 0:
				if (func_1170())
				{
					func_1160();
				}
				else
				{
					func_1176();
				}
				break;
			
			case 1:
				if (func_1157())
				{
					func_1156(Local_147.f_1, Local_147, &iLocal_911, &uLocal_909, 45000, &Local_1270);
					func_99();
				}
				else
				{
					func_1176();
				}
				break;
			
			case 2:
				if (bLocal_510)
				{
					if (!func_98(&uLocal_1281))
					{
						func_97(&uLocal_1281, 0, 0);
					}
					if (!func_96(&uLocal_1281, 500, 0))
					{
						if (CONTROLS::_IS_INPUT_DISABLED(2))
						{
							CONTROLS::SET_INPUT_EXCLUSIVE(2, 176);
							CONTROLS::SET_INPUT_EXCLUSIVE(2, 177);
							CONTROLS::SET_INPUT_EXCLUSIVE(2, 237);
							CONTROLS::SET_INPUT_EXCLUSIVE(2, 238);
						}
					}
				}
				func_30();
				break;
			
			case 4:
				if (bLocal_510)
				{
					if (!func_96(&uLocal_1281, 500, 0))
					{
						if (CONTROLS::_IS_INPUT_DISABLED(2))
						{
							CONTROLS::SET_INPUT_EXCLUSIVE(2, 176);
							CONTROLS::SET_INPUT_EXCLUSIVE(2, 177);
							CONTROLS::SET_INPUT_EXCLUSIVE(2, 237);
							CONTROLS::SET_INPUT_EXCLUSIVE(2, 238);
						}
					}
				}
				if (iLocal_912)
				{
					func_27(Local_147.f_1, Local_147, &Local_1270);
					iLocal_912 = 0;
				}
				if (Local_1270.f_2 == 0)
				{
					if (!func_26())
					{
						Global_2439138.f_1156.f_11 = 1;
						func_1176();
					}
				}
				else if (!func_26())
				{
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(Local_1270) && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(Local_1270.f_1))
					{
						func_1(Local_147.f_1, Local_1270, Local_1270.f_1, &Local_1270, GAMEPLAY::IS_BIT_SET(Local_147.f_359, 19));
					}
					Local_1270.f_2 = 0;
				}
				else if (func_96(&(Local_1270.f_4), 8000, 0))
				{
					Local_1270.f_2 = 0;
				}
				break;
		}
	}
}

int func_1(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, char[4] cParam165, char* sParam166, var uParam167, bool bParam168)
{
	if (!func_26())
	{
		*uParam167 = "";
		uParam167->f_1 = "";
		uParam167->f_2 = 0;
		if (!bParam168)
		{
			return func_25(&uParam0, cParam165, sParam166, 12, 0, 0, 0);
		}
		else
		{
			return func_2(&uParam0, cParam165, sParam166, 12, 0, 0, 0);
		}
	}
	else
	{
		*uParam167 = cParam165;
		uParam167->f_1 = sParam166;
		uParam167->f_2 = 1;
	}
	return 0;
}

int func_2(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_24(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_3(sParam2, iParam3, 0);
}

int func_3(char* sParam0, int iParam1, bool bParam2)
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
					func_23();
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
		if (func_22(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_21();
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
				func_13();
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
				if (func_12())
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
			if (func_11())
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
			func_10();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_9();
		func_4();
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
		func_23();
	}
	return 0;
}

void func_4()
{
	if (!func_5())
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

int func_5()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_8())
	{
		return 0;
	}
	if (func_6(PLAYER::PLAYER_ID()))
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

bool func_6(int iParam0)
{
	return func_7(iParam0, 20);
}

bool func_7(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_8()
{
	return -1;
}

void func_9()
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

void func_10()
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

int func_11()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_12()
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

void func_13()
{
	if (func_20(14))
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
		Global_19486 = func_14();
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

var func_14()
{
	func_15();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_15()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_18(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_17(PLAYER::PLAYER_PED_ID());
			if (func_16(iVar0) && (!func_20(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_16(Global_111638.f_2358.f_539.f_4321))
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

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return func_19(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_19(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_20(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_21()
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

bool func_22(int iParam0, int iParam1)
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

void func_23()
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

void func_24(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_25(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_24(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_3(sParam2, iParam3, 0);
}

int func_26()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_27(struct<165> Param0, int iParam165, var uParam166)
{
	switch (iParam165)
	{
		case 12:
			func_1(Param0, "CT_AUD", "MPCT_LShang", uParam166, 0);
			break;
		
		case 19:
			func_1(Param0, "CT_AUD", "MPCT_LMhang", uParam166, 0);
			break;
		
		case 84:
			func_1(Param0, "CT_AUD", "MPCT_Bhang", uParam166, 0);
			break;
		
		case 72:
			if (func_28())
			{
				func_1(Param0, "CT_AUD", "MPCT_VhangF", uParam166, 0);
			}
			else
			{
				func_1(Param0, "CT_AUD", "MPCT_VhangM", uParam166, 0);
			}
			break;
		
		case 70:
			if (func_28())
			{
				func_1(Param0, "CT_AUD", "MPCT_LhangF", uParam166, 0);
			}
			else
			{
				func_1(Param0, "CT_AUD", "MPCT_LhangM", uParam166, 0);
			}
			break;
		
		case 89:
			func_1(Param0, "CT_AUD", "MPCT_MChang", uParam166, 0);
			break;
		
		case 85:
			func_1(Param0, "CT_AUD", "MPCT_MWhang", uParam166, 0);
			break;
		
		case 18:
			func_1(Param0, "CT_AUD", "MPCT_Shang", uParam166, 0);
			break;
		
		case 86:
			func_1(Param0, "CT_AUD", "MPCT_Ghang", uParam166, 0);
			break;
		
		case 31:
			func_1(Param0, "CT_AUD", "MPCT_Mhang", uParam166, 0);
			break;
		
		case 20:
			func_1(Param0, "CT_AUD", "MPCT_Rhang", uParam166, 0);
			break;
		
		case 91:
			func_1(Param0, "CT_AUD", "MPCT_INhang", uParam166, 0);
			break;
		
		case 41:
			func_1(Param0, "CT_AUD", "MPCT_PGhang", uParam166, 0);
			break;
		
		case 82:
			func_1(Param0, "BACALAU", "BACAL_HANG", uParam166, 1);
			break;
	}
}

bool func_28()
{
	return func_29(PLAYER::PLAYER_ID());
}

int func_29(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

void func_30()
{
	switch (Local_147)
	{
		case 12:
			switch (Local_147.f_178)
			{
				case 3:
					func_75();
					break;
			}
			break;
		
		case 19:
			switch (Local_147.f_178)
			{
				case 1:
					func_64();
					break;
			}
			break;
		
		case 85:
			switch (Local_147.f_178)
			{
				case 1:
					func_31();
					break;
			}
			break;
	}
}

void func_31()
{
	if (func_62(0, -1, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4))
		{
			func_39();
			GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
		}
	}
	if (func_38(1))
	{
		if (!func_37(95, -1))
		{
			func_33(95, 1, -1, 1);
		}
		func_1(Local_147.f_1, "CT_AUD", "MPCT_MERtar", &Local_1270, 0);
		func_32(4);
	}
}

void func_32(int iParam0)
{
	iLocal_508 = iParam0;
}

void func_33(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_36())
	{
		iVar0 = Global_2583656[iParam0][func_34(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_34(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_35();
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

int func_35()
{
	return Global_1312745;
}

int func_36()
{
	return 1;
	return 0;
}

int func_37(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_34(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_38(int iParam0)
{
	if (Global_1573353.f_106[iParam0] != -1 && Global_1573353.f_106[iParam0] == PLAYER::PLAYER_ID())
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			return 1;
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_1653536, iParam0))
		{
			Global_1653536 = 0;
			Global_1653535 = 0;
			return 1;
		}
	}
	return 0;
}

void func_39()
{
	if (func_61(Local_147.f_358, 0, 1))
	{
		func_60(0, 0);
		func_59("STRING");
		StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(Local_147.f_358), 64);
		func_58(Var1);
		func_57(1, 1, 0, 0, 0);
		func_56(1, 2, 1, 1, 1);
		func_55(0, 1, 0, 0, 0);
		Local_147.f_181.f_2 = 1;
		Local_147.f_181.f_69 = 1;
		func_42(iVar0, "GC_MENU8", 0, 1, 0, 0);
		func_40(-1);
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
		Local_147.f_178 = 1;
	}
}

void func_40(int iParam0)
{
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_22350.f_5052 = 0;
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (!func_41(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar1], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

int func_41(var uParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = GAMEPLAY::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_42(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220]), sParam1, 24);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1) && !UI::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_54(Global_22350.f_5218, 1);
	}
	else
	{
		func_54(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_51(&(Global_22350.f_73[Global_22350.f_5220]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_44(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_43(&(Global_22350.f_73[Global_22350.f_5220]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	GAMEPLAY::SET_BIT(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_43(char* sParam0)
{
	if (!UI::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

int func_44(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_50(iParam0), 64);
	StringCopy(&cVar16, func_47(iParam0, bParam1), 64);
	if (GAMEPLAY::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_46())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_46())
			{
				fVar34 = 1f;
			}
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-892862129) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
		}
		Var37 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		Var37.x = (Var37.x * (func_45(iParam0) / fVar34));
		Var37.y = (Var37.y * (func_45(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.x = (Var37.x - 2f);
			Var37.y = (Var37.y - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.x = 288f;
			Var37.y = 106f;
		}
		if (iParam0 == 29 && GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[29])) == -1487683087)
		{
			Var37.x = 106f;
			Var37.y = 106f;
		}
		*fParam3 = ((Var37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.y / IntToFloat(iVar33)) / (Var37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_45(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_46()
{
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_47(int iParam0, bool bParam1)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_7029[iParam0])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_49(PLAYER::PLAYER_ID()) };
			if (NETWORK::_0x5835D9CD92E83184(&Var19, &uVar3))
			{
				return func_48(&uVar3);
			}
		}
		else
		{
			return func_48(&(Global_22350.f_7029[iParam0]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_48(var uParam0)
{
	return uParam0;
}

struct<13> func_49(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_50(int iParam0)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_6020[iParam0])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_49(PLAYER::PLAYER_ID()) };
			NETWORK::_0x5835D9CD92E83184(&Var16, &uVar0);
			return func_48(&uVar0);
		}
		else
		{
			return func_48(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_51(char* sParam0)
{
	if (!GAMEPLAY::IS_STRING_NULL(sParam0))
	{
		if (GAMEPLAY::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_52(0, 1, 0, 0, 0, 0, 0);
	UI::_SET_TEXT_ENTRY_FOR_WIDTH(sParam0);
	return UI::_GET_TEXT_SCREEN_WIDTH(1);
}

void func_52(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (bParam2)
	{
		if (bParam3)
		{
			func_53(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				UI::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				UI::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			UI::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			UI::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			UI::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		UI::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		UI::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		UI::SET_TEXT_SCALE(0f, 0.425f);
		UI::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		UI::SET_TEXT_SCALE(0f, 0.425f);
		UI::SET_TEXT_FONT(6);
	}
	else
	{
		UI::SET_TEXT_FONT(0);
	}
	UI::SET_TEXT_WRAP(0f, 1f);
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_53(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_54(int iParam0, bool bParam1)
{
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_55(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5075[0] = iParam0;
	Global_22350.f_5075[1] = iParam1;
	Global_22350.f_5075[2] = iParam2;
	Global_22350.f_5075[3] = iParam3;
	Global_22350.f_5075[4] = iParam4;
}

void func_56(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_58(char[64] cParam0)
{
	if (Global_22350.f_72 >= 2 || Global_22350.f_68 >= 4)
	{
		return;
	}
	Global_22350.f_5[Global_22350.f_68] = 5;
	Global_22350.f_68++;
	Global_22350.f_35[Global_22350.f_72] = { cParam0 };
	Global_22350.f_72++;
}

void func_59(char* sParam0)
{
	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_60(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2461220[iVar0]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22350.f_6020[iVar0]), "", 64);
		StringCopy(&(Global_22350.f_7029[iVar0]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268421.f_21), "", 16);
	Global_4268421.f_61 = 0;
	Global_4268421.f_62 = 0;
	Global_4268421.f_63 = 0;
	Global_4268421.f_64 = 0;
	Global_4268421.f_65 = 0;
	Global_4268421.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268421.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268421.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8392 = 0;
	Global_22350.f_8387 = 0;
	Global_22350.f_8397 = 0;
	Global_22350.f_8402 = 0;
	Global_22350.f_8407 = 0;
	Global_22350.f_8409 = 0;
	Global_22350.f_8415 = 0;
	Global_22347 = 0.05f;
	Global_22348 = 0.05f;
	Global_22349 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0.225f;
	}
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_62(char* sParam0, int iParam1, bool bParam2)
{
	if (!func_41(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0]), sParam0, 16);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_5635[iVar0])))
	{
		UI::REQUEST_ADDITIONAL_TEXT(&(Global_22350.f_5635[iVar0]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!UI::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22350.f_5635[iVar0]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0].f_1), "instructional_buttons", 24);
	bVar2 = func_63(&(Global_22350.f_5660[iVar0]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_63(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_64()
{
	if (func_62(0, -1, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4))
		{
			func_74();
			GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
		}
	}
	if (func_70(0))
	{
		if (func_38(0))
		{
			iLocal_513 = func_65(2);
			func_1(Local_147.f_1, "CT_AUD", "MPCT_mugTar", &Local_1270, 0);
			func_32(4);
		}
	}
}

int func_65(int iParam0)
{
	iVar0 = 0;
	if (func_69(iParam0) >= 0)
	{
		iVar0 = func_69(iParam0);
	}
	else
	{
		iVar0 = func_66(iParam0);
	}
	return iVar0;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_67())
			{
				return 0;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 1)
			{
				return 200;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 2)
			{
				return 400;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 3)
			{
				return 600;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 4)
			{
				return 800;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_67()
{
	return GAMEPLAY::IS_BIT_SET(func_68(6424, -1, 0), 19);
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_34(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_6645;
			break;
		
		case 10:
			return Global_262145.f_4118;
			break;
		
		case 11:
			return Global_262145.f_4119;
			break;
		
		case 8:
			return Global_262145.f_4116;
			break;
		
		case 0:
			return Global_262145.f_4102;
			break;
		
		case 9:
			return Global_262145.f_4117;
			break;
		
		case 13:
			return Global_262145.f_4121;
			break;
		
		case 12:
			return Global_262145.f_4120;
			break;
		
		case 2:
			return Global_262145.f_4112;
			break;
		
		case 14:
			return Global_262145.f_4122;
			break;
		
		case 20:
			if (func_67())
			{
				return 0;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 1)
			{
				return Global_262145.f_6652;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 2)
			{
				return Global_262145.f_6653;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 3)
			{
				return Global_262145.f_6654;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 4)
			{
				return Global_262145.f_6655;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 5)
			{
				return Global_262145.f_6656;
			}
			break;
		
		case 6:
			return Global_262145.f_4115;
			break;
		
		case 22:
			return Global_262145.f_4128;
			break;
		
		case 23:
			return Global_262145.f_4129;
			break;
		
		case 24:
			return Global_262145.f_4130;
			break;
		
		case 25:
			return Global_262145.f_4131;
			break;
		
		case 26:
			return Global_262145.f_4132;
			break;
		
		case 35:
			return Global_262145.f_7221;
			break;
		
		case 15:
			return Global_262145.f_6646;
			break;
		
		case 17:
			return Global_262145.f_6646;
			break;
		
		case 18:
			return Global_262145.f_6646;
			break;
		
		case 19:
			return Global_262145.f_6646;
			break;
		
		case 21:
			return Global_262145.f_6646;
			break;
		
		case 36:
			return Global_262145.f_7688;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_12884;
			break;
		
		case 41:
			return Global_262145.f_12885;
			break;
		
		case 42:
			return Global_262145.f_12886;
			break;
		
		case 43:
			return Global_262145.f_15429;
			break;
		
		case 44:
			return Global_262145.f_15431;
			break;
		
		case 57:
			return Global_262145.f_4130;
			break;
		
		case 58:
			return Global_262145.f_24998;
			break;
		
		case 62:
			return Global_262145.f_24999;
			break;
		
		case 63:
			return Global_262145.f_28457;
			break;
		
		case 64:
			return Global_262145.f_6646;
			break;
	}
	return 0;
}

int func_70(int iParam0)
{
	iVar0 = PLAYER::PLAYER_ID();
	bVar1 = false;
	switch (iParam0)
	{
		case 0:
			if (Global_1573353.f_106[iParam0] != -1)
			{
				if (Global_1573353.f_106[iParam0] == iVar0)
				{
					if (func_1173() != 2)
					{
						GAMEPLAY::SET_BIT(&uLocal_511, 10);
						func_71(11, 0);
						bVar1 = true;
					}
				}
				else
				{
					GAMEPLAY::SET_BIT(&uLocal_511, 0);
					func_71(2, 0);
					bVar1 = true;
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iVar0].f_145, iParam0))
			{
				GAMEPLAY::SET_BIT(&uLocal_511, 0);
				func_71(2, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				Local_147.f_178 = 5;
			}
			break;
		
		case 1:
			if (Global_1573353.f_106[iParam0] != -1)
			{
				if (Global_1573353.f_106[iParam0] == iVar0)
				{
					if (func_1173() != 2)
					{
						GAMEPLAY::SET_BIT(&uLocal_511, 11);
						func_71(12, 0);
						bVar1 = true;
					}
				}
				else
				{
					GAMEPLAY::SET_BIT(&uLocal_511, 6);
					func_71(8, 0);
					bVar1 = true;
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iVar0].f_145, iParam0))
			{
				GAMEPLAY::SET_BIT(&uLocal_511, 6);
				func_71(8, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				Local_147.f_178 = 4;
			}
			break;
	}
	if (bVar1)
	{
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
		Global_1653535 = 0;
		Global_1653536 = 0;
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 10);
		func_32(1);
		return 0;
	}
	return 1;
}

void func_71(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		Local_557 = { func_73(iParam1, 0, 0) };
	}
	func_72(&uLocal_561, 0, 0);
	GAMEPLAY::SET_BIT(&iLocal_555, iParam0);
}

void func_72(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = GAMEPLAY::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

struct<4> func_73(int iParam0, bool bParam1, int iParam2)
{
	StringCopy(&Var0, "", 16);
	if (iParam0 > 0 || (iParam2 && iParam0 == 0))
	{
		iVar8 = iParam0;
		iVar4 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((iVar8 / 3600000)));
		iVar8 = (iVar8 - (iVar4 * 3600000));
		iVar5 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((iVar8 / 60000)));
		iVar8 = (iVar8 - (iVar5 * 60000));
		iVar6 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((iVar8 / 1000)));
		iVar8 = (iVar8 - iVar6 * 1000);
		iVar7 = iVar8;
		if (iVar4 > 0)
		{
			StringIntConCat(&Var0, iVar4, 16);
			StringConCat(&Var0, ":", 16);
			if (iVar5 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar5, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar5, 16);
			}
			StringConCat(&Var0, ":", 16);
			if (iVar6 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar6, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar6, 16);
			}
		}
		else
		{
			if (iVar5 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar5, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar5, 16);
			}
			StringConCat(&Var0, ":", 16);
			if (iVar6 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar6, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar6, 16);
			}
			if (bParam1)
			{
				StringConCat(&Var0, ":", 16);
				if (iVar7 > 100)
				{
					StringIntConCat(&Var0, iVar7, 16);
				}
				else if (iVar7 > 10)
				{
					StringConCat(&Var0, "0", 16);
					StringIntConCat(&Var0, iVar7, 16);
				}
				else
				{
					StringConCat(&Var0, "00", 16);
					StringIntConCat(&Var0, iVar7, 16);
				}
			}
		}
	}
	else
	{
		StringCopy(&Var0, "---", 16);
	}
	return Var0;
}

void func_74()
{
	if (func_61(Local_147.f_358, 0, 1))
	{
		func_60(0, 0);
		func_59("STRING");
		StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(Local_147.f_358), 64);
		func_58(Var1);
		func_57(1, 1, 0, 0, 0);
		func_56(1, 2, 1, 1, 1);
		func_55(0, 1, 0, 0, 0);
		Local_147.f_181.f_2 = 1;
		Local_147.f_181.f_69 = 1;
		func_42(iVar0, "GC_MENU8", 0, 1, 0, 0);
		func_40(-1);
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
		Local_147.f_178 = 1;
	}
}

void func_75()
{
	iVar0 = PLAYER::PLAYER_ID();
	if (func_62(0, -1, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4))
		{
			func_95();
			GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
		}
	}
	if (Global_2425662[iVar0].f_204 != -1 && func_61(PLAYER::INT_TO_PLAYERINDEX(Global_2425662[iVar0].f_204), 0, 1))
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(Global_2425662[iVar0].f_204);
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(iVar2) >= iLocal_514 || Global_2425662[Global_2425662[iVar0].f_204].f_206 == iVar0)
		{
			Var3.f_2 = -2141984028;
			Var3.f_10 = PLAYER::INT_TO_PLAYERINDEX(Global_2425662[iVar0].f_204);
			if (bLocal_515)
			{
				Var3.f_3 = 1;
			}
			else
			{
				Var3.f_3 = 0;
			}
			func_91(Var3, func_92(1, 1));
			if (!func_37(91, -1))
			{
				func_33(91, 1, -1, 1);
			}
			Var17 = { func_49(Var3.f_10) };
			if (func_90())
			{
				func_78(-180141073, iLocal_513, &iVar1, 0, 0, 0);
				Global_4263954[iVar1].f_14 = { Var17 };
			}
			else
			{
				NETWORKCASH::NETWORK_SPENT_BUY_WANTEDLEVEL(iLocal_513, &Var17, 0, 0);
				func_76(-iLocal_513, 1, 1, 0f);
			}
			Global_2425662[iVar0].f_204 = -1;
			Global_2425662[iVar0].f_205 = -1;
			func_1(Local_147.f_1, "CT_AUD", "MPCT_WNTcon", &Local_1270, 0);
			func_32(4);
		}
	}
	else
	{
		Global_2425662[iVar0].f_204 = -1;
		Global_2425662[iVar0].f_205 = -1;
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
		Local_147.f_181.f_69 = 0;
		Local_147.f_178 = 1;
		func_32(1);
	}
}

void func_76(int iParam0, int iParam1, int iParam2, float fParam3)
{
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1590535[PLAYER::PLAYER_ID()].f_211.f_4 = iVar1;
	Global_1590535[PLAYER::PLAYER_ID()].f_211.f_3 = (Global_1590535[PLAYER::PLAYER_ID()].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_77(iVar1, 0);
	}
}

void func_77(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_78(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_90())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_79(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_79(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_79(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_79(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_90())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!UNK3::_0xB24F0944DA203D9E(func_35()) || UNK3::_0x810E8431C0614BF9())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*iParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || UNK3::_NETWORK_SHOP_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || UNK3::_NETWORK_SHOP_CHECKOUT_START(iVar4))
		{
			*iParam0 = func_86(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*iParam0 != -1)
				{
					Global_4263954[*iParam0].f_66.f_8 = 1;
					Global_4263954[*iParam0].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_85(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_80(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_80(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_81(iParam0);
	}
}

void func_81(int iParam0)
{
	bVar0 = false;
	if (!func_90())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_84(iParam0))
		{
			if (!bVar0)
			{
				unk_0xFA336E7F40C0A0D0();
			}
		}
		else if (!bVar0)
		{
			UNK3::_NETWORK_SHOP_END_SERVICE(Global_4263954[iParam0].f_66);
		}
		func_82(&(Global_4263954[iParam0]));
	}
}

void func_82(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_83(&(uParam0->f_14));
	func_83(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_83(var uParam0)
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

int func_84(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_85(int iParam0, var uParam1)
{
	Global_2463019 = uParam1;
	Global_2463018 = iParam0;
}

int func_86(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_90())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0].f_66.f_2 = 1;
			Global_4263954[iVar0].f_66.f_1 = uParam5;
			Global_4263954[iVar0].f_66.f_3 = iParam1;
			Global_4263954[iVar0].f_66.f_4 = uParam2;
			Global_4263954[iVar0].f_66.f_7 = uParam3;
			Global_4263954[iVar0].f_66.f_5 = 0;
			Global_4263954[iVar0].f_66 = iParam0;
			Global_4263954[iVar0].f_66.f_6 = iParam4;
			Global_4263954[iVar0].f_66.f_11 = uParam8;
			Global_4263954[iVar0].f_66.f_10 = uParam7;
			Global_4263954[iVar0].f_66.f_13 = iParam9;
			Global_4263954[iVar0].f_66.f_12 = 0;
			Global_4263954[iVar0].f_66.f_14 = GAMEPLAY::GET_FRAME_COUNT();
			Global_4263954[iVar0].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_87(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_87(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 285918879;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_89(Var0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_88();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_88()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_89(int iParam0)
{
	if (iParam0 != -1)
	{
		GAMEPLAY::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_90()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

void func_91(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_92(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_61(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_93(iVar2, 0))
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_93(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_94(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_94(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_35();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

void func_95()
{
	if (func_61(Local_147.f_358, 0, 1))
	{
		func_60(0, 0);
		func_59("STRING");
		StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(Local_147.f_358), 64);
		func_58(Var1);
		func_57(1, 1, 0, 0, 0);
		func_56(1, 2, 1, 1, 1);
		func_55(0, 1, 0, 0, 0);
		Local_147.f_181.f_2 = 1;
		Local_147.f_181.f_69 = 1;
		func_42(iVar0, "GC_MENU8", 0, 1, 0, 0);
		func_40(-1);
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
		Local_147.f_178 = 1;
	}
}

int func_96(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_97(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_97(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = GAMEPLAY::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_98(var uParam0)
{
	return uParam0->f_1;
}

void func_99()
{
	bLocal_510 = true;
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HELP_TEXT_THIS_FRAME();
	func_1155();
	func_1154();
	CONTROLS::DISABLE_CONTROL_ACTION(0, 24, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 143, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 16, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 17, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 14, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 15, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 12, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 13, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 85, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
	if (!UI::IS_PAUSE_MENU_ACTIVE())
	{
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 177);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 176);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 174);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 175);
		func_1153(1);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 172);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 181);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 180);
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 15))
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 15);
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 11))
	{
		UI::CLEAR_HELP(1);
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 11);
	}
	if (!Global_1653537)
	{
		Global_1653537 = 1;
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1277, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_1277, 1))
		{
			func_1149(0, 31, 4);
			GAMEPLAY::SET_BIT(&iLocal_1277, 1);
		}
		else if (!Global_98796.f_1417)
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1277, 0);
			GAMEPLAY::CLEAR_BIT(&iLocal_1277, 1);
		}
		return;
	}
	func_905();
	if (func_1173() == 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 13))
		{
			if (func_904())
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 6))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
				}
				Global_22350.f_8382 = 0;
				GAMEPLAY::SET_BIT(&(Local_147.f_359), 13);
			}
			else
			{
				Global_22350.f_8382 = 1;
			}
		}
		switch (Local_147)
		{
			case 12:
				func_854();
				break;
			
			case 19:
				func_845();
				break;
			
			case 85:
				func_802();
				break;
			
			case 84:
				func_800();
				break;
			
			case 89:
				func_799();
				break;
			
			case 41:
				func_724();
				break;
			
			case 91:
				func_684();
				break;
			
			case 18:
				func_682();
				break;
			
			case 31:
				func_680();
				break;
			
			case 86:
				func_678();
				break;
			
			case 20:
				func_676();
				break;
			
			case 104:
			case 105:
			case 106:
			case 107:
			case 108:
			case 109:
			case 110:
			case 111:
				func_674();
				break;
			
			case 82:
				func_661();
				break;
			
			case 79:
				func_598();
				break;
			
			case 75:
			case 74:
				func_542();
				break;
			
			case 157:
				func_100();
				break;
			}
	}
}

void func_100()
{
	func_498();
	if (GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) && GAMEPLAY::IS_BIT_SET(iLocal_1323, 0))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
		GAMEPLAY::CLEAR_BIT(&iLocal_1323, 0);
	}
	switch (Local_147.f_178)
	{
		case 23:
			if (func_497(PLAYER::PLAYER_ID(), 12))
			{
				if (func_490())
				{
					func_489(12);
					func_32(4);
				}
				return;
			}
			if (func_62(0, -1, 1))
			{
				if (bLocal_1335 && func_486())
				{
					GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
					bLocal_1335 = false;
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_485();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_284();
				}
				else
				{
					func_284();
					func_112();
				}
			}
			break;
		
		case 24:
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					if (func_108())
					{
						GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
						func_284();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_284();
					func_101();
				}
			}
			break;
	}
}

void func_101()
{
	if (Local_147.f_181.f_69 == 6)
	{
		func_107("MPCT_EXIT", 0, 0);
	}
	else if (!GAMEPLAY::IS_BIT_SET(iLocal_1323, 2))
	{
		if (func_104(60) > 0)
		{
			Local_557 = { func_73(func_104(60), 0, 0) };
			func_107("CONT_REQ_CD", 0, 0);
			func_103(&Local_557);
		}
		else
		{
			switch (func_102())
			{
				case 1:
					func_107("MPCT_CASINO_VD2", 0, 0);
					break;
				
				default:
					func_107("MPCT_CASINO_VD1", 0, 0);
					break;
				}
		}
	}
	else
	{
		switch (Local_147.f_181.f_69)
		{
			case 0:
				func_107("MPCT_REQCOGH", 0, 0);
				break;
			
			case 1:
				func_107("MPCT_REQWINH", 0, 0);
				break;
			
			case 2:
				func_107("MPCT_REQFUGH", 0, 0);
				break;
			
			case 3:
				func_107("MPCT_REQSUPH", 0, 0);
				break;
			
			case 4:
				func_107("MPCT_REQDUBH", 0, 0);
				break;
			
			case 5:
				func_107("MPCT_REQFELH", 0, 0);
				break;
			
			default:
				func_107("MPCT_PERVEHc", 0, 0);
				break;
			}
	}
}

int func_102()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11.f_299;
}

void func_103(char* sParam0)
{
	if (Global_22350.f_4765 >= 3 || Global_22350.f_4762 >= 4)
	{
		return;
	}
	Global_22350.f_4696[Global_22350.f_4762] = 5;
	Global_22350.f_4762++;
	StringCopy(&(Global_22350.f_4713[Global_22350.f_4765]), sParam0, 64);
	Global_22350.f_4765++;
}

int func_104(int iParam0)
{
	iVar0 = -1;
	if (func_98(&(Global_2451426.f_4308.f_197[iParam0])))
	{
		if (!func_96(&(Global_2451426.f_4308.f_197[iParam0]), func_106(iParam0), 1))
		{
			iVar1 = func_105(&(Global_2451426.f_4308.f_197[iParam0]), 1, 0);
			iVar1 = (func_106(iParam0) - iVar1);
			return iVar1;
		}
	}
	return iVar0;
}

var func_105(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0);
}

int func_106(int iParam0)
{
	return Global_2451426.f_4308.f_328[iParam0];
}

void func_107(char* sParam0, int iParam1, int iParam2)
{
	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = GAMEPLAY::GET_GAME_TIMER();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

int func_108()
{
	func_60(0, 0);
	func_59("MPCT_CASINO_V");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	bVar0 = GAMEPLAY::IS_BIT_SET(iLocal_1323, 2);
	func_42(0, "COGCABRI", 0, bVar0, 0, 0);
	func_42(1, "WINDSOR", 0, bVar0, 0, 0);
	func_42(2, "FUGITIVE", 0, bVar0, 0, 0);
	func_42(3, "SUPERD", 0, bVar0, 0, 0);
	func_42(4, "DUBSTA", 0, bVar0, 0, 0);
	func_42(5, "FELTZER", 0, bVar0, 0, 0);
	func_40(-1);
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		func_111(237, "BB_SELECT", -1, 0);
		func_111(238, "BB_BACK", -1, 0);
	}
	else
	{
		func_110(176, "BB_SELECT", -1);
		func_110(177, "BB_BACK", -1);
	}
	GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = 6;
	return 1;
}

void func_109(var uParam0, bool bParam1, int iParam2)
{
	Global_22350.f_5739 = uParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268421.f_21), "", 16);
	}
}

void func_110(int iParam0, char* sParam1, int iParam2)
{
	sVar0 = CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_111(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	sVar0 = CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		GAMEPLAY::SET_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_112()
{
	switch (Local_147.f_181.f_69)
	{
		case 0:
			if (Global_262145.f_26327)
			{
				func_107("MPCT_CASINO_RD3", 0, 0);
			}
			else if (func_486())
			{
				func_107("MPCT_CASINO_RD0", 0, 0);
			}
			else if (bLocal_1335)
			{
				func_107("MPCT_CASINO_RD2", 0, 0);
			}
			else if (!func_283())
			{
				func_107("MPCT_CASINO_RD1", 0, 0);
			}
			else if (func_114(PLAYER::PLAYER_ID(), 243, 0) == 16)
			{
				func_107("MPCT_CASINO_RD4", 0, 0);
			}
			else if (func_114(PLAYER::PLAYER_ID(), 243, 0) == 15)
			{
				func_107("MPCT_CASINO_RD5", 0, 0);
			}
			else
			{
				func_107("MPCT_CASINO_RD3", 0, 0);
			}
			break;
		
		case 1:
			if (!Global_262145.f_26328 && GAMEPLAY::IS_BIT_SET(iLocal_1323, 1))
			{
				func_107("MPCT_CASINO_LD0", 0, 0);
			}
			else if (func_104(59) > 0)
			{
				Local_557 = { func_73(func_104(59), 0, 0) };
				func_107("CONT_REQ_CD", 0, 0);
				func_103(&Local_557);
			}
			else
			{
				switch (func_113())
				{
					case 1:
						func_107("MPCT_CASINO_LD2", 0, 0);
						break;
					
					default:
						func_107("MPCT_CASINO_LD1", 0, 0);
						break;
					}
			}
			break;
		
		case 2:
			if (!Global_262145.f_26329 && GAMEPLAY::IS_BIT_SET(iLocal_1323, 2))
			{
				func_107("MPCT_CASINO_VD0", 0, 0);
			}
			else if (func_104(60) > 0)
			{
				Local_557 = { func_73(func_104(60), 0, 0) };
				func_107("CONT_REQ_CD", 0, 0);
				func_103(&Local_557);
			}
			else
			{
				switch (func_102())
				{
					case 1:
						func_107("MPCT_CASINO_VD2", 0, 0);
						break;
					
					default:
						func_107("MPCT_CASINO_VD1", 0, 0);
						break;
					}
			}
			break;
		
		default:
			func_107("", 0, 0);
			break;
	}
}

int func_113()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11.f_298;
}

int func_114(int iParam0, int iParam1, bool bParam2)
{
	if (!func_149(func_255(iParam1, -1, -1, -1), func_212(iParam1, -1, 1, -1, -1, iParam0), func_158(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_147(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_145(iParam1) >= func_144(iVar0))
	{
		return 5;
	}
	if (func_143(iParam0))
	{
		return 6;
	}
	if (func_142(iParam0))
	{
		return 14;
	}
	iVar1 = func_137(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_136(iParam1) == 1)
	{
		if ((func_135() || func_134()) || ((!bParam2 && func_133() != 0) && func_136(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_136(iParam1) == 2)
	{
		if (!func_129(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1628237[iParam0].f_11.f_34 != func_8())
			{
				return 9;
			}
		}
		if (func_128(iParam0))
		{
			return 10;
		}
	}
	else if (func_126(iParam1))
	{
		if (func_124(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_123(iParam1))
	{
		if (func_122())
		{
			return 13;
		}
		if (func_120())
		{
			return 12;
		}
	}
	if (func_124(iParam0) + 1 < func_119(iVar0))
	{
		return 4;
	}
	switch (iParam1)
	{
		case 157:
			break;
		
		case 152:
		case 164:
		case 173:
		case 170:
		case 201:
		case 200:
			if (!func_116(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_115(iParam0, 21) || func_115(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

bool func_115(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_208, iParam1);
}

int func_116(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (!func_117(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_7(iVar1, 31))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_117(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_8())
	{
		if (!bParam2)
		{
			if (func_118(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_8())
		{
			return iParam1 == Global_1628237[iParam0].f_11;
		}
	}
	return 0;
}

int func_118(int iParam0, int iParam1)
{
	if (iParam1 != func_8())
	{
		if (iParam0 != func_8())
		{
			if (Global_1628237[iParam0].f_11 != func_8())
			{
				if (Global_1628237[iParam0].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_18163;
		
		case 183:
			return Global_262145.f_18171;
		
		case 185:
			return Global_262145.f_18180;
		
		case 182:
			return Global_262145.f_18191;
		
		case 186:
			return Global_262145.f_18200;
		
		case 195:
			return Global_262145.f_18218;
		
		case 198:
			return Global_262145.f_18228;
		
		case 197:
			return Global_262145.f_18240;
		
		case 207:
			return Global_262145.f_18248;
		
		case 209:
			return Global_262145.f_18261;
		
		case 208:
			return Global_262145.f_18269;
		
		case 201:
			return Global_262145.f_18302;
		
		case 211:
			return Global_262145.f_18370;
		
		case 193:
			return Global_262145.f_18393;
		
		case 205:
			return Global_262145.f_18411;
		
		case 189:
			return Global_262145.f_18376;
		
		case 216:
			return 2;
		
		case 220:
			return 2;
		
		default:
	}
	return 1;
}

int func_120()
{
	if (func_121())
	{
		return 1;
	}
	return Global_2450632.f_644;
}

bool func_121()
{
	return Global_1312837 == 10;
}

bool func_122()
{
	return Global_262145.f_15220;
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_124(int iParam0)
{
	if (func_125(iParam0) == func_8())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

int func_125(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_8();
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_127(iParam0, 0);
	return 0;
}

int func_127(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_128(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if ((Global_1628237[iParam0].f_11.f_34 != func_8() && Global_1628237[iParam0].f_11.f_34 == iVar1) && Global_1628237[iVar1].f_11.f_34 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 179:
			if (func_132() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_130() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_130() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_130()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_131(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_131(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (Global_1628237[iParam0].f_11 != func_8())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_132()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_147(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_133()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11.f_102;
}

bool func_134()
{
	return Global_1650640.f_11.f_144 != -1;
}

bool func_135()
{
	return Global_1650640.f_11.f_143 != -1;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_137(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_139())
	{
		iVar1 = Global_1628237[iParam0].f_11.f_11[iVar0];
		if (iVar1 != func_8())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (func_143(iVar1))
				{
					return 7;
				}
				if (func_142(iVar1))
				{
					return 15;
				}
				if (func_138(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_138(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (((((GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 2) || GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 3)) || GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 5)) || GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 6)) || GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 7)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_369.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_139()
{
	return (func_140() - 1);
}

int func_140()
{
	return func_141(PLAYER::PLAYER_ID());
}

int func_141(int iParam0)
{
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_8() && Global_1628237[iVar0].f_11.f_450 == 1)
	{
		return 8;
	}
	return 4;
}

int func_142(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2513889;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == 1885233650 || iVar1 == -1667301416)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_143(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_144(int iParam0)
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_12566;
		
		case 155:
			return Global_262145.f_12591;
		
		case 153:
			return Global_262145.f_12555;
		
		case 163:
			return Global_262145.f_12531;
		
		case 160:
			return Global_262145.f_12544;
		
		case 154:
			return Global_262145.f_12601;
		
		case 169:
			return 1;
		
		case 171:
			return Global_262145.f_15047;
		
		case 172:
			return Global_262145.f_15066;
		
		case 148:
			return Global_262145.f_18277;
		
		case 179:
			return Global_262145.f_18285;
		
		case 201:
			return Global_262145.f_18299;
		
		case 200:
			return Global_262145.f_18339;
		
		case 211:
			return Global_262145.f_18368;
		
		case 194:
			return Global_262145.f_18380;
		
		case 193:
			return Global_262145.f_18391;
		
		case 210:
			return Global_262145.f_18403;
		
		case 205:
			return Global_262145.f_18409;
		
		case 199:
			return Global_262145.f_18422;
		
		case 249:
			return 1;
		
		case 238:
			return 1;
		
		default:
	}
	return 2147483647;
}

int func_145(int iParam0)
{
	return Global_1650640.f_11.f_147[func_146(iParam0)];
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 0;
		
		case 152:
			return 1;
		
		case 151:
			return 2;
		
		case 142:
			return 3;
		
		case 157:
			return 4;
		
		case 159:
			return 5;
		
		case 164:
			return 6;
		
		case 160:
			return 7;
		
		case 162:
			return 8;
		
		case 163:
			return 9;
		
		case 154:
			return 10;
		
		case 155:
			return 11;
		
		case 153:
			return 12;
		
		case 166:
			return 13;
		
		case 167:
			return 14;
		
		case 168:
			return 15;
		
		case 169:
			return 16;
		
		case 170:
			return 17;
		
		case 171:
			return 18;
		
		case 172:
			return 19;
		
		case 173:
			return 20;
		
		case 178:
			return 21;
		
		case 179:
			return 22;
		
		case 180:
			return 23;
		
		case 181:
			return 24;
		
		case 182:
			return 25;
		
		case 183:
			return 26;
		
		case 185:
			return 27;
		
		case 186:
			return 28;
		
		case 189:
			return 31;
		
		case 190:
			return 32;
		
		case 191:
			return 33;
		
		case 192:
			return 34;
		
		case 193:
			return 35;
		
		case 194:
			return 36;
		
		case 195:
			return 37;
		
		case 197:
			return 39;
		
		case 198:
			return 40;
		
		case 199:
			return 41;
		
		case 200:
			return 42;
		
		case 201:
			return 43;
		
		case 205:
			return 44;
		
		case 207:
			return 45;
		
		case 208:
			return 46;
		
		case 209:
			return 47;
		
		case 210:
			return 48;
		
		case 214:
			return 49;
		
		case 215:
			return 50;
		
		case 216:
			return 51;
		
		case 217:
			return 52;
		
		case 218:
			return 53;
		
		case 219:
			return 54;
		
		case 220:
			return 55;
		
		case 221:
			return 56;
		
		case 188:
			return 30;
		
		case 225:
			return 57;
		
		case 226:
			return 58;
		
		case 227:
			return 59;
		
		case 229:
			return 60;
		
		case 230:
			return 61;
		
		case 233:
			return 62;
		
		case 237:
			return 63;
		
		case 238:
			return 64;
		
		case 239:
			return 65;
		
		case 240:
			return 66;
		
		case 241:
			return 67;
		
		case 242:
			return 68;
		
		case 244:
			return 69;
		
		case 248:
			return 70;
		
		case 249:
			return 71;
		
		case 250:
			return 72;
		
		case 243:
			return 73;
		
		case 158:
			return 74;
		
		case 24:
			return 75;
		
		case 26:
			return 76;
		
		default:
	}
	return -1;
}

bool func_147(int iParam0)
{
	return func_148(iParam0, 1);
}

int func_148(int iParam0, int iParam1)
{
	if (iParam0 != func_8())
	{
		if (Global_1628237[iParam0].f_11 != func_8())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_149(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_157(iParam0, bParam3, bParam4) || func_156(iParam1, bParam3, bParam4)) || func_150(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_150(int iParam0, bool bParam1, bool bParam2)
{
	return func_151(2, iParam0, 0, bParam1, bParam2);
}

int func_151(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!GAMEPLAY::IS_BIT_SET(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_155(iParam0) - func_154(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_154(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_155(iParam0) - func_153(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_154(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_155(iParam0) - func_154(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[PLAYER::PLAYER_ID()] != 3)
		{
			iVar1 = (iVar1 - func_152(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389296.f_1;
			break;
		
		case 1:
			return Global_1389296.f_2;
			break;
		
		case 2:
			return Global_1389296.f_3;
			break;
	}
	return 0;
}

int func_154(int iParam0, bool bParam1)
{
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0].f_209;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0].f_210;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0].f_211;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_155(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389304;
			break;
		
		case 1:
			return Global_1389305;
			break;
		
		case 2:
			return Global_1389306;
			break;
	}
	return 0;
}

int func_156(int iParam0, bool bParam1, bool bParam2)
{
	return func_151(1, iParam0, 0, bParam1, bParam2);
}

int func_157(int iParam0, bool bParam1, bool bParam2)
{
	return func_151(0, iParam0, 0, bParam1, bParam2);
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_211(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		case 178:
		case 188:
			return func_209(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_203(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_191(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 233:
			return func_184(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 179:
			return 0;
		
		case 182:
			return 7;
		
		case 185:
			return 6;
		
		case 186:
			return 2;
		
		case 180:
			return 9;
		
		case 190:
			return 8;
		
		case 191:
			return 0;
		
		case 192:
			return func_175(iParam1, iParam2);
		
		case 193:
			return 0;
		
		case 194:
			return 0;
		
		case 199:
			return 0;
		
		case 195:
			return 9;
		
		case 201:
			return 16;
		
		case 198:
			return 12;
		
		case 205:
			return 8;
		
		case 207:
			return 0;
		
		case 208:
			return 15;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		case 214:
			return 9;
		
		case 215:
			return 0;
		
		case 216:
			return 16;
		
		case 217:
			return 0;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 30;
		
		case 221:
			return 30;
		
		case 237:
		case 250:
			return func_172(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_171(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 1;
		
		case 241:
			return 1;
		
		case 242:
			return 1;
		
		case 244:
			return 4;
		
		case 248:
			return 5;
		
		case 243:
			return func_167(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 158:
			return func_162(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 181:
			return func_159(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_159(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_161(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_160(iParam0, iParam2));
	return iVar0;
}

int func_160(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_161(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_162(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_166(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_163(iParam0, iParam2));
	return iVar0;
}

int func_163(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam0)
	{
		case 4:
		case 2:
		case 1:
		case 3:
		case 30:
		case 31:
		case 32:
		case 28:
		case 29:
		case 52:
		case 37:
			return 0;
		
		case 19:
		case 20:
			return 1;
		
		case 38:
		case 8:
		case 14:
		case 17:
		case 11:
		case 18:
		case 21:
		case 22:
		case 7:
		case 34:
		case 23:
		case 41:
		case 49:
		case 48:
		case 27:
		case 15:
		case 50:
		case 24:
		case 6:
		case 9:
		case 10:
		case 47:
		case 42:
		case 26:
		case 25:
			return 2;
		
		case 43:
			return 3;
		
		case 16:
			return 4;
		
		case 12:
		case 13:
			if (func_165(iParam1, 1))
			{
				Var0 = { func_164(iParam1) };
			}
			if (Var0.y == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 33:
			return 5;
	}
	return 1;
}

Vector3 func_164(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_301;
}

bool func_165(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_131(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_8();
}

int func_166(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 24:
			return 1;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					return 11;
				
				case 31:
				case 32:
					return 9;
				
				default:
			}
			break;
		
		case 36:
			return 0;
		
		case 38:
			return 3;
		
		case 40:
			return 4;
		
		case 41:
			return 4;
		
		case 8:
			return 13;
		
		case 13:
			switch (iParam1)
			{
				case 38:
				case 39:
					return 10;
				
				case 40:
					return 11;
				
				default:
			}
			break;
		
		case 35:
			return 5;
		
		case 46:
			return 2;
		
		case 9:
			return 8;
		
		case 4:
			return 7;
		
		case 14:
			return 11;
		
		case 17:
			return 8;
		
		case 47:
			return 11;
		
		case 11:
			return 9;
		
		case 18:
			return 13;
		
		case 6:
			return 17;
		
		case 48:
			return 21;
		
		case 33:
			return 5;
		
		case 44:
			return 2;
		
		case 21:
			return 22;
		
		case 22:
			return 12;
		
		case 7:
			return 10;
		
		case 2:
			return 0;
		
		case 34:
			switch (iParam1)
			{
				case 91:
					return 16;
				
				case 92:
					return 14;
				
				default:
			}
			break;
		
		case 27:
			return 12;
		
		case 23:
			return 17;
		
		case 31:
			return 3;
		
		case 12:
			return 4;
		
		case 3:
			return 2;
		
		case 49:
			return 15;
		
		case 19:
			return 14;
		
		case 50:
			return 12;
		
		case 20:
			return 12;
		
		case 32:
			return 15;
		
		case 30:
			return 6;
		
		case 16:
			return 12;
		
		case 39:
			return 5;
		
		case 42:
			return 3;
		
		case 37:
			return 19;
		
		case 52:
			return 6;
		
		case 15:
			return 2;
		
		case 25:
			switch (iParam1)
			{
				case 69:
					return 11;
				
				case 70:
					return 12;
				
				default:
			}
			break;
	}
	return 0;
}

int func_167(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_170(iParam0, iParam1, iParam3);
	if (!func_169(iParam0))
	{
		iVar0 = (iVar0 + func_168(iParam0, iParam2));
	}
	return iVar0;
}

int func_168(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_124(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_169(int iParam0)
{
	return 0;
}

int func_170(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 13:
			return 3;
		
		case 5:
			switch (iParam1)
			{
				case 15:
					return 17;
				
				case 16:
					return 12;
				
				case 17:
					return 12;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
				case 36:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					return 3;
				
				default:
			}
			break;
		
		case 12:
			return 15;
		
		case 0:
			return 1;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 0;
						
						case 2:
							return 3;
						
						default:
					}
					break;
				
				case 29:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 2;
						
						case 2:
							return 0;
						
						default:
					}
					break;
				
				case 30:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 0;
						
						case 2:
							return 0;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 10:
					return 6;
				
				default:
			}
			return 5;
		
		case 2:
			switch (iParam1)
			{
				case 6:
					return 22;
				
				case 7:
					return 23;
				
				case 8:
					return 25;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return 3;
				
				case 26:
					return 8;
				
				case 27:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 0;
		
		case 4:
			return 3;
		
		case 5:
			return 0;
		
		default:
	}
	return 0;
}

int func_172(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_174(iParam0, iParam1);
	if (func_173(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_173(int iParam0)
{
	return 1;
}

int func_174(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			return 3;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					return 3;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
					return 2;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 102:
				case 103:
				case 104:
					return 4;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 133:
				case 135:
					return 1;
				
				case 136:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			return 10;
		
		case 18:
			return 3;
		
		case 3:
			return 4;
		
		case 21:
			return 2;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 9;
				
				case 1:
					return 9;
				
				case 2:
					return 8;
				
				case 3:
					return 6;
				
				case 4:
					return 8;
				
				case 5:
					return 8;
				
				case 6:
					return 8;
				
				case 7:
					return 8;
				
				case 8:
					return 8;
				
				case 9:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_175(int iParam0, int iParam1)
{
	iVar0 = func_183(iParam0, iParam1);
	if (!func_182(iParam0))
	{
		iVar0 = (iVar0 + func_176(iParam0, func_180() + 1));
	}
	if (iParam0 == 14 || ((((func_182(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_176(iParam0, func_180() + 1));
	}
	if (iParam0 == 7)
	{
		iVar0 += 6;
	}
	if (iParam0 == 17)
	{
		iVar0 += 2;
	}
	return iVar0;
}

int func_176(int iParam0, int iParam1)
{
	if (func_179(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_178(iParam0, iParam1);
			iVar2 = func_177(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_182(iParam0))
		{
			if (iVar0 > Global_262145.f_17914)
			{
				iVar0 = Global_262145.f_17914;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_17913)
			{
				iVar0 = Global_262145.f_17913;
			}
			if (iVar0 > Global_262145.f_17912)
			{
				iVar0 = Global_262145.f_17912;
			}
		}
	}
	return iVar0;
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_17951;
		
		case 10:
			return Global_262145.f_17976;
		
		default:
	}
	return 1;
}

int func_178(int iParam0, int iParam1)
{
	if (func_182(iParam0))
	{
		if (iParam1 >= Global_262145.f_17915)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_17952;
		
		case 10:
			return Global_262145.f_17977;
		
		default:
	}
	return 8;
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_180()
{
	if (func_181() == func_8())
	{
		return 0;
	}
	return func_124(func_181());
}

int func_181()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

int func_182(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_183(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
				
				case 196:
					return 3;
				
				case 197:
					return 3;
				
				case 198:
					return 3;
				
				case 199:
					return 3;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
				
				case 8:
					return 8;
				
				case 9:
					return 7;
				
				case 10:
					return 4;
				
				case 11:
					return 5;
				
				case 12:
					return 6;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
				
				case 2:
					return 10;
				
				case 3:
					return 8;
				
				case 4:
					return 10;
				
				case 5:
					return 10;
				
				case 6:
					return 10;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
				
				case 14:
					return 8;
				
				case 15:
					return 8;
				
				case 16:
					return 8;
				
				case 17:
					return 10;
				
				case 18:
					return 9;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
				
				case 20:
					return 8;
				
				case 21:
					return 4;
				
				case 22:
					return 0;
				
				case 23:
					return 10;
				
				case 24:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
				
				case 26:
					return 15;
				
				case 27:
					return 13;
				
				case 28:
					return 16;
				
				case 29:
					return 14;
				
				case 30:
					return 14;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
				
				case 75:
					return 5;
				
				case 76:
					return 5;
				
				case 77:
					return 4;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
				
				case 67:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
				
				case 39:
					return 6;
				
				case 40:
					return 7;
				
				case 41:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_184(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_190(iParam0, iParam1, iParam2, iParam4);
	if (!func_189(iParam0))
	{
		if (iParam3 != func_8())
		{
			iVar0 = (iVar0 + func_186(iParam0, func_124(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_185(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 5:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_186(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_189(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_188(iParam0))
	{
		iVar0 = func_188(iParam0);
	}
	else if (iVar0 < func_187(iParam0))
	{
		iVar0 = func_187(iParam0);
	}
	return iVar0;
}

int func_187(int iParam0)
{
	return 1;
}

int func_188(int iParam0)
{
	return 4;
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_190(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 5;
		
		case 3:
			iVar0 = 1;
			switch (iParam1)
			{
				case 26:
					return iVar0 + 1;
				
				case 34:
					return iVar0 + 1;
				
				default:
			}
			return iVar0;
			break;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 8:
			return 7;
		
		case 12:
			switch (iParam1)
			{
				case 125:
					return 6;
				
				default:
			}
			return 2;
			break;
		
		case 9:
			return 0;
		
		case 13:
			return 1;
		
		case 10:
			return 12;
	}
	return 0;
}

int func_191(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_202(iParam0, iParam1, iParam2, iParam4);
	if (!func_201(iParam0))
	{
		if (iParam3 != func_8())
		{
			iVar0 = (iVar0 + func_193(iParam0, func_124(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_192(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_200(iParam0))
	{
		iVar1 = func_199(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_198(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_197(iParam2))
		{
			iVar0 = func_197(iParam2);
		}
	}
	if (iVar0 > func_195(iParam0))
	{
		iVar0 = func_195(iParam0);
	}
	else if (iVar0 < func_194(iParam0))
	{
		iVar0 = func_194(iParam0);
	}
	return iVar0;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_195(int iParam0)
{
	if (!func_200(iParam0))
	{
		if (func_201(iParam0))
		{
			if (func_196(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_197(int iParam0)
{
	if (iParam0 == func_8() || Global_1590535[iParam0].f_274.f_264 == 0)
	{
		return 50;
	}
	return (50 - Global_1590535[iParam0].f_274.f_264.f_3);
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_199(int iParam0)
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_201(int iParam0)
{
	if (func_200(iParam0) || func_198(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 12;
		
		case 11:
			return 1;
		
		case 5:
			return 10;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
				
				case 35:
					return 20;
				
				case 36:
					return 22;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
				
				case 7:
					return 0;
				
				case 8:
					return 5;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
				
				case 2:
					return 14;
				
				case 3:
					return 14;
				
				case 4:
					return 14;
				
				default:
			}
			break;
		
		case 8:
			return 2;
		
		case 23:
			return (2 * iParam2);
		
		case 24:
			return (2 * iParam2);
		
		case 26:
			return 2;
	}
	return 0;
}

int func_203(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_208(iParam0, iParam1, iParam2, iParam3);
	if (!func_207(iParam0))
	{
		iVar0 = (iVar0 + func_205(iParam0, func_180() + 1, -1, iParam2));
	}
	if (func_204(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_205(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_206(iParam0))
	{
		if (iParam2 <= Global_262145.f_21206)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21207)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_207(iParam0))
	{
		if (iParam1 < Global_262145.f_21166)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_208(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 6;
				
				case 2:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					return 0;
				
				case 4:
					return 0;
				
				case 5:
					return 0;
				
				case 6:
					return 0;
				
				case 7:
					return 0;
				
				case 8:
					return 0;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
				
				case 10:
					return 0;
				
				case 11:
					return 0;
				
				case 12:
					return 0;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
				
				case 15:
					return 12;
				
				case 13:
					return 2;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
				
				case 17:
					return 0;
				
				case 18:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
				
				case 20:
					return 15;
				
				case 21:
					return 11;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
				
				case 23:
					return 7;
				
				case 24:
					return 6;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return (6 + iParam2 * 2);
				
				case 26:
					return (7 + iParam2 * 2);
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
				
				case 28:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
				
				case 30:
					return 6;
				
				case 31:
					return 6;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
				
				case 33:
					return 8;
				
				case 34:
					return 8;
				
				default:
			}
			break;
		
		case 12:
			return 0;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
				
				case 36:
					return 9;
				
				case 37:
					return 0;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
				
				case 1:
					return 16;
				
				case 2:
					return 6;
				
				case 3:
					return 3;
				
				case 4:
					return 9;
				
				case 5:
					return 6;
				
				case 6:
					return 6;
				
				case 7:
					return 3;
				
				case 8:
					return 3;
				
				case 9:
					return 3;
				
				case 10:
					return 0;
				
				case 11:
					return 9;
				
				case 12:
					return 3;
				
				default:
			}
			break;
		
		case 15:
			return iParam2;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 13;
	}
	return 0;
}

int func_209(int iParam0, int iParam1, var uParam2)
{
	iVar0 = func_210(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_210(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
				
				case 19:
					return 7;
				
				case 20:
					return 8;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
				
				case 28:
					return 1;
				
				case 29:
					return 1;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
				
				case 22:
					return 2;
				
				case 23:
					return 2;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
				
				case 37:
					return 7;
				
				case 38:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
				
				case 40:
					return 6;
				
				case 41:
					return 2;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
				
				case 43:
					return 1;
				
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
				
				case 46:
					return 12;
				
				case 47:
					return 12;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
				
				case 49:
					return 7;
				
				case 50:
					return 7;
				
				default:
			}
			break;
		
		case 12:
			return 3;
	}
	return 0;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

int func_212(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_254(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_250(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_246(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_240(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
		
		case 233:
			return func_234(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_233(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_232(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_231(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_225(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_219(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_213(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_213(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_218(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_217(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_216(func_124(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_215(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_214(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_214(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_215(int iParam0, int iParam1)
{
	return func_214(iParam0, iParam1) > 0;
}

int func_216(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_217(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_218(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_219(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_224(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_223(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_222(func_124(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_221(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_220(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_220(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_221(int iParam0, int iParam1)
{
	return func_220(iParam0, iParam1) > 0;
}

int func_222(int iParam0, int iParam1, int iParam2)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_8())
			{
				if (func_165(iParam2, 1))
				{
					Var0 = { func_164(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (Var0.y == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

int func_223(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_224(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_225(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_169(iParam0))
		{
			iVar0 = (iVar0 + func_168(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_230(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_229(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_228(func_124(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_227(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_226(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_226(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_227(int iParam0, int iParam1)
{
	return func_226(iParam0, iParam1) > 0;
}

int func_228(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_229(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_230(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_232(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_173(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_233(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case 79:
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_182(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_176(iParam0, func_180() + 1));
	}
	return iVar0;
}

int func_234(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_189(iParam0))
		{
			if (iParam3 != func_8())
			{
				iVar0 = (iVar0 + func_186(iParam0, func_124(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_8())
		{
			iVar0 = (iVar0 + func_239(iParam0, func_124(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_238(0, iParam1) != -1)
		{
			if (iParam3 != func_8())
			{
				iVar0 = (iVar0 + func_237(func_124(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_236(iParam0))
		{
			iVar0 = (iVar0 + func_235(iParam0));
		}
	}
	return iVar0;
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_236(int iParam0)
{
	return func_235(iParam0) > 0;
}

int func_237(var uParam0, int iParam1)
{
	return 2;
}

int func_238(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_239(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			iVar0 = func_68(5326, -1, 0);
			if (GAMEPLAY::IS_BIT_SET(iVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_240(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_201(iParam0))
		{
			if (iParam3 != func_8())
			{
				iVar0 = (iVar0 + func_193(iParam0, func_124(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_8())
		{
			iVar0 = (iVar0 + func_245(iParam0, func_124(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_244(0, iParam1) != -1)
		{
			if (iParam3 != func_8())
			{
				iVar0 = (iVar0 + func_243(func_124(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_242(iParam0))
		{
			iVar0 = (iVar0 + func_241(iParam0));
		}
	}
	return iVar0;
}

int func_241(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_242(int iParam0)
{
	return func_241(iParam0) > 0;
}

int func_243(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_196(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_196(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_196(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_196(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_196(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_196(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_196(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_196(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_244(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_245(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return SYSTEM::CEIL((IntToFloat(iParam1) / 2f));
}

int func_246(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_205(iParam0, func_180() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_207(iParam0))
		{
			iVar0 = (iVar0 + func_205(iParam0, func_180() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_249(iParam0, func_180() + 1));
	}
	if (!bParam3)
	{
		if (func_248(iParam0))
		{
			iVar0 = (iVar0 + func_247(iParam0));
		}
	}
	return iVar0;
}

int func_247(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_248(int iParam0)
{
	return func_247(iParam0) > 0;
}

int func_249(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return SYSTEM::FLOOR((IntToFloat(iParam1) / 1.5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return SYSTEM::FLOOR((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_250(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_253(iParam0, func_180() + 1, iParam2));
	iVar0 = (iVar0 + func_251(iParam0));
	return iVar0;
}

int func_251(int iParam0)
{
	if (func_252(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_253(int iParam0, var uParam1, int iParam2)
{
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

int func_255(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_282(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 178:
		case 188:
			return func_279(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_276(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_273(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_270(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_269(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_268();
		
		case 218:
			return func_267();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_266(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_265(iParam1, iParam2);
		
		case 239:
			return 6;
		
		case 240:
			return 11;
		
		case 241:
			return 14;
		
		case 242:
			return 14;
		
		case 244:
			return 9;
		
		case 248:
			return 10;
		
		case 243:
			return func_262(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_259(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_256(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_256(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_215(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_257(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_257(int iParam0, var uParam1)
{
	if (func_215(iParam0, uParam1))
	{
		return (func_214(iParam0, uParam1) + func_258(iParam0, uParam1));
	}
	return 0;
}

int func_258(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_259(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			iVar0 += 6;
			break;
		
		case 24:
			iVar0 += 2;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 12;
					break;
				
				case 31:
				case 32:
					iVar0 += 10;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 88:
					iVar0 += 10;
					break;
				
				case 89:
					iVar0 += 9;
					break;
				
				case 90:
					iVar0 += 10;
					break;
			}
			break;
		
		case 36:
			iVar0 += 9;
			break;
		
		case 43:
			iVar0 += 6;
			break;
		
		case 38:
			iVar0 += 6;
			break;
		
		case 40:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 += 16;
			break;
		
		case 16:
			iVar0 += 14;
			break;
		
		case 35:
			iVar0 += 13;
			break;
		
		case 4:
			iVar0 += 32;
			break;
		
		case 45:
			iVar0 += 2;
			break;
		
		case 46:
			iVar0 += 9;
			break;
		
		case 9:
			iVar0 += 15;
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 17:
			iVar0 += 14;
			break;
		
		case 47:
			iVar0 += 13;
			break;
		
		case 11:
			iVar0 += 11;
			break;
		
		case 18:
			iVar0 += 24;
			break;
		
		case 6:
			iVar0 += 14;
			break;
		
		case 48:
			iVar0 += 15;
			break;
		
		case 44:
			iVar0 += 9;
			break;
		
		case 21:
			iVar0 += 20;
			break;
		
		case 22:
			iVar0 += 14;
			break;
		
		case 7:
			iVar0 += 22;
			break;
		
		case 15:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 34:
			iVar0 += 18;
			break;
		
		case 27:
			iVar0 += 16;
			break;
		
		case 26:
			iVar0 += 10;
			break;
		
		case 23:
			iVar0 += 10;
			break;
		
		case 31:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 14;
			break;
		
		case 12:
			iVar0 += 7;
			break;
		
		case 41:
			iVar0 += 10;
			break;
		
		case 49:
			iVar0 += 30;
			break;
		
		case 19:
			iVar0 += 15;
			break;
		
		case 5:
			iVar0 += 7;
			break;
		
		case 30:
			iVar0++;
			break;
		
		case 13:
			iVar0 += 20;
			break;
		
		case 29:
			iVar0 += 9;
			break;
		
		case 50:
			iVar0 += 24;
			break;
		
		case 20:
			iVar0 += 26;
			break;
		
		case 32:
			iVar0 += 30;
			break;
		
		case 28:
			iVar0 += 3;
			break;
		
		case 42:
			iVar0 += 13;
			break;
		
		case 52:
			iVar0 += 12;
			break;
		
		case 39:
			iVar0 += 5;
			break;
		
		case 37:
			iVar0 += 6;
			break;
		
		case 25:
			iVar0 += 6;
			break;
		
		case 51:
			iVar0 += 20;
			break;
	}
	if (!bParam2)
	{
		if (func_221(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_260(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_260(int iParam0, int iParam1)
{
	if (func_221(iParam0, iParam1))
	{
		return (func_220(iParam0, iParam1) + func_261(iParam0, iParam1));
	}
	return 0;
}

int func_261(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
		
		case 6:
		case 50:
		case 47:
			return 4;
		
		case 27:
			return 2;
		
		default:
	}
	return 0;
}

int func_262(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 13:
			iVar0 += 8;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 2:
					iVar0 += 10;
					break;
				
				case 3:
					iVar0 += 10;
					break;
				
				case 4:
					iVar0 += 14;
					break;
				
				case 5:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			iVar0 += 20;
			break;
		
		case 14:
			iVar0 += 19;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 6;
					break;
				
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 17;
					break;
			}
			break;
		
		case 6:
			iVar0 += 8;
			break;
		
		case 5:
			iVar0 += 11;
			break;
		
		case 0:
			iVar0 += 12;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0++;
					break;
				
				case 32:
					iVar0 += 7;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 12:
			iVar0 += 30;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					iVar0 += 10;
					break;
				
				case 29:
					iVar0 += 8;
					break;
				
				case 30:
					iVar0 += 9;
					break;
			}
			break;
		
		case 3:
			iVar0 += 19;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 12;
					break;
				
				case 13:
					iVar0 += 14;
					break;
				
				case 14:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam2)
	{
		if (func_227(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_263(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_263(int iParam0, int iParam1)
{
	if (func_227(iParam0, iParam1))
	{
		return (func_226(iParam0, iParam1) + func_264(iParam0, iParam1));
	}
	return 0;
}

int func_264(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

int func_265(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 14;
		
		case 1:
			return 7;
		
		case 2:
			return 27;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
				
				case 1:
					return 9;
				
				default:
			}
			break;
	}
	return 0;
}

int func_266(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					iVar0 += 19;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 9;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					iVar0 += 3;
					break;
			}
			break;
		
		case 22:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0 += 3;
			break;
		
		case 20:
			iVar0 += 12;
			break;
		
		case 18:
			iVar0 += 20;
			break;
		
		case 17:
			iVar0 += 9;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 5;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 17;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 1:
			iVar0 += 30;
			break;
		
		case 2:
			iVar0 += 4;
			break;
		
		case 5:
			iVar0 += 16;
			break;
	}
	return iVar0;
}

int func_267()
{
	iVar0 = 32;
	return iVar0;
}

int func_268()
{
	iVar0 = 8;
	return iVar0;
}

int func_269(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case 79:
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 += 3;
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_176(iParam0, func_180() + 1));
	}
	return iVar0;
}

int func_270(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 14;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 3:
			iVar0 += 23;
			break;
		
		case 4:
			iVar0 += 20;
			break;
		
		case 5:
			iVar0 += 5;
			break;
		
		case 8:
			iVar0 += 11;
			break;
		
		case 6:
			iVar0 += 7;
			break;
		
		case 12:
			iVar0 += 8;
			break;
		
		case 7:
			iVar0 += 18;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 12;
			break;
		
		case 13:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_236(iParam0))
		{
			iVar0 = (iVar0 + func_271(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_271(int iParam0, var uParam1)
{
	if (func_236(iParam0))
	{
		return (func_235(iParam0) + func_272(iParam0, uParam1));
	}
	return 0;
}

int func_272(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		
		case 8:
			return 4;
		
		default:
	}
	return 0;
}

int func_273(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_242(iParam0))
		{
			iVar0 = (iVar0 + func_274(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_274(int iParam0, int iParam1)
{
	if (func_242(iParam0))
	{
		return (func_241(iParam0) + func_275(iParam0, iParam1));
	}
	return 0;
}

int func_275(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_276(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_248(iParam0))
		{
			iVar0 = (iVar0 + func_277(iParam0));
		}
	}
	return iVar0;
}

int func_277(int iParam0)
{
	if (func_248(iParam0))
	{
		return (func_247(iParam0) + func_278(iParam0));
	}
	return 0;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_279(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_280(iParam0));
	return iVar0;
}

int func_280(int iParam0)
{
	if (func_252(iParam0))
	{
		if (func_281(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_281(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

bool func_283()
{
	return func_131(PLAYER::PLAYER_ID());
}

void func_284()
{
	func_310();
	func_285(1, -1, 1, GAMEPLAY::IS_BIT_SET(iLocal_1277, 2), 1, -1082130432, 0, 0, -1);
}

void func_285(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_41(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_308(0, bParam6))
	{
		return;
	}
	GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_44(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_1)) == GAMEPLAY::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_22348;
	}
	else
	{
		fVar59 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar60, &iVar61);
		fVar63 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_46())
		{
			iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(iVar60) / SYSTEM::TO_FLOAT(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_46())
		{
			fVar62 = 1f;
		}
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar62));
		iVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) / fVar62));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_42(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_1)) == GAMEPLAY::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar65, func_50(29), 64);
					StringCopy(&cVar81, func_47(29, 1), 64);
					if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[29])) == -1487683087)
					{
						func_307(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8387)
				{
					iVar1 = Global_22350.f_8383;
					iVar2 = Global_22350.f_8384;
					iVar3 = Global_22350.f_8385;
					iVar4 = Global_22350.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_307(Global_22347, (Global_22348 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
				if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_1)) != 0)
				{
					func_306();
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						iVar14++;
					}
					UI::END_TEXT_COMMAND_DISPLAY_TEXT((Global_22347 + 0.00390625f), ((Global_22348 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_306();
					func_304((((Global_22347 + fParam5) - 0.00390625f) - func_305("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_306();
						func_304((((Global_22347 + fParam5) - 0.00390625f) - func_305("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22350.f_8397)
			{
				iVar1 = Global_22350.f_8393;
				iVar2 = Global_22350.f_8394;
				iVar3 = Global_22350.f_8395;
				iVar4 = Global_22350.f_8396;
			}
			else
			{
				UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22350.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar97 + ((fVar51 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8402)
				{
					iVar1 = Global_22350.f_8398;
					iVar2 = Global_22350.f_8399;
					iVar3 = Global_22350.f_8400;
					iVar4 = Global_22350.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_307(Global_22347, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.x = (Var38.x * (0.5f / fVar62));
				Var38.y = (Var38.y * (0.5f / fVar62));
				if (Global_22350.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					UI::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.x / 1280f) * fVar62), ((Var38.y / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_44(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_303(fVar42);
				UI::_SET_TEXT_GXT_ENTRY(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UI::_GET_TEXT_SCREEN_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				UI::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_307(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_303(fVar42);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_44(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_302(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_50(Global_22350.f_4768), func_47(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((GAMEPLAY::GET_GAME_TIMER() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_4268421.f_21)) != 0 && Global_4268421.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_4268421.f_67 != 0)
				{
					func_44(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_303(fVar42);
				UI::_SET_TEXT_GXT_ENTRY(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UI::_GET_TEXT_SCREEN_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				UI::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_307(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_303(fVar42);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4268421.f_67 != 0)
				{
					func_44(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_302(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_50(Global_4268421.f_67), func_47(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268421.f_65 > 0)
				{
					if ((GAMEPLAY::GET_GAME_TIMER() - Global_4268421.f_66) > Global_4268421.f_65)
					{
						StringCopy(&(Global_4268421.f_21), "", 16);
						Global_4268421.f_65 = -1;
					}
				}
			}
			func_297(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar98 = (Global_22350.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_22350.f_8409)
					{
						UI::GET_HUD_COLOUR(Global_22350.f_8408, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						UI::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_22350.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22350.f_5226)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_22350.f_5089[iVar6], iVar8) || Global_22350.f_5056[iVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar20 = Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar21 = Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar22 = Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar23 = Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)];
						}
						else
						{
							Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar19;
							Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar20;
							Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar21;
							Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar22;
							Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22350.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0.0046875f) + Global_22350.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22350.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[iVar8 + 1])
						{
							fVar46 = (Global_22350.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22347 + Global_22349) - 0.0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[iVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22350.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22350.f_2124[iVar24][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_52(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											UI::_SET_TEXT_ENTRY_FOR_WIDTH(&(Global_22350.f_73[iVar24]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 1)
											{
												iVar25++;
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												iVar25++;
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 5)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 6)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 7)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 2)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 3)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
										{
											fVar43 = UI::_GET_TEXT_SCREEN_WIDTH(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_44(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 51) || Global_22350.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
										Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22350.f_5083[iVar101] == 2)
												{
													Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] = (Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] - Global_22350.f_5068[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_44(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_44(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_302(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_50(26), func_47(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_44(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_44(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_302(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_50(27), func_47(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_52(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_296(bVar32);
										}
										UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_73[iVar24]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24][iVar14] == 1)
										{
											iVar25++;
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 8)
										{
											iVar25++;
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 5)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 6)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 7)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 9)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 2)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 3)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 51) || Global_22350.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_44(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_44(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_302(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_50(Global_22350.f_4433[(iVar22 + iVar28)]), func_47(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_50(Global_22350.f_4433[(iVar22 + iVar28)]), func_47(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[iVar8] == 2)
										{
											UI::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											UI::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_295() && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1768762336) > 0)
											{
												if (iVar8 == 0)
												{
													func_52(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													UI::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													UI::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), 0);
													UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													UI::ADD_TEXT_COMPONENT_INTEGER((Global_22350.f_5738 + iVar30));
													UI::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 51) && Global_22350.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_44(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_44(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_302(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_50(Global_22350.f_4433[(iVar22 + iVar14)]), func_47(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_50(Global_22350.f_4433[(iVar22 + iVar14)]), func_47(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_50(Global_22350.f_4433[(iVar22 + iVar14)]), func_47(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_52(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_296(bVar32);
										}
										UI::_SET_TEXT_ENTRY_FOR_WIDTH("NUMBER");
										UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[iVar20]);
										fVar43 = UI::_GET_TEXT_SCREEN_WIDTH(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_44(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_44(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_302(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_50(26), func_47(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_44(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_44(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_302(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_50(27), func_47(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_52(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_294((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_52(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_296(bVar32);
										}
										UI::_SET_TEXT_ENTRY_FOR_WIDTH("NUMBER");
										UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar43 = UI::_GET_TEXT_SCREEN_WIDTH(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_44(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_44(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_302(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_50(26), func_47(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_44(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_44(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_302(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_50(27), func_47(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									func_52(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_293((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_44(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22350.f_5083[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
											Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
											fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
										}
										if (bVar54)
										{
											if (func_44(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_44(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_302(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_50(26), func_47(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_44(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_44(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_302(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_50(27), func_47(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_44(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_302(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_50(Global_22350.f_4433[iVar22]), func_47(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_292(Global_22350.f_4433[iVar22])), (fVar37 * func_292(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22350.f_5056[iVar8] == 5)
						{
							if (Global_22350.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							if (Global_22350.f_5075[iVar8])
							{
								if (func_44(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22350.f_8038[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar51;
	Global_22350.f_5878 = GAMEPLAY::GET_GAME_TIMER();
	UI::_0x55598D21339CB998(Global_22350.f_5876);
	if (!Global_22350.f_8382)
	{
		func_286(0);
	}
	Global_22350.f_8382 = 0;
	if (bParam2)
	{
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_1153(1);
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

void func_286(int iParam0)
{
	if (func_291())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_290(0))
		{
			func_287(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_7357, 2);
	}
}

void func_287(int iParam0)
{
	if (func_291())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_289())
		{
			func_288(1, 1);
		}
		else
		{
			func_288(0, 0);
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
	if (!func_11())
	{
		Global_19486.f_1 = 3;
	}
}

void func_288(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_290(0))
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

bool func_289()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

int func_290(int iParam0)
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

bool func_291()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

float func_292(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_293(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_294(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

var func_295()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

void func_296(bool bParam0)
{
	if (bParam0)
	{
		UI::GET_HUD_COLOUR(Global_22350.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		UI::GET_HUD_COLOUR(Global_22350.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_297(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!func_41(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_308(bParam4, bParam8))
	{
		return;
	}
	if (func_300())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_93(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (CONTROLS::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5026[iVar1], 1), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), CONTROLS::_0x80C2FD58D720C801(2, Global_22350.f_5039[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "CLEAR_ALL");
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_MAX_WIDTH");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT((1f - (Global_22350.f_5081 / 100f)));
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			if (GAMEPLAY::IS_PC_VERSION())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_4964[iVar1])) != GAMEPLAY::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
					func_299(&(Global_22350.f_4771[iVar1]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_4964[iVar2])) == GAMEPLAY::GET_HASH_KEY("PREV"))
					{
						func_299(&(Global_22350.f_4771[iVar2]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_298(&(Global_22350.f_4964[iVar1]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_22350.f_4964[iVar1]));
						if (bParam5)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (Global_22350.f_5026[iVar1] != 361 && GAMEPLAY::IS_BIT_SET(Global_22350.f_5052, iVar1))
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_22350.f_5026[iVar1]);
						}
						else
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(361);
						}
					}
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				iVar1++;
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_4268421.f_16)) != GAMEPLAY::GET_HASH_KEY(""))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_22350.f_4769);
				func_299(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_298(&(Global_4268421.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_4268421.f_16));
					if (bParam5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_BACKGROUND_COLOUR");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(80);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_22350.f_4964[iVar1]));
					if (bParam5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
			}
			iVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_4268421.f_16));
				if (bParam5)
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
		GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 66);
		GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				UI::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			UI::RESET_HUD_COMPONENT_VALUES(15);
			Global_22350.f_8417 = 0;
		}
		GRAPHICS::_SCREEN_DRAW_POSITION_END();
		if (Global_22350.f_5055)
		{
			GRAPHICS::_SET_SCREEN_DRAW_POSITION(82, 66);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_22350.f_5660[iVar0], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::_SCREEN_DRAW_POSITION_END();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22350.f_5660[iVar0], 255, 255, 255, 255, 0);
		}
	}
}

void func_298(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_299(var uParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(uParam0);
}

int func_300()
{
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_301())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_19431 == 0)
		{
			if (Var0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_301()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	return 0;
}

void func_302(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	UI::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			UI::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_303(float fParam0)
{
	UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_LEADING(2);
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	UI::SET_TEXT_WRAP(fParam0, ((Global_22347 + Global_22349) - 0.0046875f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_304(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_305(char* sParam0, int iParam1, int iParam2)
{
	if (!GAMEPLAY::IS_STRING_NULL(sParam0))
	{
		if (GAMEPLAY::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_306();
	UI::_SET_TEXT_ENTRY_FOR_WIDTH(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return UI::_GET_TEXT_SCREEN_WIDTH(1);
}

void func_306()
{
	UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22350.f_8392)
	{
		iVar0 = Global_22350.f_8388;
		iVar1 = Global_22350.f_8389;
		iVar2 = Global_22350.f_8390;
		iVar3 = Global_22350.f_8391;
	}
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	UI::SET_TEXT_WRAP((Global_22347 + 0.0046875f), ((Global_22347 + Global_22349) - 0.0046875f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_307(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_308(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_22(8, -1) && func_309() != 65)) || (UI::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::_0x2EAC52B4019E2782()) || Global_76882) || Global_22350.f_8416) || UI::IS_WARNING_MESSAGE_ACTIVE()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_309()
{
	return Global_1312812;
}

void func_310()
{
	iVar19 = 0;
	iVar22 = 0;
	if (iLocal_555 == 0 && iLocal_556 == 0)
	{
		switch (Local_147.f_178)
		{
			case 0:
				switch (Local_147.f_181.f_70[Local_147.f_181.f_69])
				{
					case 0:
						if (func_479(29, 0, 0))
						{
							if (!func_454(1))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(1))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_DES_BNTY", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_LOCKED", 100, 0);
							func_419(func_420(29));
						}
						if (func_417(1))
						{
							func_416("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 1:
						if (func_479(65, 0, 0))
						{
							if (!func_454(20))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(20))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_LOSE_WANT", 100, 0);
							}
						}
						else
						{
							iVar1 = func_415(PLAYER::PLAYER_ID());
							if (iVar1 < func_420(65))
							{
								func_107("MPCT_LOCKED", 100, 0);
								func_419(func_420(65));
							}
							else
							{
								func_107("MPCT_WLEST", 100, 0);
							}
						}
						if (func_417(20))
						{
							func_416("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 2:
						if (func_479(75, 0, 0))
						{
							if (!func_454(6))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(6))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_OTR", 100, 0);
							}
						}
						else
						{
							iVar1 = func_415(PLAYER::PLAYER_ID());
							if (iVar1 < func_420(75))
							{
								func_107("MPCT_LOCKED", 100, 0);
								func_419(func_420(75));
							}
							else
							{
								func_107("MPCT_WLEST", 100, 0);
							}
						}
						if (func_417(6))
						{
							func_416("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 3:
						if (func_479(95, 0, 0))
						{
							if (!func_454(14))
							{
								func_107("MPCT_RVLPL", 100, 0);
							}
							else if (!func_424(14))
							{
								func_107("MPCT_RVLPL", 100, 0);
							}
							else
							{
								func_107("MPCT_RE", 100, 0);
							}
						}
						else
						{
							iVar1 = func_415(PLAYER::PLAYER_ID());
							if (iVar1 < func_420(95))
							{
								func_107("MPCT_LOCKED", 100, 0);
								func_419(func_420(95));
							}
							else
							{
								func_107("MPCT_WLEST", 100, 0);
							}
						}
						if (func_417(14))
						{
							func_416("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 4:
						if (func_479(88, 0, 0))
						{
							if (!func_454(15))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(15))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_LJOB", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_RQJL", 100, 0);
						}
						break;
					
					case 10:
						if (func_479(121, 0, 0))
						{
							if (!func_454(36))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(36))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else if (func_414())
							{
								func_107("MPCT_RQHU", 100, 0);
							}
							else if (func_413(PLAYER::PLAYER_ID(), 0, 0) && func_398())
							{
								func_107("MPCT_RQAPT", 100, 0);
							}
							else
							{
								func_107("MPCT_HJOB", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_RQHL", 100, 0);
						}
						break;
					
					case 11:
						if (func_479(96, 0, 0))
						{
							if (func_414())
							{
								if (!func_454(37))
								{
									func_107("MPCT_UNAVAIL0", 100, 0);
								}
								else if (!func_424(37))
								{
									func_107("MPCT_UNAVAIL1", 100, 0);
								}
								else
								{
									func_107("MPCT_CNCL", 100, 0);
								}
							}
							else
							{
								func_107("MPCT_CNCLH", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_RQHL", 100, 0);
						}
						break;
					
					case 12:
						if (func_397(PLAYER::PLAYER_ID()))
						{
							if (func_396(PLAYER::PLAYER_ID(), 0) == -1)
							{
								func_107("HPPHONE_REPLAYH", 100, 0);
							}
							else
							{
								func_107("HPPHONE_UNAV2", 100, 0);
							}
						}
						else
						{
							func_107("HPPHONE_UNAV1", 100, 0);
						}
						break;
					
					case 13:
						if (func_397(PLAYER::PLAYER_ID()))
						{
							if (func_396(PLAYER::PLAYER_ID(), 0) != -1)
							{
								func_107("HPPHONE_CANCELH", 100, 0);
							}
							else
							{
								func_107("HPPHONE_UNAV3", 100, 0);
							}
						}
						else
						{
							func_107("HPPHONE_UNAV1", 100, 0);
						}
						break;
					
					case 15:
						if ((func_395(PLAYER::PLAYER_ID(), 1) && func_395(PLAYER::PLAYER_ID(), 2)) && func_395(PLAYER::PLAYER_ID(), 3))
						{
							if (!func_394(PLAYER::PLAYER_ID()))
							{
								func_107("CSH_LPHONE_UNAV2", 100, 0);
							}
							else if (func_392(PLAYER::PLAYER_ID()))
							{
								func_107("CSH_LPHONE_UNAV3", 100, 0);
							}
							else
							{
								func_107("CSH_LPHONE_TIP1", 100, 0);
							}
						}
						else
						{
							func_107("CSH_LPHONE_UNAV1", 100, 0);
						}
						break;
					
					case 5:
						if (func_479(104, 0, 0))
						{
							if (!func_454(23))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(23))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_LCBT", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_LOCKED", 100, 0);
							func_419(func_420(104));
						}
						if (func_417(23))
						{
							func_416("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 6:
						if (func_479(98, 0, 0))
						{
							if (!func_454(24))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(24))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_LCHL", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_LOCKED", 100, 0);
							func_419(func_420(98));
						}
						if (func_417(24))
						{
							func_416("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 7:
						if (func_479(103, 0, 0))
						{
							if (!func_454(25))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(25))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_LCCR", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_LOCKED", 100, 0);
							func_419(func_420(103));
						}
						if (func_417(25))
						{
							func_416("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 8:
						if (func_479(105, 0, 0))
						{
							if (!func_454(26))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(26))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_LCPL", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_LOCKED", 100, 0);
							func_419(func_420(105));
						}
						if (func_417(26))
						{
							func_416("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 14:
						if (func_479(98, 0, 0))
						{
							if (!func_454(57))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(57))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_LCHL", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_LOCKED", 100, 0);
							func_419(func_420(98));
						}
						if (func_417(57))
						{
							func_416("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 9:
						if (func_479(119, 0, 0))
						{
							if (!func_454(35))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(35))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else if (func_391())
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (func_388())
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else
							{
								func_107("MPCT_NCPS", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_LOCKED", 100, 0);
							func_419(func_420(119));
						}
						if (func_417(35))
						{
							func_416("MPCT_LESTDIS", 100, 0);
						}
						break;
				}
				break;
			
			case 5:
				if (func_1173() == 1)
				{
					switch (Local_147.f_181.f_70[Local_147.f_181.f_69])
					{
						case 0:
							if (func_479(67, 0, 0))
							{
								if (!func_454(2))
								{
									func_107("MPCT_UNAVAIL0", 100, 0);
								}
								else if (!func_424(2))
								{
									func_107("MPCT_UNAVAIL1", 100, 0);
								}
								else
								{
									func_107("MPCT_THIEF", 100, 0);
								}
							}
							else
							{
								iVar1 = func_415(PLAYER::PLAYER_ID());
								if (iVar1 < func_420(67))
								{
									func_107("MPCT_LOCKED", 100, 0);
									func_419(func_420(67));
								}
								else
								{
									func_107("MPCT_WLAM", 100, 0);
								}
							}
							if (func_417(2))
							{
								func_416("MPCT_LAMADIS", 100, 0);
							}
							break;
						
						case 1:
							if (!func_454(38))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(38))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("FM_LAMC_FRD", 100, 0);
							}
							break;
						
						case 2:
							func_107("MPCT_EXIT", 100, 0);
							break;
						}
				}
				break;
			
			case 4:
				switch (Local_147.f_181.f_70[Local_147.f_181.f_69])
				{
					case 5:
						if (func_479(64, 0, 0))
						{
							if (!func_454(11) || GAMEPLAY::IS_BIT_SET(Global_42599, 10))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(11))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_AIRSTRIKE", 100, 0);
							}
						}
						else
						{
							iVar1 = func_415(PLAYER::PLAYER_ID());
							if (iVar1 < func_420(64))
							{
								func_107("MPCT_LOCKED", 100, 0);
								func_419(func_420(64));
							}
							else
							{
								func_107("MPCT_WMERRY", 100, 0);
							}
						}
						if (func_417(11))
						{
							func_416("MPCT_MERRYDIS", 100, 0);
						}
						break;
					
					case 0:
						if (func_479(61, 0, 0))
						{
							if (!func_454(8))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(8))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_AMMO", 100, 0);
							}
						}
						else
						{
							iVar1 = func_415(PLAYER::PLAYER_ID());
							if (iVar1 < func_420(61))
							{
								func_107("MPCT_LOCKED", 100, 0);
								func_419(func_420(61));
							}
							else
							{
								func_107("MPCT_WMERRY", 100, 0);
							}
						}
						if (func_417(8))
						{
							func_416("MPCT_MERRYDIS", 100, 0);
						}
						break;
					
					case 1:
						if (func_479(62, 0, 0))
						{
							if (!func_454(10))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(10))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_BACK_HELI", 100, 0);
							}
						}
						else
						{
							iVar1 = func_415(PLAYER::PLAYER_ID());
							if (iVar1 < func_420(62))
							{
								func_107("MPCT_LOCKED", 100, 0);
								func_419(func_420(62));
							}
							else
							{
								func_107("MPCT_WMERRY", 100, 0);
							}
						}
						if (func_417(10))
						{
							func_416("MPCT_MERRYDIS", 100, 0);
						}
						break;
					
					case 2:
						if (func_479(63, 0, 0))
						{
							if (!func_454(9))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(9))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_BOAT", 100, 0);
							}
						}
						else
						{
							iVar1 = func_415(PLAYER::PLAYER_ID());
							if (iVar1 < func_420(63))
							{
								func_107("MPCT_LOCKED", 100, 0);
								func_419(func_420(63));
							}
							else
							{
								func_107("MPCT_WMERRY", 100, 0);
							}
						}
						if (func_417(9))
						{
							func_416("MPCT_MERRYDIS", 100, 0);
						}
						break;
					
					case 4:
						if (func_479(81, 0, 0))
						{
							if (!func_454(12))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(12))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_ARMY", 100, 0);
							}
						}
						else
						{
							iVar1 = func_415(PLAYER::PLAYER_ID());
							if (iVar1 < func_420(81))
							{
								func_107("MPCT_LOCKED", 100, 0);
								func_419(func_420(81));
							}
							else
							{
								func_107("MPCT_WMERRY", 100, 0);
							}
						}
						if (func_417(12))
						{
							func_416("MPCT_MERRYDIS", 100, 0);
						}
						break;
					
					case 3:
						if (func_479(77, 0, 0))
						{
							iVar23 = func_387();
							if (iVar23 != 0)
							{
								if (iVar23 == 2)
								{
									func_107("MPCT_UNAVAIL2", 100, 0);
								}
								else
								{
									func_107("MPCT_UNAVAIL0", 100, 0);
								}
							}
							else if (!func_454(13))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(13))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_HELI", 100, 0);
							}
						}
						else
						{
							iVar1 = func_415(PLAYER::PLAYER_ID());
							if (iVar1 < func_420(77))
							{
								func_107("MPCT_LOCKED", 100, 0);
								func_419(func_420(77));
							}
							else
							{
								func_107("MPCT_WMERRY", 100, 0);
							}
						}
						if (func_417(13))
						{
							func_416("MPCT_MERRYDIS", 100, 0);
						}
						break;
				}
				break;
			
			case 10:
				if (iLocal_1222 == -1 && iLocal_1223)
				{
				}
				else if (func_417(22) && Local_147.f_181.f_69 <= Local_147.f_181.f_2)
				{
					func_107("MPCT_PEGADIS", 100, 0);
				}
				break;
			
			case 7:
				switch (Local_147.f_181.f_69)
				{
					case 0:
						if (func_479(74, 0, 0))
						{
							if (!func_454(0))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(0))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_BRUC_BOX", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_LOCKED", 100, 0);
							func_419(func_420(74));
						}
						if (func_417(0))
						{
							func_416("MPCT_BRUCEDIS", 100, 0);
						}
						break;
					
					case 1:
						func_107("MPCT_EXIT", 100, 0);
						break;
				}
				break;
			
			case 18:
				switch (Local_147.f_181.f_69)
				{
					case 0:
						if (func_479(130, 0, 0))
						{
							if (!func_454(39))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(39))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_GB_LIMO", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_LOCKED", 100, 0);
							func_419(func_420(74));
						}
						break;
					
					case 1:
						func_107("MPCT_EXIT", 100, 0);
						break;
				}
				break;
			
			case 19:
				switch (Local_147.f_181.f_69)
				{
					case 0:
						if (func_386(PLAYER::PLAYER_ID()))
						{
							iVar24 = func_385(PLAYER::PLAYER_ID());
							if (!func_424(42) || !func_454(42))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (func_384(0, 1024))
							{
								func_107("MPCT_YC_HNONE", 100, 0);
							}
							else if (func_383(0))
							{
								func_107("MPCT_YC_HSPN", 100, 0);
							}
							else if (func_382(PLAYER::PLAYER_ID(), 0))
							{
								func_107("MPCT_YC_HIN", 100, 0);
							}
							else if (func_376(PLAYER::PLAYER_ID(), iVar24, 100f))
							{
								func_107("MPCT_YC_CLOSE", 100, 0);
							}
							else if (func_375(0))
							{
								func_107("MPCT_YC_HSPWND", 100, 0);
							}
							else
							{
								func_107("MPCT_YC_YAH", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_YC_NOY", 100, 0);
						}
						if (func_417(40))
						{
							func_416("MPCT_YACHTDIS", 100, 0);
						}
						break;
					
					case 1:
						if (func_386(PLAYER::PLAYER_ID()))
						{
							iVar25 = func_385(PLAYER::PLAYER_ID());
							if (!func_424(42) || !func_454(42))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (func_382(PLAYER::PLAYER_ID(), 1))
							{
								func_107("MPCT_YC_BIN", 100, 0);
							}
							else if (func_383(1))
							{
								func_107("MPCT_YC_BSPN", 100, 0);
							}
							else if (func_376(PLAYER::PLAYER_ID(), iVar25, 100f))
							{
								func_107("MPCT_YC_CLOSE", 100, 0);
							}
							else if (func_375(1))
							{
								func_107("MPCT_YC_BSPWND", 100, 0);
							}
							else
							{
								func_107("MPCT_YC_YAB", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_YC_NOY", 100, 0);
						}
						if (func_417(41))
						{
							func_416("MPCT_YACHTDIS", 100, 0);
						}
						break;
					
					case 2:
						if (func_386(PLAYER::PLAYER_ID()))
						{
							iVar28 = func_385(PLAYER::PLAYER_ID());
							func_349(&bVar27, &bVar26);
							if (!func_424(42) || !func_454(42))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (func_348(PLAYER::PLAYER_ID()))
							{
								func_107("MPCT_YC_PIN", 100, 0);
							}
							else if (func_339(1133903872))
							{
								func_107("MPCT_YC_PSPWND", 100, 0);
							}
							else if (!bVar27)
							{
								func_107("MPCT_YC_GAR", 100, 0);
							}
							else if (!bVar26)
							{
								func_107("MPCT_YC_VEH", 100, 0);
							}
							else if (!func_376(PLAYER::PLAYER_ID(), iVar28, 100f))
							{
								func_107("MPCT_YC_FAR", 100, 0);
							}
							else
							{
								func_107("MPCT_YC_YAP", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_YC_NOY", 100, 0);
						}
						if (func_417(42))
						{
							func_416("MPCT_YACHTDIS", 100, 0);
						}
						break;
					
					case 3:
						if (func_386(PLAYER::PLAYER_ID()))
						{
							if ((!func_424(64) || !func_454(64)) || Global_262145.f_28467)
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else
							{
								func_107("YACHT_REQDESC", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_YC_NOY", 100, 0);
						}
						break;
				}
				break;
			
			case 20:
				switch (Local_147.f_181.f_69)
				{
					case 0:
						if (func_338(PLAYER::PLAYER_ID()))
						{
							if (!func_454(43))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(43))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else if (func_333(func_337()))
							{
								if (func_332())
								{
									func_107("MPCT_PA_IMP", 100, 0);
								}
								else
								{
									func_107("MPCT_PA_IMP_F", 100, 0);
								}
							}
							else
							{
								func_107("MPCT_PA_IMPF", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_PA_NOY", 100, 0);
						}
						if (func_417(43))
						{
							func_416("MPCT_YACHTDIS", 100, 0);
						}
						break;
					
					case 1:
						if (func_338(PLAYER::PLAYER_ID()))
						{
							iVar23 = func_330();
							if (iVar23 != 0)
							{
								if (iVar23 == 3)
								{
									func_107("MPCT_PA_YAH0A", 100, 0);
								}
								else if (iVar23 == 2)
								{
									func_107("MPCT_UNAVAIL2", 100, 0);
								}
								else
								{
									func_107("MPCT_UNAVAIL0", 100, 0);
								}
							}
							else if (!func_454(44))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(44))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else if (func_329())
							{
								if (func_332())
								{
									func_107("MPCT_PA_HP", 100, 0);
								}
								else
								{
									func_107("MPCT_PA_HPF", 100, 0);
								}
							}
							else if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 10))
							{
								func_107("MPCT_PA_YAH0U", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_PA_NOY", 100, 0);
						}
						if (func_417(44))
						{
							func_416("MPCT_YACHTDIS", 100, 0);
						}
						break;
				}
				break;
			
			case 21:
				break;
			
			case 12:
				switch (Local_147.f_181.f_69)
				{
					case 0:
						if (func_479(99, 0, 0))
						{
							if (!func_454(18))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(18))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_LJOB", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_RQJS", 100, 0);
						}
						break;
					
					case 1:
						func_107("MPCT_EXIT", 100, 0);
						break;
				}
				break;
			
			case 13:
				switch (Local_147.f_181.f_69)
				{
					case 0:
						if (func_479(100, 0, 0))
						{
							if (!func_454(19))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(19))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_LJOB", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_RQJM", 100, 0);
						}
						break;
					
					case 1:
						func_107("MPCT_EXIT", 100, 0);
						break;
				}
				break;
			
			case 15:
				switch (Local_147.f_181.f_69)
				{
					case 0:
						if (func_479(106, 0, 0))
						{
							if (!func_454(21))
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_424(21))
							{
								func_107("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_107("MPCT_LJOB", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_RQJR", 100, 0);
						}
						break;
					
					case 1:
						func_107("MPCT_EXIT", 100, 0);
						break;
				}
				break;
			
			case 14:
				switch (Local_147.f_181.f_69)
				{
					case 0:
						if (func_479(97, 0, 0))
						{
							if (func_454(17))
							{
								if (func_424(17))
								{
									func_107("MPCT_LJOB", 100, 0);
								}
								else
								{
									func_107("MPCT_UNAVAIL1", 100, 0);
								}
							}
							else
							{
								func_107("MPCT_UNAVAIL0", 100, 0);
							}
						}
						else
						{
							func_107("MPCT_RQJG", 100, 0);
						}
						break;
					
					case 1:
						func_107("MPCT_EXIT", 100, 0);
						break;
				}
				break;
			
			case 2:
				switch (Local_147.f_181.f_69)
				{
					case 0:
						bVar0 = func_328(Local_147.f_358);
						if (bVar0)
						{
							func_107("BB_DES_CUR", 100, 0);
						}
						else if (func_327(&iVar19))
						{
							func_107("BB_DELAY1", 100, 0);
							Local_557 = { func_73(iVar19, 0, 0) };
							func_103(&Local_557);
						}
						else
						{
							Var6 = { func_49(Local_147.f_358) };
							if (func_324(&Var6, &iVar19))
							{
								func_107("BB_DELAY", 100, 0);
								Local_557 = { func_73(iVar19, 0, 0) };
								func_103(&Local_557);
							}
							else if (Global_2537071.f_1791.f_1 != 0 && !GAMEPLAY::IS_BIT_SET(Local_147.f_359, 8))
							{
								func_107("BB_ABOUNTYSET", 100, 0);
							}
							else
							{
								func_107("BB_DES_SET", 100, 0);
								func_419(Global_262145.f_6645);
							}
						}
						break;
				}
				break;
			
			case 6:
				if (GAMEPLAY::IS_BIT_SET(iLocal_1277, 2) && Local_147.f_181.f_69 == 1)
				{
					func_107("MPCT_EXIT", 100, 0);
				}
				else if (!GAMEPLAY::IS_BIT_SET(Global_1323615[uLocal_914[Local_147.f_181.f_69]].f_102, 1))
				{
					if (STREAMING::IS_MODEL_A_VEHICLE(func_323(uLocal_914[Local_147.f_181.f_69])))
					{
						if (!func_333(uLocal_914[Local_147.f_181.f_69]))
						{
							if (func_337() != -1)
							{
								if (func_323(uLocal_914[Local_147.f_181.f_69]) == 2069146067 && func_322())
								{
									Var2 = { func_73((Global_262145.f_27616 - func_321(&Global_2514799, 1)), 0, 0) };
									func_107("PI_BIK_TIMER", 0, 0);
									func_103(&Var2);
								}
								else if (!GAMEPLAY::IS_BIT_SET(Global_1323615[func_337()].f_102, 6))
								{
									func_107("MPCT_PERVEHc", 100, 0);
								}
								else
								{
									func_107("MPCT_PERVEHi", 100, 0);
								}
							}
							else
							{
								func_107("MPCT_PERVEHc", 100, 0);
							}
						}
						else
						{
							func_107("BB_PVUNA8", 100, 0);
						}
					}
					else
					{
						func_107("BB_PVUNA1", 100, 0);
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Global_1323615[Local_147.f_181.f_69].f_102, 2))
				{
					func_107("BB_PVUNA12", 100, 0);
				}
				else
				{
					func_107("BB_PVUNA13", 100, 0);
				}
				break;
			
			case 11:
				if (!bLocal_521)
				{
					if (!iLocal_520 == Local_147.f_181.f_69)
					{
						if (iLocal_518 > 0)
						{
							if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_1323615[iLocal_599[Local_147.f_181.f_69]].f_105)))
							{
								if ((iLocal_517 - iLocal_518) > 0)
								{
									func_107("MPCT_INSD3", 100, 0);
								}
								else
								{
									func_107("MPCT_INSD2", 100, 0);
								}
								func_103(&(Global_1323615[iLocal_599[Local_147.f_181.f_69]].f_105));
								func_419(iLocal_518);
							}
							else if ((iLocal_517 - iLocal_518) > 0)
							{
								func_107("MPCT_INSD", 100, 0);
							}
						}
						else if (iLocal_517 > 0)
						{
							func_107("MPCT_INSD", 100, 0);
						}
					}
				}
				break;
			
			case 16:
				switch (Local_147.f_181.f_69)
				{
					case 0:
						func_107("MP_STRIP_IN1", 100, 0);
						StringCopy(&Var2, "SCLUB_NM_", 16);
						StringIntConCat(&Var2, iLocal_1276, 16);
						func_320(&Var2);
						break;
					
					case 1:
						func_107("MPCT_EXIT", 100, 0);
						break;
				}
				break;
			
			case 17:
				uVar20 = func_316(PLAYER::PLAYER_ID());
				iVar21 = func_314(12, uVar20, &uLocal_1290, &iLocal_1316);
				iVar22 = 0;
				if (GAMEPLAY::IS_BIT_SET(iLocal_1277, 2) && Local_147.f_181.f_69 == 1)
				{
					func_107("MPCT_EXIT", 100, 0);
				}
				else if (iVar21 > 0)
				{
					iVar22 = 0;
					while (iVar22 < iVar21)
					{
						if (Local_147.f_181.f_70[Local_147.f_181.f_69] == iVar22)
						{
							if (GAMEPLAY::IS_BIT_SET(iLocal_1316, iVar22))
							{
								func_107("MPCT_RPHS", 100, 0);
							}
							else
							{
								func_107("MPCT_RQRE", 100, 0);
							}
						}
						iVar22++;
					}
				}
				break;
			
			case 22:
				iVar22 = 0;
				if (GAMEPLAY::IS_BIT_SET(iLocal_1277, 2) && Local_147.f_181.f_69 == 1)
				{
					func_107("MPCT_EXIT", 100, 0);
				}
				else
				{
					iVar22 = 0;
					while (iVar22 < 3)
					{
						if (Local_147.f_181.f_70[Local_147.f_181.f_69] == iVar22)
						{
							func_107("MPCT_RPHS", 100, 0);
						}
						iVar22++;
					}
				}
				break;
		}
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 0))
		{
			func_107("BB_NOMONEY", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 1))
		{
			func_107("MPCT_UNAVAIL0", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 2))
		{
			func_107("GC_MENU6", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 3))
		{
			func_107("GC_MENU12", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 4))
		{
			func_107("GC_MENU14", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 6))
		{
			func_107("GC_MENU19", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 5))
		{
			func_107("GC_MENU15", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 7))
		{
			func_107("GC_MENU20", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 8))
		{
			func_107("GC_MENU21", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 9))
		{
			func_107("GC_MENU22", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 10))
		{
			func_107("GC_MENU35", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 11))
		{
			func_107("GC_MENU39", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 12))
		{
			func_107("GC_MENU40", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 31))
		{
			func_107("BB_NOBANK", 100, 0);
		}
		if (Local_147.f_178 == 6)
		{
			if (GAMEPLAY::IS_BIT_SET(iLocal_555, 14) || !STREAMING::IS_MODEL_A_VEHICLE(func_323(uLocal_914[Local_147.f_181.f_69])))
			{
				func_107("BB_PVUNA1", 100, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(iLocal_555, 13))
			{
				func_107("BB_PVUNA2", 100, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(iLocal_555, 15))
			{
				func_107("BB_PVUNA3", 100, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(iLocal_555, 16))
			{
				func_107("BB_PVUNA4", 100, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(iLocal_555, 17))
			{
				func_107("BB_PVUNA5", 100, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(iLocal_555, 18))
			{
				func_107("BB_PVUNA6", 100, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(iLocal_555, 21))
			{
				func_107("BB_PVUNA7", 100, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(iLocal_555, 22))
			{
				func_107("BB_PVUNA8", 100, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(iLocal_556, 2))
			{
				func_107("BB_PVUNA9", 100, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(iLocal_556, 13))
			{
				func_107("BB_PVUNA11", 100, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(iLocal_556, 16))
			{
				func_107("BB_PVUNA12", 100, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(iLocal_556, 18))
			{
				func_107("BB_PVUNA13", 100, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(iLocal_556, 23))
			{
				func_107("PIM_HRPV14", 100, 0);
			}
			else if (func_323(uLocal_914[Local_147.f_181.f_69]) == 2069146067 && func_322())
			{
			}
		}
		else if (Local_147.f_178 == 9)
		{
			if (GAMEPLAY::IS_BIT_SET(iLocal_556, 17))
			{
				func_107("BB_PVEMPTY", 100, 0);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 19))
		{
			func_107("BB_NONE0", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 20))
		{
			func_107("CONT_REQ_CD", 100, 0);
			func_103(&Local_557);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 20))
		{
			func_107("CONT_REQ_CD", 100, 0);
			func_103(&Local_557);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 23))
		{
			func_107("BB_ADRUNN", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 30))
		{
			func_107("BB_BHRUNN", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 24))
		{
			func_107("BB_HPRUNN", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 25))
		{
			func_107("BB_HPWANT", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 26))
		{
			func_107("BB_HPUNSF", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 28))
		{
			func_107("BB_HPLOCK", 100, 0);
			func_419(func_420(77));
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, 27))
		{
			func_107("BB_BRURUN", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_556, 1))
		{
			func_107("BB_BHAMMO", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_556, 0))
		{
			func_107("BB_BHTAXI", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_556, 3))
		{
			func_107("BB_BHONBHELI", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_556, 5))
		{
			func_107("BB_BPBUSY", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_556, 6))
		{
			func_107("BB_BPMOVI", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_556, 7))
		{
			func_107("BB_BPWANT", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_556, 8))
		{
			func_107("BB_BPARDR", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_556, 9))
		{
			func_107("BB_BPLAKE", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_556, 10))
		{
			func_107("BB_BPLAND", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_556, 11))
		{
			func_107("BB_DES_PASS", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_556, 12))
		{
			func_107("MPCT_UNVLPASS", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_556, 21))
		{
			func_107("MPCT_PA_YAH0U", 100, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_556, 22))
		{
			func_107("MPCT_PA_IMPF", 100, 0);
		}
		if (func_96(&uLocal_561, 2000, 0))
		{
			func_313(&uLocal_561);
			if (GAMEPLAY::IS_BIT_SET(iLocal_556, 19))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_1289, "SET_TEXT");
				func_298("");
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			iLocal_555 = 0;
			iLocal_556 = 0;
		}
		else if (GAMEPLAY::IS_BIT_SET(iLocal_556, 19))
		{
			Var29 = { func_73(func_311(2, Local_147.f_358), 0, 0) };
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_1289, "SET_TEXT");
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CONT_REQ_CD2");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var29);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

int func_311(int iParam0, int iParam1)
{
	iVar0 = -1;
	if (func_98(&(Global_2506804[iParam1][iParam0])))
	{
		if (!func_96(&(Global_2506804[iParam1][iParam0]), func_312(iParam0, iParam1), 0))
		{
			iVar1 = func_105(&(Global_2506804[iParam1][iParam0]), 0, 0);
			iVar1 = (func_312(iParam0, iParam1) - iVar1);
			return iVar1;
		}
	}
	return iVar0;
}

int func_312(int iParam0, int iParam1)
{
	return Global_2506804[iParam1].f_131[iParam0];
}

void func_313(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_314(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		(*uParam2)[iVar0] = -1;
		iVar0++;
	}
	*iParam3 = 0;
	if (Global_2404634 == 0)
	{
		return 0;
	}
	if (Global_2404635 != 0 && Global_2404635 != 1)
	{
		return 0;
	}
	if (iParam0 != 12)
	{
		return 0;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_2404634)
	{
		if (Global_2404283[iVar0].f_13)
		{
			(*uParam2)[iVar1] = iVar0;
			if (!func_315(iVar0))
			{
				GAMEPLAY::SET_BIT(iParam3, iVar1);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(iParam3, iVar1);
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar2 = iVar1;
	if (iVar2 > 1)
	{
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		bVar7 = false;
		iVar1 = 0;
		bVar8 = true;
		iVar3 = 0;
		while (iVar3 < 5)
		{
			iVar5 = iVar1;
			iVar4 = -1;
			switch (iVar3)
			{
				case 0:
					iVar4 = Global_262145.f_8586;
					break;
				
				case 1:
					iVar4 = Global_262145.f_8591;
					break;
				
				case 2:
					iVar4 = Global_262145.f_8598;
					break;
				
				case 3:
					iVar4 = Global_262145.f_8604;
					break;
				
				case 4:
					iVar4 = Global_262145.f_8610;
					break;
			}
			bVar8 = true;
			if (iVar5 >= iVar2 || iVar4 == -1)
			{
				bVar8 = false;
			}
			while (bVar8)
			{
				if ((*uParam2)[iVar5] != -1)
				{
					if (iVar4 == Global_2404283[(*uParam2)[iVar5]].f_12)
					{
						if (iVar5 != iVar1)
						{
							iVar6 = (*uParam2)[iVar1];
							(*uParam2)[iVar1] = (*uParam2)[iVar5];
							(*uParam2)[iVar5] = iVar6;
							bVar7 = GAMEPLAY::IS_BIT_SET(*iParam3, iVar1);
							if (GAMEPLAY::IS_BIT_SET(*iParam3, iVar5))
							{
								GAMEPLAY::SET_BIT(iParam3, iVar1);
							}
							else
							{
								GAMEPLAY::CLEAR_BIT(iParam3, iVar1);
							}
							if (bVar7)
							{
								GAMEPLAY::SET_BIT(iParam3, iVar5);
							}
							else
							{
								GAMEPLAY::CLEAR_BIT(iParam3, iVar5);
							}
						}
						iVar1++;
						bVar8 = false;
					}
				}
				if (bVar8)
				{
					iVar5++;
					if (iVar5 >= iVar2)
					{
						bVar8 = false;
					}
				}
			}
			iVar3++;
		}
	}
	return iVar2;
}

int func_315(int iParam0)
{
	iVar0 = Global_2404283[iParam0].f_12;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_2405025[iVar1] == iVar0)
		{
			if (GAMEPLAY::GET_GAME_TIMER() > Global_2405025[iVar1].f_1)
			{
				Global_2405025[iVar1].f_1 = 0;
				Global_2405025[iVar1] = 0;
			}
			else
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_316(int iParam0)
{
	iVar0 = func_318(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_317(iVar0, 0);
}

int func_317(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_291133[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_318(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388060[func_34(-1)];
			}
			else if (func_319(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_34(-1)];
	}
	return 0;
}

int func_319(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_2439138.f_1, iParam0);
	}
	return 1;
}

void func_320(char* sParam0)
{
	if (Global_22350.f_4765 >= 3 || Global_22350.f_4762 >= 4)
	{
		return;
	}
	Global_22350.f_4696[Global_22350.f_4762] = 1;
	Global_22350.f_4762++;
	StringCopy(&(Global_22350.f_4713[Global_22350.f_4765]), sParam0, 64);
	Global_22350.f_4765++;
}

int func_321(var uParam0, bool bParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		return GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0));
	}
	return GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0));
}

int func_322()
{
	if (func_98(&Global_2514799) && !func_96(&Global_2514799, Global_262145.f_27616, 1))
	{
		return 1;
	}
	return 0;
}

int func_323(int iParam0)
{
	if (iParam0 > -1)
	{
		return Global_1323615[iParam0].f_66;
	}
	return 0;
}

int func_324(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (func_325(Global_2097152[func_326()].f_10512.f_15[iVar0]))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, &(Global_2097152[func_326()].f_10512.f_15[iVar0])))
			{
				*iParam1 = (NETWORK::_GET_POSIX_TIME() - Global_2097152[func_326()].f_10512.f_224[iVar0]);
				*iParam1 *= 1000;
				*iParam1 = (2880000 - *iParam1);
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_325(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

int func_326()
{
	iVar0 = 0;
	return iVar0;
}

int func_327(int iParam0)
{
	*iParam0 = 2880000;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (func_325(Global_2097152[func_326()].f_10512.f_15[iVar0]))
		{
			iVar1 = (NETWORK::_GET_POSIX_TIME() - Global_2097152[func_326()].f_10512.f_224[iVar0]);
			iVar1 *= 1000;
			iVar1 = (2880000 - iVar1);
			if (iVar1 < *iParam0)
			{
				*iParam0 = iVar1;
			}
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_328(int iParam0)
{
	if (Global_1573353.f_4[iParam0] == 1)
	{
		return 1;
	}
	return 0;
}

int func_329()
{
	if (Global_1573353.f_171[44] != 0 || Global_1573353.f_171[13] != 0)
	{
		return 0;
	}
	return 1;
}

int func_330()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1212219120) > 0)
	{
		return 3;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 2;
	}
	if (func_331() == 144)
	{
		return 1;
	}
	iVar0 = GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2537071.f_5929));
	if (iVar0 < Global_262145.f_16270)
	{
		return 1;
	}
	return 0;
}

int func_331()
{
	return Global_1650640;
}

bool func_332()
{
	return Local_147 == 75;
}

int func_333(int iParam0)
{
	if (func_334(iParam0))
	{
		return GAMEPLAY::IS_BIT_SET(Global_1323615[iParam0].f_102, 6);
	}
	return 0;
}

int func_334(int iParam0)
{
	func_336(iParam0, &iVar0);
	if ((iParam0 >= 0 && iParam0 <= 307) && !func_335(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_335(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
			return 1;
			break;
	}
	return 0;
}

void func_336(int iParam0, var uParam1)
{
	*uParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 307)
		{
			if (iParam0 == (Global_1671199[iVar0] - 1))
			{
				*uParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

int func_337()
{
	if (Global_2097152[func_326()].f_6174.f_2 >= 307)
	{
		Global_2097152[func_326()].f_6174.f_2 = -1;
		return -1;
	}
	return Global_2097152[func_326()].f_6174.f_2;
}

bool func_338(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 26);
}

int func_339(float fParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_2439138.f_502.f_44, 3))
	{
		return 0;
	}
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_346())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_343(0)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_341(), 0))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(func_341(), 1), func_340(PLAYER::PLAYER_ID())) < fParam0)
				{
					return 1;
				}
			}
		}
		return 0;
	}
	return Global_2439138.f_502.f_75;
}

Vector3 func_340(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

var func_341()
{
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_342())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Global_2425662[PLAYER::PLAYER_ID()].f_38) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Global_2425662[PLAYER::PLAYER_ID()].f_38))
		{
			return NETWORK::NET_TO_VEH(Global_2425662[PLAYER::PLAYER_ID()].f_38);
		}
	}
	return Global_2537071.f_296;
}

int func_342()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_343(int iParam0)
{
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != func_342())
	{
	}
	else if (func_344(Global_2425662[PLAYER::PLAYER_ID()].f_38) || iParam0 == 0)
	{
		return Global_2425662[PLAYER::PLAYER_ID()].f_38;
	}
	return 0;
}

int func_344(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_345(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_345(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_346()
{
	switch (func_347())
	{
		case 0:
			return func_342();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_347()
{
	return Global_30768;
}

int func_348(int iParam0)
{
	if (func_61(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iVar0, "Player_Vehicle"))
					{
						if (DECORATOR::DECOR_GET_INT(iVar0, "Player_Vehicle") == NETWORK::_NETWORK_GET_PLAYER_VEHICLE_NETWORK_ID(iParam0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_349(var uParam0, var uParam1)
{
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if ((func_372(iVar1, -1) > 0 && !func_364(iVar1)) && !iVar1 == 12)
		{
			*uParam0 = 1;
			if (iVar1 == 13)
			{
				iVar4 = 11;
			}
			else if (iVar1 == 18)
			{
				iVar4 = 10;
			}
			else
			{
				iVar4 = func_357(iVar1, -1);
			}
			if (!*uParam1)
			{
				iVar0 = 0;
				while (iVar0 < iVar4)
				{
					iVar2 = (func_354(iVar1) + iVar0);
					func_353(iVar2, &iVar3, 0);
					if (iVar3 >= 0)
					{
						if ((func_323(iVar3) != 0 && STREAMING::IS_MODEL_A_VEHICLE(func_323(iVar3))) && func_350(func_323(iVar3)))
						{
							*uParam1 = 1;
							iVar0 = 9999;
							return;
						}
					}
					iVar0++;
				}
			}
		}
		iVar1++;
	}
}

int func_350(int iParam0)
{
	if (func_352() && func_351(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
		case 2044532910:
		case -638562243:
			return 1;
			break;
	}
	return 0;
}

var func_352()
{
	return Global_2450632.f_16;
}

void func_353(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10163)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1671199[iParam0] - 1);
		if (bParam2)
		{
			if ((GAMEPLAY::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_354(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_356(iParam0);
		return func_355(iVar0);
	}
	return (func_357(iParam0, -1) * iParam0);
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

int func_356(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_357(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_360(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_359(iParam1))
			{
				return 0;
			}
			else if (func_358(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049922[iParam1].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049922[iParam1].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049922[iParam1].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_358(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_359(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_360(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_361(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_361(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_361(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_8())
	{
		if (!func_363(Global_1590373))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590373)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2425662[Global_1590373].f_195, 24) || func_362(Global_1590373))
				{
					return 1;
				}
			}
		}
	}
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 24);
}

int func_362(int iParam0)
{
	if (iParam0 != func_8())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 9);
	}
	return 0;
}

int func_363(int iParam0)
{
	if (iParam0 != func_8())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 2);
	}
	return 0;
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 99:
			return 1;
			break;
		
		case 22:
			if (!func_365())
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_365()
{
	return (func_368(0) && func_366(0));
}

bool func_366(bool bParam0)
{
	if (bParam0)
	{
		return GAMEPLAY::IS_BIT_SET(func_68(8723, -1, 0), 4);
	}
	return func_367(PLAYER::PLAYER_ID());
}

int func_367(int iParam0)
{
	if (iParam0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1700796[iParam0].f_40, 4);
	}
	return 0;
}

int func_368(bool bParam0)
{
	if (bParam0)
	{
		return func_369(27227, -1, -1);
	}
	if (PLAYER::PLAYER_ID() != func_8())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_393.f_1, 2);
	}
	return 0;
}

int func_369(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	iVar1 = func_371(iParam0, iParam1);
	uVar2 = func_370(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_370(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_371(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_372(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_35();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_356(iParam0);
		if (iVar1 == 0 && func_68(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_374(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_373(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1388066[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2586214[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2586065[(iParam0 - 1)][iVar0];
	}
	return 0;
}

int func_373(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1590535[iParam0].f_274.f_322 != 0;
	}
	return 0;
}

bool func_374(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return 0;
	}
	return func_68(7207, iParam0, 0) != 0;
}

bool func_375(int iParam0)
{
	return func_384(iParam0, 512);
}

int func_376(int iParam0, int iParam1, float fParam2)
{
	if (func_380())
	{
		return 1;
	}
	if (func_379(iParam1))
	{
		return func_377(func_340(iParam0), iParam1, fParam2);
	}
	return 0;
}

int func_377(struct<3> Param0, int iParam3, float fParam4)
{
	if (func_379(iParam3))
	{
		if (SYSTEM::VDIST2(Param0, func_378(iParam3)) < (fParam4 * fParam4))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_378(int iParam0)
{
	return Global_4008564[iParam0].f_4;
}

int func_379(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 37)
	{
		return 1;
	}
	return 0;
}

int func_380()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_381())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_238365[0].f_17, 0))
	{
		return 1;
	}
	return 0;
}

bool func_381()
{
	return Global_1312854;
}

int func_382(int iParam0, int iParam1)
{
	if (func_61(iParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_USING(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
				{
					if (DECORATOR::DECOR_EXIST_ON(iVar1, "PYV_Owner") && DECORATOR::DECOR_EXIST_ON(iVar1, "PYV_Vehicle"))
					{
						iVar2 = DECORATOR::DECOR_GET_INT(iVar1, "PYV_Owner");
						iVar3 = DECORATOR::DECOR_GET_INT(iVar1, "PYV_Vehicle");
						if (iVar2 == NETWORK::_NETWORK_GET_PLAYER_VEHICLE_NETWORK_ID(iParam0) && iParam1 == iVar3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_383(int iParam0)
{
	if (((func_384(iParam0, 256) && !func_384(iParam0, 512)) && !func_384(iParam0, 1024)) && !func_384(iParam0, 2048))
	{
		return 1;
	}
	return 0;
}

int func_384(int iParam0, int iParam1)
{
	if ((Global_4010230[iParam0].f_6 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

int func_385(int iParam0)
{
	return Global_2420771[iParam0];
}

bool func_386(int iParam0)
{
	return Global_2425662[iParam0].f_261;
}

int func_387()
{
	if (!func_479(77, 0, 0))
	{
		return 3;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 2;
	}
	return 0;
}

int func_388()
{
	switch (func_389())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_389()
{
	if (func_390(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

int func_390(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0];
	}
	return -1;
}

bool func_391()
{
	return GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 8);
}

int func_392(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_393(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return -1;
}

int func_394(int iParam0)
{
	if (iParam0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1700796[iParam0].f_40, 0);
	}
	return 0;
}

int func_395(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return GAMEPLAY::IS_BIT_SET(Global_1700796[iParam0].f_40, 10);
			
			case 1:
				return GAMEPLAY::IS_BIT_SET(Global_1700796[iParam0].f_40, 11);
			
			case 2:
				return GAMEPLAY::IS_BIT_SET(Global_1700796[iParam0].f_40, 12);
			
			case 3:
				return GAMEPLAY::IS_BIT_SET(Global_1700796[iParam0].f_40, 13);
			}
		
		default:
	}
	return 0;
}

int func_396(int iParam0, int iParam1)
{
	if (iParam0 != func_8())
	{
		if (iParam0 == PLAYER::PLAYER_ID() && iParam1)
		{
			if (GAMEPLAY::IS_BIT_SET(func_68(6424, -1, 0), 0))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(func_68(6424, -1, 0), 1))
			{
				return 1;
			}
			if (GAMEPLAY::IS_BIT_SET(func_68(6424, -1, 0), 2))
			{
				return 2;
			}
		}
		else
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1692770[iParam0].f_26, 0))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1692770[iParam0].f_26, 1))
			{
				return 1;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1692770[iParam0].f_26, 2))
			{
				return 2;
			}
		}
	}
	return -1;
}

int func_397(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1692770[iParam0].f_26, 13))
		{
			return 1;
		}
	}
	return 0;
}

int func_398()
{
	if (!func_409())
	{
		return 0;
	}
	if (func_414())
	{
		return 0;
	}
	if (!func_399())
	{
		return 0;
	}
	return 1;
}

int func_399()
{
	if (Global_1312837 == 10)
	{
		if (Global_2405061)
		{
			Global_2405061 = 0;
		}
		return 0;
	}
	if (!func_407())
	{
		if (Global_2405061)
		{
			Global_2405061 = 0;
		}
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_401(iVar0);
		if (func_400(iVar1, 1) <= 0)
		{
			if (Global_2405061)
			{
				Global_2405061 = 0;
			}
			return 0;
		}
		iVar0++;
	}
	if (!Global_2405061)
	{
		Global_2405061 = 1;
	}
	return 1;
}

int func_400(int iParam0, bool bParam1)
{
	if (func_68(9607, -1, 0) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_68(9608, -1, 0);
		}
		else
		{
			iVar0 = func_68(9609, -1, 0);
		}
	}
	else if (func_68(9610, -1, 0) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_68(9611, -1, 0);
		}
		else
		{
			iVar0 = func_68(9612, -1, 0);
		}
	}
	else if (func_68(9613, -1, 0) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_68(9614, -1, 0);
		}
		else
		{
			iVar0 = func_68(9615, -1, 0);
		}
	}
	else if (func_68(9616, -1, 0) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_68(9617, -1, 0);
		}
		else
		{
			iVar0 = func_68(9618, -1, 0);
		}
	}
	else if (func_68(9619, -1, 0) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_68(9620, -1, 0);
		}
		else
		{
			iVar0 = func_68(9621, -1, 0);
		}
	}
	else if (func_68(9622, -1, 0) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_68(9623, -1, 0);
		}
		else
		{
			iVar0 = func_68(9624, -1, 0);
		}
	}
	else if (func_68(9625, -1, 0) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_68(9626, -1, 0);
		}
		else
		{
			iVar0 = func_68(9627, -1, 0);
		}
	}
	else if (func_68(9628, -1, 0) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_68(9629, -1, 0);
		}
		else
		{
			iVar0 = func_68(9630, -1, 0);
		}
	}
	else if (func_68(9631, -1, 0) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_68(9632, -1, 0);
		}
		else
		{
			iVar0 = func_68(9633, -1, 0);
		}
	}
	else if (func_68(9634, -1, 0) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_68(9635, -1, 0);
		}
		else
		{
			iVar0 = func_68(9636, -1, 0);
		}
	}
	else
	{
		iVar0 = -1;
	}
	return iVar0;
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_406();
		
		case 1:
			return func_405();
		
		case 2:
			return func_404();
		
		case 3:
			return func_403();
		
		case 4:
			return func_402();
		
		default:
	}
	return 0;
}

var func_402()
{
	return Global_262145.f_8610;
}

var func_403()
{
	return Global_262145.f_8604;
}

var func_404()
{
	return Global_262145.f_8598;
}

var func_405()
{
	return Global_262145.f_8591;
}

var func_406()
{
	return Global_262145.f_8586;
}

bool func_407()
{
	bVar0 = false;
	iVar1 = Global_1388048[func_34(-1)];
	bVar0 = GAMEPLAY::IS_BIT_SET(iVar1, 9);
	if (bVar0 != func_408(PLAYER::PLAYER_ID()))
	{
	}
	return bVar0;
}

int func_408(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iVar0].f_142, 21);
	}
	return 0;
}

int func_409()
{
	if (!func_413(PLAYER::PLAYER_ID(), 0, 0))
	{
		return 0;
	}
	return func_410(func_412());
}

bool func_410(int iParam0)
{
	return func_411(iParam0) == 6;
}

int func_411(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 8;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 10;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 9;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 7;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
			return 6;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			return 5;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 4;
			break;
		
		case 24:
		case 26:
		case 27:
		case 54:
		case 56:
		case 57:
			return 3;
			break;
		
		case 25:
		case 28:
		case 32:
		case 33:
		case 50:
		case 52:
		case 53:
		case 55:
			return 2;
			break;
		
		case 29:
		case 30:
		case 31:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 51:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_412()
{
	return Global_1590535[PLAYER::PLAYER_ID()].f_274.f_28;
}

int func_413(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0].f_310.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_414()
{
	switch (Global_2404635)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 11:
		case 12:
			return 0;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_415(int iParam0)
{
	return Global_1590535[iParam0].f_211.f_6;
}

void func_416(char* sParam0, int iParam1, int iParam2)
{
	StringCopy(&(Global_4268421.f_21), sParam0, 16);
	Global_4268421.f_61 = 0;
	Global_4268421.f_62 = 0;
	Global_4268421.f_63 = 0;
	Global_4268421.f_64 = 0;
	Global_4268421.f_65 = iParam1;
	Global_4268421.f_66 = GAMEPLAY::GET_GAME_TIMER();
	Global_4268421.f_67 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268421.f_25[iVar0] = 0;
		iVar0++;
	}
}

int func_417(int iParam0)
{
	if ((func_69(iParam0) >= 0 && func_69(iParam0) < func_66(iParam0)) && !func_418(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_418(int iParam0)
{
	if (Global_262145.f_14190)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14196;
			break;
		
		case 20:
			return Global_262145.f_14197;
			break;
		
		case 6:
			return Global_262145.f_14198;
			break;
		
		case 14:
			return Global_262145.f_14199;
			break;
		
		case 23:
			return Global_262145.f_14200;
			break;
		
		case 24:
			return Global_262145.f_14201;
			break;
		
		case 25:
			return Global_262145.f_14202;
			break;
		
		case 26:
			return Global_262145.f_14203;
			break;
		
		case 8:
			return Global_262145.f_14205;
			break;
		
		case 10:
			return Global_262145.f_14206;
			break;
		
		case 9:
			return Global_262145.f_14207;
			break;
		
		case 13:
			return Global_262145.f_14208;
			break;
		
		case 12:
			return Global_262145.f_14209;
			break;
		
		case 11:
			return Global_262145.f_14210;
			break;
		
		case 22:
			return Global_262145.f_14211;
			break;
		
		case 0:
			return Global_262145.f_14191;
			break;
		
		case 2:
			return Global_262145.f_14195;
			break;
		
		case 35:
			return Global_262145.f_14204;
			break;
		
		case 40:
			return Global_262145.f_14192;
			break;
		
		case 41:
			return Global_262145.f_14193;
			break;
		
		case 42:
			return Global_262145.f_14194;
			break;
		
		case 57:
			return Global_262145.f_14201;
			break;
	}
	return 0;
}

void func_419(int iParam0)
{
	if (Global_22350.f_4763 >= 3 || Global_22350.f_4762 >= 4)
	{
		return;
	}
	Global_22350.f_4696[Global_22350.f_4762] = 2;
	Global_22350.f_4762++;
	Global_22350.f_4701[Global_22350.f_4763] = iParam0;
	Global_22350.f_4763++;
}

int func_420(int iParam0)
{
	if (func_423())
	{
		return 1;
	}
	if (func_422())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_421(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

bool func_421(int iParam0)
{
	return func_37(123, iParam0);
}

bool func_422()
{
	return Global_1312865;
}

bool func_423()
{
	return Global_1312867;
}

int func_424(int iParam0)
{
	if (Global_1590535[PLAYER::PLAYER_ID()] == 122)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar0 >= 0 && iVar0 <= 3)
	{
		if (((GAMEPLAY::IS_BIT_SET(Global_4456448.f_11, 30) && Global_4456448.f_78156[iVar0] != 0) || (GAMEPLAY::IS_BIT_SET(Global_4456448.f_226417, 10) && Global_1388197 != 0)) && func_453(iVar0))
		{
			return 0;
		}
		if (func_452())
		{
			return 0;
		}
	}
	switch (iParam0)
	{
		case 10:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && GAMEPLAY::IS_BIT_SET(Global_4456448.f_226417, 20))
			{
				return 0;
			}
			if (func_451())
			{
				return 1;
			}
			else if (func_450(PLAYER::PLAYER_ID()) || func_449())
			{
				return 0;
			}
			if (func_448(PLAYER::PLAYER_ID()))
			{
				if (Global_4194305.f_34 == 1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 11:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && GAMEPLAY::IS_BIT_SET(Global_4456448.f_226417, 21))
			{
				return 0;
			}
			if (func_451())
			{
				return 1;
			}
			else if (func_450(PLAYER::PLAYER_ID()) || func_449())
			{
				return 0;
			}
			if (func_448(PLAYER::PLAYER_ID()))
			{
				if (Global_4194305.f_34 == 1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else if (func_443(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 8:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && GAMEPLAY::IS_BIT_SET(Global_4456448.f_226417, 16))
			{
				return 0;
			}
			if (func_449())
			{
				return 0;
			}
			if (func_450(PLAYER::PLAYER_ID()) || func_451())
			{
				if (func_442() || func_441())
				{
					iVar1 = func_438(-1);
					if ((((iVar1 == -1569615261 || iVar1 == -1312131151) || iVar1 == -1568386805) || func_437(iVar1)) || func_436(iVar1))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 1;
				}
			}
			if (func_448(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 0:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && GAMEPLAY::IS_BIT_SET(Global_4456448.f_226417, 29))
			{
				return 0;
			}
			if ((func_450(PLAYER::PLAYER_ID()) || func_451()) || func_449())
			{
				return 0;
			}
			if (func_448(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (Global_1626726 > 0)
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 9:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && GAMEPLAY::IS_BIT_SET(Global_4456448.f_226417, 30))
			{
				return 0;
			}
			if (((((Global_1590535[PLAYER::PLAYER_ID()] == 3 || Global_1590535[PLAYER::PLAYER_ID()] == 32) || func_450(PLAYER::PLAYER_ID())) || func_451()) || func_449()) || func_448(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_435(PLAYER::PLAYER_ID()) || func_434(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 13:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && GAMEPLAY::IS_BIT_SET(Global_4456448.f_226417, 19))
			{
				return 0;
			}
			if (((((func_450(PLAYER::PLAYER_ID()) || func_451()) || func_449()) || func_448(PLAYER::PLAYER_ID())) || Global_1590535[PLAYER::PLAYER_ID()] == 3) || Global_1590535[PLAYER::PLAYER_ID()] == 32)
			{
				return 0;
			}
			if (func_448(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_435(PLAYER::PLAYER_ID()) || func_434(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 7:
			if ((((((func_451() || func_449()) || func_450(PLAYER::PLAYER_ID())) || func_448(PLAYER::PLAYER_ID())) || Global_1590535[PLAYER::PLAYER_ID()] == 3) || func_433(Global_4456448.f_232883)) || func_432())
			{
				return 0;
			}
			if (func_431())
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 45:
			if ((((func_451() || func_449()) || func_450(PLAYER::PLAYER_ID())) || func_448(PLAYER::PLAYER_ID())) || Global_1590535[PLAYER::PLAYER_ID()] == 3)
			{
				return 0;
			}
			if (func_431())
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 53:
		case 54:
		case 55:
		case 56:
			if ((((func_451() || func_449()) || func_450(PLAYER::PLAYER_ID())) || func_448(PLAYER::PLAYER_ID())) || Global_1590535[PLAYER::PLAYER_ID()] == 3)
			{
				return 0;
			}
			if (func_431())
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 46:
			if ((((func_451() || func_449()) || func_450(PLAYER::PLAYER_ID())) || func_448(PLAYER::PLAYER_ID())) || Global_1590535[PLAYER::PLAYER_ID()] == 3)
			{
				return 0;
			}
			if (func_431())
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			break;
		
		case 49:
			if ((((func_451() || func_449()) || func_450(PLAYER::PLAYER_ID())) || func_448(PLAYER::PLAYER_ID())) || Global_1590535[PLAYER::PLAYER_ID()] == 3)
			{
				return 0;
			}
			if (func_431())
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			break;
		
		case 52:
			if ((((func_451() || func_449()) || func_450(PLAYER::PLAYER_ID())) || func_448(PLAYER::PLAYER_ID())) || Global_1590535[PLAYER::PLAYER_ID()] == 3)
			{
				return 0;
			}
			if (func_431())
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			break;
		
		case 22:
			if ((((func_448(PLAYER::PLAYER_ID()) || Global_1590535[PLAYER::PLAYER_ID()] == 3) || func_450(PLAYER::PLAYER_ID())) || func_451()) || func_449())
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_435(PLAYER::PLAYER_ID()) || func_434(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_226417, 31))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 23:
		case 24:
		case 25:
		case 26:
		case 57:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && GAMEPLAY::IS_BIT_SET(Global_4456448.f_226417, 18))
			{
				return 0;
			}
			if ((((func_448(PLAYER::PLAYER_ID()) || Global_1590535[PLAYER::PLAYER_ID()] == 3) || func_450(PLAYER::PLAYER_ID())) || func_451()) || func_449())
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_435(PLAYER::PLAYER_ID()) || func_434(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 12:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && GAMEPLAY::IS_BIT_SET(Global_4456448.f_226417, 15))
			{
				return 0;
			}
			if (func_450(PLAYER::PLAYER_ID()))
			{
				if ((func_451() || func_449()) || func_442())
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			if (Global_1590535[PLAYER::PLAYER_ID()] == 0 || Global_1590535[PLAYER::PLAYER_ID()] == 4)
			{
				return 0;
			}
			if (Global_1590535[PLAYER::PLAYER_ID()] == 3)
			{
				return 0;
			}
			if (func_448(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_429(PLAYER::PLAYER_ID()) == 148)
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 2:
			if (((func_448(PLAYER::PLAYER_ID()) || func_450(PLAYER::PLAYER_ID())) || func_451()) || func_449())
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			break;
		
		case 1:
			if ((((((Global_1590535[PLAYER::PLAYER_ID()] == 0 || Global_1590535[PLAYER::PLAYER_ID()] == 4) || Global_1590535[PLAYER::PLAYER_ID()] == 3) || func_450(PLAYER::PLAYER_ID())) || func_451()) || func_449()) || func_448(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 14:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && GAMEPLAY::IS_BIT_SET(Global_4456448.f_226417, 17))
			{
				return 0;
			}
			if (func_451() || Global_1590535[PLAYER::PLAYER_ID()] == 32)
			{
				return 0;
			}
			if (func_450(PLAYER::PLAYER_ID()))
			{
				if ((Global_1590535[PLAYER::PLAYER_ID()] != 5 && !func_449()) && Global_1590535[PLAYER::PLAYER_ID()] != 148)
				{
					return 1;
				}
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			if (Global_1590535[PLAYER::PLAYER_ID()] == 0 && Global_4456448.f_205 > 1)
			{
				return 1;
			}
			return 0;
			break;
		
		case 6:
			if (func_451())
			{
				return 1;
			}
			if (func_450(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (Global_1590535[PLAYER::PLAYER_ID()] == 0)
			{
				if (Global_4456448.f_205 <= 1)
				{
					return 0;
				}
			}
			if (func_448(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (Global_1590535[PLAYER::PLAYER_ID()] == 3)
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 0;
				}
			}
			break;
		
		case 20:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && GAMEPLAY::IS_BIT_SET(Global_4456448.f_226417, 27))
			{
				return 0;
			}
			if (func_451())
			{
				return 1;
			}
			if (func_450(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_448(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (Global_1590535[PLAYER::PLAYER_ID()] == 3)
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				return 0;
			}
			break;
		
		case 15:
		case 17:
		case 18:
		case 19:
		case 21:
		case 36:
		case 37:
		case 38:
		case 64:
			if (func_426(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (func_425(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			break;
		
		case 35:
			if (func_426(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_425(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_7(iParam0, 9);
	}
	return 0;
}

int func_426(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_427(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_427(int iParam0)
{
	return func_428(iParam0);
}

bool func_428(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_13.f_1, 0);
}

int func_429(int iParam0)
{
	if (func_430(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_430(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_431()
{
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_4591, 0);
}

bool func_432()
{
	return Global_2405072.f_26;
}

bool func_433(int iParam0)
{
	return iParam0 == 54;
}

bool func_434(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

bool func_435(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

int func_436(int iParam0)
{
	switch (iParam0)
	{
		case -1716189206:
		case -1786099057:
		case 1737195953:
		case 1317494643:
		case 1141786504:
		case -2067956739:
		case -102323637:
		case -1834847097:
		case -656458692:
		case -102973651:
		case -581044007:
		case -538741184:
		case -853065399:
		case -1810795771:
		case 419712736:
		case 940833800:
			return 1;
		
		default:
	}
	return 0;
}

int func_437(int iParam0)
{
	switch (iParam0)
	{
		case 615608432:
		case -37975472:
		case -1813897027:
		case 741814745:
		case -1420407917:
			return 1;
			break;
		
		case -1169823560:
			return 1;
			break;
	}
	return 0;
}

int func_438(int iParam0)
{
	if (func_442() || func_441())
	{
		if (iParam0 != -1)
		{
			return func_440(iParam0);
		}
		else
		{
			return func_439(Global_4456448.f_116794);
		}
	}
	return Global_1388161;
}

int func_439(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 453432689;
}

int func_440(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 453432689;
			break;
		
		case 1:
			return 1593441988;
			break;
		
		case 2:
			return 584646201;
			break;
		
		case 3:
			return -1716589765;
			break;
		
		case 4:
			return -771403250;
			break;
		
		case 5:
			return -1076751822;
			break;
		
		case 6:
			return 137902532;
			break;
		
		case 7:
			return 1198879012;
			break;
		
		case 8:
			return -598887786;
			break;
		
		case 9:
			return -1075685676;
			break;
		
		case 10:
			return -879347409;
			break;
		
		case 11:
			return -2009644972;
			break;
		
		case 12:
			return -1045183535;
			break;
		
		case 13:
			return -1355376991;
			break;
		
		case 14:
			return 324215364;
			break;
		
		case 15:
			return 736523883;
			break;
		
		case 16:
			return -270015777;
			break;
		
		case 17:
			return 171789620;
			break;
		
		case 18:
			return -1121678507;
			break;
		
		case 19:
			return -619010992;
			break;
		
		case 20:
			return 2024373456;
			break;
		
		case 21:
			return -1074790547;
			break;
		
		case 22:
			return -2084633992;
			break;
		
		case 23:
			return -1357824103;
			break;
		
		case 24:
			return 2132975508;
			break;
		
		case 25:
			return -952879014;
			break;
		
		case 26:
			return 1649403952;
			break;
		
		case 27:
			return 1627465347;
			break;
		
		case 28:
			return -1466123874;
			break;
		
		case 29:
			return -1063057011;
			break;
		
		case 30:
			return 1198256469;
			break;
		
		case 31:
			return 961495388;
			break;
		
		case 32:
			return -86904375;
			break;
		
		case 33:
			return -608341376;
			break;
		
		case 34:
			return -2066285827;
			break;
		
		case 35:
			return 1785463520;
			break;
		
		case 36:
			return -1768145561;
			break;
		
		case 37:
			return -1660422300;
			break;
		
		case 38:
			return 2144741730;
			break;
		
		case 39:
			return 487013001;
			break;
		
		case 40:
			return 2017895192;
			break;
		
		case 41:
			return -494615257;
			break;
		
		case 42:
			return -1654528753;
			break;
		
		case 43:
			return 984333226;
			break;
		
		case 44:
			return -275439685;
			break;
		
		case 45:
			return 317205821;
			break;
		
		case 46:
			return -1746263880;
			break;
		
		case 47:
			return 1432025498;
			break;
		
		case 48:
			return 100416529;
			break;
		
		case 49:
			return 205991906;
			break;
		
		case 50:
			return 177293209;
			break;
		
		case 51:
			return -1568386805;
			break;
		
		case 52:
			return -1312131151;
			break;
		
		case 53:
			return 1119849093;
			break;
		
		case 54:
			return 2138347493;
			break;
		
		case 55:
			return 1672152130;
			break;
		
		case 56:
			return -1238556825;
			break;
		
		case 57:
			return 1834241177;
			break;
		
		case 58:
			return 125959754;
			break;
		
		case 59:
			return -1813897027;
			break;
		
		case 60:
			return -37975472;
			break;
		
		case 61:
			return 741814745;
			break;
		
		case 62:
			return 615608432;
			break;
		
		case 63:
			return -1420407917;
			break;
		
		case 64:
			return -1169823560;
			break;
		
		case 65:
			return 911657153;
			break;
		
		case 66:
			return 883325847;
			break;
		
		case 67:
			return -1716189206;
			break;
		
		case 68:
			return 1737195953;
			break;
		
		case 69:
			return 1317494643;
			break;
		
		case 70:
			return -1786099057;
			break;
		
		case 71:
			return -2067956739;
			break;
		
		case 72:
			return 1141786504;
			break;
		
		case 73:
			return -102323637;
			break;
		
		case 74:
			return -1834847097;
			break;
		
		case 75:
			return -656458692;
			break;
		
		case 76:
			return -102973651;
			break;
		
		case 77:
			return -581044007;
			break;
		
		case 78:
			return -1951375401;
			break;
		
		case 79:
			return -538741184;
			break;
		
		case 80:
			return -853065399;
			break;
		
		case 81:
			return -1810795771;
			break;
		
		case 82:
			return 419712736;
			break;
		
		case 83:
			return 940833800;
			break;
		
		case 84:
			return -1569615261;
			break;
	}
	return 453432689;
}

bool func_441()
{
	return (GAMEPLAY::IS_BIT_SET(Global_4456448.f_11, 19) && NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

bool func_442()
{
	return (GAMEPLAY::IS_BIT_SET(Global_4456448.f_11, 18) && NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

bool func_443(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 4;
}

bool func_444(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 6;
}

bool func_445(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 5;
}

int func_446(int iParam0)
{
	switch (func_347())
	{
		case 0:
			if (!func_447(iParam0))
			{
				if (Global_1590535[iParam0] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_447(int iParam0)
{
	return Global_1590535[iParam0].f_196 != 0;
}

int func_448(int iParam0)
{
	switch (func_347())
	{
		case 0:
			if (!func_447(iParam0))
			{
				if (Global_1590535[iParam0] == 2 || Global_1590535[iParam0] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_449()
{
	return Global_1574404;
}

int func_450(int iParam0)
{
	switch (func_347())
	{
		case 0:
			if (Global_1590535[iParam0] == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_451()
{
	return Global_1574405;
}

bool func_452()
{
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_4591, 7);
}

int func_453(int iParam0)
{
	iVar0 = 0;
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_226417, 2) && iParam0 == 0)
	{
		iVar0 = 1;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_226417, 3) && iParam0 == 1)
	{
		iVar0 = 1;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_226417, 4) && iParam0 == 2)
	{
		iVar0 = 1;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_226417, 5) && iParam0 == 3)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_454(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			if (func_478())
			{
				return 0;
			}
			if (func_413(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (func_477(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_476(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_475(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_115(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((func_115(PLAYER::PLAYER_ID(), 7) || Global_2425662[PLAYER::PLAYER_ID()].f_236 != -1) || Global_2425662[PLAYER::PLAYER_ID()].f_237 != -1)
			{
				return 0;
			}
			if (func_474(PLAYER::PLAYER_ID(), 146))
			{
				return 0;
			}
			if ((func_474(PLAYER::PLAYER_ID(), 136) || func_390(PLAYER::PLAYER_ID()) == 136) || (func_115(PLAYER::PLAYER_ID(), 24) && func_473(PLAYER::PLAYER_ID())))
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_413(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (func_477(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_476(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_475(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_115(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((func_115(PLAYER::PLAYER_ID(), 7) || Global_2425662[PLAYER::PLAYER_ID()].f_236 != -1) || Global_2425662[PLAYER::PLAYER_ID()].f_237 != -1)
			{
				return 0;
			}
			if (Global_31035)
			{
				return 0;
			}
			if (func_115(PLAYER::PLAYER_ID(), 24))
			{
				if (func_473(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
			}
			if (func_390(PLAYER::PLAYER_ID()) == 136)
			{
				return 0;
			}
			if (func_472(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_474(PLAYER::PLAYER_ID(), 138))
			{
				if (func_61(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						uVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						iVar3 = ENTITY::GET_ENTITY_MODEL(uVar2);
						if ((iVar3 == 1641462412 || iVar3 == -2076478498) || iVar3 == 1445631933)
						{
							return 0;
						}
					}
				}
			}
			if (func_115(PLAYER::PLAYER_ID(), 21))
			{
				return 0;
			}
			if (func_115(PLAYER::PLAYER_ID(), 25))
			{
				return 0;
			}
			if (func_471(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_469(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			break;
		
		case 8:
			if (func_115(PLAYER::PLAYER_ID(), 21))
			{
				return 0;
			}
			if (func_115(PLAYER::PLAYER_ID(), 25))
			{
				return 0;
			}
			if (func_413(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (func_477(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_476(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_475(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_115(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((func_115(PLAYER::PLAYER_ID(), 7) || Global_2425662[PLAYER::PLAYER_ID()].f_236 != -1) || Global_2425662[PLAYER::PLAYER_ID()].f_237 != -1)
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_413(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (func_477(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_476(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_475(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_115(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((func_115(PLAYER::PLAYER_ID(), 7) || Global_2425662[PLAYER::PLAYER_ID()].f_236 != -1) || Global_2425662[PLAYER::PLAYER_ID()].f_237 != -1)
			{
				return 0;
			}
			if (func_474(PLAYER::PLAYER_ID(), 146))
			{
				return 0;
			}
			break;
		
		case 9:
			if (func_413(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (func_477(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_476(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_475(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_115(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((func_115(PLAYER::PLAYER_ID(), 7) || Global_2425662[PLAYER::PLAYER_ID()].f_236 != -1) || Global_2425662[PLAYER::PLAYER_ID()].f_237 != -1)
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_413(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (func_477(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_476(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_475(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_115(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if ((func_115(PLAYER::PLAYER_ID(), 7) || Global_2425662[PLAYER::PLAYER_ID()].f_236 != -1) || Global_2425662[PLAYER::PLAYER_ID()].f_237 != -1)
			{
				return 0;
			}
			if (func_468(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 22:
			break;
		
		case 46:
		case 49:
		case 52:
			break;
		
		case 23:
		case 24:
		case 25:
		case 26:
		case 57:
			break;
		
		case 12:
			if (func_474(PLAYER::PLAYER_ID(), 136))
			{
				return 0;
			}
			if (func_429(PLAYER::PLAYER_ID()) == 153)
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_474(PLAYER::PLAYER_ID(), 129))
			{
				return 0;
			}
			break;
		
		case 1:
			break;
		
		case 14:
			if (func_413(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (func_477(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_476(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_475(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_467(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_466(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_465(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_464(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_463(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_462(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if (func_115(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if (func_461(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if ((func_115(PLAYER::PLAYER_ID(), 7) || Global_2425662[PLAYER::PLAYER_ID()].f_236 != -1) || Global_2425662[PLAYER::PLAYER_ID()].f_237 != -1)
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (func_61(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
				{
					if (PLAYER::INT_TO_PLAYERINDEX(iVar0) != PLAYER::PLAYER_ID())
					{
						if (!func_93(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0))
						{
							return 1;
						}
					}
				}
				iVar0++;
			}
			return 0;
			break;
		
		case 6:
			if (func_413(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (func_477(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_476(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_475(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_115(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if (Global_2425662[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_202 == 1)
			{
				return 0;
			}
			if (func_390(PLAYER::PLAYER_ID()) == 136)
			{
				return 0;
			}
			if (func_390(PLAYER::PLAYER_ID()) == 141)
			{
				return 0;
			}
			if (func_390(PLAYER::PLAYER_ID()) == 139)
			{
				return 0;
			}
			if (func_390(PLAYER::PLAYER_ID()) == 140 && func_474(PLAYER::PLAYER_ID(), 140))
			{
				return 0;
			}
			if (func_390(PLAYER::PLAYER_ID()) == 131 && func_474(PLAYER::PLAYER_ID(), 131))
			{
				return 0;
			}
			if (func_474(PLAYER::PLAYER_ID(), 138))
			{
				return 0;
			}
			if (func_474(PLAYER::PLAYER_ID(), 146))
			{
				return 0;
			}
			if (func_429(PLAYER::PLAYER_ID()) == 148 || func_429(PLAYER::PLAYER_ID()) == 197)
			{
				return 0;
			}
			if (func_429(PLAYER::PLAYER_ID()) == 183)
			{
				if (func_6(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (func_61(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
				{
					if (PLAYER::INT_TO_PLAYERINDEX(iVar0) != PLAYER::PLAYER_ID())
					{
						if (!func_93(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0))
						{
							return 1;
						}
					}
				}
				iVar0++;
			}
			return 0;
			break;
		
		case 20:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				return 0;
			}
			if (func_115(PLAYER::PLAYER_ID(), 0) || func_115(PLAYER::PLAYER_ID(), 16))
			{
				return 0;
			}
			if (func_474(PLAYER::PLAYER_ID(), 146))
			{
				return 0;
			}
			if (func_429(PLAYER::PLAYER_ID()) == 192)
			{
				iVar1 = Global_1628237[PLAYER::PLAYER_ID()].f_11.f_181;
			}
			if (((((((func_429(PLAYER::PLAYER_ID()) == 159 || func_429(PLAYER::PLAYER_ID()) == 157) || func_429(PLAYER::PLAYER_ID()) == 153) || func_429(PLAYER::PLAYER_ID()) == 154) || func_429(PLAYER::PLAYER_ID()) == 155) || func_429(PLAYER::PLAYER_ID()) == 170) || func_429(PLAYER::PLAYER_ID()) == 197) || (func_429(PLAYER::PLAYER_ID()) == 192 && iVar1 == 9))
			{
				return 0;
			}
			if (func_429(PLAYER::PLAYER_ID()) == 225 || func_429(PLAYER::PLAYER_ID()) == 226)
			{
				if (func_459(func_460(PLAYER::PLAYER_ID())))
				{
					return 0;
				}
			}
			if (func_467(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_458(PLAYER::PLAYER_ID()) == 17)
			{
				return 0;
			}
			if (func_457())
			{
				return 0;
			}
			if (func_465(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_462(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if (func_456(19))
			{
				return 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					iVar5 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					iVar6 = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar5);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar5, -1, 0))
					{
						iVar6++;
					}
					if (iVar6 == 1)
					{
						bVar4 = true;
					}
					if (!bVar4)
					{
						iVar7 = -1;
						iVar8 = iVar7;
						iVar9 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar5) + 1;
						while (iVar6 > 0)
						{
							iVar7 = iVar8;
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar5, iVar7, 0))
							{
								uVar10 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar5, iVar7, 0);
								iVar11 = NETWORK::_NETWORK_GET_PED_PLAYER(uVar10);
								if (iVar11 != func_8() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar11))
								{
									if (func_429(iVar11) == 157 || func_429(iVar11) == 153)
									{
										return 0;
									}
								}
								iVar6 = (iVar6 - 1);
							}
							iVar8++;
							if (iVar8 >= iVar9 && iVar6 > 0)
							{
								iVar6 = 0;
							}
						}
					}
				}
			}
			break;
		
		case 15:
		case 17:
		case 18:
		case 19:
		case 21:
		case 36:
		case 37:
		case 38:
		case 64:
			break;
		
		case 35:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				return 0;
			}
			if (func_390(PLAYER::PLAYER_ID()) == 146)
			{
				return 0;
			}
			if ((((func_429(PLAYER::PLAYER_ID()) == 159 || func_429(PLAYER::PLAYER_ID()) == 153) || func_429(PLAYER::PLAYER_ID()) == 157) || func_429(PLAYER::PLAYER_ID()) == 154) || func_429(PLAYER::PLAYER_ID()) == 155)
			{
				return 0;
			}
			if (func_429(PLAYER::PLAYER_ID()) == 183)
			{
				if (func_6(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
			}
			if (func_456(21))
			{
				return 0;
			}
			break;
		
		case 39:
			break;
		
		case 43:
			if ((((func_451() || func_449()) || func_450(PLAYER::PLAYER_ID())) || func_448(PLAYER::PLAYER_ID())) || Global_1590535[PLAYER::PLAYER_ID()] == 3)
			{
				return 0;
			}
			if (func_431())
			{
				return 0;
			}
			if (func_455(13))
			{
				return 0;
			}
			if (func_446(PLAYER::PLAYER_ID()))
			{
				if (func_445(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else if (func_444(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 44:
			if (func_413(PLAYER::PLAYER_ID(), 1, 0))
			{
				return 0;
			}
			if (func_477(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (func_115(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			if (func_115(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (Global_2425662[PLAYER::PLAYER_ID()].f_236 != -1)
			{
				return 0;
			}
			if (Global_2425662[PLAYER::PLAYER_ID()].f_237 != -1)
			{
				return 0;
			}
			if (func_468(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_455(int iParam0)
{
	if (iParam0 < 32)
	{
		return GAMEPLAY::IS_BIT_SET(Global_2439138.f_502.f_1, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_2439138.f_502.f_2, (iParam0 - 32));
}

bool func_456(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_5124.f_45, iParam0);
}

bool func_457()
{
	return Global_2450632.f_15;
}

int func_458(int iParam0)
{
	if (func_429(iParam0) == 229 || func_429(iParam0) == 230)
	{
		return func_460(iParam0);
	}
	return -1;
}

int func_459(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 8:
		case 3:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_460(int iParam0)
{
	if (func_430(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_461(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_462(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(uVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_8())
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_463(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_464(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_465(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_8())
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_466(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_467(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_8())
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_468(int iParam0, bool bParam1)
{
	if (func_61(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			if (!Global_2425662[iParam0].f_261.f_14 == -1)
			{
				return 1;
			}
		}
		else if (!Global_2425662[iParam0].f_261.f_16 == -1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_469(int iParam0)
{
	return func_470(iParam0) != 0;
}

int func_470(int iParam0)
{
	return Global_1628237[iParam0].f_595;
}

int func_471(int iParam0)
{
	if (func_61(iParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!Global_2425662[iParam0].f_261.f_17[iVar0] == 0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_472(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 5);
	}
	return 0;
}

bool func_473(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 4);
}

int func_474(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0] == iParam1)
	{
		return func_143(iParam0);
	}
	return 0;
}

int func_475(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_476(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_477(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 0;
			}
		}
	}
	return 0;
}

bool func_478()
{
	return Global_1312418;
}

bool func_479(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_262145.f_7686 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_481(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4718 == 1)
		{
			return 1;
		}
	}
	if (func_423() || func_422())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_480())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1574637[iVar1], iVar0);
}

int func_480()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1731, 23))
	{
		return 1;
	}
	if (func_423())
	{
		return 1;
	}
	if (func_422())
	{
		return 1;
	}
	iVar0 = Global_1388048[func_34(-1)];
	if (GAMEPLAY::IS_BIT_SET(iVar0, 7))
	{
		GAMEPLAY::SET_BIT(&(Global_2537071.f_1731), 23);
		return 1;
	}
	return 0;
}

bool func_481(int iParam0, int iParam1)
{
	if (!func_484())
	{
		return 0;
	}
	if (func_483())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_482(iParam1);
	iVar1 = uVar0;
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_730, iVar1);
}

int func_482(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		default:
	}
	return 1;
}

bool func_483()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_146, 3);
}

int func_484()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_423())
	{
		return 1;
	}
	if (func_422())
	{
		return 1;
	}
	return func_37(120, -1);
}

void func_485()
{
	func_60(0, 0);
	func_59("MPCT_CASINO_M");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	bVar0 = true;
	if (Global_262145.f_26327 || !func_486())
	{
		bVar0 = false;
	}
	func_42(0, "MPCT_CASINO_M_R", 0, bVar0, 0, 0);
	bVar0 = true;
	if (Global_262145.f_26328 || !GAMEPLAY::IS_BIT_SET(iLocal_1323, 1))
	{
		bVar0 = false;
	}
	func_42(1, "MPCT_CASINO_M_L", 0, bVar0, 0, 0);
	bVar0 = true;
	if (Global_262145.f_26329 || !GAMEPLAY::IS_BIT_SET(iLocal_1323, 2))
	{
		bVar0 = false;
	}
	func_42(2, "MPCT_CASINO_M_V", 0, bVar0, 0, 0);
	func_40(-1);
	if (func_904())
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			func_111(237, "BB_SELECT", -1, 0);
			func_111(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_110(176, "BB_SELECT", -1);
			func_110(177, "BB_BACK", -1);
		}
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = 3;
}

int func_486()
{
	if (func_488())
	{
		bLocal_1335 = true;
		return 0;
	}
	else
	{
		bLocal_1335 = false;
	}
	if (func_413(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (!func_283())
	{
		return 0;
	}
	if (func_425(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = func_114(PLAYER::PLAYER_ID(), 243, 0);
	if (iVar0 != -1)
	{
		return 0;
	}
	if (func_487())
	{
		return 0;
	}
	return 1;
}

bool func_487()
{
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_1745, 17);
}

int func_488()
{
	if (func_98(&Global_1696077) && !func_96(&Global_1696077, Global_262145.f_26463, 0))
	{
		return 1;
	}
	return 0;
}

void func_489(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_6), iParam0);
}

int func_490()
{
	if (Local_1317 == -1)
	{
		if (func_496() != -1)
		{
			Local_1317 = func_496();
		}
	}
	if (Local_1317.f_1 == -1)
	{
		if (func_496() != -1)
		{
			Local_1317.f_1 = func_495();
		}
	}
	if (Local_1317.f_3)
	{
		if (!func_26())
		{
			return 1;
		}
	}
	else if (!func_26())
	{
		if (!Local_1317.f_2)
		{
			if ((func_429(PLAYER::PLAYER_ID()) == 243 && func_425(PLAYER::PLAYER_ID())) && Local_1317 != -1)
			{
				sVar0 = func_492(243, Local_1317, Local_1317.f_1);
				func_1(Local_147.f_1, "CAGTAU", sVar0, &Local_1270, 0);
				Local_1317.f_2 = 1;
				func_72(&(Local_1317.f_4), 0, 0);
			}
			else if (func_96(&(Local_1317.f_4), 10000, 0))
			{
				func_491();
				return 1;
			}
		}
		else if (func_96(&(Local_1317.f_4), 3000, 0))
		{
			return 1;
		}
	}
	else if (Local_1317.f_2)
	{
		Local_1317.f_3 = 1;
	}
	return 0;
}

void func_491()
{
	func_1(Local_147.f_1, "CAGTAU", "CAGT_PM_4", &Local_1270, 0);
}

char* func_492(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_493(PLAYER::PLAYER_ID());
	switch (iParam0)
	{
		case 249:
			switch (iParam1)
			{
				case 2:
					switch (iVar0)
					{
						case 0:
							return "BATFM_SMSA1";
						
						case 1:
							return "BATFM_SMDA1";
						
						case 2:
							return "BATFM_SMTA1";
						
						case 3:
							return "BATFM_SMBA1";
						
						default:
					}
					break;
				
				case 3:
					switch (iVar0)
					{
						case 0:
							return "BATFM_CFSA1";
						
						case 1:
							return "BATFM_CFDA1";
						
						case 2:
							return "BATFM_CFTA1";
						
						case 3:
							return "BATFM_CFBA1";
						
						default:
					}
					break;
				
				case 4:
					switch (iVar0)
					{
						case 0:
							return "BATFM_MESA1";
						
						case 1:
							return "BATFM_MEDA1";
						
						case 2:
							return "BATFM_META1";
						
						case 3:
							return "BATFM_MEBA1";
						
						default:
					}
					break;
				
				case 5:
					switch (iVar0)
					{
						case 0:
							return "BATFM_HUSA1";
						
						case 1:
							return "BATFM_HUDA1";
						
						case 2:
							return "BATFM_HUTA1";
						
						case 3:
							return "BATFM_HUBA1";
						
						default:
					}
					break;
			}
			break;
		
		case 237:
			switch (iParam1)
			{
				case 2:
					return "BATFM_SBOA";
				
				case 3:
					return "BATFM_CLOA";
				
				case 5:
					return "BATFM_HKOA";
				
				default:
			}
			break;
		
		case 243:
			if (Global_2537071.f_5124.f_337 == -1)
			{
				Global_2537071.f_5124.f_337 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 2);
			}
			switch (Global_2537071.f_5124.f_337)
			{
				case 0:
					switch (iParam1)
					{
						case 6:
							if (func_180() == 0)
							{
								return "CAGT_HR_OC1";
							}
							else
							{
								return "CAGT_HR_OCM1";
							}
							break;
						
						case 7:
							return "CAGT_HT_OC1";
						
						case 11:
							switch (iParam2)
							{
								case 35:
								case 36:
									return "CAGT_RL_OPS1";
								
								case 37:
									return "CAGT_RL_OVG1";
								
								default:
							}
							break;
						
						case 15:
							return "CAGT_UI_OC1";
						
						case 9:
							return "CAGT_MD_OC1";
						
						case 13:
							return "CAGT_SP_OC1";
						
						case 4:
							return "CAGT_ED_OC1";
						
						case 14:
							return "CAGT_TC_OC1";
						
						case 8:
							return "CAGT_IJ_OC1";
						
						case 5:
							return "CAGT_HE_OC1";
						
						case 3:
							return "CAGT_DC_OC1";
						
						case 0:
							return "CAGT_BP_OC1";
						
						case 12:
							return "CAGT_SM_OC1";
						
						case 2:
							return "CAGT_CC_OC1";
						
						case 1:
							return "CAGT_BD_OC1";
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 6:
							if (func_180() == 0)
							{
								return "CAGT_HR_OC2";
							}
							else
							{
								return "CAGT_HR_OCM2";
							}
							break;
						
						case 7:
							return "CAGT_HT_OC2";
						
						case 11:
							switch (iParam2)
							{
								case 35:
								case 36:
									return "CAGT_RL_OPS2";
								
								case 37:
									return "CAGT_RL_OVG1";
								
								default:
							}
							break;
						
						case 15:
							return "CAGT_UI_OC2";
						
						case 9:
							return "CAGT_MD_OC2";
						
						case 13:
							return "CAGT_SP_OC2";
						
						case 4:
							return "CAGT_ED_OC2";
						
						case 14:
							return "CAGT_TC_OC2";
						
						case 8:
							return "CAGT_IJ_OC2";
						
						case 5:
							return "CAGT_HE_OC2";
						
						case 3:
							return "CAGT_DC_OC2";
						
						case 0:
							return "CAGT_BP_OC2";
						
						case 12:
							return "CAGT_SM_OC2";
						
						case 2:
							return "CAGT_CC_OC2";
						
						case 1:
							return "CAGT_BD_OC2";
					}
					break;
			}
			break;
	}
	return "BATFM_SMSA1";
}

int func_493(int iParam0)
{
	iVar0 = -1;
	if (func_494(iParam0, 0))
	{
		iVar0 = 0;
	}
	else if (func_494(iParam0, 1))
	{
		iVar0 = 1;
	}
	else if (func_494(iParam0, 2))
	{
		iVar0 = 2;
	}
	else if (func_494(iParam0, 3))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_494(int iParam0, int iParam1)
{
	if (iParam0 == func_8() || iParam1 == -1)
	{
		return 0;
	}
	iVar0 = iParam1 + 20;
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, iVar0);
}

var func_495()
{
	return Global_2537071.f_5124.f_340;
}

int func_496()
{
	return Global_2537071.f_5124.f_339;
}

bool func_497(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_6, iParam1);
}

void func_498()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_1323, 0))
	{
		if (Local_147.f_178 == 23)
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_1323, 1))
			{
				if (func_104(59) < 0 && func_539())
				{
					GAMEPLAY::SET_BIT(&iLocal_1323, 1);
					GAMEPLAY::SET_BIT(&iLocal_1323, 0);
				}
			}
			else if (func_104(59) > 0 || !func_539())
			{
				GAMEPLAY::CLEAR_BIT(&iLocal_1323, 1);
				GAMEPLAY::SET_BIT(&iLocal_1323, 0);
			}
		}
		if (Local_147.f_178 == 23 || Local_147.f_178 == 24)
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_1323, 2))
			{
				if (func_104(60) < 0 && func_499())
				{
					GAMEPLAY::SET_BIT(&iLocal_1323, 2);
					GAMEPLAY::SET_BIT(&iLocal_1323, 0);
				}
			}
			else if (func_104(60) > 0 || !func_499())
			{
				GAMEPLAY::CLEAR_BIT(&iLocal_1323, 2);
				GAMEPLAY::SET_BIT(&iLocal_1323, 0);
			}
		}
	}
}

int func_499()
{
	if (func_165(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (!func_502())
	{
		return 0;
	}
	if (func_501(PLAYER::PLAYER_ID()))
	{
		if (!func_500(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

bool func_500(int iParam0)
{
	return func_497(iParam0, 17);
}

bool func_501(int iParam0)
{
	return func_497(iParam0, 15);
}

int func_502()
{
	if (func_533(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (func_532(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (func_503(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0))
	{
		return 0;
	}
	if (func_467(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_465(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_462(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == GAMEPLAY::GET_HASH_KEY("YachtRm_Bridge"))
	{
		return 0;
	}
	return 1;
}

int func_503(struct<3> Param0, bool bParam3)
{
	if (func_511(Param0) || bParam3)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(Param0, -1144.497f, 43.01712f, 51.94447f) <= (325f * 325f))
	{
		if (func_510(Param0, 1, 0, 0))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1319.769f, 29.52616f, 49.56616f, -1336.527f, 121.0351f, 75.61888f, 18f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1360.02f, 110.1307f, 52.63413f, -1365.276f, 172.0624f, 72.01312f, 52f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1363.007f, 170.533f, 50.00813f, -1296.903f, 178.8133f, 73.37104f, 35f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1197.521f, 199.8643f, 57.04471f, -1298.04f, 176.1384f, 73.33252f, 34f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1103.745f, 221.1367f, 55.34814f, -1208.394f, 191.0909f, 79.13708f, 45f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -989.0328f, -89.39376f, 32.48801f, -1086.211f, -115.7076f, 50.65051f, 70f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -958.5481f, -111.5455f, 30.76432f, -1132.685f, 190.7841f, 73.90366f, 70f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1077.028f, -139.7337f, 38.73388f, -1299.556f, -15.16894f, 63.4371f, 20f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1319.769f, 29.52616f, 47.56616f, -1287.619f, -24.88864f, 67.5273f, 20f, 0, 1))
		{
			return 1;
		}
	}
	if (func_507(2, Param0))
	{
		if (func_510(Param0, 2, 0, 0))
		{
			return 1;
		}
	}
	if (func_507(3, Param0) && !func_504(PLAYER::PLAYER_ID()))
	{
		if (func_510(Param0, 3, 0, 0))
		{
			return 1;
		}
	}
	if (func_507(4, Param0))
	{
		if (func_510(Param0, 4, 0, 0))
		{
			return 1;
		}
	}
	if (func_507(5, Param0))
	{
		if (func_510(Param0, 5, 0, 0))
		{
			return 1;
		}
	}
	if (func_507(6, Param0))
	{
		if (func_510(Param0, 6, 0, 0))
		{
			return 1;
		}
	}
	if (func_507(7, Param0))
	{
		if (func_510(Param0, 7, 0, 0))
		{
			return 1;
		}
	}
	if (func_507(8, Param0))
	{
		if (func_510(Param0, 8, 0, 0))
		{
			return 1;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2591.626f, -268.894f, 111.8859f, 2591.331f, -614.4355f, 55.36921f, 70f, 0, 1))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, 1))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, 1))
	{
		return 1;
	}
	if (((OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, 1))
	{
		return 1;
	}
	if (SYSTEM::VDIST2(Param0, -99.68751f, -2448.891f, 5.01731f) <= (230f * 230f))
	{
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, 1))
		{
			return 1;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1579.822f, 2785.389f, 9.915375f, -1685.905f, 2918.024f, 76.24912f, 45.875f, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_504(int iParam0)
{
	if (func_506(iParam0))
	{
		iVar0 = func_505(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_505(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1590535[iParam0].f_274.f_264;
	}
	return 0;
}

int func_506(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1590535[iParam0].f_274.f_264 != 0;
	}
	return 0;
}

bool func_507(int iParam0, struct<3> Param1)
{
	return SYSTEM::VDIST2(Param1, func_509(iParam0)) < func_508(iParam0);
}

float func_508(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_509(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1155.877f, 48.3426f, 52.4985f;
			break;
		
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
			break;
		
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
			break;
		
		case 4:
			return 1701.666f, 2586.261f, 51.4925f;
			break;
		
		case 5:
			return 3525.058f, 3711.323f, 35.6423f;
			break;
		
		case 6:
			return 548.1421f, -3157.961f, 5.0696f;
			break;
		
		case 7:
			return -1142.411f, -526.4487f, 31.6878f;
			break;
		
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_510(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0] = { -804.3439f, -3346.5f, 10f };
			Var46[0] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1] = { -1911.488f, -2934.197f, 10f };
			Var46[1] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2] = { -844.9433f, -2802.785f, 10f };
			Var46[2] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3] = { -1021.086f, -2952.277f, 10f };
			Var46[3] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4] = { -1027.136f, -2436.457f, 10f };
			Var46[4] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5] = { -1497.549f, -2408.712f, 10f };
			Var46[5] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7] = { -1110.083f, -3496.806f, 12f };
			Var46[7] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8] = { -1886.899f, -3193.024f, 12f };
			Var46[8] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9] = { -1134.337f, -3535.648f, 12f };
			Var46[9] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10] = { -969.1279f, -3463.899f, 12f };
			Var46[10] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11] = { -1369.491f, -2173.579f, 10f };
			Var46[11] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12] = { -1010.926f, -3550.943f, 10f };
			Var46[12] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0] = { -1773.944f, 3287.334f, 30f };
			Var46[0] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1] = { -2725.889f, 3291.099f, 30f };
			Var46[1] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2] = { -2442.026f, 3326.699f, 30f };
			Var46[2] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3] = { -1917.165f, 3374.209f, 30f };
			Var46[3] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4] = { -2192.753f, 3373.278f, 30f };
			Var46[4] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5] = { -2077.663f, 3344.514f, 30f };
			Var46[5] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6] = { -2861.755f, 3352.661f, 30f };
			Var46[6] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7] = { -2005.574f, 3364.533f, 30f };
			Var46[7] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8] = { -1682.235f, 3004.285f, 30f };
			Var46[8] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			Var0[11] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9].f_2 = (Var46[9].f_2 + IntToFloat(iVar111));
			Var46[10].f_2 = (Var46[10].f_2 + IntToFloat(iVar111));
			Var46[11].f_2 = (Var46[11].f_2 + IntToFloat(iVar111));
			Var46[12].f_2 = (Var46[12].f_2 + IntToFloat(iVar111));
			Var46[13].f_2 = (Var46[13].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0] = { 1541.607f, 2527.555f, 40f };
			Var46[0] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1] = { 1788.879f, 2445.727f, 40f };
			Var46[1] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2] = { 1601.157f, 2436.244f, 40f };
			Var46[2] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3] = { 1706.331f, 2407.597f, 40f };
			Var46[3] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4] = { 1712.452f, 2756.218f, 40f };
			Var46[4] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5] = { 1830.228f, 2661.24f, 40f };
			Var46[5] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6] = { 1559.05f, 2632.22f, 40f };
			Var46[6] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7] = { 1612.021f, 2716.869f, 40f };
			Var46[7] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8] = { 1809.872f, 2729.827f, 40f };
			Var46[8] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9] = { 1818.789f, 2605.948f, 40f };
			Var46[9] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0] = { 3411.002f, 3663.185f, 20f };
			Var46[0] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1] = { 3426.66f, 3733.078f, 20f };
			Var46[1] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2] = { 3446.036f, 3795.688f, 20f };
			Var46[2] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0] = { 526.053f, -3391.497f, -10f };
			Var46[0] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0] = { -1108.55f, -570.8798f, 20f };
			Var46[0] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1] = { -1201.378f, -485.9673f, 20f };
			Var46[1] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2] = { -985.6311f, -525.4233f, 20f };
			Var46[2] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3] = { -1055.849f, -477.8226f, 20f };
			Var46[3] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar109], Var46[iVar109], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_511(struct<3> Param0)
{
	if (SYSTEM::VDIST(Global_2405072.f_2891, Param0) < Global_2405072.f_2903)
	{
		return Global_2405072.f_2894;
	}
	Global_2405072.f_2891 = { Param0 };
	if (func_525(Param0))
	{
		Global_2405072.f_2894 = 1;
		return 1;
	}
	iVar0 = func_523(Param0);
	if (iVar0 != -1)
	{
		Global_2405072.f_2894 = 1;
		return 1;
	}
	else
	{
		uVar1 = 3;
		uVar5 = 3;
		if (func_512(Param0, &uVar1, &uVar5))
		{
			Global_2405072.f_2894 = 1;
			return 1;
		}
	}
	Global_2405072.f_2894 = 0;
	return 0;
}

int func_512(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 126)
	{
		if (iVar2 < *uParam3)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1049922[iVar0].f_3[iVar1], Global_1049922[iVar0].f_3[iVar1].f_1, 0f) < fVar3)
				{
					(*uParam3)[iVar2] = iVar0;
					(*uParam4)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 146)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_515(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_513(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *uParam3)
		{
			fVar4 = SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1676377.f_488[iVar0], Global_1676377.f_488[iVar0].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*uParam3)[iVar2] = iVar0;
				(*uParam4)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_513(int iParam0)
{
	iVar0 = func_514(iParam0);
	if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_271 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1628237[PLAYER::PLAYER_ID()].f_11;
	if (iVar1 != func_8())
	{
		if (Global_1590535[iVar1].f_274.f_271 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2425662[PLAYER::PLAYER_ID()].f_310.f_5 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_514(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_515(int iParam0)
{
	iVar0 = func_522(iParam0);
	if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_264 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1628237[PLAYER::PLAYER_ID()].f_11;
	if (iVar1 != func_8())
	{
		if (Global_1590535[iVar1].f_274.f_264 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2425662[PLAYER::PLAYER_ID()].f_310.f_5 == iParam0)
	{
		return 1;
	}
	if (func_462(PLAYER::PLAYER_ID(), 0) || (func_519(PLAYER::PLAYER_ID()) && func_393(func_518(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (func_465(PLAYER::PLAYER_ID()) || (func_519(PLAYER::PLAYER_ID()) && func_393(func_518(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (func_467(PLAYER::PLAYER_ID()) || (func_519(PLAYER::PLAYER_ID()) && func_393(func_518(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (func_517(PLAYER::PLAYER_ID()) || (func_519(PLAYER::PLAYER_ID()) && func_393(func_518(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (func_516(PLAYER::PLAYER_ID()) || (func_519(PLAYER::PLAYER_ID()) && func_393(func_518(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_516(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_517(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_518(int iParam0)
{
	if (iParam0 != func_8() && func_61(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_14;
	}
	return -1;
}

int func_519(int iParam0)
{
	if (iParam0 != func_8() && func_61(iParam0, 1, 1))
	{
		if (func_521(iParam0) && !func_520(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_520(int iParam0)
{
	if (iParam0 != func_8() && func_61(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310, 4);
	}
	return 0;
}

int func_521(int iParam0)
{
	if (iParam0 != func_8() && func_61(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_522(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_523(struct<3> Param0)
{
	if (SYSTEM::VDIST(Global_2405072.f_2895, Param0) < Global_2405072.f_2903)
	{
		return Global_2405072.f_2898;
	}
	Global_2405072.f_2895 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.z <= 0f)
		{
			Param0.z = ((Global_2412235[iVar0].f_2 + Global_2412235[iVar0].f_3.f_2) * 0.5f);
		}
		if (func_524(Param0, &(Global_2412235[iVar0])))
		{
			Global_2405072.f_2898 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405072.f_2898 = -1;
	return -1;
}

bool func_524(struct<3> Param0, var uParam3)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_525(struct<3> Param0)
{
	if (Global_2537071.f_883 && func_526(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_526(struct<3> Param0, var uParam3)
{
	*uParam3 = -1;
	iVar2 = func_527(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_515(iVar1))
			{
				if (func_527(Global_1676377.f_488[iVar0], 0) == iVar2)
				{
					*uParam3 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_527(struct<3> Param0, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0].f_9 == 1 || iParam3 == 0)
		{
			if (func_528(Param0, &(Global_2409984[iVar0]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_528(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_531(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405072.f_2726) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_529(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.z < uParam3->f_2 && Param0.z < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.z > uParam3->f_2 && Param0.z > uParam3->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_529(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_530(&Param3, &Param6);
	if (((!Param0.x >= Param3.x || !Param0.y >= Param3.y) || !Param0.x <= Param6.x) || !Param0.y <= Param6.y)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.z >= Param3.z)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.z <= Param6.z)
		{
			return 1;
		}
	}
	else if (Param0.z >= Param3.z && Param0.z <= Param6.z)
	{
		return 1;
	}
	return 0;
}

void func_530(var uParam0, var uParam1)
{
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_531(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.z = 0f;
		Param3.z = 0f;
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.z > Param3.z)
		{
			Param0.z = Param3.z;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.z < Param3.z)
		{
			Param0.z = Param3.z;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
}

int func_532(int iParam0, bool bParam1)
{
	if (func_533(iParam0, bParam1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_533(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[iParam0].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_477(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_476(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_538(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_475(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_537(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_466(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_465(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_464(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_463(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_462(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_536(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_461(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_535(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_534(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_392(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_534(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_535(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_536(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_537(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_538(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_393(Global_2425662[iParam0].f_310.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_539()
{
	if (func_104(59) > 0)
	{
		return 0;
	}
	if (func_165(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (!func_502())
	{
		return 0;
	}
	if (func_541(PLAYER::PLAYER_ID()))
	{
		if (!func_540(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

bool func_540(int iParam0)
{
	return func_497(iParam0, 13);
}

bool func_541(int iParam0)
{
	return func_497(iParam0, 9);
}

void func_542()
{
	switch (Local_147.f_178)
	{
		case 20:
			if (func_62(0, -1, 1))
			{
				if ((!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2)) || func_597())
				{
					func_591();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_284();
				}
				else
				{
					func_284();
				}
			}
			break;
		
		case 21:
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					if (func_543())
					{
						GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
						func_284();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_284();
				}
			}
			break;
	}
}

int func_543()
{
	func_544();
	func_40(-1);
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		func_111(237, "BB_SELECT", -1, 0);
		func_111(238, "BB_BACK", -1, 0);
	}
	else
	{
		func_110(176, "BB_SELECT", -1);
		func_110(177, "BB_BACK", -1);
	}
	GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = 4;
	return 1;
}

void func_544()
{
	func_60(0, 0);
	func_59("MPCT_PA_HEL");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_42(iVar0, func_589(func_590(iVar0)), 0, func_545(iVar0), 0, 0);
		iVar0++;
	}
}

bool func_545(int iParam0)
{
	return func_546(func_590(iParam0), 0);
}

int func_546(int iParam0, int iParam1)
{
	if (func_588())
	{
		if (iParam0 == 200)
		{
			iVar1 = 0;
			while (iVar1 < 47)
			{
				iVar0 = func_547(iParam0, iVar1);
				if (iVar0 > -1)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_2097152[func_326()].f_5500.f_1[(iVar0 / 32)], (iVar0 % 32)))
					{
						return 1;
					}
				}
				iVar1++;
			}
		}
		else
		{
			iVar0 = func_547(iParam0, iParam1);
			if (iVar0 > -1)
			{
				return GAMEPLAY::IS_BIT_SET(Global_2097152[func_326()].f_5500.f_1[(iVar0 / 32)], (iVar0 % 32));
			}
		}
	}
	return 0;
}

int func_547(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case 79:
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (func_548(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 276:
			if (func_548(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		case 450:
			return 115;
		
		case 451:
			return 116;
		
		case 452:
			return 117;
		
		case 453:
			return 118;
		
		case 454:
			return 119;
		
		case 455:
			return 120;
		
		case 456:
			return 121;
		
		case 457:
			return 122;
		
		case 480:
			return 123;
		
		case 482:
			return 124;
		
		case 483:
			return 125;
		
		default:
	}
	return -1;
}

int func_548(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_587(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (NETWORK::_0x67A5589628E0CFF6())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_586() && func_585())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == 207 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 208 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 209 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (func_586())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if (iParam0 == 221 || iParam0 == 135)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_584(iParam0))
	{
		if (Global_75375)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_583(iVar0);
	if (iVar1 != -1)
	{
		if (func_581(func_582(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_580(iParam0))
	{
		if (func_586())
		{
			if ((iParam0 == 205 && Global_262145.f_19751) || (iParam0 != 205 && Global_262145.f_19750))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_579(iParam0))
	{
		if (func_571(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_570(iVar0);
	if (iVar2 != -1)
	{
		if (func_568(func_569(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_567(iVar0);
	if (iVar3 > 0)
	{
		if (func_565(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_564(iVar0);
	if (iVar4 != -1)
	{
		if (func_562(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = func_561(iVar0);
	if (iVar5 != -1)
	{
		if (func_556(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar6 = func_555(iVar0);
	if (iVar6 != -1)
	{
		if (func_551(iVar0))
		{
			return 1;
		}
		return 0;
	}
	if ((iVar0 == 1938952078 || iVar0 == -1987130134) || iVar0 == 1747439474)
	{
		if (func_550(iVar0))
		{
			return 0;
		}
		return 1;
	}
	iVar7 = func_549(iVar0);
	if (iVar7 != -1)
	{
		if (func_550(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_549(int iParam0)
{
	switch (iParam0)
	{
		case 1938952078:
			return 0;
			break;
		
		case -907477130:
			return 1;
			break;
		
		case -1987130134:
			return 2;
			break;
		
		case 1747439474:
			return 3;
			break;
		
		case 1118611807:
			return 4;
			break;
		
		case 409049982:
			return 5;
			break;
		
		case -1756021720:
			return 6;
			break;
		
		case 2031587082:
			return 7;
			break;
		
		case 1693751655:
			return 8;
			break;
		
		case 987469656:
			return 9;
			break;
		
		case 872704284:
			return 10;
			break;
		
		case 408825843:
			return 11;
			break;
		
		case 740289177:
			return 12;
			break;
		
		case -834353991:
			return 13;
			break;
		
		case 301304410:
			return 14;
			break;
		
		case 960812448:
			return 15;
			break;
		
		case 1284356689:
			return 16;
			break;
		
		case -208911803:
			return 17;
			break;
		
		case 1104234922:
			return 18;
			break;
		
		case 722226637:
			return 19;
			break;
		
		case -1267543371:
			return 20;
			break;
		
		case 822018448:
			return 21;
			break;
		
		case -1523428744:
			return 22;
			break;
	}
	return -1;
}

int func_550(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	iVar0 = func_68(8833, -1, 0);
	switch (iParam0)
	{
		case 1938952078:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 0) || Global_262145.f_27796)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -907477130:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 1) || Global_262145.f_27797)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -1987130134:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 2) || Global_262145.f_27798)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1747439474:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 3) || Global_262145.f_27799)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1118611807:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 4) || Global_262145.f_27800)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 409049982:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 5) || Global_262145.f_27801)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -1756021720:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 6) || Global_262145.f_27802)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2031587082:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 7) || Global_262145.f_27803)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1693751655:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 8) || Global_262145.f_27804)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 987469656:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 9) || Global_262145.f_27805)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 872704284:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 10) || Global_262145.f_27806)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 408825843:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 11) || Global_262145.f_27807)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 740289177:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 12) || Global_262145.f_27808)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -834353991:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 13) || Global_262145.f_27809)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 301304410:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 14) || Global_262145.f_27810)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 960812448:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 15) || Global_262145.f_27811)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1284356689:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 16) || Global_262145.f_27812)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -208911803:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 17) || Global_262145.f_27813)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1104234922:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 18) || Global_262145.f_27814)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 722226637:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 19) || Global_262145.f_27815)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -1267543371:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 20) || Global_262145.f_27816)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 822018448:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 21) || Global_262145.f_27817)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -1523428744:
			if (GAMEPLAY::IS_BIT_SET(iVar0, 22) || Global_262145.f_27818)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_551(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	if (iParam0 == -2030171296 || iParam0 == -604842630)
	{
		return 0;
	}
	if (func_555(iParam0) != -1)
	{
		if (func_552(func_554(iParam0)))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_552(int iParam0)
{
	return func_369(func_553(iParam0), -1, -1);
}

int func_553(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 24963;
			break;
		
		case 9:
			return 24964;
			break;
		
		case 10:
			return 24966;
			break;
		
		case 11:
			return 24965;
			break;
		
		case 12:
			return 24968;
			break;
		
		case 13:
			return 25101;
			break;
		
		case 14:
			return 24967;
			break;
		
		case 15:
			return 25105;
			break;
		
		case 16:
			return 25106;
			break;
		
		case 20:
			return 25102;
			break;
		
		case 21:
			return 25103;
			break;
		
		case 22:
			return 25104;
			break;
		
		case 102:
			return 24969;
			break;
		
		case 17:
			return 25107;
			break;
		
		case 18:
			return 25108;
			break;
		
		case 19:
			return 25109;
			break;
		
		case 103:
			return 24972;
			break;
		
		case 104:
			return 24973;
			break;
		
		case 105:
			return 24974;
			break;
		
		case 106:
			return 24975;
			break;
		
		case 107:
			return 24976;
			break;
		
		case 108:
			return 24978;
			break;
		
		case 109:
			return 24980;
			break;
		
		case 110:
			return 24981;
			break;
		
		case 111:
			return 24982;
			break;
		
		case 112:
			return 24983;
			break;
		
		case 113:
			return 24984;
			break;
		
		case 114:
			return 24985;
			break;
		
		case 115:
			return 24986;
			break;
		
		case 116:
			return 24987;
			break;
		
		case 117:
			return 24988;
			break;
		
		case 118:
			return 24989;
			break;
		
		case 119:
			return 24990;
			break;
		
		case 120:
			return 24991;
			break;
		
		case 0:
			return 24992;
			break;
		
		case 1:
			return 24993;
			break;
		
		case 2:
			return 24994;
			break;
		
		case 3:
			return 24995;
			break;
		
		case 4:
			return 24996;
			break;
		
		case 5:
			return 24997;
			break;
		
		case 6:
			return 24998;
			break;
		
		case 7:
			return 24999;
			break;
		
		case 127:
			return 25117;
			break;
		
		case 128:
			return 25118;
			break;
		
		case 23:
			return 25119;
			break;
		
		case 139:
			return 25125;
			break;
		
		case 140:
			return 25127;
			break;
		
		case 141:
			return 25128;
			break;
		
		case 27:
			return 25129;
			break;
		
		case 160:
			return 25136;
			break;
		
		case 161:
			return 25139;
			break;
		
		case 162:
			return 25140;
			break;
		
		case 31:
			return 25141;
			break;
		
		case 181:
			return 25148;
			break;
		
		case 182:
			return 25151;
			break;
		
		case 183:
			return 25152;
			break;
		
		case 35:
			return 25153;
			break;
		
		case 193:
			return 25160;
			break;
		
		case 194:
			return 25161;
			break;
		
		case 39:
			return 25162;
			break;
		
		case 206:
			return 25168;
			break;
		
		case 207:
			return 25169;
			break;
		
		case 208:
			return 25170;
			break;
		
		case 209:
			return 25173;
			break;
		
		case 210:
			return 25174;
			break;
		
		case 43:
			return 25175;
			break;
		
		case 234:
			return 25179;
			break;
		
		case 235:
			return 25183;
			break;
		
		case 236:
			return 25184;
			break;
		
		case 47:
			return 25185;
			break;
		
		case 248:
			return 25188;
			break;
		
		case 249:
			return 25191;
			break;
		
		case 250:
			return 25192;
			break;
		
		case 51:
			return 25193;
			break;
		
		case 259:
			return 25198;
			break;
		
		case 260:
			return 25202;
			break;
		
		case 261:
			return 25203;
			break;
		
		case 55:
			return 25204;
			break;
		
		case 274:
			return 25209;
			break;
		
		case 275:
			return 25212;
			break;
		
		case 276:
			return 25213;
			break;
		
		case 59:
			return 25214;
			break;
		
		case 284:
			return 25217;
			break;
		
		case 285:
			return 25221;
			break;
		
		case 286:
			return 25222;
			break;
		
		case 63:
			return 25223;
			break;
		
		case 307:
			return 25228;
			break;
		
		case 308:
			return 24979;
			break;
		
		case 309:
			return 25229;
			break;
		
		case 310:
			return 25111;
			break;
		
		case 67:
			return 25230;
			break;
		
		case 68:
			return 25112;
			break;
		
		case 72:
			return 25231;
			break;
		
		case 73:
			return 25233;
			break;
		
		case 74:
			return 25234;
			break;
		
		case 75:
			return 25235;
			break;
		
		case 76:
			return 25236;
			break;
		
		case 77:
			return 25394;
			break;
		
		case 121:
			return 25395;
			break;
		
		case 122:
			return 25396;
			break;
		
		case 123:
			return 25397;
			break;
		
		case 124:
			return 25398;
			break;
		
		case 125:
			return 25399;
			break;
		
		case 126:
			return 25400;
			break;
	}
	switch (iParam0)
	{
		case 78:
			return 25244;
			break;
		
		case 79:
			return 25245;
			break;
		
		case 80:
			return 25246;
			break;
		
		case 81:
			return 25247;
			break;
		
		case 82:
			return 25248;
			break;
		
		case 83:
			return 25249;
			break;
		
		case 84:
			return 25250;
			break;
		
		case 85:
			return 25000;
			break;
		
		case 86:
			return 25251;
			break;
		
		case 87:
			return 25252;
			break;
		
		case 88:
			return 25253;
			break;
		
		case 89:
			return 25254;
			break;
		
		case 90:
			return 25255;
			break;
		
		case 91:
			return 25256;
			break;
		
		case 92:
			return 25257;
			break;
		
		case 93:
			return 25258;
			break;
		
		case 94:
			return 25259;
			break;
		
		case 95:
			return 25260;
			break;
		
		case 96:
			return 25261;
			break;
		
		case 97:
			return 25262;
			break;
		
		case 98:
			return 25263;
			break;
		
		case 99:
			return 25264;
			break;
		
		case 100:
			return 25225;
			break;
		
		case 101:
			return 25178;
			break;
		
		case 311:
			return 25265;
			break;
		
		case 312:
			return 25266;
			break;
		
		case 313:
			return 25267;
			break;
		
		case 314:
			return 25268;
			break;
		
		case 315:
			return 24977;
			break;
		
		case 316:
			return 25269;
			break;
		
		case 317:
			return 25270;
			break;
		
		case 318:
			return 25271;
			break;
		
		case 319:
			return 25272;
			break;
		
		case 320:
			return 25273;
			break;
		
		case 321:
			return 25274;
			break;
		
		case 322:
			return 25275;
			break;
		
		case 323:
			return 25276;
			break;
		
		case 324:
			return 25277;
			break;
		
		case 325:
			return 25278;
			break;
		
		case 326:
			return 25279;
			break;
		
		case 327:
			return 25280;
			break;
		
		case 328:
			return 25281;
			break;
		
		case 329:
			return 25282;
			break;
		
		case 330:
			return 25283;
			break;
		
		case 331:
			return 25284;
			break;
		
		case 332:
			return 25285;
			break;
		
		case 333:
			return 25286;
			break;
		
		case 334:
			return 25287;
			break;
		
		case 335:
			return 25288;
			break;
		
		case 336:
			return 25289;
			break;
		
		case 337:
			return 25290;
			break;
		
		case 338:
			return 25291;
			break;
		
		case 339:
			return 25292;
			break;
		
		case 340:
			return 25293;
			break;
		
		case 341:
			return 25294;
			break;
		
		case 342:
			return 25295;
			break;
		
		case 343:
			return 25296;
			break;
		
		case 344:
			return 25297;
			break;
		
		case 345:
			return 25298;
			break;
		
		case 346:
			return 25299;
			break;
		
		case 347:
			return 25300;
			break;
		
		case 348:
			return 25301;
			break;
		
		case 349:
			return 25302;
			break;
		
		case 350:
			return 25303;
			break;
		
		case 351:
			return 25304;
			break;
		
		case 352:
			return 25305;
			break;
		
		case 353:
			return 25306;
			break;
		
		case 354:
			return 25307;
			break;
		
		case 355:
			return 25308;
			break;
		
		case 356:
			return 25309;
			break;
		
		case 357:
			return 25310;
			break;
		
		case 358:
			return 25311;
			break;
		
		case 359:
			return 25312;
			break;
		
		case 360:
			return 25313;
			break;
		
		case 361:
			return 25314;
			break;
		
		case 362:
			return 25315;
			break;
		
		case 363:
			return 25316;
			break;
		
		case 364:
			return 25317;
			break;
		
		case 365:
			return 25318;
			break;
		
		case 366:
			return 25319;
			break;
		
		case 367:
			return 25320;
			break;
		
		case 368:
			return 25321;
			break;
		
		case 369:
			return 25322;
			break;
		
		case 370:
			return 25323;
			break;
		
		case 371:
			return 25324;
			break;
		
		case 372:
			return 25325;
			break;
		
		case 373:
			return 25326;
			break;
		
		case 374:
			return 25327;
			break;
		
		case 375:
			return 25328;
			break;
		
		case 376:
			return 25329;
			break;
		
		case 377:
			return 25330;
			break;
		
		case 378:
			return 25331;
			break;
		
		case 379:
			return 25332;
			break;
		
		case 380:
			return 25333;
			break;
		
		case 381:
			return 25334;
			break;
		
		case 382:
			return 25335;
			break;
		
		case 383:
			return 25336;
			break;
		
		case 384:
			return 25337;
			break;
		
		case 385:
			return 25338;
			break;
		
		case 386:
			return 25339;
			break;
		
		case 387:
			return 25340;
			break;
		
		case 388:
			return 25341;
			break;
		
		case 389:
			return 25342;
			break;
		
		case 390:
			return 25343;
			break;
		
		case 391:
			return 25344;
			break;
		
		case 392:
			return 25345;
			break;
		
		case 393:
			return 25346;
			break;
		
		case 394:
			return 25347;
			break;
		
		case 395:
			return 24970;
			break;
		
		case 396:
			return 25348;
			break;
		
		case 397:
			return 25349;
			break;
		
		case 398:
			return 25350;
			break;
		
		case 399:
			return 25351;
			break;
		
		case 400:
			return 25352;
			break;
		
		case 401:
			return 25353;
			break;
		
		case 402:
			return 25354;
			break;
		
		case 403:
			return 25355;
			break;
		
		case 404:
			return 25356;
			break;
		
		case 405:
			return 25357;
			break;
		
		case 406:
			return 25358;
			break;
		
		case 407:
			return 25359;
			break;
		
		case 408:
			return 25360;
			break;
		
		case 409:
			return 25361;
			break;
		
		case 410:
			return 25362;
			break;
		
		case 411:
			return 25363;
			break;
		
		case 412:
			return 25364;
			break;
		
		case 413:
			return 25365;
			break;
		
		case 414:
			return 25366;
			break;
		
		case 415:
			return 25367;
			break;
		
		case 416:
			return 25368;
			break;
		
		case 417:
			return 25369;
			break;
		
		case 418:
			return 25370;
			break;
		
		case 419:
			return 25371;
			break;
		
		case 420:
			return 25373;
			break;
		
		case 421:
			return 25374;
			break;
		
		case 422:
			return 25375;
			break;
		
		case 423:
			return 25377;
			break;
		
		case 424:
			return 25378;
			break;
		
		case 425:
			return 25379;
			break;
		
		case 426:
			return 25382;
			break;
		
		case 427:
			return 25383;
			break;
		
		case 428:
			return 25386;
			break;
		
		case 429:
			return 25390;
			break;
		
		case 430:
			return 25391;
			break;
		
		case 431:
			return 25392;
			break;
		
		case 432:
			return 25393;
			break;
	}
	switch (iParam0)
	{
		case 24:
			return 24971;
			break;
		
		case 25:
			return 25113;
			break;
		
		case 26:
			return 25114;
			break;
		
		case 28:
			return 25115;
			break;
		
		case 29:
			return 25116;
			break;
		
		case 30:
			return 25120;
			break;
		
		case 32:
			return 25121;
			break;
		
		case 33:
			return 25122;
			break;
		
		case 34:
			return 25123;
			break;
		
		case 36:
			return 25124;
			break;
		
		case 37:
			return 25126;
			break;
		
		case 38:
			return 25130;
			break;
		
		case 40:
			return 25131;
			break;
		
		case 41:
			return 25132;
			break;
		
		case 42:
			return 25133;
			break;
		
		case 44:
			return 25134;
			break;
		
		case 45:
			return 25137;
			break;
		
		case 46:
			return 25138;
			break;
		
		case 48:
			return 25142;
			break;
		
		case 49:
			return 25143;
			break;
		
		case 50:
			return 25144;
			break;
		
		case 52:
			return 25145;
			break;
		
		case 53:
			return 25146;
			break;
		
		case 54:
			return 25147;
			break;
		
		case 56:
			return 25149;
			break;
		
		case 57:
			return 25150;
			break;
		
		case 58:
			return 25154;
			break;
		
		case 60:
			return 25155;
			break;
		
		case 61:
			return 25156;
			break;
		
		case 62:
			return 25157;
			break;
		
		case 64:
			return 25158;
			break;
		
		case 65:
			return 25159;
			break;
		
		case 66:
			return 25163;
			break;
		
		case 69:
			return 25164;
			break;
		
		case 70:
			return 25165;
			break;
		
		case 71:
			return 25166;
			break;
		
		case 129:
			return 25167;
			break;
		
		case 130:
			return 25171;
			break;
		
		case 131:
			return 25172;
			break;
		
		case 132:
			return 25176;
			break;
		
		case 133:
			return 25177;
			break;
		
		case 134:
			return 25181;
			break;
		
		case 135:
			return 25182;
			break;
		
		case 136:
			return 25186;
			break;
		
		case 137:
			return 25187;
			break;
		
		case 138:
			return 25189;
			break;
		
		case 142:
			return 25190;
			break;
		
		case 143:
			return 25194;
			break;
		
		case 144:
			return 25195;
			break;
		
		case 145:
			return 25196;
			break;
		
		case 146:
			return 25197;
			break;
		
		case 147:
			return 25199;
			break;
		
		case 148:
			return 25200;
			break;
		
		case 149:
			return 25201;
			break;
		
		case 150:
			return 25205;
			break;
		
		case 151:
			return 25206;
			break;
		
		case 152:
			return 25207;
			break;
		
		case 153:
			return 25208;
			break;
		
		case 154:
			return 25210;
			break;
		
		case 155:
			return 25211;
			break;
		
		case 156:
			return 25215;
			break;
		
		case 157:
			return 25216;
			break;
		
		case 158:
			return 25218;
			break;
		
		case 159:
			return 25219;
			break;
		
		case 163:
			return 25220;
			break;
		
		case 164:
			return 25224;
			break;
		
		case 165:
			return 25226;
			break;
		
		case 166:
			return 25227;
			break;
		
		case 167:
			return 25232;
			break;
		
		case 168:
			return 25372;
			break;
		
		case 169:
			return 25376;
			break;
		
		case 170:
			return 25380;
			break;
		
		case 171:
			return 25381;
			break;
		
		case 172:
			return 25384;
			break;
		
		case 173:
			return 25385;
			break;
		
		case 174:
			return 25387;
			break;
		
		case 175:
			return 25388;
			break;
		
		case 176:
			return 25389;
			break;
		
		case 177:
			return 25407;
			break;
		
		case 178:
			return 25408;
			break;
		
		case 179:
			return 25409;
			break;
		
		case 180:
			return 25410;
			break;
		
		case 184:
			return 25411;
			break;
		
		case 185:
			return 25412;
			break;
		
		case 186:
			return 25413;
			break;
		
		case 187:
			return 25414;
			break;
		
		case 188:
			return 25415;
			break;
		
		case 189:
			return 25416;
			break;
		
		case 190:
			return 25417;
			break;
		
		case 191:
			return 25418;
			break;
		
		case 192:
			return 25419;
			break;
		
		case 195:
			return 25420;
			break;
		
		case 196:
			return 25421;
			break;
		
		case 197:
			return 25422;
			break;
		
		case 198:
			return 25423;
			break;
		
		case 199:
			return 25424;
			break;
		
		case 200:
			return 25425;
			break;
		
		case 201:
			return 25426;
			break;
		
		case 202:
			return 25427;
			break;
		
		case 203:
			return 25428;
			break;
		
		case 204:
			return 25429;
			break;
		
		case 205:
			return 25430;
			break;
		
		case 211:
			return 25431;
			break;
		
		case 212:
			return 25432;
			break;
		
		case 213:
			return 25433;
			break;
		
		case 214:
			return 25434;
			break;
		
		case 215:
			return 25435;
			break;
		
		case 216:
			return 25436;
			break;
		
		case 217:
			return 25437;
			break;
		
		case 218:
			return 25438;
			break;
		
		case 219:
			return 25439;
			break;
		
		case 220:
			return 25440;
			break;
		
		case 221:
			return 25441;
			break;
		
		case 222:
			return 25442;
			break;
		
		case 223:
			return 25443;
			break;
		
		case 224:
			return 25444;
			break;
		
		case 225:
			return 25445;
			break;
		
		case 226:
			return 25446;
			break;
		
		case 227:
			return 25447;
			break;
		
		case 228:
			return 25448;
			break;
		
		case 229:
			return 25449;
			break;
		
		case 230:
			return 25450;
			break;
		
		case 231:
			return 25451;
			break;
		
		case 232:
			return 25452;
			break;
		
		case 233:
			return 25453;
			break;
		
		case 237:
			return 25454;
			break;
		
		case 238:
			return 25455;
			break;
		
		case 239:
			return 25456;
			break;
		
		case 240:
			return 25457;
			break;
		
		case 241:
			return 25458;
			break;
		
		case 242:
			return 25459;
			break;
		
		case 243:
			return 25460;
			break;
		
		case 244:
			return 25461;
			break;
		
		case 245:
			return 25462;
			break;
		
		case 246:
			return 25463;
			break;
		
		case 247:
			return 25464;
			break;
		
		case 251:
			return 25465;
			break;
		
		case 252:
			return 25466;
			break;
		
		case 253:
			return 25467;
			break;
		
		case 254:
			return 25468;
			break;
		
		case 255:
			return 25469;
			break;
		
		case 256:
			return 25470;
			break;
		
		case 257:
			return 25471;
			break;
		
		case 258:
			return 25472;
			break;
		
		case 262:
			return 25473;
			break;
		
		case 263:
			return 25474;
			break;
		
		case 264:
			return 25475;
			break;
		
		case 265:
			return 25476;
			break;
		
		case 266:
			return 25477;
			break;
		
		case 267:
			return 25478;
			break;
		
		case 268:
			return 25479;
			break;
		
		case 269:
			return 25480;
			break;
		
		case 270:
			return 25481;
			break;
		
		case 271:
			return 25482;
			break;
		
		case 272:
			return 25483;
			break;
		
		case 273:
			return 25484;
			break;
		
		case 277:
			return 25485;
			break;
		
		case 278:
			return 25486;
			break;
		
		case 279:
			return 25487;
			break;
		
		case 280:
			return 25488;
			break;
		
		case 281:
			return 25489;
			break;
		
		case 282:
			return 25490;
			break;
		
		case 283:
			return 25491;
			break;
		
		case 287:
			return 25492;
			break;
		
		case 288:
			return 25493;
			break;
		
		case 289:
			return 25494;
			break;
		
		case 290:
			return 25495;
			break;
		
		case 291:
			return 25496;
			break;
		
		case 292:
			return 25497;
			break;
		
		case 293:
			return 25498;
			break;
		
		case 294:
			return 25499;
			break;
		
		case 295:
			return 25500;
			break;
		
		case 296:
			return 25501;
			break;
		
		case 297:
			return 25502;
			break;
		
		case 298:
			return 25503;
			break;
		
		case 299:
			return 25504;
			break;
		
		case 300:
			return 25505;
			break;
		
		case 301:
			return 25506;
			break;
		
		case 302:
			return 25507;
			break;
		
		case 303:
			return 25508;
			break;
		
		case 304:
			return 25509;
			break;
		
		case 305:
			return 25510;
			break;
		
		case 306:
			return 25511;
			break;
	}
	return 0;
}

int func_554(int iParam0)
{
	switch (iParam0)
	{
		case -801550069:
			return 8;
			break;
		
		case 679453769:
			return 9;
			break;
		
		case 1909700336:
			return 10;
			break;
		
		case 2139203625:
			return 11;
			break;
		
		case -1890996696:
			return 12;
			break;
		
		case 2038858402:
			return 13;
			break;
		
		case 540101442:
			return 14;
			break;
		
		case -1106120762:
			return 15;
			break;
		
		case -1478704292:
			return 16;
			break;
		
		case -1146969353:
			return 20;
			break;
		
		case 1542143200:
			return 21;
			break;
		
		case -579747861:
			return 22;
			break;
		
		case 444994115:
			return 17;
			break;
		
		case 1637620610:
			return 18;
			break;
		
		case -755532233:
			return 19;
			break;
		
		case -2096690334:
			return 102;
			break;
		
		case -589178377:
			return 103;
			break;
		
		case 75131841:
			return 104;
			break;
		
		case 729783779:
			return 105;
			break;
		
		case 80636076:
			return 106;
			break;
		
		case 931280609:
			return 107;
			break;
		
		case 741090084:
			return 108;
			break;
	}
	return -1;
}

int func_555(int iParam0)
{
	switch (iParam0)
	{
		case -801550069:
			return 0;
		
		case 679453769:
			return 1;
		
		case 1909700336:
			return 2;
		
		case 2139203625:
			return 3;
		
		case -1890996696:
			return 4;
		
		case 2038858402:
			return 5;
		
		case -1146969353:
			return 6;
		
		case 1542143200:
			return 7;
		
		case -579747861:
			return 8;
		
		case 444994115:
			return 9;
		
		case 1637620610:
			return 10;
		
		case -755532233:
			return 11;
		
		case 540101442:
			return 12;
		
		case -1106120762:
			return 13;
		
		case -1478704292:
			return 14;
		
		case -589178377:
			return 15;
		
		case 75131841:
			return 16;
		
		case 729783779:
			return 17;
		
		case 80636076:
			return 18;
		
		case -2096690334:
			return 19;
		
		case 931280609:
			return 20;
		
		case 741090084:
			return 21;
		
		default:
	}
	return -1;
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case 1945374990:
			if (func_68(7230, -1, 0) >= func_560(iParam0) || Global_262145.f_24161)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1653666139:
			if (func_68(7230, -1, 0) >= func_560(iParam0) || Global_262145.f_24162)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2069146067:
			if (func_557(22050, -1, -1) >= func_560(iParam0) || Global_262145.f_24163)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 345756458:
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_281.f_7, 1) || Global_262145.f_24165)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -420911112:
			if (func_68(7228, -1, 0) >= func_560(iParam0) || Global_262145.f_24166)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -307958377:
			if (func_68(7228, -1, 0) >= func_560(iParam0) || Global_262145.f_24167)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -638562243:
			if (func_369(22123, -1, -1) || Global_262145.f_24164)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_557(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	iVar0 = 0;
	iVar1 = func_559(iParam0, iParam1);
	uVar2 = func_558(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_558(int iParam0)
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

int func_559(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_35();
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

int func_560(int iParam0)
{
	switch (iParam0)
	{
		case 1945374990:
			return Global_262145.f_24168;
			break;
		
		case 1653666139:
			return Global_262145.f_24169;
			break;
		
		case 2069146067:
			return Global_262145.f_24170;
			break;
		
		case -420911112:
			return Global_262145.f_24171;
			break;
		
		case -307958377:
			return Global_262145.f_24172;
			break;
	}
	return 0;
}

int func_561(int iParam0)
{
	switch (iParam0)
	{
		case 1945374990:
			return 0;
			break;
		
		case 1653666139:
			return 1;
			break;
		
		case 2069146067:
			return 2;
			break;
		
		case -638562243:
			return 3;
			break;
		
		case 345756458:
			return 4;
			break;
		
		case -420911112:
			return 5;
			break;
		
		case -307958377:
			return 6;
			break;
	}
	return -1;
}

int func_562(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	iVar0 = func_68(5661, -1, 0);
	switch (iParam0)
	{
		case 1483171323:
			return GAMEPLAY::IS_BIT_SET(iVar0, func_563(1));
		
		case 1181327175:
			return GAMEPLAY::IS_BIT_SET(iVar0, func_563(2));
		
		case -1693015116:
			return GAMEPLAY::IS_BIT_SET(iVar0, func_563(6));
		
		case 886810209:
			return GAMEPLAY::IS_BIT_SET(iVar0, func_563(7));
		
		case -692292317:
			return GAMEPLAY::IS_BIT_SET(iVar0, func_563(10));
		
		case -212993243:
			return GAMEPLAY::IS_BIT_SET(iVar0, func_563(11));
		
		case -1435527158:
			return GAMEPLAY::IS_BIT_SET(iVar0, func_563(12));
		
		case 447548909:
			return GAMEPLAY::IS_BIT_SET(iVar0, func_563(13));
		
		case 1489874736:
			return GAMEPLAY::IS_BIT_SET(iVar0, func_563(15));
		
		default:
	}
	return 0;
}

int func_563(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		case 13:
			return 13;
		
		case 14:
			return 14;
		
		case 15:
			return 15;
		
		default:
	}
	return -1;
}

int func_564(int iParam0)
{
	switch (iParam0)
	{
		case 1483171323:
			return 0;
			break;
		
		case 1181327175:
			return 1;
			break;
		
		case -1693015116:
			return 2;
			break;
		
		case 886810209:
			return 3;
			break;
		
		case -692292317:
			return 4;
			break;
		
		case -212993243:
			return 5;
			break;
		
		case -1435527158:
			return 6;
			break;
		
		case 447548909:
			return 7;
			break;
		
		case 1489874736:
			return 8;
			break;
	}
	return -1;
}

int func_565(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	iVar0 = func_567(iParam0);
	iVar1 = func_566();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_566()
{
	return func_68(6113, -1, 0);
}

int func_567(int iParam0)
{
	switch (iParam0)
	{
		case -1763555241:
			return Global_262145.f_22210;
		
		case -975345305:
			return Global_262145.f_22211;
		
		case -1523619738:
			return Global_262145.f_22212;
		
		case -1984275979:
			return Global_262145.f_22213;
		
		case -1700874274:
			return Global_262145.f_22214;
		
		case 1565978651:
			return Global_262145.f_22215;
		
		case 1043222410:
			return Global_262145.f_22216;
		
		case -32878452:
			return Global_262145.f_22217;
		
		case -1007528109:
			return Global_262145.f_22218;
		
		case -749299473:
			return Global_262145.f_22219;
		
		case -1386191424:
			return Global_262145.f_22220;
		
		case -392675425:
			return Global_262145.f_22221;
		
		case 1036591958:
			return Global_262145.f_22222;
		
		case -42959138:
			return Global_262145.f_22223;
		
		default:
	}
	return 0;
}

bool func_568(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(func_68(5463, -1, 0), iParam0);
}

int func_569(int iParam0)
{
	switch (iParam0)
	{
		case 1897744184:
			return 0;
		
		case -32236122:
			return 1;
		
		case -1881846085:
			return 2;
		
		case 562680400:
			return 3;
		
		case -1210451983:
			return 5;
		
		case 884483972:
			return 7;
		
		default:
	}
	return 3;
}

int func_570(int iParam0)
{
	switch (iParam0)
	{
		case 1897744184:
			return 0;
			break;
		
		case -32236122:
			return 1;
			break;
		
		case -1881846085:
			return 2;
			break;
		
		case 562680400:
			return 3;
			break;
		
		case -1210451983:
			return 4;
			break;
		
		case 884483972:
			return 5;
			break;
	}
	return -1;
}

int func_571(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		
		case 177:
			iVar0 = 12;
			break;
		
		case 185:
			iVar0 = 14;
			break;
		
		case 174:
			iVar0 = 9;
			break;
		
		case 171:
			iVar0 = 20;
			break;
		
		case 172:
			iVar0 = 7;
			break;
		
		case 173:
			iVar0 = 8;
			break;
		
		case 175:
			iVar0 = 10;
			break;
		
		case 176:
			iVar0 = 11;
			break;
		
		case 178:
			iVar0 = 5;
			break;
		
		case 179:
			iVar0 = 6;
			break;
		
		case 183:
			iVar0 = 21;
			break;
		
		case 180:
			iVar0 = 18;
			break;
		
		case 181:
			iVar0 = 22;
			break;
		
		case 182:
			iVar0 = 19;
			break;
		
		case 184:
			iVar0 = 13;
			break;
		
		case 186:
			iVar0 = 15;
			break;
		
		case 188:
			iVar0 = 17;
			break;
	}
	return func_572(iVar0);
}

bool func_572(int iParam0)
{
	if (func_578())
	{
		return 0;
	}
	iVar0 = func_574(iParam0);
	iVar1 = iParam0;
	return GAMEPLAY::IS_BIT_SET(iVar0, func_573(iVar1));
}

int func_573(int iParam0)
{
	return (iParam0 % 32);
}

int func_574(var uParam0)
{
	iVar0 = func_68(func_575(uParam0), -1, 0);
	return iVar0;
}

int func_575(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_577(iVar0);
	if ((func_347() == 0 || func_576() == 0) || (func_347() == 999 && func_576() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 738;
				break;
			
			case 1:
				return 739;
				break;
		}
	}
	return 11511;
}

int func_576()
{
	return Global_30769;
}

int func_577(int iParam0)
{
	return (iParam0 / 32);
}

bool func_578()
{
	return Global_1312856;
}

int func_579(int iParam0)
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_580(int iParam0)
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

bool func_581(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(func_68(5326, -1, 0), iParam0);
}

int func_582(int iParam0)
{
	switch (iParam0)
	{
		case -827162039:
			return 0;
		
		case -312295511:
			return 0;
		
		case -1912017790:
			return 1;
		
		case -1590337689:
			return 2;
		
		case -1649536104:
			return 3;
		
		case 989294410:
			return 4;
		
		case 1180875963:
			return 5;
		
		case 682434785:
			return 6;
		
		case 941494461:
			return 7;
		
		default:
	}
	return 0;
}

int func_583(var uParam0)
{
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1180875963:
			return 0;
			break;
		
		case 682434785:
			return 1;
			break;
		
		case -1912017790:
			return 2;
			break;
		
		case -1649536104:
			return 3;
			break;
		
		case 989294410:
			return 4;
			break;
		
		case -827162039:
			return 5;
			break;
		
		case -312295511:
			return 5;
			break;
		
		case 941494461:
			return 6;
			break;
		
		case -1590337689:
			return 7;
			break;
	}
	return -1;
}

int func_584(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

int func_585()
{
	if (GAMEPLAY::IS_BIT_SET(Global_25, 5))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_25, 1) || GAMEPLAY::IS_BIT_SET(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(1571103992, &iVar0, -1))
	{
		if (GAMEPLAY::IS_BIT_SET(iVar0, 5))
		{
			if (GAMEPLAY::IS_BIT_SET(iVar0, 1) || GAMEPLAY::IS_BIT_SET(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_150473.f_3)
		{
			iVar2 = 1035124638;
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (GAMEPLAY::IS_BIT_SET(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
	{
		iVar3 = GAMEPLAY::GET_PROFILE_SETTING(866);
		if (GAMEPLAY::IS_BIT_SET(iVar3, 1) || GAMEPLAY::IS_BIT_SET(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(1571103992, &uVar4, -1);
				GAMEPLAY::SET_BIT(&uVar4, 1);
				GAMEPLAY::SET_BIT(&uVar4, 3);
				GAMEPLAY::SET_BIT(&uVar4, 5);
				GAMEPLAY::SET_BIT(&Global_25, 1);
				GAMEPLAY::SET_BIT(&Global_25, 3);
				GAMEPLAY::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(1571103992, uVar4, 1);
				if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
				{
					uVar4 = GAMEPLAY::GET_PROFILE_SETTING(866);
					GAMEPLAY::SET_BIT(&uVar4, 1);
					GAMEPLAY::SET_BIT(&uVar4, 3);
					STATS::_0xDAC073C7901F9E15(uVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_586()
{
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(1571103992, &uVar0, -1);
				GAMEPLAY::SET_BIT(&uVar0, 2);
				GAMEPLAY::SET_BIT(&uVar0, 4);
				GAMEPLAY::SET_BIT(&uVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(1571103992, uVar0, 1);
				if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
				{
					uVar0 = GAMEPLAY::GET_PROFILE_SETTING(866);
					GAMEPLAY::SET_BIT(&uVar0, 0);
					STATS::_0xDAC073C7901F9E15(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return 1;
	}
	else if (Global_150472 == 3)
	{
		return 0;
	}
	if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
	{
		if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_587(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 758895617;
		
		case 1:
			return 1545842587;
		
		case 2:
			return 1051415893;
		
		case 3:
			return -1311154784;
		
		case 4:
			return -1291952903;
		
		case 5:
			return -1216765807;
		
		case 6:
			return -433375717;
		
		case 7:
			return 330661258;
		
		case 10:
			return -1214505995;
		
		case 11:
			return -2122757008;
		
		case 12:
			return -644710429;
		
		case 13:
			return 970356638;
		
		case 14:
			return 621481054;
		
		case 15:
			return 744705981;
		
		case 16:
			return -1660661558;
		
		case 17:
			return 782665360;
		
		case 18:
			return 1981688531;
		
		case 19:
			return -50547061;
		
		case 20:
			return 788747387;
		
		case 21:
			return 321739290;
		
		case 22:
			return -823509173;
		
		case 24:
			return -1043459709;
		
		case 25:
			return 861409633;
		
		case 27:
			return 400514754;
		
		case 29:
			return 290013743;
		
		case 30:
			return -1030275036;
		
		case 31:
			return 771711535;
		
		case 32:
			return -282946103;
		
		case 258:
			return -2100640717;
		
		case 33:
			return 1131912276;
		
		case 34:
			return -186537451;
		
		case 35:
			return 1127861609;
		
		case 36:
			return -1233807380;
		
		case 37:
			return -400295096;
		
		case 38:
			return 448402357;
		
		case 39:
			return -746882698;
		
		case 40:
			return -1122289213;
		
		case 41:
			return -1800170043;
		
		case 42:
			return -825837129;
		
		case 43:
			return -1177863319;
		
		case 44:
			return 418536135;
		
		case 45:
			return 384071873;
		
		case 46:
			return 338562499;
		
		case 47:
			return 1032823388;
		
		case 48:
			return -1045541610;
		
		case 49:
			return -1041692462;
		
		case 50:
			return -1995326987;
		
		case 51:
			return 1126868326;
		
		case 52:
			return -1189015600;
		
		case 53:
			return 1909141499;
		
		case 54:
			return -1130810103;
		
		case 55:
			return 1123216662;
		
		case 56:
			return -5153954;
		
		case 57:
			return 142944341;
		
		case 58:
			return 2006918058;
		
		case 59:
			return 2136773105;
		
		case 60:
			return -391594584;
		
		case 61:
			return -511601230;
		
		case 62:
			return -114291515;
		
		case 63:
			return 1672195559;
		
		case 64:
			return -893578776;
		
		case 65:
			return -140902153;
		
		case 66:
			return -2128233223;
		
		case 67:
			return -909201658;
		
		case 68:
			return 788045382;
		
		case 69:
			return 55628203;
		
		case 70:
			return -1696146015;
		
		case 71:
			return 2072687711;
		
		case 72:
			return 108773431;
		
		case 73:
			return -1461482751;
		
		case 74:
			return -1934452204;
		
		case 75:
			return 1737773231;
		
		case 76:
			return -2098947590;
		
		case 77:
			return -1622444098;
		
		case 78:
			return 837858166;
		
		case 79:
			return -1746576111;
		
		case 80:
			return -1673356438;
		
		case 81:
			return -2130482718;
		
		case 82:
			return 1283517198;
		
		case 83:
			return -713569950;
		
		case 84:
			return -2072933068;
		
		case 85:
			return -120287622;
		
		case 86:
			return 904750859;
		
		case 87:
			return -1098802077;
		
		case 88:
			return -1961627517;
		
		case 89:
			return -16948145;
		
		case 90:
			return -1670998136;
		
		case 91:
			return -89291282;
		
		case 92:
			return 301427732;
		
		case 93:
			return -1193103848;
		
		case 94:
			return -891462355;
		
		case 95:
			return -566387422;
		
		case 96:
			return 544021352;
		
		case 97:
			return 37348240;
		
		case 98:
			return 11251904;
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return -349601129;
		
		case 100:
			return 92612664;
		
		case 101:
			return 1488164764;
		
		case 102:
			return 231083307;
		
		case 103:
			return -1435919434;
		
		case 104:
			return -1661854193;
		
		case 105:
			return -1207771834;
		
		case 106:
			return -599568815;
		
		case 107:
			return -1453280962;
		
		case 108:
			return 989381445;
		
		case 109:
			return 117401876;
		
		case 111:
			return -1297672541;
		
		case 114:
			return -142942670;
		
		case 112:
			return 408192225;
		
		case 115:
			return -1403128555;
		
		case 116:
			return 486987393;
		
		case 110:
			return 767087018;
		
		case 113:
			return 1341619767;
		
		case 117:
			return 108773431;
		
		case 118:
			return -1041692462;
		
		case 119:
			return 1545842587;
		
		case 120:
			return -1622444098;
		
		case 121:
			return 1836027715;
		
		case 128:
			return -1809822327;
		
		case 129:
			return -1903012613;
		
		case 130:
			return 1069929536;
		
		case 131:
			return -789894171;
		
		case 132:
			return -1775728740;
		
		case 133:
			return -1289722222;
		
		case 134:
			return 886934177;
		
		case 135:
			return -310465116;
		
		case 136:
			return -1883869285;
		
		case 137:
			return -1651067813;
		
		case 138:
			return 1645267888;
		
		case 139:
			return -667151410;
		
		case 140:
			return -1477580979;
		
		case 141:
			return 1723137093;
		
		case 142:
			return 1777363799;
		
		case 122:
			return 80636076;
		
		case 123:
			return -591610296;
		
		case 124:
			return 499169875;
		
		case 125:
			return -377465520;
		
		case 126:
			return 1349725314;
		
		case 127:
			return 873639469;
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return -1205801634;
		
		case 144:
			return 1373123368;
		
		case 145:
			return 75131841;
		
		case 146:
			return 841808271;
		
		case 147:
			return -431692672;
		
		case 148:
			return -1237253773;
		
		case 149:
			return 1078682497;
		
		case 150:
			return 1507916787;
		
		case 151:
			return -14495224;
		
		case 152:
			return 699456151;
		
		case 153:
			return 65402552;
		
		case 154:
			return -1269889662;
		
		case 155:
			return -2045594037;
		
		case 156:
			return -1150599089;
		
		case 157:
			return -304802106;
		
		case 158:
			return 736902334;
		
		case 159:
			return -1008861746;
		
		case 160:
			return -845961253;
		
		case 161:
			return 743478836;
		
		case 162:
			return 165154707;
		
		case 163:
			return 1824333165;
		
		case 164:
			return -339587598;
		
		case 165:
			return 1011753235;
		
		case 166:
			return 1011753235;
		
		case 167:
			return -159126838;
		
		case 168:
			return 1265391242;
		
		case 169:
			return -1089039904;
		
		case 170:
			return 92612664;
		
		case 187:
			return -1600252419;
		
		case 177:
			return 970385471;
		
		case 185:
			return -82626025;
		
		case 174:
			return 1753414259;
		
		case 171:
			return 444171386;
		
		case 172:
			return 941800958;
		
		case 173:
			return 509498602;
		
		case 175:
			return 296357396;
		
		case 176:
			return -2107990196;
		
		case 178:
			return -1860900134;
		
		case 179:
			return 2071877360;
		
		case 183:
			return -2052737935;
		
		case 180:
			return -1372848492;
		
		case 181:
			return 410882957;
		
		case 182:
			return 640818791;
		
		case 184:
			return -2007026063;
		
		case 186:
			return -2096818938;
		
		case 188:
			return 1077420264;
		
		case 189:
			return -1543762099;
		
		case 190:
			return -624529134;
		
		case 191:
			return 1269098716;
		
		case 192:
			return -2064372143;
		
		case 193:
			return -634879114;
		
		case 194:
			return 1348744438;
		
		case 195:
			return 1162065741;
		
		case 196:
			return -1255452397;
		
		case 197:
			return 1221512915;
		
		case 198:
			return -1894894188;
		
		case 199:
			return -901163259;
		
		case 200:
			return 1233534620;
		
		case 201:
			return -1066334226;
		
		case 202:
			return 1039032026;
		
		case 203:
			return 1923400478;
		
		case 204:
			return 723973206;
		
		case 205:
			return -326143852;
		
		case 206:
			return -401643538;
		
		case 207:
			return -915704871;
		
		case 208:
			return 349315417;
		
		case 209:
			return 237764926;
		
		case 210:
			return 729783779;
		
		case 211:
			return -589178377;
		
		case 212:
			return -1106353882;
		
		case 213:
			return -631760477;
		
		case 214:
			return -1566741232;
		
		case 215:
			return -1214293858;
		
		case 216:
			return 1987142870;
		
		case 217:
			return 1075432268;
		
		case 218:
			return -498054846;
		
		case 219:
			return 1581459400;
		
		case 220:
			return -1479664699;
		
		case 221:
			return 349605904;
		
		case 222:
			return 784565758;
		
		case 223:
			return 1663218586;
		
		case 224:
			return 1070967343;
		
		case 225:
			return -1353081087;
		
		case 229:
			return -1150599089;
		
		case 228:
			return 525509695;
		
		case 227:
			return -2119578145;
		
		case 226:
			return -682211828;
		
		case 230:
			return 523724515;
		
		case 263:
			if (iParam1 == 0)
			{
				return 1203490606;
			}
			else if (iParam1 == 1)
			{
				return -432008408;
			}
			else
			{
				return 1203490606;
			}
			break;
		
		case 264:
			return -1757836725;
		
		case 259:
			return -1930048799;
		
		case 260:
			return 2123327359;
		
		case 261:
			return 1426219628;
		
		case 262:
			return 1274868363;
		
		case 265:
			return -1829802492;
		
		case 266:
			return 234062309;
		
		case 231:
			return -831834716;
		
		case 232:
			return 2068293287;
		
		case 233:
			if (iParam1 == 0)
			{
				return 1878062887;
			}
			else if (iParam1 == 1)
			{
				return 470404958;
			}
			else
			{
				return 1878062887;
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return 634118882;
			}
			else if (iParam1 == 1)
			{
				return 666166960;
			}
			else
			{
				return 634118882;
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return 906642318;
			}
			else if (iParam1 == 1)
			{
				return 704435172;
			}
			else
			{
				return 906642318;
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return -2030171296;
			}
			else if (iParam1 == 1)
			{
				return -604842630;
			}
			else
			{
				return -2030171296;
			}
			break;
		
		case 237:
			return -114627507;
		
		case 238:
			return -1660945322;
		
		case 239:
			return -1943285540;
		
		case 240:
			if (iParam1 == 0)
			{
				return -1485523546;
			}
			else if (iParam1 == 1)
			{
				return -888242983;
			}
			else
			{
				return -1485523546;
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return 1489967196;
			}
			else if (iParam1 == 1)
			{
				return 1922255844;
			}
			else
			{
				return 1489967196;
			}
			break;
		
		case 242:
			return 1102544804;
		
		case 243:
			return 710198397;
		
		case 244:
			return -1671539132;
		
		case 245:
			return Global_73804;
		
		case 251:
			return 16646064;
		
		case 250:
			return 464687292;
		
		case 249:
			return -1685021548;
		
		case 252:
			return -2119578145;
		
		case 246:
			return 972671128;
		
		case 247:
			return 970598228;
		
		case 49:
			return -1041692462;
		
		case 248:
			return -602287871;
		
		case 253:
			return -1845487887;
		
		case 254:
			return 1621617168;
		
		case 255:
			return 1475773103;
		
		case 256:
			return -305727417;
		
		case 257:
			return -1295027632;
		
		case 267:
			return -1232836011;
		
		case 268:
			return -777172681;
		
		case 269:
			return 1887331236;
		
		case 270:
			return 1549126457;
		
		case 271:
			return 101905590;
		
		case 272:
			return -663299102;
		
		case 273:
			return 683047626;
		
		case 274:
			return 390201602;
		
		case 275:
			return 86520421;
		
		case 279:
			return 2067820283;
		
		case 280:
			return 482197771;
		
		case 281:
			return 819197656;
		
		case 276:
			return -2103821244;
		
		case 277:
			return -1071380347;
		
		case 278:
			return 741090084;
		
		case 282:
			return -2140431165;
		
		case 283:
			return 2035069708;
		
		case 284:
			return -1606187161;
		
		case 285:
			return 822018448;
		
		case 286:
			return -2115793025;
		
		case 287:
			return -1009268949;
		
		case 288:
			return -570033273;
		
		case 289:
			return 6774487;
		
		case 290:
			return -1404136503;
		
		case 291:
			return 1873600305;
		
		case 292:
			return -405626514;
		
		case 293:
			return -674927303;
		
		case 294:
			return -255678177;
		
		case 296:
			return -440768424;
		
		case 297:
			return 1491277511;
		
		case 295:
			return -609625092;
		
		case 298:
			return -1523428744;
		
		case 299:
			return -1558399629;
		
		case 300:
			return 1026149675;
		
		case 301:
			return -618617997;
		
		case 302:
			return -1289178744;
		
		case 303:
			return -1842748181;
		
		case 304:
			return -312295511;
		
		case 305:
			return -1649536104;
		
		case 306:
			return 1180875963;
		
		case 307:
			return -1590337689;
		
		case 308:
			return 682434785;
		
		case 309:
			return -1912017790;
		
		case 310:
			return 941494461;
		
		case 311:
			return 989294410;
		
		case 312:
			return -1758137366;
		
		case 313:
			return 272929391;
		
		case 314:
			return -2048333973;
		
		case 315:
			return 1034187331;
		
		case 316:
			return -239841468;
		
		case 317:
			return 627535535;
		
		case 318:
			return 1886268224;
		
		case 319:
			return 1234311532;
		
		case 320:
			return -1405937764;
		
		case 321:
			return 719660200;
		
		case 322:
			return -982130927;
	}
	switch (iParam0)
	{
		case 323:
			return Global_73805;
		
		case 324:
			return Global_73806;
		
		case 325:
			return 223240013;
		
		case 326:
			return 1504306544;
		
		case 327:
			return 1939284556;
		
		case 328:
			return 917809321;
		
		case 329:
			return 562680400;
		
		case 330:
			return 1897744184;
		
		case 331:
			return -32236122;
		
		case 332:
			return 884483972;
		
		case 333:
			return -1210451983;
		
		case 334:
			return -1881846085;
		
		case 335:
			return 159274291;
		
		case 336:
			return 433954513;
		
		case 337:
			return -1281684762;
		
		case 338:
			return -1763555241;
		
		case 339:
			return -749299473;
		
		case 340:
			return -975345305;
		
		case 341:
			return -1700874274;
		
		case 342:
			return -392675425;
		
		case 343:
			return 1043222410;
		
		case 344:
			return -1386191424;
		
		case 345:
			return 1565978651;
		
		case 346:
			return 1036591958;
		
		case 347:
			return -32878452;
		
		case 348:
			return -42959138;
		
		case 349:
			return -1984275979;
		
		case 350:
			return -1007528109;
		
		case 351:
			return -1523619738;
		
		case 352:
			return 1392481335;
		
		case 353:
			return -998177792;
		
		case 354:
			return 1841130506;
		
		case 355:
			return 2049897956;
		
		case 356:
			return -1242608589;
		
		case 357:
			return Global_73807;
		
		case 358:
			return 1483171323;
		
		case 359:
			return 886810209;
		
		case 360:
			return -1693015116;
		
		case 361:
			return -692292317;
		
		case 362:
			return -1435527158;
		
		case 363:
			return 1181327175;
		
		case 364:
			return 1489874736;
		
		case 365:
			return -212993243;
		
		case 366:
			return 447548909;
		
		case 367:
			return 1561920505;
		
		case 368:
			return -1848994066;
		
		case 369:
			return 1741861769;
		
		case 370:
			return 1104234922;
		
		case 371:
			return 1871995513;
		
		case 372:
			return 1352136073;
		
		case 373:
			return -313185164;
		
		case 374:
			return -2079788230;
		
		case 375:
			return 600450546;
		
		case 376:
			return -410205223;
		
		case 377:
			return 867799010;
		
		case 378:
			return -1529242755;
		
		case 379:
			return 903794909;
		
		case 380:
			return -1532697517;
		
		case 381:
			return 15219735;
		
		case 382:
			return 661493923;
		
		case 383:
			return 838982985;
		
		case 384:
			return -391595372;
		
		case 385:
			return -121446169;
		
		case 386:
			return 1909189272;
		
		case 387:
			return 1617472902;
		
		case 388:
			return -1267543371;
		
		case 389:
			return 931280609;
		
		case 390:
			return 1046206681;
		
		case 391:
			return -1259134696;
		
		case 392:
			return 1115909093;
		
		case 393:
			return 1031562256;
		
		case 394:
			return -376434238;
		
		case 395:
			return -986944621;
		
		case 396:
			return -1134706562;
		
		case 397:
			return -2120700196;
		
		case 398:
			return -214906006;
		
		case 399:
			return -988501280;
		
		case 400:
			return 1254014755;
		
		case 401:
			return -726768679;
		
		case 402:
			return Global_73808;
		
		case 403:
			return 1945374990;
		
		case 404:
			return 1653666139;
		
		case 405:
			return 500482303;
		
		case 406:
			return 2044532910;
		
		case 407:
			return -638562243;
		
		case 408:
			return 1692272545;
		
		case 409:
			return 2069146067;
		
		case 410:
			return -420911112;
		
		case 411:
			return 321186144;
		
		case 412:
			return -54332285;
		
		case 415:
			return 2016857647;
		
		case 416:
			return -227741703;
		
		case 417:
			return 627094268;
		
		case 418:
			return -1450650718;
		
		case 419:
			return -808831384;
		
		case 420:
			return 1337041428;
		
		case 421:
			return 850565707;
		
		case 422:
			return 884422927;
		
		case 423:
			return -1137532101;
		
		case 424:
			return -808457413;
		
		case 413:
			return -307958377;
		
		case 414:
			return 345756458;
		
		case 425:
			return -801550069;
		
		case 426:
			return 679453769;
		
		case 427:
			return 1909700336;
		
		case 428:
			return 2139203625;
		
		case 429:
			return -1890996696;
		
		case 430:
			return 2038858402;
		
		case 431:
			return -1146969353;
		
		case 432:
			return 1542143200;
		
		case 433:
			return -579747861;
		
		case 434:
			return 444994115;
		
		case 435:
			return 1637620610;
		
		case 436:
			return -755532233;
		
		case 437:
			return 540101442;
		
		case 438:
			return -1106120762;
		
		case 439:
			return -1478704292;
		
		case 440:
			return -2096690334;
		
		case 450:
			return -956048545;
		
		case 451:
			return 1886712733;
		
		case 452:
			return 728614474;
		
		case 453:
			return -1255698084;
		
		case 454:
			return 1074326203;
		
		case 455:
			return -784816453;
		
		case 456:
			return 534258863;
		
		case 457:
			return 1641462412;
		
		case 458:
			return -591651781;
		
		case 441:
			return -49115651;
		
		case 442:
			return 1456744817;
		
		case 443:
			return 1591739866;
		
		case 444:
			return -507495760;
		
		case 445:
			return -1168952148;
		
		case 446:
			return 1279262537;
		
		case 447:
			return -1566607184;
		
		case 448:
			return -331467772;
		
		case 449:
			return -286046740;
		
		case 459:
			return 1044193113;
		
		case 460:
			return 686471183;
		
		case 461:
			return -941272559;
		
		case 462:
			return -1829436850;
		
		case 463:
			return -682108547;
		
		case 464:
			return 722226637;
		
		case 465:
			return 1854776567;
		
		case 466:
			return 1862507111;
		
		case 467:
			return -882629065;
		
		case 468:
			return -362150785;
		
		case 469:
			return 310284501;
		
		case 470:
			return 916547552;
		
		case 471:
			return -1804415708;
		
		case 472:
			return 1934384720;
		
		case 473:
			return -1349095620;
		
		case 474:
			return -208911803;
		
		case 475:
			return -324618589;
		
		case 476:
			return -664141241;
		
		case 477:
			return 1323778901;
		
		case 478:
			return -1620126302;
		
		case 479:
			return -447711397;
		
		case 480:
			return 1938952078;
		
		case 481:
			return -907477130;
		
		case 482:
			return -1987130134;
		
		case 483:
			return 1747439474;
		
		case 484:
			return 469291905;
		
		case 485:
			return -48031959;
		
		case 486:
			return 1284356689;
		
		case 487:
			return -1254331310;
		
		case 488:
			return 394110044;
		
		case 489:
			return 301304410;
		
		case 490:
			return 1456336509;
		
		case 491:
			return 340154634;
		
		case 492:
			return -1132721664;
		
		case 493:
			return -1960756985;
		
		case 494:
			return 960812448;
		
		case 495:
			return 83136452;
		
		case 496:
			return 740289177;
		
		case 497:
			return 2031587082;
		
		case 498:
			return 1693751655;
		
		case 499:
			return -834353991;
		
		case 500:
			return 872704284;
		
		case 501:
			return 987469656;
		
		case 502:
			return -1756021720;
		
		case 503:
			return 1118611807;
		
		case 504:
			return 409049982;
		
		case 505:
			return 408825843;
		
		default:
	}
	switch (iParam0)
	{
		case 506:
			return -2098954619;
		
		case 507:
			return 2134119907;
		
		case 508:
			return 67753863;
		
		case 509:
			return -631322662;
		
		case 510:
			return -838099166;
		
		case 511:
			return -1810806490;
		
		case 512:
			return -1358197432;
		
		case 513:
			return 1492612435;
		
		case 514:
			return 1181339704;
		
		case 515:
			return -1728685474;
		
		case 516:
			return -2124201592;
		
		case 517:
			return 1830407356;
		
		default:
	}
	return 0;
}

int func_588()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2097152[func_326()].f_5500.f_1[iVar0] != 0)
		{
			iVar1 = Global_2097152[func_326()].f_5500.f_1[iVar0];
			iVar2 = func_547(245, 0);
			if (iVar0 == (iVar2 / 32))
			{
				GAMEPLAY::CLEAR_BIT(&iVar1, (iVar2 % 32));
			}
			iVar3 = func_547(323, 0);
			if (iVar0 == (iVar3 / 32))
			{
				GAMEPLAY::CLEAR_BIT(&iVar1, (iVar3 % 32));
			}
			iVar4 = func_547(324, 0);
			if (iVar0 == (iVar4 / 32))
			{
				GAMEPLAY::CLEAR_BIT(&iVar1, (iVar4 % 32));
			}
			iVar5 = func_547(357, 0);
			if (iVar0 == (iVar5 / 32))
			{
				GAMEPLAY::CLEAR_BIT(&iVar1, (iVar5 % 32));
			}
			iVar6 = func_547(402, 0);
			if (iVar0 == (iVar6 / 32))
			{
				GAMEPLAY::CLEAR_BIT(&iVar1, (iVar6 % 32));
			}
			if (iVar1 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

char* func_589(int iParam0)
{
	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	iVar0 = func_587(iParam0, -1);
	if (iVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		
		case 68:
			return "SANCHEZ";
		
		case 105:
			return "REBEL";
		
		case 107:
			return "SANCHEZ2";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 171:
			return "BOXVILLE4";
		
		case 173:
			return "DINGHY3";
		
		case 183:
			return "MULE3";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 194:
			return "ORACLE1";
		
		case 196:
			return "SCHAFTER2";
		
		case 207:
			return "DOMINATOR2";
		
		case 245:
			return "BIG_YACHT";
		
		case 254:
			return "CARGOBOB2";
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 357:
			return "BIG_PLANE";
		
		case 402:
			return "HACKER_TRUCK";
		
		default:
	}
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar0);
}

int func_590(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 >= 4)
	{
		iParam0 = 3;
	}
	switch (iParam0)
	{
		case 0:
			return 243;
		
		case 1:
			return 244;
		
		case 2:
			return 217;
		
		case 3:
			return 253;
		
		default:
	}
	return 243;
}

void func_591()
{
	func_60(0, 0);
	if (func_332())
	{
		func_59("MPCT_PA_AGH");
	}
	else
	{
		func_59("MPCT_PA_AGHF");
	}
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	bVar2 = true;
	if (func_338(PLAYER::PLAYER_ID()))
	{
		iVar1 = func_104(43);
		if ((iVar1 > 0 || !func_424(43)) || !func_454(43))
		{
			bVar2 = false;
		}
		if (!func_333(func_337()))
		{
			bVar2 = false;
		}
		func_596(43, iVar0, "MPCT_PA_IMP0", bVar2);
		func_42(iVar0, "MPCT_CASH", 1, bVar2, 0, 0);
		func_595(func_65(43), 0);
	}
	else
	{
		func_42(iVar0, "MPCT_PA_IMP0", 0, 0, 0, 0);
		func_42(iVar0, "", 1, 0, 0, 0);
		func_592(15, 0);
	}
	iVar0++;
	bVar2 = true;
	if (func_338(PLAYER::PLAYER_ID()))
	{
		iVar1 = func_104(44);
		if ((iVar1 > 0 || !func_424(44)) || !func_454(44))
		{
			bVar2 = false;
		}
		if (!func_329())
		{
			bVar2 = false;
		}
		iVar3 = func_330();
		if (iVar3 != 0)
		{
			if (iVar3 == 3)
			{
				bVar2 = false;
			}
		}
		func_596(44, iVar0, "MPCT_PA_YAH0", bVar2);
		func_42(iVar0, "MPCT_CASH", 1, bVar2, 0, 0);
		func_595(func_65(44), 0);
	}
	else
	{
		func_42(iVar0, "MPCT_PA_YAH0", 0, 0, 0, 0);
		func_42(iVar0, "", 1, 0, 0, 0);
		func_592(15, 0);
	}
	iVar0++;
	func_40(-1);
	if (func_904())
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			func_111(237, "BB_SELECT", -1, 0);
			func_111(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_110(176, "BB_SELECT", -1);
			func_110(177, "BB_BACK", -1);
		}
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = iVar0;
}

void func_592(int iParam0, bool bParam1)
{
	if (Global_22350.f_5224 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	Global_22350.f_4433[Global_22350.f_5224] = iParam0;
	Global_22350.f_5224++;
	Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 4;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_594();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_44(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_593();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

float func_593()
{
	iVar0 = 0;
	while (iVar0 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_44(Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_594()
{
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 1)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 8)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_52(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
	{
		UI::_SET_TEXT_ENTRY_FOR_WIDTH(&(Global_22350.f_73[Global_22350.f_5742]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 1)
		{
			iVar8++;
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8)]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 8)
		{
			iVar8++;
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8)]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 2)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[((Global_22350.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 3)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[((Global_22350.f_5223 - iVar4) + iVar10)], Global_22350.f_4304[((Global_22350.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 5)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 6)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 7)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 9)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
	{
		fVar0 = UI::_GET_TEXT_SCREEN_WIDTH(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_44(Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_595(int iParam0, bool bParam1)
{
	if (Global_22350.f_5222 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	Global_22350.f_3918[Global_22350.f_5222] = iParam0;
	Global_22350.f_5222++;
	Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 2;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_594();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_44(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_593();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

void func_596(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (func_417(iParam0))
	{
		func_42(iParam1, sParam2, 1, bParam3, 0, 0);
		func_592(51, 0);
	}
	else
	{
		func_42(iParam1, sParam2, 0, bParam3, 0, 0);
	}
}

int func_597()
{
	if (func_329())
	{
		if (!iLocal_913)
		{
			iLocal_913 = 1;
			return 1;
		}
	}
	else if (!func_329())
	{
		if (iLocal_913)
		{
			iLocal_913 = 0;
			return 1;
		}
	}
	return 0;
}

void func_598()
{
	switch (Local_147.f_178)
	{
		case 19:
			if (func_62(0, -1, 1))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_660();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_284();
				}
				else
				{
					func_284();
				}
			}
			break;
		
		case 9:
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_651();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_284();
				}
				else
				{
					func_284();
				}
			}
			break;
		
		case 6:
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					if (func_599())
					{
						GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
						func_284();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_284();
				}
			}
			break;
	}
}

int func_599()
{
	func_600(&uLocal_914, &iVar1, &iVar0, &uLocal_1278);
	func_40(-1);
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		func_111(237, "BB_SELECT", -1, 0);
		func_111(238, "BB_BACK", -1, 0);
	}
	else
	{
		func_110(176, "BB_SELECT", -1);
		func_110(177, "BB_BACK", -1);
	}
	GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	func_109(Local_147.f_181.f_69, 1, 1);
	if (iVar1 <= 0)
	{
		func_32(4);
		return 0;
	}
	else if (iVar1 == 1)
	{
		GAMEPLAY::SET_BIT(&iLocal_1277, 2);
		iVar0++;
	}
	Local_147.f_181.f_2 = iVar0;
	return 1;
}

void func_600(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_60(0, 0);
	func_59("MPCT_PERVEH1");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	*uParam2 = 0;
	*uParam1 = 0;
	if (*uParam3 < 25)
	{
		if (func_372(*uParam3, -1) > 0 && !func_364(*uParam3))
		{
			iVar3 = func_357(*uParam3, -1);
			if (*uParam3 == 13)
			{
				iVar3 = 11;
			}
			else if (*uParam3 == 18)
			{
				iVar3 = 10;
			}
			iVar0 = 0;
			while (iVar0 < iVar3)
			{
				(*uParam0)[iVar0] = -1;
				iVar1 = (func_354(*uParam3) + iVar0);
				func_353(iVar1, &iVar2, 1);
				func_603(uParam0, iVar0, iVar1, iVar2, *uParam3, uParam1, uParam2);
				iVar0++;
			}
		}
	}
	else
	{
		iVar4 = func_356(*uParam3);
		iVar0 = 0;
		while (iVar0 < func_601(iVar4))
		{
			iVar1 = (func_355(iVar4) + iVar0);
			func_353(iVar1, &iVar2, 1);
			if (iVar2 >= 0)
			{
				func_603(uParam0, iVar0, iVar1, iVar2, *uParam3, uParam1, uParam2);
			}
			iVar0++;
		}
	}
}

int func_601(int iParam0)
{
	return (func_602(iParam0) - func_355(iParam0));
}

int func_602(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

void func_603(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)
{
	if ((iParam3 >= 0 && STREAMING::IS_MODEL_A_VEHICLE(func_323(iParam3))) && !func_335(iParam2))
	{
		func_647(iParam3);
		iVar0 = func_323(iParam3);
		if (func_646(iVar0) && func_645(iVar0))
		{
			if (!func_642(iVar0, 1) && !func_641(iVar0))
			{
				if (func_350(iVar0) && !func_632(iParam3))
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_1323615[iParam3].f_102, 10))
					{
						iVar1 = 1;
						if (func_631(&(Global_1323615[iParam3])))
						{
							iVar1++;
						}
						if (func_630(func_323(iParam3), Global_1323615[iParam3].f_77, Global_1323615[iParam3].f_9[10]) && func_629(func_323(iParam3)))
						{
							iVar1++;
						}
						Var8 = { func_626(-1, iParam2, 1) };
						if (GAMEPLAY::IS_BIT_SET(Global_1323615[iParam3].f_102, 1))
						{
							if (GAMEPLAY::IS_BIT_SET(Global_1323615[iParam3].f_102, 2))
							{
								StringCopy(&Var2, "MPCT_PVNAMEDES", 24);
								StringIntConCat(&Var2, iVar1, 24);
								func_42(*uParam6, &Var2, iVar1, 1, 0, 0);
							}
							else
							{
								StringCopy(&Var2, "MPCT_PVNAMESCR", 24);
								StringIntConCat(&Var2, iVar1, 24);
								func_42(*uParam6, &Var2, iVar1, 1, 0, 0);
							}
						}
						else if (func_333(iParam3))
						{
							StringCopy(&Var2, "MPCT_PVNAMEIMP", 24);
							StringIntConCat(&Var2, iVar1, 24);
							func_42(*uParam6, &Var2, iVar1, 1, 0, 0);
						}
						else if (((((((((((iParam4 < 25 && iParam1 >= Global_1049922[func_372(iParam4, -1)].f_33) && iParam4 != 13) && iParam4 != 14) && iParam4 != 15) && iParam4 != 16) && iParam4 != 17) && iParam4 != 18) && iParam4 != 19) && iParam4 != 20) && iParam4 != 21) && iParam4 != 22)
						{
							StringCopy(&Var2, "MPCT_PVNAMESTO", 24);
							StringIntConCat(&Var2, iVar1, 24);
							func_42(*uParam6, &Var2, iVar1, 1, 0, 0);
						}
						else
						{
							StringCopy(&Var2, "MPCT_PVNAME", 24);
							StringIntConCat(&Var2, iVar1, 24);
							func_42(*uParam6, &Var2, iVar1, 1, 0, 0);
						}
						sVar24 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_323(iParam3));
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Var8))
						{
							func_625(&Var8, 0, 0, 0);
						}
						else
						{
							func_624(sVar24, 0);
						}
						if (func_631(&(Global_1323615[iParam3])))
						{
							func_624("VEH_LIVERY", 0);
						}
						if (func_630(func_323(iParam3), Global_1323615[iParam3].f_77, Global_1323615[iParam3].f_9[10]) && func_629(func_323(iParam3)))
						{
							func_624("VEH_TOPL", 0);
						}
						(*uParam0)[*uParam5] = iParam3;
						*uParam5++;
						*uParam6++;
					}
				}
			}
		}
		else
		{
			func_604(iParam3, -1);
		}
	}
}

void func_604(int iParam0, int iParam1)
{
	func_336(iParam0, &iVar0);
	if (iVar0 >= 0)
	{
		func_620(iVar0, -1, -1);
	}
	func_617(&(Global_1323615[iParam0]));
	Global_2097152[func_326()].f_6174.f_1274 = NETWORK::_GET_POSIX_TIME();
	func_605(iParam0, &(Global_1323615[iParam0]), 0, iParam1, 0, 0);
}

int func_605(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2097152[func_326()].f_6174.f_1274 = NETWORK::_GET_POSIX_TIME();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_616(1411, iParam0);
	func_615(iVar1, uParam1->f_137, iParam3, 1);
	if (!bParam4)
	{
	}
	iVar1 = func_616(1412, iParam0);
	func_615(iVar1, uParam1->f_138, iParam3, 1);
	if (!bParam4)
	{
	}
	if (func_614(iParam0))
	{
	}
	else
	{
		iVar1 = func_616(1413, iParam0);
		func_615(iVar1, *uParam1, iParam3, 1);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_616(1414, iParam0) + iVar0);
				func_615(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			else
			{
				iVar1 = (func_613(iParam0) + (iVar0 - 25));
				func_615(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_616(1439, iParam0) + iVar0);
			func_615(iVar1, uParam1->f_59[iVar0], iParam3, 1);
			iVar0++;
		}
	}
	iVar1 = func_616(1441, iParam0);
	func_615(iVar1, uParam1->f_62, iParam3, 1);
	iVar1 = func_616(1442, iParam0);
	func_615(iVar1, uParam1->f_63, iParam3, 1);
	iVar1 = func_616(1443, iParam0);
	func_615(iVar1, uParam1->f_64, iParam3, 1);
	if (func_614(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_616(1444, iParam0);
		func_615(iVar1, uParam1->f_65, iParam3, 1);
	}
	iVar1 = func_616(1445, iParam0);
	func_615(iVar1, uParam1->f_67, iParam3, 1);
	if (func_614(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_616(1446, iParam0);
		func_615(iVar1, uParam1->f_68, iParam3, 1);
	}
	iVar1 = func_616(1447, iParam0);
	func_615(iVar1, uParam1->f_69, iParam3, 1);
	iVar1 = func_616(1448, iParam0);
	func_615(iVar1, uParam1->f_70, -1, 1);
	iVar1 = func_616(1449, iParam0);
	func_615(iVar1, uParam1->f_71, iParam3, 1);
	iVar1 = func_616(1450, iParam0);
	func_615(iVar1, uParam1->f_72, iParam3, 1);
	iVar1 = func_616(1451, iParam0);
	func_615(iVar1, uParam1->f_73, iParam3, 1);
	iVar1 = func_616(1452, iParam0);
	func_615(iVar1, uParam1->f_5, iParam3, 1);
	iVar1 = func_616(1453, iParam0);
	func_615(iVar1, uParam1->f_6, iParam3, 1);
	iVar1 = func_616(1454, iParam0);
	func_615(iVar1, uParam1->f_7, iParam3, 1);
	iVar1 = func_616(1455, iParam0);
	func_615(iVar1, uParam1->f_8, iParam3, 1);
	if (func_614(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_616(3880, iParam0);
		func_615(iVar1, uParam1->f_74, iParam3, 1);
		iVar1 = func_616(3881, iParam0);
		func_615(iVar1, uParam1->f_75, iParam3, 1);
		iVar1 = func_616(3882, iParam0);
		func_615(iVar1, uParam1->f_76, iParam3, 1);
		iVar1 = func_612(iParam0);
		func_615(iVar1, uParam1->f_97, iParam3, 1);
		iVar1 = func_611(iParam0);
		func_615(iVar1, uParam1->f_99, iParam3, 1);
		iVar1 = func_609(iParam0);
		func_615(iVar1, uParam1->f_98, iParam3, 1);
	}
	uVar2 = Global_2097152[func_326()].f_6174.f_1274;
	if (bParam5)
	{
		uVar2 = NETWORK::_GET_POSIX_TIME();
	}
	func_608(1628, uVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_608(func_607(1, iParam0), uParam1->f_102, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_608(func_607(2, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_608(func_607(3, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_608(func_607(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	func_608(func_607(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_608(func_607(7, iParam0), uParam1->f_139, iParam3, 1, 0);
	if (!func_614(iParam0))
	{
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			func_606(func_607(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_606(int iParam0, var uParam1, int iParam2)
{
	iVar0 = Global_2548434[iParam0][func_34(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_LICENSE_PLATE(iVar0, uParam1);
	}
}

int func_607(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				case 271:
					return 8536;
				
				case 272:
					return 8543;
				
				case 273:
					return 8550;
				
				case 274:
					return 8557;
				
				case 275:
					return 8564;
				
				case 276:
					return 8571;
				
				case 277:
					return 8578;
				
				case 278:
					return 8585;
				
				case 279:
					return 8592;
				
				case 280:
					return 8599;
				
				case 281:
					return 8981;
				
				case 282:
					return 8988;
				
				case 283:
					return 8995;
				
				case 284:
					return 9002;
				
				case 285:
					return 9009;
				
				case 286:
					return 9016;
				
				case 287:
					return 9023;
				
				case 288:
					return 9030;
				
				case 289:
					return 9037;
				
				case 290:
					return 9044;
				
				case 291:
					return 9051;
				
				case 292:
					return 9057;
				
				case 293:
					return 9063;
				
				case 294:
					return 9069;
				
				case 295:
					return 9076;
				
				case 296:
					return 9083;
				
				case 297:
					return 9090;
				
				case 298:
					return 9097;
				
				case 299:
					return 9104;
				
				case 300:
					return 9111;
				
				case 301:
					return 9118;
				
				case 302:
					return 9125;
				
				case 303:
					return 9132;
				
				case 304:
					return 9139;
				
				case 305:
					return 9145;
				
				case 306:
					return 9151;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				case 281:
					return 8982;
				
				case 282:
					return 8989;
				
				case 283:
					return 8996;
				
				case 284:
					return 9003;
				
				case 285:
					return 9010;
				
				case 286:
					return 9017;
				
				case 287:
					return 9024;
				
				case 288:
					return 9031;
				
				case 289:
					return 9038;
				
				case 290:
					return 9045;
				
				case 291:
					return 9052;
				
				case 292:
					return 9058;
				
				case 293:
					return 9064;
				
				case 294:
					return 9070;
				
				case 295:
					return 9077;
				
				case 296:
					return 9084;
				
				case 297:
					return 9091;
				
				case 298:
					return 9098;
				
				case 299:
					return 9105;
				
				case 300:
					return 9112;
				
				case 301:
					return 9119;
				
				case 302:
					return 9126;
				
				case 303:
					return 9133;
				
				case 304:
					return 9140;
				
				case 305:
					return 9146;
				
				case 306:
					return 9152;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				case 281:
					return 8983;
				
				case 282:
					return 8990;
				
				case 283:
					return 8997;
				
				case 284:
					return 9004;
				
				case 285:
					return 9011;
				
				case 286:
					return 9018;
				
				case 287:
					return 9025;
				
				case 288:
					return 9032;
				
				case 289:
					return 9039;
				
				case 290:
					return 9046;
				
				case 291:
					return 9053;
				
				case 292:
					return 9059;
				
				case 293:
					return 9065;
				
				case 294:
					return 9071;
				
				case 295:
					return 9078;
				
				case 296:
					return 9085;
				
				case 297:
					return 9092;
				
				case 298:
					return 9099;
				
				case 299:
					return 9106;
				
				case 300:
					return 9113;
				
				case 301:
					return 9120;
				
				case 302:
					return 9127;
				
				case 303:
					return 9134;
				
				case 304:
					return 9141;
				
				case 305:
					return 9147;
				
				case 306:
					return 9153;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8984;
				
				case 282:
					return 8991;
				
				case 283:
					return 8998;
				
				case 284:
					return 9005;
				
				case 285:
					return 9012;
				
				case 286:
					return 9019;
				
				case 287:
					return 9026;
				
				case 288:
					return 9033;
				
				case 289:
					return 9040;
				
				case 290:
					return 9047;
				
				case 291:
					return 9054;
				
				case 292:
					return 9060;
				
				case 293:
					return 9066;
				
				case 294:
					return 9072;
				
				case 295:
					return 9079;
				
				case 296:
					return 9086;
				
				case 297:
					return 9093;
				
				case 298:
					return 9100;
				
				case 299:
					return 9107;
				
				case 300:
					return 9114;
				
				case 301:
					return 9121;
				
				case 302:
					return 9128;
				
				case 303:
					return 9135;
				
				case 304:
					return 9142;
				
				case 305:
					return 9148;
				
				case 306:
					return 9154;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8985;
				
				case 282:
					return 8992;
				
				case 283:
					return 8999;
				
				case 284:
					return 9006;
				
				case 285:
					return 9013;
				
				case 286:
					return 9020;
				
				case 287:
					return 9027;
				
				case 288:
					return 9034;
				
				case 289:
					return 9041;
				
				case 290:
					return 9048;
				
				case 291:
					return 9055;
				
				case 292:
					return 9061;
				
				case 293:
					return 9067;
				
				case 294:
					return 9073;
				
				case 295:
					return 9080;
				
				case 296:
					return 9087;
				
				case 297:
					return 9094;
				
				case 298:
					return 9101;
				
				case 299:
					return 9108;
				
				case 300:
					return 9115;
				
				case 301:
					return 9122;
				
				case 302:
					return 9129;
				
				case 303:
					return 9136;
				
				case 304:
					return 9143;
				
				case 305:
					return 9149;
				
				case 306:
					return 9155;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				default:
			}
			break;
	}
	return 1629;
}

void func_608(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_34(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_609(int iParam0)
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30154 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30154 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_610(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	return 0;
}

int func_610(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_356(iParam0);
		return func_602(iVar0);
	}
	return (func_357(iParam0, -1) * iParam0 + 1);
}

int func_611(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30114 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30114 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_610(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28029 + iParam0) - 271);
	}
	return 0;
}

int func_612(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30094 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30094 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_610(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28019 + iParam0) - 271);
	}
	return 0;
}

int func_613(int iParam0)
{
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return (29534 + ((iParam0 - 281) * iVar0));
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (29774 + ((iParam0 - 294) * iVar0));
	}
	else if (iParam0 < func_610(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	else if (iParam0 < 281)
	{
		return (27259 + ((iParam0 - 271) * iVar0));
	}
	return 0;
}

int func_614(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
			return 1;
			break;
	}
	return 0;
}

var func_615(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_35();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - STATS::_0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - STATS::_0x94F12ABF9C79E339((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_616(int iParam0, int iParam1)
{
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_610(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
		else if (iParam1 < 291)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29474 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29475 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29476 + (iParam1 - 281) * 3);
			}
		}
		else if (iParam1 < 304)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29504 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29505 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29506 + (iParam1 - 294) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_610(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_610(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_610(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	else if (iParam1 < 291)
	{
		iVar0 = (28484 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 281) * (1456 - 1411)));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		iVar0 = ((iParam1 - 291) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 28934;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 28935;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 28936;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 28937;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 28938;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 28939;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 28940;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 28941;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 28942;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 28943;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 28944;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 28945;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 28946;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 28947;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 28948;
		}
	}
	else if (iParam1 < 304)
	{
		iVar0 = (28979 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 294) * (1456 - 1411)));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		iVar0 = ((iParam1 - 304) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 29429;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 29430;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 29431;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 29432;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 29433;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 29434;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 29435;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 29436;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 29437;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 29438;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 29439;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 29440;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 29441;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 29442;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 29443;
		}
	}
	return iVar0;
}

void func_617(var uParam0)
{
	func_618(uParam0);
	uParam0->f_102 = 0;
	uParam0->f_103 = 0;
	uParam0->f_104 = 0;
	StringCopy(&(uParam0->f_105), "", 64);
	StringCopy(&(uParam0->f_121), "", 64);
	uParam0->f_137 = 0;
	uParam0->f_138 = 0;
	uParam0->f_139 = 0;
	uParam0->f_140 = 0;
}

void func_618(var uParam0)
{
	func_619(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
}

void func_619(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_620(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_621(iParam0, iParam1, iParam2);
	if (iParam0 >= 307)
	{
		return;
	}
	if (iParam2 == func_35() || iParam2 == -1)
	{
		Global_1671199[iParam0] = iParam1;
	}
}

void func_621(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= 255)
	{
		func_615(func_623(iParam0), iParam1, iParam2, 1);
		func_615(func_622(iParam0), 0, iParam2, 1);
	}
	else
	{
		func_615(func_623(iParam0), 255, iParam2, 1);
		func_615(func_622(iParam0), (iParam1 - 255), iParam2, 1);
	}
}

int func_622(int iParam0)
{
	if (iParam0 < 261)
	{
		return (24625 + iParam0);
	}
	else if (iParam0 < 271)
	{
		return ((26349 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28069 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30200 + iParam0) - 281);
	}
	return (24625 + iParam0);
}

int func_623(int iParam0)
{
	if (iParam0 < 158)
	{
		if (iParam0 <= 38)
		{
			return (4036 + iParam0);
		}
		else if (iParam0 <= 48)
		{
			return ((5905 + iParam0) - 39);
		}
		else if (iParam0 <= 51)
		{
			return ((6025 + iParam0) - 49);
		}
		else if (iParam0 <= 64)
		{
			return ((7199 + iParam0) - 52);
		}
		else if (iParam0 <= 87)
		{
			return ((9207 + iParam0) - 65);
		}
		else
		{
			return ((14734 + iParam0) - 88);
		}
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 261)
	{
		if (iParam0 < 184)
		{
			return ((17911 + iParam0) - 159);
		}
		else if (iParam0 < 194)
		{
			return ((18903 + iParam0) - 184);
		}
		else if (iParam0 < 231)
		{
			return ((21757 + iParam0) - 194);
		}
		else
		{
			return ((24595 + iParam0) - 231);
		}
	}
	else if (iParam0 < 271)
	{
		return ((26339 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28059 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30174 + iParam0) - 281);
	}
	return (4036 + iParam0);
}

void func_624(char* sParam0, bool bParam1)
{
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220]), sParam0, 24);
	Global_22350.f_5220++;
	Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 1;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_594();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_44(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_593();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

void func_625(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (Global_22350.f_5221 >= 32)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	StringCopy(&(Global_2461220[Global_22350.f_5221]), sParam0, 64);
	Global_22350.f_5221++;
	if (bParam3)
	{
		Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 9;
	}
	else
	{
		Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 7;
	}
	Global_22350.f_5743++;
	fVar0 = func_594();
	if (bParam2)
	{
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_594();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_44(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_593();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

struct<16> func_626(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	if (iParam0 == -1)
	{
		if (func_627(iParam1) != -1)
		{
			Var0 = { Global_2097152[func_326()].f_5506.f_99[func_627(iParam1)] };
		}
	}
	else if (iParam0 > -1 && iParam0 < 30)
	{
		Var0 = { Global_2097152[func_326()].f_5506.f_99[iParam0] };
	}
	else if (bParam2)
	{
	}
	return Var0;
}

int func_627(int iParam0)
{
	func_336(Global_4010525, &iVar0);
	if ((((iVar0 >= 227 && iVar0 < 257) && iParam0 == -1) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_628())
	{
		return (iVar0 - 227);
	}
	if (iParam0 != -1)
	{
		if (iParam0 >= 227 && iParam0 < 257)
		{
			return (iParam0 - 227);
		}
	}
	return -1;
}

bool func_628()
{
	return Global_1590535[PLAYER::PLAYER_ID()].f_196 != 0;
}

int func_629(int iParam0)
{
	switch (iParam0)
	{
		case -2039755226:
		case 683047626:
			return 0;
			break;
	}
	return 1;
}

int func_630(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -1041692462:
		case 633712403:
			if (!GAMEPLAY::IS_BIT_SET(iParam1, 1))
			{
				return 1;
			}
			break;
		
		case 1545842587:
		case 1011753235:
		case 784565758:
			if (!GAMEPLAY::IS_BIT_SET(iParam1, 1))
			{
				return 1;
			}
			break;
		
		case 349605904:
		case -1622444098:
		case 1923400478:
		case -1361687965:
		case -2119578145:
		case -1790546981:
		case -2039755226:
			if (!GAMEPLAY::IS_BIT_SET(iParam1, 1) && !GAMEPLAY::IS_BIT_SET(iParam1, 2))
			{
				return 1;
			}
			break;
		
		case -1013450936:
		case -1804415708:
		case 1107404867:
			if ((!GAMEPLAY::IS_BIT_SET(iParam1, 1) && !GAMEPLAY::IS_BIT_SET(iParam1, 2)) && !GAMEPLAY::IS_BIT_SET(iParam1, 3))
			{
				return 1;
			}
			break;
		
		case 108773431:
			if (!GAMEPLAY::IS_BIT_SET(iParam1, 1) && iParam2 != 1)
			{
				return 1;
			}
			break;
		
		case -1660945322:
			if (!GAMEPLAY::IS_BIT_SET(iParam1, 2))
			{
				return 1;
			}
			break;
		
		case -1829802492:
			if (!GAMEPLAY::IS_BIT_SET(iParam1, 0) && iParam2 != 1)
			{
				return 1;
			}
			break;
		
		case 683047626:
		case -121446169:
			if (!GAMEPLAY::IS_BIT_SET(iParam1, 0))
			{
				return 1;
			}
			break;
		
		case 1717532765:
			if (GAMEPLAY::IS_BIT_SET(iParam1, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_631(var uParam0)
{
	switch (uParam0->f_66)
	{
		case 1581459400:
			if (uParam0->f_67 > 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_632(int iParam0)
{
	if (iParam0 > -1)
	{
		if (((func_435(PLAYER::PLAYER_ID()) || func_434(PLAYER::PLAYER_ID())) || (func_638() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || GAMEPLAY::IS_BIT_SET(Global_4456448.f_34, 21))
		{
			if ((func_637(Global_1323615[iParam0].f_66) || (func_635(Global_1323615[iParam0].f_66) && func_634(Global_1323615[iParam0].f_66))) || func_633(Global_1323615[iParam0].f_66))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_633(int iParam0)
{
	switch (iParam0)
	{
		case 1721676810:
		case 840387324:
		case -715746948:
		case -801550069:
		case 679453769:
		case 1909700336:
		case 668439077:
		case -1694081890:
		case -2042350822:
		case -2061049099:
		case 373261600:
		case 1742022738:
		case 2139203625:
		case -1890996696:
		case 2038858402:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case -688189648:
		case -1375060657:
		case -1293924613:
		case 1009171724:
		case -1924800695:
		case -1744505657:
		case 444994115:
		case 1637620610:
		case -755532233:
		case 540101442:
		case -1106120762:
		case -1478704292:
		case 628003514:
		case 1537277726:
		case 1239571361:
		case -27326686:
		case -1812949672:
		case -1374500452:
		case -1254331310:
			return 1;
			break;
	}
	return 0;
}

int func_634(int iParam0)
{
	switch (iParam0)
	{
		case 562680400:
			return Global_262145.f_21254;
		
		case 159274291:
			return Global_262145.f_21255;
		
		case 433954513:
			return Global_262145.f_21256;
		
		case -1924433270:
			return Global_262145.f_21257;
		
		case 1356124575:
			return Global_262145.f_21258;
		
		case -32236122:
			return Global_262145.f_21259;
		
		case -1881846085:
			return Global_262145.f_21260;
		
		case -1210451983:
			return Global_262145.f_21261;
		
		case 1897744184:
			return Global_262145.f_21262;
		
		case 884483972:
			return Global_262145.f_21263;
		
		case -1242608589:
			return Global_262145.f_22342;
		
		case 1489874736:
			return Global_262145.f_22908;
		
		case 1483171323:
			return Global_262145.f_22909;
			break;
		
		case 886810209:
			return Global_262145.f_22910;
		
		case -1693015116:
			return Global_262145.f_22911;
		
		case -692292317:
			return Global_262145.f_22912;
		
		case -212993243:
			return Global_262145.f_22913;
		
		case -1435527158:
			return Global_262145.f_22914;
		
		case 1561920505:
			return Global_262145.f_22915;
		
		case 903794909:
			return Global_262145.f_22916;
		
		case -410205223:
			return Global_262145.f_22918;
		
		case -2118308144:
			return Global_262145.f_22919;
		
		case 447548909:
			return Global_262145.f_22920;
		
		case 1181327175:
			return Global_262145.f_22921;
		
		case 2069146067:
			return Global_262145.f_22922;
		
		case -638562243:
			return Global_262145.f_22923;
	}
	if (iParam0 == -391595372)
	{
		return Global_262145.f_22917;
	}
	return 0;
}

int func_635(int iParam0)
{
	switch (iParam0)
	{
		case 562680400:
		case -32236122:
		case 1897744184:
		case 884483972:
		case -1210451983:
		case -1881846085:
		case 1502869817:
		case 1356124575:
		case -1924433270:
		case 177270108:
		case 159274291:
		case 433954513:
		case 387748548:
		case -769147461:
		case -1242608589:
		case 1489874736:
		case 1483171323:
		case 886810209:
		case -1693015116:
		case -692292317:
		case -212993243:
		case -1435527158:
		case -2118308144:
		case 447548909:
		case 1181327175:
		case 1254014755:
		case 2044532910:
		case -638562243:
		case 2069146067:
		case 1416466158:
			return 1;
		
		default:
	}
	if (func_636(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_636(int iParam0)
{
	switch (iParam0)
	{
		case -1146969353:
		case 668439077:
		case -801550069:
		case 1721676810:
		case -688189648:
		case 1009171724:
		case 444994115:
		case 628003514:
		case -27326686:
		case 540101442:
		case -2061049099:
		case 2139203625:
		case 1637620610:
		case -755532233:
		case -1374500452:
		case -1812949672:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
			return 1;
		
		default:
	}
	return 0;
}

int func_637(int iParam0)
{
	switch (iParam0)
	{
		case 989294410:
		case 941494461:
		case -827162039:
		case -312295511:
		case -1649536104:
		case 1180875963:
		case -1590337689:
		case 682434785:
		case -1912017790:
		case -286046740:
			return 1;
		
		default:
	}
	return 0;
}

bool func_638()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_640();
	}
	return func_639(Global_4456448.f_194990);
}

int func_639(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_640()
{
	return Global_2450632.f_17;
}

int func_641(int iParam0)
{
	switch (iParam0)
	{
		case 788747387:
		case -82626025:
		case -1600252419:
		case 970385471:
		case -50547061:
		case 1621617168:
		case -1984275979:
		case -42959138:
		case -1845487887:
		case 710198397:
		case -1671539132:
		case -339587598:
		case 1075432268:
		case 744705981:
		case -1660661558:
		case 837858166:
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case -1281684762:
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case -1295027632:
		case -1214293858:
		case 1077420264:
		case -901163259:
		case 165154707:
		case 1824333165:
		case 1341619767:
		case 970356638:
		case -1214505995:
		case -644710429:
		case 621481054:
		case -2122757008:
		case -1746576111:
		case 1981688531:
		case -1673356438:
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

int func_642(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 989294410:
		case 941494461:
		case -827162039:
		case -312295511:
		case -1649536104:
		case 1180875963:
		case 682434785:
		case -1912017790:
		case -1590337689:
		case 219613597:
		case 1945374990:
		case 1653666139:
		case -1881846085:
			return 1;
		
		case 433954513:
			if (func_644(Global_4456448.f_232883) || func_643(Global_4456448.f_232883))
			{
				if (!bParam1)
				{
					return 1;
				}
			}
			break;
		
		case 1356124575:
		case -2096818938:
			if (func_644(Global_4456448.f_232883))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_643(int iParam0)
{
	return iParam0 == 50;
}

bool func_644(int iParam0)
{
	return iParam0 == 49;
}

int func_645(int iParam0)
{
	if (Global_2513258)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_GET_POSIX_TIME();
	if (iParam0 == -602287871)
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -2039755226)
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 16646064 || iParam0 == -899509638)
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223258115)
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1797613329)
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1126264336)
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1119641113)
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 2123327359)
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1757836725)
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829802492)
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 86520421)
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1549126457)
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 390201602)
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 683047626)
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1232836011)
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -777172681)
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 101905590)
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -663299102)
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1887331236)
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 741090084)
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2103821244)
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1071380347)
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2067820283)
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 819197656)
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 482197771)
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -401643538)
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 349315417)
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -915704871)
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 237764926)
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 822018448)
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1606187161)
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1009268949)
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2035069708)
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2115793025)
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -570033273)
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -255678177)
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -609625092)
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -405626514)
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 6774487)
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -674927303)
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1404136503)
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -440768424)
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1558399629)
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1026149675)
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -618617997)
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1289178744)
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1842748181)
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2140431165)
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1491277511)
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523428744)
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1873600305)
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 989294410)
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 941494461)
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -827162039)
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -312295511)
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1649536104)
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1180875963)
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 682434785)
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1912017790)
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1590337689)
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1045541610)
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2022483795)
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -239841468)
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1790834270)
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 196747873)
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -566387422)
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 627535535)
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -757735410)
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2048333973)
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -482719877)
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1034187331)
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1093792632)
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1758137366)
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1886268224)
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1074745671)
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 272929391)
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 408825843)
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1938952078)
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -907477130)
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1987130134)
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1747439474)
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 469291905)
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -48031959)
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2098954619)
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_646(int iParam0)
{
	if (func_641(iParam0))
	{
		return 1;
	}
	if ((((((((((((((((((((iParam0 == -1590337689 || iParam0 == 682434785) || iParam0 == -312295511) || iParam0 == -1649536104) || iParam0 == 941494461) || iParam0 == 1180875963) || iParam0 == 989294410) || iParam0 == -1912017790) || iParam0 == -1881846085) || iParam0 == 1356124575) || iParam0 == -1924433270) || iParam0 == -1435527158) || iParam0 == -692292317) || iParam0 == -1693015116) || iParam0 == 1489874736) || iParam0 == 886810209) || iParam0 == 1483171323) || iParam0 == 219613597) || iParam0 == 1945374990) || iParam0 == 1653666139) || iParam0 == 2069146067)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1283517198:
		case 1560980623:
		case 1171614426:
		case 837858166:
		case -1207431159:
		case -1476447243:
		case -1807623979:
		case -399841706:
		case -823509173:
		case 1074326203:
		case 630371791:
		case 2053223216:
		case 1824333165:
		case 850991848:
		case -150975354:
		case -613725916:
		case 524108981:
		case -1987130134:
		case -233098306:
		case 121658888:
		case 444171386:
		case 1886712733:
		case -1346687836:
		case -1743316013:
		case 893081117:
		case 1132262048:
		case -713569950:
		case 788747387:
		case 745926877:
		case 1147287684:
		case -537896628:
		case 1876516712:
		case -50547061:
		case 1621617168:
		case 1394036463:
		case 368211810:
		case -2072933068:
		case 321739290:
		case -644710429:
		case -1006919392:
		case 1682114128:
		case 1033245328:
		case 276773164:
		case 509498602:
		case -2140210194:
		case -884690486:
		case -901163259:
		case -2130482718:
		case 534258863:
		case 970356638:
		case -1241712818:
		case 1127131465:
		case -1647941228:
		case 1938952078:
		case -836512833:
		case 1353720154:
		case 1491375716:
		case 1030400667:
		case 184361638:
		case 920453016:
		case 240201337:
		case 642617954:
		case 744705981:
		case 1949211328:
		case -1745203402:
		case 1019737494:
		case 444583674:
		case 1518533038:
		case 970385471:
		case -1860900134:
		case 1058115860:
		case 861409633:
		case -120287622:
		case -1281684762:
		case -114627507:
		case 621481054:
		case -1214293858:
		case -1746576111:
		case 1233534620:
		case -1043459709:
		case -1660661558:
		case -748008636:
		case 868868440:
		case -845961253:
		case 165154707:
		case -784816453:
		case 475220373:
		case 1783355638:
		case 904750859:
		case -1050465301:
		case -2052737935:
		case 569305213:
		case -2007026063:
		case -2137348917:
		case 2046537925:
		case -34623805:
		case 456714581:
		case -1536924937:
		case -1779120616:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case 353883353:
		case -119658072:
		case 943752001:
		case 2112052861:
		case 741586030:
		case -488123221:
		case 356391690:
		case 390902130:
		case 1933662059:
		case -1098802077:
		case 782665360:
		case -1205689942:
		case -845979911:
		case -1705304628:
		case -1776615689:
		case 734217681:
		case -82626025:
		case -1700801569:
		case -1030275036:
		case -616331036:
		case -1214505995:
		case -1683328900:
		case 1922257928:
		case 1044954915:
		case 231083307:
		case 728614474:
		case 400514754:
		case 1747439474:
		case -214455498:
		case -1961627517:
		case -2122757008:
		case 771711535:
		case -1066334226:
		case -282946103:
		case -339587598:
		case 1075432268:
		case 1951180813:
		case -730904777:
		case 1956216962:
		case 586013744:
		case -956048545:
		case -2096818938:
		case -1323100960:
		case -442313018:
		case 48339065:
		case -947761570:
		case 1981688531:
		case 1070967343:
		case 1941029835:
		case 2078290630:
		case 1784254509:
		case 2091594960:
		case 1641462412:
		case -2076478498:
		case 1445631933:
		case 2016027501:
		case -877478386:
		case -1579533167:
		case -2058878099:
		case 712162987:
		case 1917016601:
		case -1255698084:
		case -1352468814:
		case 290013743:
		case -1770643266:
		case 516990260:
		case 887537515:
		case 2132890591:
		case -1600252419:
		case -1673356438:
		case 1077420264:
		case 1341619767:
		case 2025593404:
		case 867467158:
		case -311022263:
		case 437538602:
		case 908897389:
		case 1448677353:
		case 710198397:
		case -1671539132:
		case 1543134283:
		case -827162039:
		case 777714999:
		case -305727417:
		case 387748548:
		case 177270108:
			return 0;
			break;
	}
	if (((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_647(int iParam0)
{
	if (func_650(&(Global_1323615[iParam0].f_66)))
	{
		func_648(iParam0);
	}
}

void func_648(int iParam0)
{
	func_649(&(Global_1323615[iParam0].f_66));
	func_605(iParam0, &(Global_1323615[iParam0]), 0, -1, 0, 0);
}

void func_649(var uParam0)
{
	switch (*uParam0)
	{
		case 2072156101:
		case 1739845664:
			*uParam0 = -16948145;
			break;
		
		case 728614474:
			*uParam0 = -810318068;
			break;
		
		case -1346687836:
		case -907477130:
		case 893081117:
		case 1132262048:
			*uParam0 = -1743316013;
			break;
	}
}

int func_650(var uParam0)
{
	switch (*uParam0)
	{
		case 2072156101:
		case 1739845664:
		case 728614474:
		case -1346687836:
		case 893081117:
		case 1132262048:
			return 1;
			break;
	}
	return 0;
}

void func_651()
{
	if (Global_2537071.f_5900)
	{
		func_652(&uVar0, &(Local_147.f_181.f_70), "MPCT_YC_AGH");
	}
	else
	{
		func_652(&uVar0, &(Local_147.f_181.f_70), "MPCT_MECHH");
	}
	func_40(-1);
	if (func_904())
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			func_111(237, "BB_SELECT", -1, 0);
			func_111(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_110(176, "BB_SELECT", -1);
			func_110(177, "BB_BACK", -1);
		}
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = uVar0;
}

void func_652(var uParam0, var uParam1, char* sParam2)
{
	func_60(0, 0);
	func_59(sParam2);
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	*uParam0 = 0;
	iVar27 = 0;
	while (iVar27 < 25)
	{
		if ((((func_372(iVar27, -1) > 0 && func_659(iVar27)) && !func_364(iVar27)) && iVar27 != 11) && iVar27 != 12)
		{
			iVar30 = func_357(iVar27, -1);
			if (iVar27 == 13)
			{
				iVar30 = 11;
			}
			else if (iVar27 == 18)
			{
				iVar30 = 10;
			}
			iVar26 = 0;
			while (iVar26 < iVar30)
			{
				iVar28 = (func_354(iVar27) + iVar26);
				func_353(iVar28, &iVar29, 1);
				if (iVar29 >= 0 && !func_335(iVar28))
				{
					if ((((STREAMING::IS_MODEL_A_VEHICLE(func_323(iVar29)) && !func_642(func_323(iVar29), 1)) && !func_641(func_323(iVar29))) && func_350(func_323(iVar29))) && !func_632(iVar29))
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_1323615[iVar29].f_102, 10))
						{
							iVar0[iVar27] = 1;
							iVar26 = 9999;
						}
					}
				}
				iVar26++;
			}
			MemCopy(&Var31, {Global_1049922[func_372(iVar27, -1)].f_16}, 6);
			if (iVar27 == 13)
			{
				StringCopy(&Var31, func_657(func_658(PLAYER::PLAYER_ID())), 24);
			}
			if (iVar27 == 14)
			{
				StringCopy(&Var31, "MP_BHUB_CLUBG", 24);
			}
			else if (iVar27 == 15)
			{
				StringCopy(&Var31, func_656(1), 24);
			}
			else if (iVar27 == 16)
			{
				StringCopy(&Var31, func_656(2), 24);
			}
			else if (iVar27 == 17)
			{
				StringCopy(&Var31, func_656(3), 24);
			}
			if (iVar27 == 18)
			{
				StringCopy(&Var31, func_655(1), 24);
			}
			else if (iVar27 == 19)
			{
				StringCopy(&Var31, func_655(2), 24);
			}
			else if (iVar27 == 20)
			{
				StringCopy(&Var31, func_655(3), 24);
			}
			else if (iVar27 == 21)
			{
				StringCopy(&Var31, "CASINO_GARNAME", 24);
			}
			else if (iVar27 == 22)
			{
				StringCopy(&Var31, "ARCADE_GARNAME", 24);
			}
			StringConCat(&Var31, "S", 24);
			func_42(*uParam0, &Var31, 0, iVar0[iVar27], 0, 0);
			(*uParam1)[*uParam0] = iVar27;
			*uParam0++;
		}
		iVar27++;
	}
	iVar27 = 0;
	while (iVar27 < 3)
	{
		iVar41 = iVar27;
		iVar26 = 0;
		while (iVar26 < func_601(iVar41))
		{
			iVar28 = (func_355(iVar41) + iVar26);
			func_353(iVar28, &iVar29, 1);
			if (iVar29 >= 0 && !func_335(iVar28))
			{
				if ((((STREAMING::IS_MODEL_A_VEHICLE(func_323(iVar29)) && !func_642(func_323(iVar29), 1)) && !func_641(func_323(iVar29))) && func_350(func_323(iVar29))) && !func_632(iVar29))
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_1323615[iVar29].f_102, 10))
					{
						iVar37[iVar27] = 1;
						iVar26 = 9999;
					}
				}
			}
			iVar26++;
		}
		if ((iVar37[iVar27] && iVar41 != 0) && iVar41 != 1)
		{
			func_42(*uParam0, func_654(iVar41), 0, 1, 0, 0);
			(*uParam1)[*uParam0] = func_653(iVar41);
			*uParam0++;
		}
		iVar27++;
	}
}

int func_653(int iParam0)
{
	return (1000 + iParam0);
}

char* func_654(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GRTRUCK";
		
		case 2:
			return "MP_BHUB_CLUBT";
		
		case 1:
			return "MP_BHUB_GAR0";
		
		default:
	}
	return "";
}

char* func_655(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "ARENA_GAR_F0";
			break;
		
		case 2:
			return "ARENA_GAR_F1";
			break;
		
		case 3:
			return "ARENA_GAR_F2";
			break;
	}
	return "";
}

char* func_656(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_BHUB_GAR1";
			break;
		
		case 2:
			return "MP_BHUB_GAR2";
			break;
		
		case 3:
			return "MP_BHUB_GAR3";
			break;
	}
	return "";
}

char* func_657(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_DBASE_1";
			break;
		
		case 2:
			return "MP_DBASE_2";
			break;
		
		case 3:
			return "MP_DBASE_3";
			break;
		
		case 4:
			return "MP_DBASE_4";
			break;
		
		case 5:
			return "MP_DBASE_6";
			break;
		
		case 6:
			return "MP_DBASE_7";
			break;
		
		case 7:
			return "MP_DBASE_8";
			break;
		
		case 8:
			return "MP_DBASE_9";
			break;
		
		case 9:
			return "MP_DBASE_10";
			break;
	}
	return "";
}

int func_658(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1590535[iParam0].f_274.f_271;
	}
	return 0;
}

int func_659(int iParam0)
{
	if (iParam0 == 22)
	{
		if (!func_365())
		{
			return 0;
		}
	}
	return 1;
}

void func_660()
{
	func_60(0, 0);
	func_59("MPCT_YC_AGH");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	bVar2 = true;
	if (func_386(PLAYER::PLAYER_ID()))
	{
		iVar3 = func_385(PLAYER::PLAYER_ID());
		iVar1 = func_104(40);
		if ((((((((iVar1 > 0 || !func_424(40)) || !func_454(40)) || func_375(0)) || func_384(0, 1024)) || func_383(0)) || func_382(PLAYER::PLAYER_ID(), 0)) || func_376(PLAYER::PLAYER_ID(), iVar3, 100f)) || Global_262145.f_12643)
		{
			bVar2 = false;
		}
		func_596(40, iVar0, "MPCT_YC_YAH0", bVar2);
		func_42(iVar0, "MPCT_CASH", 1, bVar2, 0, 0);
		func_595(func_65(40), 0);
	}
	else
	{
		func_42(iVar0, "MPCT_YC_YAH0", 0, 0, 0, 0);
		func_42(iVar0, "", 1, 0, 0, 0);
		func_592(15, 0);
	}
	iVar0++;
	if (func_386(PLAYER::PLAYER_ID()))
	{
		bVar2 = true;
		iVar4 = func_385(PLAYER::PLAYER_ID());
		iVar1 = func_104(41);
		if ((((((((iVar1 > 0 || !func_424(41)) || !func_454(41)) || func_375(1)) || func_384(1, 1024)) || func_383(1)) || func_382(PLAYER::PLAYER_ID(), 1)) || func_376(PLAYER::PLAYER_ID(), iVar4, 100f)) || Global_262145.f_12642)
		{
			bVar2 = false;
		}
		func_596(41, iVar0, "MPCT_YC_YAB0", bVar2);
		func_42(iVar0, "MPCT_CASH", 1, bVar2, 0, 0);
		func_595(func_65(41), 0);
	}
	else
	{
		func_42(iVar0, "MPCT_YC_YAB0", 0, 0, 0, 0);
		func_42(iVar0, "", 1, 0, 0, 0);
		func_592(15, 0);
	}
	iVar0++;
	if (func_386(PLAYER::PLAYER_ID()))
	{
		iVar1 = func_104(42);
		func_349(&bVar6, &bVar5);
		iVar7 = func_385(PLAYER::PLAYER_ID());
		bVar2 = true;
		if ((((((((iVar1 > 0 || !func_424(42)) || !func_454(42)) || func_348(PLAYER::PLAYER_ID())) || func_339(1133903872)) || !bVar6) || !bVar5) || !func_376(PLAYER::PLAYER_ID(), iVar7, 100f)) || Global_262145.f_12641)
		{
			bVar2 = false;
		}
		func_596(42, iVar0, "MPCT_YC_YAP0", bVar2);
		iVar8 = func_65(42);
		if (iVar8 <= 0)
		{
			func_42(iVar0, "PEG_FREE", 0, bVar2, 0, 0);
		}
		else
		{
			func_42(iVar0, "MPCT_CASH", 1, bVar2, 0, 0);
			func_595(iVar8, 0);
		}
	}
	else
	{
		func_42(iVar0, "MPCT_YC_YAP0", 0, 1, 0, 0);
		func_42(iVar0, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	iVar0++;
	if (Global_262145.f_28459)
	{
		if (func_386(PLAYER::PLAYER_ID()))
		{
			iVar1 = func_104(64);
			bVar2 = true;
			if (((iVar1 > 0 || !func_424(64)) || !func_454(64)) || Global_262145.f_28467)
			{
				bVar2 = false;
			}
			func_596(64, iVar0, "YACHT_REQUEST", bVar2);
			if (func_65(64) > 0)
			{
				func_42(iVar0, "MPCT_CASH", 1, bVar2, 0, 0);
				func_595(func_65(64), 0);
			}
		}
		else
		{
			func_42(iVar0, "YACHT_REQUEST", 0, 0, 0, 0);
			func_42(iVar0, "", 1, 0, 0, 0);
			func_592(15, 0);
		}
		iVar0++;
	}
	func_40(-1);
	if (func_904())
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			func_111(237, "BB_SELECT", -1, 0);
			func_111(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_110(176, "BB_SELECT", -1);
			func_110(177, "BB_BACK", -1);
		}
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = iVar0;
}

void func_661()
{
	switch (Local_147.f_178)
	{
		case 18:
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_673();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_284();
				}
				else
				{
					func_284();
					if (GAMEPLAY::IS_BIT_SET(Local_147.f_359, 18))
					{
						if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_65(39), 0, 1, 0, -1, 0) || GAMEPLAY::IS_BIT_SET(Local_147.f_359, 17))
						{
							iVar0 = func_666(283351220, func_65(39), 0, 0);
							if (iVar0 == 1)
							{
								GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 17);
								GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 18);
								GAMEPLAY::SET_BIT(&(Global_2439138.f_3992), 7);
								GAMEPLAY::SET_BIT(&(Global_2439138.f_3992), 0);
								GAMEPLAY::SET_BIT(&(Global_2439138.f_3992), 12);
							}
							else if (iVar0 == 0)
							{
								GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 17);
								GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 18);
								func_71(1, 0);
							}
							else
							{
								return;
							}
						}
						else
						{
							func_1(Local_147.f_1, "BACALAU", "BACAL_UNABLE", &Local_1270, 1);
							func_71(1, 0);
						}
					}
					if (GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 0))
					{
						if (GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 1))
						{
							if (GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 2))
							{
								func_1(Local_147.f_1, "BACALAU", "BACAL_ACCEPT", &Local_1270, 1);
								func_32(4);
							}
							else
							{
								if (func_90())
								{
									func_663(func_65(39), 5, 2, 1);
								}
								func_1(Local_147.f_1, "BACALAU", "BACAL_UNABLE", &Local_1270, 1);
								func_71(1, 0);
							}
							func_662();
						}
					}
				}
			}
			break;
	}
}

void func_662()
{
	GAMEPLAY::CLEAR_BIT(&(Global_2439138.f_3992), 0);
	GAMEPLAY::CLEAR_BIT(&(Global_2439138.f_3992), 1);
	GAMEPLAY::CLEAR_BIT(&(Global_2439138.f_3992), 2);
	GAMEPLAY::CLEAR_BIT(&(Global_2439138.f_3992), 3);
	GAMEPLAY::CLEAR_BIT(&(Global_2439138.f_3992), 4);
	GAMEPLAY::CLEAR_BIT(&(Global_2439138.f_3992), 5);
	GAMEPLAY::CLEAR_BIT(&(Global_2439138.f_3992), 6);
	GAMEPLAY::CLEAR_BIT(&(Global_2439138.f_3992), 7);
	GAMEPLAY::CLEAR_BIT(&(Global_2439138.f_3992), 11);
	GAMEPLAY::CLEAR_BIT(&(Global_2439138.f_3992), 12);
	GAMEPLAY::CLEAR_BIT(&(Global_2439138.f_3992), 15);
}

void func_663(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	StringCopy(&Var0, func_665(iParam1), 16);
	StringCopy(&Var4, func_664(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar12 = 1287308202;
			break;
		
		case 1:
			iVar12 = 691372038;
			break;
		
		case 2:
			iVar12 = 1480707108;
			break;
		
		case 3:
			iVar12 = 1512499951;
			break;
		
		case 4:
			iVar12 = 562283735;
			break;
		
		case 5:
			iVar12 = -154732333;
			break;
		
		case 6:
			iVar12 = -1362660491;
			break;
		
		case 7:
			iVar12 = 645708827;
			break;
		
		case 8:
			iVar12 = 767907967;
			break;
		
		case 9:
			iVar12 = -1970151306;
			break;
		
		case 10:
			iVar12 = 718859568;
			break;
		
		case 11:
			iVar12 = -1955564771;
			break;
		
		case 12:
			iVar12 = 892388724;
			break;
		
		case 13:
			iVar12 = -1426920838;
			break;
		
		case 14:
			iVar12 = -664597565;
			break;
		
		case 15:
			iVar12 = 1864522104;
			break;
		
		case 16:
			iVar12 = 215608230;
			break;
		
		case 17:
			iVar12 = -1100963799;
			break;
	}
	if (func_90())
	{
		func_78(iVar12, iParam0, &iVar13, bParam3, bParam3, 0);
		Global_4263954[iVar13].f_14.f_40 = { Var0 };
		Global_4263954[iVar13].f_14.f_44 = { Var4 };
	}
	else
	{
		NETWORKCASH::NETWORK_REFUND_CASH(iParam0, &Var0, &Var4, bParam3);
	}
}

char* func_664(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_665(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

int func_666(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 < 0)
	{
		return 1;
	}
	if (func_90())
	{
		if (func_671(iParam0, iParam1))
		{
			if (func_670(iLocal_553) == 2)
			{
				if (iParam0 != 1064954035)
				{
					UNK3::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_669(iLocal_553));
					func_668(iParam0, iParam1, iParam3);
					func_81(iLocal_553);
				}
				return 1;
			}
			else
			{
				if (bParam2)
				{
					func_667(func_92(1, 1), Local_147.f_360, Local_147.f_358);
				}
				if (iParam0 != 1064954035)
				{
					func_81(iLocal_553);
				}
				return 0;
			}
		}
	}
	else
	{
		func_668(iParam0, iParam1, iParam3);
		return 1;
	}
	return -1;
}

void func_667(int iParam0, int iParam1, var uParam2)
{
	Var0 = -770184899;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

void func_668(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case -407201236:
			NETWORKCASH::NETWORK_SPENT_NO_COPS(iParam1, 0, 1);
			break;
		
		case -1885444887:
			NETWORKCASH::NETWORK_SPENT_HIRE_MERCENARY(iParam1, 0, 1);
			break;
		
		case -671062876:
			NETWORKCASH::NETWORK_SPENT_BULL_SHARK(iParam1, 0, 1);
			break;
		
		case 2131324797:
			NETWORKCASH::NETWORK_SPENT_BUY_OFFTHERADAR(iParam1, 0, 1);
			break;
		
		case -180141073:
			Var0 = { func_49(PLAYER::PLAYER_ID()) };
			NETWORKCASH::NETWORK_SPENT_BUY_WANTEDLEVEL(iParam1, &Var0, 0, 1);
			break;
		
		case 1108628223:
			NETWORKCASH::NETWORK_SPENT_BUY_REVEAL_PLAYERS(iParam1, 0, 1);
			break;
		
		case 1173654533:
			NETWORKCASH::NETWORK_SPENT_AMMO_DROP(iParam1, 0, 1);
			break;
		
		case 1208553146:
			NETWORKCASH::NETWORK_SPENT_BOAT_PICKUP(iParam1, 0, 1);
			break;
		
		case -663944335:
			NETWORKCASH::NETWORK_BUY_HELI_STRIKE(iParam1, 0, 1);
			break;
		
		case 1515774909:
			NETWORKCASH::NETWORK_BUY_AIRSTRIKE(iParam1, 0, 1);
			break;
		
		case -754024203:
			NETWORKCASH::NETWORK_SPENT_HELI_PICKUP(iParam1, 0, 1);
			break;
		
		case 1931729587:
			NETWORKCASH::NETWORK_SPENT_HIRE_MUGGER(iParam1, 0, 1);
			break;
		
		case 283351220:
			NETWORKCASH::NETWORK_BUY_ITEM(iParam1, Global_2439138.f_3993, 10, -1, 0, "PEGASUS", 0, 0, 0, 1);
			break;
		
		case -1555026615:
			NETWORKCASH::NETWORK_SPENT_HELI_PICKUP(iParam1, 0, 1);
			break;
		
		case 522351365:
			NETWORKCASH::NETWORK_SPENT_BOAT_PICKUP(iParam1, 0, 1);
			break;
		
		case 74383614:
			unk_0xE23ADC6FCB1F29AE(iParam1, 0, 1);
			break;
		
		case 1941570214:
			unk_0x0FE8E1FCD2B86B33(iParam1, uParam2, 0, 1);
			break;
	}
}

int func_669(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66;
	}
	return -1;
}

int func_670(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2;
	}
	return 0;
}

int func_671(int iParam0, int iParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 17))
	{
		func_79(&iLocal_553, -1135378931, 537254313, 1474183246, iParam0, iParam1, 4, 3);
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 17);
	}
	else if (func_672(iLocal_553))
	{
		return 1;
	}
	return 0;
}

int func_672(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2 != 1;
	}
	return 0;
}

void func_673()
{
	func_60(0, 0);
	func_59("MPCT_GB_AGH");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	if (func_479(74, 0, 0))
	{
		bVar2 = true;
		iVar1 = func_104(39);
		if ((iVar1 > 0 || !func_424(39)) || !func_454(39))
		{
			bVar2 = false;
		}
		func_596(39, iVar0, "MPCT_GB_AG0", bVar2);
		func_42(iVar0, "MPCT_CASH", 1, bVar2, 0, 0);
		func_595(func_65(39), 0);
	}
	else
	{
		func_42(iVar0, "MPCT_GB_AG0", 0, 1, 0, 0);
		func_42(iVar0, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	iVar0++;
	func_40(-1);
	if (func_904())
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			func_111(237, "BB_SELECT", -1, 0);
			func_111(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_110(176, "BB_SELECT", -1);
			func_110(177, "BB_BACK", -1);
		}
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = iVar0 + 1;
}

void func_674()
{
	if (func_62(0, -1, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
		{
			func_675();
			GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
			func_284();
		}
		else
		{
			func_284();
		}
	}
}

void func_675()
{
	func_60(0, 0);
	StringCopy(&Var1, "SCLUB_NM_", 16);
	StringIntConCat(&Var1, iLocal_1276, 16);
	func_59(&Var1);
	func_57(1, 0, 0, 0, 0);
	func_56(1, 1, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	func_42(iVar0, "MP_STRIP_IN", 0, 1, 0, 0);
	iVar0++;
	func_42(iVar0, "BB_LC_EXIT", 0, 1, 0, 0);
	iVar0++;
	Local_147.f_181.f_2 = iVar0;
	func_109(Local_147.f_181.f_69, 1, 0);
	Local_147.f_181.f_3[1] = 0;
	Local_147.f_181.f_36[1] = 0;
	func_40(-1);
	if (func_904())
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			func_111(237, "BB_SELECT", -1, 0);
			func_111(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_110(176, "BB_SELECT", -1);
			func_110(177, "BB_BACK", -1);
		}
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
}

void func_676()
{
	switch (Local_147.f_178)
	{
		case 15:
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_677();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_284();
				}
				else
				{
					func_284();
				}
			}
			break;
	}
}

void func_677()
{
	func_60(0, 0);
	func_59("MPCT_RON");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	if (func_479(106, 0, 0))
	{
		iVar1 = func_104(21);
		bVar2 = true;
		if (iVar1 > 0)
		{
			bVar2 = false;
		}
		func_596(21, iVar0, "GC_MENU48", bVar2);
		if (func_65(21) > 0)
		{
			func_42(iVar0, "MPCT_CASH", 1, bVar2, 0, 0);
			func_595(func_65(21), 0);
		}
	}
	else
	{
		func_42(iVar0, "GC_MENU48", 0, 1, 0, 0);
		func_42(iVar0, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	iVar0++;
	func_40(-1);
	if (func_904())
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			func_111(237, "BB_SELECT", -1, 0);
			func_111(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_110(176, "BB_SELECT", -1);
			func_110(177, "BB_BACK", -1);
		}
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = iVar0 + 1;
}

void func_678()
{
	switch (Local_147.f_178)
	{
		case 14:
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_679();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_284();
				}
				else
				{
					func_284();
				}
			}
			break;
	}
}

void func_679()
{
	func_60(0, 0);
	func_59("MPCT_GERALD");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	if (func_479(97, 0, 0))
	{
		iVar1 = func_104(17);
		bVar2 = true;
		if (iVar1 > 0)
		{
			bVar2 = false;
		}
		func_596(17, iVar0, "GC_MENU48", bVar2);
		if (func_65(17) > 0)
		{
			func_42(iVar0, "MPCT_CASH", 1, bVar2, 0, 0);
			func_595(func_65(17), 0);
		}
	}
	else
	{
		func_42(iVar0, "GC_MENU48", 0, 1, 0, 0);
		func_42(iVar0, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	iVar0++;
	func_40(-1);
	if (func_904())
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			func_111(237, "BB_SELECT", -1, 0);
			func_111(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_110(176, "BB_SELECT", -1);
			func_110(177, "BB_BACK", -1);
		}
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = iVar0 + 1;
}

void func_680()
{
	switch (Local_147.f_178)
	{
		case 13:
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_681();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_284();
				}
				else
				{
					func_284();
				}
			}
			break;
	}
}

void func_681()
{
	func_60(0, 0);
	func_59("MPCT_MARTIN");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	if (func_479(100, 0, 0))
	{
		iVar1 = func_104(19);
		bVar2 = true;
		if (iVar1 > 0)
		{
			bVar2 = false;
		}
		func_596(19, iVar0, "GC_MENU48", bVar2);
		if (func_65(19) > 0)
		{
			func_42(iVar0, "MPCT_CASH", 1, bVar2, 0, 0);
			func_595(func_65(19), 0);
		}
	}
	else
	{
		func_42(iVar0, "GC_MENU48", 0, 1, 0, 0);
		func_42(iVar0, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	iVar0++;
	func_40(-1);
	if (func_904())
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			func_111(237, "BB_SELECT", -1, 0);
			func_111(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_110(176, "BB_SELECT", -1);
			func_110(177, "BB_BACK", -1);
		}
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = iVar0 + 1;
}

void func_682()
{
	switch (Local_147.f_178)
	{
		case 12:
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_683();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_284();
				}
				else
				{
					func_284();
				}
			}
			break;
	}
}

void func_683()
{
	func_60(0, 0);
	func_59("MPCT_SIMEON");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	if (func_479(99, 0, 0))
	{
		iVar1 = func_104(18);
		bVar2 = true;
		if (iVar1 > 0)
		{
			bVar2 = false;
		}
		func_596(18, iVar0, "GC_MENU48", bVar2);
		if (func_65(18) > 0)
		{
			func_42(iVar0, "MPCT_CASH", 1, bVar2, 0, 0);
			func_595(func_65(18), 0);
		}
	}
	else
	{
		func_42(iVar0, "GC_MENU48", 0, 1, 0, 0);
		func_42(iVar0, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	iVar0++;
	func_40(-1);
	if (func_904())
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			func_111(237, "BB_SELECT", -1, 0);
			func_111(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_110(176, "BB_SELECT", -1);
			func_110(177, "BB_BACK", -1);
		}
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = iVar0 + 1;
}

void func_684()
{
	if (iLocal_522 == -2)
	{
		if (func_62(0, -1, 0))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
			{
				func_720();
				GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
				func_284();
			}
			else
			{
				func_284();
			}
		}
	}
	else if (bLocal_521)
	{
		if (func_719(91, 3) == 1)
		{
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_720();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_284();
				}
				else
				{
					func_284();
				}
			}
		}
		else
		{
			func_32(4);
		}
	}
	else
	{
		func_706();
		if (iLocal_1333 == 0)
		{
			if (Global_1322852)
			{
				if (iLocal_907 == 0)
				{
					if (func_705(&iLocal_907, func_337()))
					{
					}
				}
				else if (iLocal_907 == 4 || iLocal_907 == 2)
				{
					UI::_SET_WARNING_MESSAGE_2("GAR_REP_WARNH", "PERV_INS_REP1", iLocal_908, "PERV_INS_REP2", 0, -1, 0, 0, 1, 0);
					iLocal_908 = 18;
				}
				else if ((Global_1322852.f_2 > 0 && NETWORKCASH::NETWORK_CAN_SPEND_MONEY(Global_1322852.f_2, 0, 1, 0, -1, 0)) || Global_1322852.f_2 <= 0)
				{
					if (func_90())
					{
						iLocal_1333++;
					}
					else
					{
						func_700(1);
					}
				}
			}
			else if (func_719(91, 3) == 1)
			{
				if (func_62(0, -1, 0))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
					{
						func_685();
						GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
						func_284();
					}
					else
					{
						func_284();
					}
				}
			}
			else
			{
				func_32(4);
			}
		}
	}
}

void func_685()
{
	func_60(0, 0);
	func_59("MPCT_INSH");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	iLocal_519 = 0;
	iLocal_520 = 0;
	if (func_698(0) && (!func_692(0, 0, 0, -1, 1) || Global_1370526))
	{
		func_688(0, &iVar0);
		bVar5 = true;
	}
	if (iLocal_522 != -1)
	{
		if (iLocal_522 < 25)
		{
			if (func_372(iLocal_522, -1) > 0 && !func_364(iLocal_522))
			{
				iVar4 = func_357(iLocal_522, -1);
				if (iLocal_522 == 13)
				{
					iVar4 = 11;
				}
				else if (iLocal_522 == 18)
				{
					iVar4 = 10;
				}
				iVar1 = 0;
				while (iVar1 < iVar4)
				{
					iVar2 = (func_354(iLocal_522) + iVar1);
					func_353(iVar2, &iVar3, 1);
					if (iVar3 > 0 || (!bVar5 && iVar3 == 0))
					{
						func_688(iVar3, &iVar0);
					}
					iVar1++;
				}
			}
		}
		else
		{
			iVar6 = func_356(iLocal_522);
			iVar1 = 0;
			while (iVar1 < func_601(iVar6))
			{
				iVar2 = (func_355(iVar6) + iVar1);
				func_353(iVar2, &iVar3, 1);
				if (iVar3 > 0 || (!bVar5 && iVar3 == 0))
				{
					func_688(iVar3, &iVar0);
				}
				iVar1++;
			}
		}
	}
	if (iLocal_520 > 1)
	{
		func_687(&iVar0);
	}
	if (iVar0 <= 0)
	{
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
		func_32(4);
		return;
	}
	Local_147.f_181.f_2 = iVar0;
	if (Local_147.f_181.f_69 >= Local_147.f_181.f_2)
	{
		Local_147.f_181.f_69 = 1;
	}
	else if (Local_147.f_181.f_69 < 0)
	{
		Local_147.f_181.f_69 = 0;
	}
	iLocal_518 = func_686(iLocal_599[Local_147.f_181.f_69]);
	func_109(Local_147.f_181.f_69, 1, 0);
	Local_147.f_181.f_3[1] = 0;
	Local_147.f_181.f_36[1] = 0;
	func_40(-1);
	if (func_904())
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			func_111(237, "BB_SELECT", -1, 0);
			func_111(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_110(176, "BB_SELECT", -1);
			func_110(177, "BB_BACK", -1);
		}
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	bLocal_521 = false;
}

int func_686(int iParam0)
{
	return Global_1323615[iParam0].f_104;
}

void func_687(var uParam0)
{
	func_42(*uParam0, "MPCT_INSALL", 0, 1, 0, 0);
	if (iLocal_519 > 0)
	{
		func_42(*uParam0, "MPCT_INSCOST", 1, 1, 0, 0);
		func_595(iLocal_519, 0);
	}
	else
	{
		func_42(*uParam0, "MPCT_NOCOST", 0, 1, 0, 0);
	}
	*uParam0++;
}

void func_688(int iParam0, var uParam1)
{
	if (func_698(iParam0))
	{
		func_336(iParam0, &iVar7);
		iVar8 = 1;
		if (func_631(&(Global_1323615[iParam0])))
		{
			iVar8++;
		}
		if (func_630(func_323(iParam0), Global_1323615[iParam0].f_77, Global_1323615[iParam0].f_9[10]) && func_629(func_323(iParam0)))
		{
			iVar8++;
		}
		Var15 = { func_626(-1, iVar7, 1) };
		StringCopy(&Var9, "MPCT_INSVEH", 24);
		StringIntConCat(&Var9, iVar8, 24);
		func_42(*uParam1, &Var9, iVar8, 1, 0, 0);
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Var15))
		{
			func_625(&Var15, 0, 0, 0);
		}
		else
		{
			func_624(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_323(iParam0)), 0);
		}
		if (func_631(&(Global_1323615[iParam0])))
		{
			func_624("VEH_LIVERY", 0);
		}
		if (func_630(func_323(iParam0), Global_1323615[iParam0].f_77, Global_1323615[iParam0].f_9[10]) && func_629(func_323(iParam0)))
		{
			func_624("VEH_TOPL", 0);
		}
		func_689(&Var1, Global_1323615[iParam0].f_66, 0, -1);
		if (GAMEPLAY::IS_BIT_SET(Global_1323615[iParam0].f_102, 16))
		{
			iVar0 = Var1.f_4;
			iLocal_517 = iVar0;
			iLocal_518 = func_686(iParam0);
			if (func_641(Global_1323615[iParam0].f_66))
			{
				iVar0 = Global_262145.f_21457;
			}
		}
		else
		{
			iLocal_517 = 0;
			iLocal_518 = 0;
		}
		if (func_686(iParam0) > 0)
		{
			iVar0 = (iVar0 - func_686(iParam0));
		}
		if (iVar0 > 0)
		{
			func_42(*uParam1, "MPCT_INSCOST", 1, 1, 0, 0);
			func_595(iVar0, 0);
			iLocal_519 = (iLocal_519 + iVar0);
		}
		else
		{
			func_42(*uParam1, "MPCT_NOCOST", 0, 1, 0, 0);
		}
		iLocal_520++;
		iLocal_599[*uParam1] = iParam0;
		*uParam1++;
	}
}

int func_689(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	if (iParam3 == 0)
	{
		bVar0 = true;
	}
	else if (iParam3 == 1)
	{
		bVar0 = false;
	}
	iVar1 = -1;
	iVar2 = -1;
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam1))
	{
		bVar3 = false;
		if (iParam1 == 0)
		{
		}
		else if (iParam1 == Global_73804)
		{
		}
		else if (iParam1 == Global_73805)
		{
		}
		else if (iParam1 == Global_73806)
		{
			iVar1 = 500000;
			if (bVar0)
			{
				if (Global_262145.f_21094 >= 0)
				{
					iVar1 = Global_262145.f_21094;
				}
			}
			bVar3 = true;
		}
		else if (iParam1 == Global_73807)
		{
		}
		else if (iParam1 == Global_73808)
		{
		}
		if (!bVar3)
		{
			return 0;
		}
	}
	switch (iParam1)
	{
		case -1216765807:
			iVar1 = 1000000;
			break;
		
		case 1672195559:
			iVar1 = 9000;
			break;
		
		case -1809822327:
			iVar1 = 12000;
			break;
		
		case -1903012613:
			iVar1 = 26000;
			break;
		
		case -2140431165:
			iVar1 = 16000;
			if (bVar0)
			{
				if (Global_262145.f_17451 >= 0)
				{
					iVar1 = Global_262145.f_17451;
				}
			}
			break;
		
		case -808831384:
			iVar1 = 90000;
			break;
		
		case 142944341:
			iVar1 = 90000;
			break;
		
		case -1041692462:
			iVar1 = 90000;
			break;
		
		case -114291515:
			iVar1 = 10000;
			break;
		
		case -891462355:
			iVar1 = 10000;
			break;
		
		case 1126868326:
			iVar1 = 16000;
			break;
		
		case -16948145:
			iVar1 = 30000;
			break;
		
		case 2072156101:
			iVar1 = 30000;
			break;
		
		case 1739845664:
			iVar1 = 30000;
			break;
		
		case 850565707:
			iVar1 = 27000;
			if (bVar0)
			{
				if (Global_262145.f_24238 >= 0)
				{
					iVar1 = Global_262145.f_24238;
				}
			}
			break;
		
		case -2128233223:
			iVar1 = 8000;
			break;
		
		case -48031959:
			iVar1 = 62000;
			if (bVar0)
			{
				iVar1 = Global_262145.f_27795;
			}
			break;
		
		case -344943009:
			iVar1 = 16000;
			break;
		
		case 1069929536:
			iVar1 = 23000;
			break;
		
		case -1435919434:
			iVar1 = 12000;
			break;
		
		case -1987130134:
			if (!bParam2)
			{
				iVar1 = 298500;
				if (bVar0)
				{
					iVar1 = Global_262145.f_27721;
				}
			}
			else
			{
				iVar1 = 398000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_27720;
				}
				iVar2 = 298500;
				if (bVar0)
				{
					iVar2 = Global_262145.f_27721;
				}
			}
			break;
		
		case 1747439474:
			if (!bParam2)
			{
				iVar1 = 1680000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_27723;
				}
			}
			else
			{
				iVar1 = 2240000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_27722;
				}
				iVar2 = 1680000;
				if (bVar0)
				{
					iVar2 = Global_262145.f_27723;
				}
			}
			break;
		
		case -233098306:
			iVar1 = 25000;
			break;
		
		case 121658888:
			iVar1 = 25000;
			break;
		
		case -682211828:
			iVar1 = 28000;
			break;
		
		case -304802106:
			iVar1 = 35000;
			break;
		
		case 736902334:
			iVar1 = 96000;
			break;
		
		case -1696146015:
			iVar1 = 150000;
			break;
		
		case -1346687836:
			iVar1 = 13000;
			break;
		
		case -907477130:
			if (bParam2)
			{
				iVar1 = 450000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_27719;
				}
			}
			else
			{
				iVar1 = 598500;
				if (bVar0)
				{
					iVar1 = Global_262145.f_27718;
				}
				iVar2 = 450000;
				if (bVar0)
				{
					iVar2 = Global_262145.f_27719;
				}
			}
			break;
		
		case -1743316013:
			iVar1 = 13000;
			break;
		
		case 893081117:
			iVar1 = 13000;
			break;
		
		case 2072687711:
			iVar1 = 195000;
			break;
		
		case 11251904:
			iVar1 = 40000;
			break;
		
		case 2006918058:
			iVar1 = 60000;
			break;
		
		case -789894171:
			iVar1 = 70000;
			break;
		
		case -1311154784:
			iVar1 = 650000;
			break;
		
		case 330661258:
			iVar1 = 185000;
			break;
		
		case -1045541610:
			iVar1 = 85000;
			break;
		
		case 108773431:
			iVar1 = 55000;
			break;
		
		case 2006142190:
			iVar1 = 20000;
			break;
		
		case -1130810103:
			iVar1 = 25000;
			break;
		
		case 80636076:
			iVar1 = 35000;
			if (bVar0 && Global_262145.f_7174 >= 0)
			{
				iVar1 = Global_262145.f_7174;
			}
			if (bParam2)
			{
				iVar2 = iVar1;
				iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(35000) * 0.75f));
				if (bVar0 && Global_262145.f_25150 >= 0)
				{
					iVar1 = Global_262145.f_25150;
				}
			}
			break;
		
		case -1670998136:
			iVar1 = 12000;
			break;
		
		case 1177543287:
			iVar1 = 120000;
			break;
		
		case -394074634:
			iVar1 = 120000;
			break;
		
		case -566387422:
			if (!bParam2)
			{
				iVar1 = 95000;
				if (bVar0)
				{
					if (Global_262145.f_19176 >= 0)
					{
						iVar1 = Global_262145.f_19176;
					}
				}
			}
			else
			{
				iVar1 = 0;
				if (bVar0)
				{
					if (Global_262145.f_8143 >= 0)
					{
						iVar1 = Global_262145.f_8143;
					}
				}
			}
			break;
		
		case -685276541:
			iVar1 = 8000;
			break;
		
		case -1883002148:
			iVar1 = 5000;
			break;
		
		case -1241712818:
			iVar1 = 5000;
			break;
		
		case -1291952903:
			iVar1 = 795000;
			break;
		
		case -5153954:
			iVar1 = 205000;
			break;
		
		case -591610296:
			iVar1 = 80000;
			break;
		
		case 55628203:
			iVar1 = 5000;
			break;
		
		case -391594584:
			iVar1 = 100000;
			break;
		
		case -89291282:
			iVar1 = 95000;
			break;
		
		case -1995326987:
			iVar1 = 145000;
			break;
		
		case -1137532101:
			iVar1 = 50000;
			if (bVar0)
			{
				if (Global_262145.f_24239 >= 0)
				{
					iVar1 = Global_262145.f_24239;
				}
			}
			break;
		
		case 1909141499:
			iVar1 = 24000;
			break;
		
		case 499169875:
			iVar1 = 36000;
			break;
		
		case 2016857647:
			iVar1 = 9000;
			if (bVar0)
			{
				if (Global_262145.f_24232 >= 0)
				{
					iVar1 = Global_262145.f_24232;
				}
			}
			break;
		
		case -1800170043:
			iVar1 = 32000;
			break;
		
		case -1745203402:
			iVar1 = 16000;
			break;
		
		case -1775728740:
			iVar1 = 35000;
			break;
		
		case -1543762099:
			iVar1 = 29000;
			break;
		
		case 884422927:
			iVar1 = 42000;
			if (bVar0)
			{
				if (Global_262145.f_24240 >= 0)
				{
					iVar1 = Global_262145.f_24240;
				}
			}
			break;
		
		case 301427732:
			iVar1 = 15000;
			break;
		
		case 37348240:
			iVar1 = 90000;
			break;
		
		case 418536135:
			iVar1 = 440000;
			break;
		
		case -1289722222:
			iVar1 = 9000;
			break;
		
		case 886934177:
			iVar1 = 16000;
			break;
		
		case -1177863319:
			iVar1 = 18000;
			break;
		
		case -624529134:
			iVar1 = 60000;
			break;
		
		case 1051415893:
			iVar1 = 475000;
			break;
		
		case 544021352:
			iVar1 = 100000;
			break;
		
		case 1269098716:
			iVar1 = 58000;
			break;
		
		case 469291905:
			iVar1 = 865000;
			if (bVar0)
			{
				iVar1 = Global_262145.f_27794;
			}
			break;
		
		case 1938952078:
			if (!bParam2)
			{
				iVar1 = 2471250;
				if (bVar0)
				{
					iVar1 = Global_262145.f_27717;
				}
			}
			else
			{
				iVar1 = 3295000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_27716;
				}
				iVar2 = 2471250;
				if (bVar0)
				{
					iVar2 = Global_262145.f_27717;
				}
			}
			break;
		
		case -2124201592:
			iVar1 = 10000;
			if (bVar0)
			{
				if (Global_262145.f_28569 >= 0)
				{
					iVar1 = Global_262145.f_28569;
				}
			}
			break;
		
		case 914654722:
			iVar1 = 30000;
			break;
		
		case -310465116:
			iVar1 = 30000;
			break;
		
		case -433375717:
			iVar1 = 490000;
			break;
		
		case -634879114:
			iVar1 = 12000;
			break;
		
		case 1032823388:
			iVar1 = 120000;
			break;
		
		case -1461482751:
			iVar1 = 130000;
			break;
		
		case 1348744438:
			iVar1 = 82000;
			break;
		
		case -511601230:
			iVar1 = 80000;
			break;
		
		case -808457413:
			iVar1 = 50000;
			if (bVar0)
			{
				if (Global_262145.f_24236 >= 0)
				{
					iVar1 = Global_262145.f_24236;
				}
			}
			break;
		
		case -909201658:
			iVar1 = 9000;
			break;
		
		case -377465520:
			iVar1 = 24000;
			break;
		
		case 1830407356:
			iVar1 = 12000;
			if (bVar0)
			{
				if (Global_262145.f_28570 >= 0)
				{
					iVar1 = Global_262145.f_28570;
				}
			}
			break;
		
		case -2095439403:
			iVar1 = 20000;
			break;
		
		case -1450650718:
			iVar1 = 25000;
			if (bVar0)
			{
				if (Global_262145.f_24235 >= 0)
				{
					iVar1 = Global_262145.f_24235;
				}
			}
			break;
		
		case 741586030:
			iVar1 = 35000;
			break;
		
		case -1883869285:
			iVar1 = 10000;
			break;
		
		case -1150599089:
			iVar1 = 9000;
			break;
		
		case -1651067813:
			iVar1 = 32000;
			break;
		
		case 1645267888:
			iVar1 = 9000;
			break;
		
		case 1933662059:
			iVar1 = 9000;
			break;
		
		case -1934452204:
			iVar1 = 118000;
			break;
		
		case 1737773231:
			iVar1 = 136000;
			break;
		
		case -667151410:
			iVar1 = 6000;
			break;
		
		case -1207771834:
			iVar1 = 7000;
			break;
		
		case -2045594037:
			iVar1 = 22000;
			break;
		
		case -14495224:
			iVar1 = 8000;
			break;
		
		case 2136773105:
			iVar1 = 85000;
			break;
		
		case -893578776:
			iVar1 = 10000;
			break;
		
		case -227741703:
			iVar1 = 10000;
			if (bVar0)
			{
				if (Global_262145.f_24233 >= 0)
				{
					iVar1 = Global_262145.f_24233;
				}
			}
			break;
		
		case 1162065741:
			iVar1 = 13000;
			break;
		
		case -1685021548:
			iVar1 = 15000;
			if (bVar0)
			{
				if (Global_262145.f_14514 >= 0)
				{
					iVar1 = Global_262145.f_14514;
				}
			}
			break;
		
		case -599568815:
			iVar1 = 35000;
			break;
		
		case 788045382:
			iVar1 = 7000;
			break;
		
		case -1189015600:
			iVar1 = 45000;
			break;
		
		case 989381445:
			iVar1 = 45000;
			break;
		
		case -1255452397:
			iVar1 = 65000;
			break;
		
		case -746882698:
			iVar1 = 80000;
			break;
		
		case -1030275036:
			iVar1 = 16899;
			break;
		
		case 1221512915:
			iVar1 = 30000;
			break;
		
		case 1349725314:
			iVar1 = 60000;
			break;
		
		case 873639469:
			iVar1 = 60000;
			break;
		
		case 1337041428:
			iVar1 = 60000;
			if (bVar0)
			{
				if (Global_262145.f_24237 >= 0)
				{
					iVar1 = Global_262145.f_24237;
				}
			}
			break;
		
		case -810318068:
			iVar1 = 15000;
			break;
		
		case 728614474:
			iVar1 = 15000;
			break;
		
		case -1477580979:
			iVar1 = 10000;
			break;
		
		case 1545842587:
			iVar1 = 1000000;
			break;
		
		case -2098947590:
			iVar1 = 1000000;
			break;
		
		case 1723137093:
			iVar1 = 10000;
			break;
		
		case -1961627517:
			iVar1 = 30000;
			break;
		
		case 970598228:
			iVar1 = 12000;
			break;
		
		case 1123216662:
			iVar1 = 250000;
			break;
		
		case 384071873:
			iVar1 = 99000;
			break;
		
		case -1894894188:
			iVar1 = 38000;
			break;
		
		case -1008861746:
			iVar1 = 55000;
			break;
		
		case -956048545:
			iVar1 = 13000;
			break;
		
		case 464687292:
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_14515 >= 0)
				{
					iVar1 = Global_262145.f_14515;
				}
			}
			break;
		
		case 1531094468:
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_14515 >= 0)
				{
					iVar1 = Global_262145.f_14515;
				}
			}
			break;
		
		case 1762279763:
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_14515 >= 0)
				{
					iVar1 = Global_262145.f_14515;
				}
			}
			break;
		
		case -2033222435:
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_14515 >= 0)
				{
					iVar1 = Global_262145.f_14515;
				}
			}
			break;
		
		case 338562499:
			iVar1 = 240000;
			break;
		
		case -140902153:
			iVar1 = 9000;
			break;
		
		case -825837129:
			iVar1 = 21000;
			break;
		
		case -1622444098:
			iVar1 = 80000;
			break;
		
		case 523724515:
			iVar1 = 5000;
			break;
		
		case 1777363799:
			iVar1 = 15000;
			break;
		
		case 65402552:
			iVar1 = 16000;
			break;
		
		case -1122289213:
			iVar1 = 50000;
			break;
		
		case -1193103848:
			iVar1 = 65000;
			break;
		
		case 1131912276:
			iVar1 = 500;
			break;
		
		case -186537451:
			iVar1 = 1000;
			break;
		
		case 1127861609:
			iVar1 = 2500;
			break;
		
		case -1233807380:
			iVar1 = 2500;
			break;
		
		case -400295096:
			iVar1 = 2500;
			break;
		
		case 448402357:
			iVar1 = 3000;
			break;
		
		case 758895617:
			if (bVar0)
			{
				iVar1 = 1000000;
			}
			else
			{
				iVar1 = 10000000;
			}
			break;
	}
	if (bVar0 || iParam3 == 1)
	{
		switch (iParam1)
		{
			case -1216765807:
				iVar1 = 1000000;
				break;
			
			case 1283517198:
				iVar1 = 550000;
				break;
			
			case 1672195559:
				iVar1 = 9000;
				break;
			
			case 837858166:
				iVar1 = 4000000;
				break;
			
			case 142944341:
				iVar1 = 90000;
				break;
			
			case -1041692462:
				iVar1 = 105000;
				break;
			
			case -823509173:
				iVar1 = 450000;
				break;
			
			case -114291515:
				iVar1 = 15000;
				break;
			
			case -891462355:
				iVar1 = 15000;
				break;
			
			case 1126868326:
				iVar1 = 16000;
				break;
			
			case -16948145:
				iVar1 = 30000;
				break;
			
			case -2128233223:
				iVar1 = 8000;
				break;
			
			case 1131912276:
				iVar1 = 800;
				break;
			
			case -1696146015:
				iVar1 = 155000;
				break;
			
			case -713569950:
				iVar1 = 500000;
				break;
			
			case 788747387:
				iVar1 = 2000000;
				break;
			
			case 2072687711:
				iVar1 = 195000;
				break;
			
			case 11251904:
				iVar1 = 40000;
				break;
			
			case -50547061:
				iVar1 = 185000;
				break;
			
			case -1311154784:
				iVar1 = 650000;
				break;
			
			case -2072933068:
				iVar1 = 525000;
				break;
			
			case 330661258:
				iVar1 = 185000;
				break;
			
			case -1045541610:
				iVar1 = 100000;
				break;
			
			case 108773431:
				iVar1 = 138000;
				break;
			
			case 448402357:
				iVar1 = 800;
				break;
			
			case 321739290:
				iVar1 = 225000;
				break;
			
			case -644710429:
				iVar1 = 240000;
				break;
			
			case -1130810103:
				iVar1 = 25000;
				break;
			
			case -1670998136:
				iVar1 = 12000;
				break;
			
			case 1177543287:
				iVar1 = 70000;
				break;
			
			case -394074634:
				iVar1 = 70000;
				break;
			
			case -2130482718:
				iVar1 = 1000000;
				break;
			
			case 970356638:
				iVar1 = 275000;
				break;
			
			case -566387422:
				if (!bParam2)
				{
					iVar1 = 95000;
					if (bVar0)
					{
						if (Global_262145.f_19176 >= 0)
						{
							iVar1 = Global_262145.f_19176;
						}
					}
				}
				else
				{
					iVar1 = 0;
					if (bVar0)
					{
						if (Global_262145.f_8143 >= 0)
						{
							iVar1 = Global_262145.f_8143;
						}
					}
				}
				break;
			
			case -1291952903:
				iVar1 = 795000;
				break;
			
			case -5153954:
				iVar1 = 205000;
				break;
			
			case 55628203:
				iVar1 = 5000;
				break;
			
			case -391594584:
				iVar1 = 90000;
				break;
			
			case -89291282:
				iVar1 = 95000;
				break;
			
			case -1995326987:
				iVar1 = 145000;
				break;
			
			case 744705981:
				iVar1 = 1300000;
				break;
			
			case 1909141499:
				iVar1 = 24000;
				break;
			
			case -1800170043:
				iVar1 = 32000;
				break;
			
			case 301427732:
				iVar1 = 15000;
				break;
			
			case 37348240:
				iVar1 = 90000;
				break;
			
			case 418536135:
				iVar1 = 440000;
				break;
			
			case -1177863319:
				iVar1 = 18000;
				break;
			
			case 1051415893:
				iVar1 = 350000;
				break;
			
			case 861409633:
				iVar1 = 299000;
				break;
			
			case -120287622:
				iVar1 = 15000;
				break;
			
			case 544021352:
				iVar1 = 100000;
				break;
			
			case 621481054:
				iVar1 = 1500000;
				break;
			
			case -1746576111:
				iVar1 = 300000;
				break;
			
			case -1043459709:
				iVar1 = 413990;
				break;
			
			case -1660661558:
				iVar1 = 780000;
				break;
			
			case -433375717:
				iVar1 = 490000;
				break;
			
			case 904750859:
				iVar1 = 27000;
				break;
			
			case 1032823388:
				iVar1 = 120000;
				break;
			
			case -1461482751:
				iVar1 = 130000;
				break;
			
			case -511601230:
				iVar1 = 80000;
				break;
			
			case -909201658:
				iVar1 = 9000;
				break;
			
			case 1507916787:
				iVar1 = 9000;
				break;
			
			case -1934452204:
				iVar1 = 132000;
				break;
			
			case 1737773231:
				iVar1 = 140000;
				break;
			
			case -1098802077:
				iVar1 = 30000;
				break;
			
			case 2136773105:
				iVar1 = 85000;
				break;
			
			case -893578776:
				iVar1 = 10000;
				break;
			
			case 788045382:
				iVar1 = 7000;
				break;
			
			case -1189015600:
				iVar1 = 45000;
				break;
			
			case -746882698:
				iVar1 = 80000;
				break;
			
			case -186537451:
				iVar1 = 2000;
				break;
			
			case -1214505995:
				iVar1 = 1150000;
				break;
			
			case 400514754:
				iVar1 = 196621;
				break;
			
			case 1545842587:
				iVar1 = 850000;
				break;
			
			case -2098947590:
				iVar1 = 875000;
				break;
			
			case -1961627517:
				iVar1 = 30000;
				break;
			
			case -2122757008:
				iVar1 = 250000;
				break;
			
			case -282946103:
				iVar1 = 25160;
				break;
			
			case 1123216662:
				iVar1 = 250000;
				break;
			
			case 384071873:
				iVar1 = 110000;
				break;
			
			case 1981688531:
				iVar1 = 5000000;
				break;
			
			case 1127861609:
				iVar1 = 10000;
				break;
			
			case -1233807380:
				iVar1 = 10000;
				break;
			
			case -400295096:
				iVar1 = 10000;
				break;
			
			case 290013743:
				iVar1 = 22000;
				break;
			
			case 338562499:
				iVar1 = 240000;
				break;
			
			case -140902153:
				iVar1 = 9000;
				break;
			
			case -1673356438:
				iVar1 = 450000;
				break;
			
			case -825837129:
				iVar1 = 21000;
				break;
			
			case -1622444098:
				iVar1 = 150000;
				break;
			
			case -1122289213:
				iVar1 = 60000;
				break;
			
			case -1193103848:
				iVar1 = 65000;
				break;
			
			case 758895617:
				iVar1 = 950000;
				break;
		}
		switch (iParam1)
		{
			case 837858166:
				iVar1 = 1825000;
				break;
			
			case -1269889662:
				iVar1 = 69000;
				break;
			
			case -1435919434:
				iVar1 = 25000;
				break;
			
			case 788747387:
				iVar1 = 1750000;
				break;
			
			case 1682114128:
				iVar1 = 25000;
				break;
			
			case 1770332643:
				iVar1 = 15000;
				break;
			
			case 534258863:
				iVar1 = 1000000;
				break;
			
			case 744705981:
				iVar1 = 1300000;
				break;
			
			case 621481054:
				iVar1 = 1625000;
				break;
			
			case -2064372143:
				iVar1 = 87000;
				break;
			
			case 1830407356:
				iVar1 = 38000;
				if (bVar0)
				{
					if (Global_262145.f_28570 >= 0)
					{
						iVar1 = Global_262145.f_28570;
					}
				}
				break;
			
			case 782665360:
				iVar1 = 1500000;
				if (bVar0)
				{
					if (Global_262145.f_4070 >= 0)
					{
						iVar1 = Global_262145.f_4070;
					}
				}
				break;
			
			case 627094268:
				iVar1 = 45000;
				if (bVar0)
				{
					if (Global_262145.f_24234 >= 0)
					{
						iVar1 = Global_262145.f_24234;
					}
				}
				break;
			
			case 873639469:
				iVar1 = 95000;
				break;
			
			case -1214505995:
				iVar1 = 1150000;
				break;
			
			case 699456151:
				iVar1 = 11000;
				break;
			
			case -1311240698:
				iVar1 = 5000;
				break;
			
			case 1981688531:
				iVar1 = 2000000;
				break;
			
			case -442313018:
				iVar1 = 32000;
				break;
		}
		switch (iParam1)
		{
			case -1435919434:
				iVar1 = 25000;
				if (bVar0)
				{
					if (Global_262145.f_4712 >= 0)
					{
						iVar1 = Global_262145.f_4712;
					}
				}
				break;
			
			case -1661854193:
				iVar1 = 20000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 20000;
					if (Global_262145.f_4713 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_4713;
					}
				}
				break;
			
			case -1207771834:
				iVar1 = 3000;
				break;
			
			case -599568815:
				iVar1 = 35000;
				break;
			
			case -1453280962:
				iVar1 = 8000;
				break;
			
			case 989381445:
				iVar1 = 38000;
				break;
		}
		switch (iParam1)
		{
			case -1809822327:
				iVar1 = 12000;
				break;
			
			case -1903012613:
				iVar1 = 26000;
				if (bVar0)
				{
					if (Global_262145.f_6571 >= 0)
					{
						iVar1 = Global_262145.f_6571;
					}
				}
				break;
			
			case 1069929536:
				iVar1 = 23000;
				if (bVar0)
				{
					if (Global_262145.f_6572 >= 0)
					{
						iVar1 = Global_262145.f_6572;
					}
				}
				break;
			
			case 2006918058:
				iVar1 = 60000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 60000;
					if (Global_262145.f_4027 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_4027;
					}
				}
				break;
			
			case -789894171:
				iVar1 = 60000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 70000;
					if (Global_262145.f_6573 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_6573;
					}
				}
				break;
			
			case -1775728740:
				iVar1 = 35000;
				if (bVar0)
				{
					if (Global_262145.f_6574 >= 0)
					{
						iVar1 = Global_262145.f_6574;
					}
				}
				break;
			
			case -1289722222:
				iVar1 = 9000;
				if (bVar0)
				{
					if (Global_262145.f_6575 >= 0)
					{
						iVar1 = Global_262145.f_6575;
					}
				}
				break;
			
			case 886934177:
				iVar1 = 16000;
				if (bVar0)
				{
					if (Global_262145.f_6576 >= 0)
					{
						iVar1 = Global_262145.f_6576;
					}
				}
				break;
			
			case -310465116:
				iVar1 = 30000;
				if (bVar0)
				{
					if (Global_262145.f_6577 >= 0)
					{
						iVar1 = Global_262145.f_6577;
					}
				}
				break;
			
			case -1883869285:
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_6578 >= 0)
					{
						iVar1 = Global_262145.f_6578;
					}
				}
				break;
			
			case -1651067813:
				iVar1 = 32000;
				if (bVar0)
				{
					if (Global_262145.f_6579 >= 0)
					{
						iVar1 = Global_262145.f_6579;
					}
				}
				break;
			
			case 1645267888:
				iVar1 = 9000;
				if (bVar0)
				{
					if (Global_262145.f_6580 >= 0)
					{
						iVar1 = Global_262145.f_6580;
					}
				}
				break;
			
			case -667151410:
				iVar1 = 6000;
				if (bVar0)
				{
					if (Global_262145.f_6600 >= 0)
					{
						iVar1 = Global_262145.f_6600;
					}
				}
				break;
			
			case -1477580979:
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_6581 >= 0)
					{
						iVar1 = Global_262145.f_6581;
					}
				}
				break;
			
			case 1723137093:
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_6582 >= 0)
					{
						iVar1 = Global_262145.f_6582;
					}
				}
				break;
			
			case 1777363799:
				iVar1 = 15000;
				if (bVar0)
				{
					if (Global_262145.f_6583 >= 0)
					{
						iVar1 = Global_262145.f_6583;
					}
				}
				break;
			
			case -50547061:
				iVar1 = 1790000;
				if (bVar0)
				{
					if (Global_262145.f_16106 >= 0)
					{
						iVar1 = Global_262145.f_16106;
					}
				}
				break;
			
			case 1621617168:
				iVar1 = 1995000;
				if (bVar0)
				{
					if (Global_262145.f_16107 >= 0)
					{
						iVar1 = Global_262145.f_16107;
					}
				}
				break;
			
			case -2100640717:
				iVar1 = 1250000;
				if (bVar0)
				{
					if (Global_262145.f_16113 >= 0)
					{
						iVar1 = Global_262145.f_16113;
					}
				}
				break;
			
			case -1295027632:
				iVar1 = 1900000;
				if (bVar0)
				{
					if (Global_262145.f_16111 >= 0)
					{
						iVar1 = Global_262145.f_16111;
					}
				}
				break;
			
			case -305727417:
				iVar1 = 1110000;
				if (bVar0)
				{
					if (Global_262145.f_16109 >= 0)
					{
						iVar1 = Global_262145.f_16109;
					}
				}
				break;
			
			case -1930048799:
				iVar1 = 900000;
				if (bVar0)
				{
					if (Global_262145.f_16115 >= 0)
					{
						iVar1 = Global_262145.f_16115;
					}
				}
				break;
			
			case 2123327359:
				iVar1 = 2700000;
				if (bVar0)
				{
					if (Global_262145.f_16120 >= 0)
					{
						iVar1 = Global_262145.f_16120;
					}
				}
				break;
			
			case 1426219628:
				iVar1 = 1750000;
				if (bVar0)
				{
					if (Global_262145.f_16110 >= 0)
					{
						iVar1 = Global_262145.f_16110;
					}
				}
				break;
			
			case 1274868363:
				iVar1 = 610000;
				if (bVar0)
				{
					if (Global_262145.f_16108 >= 0)
					{
						iVar1 = Global_262145.f_16108;
					}
				}
				break;
			
			case 1203490606:
				iVar1 = 253000;
				if (bVar0)
				{
					if (Global_262145.f_16116 >= 0)
					{
						iVar1 = Global_262145.f_16116;
					}
				}
				break;
			
			case -432008408:
				iVar1 = 522000;
				if (bVar0)
				{
					if (Global_262145.f_16117 >= 0)
					{
						iVar1 = Global_262145.f_16117;
					}
				}
				break;
			
			case -1757836725:
				iVar1 = 695000;
				if (bVar0)
				{
					if (Global_262145.f_16118 >= 0)
					{
						iVar1 = Global_262145.f_16118;
					}
				}
				break;
			
			case -1829802492:
				iVar1 = 1135000;
				if (bVar0)
				{
					if (Global_262145.f_16119 >= 0)
					{
						iVar1 = Global_262145.f_16119;
					}
				}
				break;
			
			case 234062309:
				iVar1 = 1595000;
				if (bVar0)
				{
					if (Global_262145.f_15583 >= 0)
					{
						iVar1 = Global_262145.f_15583;
					}
				}
				break;
			
			case 1475773103:
				iVar1 = 130000;
				if (bVar0)
				{
					if (Global_262145.f_16112 >= 0)
					{
						iVar1 = Global_262145.f_16112;
					}
				}
				break;
			
			case -1845487887:
				iVar1 = 2295000;
				if (bVar0)
				{
					if (Global_262145.f_16114 >= 0)
					{
						iVar1 = Global_262145.f_16114;
					}
				}
				break;
			
			case -1232836011:
				iVar1 = 2475000;
				if (bVar0)
				{
					if (Global_262145.f_16887 >= 0)
					{
						iVar1 = Global_262145.f_16887;
					}
				}
				break;
			
			case -777172681:
				if (!bParam2)
				{
					iVar1 = 701000;
					if (bVar0)
					{
						if (Global_262145.f_16888 >= 0)
						{
							iVar1 = Global_262145.f_16888;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case 1887331236:
				iVar1 = 816000;
				if (bVar0)
				{
					if (Global_262145.f_16889 >= 0)
					{
						iVar1 = Global_262145.f_16889;
					}
				}
				break;
			
			case 1549126457:
				iVar1 = 155000;
				if (bVar0)
				{
					if (Global_262145.f_16890 >= 0)
					{
						iVar1 = Global_262145.f_16890;
					}
				}
				break;
			
			case 101905590:
				iVar1 = 550000;
				if (bVar0)
				{
					if (Global_262145.f_16891 >= 0)
					{
						iVar1 = Global_262145.f_16891;
					}
				}
				break;
			
			case -663299102:
				iVar1 = 695000;
				if (bVar0)
				{
					if (Global_262145.f_16892 >= 0)
					{
						iVar1 = Global_262145.f_16892;
					}
				}
				break;
			
			case 683047626:
				iVar1 = 250000;
				if (bVar0)
				{
					if (Global_262145.f_16893 >= 0)
					{
						iVar1 = Global_262145.f_16893;
					}
				}
				break;
			
			case 390201602:
				iVar1 = 225000;
				if (bVar0)
				{
					if (Global_262145.f_16894 >= 0)
					{
						iVar1 = Global_262145.f_16894;
					}
				}
				break;
			
			case 86520421:
				iVar1 = 95000;
				if (bVar0)
				{
					if (Global_262145.f_16895 >= 0)
					{
						iVar1 = Global_262145.f_16895;
					}
				}
				break;
			
			case 2067820283:
				iVar1 = 2550000;
				if (bVar0)
				{
					if (Global_262145.f_16885 >= 0)
					{
						iVar1 = Global_262145.f_16885;
					}
				}
				break;
			
			case 482197771:
				iVar1 = 1735000;
				if (bVar0)
				{
					if (Global_262145.f_16896 >= 0)
					{
						iVar1 = Global_262145.f_16896;
					}
				}
				break;
			
			case 819197656:
				iVar1 = 1995000;
				if (bVar0)
				{
					if (Global_262145.f_16884 >= 0)
					{
						iVar1 = Global_262145.f_16884;
					}
				}
				break;
			
			case -2103821244:
				if (!bParam2)
				{
					iVar1 = 1300000;
					if (bVar0)
					{
						if (Global_262145.f_16898 >= 0)
						{
							iVar1 = Global_262145.f_16898;
						}
					}
				}
				else
				{
					iVar1 = 1385000;
					if (bVar0)
					{
						if (Global_262145.f_16899 >= 0)
						{
							iVar1 = Global_262145.f_16899;
						}
					}
				}
				break;
			
			case -1071380347:
				iVar1 = 995000;
				if (bVar0)
				{
					if (Global_262145.f_16886 >= 0)
					{
						iVar1 = Global_262145.f_16886;
					}
				}
				break;
			
			case 741090084:
				iVar1 = 120000;
				if (bVar0 && Global_262145.f_16897 >= 0)
				{
					iVar1 = Global_262145.f_16897;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(120000) * 0.75f));
					if (bVar0 && Global_262145.f_25153 >= 0)
					{
						iVar1 = Global_262145.f_25153;
					}
				}
				break;
			
			case 2035069708:
				iVar1 = 264000;
				if (bVar0)
				{
					if (Global_262145.f_17456 >= 0)
					{
						iVar1 = Global_262145.f_17456;
					}
				}
				break;
			
			case -1606187161:
				iVar1 = 100000;
				if (bVar0)
				{
					if (Global_262145.f_17459 >= 0)
					{
						iVar1 = Global_262145.f_17459;
					}
				}
				break;
			
			case 822018448:
				if (bParam2)
				{
					iVar1 = 309000;
					if (bVar0)
					{
						if (Global_262145.f_27728 >= 0)
						{
							iVar1 = Global_262145.f_27728;
						}
					}
				}
				else
				{
					iVar1 = 412000;
					if (bVar0)
					{
						if (Global_262145.f_17455 >= 0)
						{
							iVar1 = Global_262145.f_17455;
						}
					}
					iVar2 = 309000;
					if (bVar0)
					{
						if (Global_262145.f_27728 >= 0)
						{
							iVar2 = Global_262145.f_27728;
						}
					}
				}
				break;
			
			case -2115793025:
				iVar1 = 116000;
				if (bVar0)
				{
					if (Global_262145.f_17450 >= 0)
					{
						iVar1 = Global_262145.f_17450;
					}
				}
				break;
			
			case -1009268949:
				iVar1 = 99000;
				if (bVar0)
				{
					if (Global_262145.f_17466 >= 0)
					{
						iVar1 = Global_262145.f_17466;
					}
				}
				break;
			
			case -570033273:
				if (!bParam2)
				{
					iVar1 = 122000;
					if (bVar0)
					{
						if (Global_262145.f_17467 >= 0)
						{
							iVar1 = Global_262145.f_17467;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case 6774487:
				iVar1 = 210000;
				if (bVar0)
				{
					if (Global_262145.f_17453 >= 0)
					{
						iVar1 = Global_262145.f_17453;
					}
				}
				break;
			
			case -1404136503:
				iVar1 = 145000;
				if (bVar0)
				{
					if (Global_262145.f_17454 >= 0)
					{
						iVar1 = Global_262145.f_17454;
					}
				}
				break;
			
			case 1873600305:
				iVar1 = 48000;
				if (bVar0)
				{
					if (Global_262145.f_17461 >= 0)
					{
						iVar1 = Global_262145.f_17461;
					}
				}
				break;
			
			case -405626514:
				iVar1 = 2225000;
				if (bVar0)
				{
					if (Global_262145.f_17463 >= 0)
					{
						iVar1 = Global_262145.f_17463;
					}
				}
				break;
			
			case -674927303:
				iVar1 = 648000;
				if (bVar0)
				{
					if (Global_262145.f_17460 >= 0)
					{
						iVar1 = Global_262145.f_17460;
					}
				}
				break;
			
			case -255678177:
				iVar1 = 976000;
				if (bVar0)
				{
					if (Global_262145.f_17457 >= 0)
					{
						iVar1 = Global_262145.f_17457;
					}
				}
				break;
			
			case -440768424:
				iVar1 = 81000;
				if (bVar0)
				{
					if (Global_262145.f_17452 >= 0)
					{
						iVar1 = Global_262145.f_17452;
					}
				}
				break;
			
			case 1491277511:
				iVar1 = 1995000;
				if (bVar0)
				{
					if (Global_262145.f_17462 >= 0)
					{
						iVar1 = Global_262145.f_17462;
					}
				}
				break;
			
			case -609625092:
				if (!bParam2)
				{
					iVar1 = 356000;
					if (bVar0)
					{
						if (Global_262145.f_17464 >= 0)
						{
							iVar1 = Global_262145.f_17464;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case -1523428744:
				if (bParam2)
				{
					iVar1 = 50250;
					if (bVar0)
					{
						if (Global_262145.f_27729 >= 0)
						{
							iVar1 = Global_262145.f_27729;
						}
					}
				}
				else
				{
					iVar1 = 67000;
					if (bVar0)
					{
						if (Global_262145.f_17458 >= 0)
						{
							iVar1 = Global_262145.f_17458;
						}
					}
					iVar2 = 50250;
					if (bVar0)
					{
						if (Global_262145.f_27729 >= 0)
						{
							iVar2 = Global_262145.f_27729;
						}
					}
				}
				break;
			
			case -1558399629:
				iVar1 = 378000;
				if (bVar0)
				{
					if (Global_262145.f_18525 >= 0)
					{
						iVar1 = Global_262145.f_18525;
					}
				}
				break;
			
			case 1026149675:
				iVar1 = 195000;
				if (bVar0)
				{
					if (Global_262145.f_18528 >= 0)
					{
						iVar1 = Global_262145.f_18528;
					}
				}
				break;
			
			case -618617997:
				if (bParam2)
				{
					iVar1 = 71250;
					if (bVar0)
					{
					}
				}
				else
				{
					iVar1 = 95000;
					if (bVar0)
					{
						if (Global_262145.f_17465 >= 0)
						{
							iVar1 = Global_262145.f_17465;
						}
					}
					iVar2 = 71250;
					if (bVar0)
					{
					}
				}
				break;
			
			case -1289178744:
				iVar1 = 55000;
				if (bVar0)
				{
					if (Global_262145.f_18526 >= 0)
					{
						iVar1 = Global_262145.f_18526;
					}
				}
				break;
			
			case -1842748181:
				iVar1 = 47500;
				if (bVar0)
				{
					if (Global_262145.f_18527 >= 0)
					{
						iVar1 = Global_262145.f_18527;
					}
				}
				break;
			
			case -312295511:
				if (!bParam2)
				{
					iVar1 = 3192000;
					if (bVar0)
					{
						if (Global_262145.f_19146 >= 0)
						{
							iVar1 = Global_262145.f_19146;
						}
					}
				}
				else
				{
					iVar1 = 2400000;
					if (bVar0)
					{
						if (Global_262145.f_19147 >= 0)
						{
							iVar1 = Global_262145.f_19147;
						}
					}
				}
				break;
			
			case -1649536104:
				if (!bParam2)
				{
					iVar1 = 2553600;
					if (bVar0)
					{
						if (Global_262145.f_19148 >= 0)
						{
							iVar1 = Global_262145.f_19148;
						}
					}
				}
				else
				{
					iVar1 = 1920000;
					if (bVar0)
					{
						if (Global_262145.f_19149 >= 0)
						{
							iVar1 = Global_262145.f_19149;
						}
					}
				}
				break;
			
			case 1180875963:
				if (!bParam2)
				{
					iVar1 = 1489600;
					if (bVar0)
					{
						if (Global_262145.f_19150 >= 0)
						{
							iVar1 = Global_262145.f_19150;
						}
					}
				}
				else
				{
					iVar1 = 1120000;
					if (bVar0)
					{
						if (Global_262145.f_19151 >= 0)
						{
							iVar1 = Global_262145.f_19151;
						}
					}
				}
				break;
			
			case -1590337689:
				if (!bParam2)
				{
					iVar1 = 1755600;
					if (bVar0)
					{
						if (Global_262145.f_19152 >= 0)
						{
							iVar1 = Global_262145.f_19152;
						}
					}
				}
				else
				{
					iVar1 = 1320000;
					if (bVar0)
					{
						if (Global_262145.f_19153 >= 0)
						{
							iVar1 = Global_262145.f_19153;
						}
					}
				}
				break;
			
			case 682434785:
				if (!bParam2)
				{
					iVar1 = 2926000;
					if (bVar0)
					{
						if (Global_262145.f_19154 >= 0)
						{
							iVar1 = Global_262145.f_19154;
						}
					}
				}
				else
				{
					iVar1 = 2200000;
					if (bVar0)
					{
						if (Global_262145.f_19155 >= 0)
						{
							iVar1 = Global_262145.f_19155;
						}
					}
				}
				break;
			
			case -1912017790:
				if (!bParam2)
				{
					iVar1 = 658350;
					if (bVar0)
					{
						if (Global_262145.f_19156 >= 0)
						{
							iVar1 = Global_262145.f_19156;
						}
					}
				}
				else
				{
					iVar1 = 495000;
					if (bVar0)
					{
						if (Global_262145.f_19157 >= 0)
						{
							iVar1 = Global_262145.f_19157;
						}
					}
				}
				break;
			
			case 941494461:
				if (!bParam2)
				{
					iVar1 = 5745600;
					if (bVar0)
					{
						if (Global_262145.f_19158 >= 0)
						{
							iVar1 = Global_262145.f_19158;
						}
					}
				}
				else
				{
					iVar1 = 4320000;
					if (bVar0)
					{
						if (Global_262145.f_19159 >= 0)
						{
							iVar1 = Global_262145.f_19159;
						}
					}
				}
				break;
			
			case 989294410:
				if (!bParam2)
				{
					iVar1 = 3830400;
					if (bVar0)
					{
						if (Global_262145.f_19160 >= 0)
						{
							iVar1 = Global_262145.f_19160;
						}
					}
				}
				else
				{
					iVar1 = 2880000;
					if (bVar0)
					{
						if (Global_262145.f_19161 >= 0)
						{
							iVar1 = Global_262145.f_19161;
						}
					}
				}
				break;
			
			case -1758137366:
				iVar1 = 880000;
				if (bVar0)
				{
					if (Global_262145.f_19174 >= 0)
					{
						iVar1 = Global_262145.f_19174;
					}
				}
				break;
			
			case 272929391:
				iVar1 = 1329000;
				if (bVar0 && Global_262145.f_19175 >= 0)
				{
					iVar1 = Global_262145.f_19175;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1329000) * 0.75f));
				}
				break;
			
			case -2048333973:
				iVar1 = 1189000;
				if (bVar0)
				{
					if (Global_262145.f_19162 >= 0)
					{
						iVar1 = Global_262145.f_19162;
					}
				}
				break;
			
			case -482719877:
				iVar1 = (Global_262145.f_19162 + func_691(iParam1));
				break;
			
			case 1034187331:
				iVar1 = 1440000;
				if (bVar0)
				{
					if (Global_262145.f_19166 >= 0)
					{
						iVar1 = Global_262145.f_19166;
					}
				}
				break;
			
			case 1093792632:
				iVar1 = (Global_262145.f_19166 + func_691(iParam1));
				break;
			
			case -239841468:
				iVar1 = 169000;
				if (bVar0)
				{
					if (Global_262145.f_19172 >= 0)
					{
						iVar1 = Global_262145.f_19172;
					}
				}
				break;
			
			case 1790834270:
				iVar1 = (Global_262145.f_19172 + func_691(iParam1));
				break;
			
			case 627535535:
				iVar1 = 135000;
				if (bVar0)
				{
					if (Global_262145.f_19170 >= 0)
					{
						iVar1 = Global_262145.f_19170;
					}
				}
				break;
			
			case -757735410:
				iVar1 = (Global_262145.f_19170 + func_691(iParam1));
				break;
			
			case 1886268224:
				iVar1 = 599000;
				if (bVar0)
				{
					if (Global_262145.f_19164 >= 0)
					{
						iVar1 = Global_262145.f_19164;
					}
				}
				break;
			
			case 1074745671:
				iVar1 = (Global_262145.f_19164 + func_691(iParam1));
				break;
			
			case -2022483795:
				iVar1 = (85000 + func_691(iParam1));
				break;
			
			case 196747873:
				iVar1 = (Global_262145.f_19176 + func_691(iParam1));
				break;
			
			case -1405937764:
				iVar1 = 915000;
				if (bVar0)
				{
					if (Global_262145.f_19810 >= 0)
					{
						iVar1 = Global_262145.f_19810;
					}
				}
				break;
			
			case 1234311532:
				iVar1 = 1260000;
				if (bVar0)
				{
					if (Global_262145.f_19809 >= 0)
					{
						iVar1 = Global_262145.f_19809;
					}
				}
				break;
			
			case 719660200:
				iVar1 = 430000;
				if (bVar0)
				{
					if (Global_262145.f_19811 >= 0)
					{
						iVar1 = Global_262145.f_19811;
					}
				}
				break;
			
			case -982130927:
				iVar1 = 705000;
				if (bVar0)
				{
					if (Global_262145.f_19812 >= 0)
					{
						iVar1 = Global_262145.f_19812;
					}
				}
				break;
			
			case 159274291:
				iVar1 = 1150000;
				if (bVar0)
				{
					if (Global_262145.f_20897 >= 0)
					{
						iVar1 = Global_262145.f_20897;
					}
				}
				break;
			
			case 223240013:
				iVar1 = 865000;
				if (bVar0)
				{
					if (Global_262145.f_20900 >= 0)
					{
						iVar1 = Global_262145.f_20900;
					}
				}
				break;
			
			case 433954513:
				iVar1 = 1245000;
				if (bVar0)
				{
					if (Global_262145.f_20898 >= 0)
					{
						iVar1 = Global_262145.f_20898;
					}
				}
				break;
			
			case 1504306544:
				iVar1 = 998000;
				if (bVar0)
				{
					if (Global_262145.f_20899 >= 0)
					{
						iVar1 = Global_262145.f_20899;
					}
				}
				break;
			
			case 1939284556:
				iVar1 = 1535000;
				if (bVar0)
				{
					if (Global_262145.f_20901 >= 0)
					{
						iVar1 = Global_262145.f_20901;
					}
				}
				break;
			
			case 917809321:
				iVar1 = 2375000;
				if (bVar0)
				{
					if (Global_262145.f_20902 >= 0)
					{
						iVar1 = Global_262145.f_20902;
					}
				}
				break;
			
			case 562680400:
				iVar1 = 2325000;
				if (bVar0)
				{
					if (Global_262145.f_20889 >= 0)
					{
						iVar1 = Global_262145.f_20889;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_20888)) / 100f)));
				}
				break;
			
			case 1897744184:
				iVar1 = 850000;
				if (bVar0)
				{
					if (Global_262145.f_20890 >= 0)
					{
						iVar1 = Global_262145.f_20890;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_20888)) / 100f)));
				}
				break;
			
			case -32236122:
				iVar1 = 1695000;
				if (bVar0)
				{
					if (Global_262145.f_20891 >= 0)
					{
						iVar1 = Global_262145.f_20891;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_20888)) / 100f)));
				}
				break;
			
			case 884483972:
				iVar1 = 2650000;
				if (bVar0)
				{
					if (Global_262145.f_20892 >= 0)
					{
						iVar1 = Global_262145.f_20892;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_20888)) / 100f)));
				}
				break;
			
			case -1210451983:
				iVar1 = 1585000;
				if (bVar0)
				{
					if (Global_262145.f_20893 >= 0)
					{
						iVar1 = Global_262145.f_20893;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_20888)) / 100f)));
				}
				break;
			
			case -1881846085:
				iVar1 = 1400000;
				if (bVar0)
				{
					if (Global_262145.f_20894 >= 0)
					{
						iVar1 = Global_262145.f_20894;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_20888)) / 100f)));
				}
				break;
			
			case 177270108:
				if (!bParam2)
				{
					iVar1 = 1225000;
					if (bVar0)
					{
						if (Global_262145.f_20966 >= 0)
						{
							iVar1 = Global_262145.f_20966;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case 387748548:
				if (!bParam2)
				{
					iVar1 = 1400000;
					if (bVar0)
					{
						if (Global_262145.f_20967 >= 0)
						{
							iVar1 = Global_262145.f_20967;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case -1281684762:
				iVar1 = 6500000;
				if (bVar0)
				{
					if (Global_262145.f_22057 >= 0)
					{
						iVar1 = Global_262145.f_22057;
					}
				}
				break;
			
			case -1763555241:
				if (bParam2)
				{
					iVar1 = 500000;
					if (bVar0)
					{
						if (Global_262145.f_22056 >= 0)
						{
							iVar1 = Global_262145.f_22056;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22076 >= 0)
						{
							iVar1 = Global_262145.f_22076;
						}
					}
				}
				break;
			
			case -749299473:
				if (bParam2)
				{
					iVar1 = 2350000;
					if (bVar0)
					{
						if (Global_262145.f_22049 >= 0)
						{
							iVar1 = Global_262145.f_22049;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(2350000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22069 >= 0)
						{
							iVar1 = Global_262145.f_22069;
						}
					}
				}
				break;
			
			case -975345305:
				if (bParam2)
				{
					iVar1 = 1200000;
					if (bVar0)
					{
						if (Global_262145.f_22053 >= 0)
						{
							iVar1 = Global_262145.f_22053;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1200000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22073 >= 0)
						{
							iVar1 = Global_262145.f_22073;
						}
					}
				}
				break;
			
			case -1700874274:
				if (bParam2)
				{
					iVar1 = 2750000;
					if (bVar0)
					{
						if (Global_262145.f_22048 >= 0)
						{
							iVar1 = Global_262145.f_22048;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(2750000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22068 >= 0)
						{
							iVar1 = Global_262145.f_22068;
						}
					}
				}
				break;
			
			case -392675425:
				if (bParam2)
				{
					iVar1 = 850000;
					if (bVar0)
					{
						if (Global_262145.f_22055 >= 0)
						{
							iVar1 = Global_262145.f_22055;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(850000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22075 >= 0)
						{
							iVar1 = Global_262145.f_22075;
						}
					}
				}
				break;
			
			case 1043222410:
				if (bParam2)
				{
					iVar1 = 3890000;
					if (bVar0)
					{
						if (Global_262145.f_22044 >= 0)
						{
							iVar1 = Global_262145.f_22044;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(3890000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22064 >= 0)
						{
							iVar1 = Global_262145.f_22064;
						}
					}
				}
				break;
			
			case -1386191424:
				if (bParam2)
				{
					iVar1 = 3350000;
					if (bVar0)
					{
						if (Global_262145.f_22046 >= 0)
						{
							iVar1 = Global_262145.f_22046;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(3350000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22066 >= 0)
						{
							iVar1 = Global_262145.f_22066;
						}
					}
				}
				break;
			
			case 1565978651:
				if (bParam2)
				{
					iVar1 = 3600000;
					if (bVar0)
					{
						if (Global_262145.f_22045 >= 0)
						{
							iVar1 = Global_262145.f_22045;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(3600000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22065 >= 0)
						{
							iVar1 = Global_262145.f_22065;
						}
					}
				}
				break;
			
			case 1036591958:
				if (bParam2)
				{
					iVar1 = 1995000;
					if (bVar0)
					{
						if (Global_262145.f_22050 >= 0)
						{
							iVar1 = Global_262145.f_22050;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1995000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22070 >= 0)
						{
							iVar1 = Global_262145.f_22070;
						}
					}
				}
				break;
			
			case -32878452:
				if (bParam2)
				{
					iVar1 = 4450000;
					if (bVar0)
					{
						if (Global_262145.f_22043 >= 0)
						{
							iVar1 = Global_262145.f_22043;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(4450000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22063 >= 0)
						{
							iVar1 = Global_262145.f_22063;
						}
					}
				}
				break;
			
			case -42959138:
				if (bParam2)
				{
					iVar1 = 3100000;
					if (bVar0)
					{
						if (Global_262145.f_22047 >= 0)
						{
							iVar1 = Global_262145.f_22047;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(3100000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22067 >= 0)
						{
							iVar1 = Global_262145.f_22067;
						}
					}
				}
				break;
			
			case -1984275979:
				if (bParam2)
				{
					iVar1 = 1730000;
					if (bVar0)
					{
						if (Global_262145.f_22051 >= 0)
						{
							iVar1 = Global_262145.f_22051;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1730000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22071 >= 0)
						{
							iVar1 = Global_262145.f_22071;
						}
					}
				}
				break;
			
			case -1007528109:
				if (bParam2)
				{
					iVar1 = 975000;
					if (bVar0)
					{
						if (Global_262145.f_22054 >= 0)
						{
							iVar1 = Global_262145.f_22054;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(975000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22074 >= 0)
						{
							iVar1 = Global_262145.f_22074;
						}
					}
				}
				break;
			
			case -1523619738:
				if (bParam2)
				{
					iVar1 = 1595000;
					if (bVar0)
					{
						if (Global_262145.f_22052 >= 0)
						{
							iVar1 = Global_262145.f_22052;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1595000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22072 >= 0)
						{
							iVar1 = Global_262145.f_22072;
						}
					}
				}
				break;
			
			case 1392481335:
				iVar1 = 1890000;
				if (bVar0)
				{
					if (Global_262145.f_22058 >= 0)
					{
						iVar1 = Global_262145.f_22058;
					}
				}
				break;
			
			case -998177792:
				iVar1 = 2250000;
				if (bVar0)
				{
					if (Global_262145.f_22059 >= 0)
					{
						iVar1 = Global_262145.f_22059;
					}
				}
				break;
			
			case -1242608589:
				iVar1 = 3750000;
				if (bVar0)
				{
					if (Global_262145.f_22062 >= 0)
					{
						iVar1 = Global_262145.f_22062;
					}
				}
				break;
			
			case 1841130506:
				iVar1 = 615000;
				if (bVar0)
				{
					if (Global_262145.f_22060 >= 0)
					{
						iVar1 = Global_262145.f_22060;
					}
				}
				break;
			
			case 2049897956:
				iVar1 = 885000;
				if (bVar0)
				{
					if (Global_262145.f_22061 >= 0)
					{
						iVar1 = Global_262145.f_22061;
					}
				}
				break;
		}
		switch (iParam1)
		{
			case 1483171323:
				if (bParam2)
				{
					iVar1 = 3550000;
					if (bVar0)
					{
						if (Global_262145.f_23385 >= 0)
						{
							iVar1 = Global_262145.f_23385;
						}
					}
				}
				else
				{
					iVar1 = 4721500;
					if (bVar0)
					{
						if (Global_262145.f_23376 >= 0)
						{
							iVar1 = Global_262145.f_23376;
						}
					}
					iVar2 = 3550000;
					if (bVar0)
					{
						if (Global_262145.f_23385 >= 0)
						{
							iVar2 = Global_262145.f_23385;
						}
					}
				}
				break;
			
			case 886810209:
				if (bParam2)
				{
					iVar1 = 2395000;
					if (bVar0)
					{
						if (Global_262145.f_23386 >= 0)
						{
							iVar1 = Global_262145.f_23386;
						}
					}
				}
				else
				{
					iVar1 = 3185350;
					if (bVar0)
					{
						if (Global_262145.f_23377 >= 0)
						{
							iVar1 = Global_262145.f_23377;
						}
					}
					iVar2 = 2395000;
					if (bVar0)
					{
						if (Global_262145.f_23386 >= 0)
						{
							iVar2 = Global_262145.f_23386;
						}
					}
				}
				break;
			
			case -1693015116:
				if (bParam2)
				{
					iVar1 = 2350000;
					if (bVar0)
					{
						if (Global_262145.f_23387 >= 0)
						{
							iVar1 = Global_262145.f_23387;
						}
					}
				}
				else
				{
					iVar1 = 3125500;
					if (bVar0)
					{
						if (Global_262145.f_23378 >= 0)
						{
							iVar1 = Global_262145.f_23378;
						}
					}
					iVar2 = 2350000;
					if (bVar0)
					{
						if (Global_262145.f_23387 >= 0)
						{
							iVar2 = Global_262145.f_23387;
						}
					}
				}
				break;
			
			case -692292317:
				if (bParam2)
				{
					iVar1 = 2490000;
					if (bVar0)
					{
						if (Global_262145.f_23388 >= 0)
						{
							iVar1 = Global_262145.f_23388;
						}
					}
				}
				else
				{
					iVar1 = 3311700;
					if (bVar0)
					{
						if (Global_262145.f_23379 >= 0)
						{
							iVar1 = Global_262145.f_23379;
						}
					}
					iVar2 = 2490000;
					if (bVar0)
					{
						if (Global_262145.f_23388 >= 0)
						{
							iVar2 = Global_262145.f_23388;
						}
					}
				}
				break;
			
			case -1435527158:
				if (bParam2)
				{
					iVar1 = 2895000;
					if (bVar0)
					{
						if (Global_262145.f_23390 >= 0)
						{
							iVar1 = Global_262145.f_23390;
						}
					}
				}
				else
				{
					iVar1 = 3850350;
					if (bVar0)
					{
						if (Global_262145.f_23381 >= 0)
						{
							iVar1 = Global_262145.f_23381;
						}
					}
					iVar2 = 2895000;
					if (bVar0)
					{
						if (Global_262145.f_23390 >= 0)
						{
							iVar2 = Global_262145.f_23390;
						}
					}
				}
				break;
			
			case 1181327175:
				if (bParam2)
				{
					iVar1 = 2785000;
					if (bVar0)
					{
						if (Global_262145.f_23391 >= 0)
						{
							iVar1 = Global_262145.f_23391;
						}
					}
				}
				else
				{
					iVar1 = 3704050;
					if (bVar0)
					{
						if (Global_262145.f_23382 >= 0)
						{
							iVar1 = Global_262145.f_23382;
						}
					}
					iVar2 = 2785000;
					if (bVar0)
					{
						if (Global_262145.f_23391 >= 0)
						{
							iVar2 = Global_262145.f_23391;
						}
					}
				}
				break;
			
			case 1489874736:
				if (bParam2)
				{
					iVar1 = 2750000;
					if (bVar0)
					{
						if (Global_262145.f_23384 >= 0)
						{
							iVar1 = Global_262145.f_23384;
						}
					}
				}
				else
				{
					iVar1 = 3657500;
					if (bVar0)
					{
						if (Global_262145.f_23375 >= 0)
						{
							iVar1 = Global_262145.f_23375;
						}
					}
					iVar2 = 2750000;
					if (bVar0)
					{
						if (Global_262145.f_23384 >= 0)
						{
							iVar2 = Global_262145.f_23384;
						}
					}
				}
				break;
			
			case -212993243:
				if (bParam2)
				{
					iVar1 = 1595000;
					if (bVar0)
					{
						if (Global_262145.f_23389 >= 0)
						{
							iVar1 = Global_262145.f_23389;
						}
					}
				}
				else
				{
					iVar1 = 2121350;
					if (bVar0)
					{
						if (Global_262145.f_23380 >= 0)
						{
							iVar1 = Global_262145.f_23380;
						}
					}
					iVar2 = 1595000;
					if (bVar0)
					{
						if (Global_262145.f_23389 >= 0)
						{
							iVar2 = Global_262145.f_23389;
						}
					}
				}
				break;
			
			case 447548909:
				if (bParam2)
				{
					iVar1 = 2800000;
					if (bVar0)
					{
						if (Global_262145.f_23392 >= 0)
						{
							iVar1 = Global_262145.f_23392;
						}
					}
				}
				else
				{
					iVar1 = 3724000;
					if (bVar0)
					{
						if (Global_262145.f_23383 >= 0)
						{
							iVar1 = Global_262145.f_23383;
						}
					}
					iVar2 = 2800000;
					if (bVar0)
					{
						if (Global_262145.f_23392 >= 0)
						{
							iVar2 = Global_262145.f_23392;
						}
					}
				}
				break;
			
			case 1561920505:
				iVar1 = 710000;
				if (bVar0)
				{
					if (Global_262145.f_23393 >= 0)
					{
						iVar1 = Global_262145.f_23393;
					}
				}
				break;
			
			case -1848994066:
				iVar1 = 1500000;
				if (bVar0)
				{
					if (Global_262145.f_23405 >= 0)
					{
						iVar1 = Global_262145.f_23405;
					}
				}
				break;
			
			case 1741861769:
				iVar1 = 500000;
				if (bVar0)
				{
					if (Global_262145.f_23398 >= 0)
					{
						iVar1 = Global_262145.f_23398;
					}
				}
				break;
			
			case 1104234922:
				if (bParam2)
				{
					iVar1 = 487500;
					if (bVar0)
					{
						if (Global_262145.f_27725 >= 0)
						{
							iVar1 = Global_262145.f_27725;
						}
					}
				}
				else
				{
					iVar1 = 650000;
					if (bVar0)
					{
						if (Global_262145.f_23408 >= 0)
						{
							iVar1 = Global_262145.f_23408;
						}
					}
					iVar2 = 487500;
					if (bVar0)
					{
						if (Global_262145.f_27725 >= 0)
						{
							iVar2 = Global_262145.f_27725;
						}
					}
				}
				break;
			
			case 1871995513:
				iVar1 = 485000;
				if (bVar0)
				{
					if (Global_262145.f_23407 >= 0)
					{
						iVar1 = Global_262145.f_23407;
					}
				}
				break;
			
			case 1352136073:
				iVar1 = 1603000;
				if (bVar0)
				{
					if (Global_262145.f_23397 >= 0)
					{
						iVar1 = Global_262145.f_23397;
					}
				}
				break;
			
			case -313185164:
				iVar1 = 1955000;
				if (bVar0)
				{
					if (Global_262145.f_23402 >= 0)
					{
						iVar1 = Global_262145.f_23402;
					}
				}
				break;
			
			case -2079788230:
				iVar1 = 785000;
				if (bVar0)
				{
					if (Global_262145.f_23411 >= 0)
					{
						iVar1 = Global_262145.f_23411;
					}
				}
				break;
			
			case 600450546:
				iVar1 = 625000;
				if (bVar0)
				{
					if (Global_262145.f_23399 >= 0)
					{
						iVar1 = Global_262145.f_23399;
					}
				}
				break;
			
			case -410205223:
				iVar1 = 1610000;
				if (bVar0)
				{
					if (Global_262145.f_23395 >= 0)
					{
						iVar1 = Global_262145.f_23395;
					}
				}
				break;
			
			case 867799010:
				iVar1 = 1420000;
				if (bVar0)
				{
					if (Global_262145.f_23406 >= 0)
					{
						iVar1 = Global_262145.f_23406;
					}
				}
				break;
			
			case -1529242755:
				iVar1 = 1375000;
				if (bVar0)
				{
					if (Global_262145.f_23409 >= 0)
					{
						iVar1 = Global_262145.f_23409;
					}
				}
				break;
			
			case 903794909:
				iVar1 = 990000;
				if (bVar0)
				{
					if (Global_262145.f_23394 >= 0)
					{
						iVar1 = Global_262145.f_23394;
					}
				}
				break;
			
			case -1532697517:
				iVar1 = 380000;
				if (bVar0)
				{
					if (Global_262145.f_23404 >= 0)
					{
						iVar1 = Global_262145.f_23404;
					}
				}
				break;
			
			case 15219735:
				iVar1 = 535000;
				if (bVar0)
				{
					if (Global_262145.f_23400 >= 0)
					{
						iVar1 = Global_262145.f_23400;
					}
				}
				break;
			
			case 661493923:
				iVar1 = 1145000;
				if (bVar0)
				{
					if (Global_262145.f_23403 >= 0)
					{
						iVar1 = Global_262145.f_23403;
					}
				}
				break;
			
			case 838982985:
				iVar1 = 900000;
				if (bVar0)
				{
					if (Global_262145.f_23401 >= 0)
					{
						iVar1 = Global_262145.f_23401;
					}
				}
				break;
			
			case -391595372:
				iVar1 = 875000;
				if (bVar0)
				{
					if (Global_262145.f_23396 >= 0)
					{
						iVar1 = Global_262145.f_23396;
					}
				}
				break;
			
			case -121446169:
				iVar1 = 345000;
				if (bVar0)
				{
					if (Global_262145.f_23410 >= 0)
					{
						iVar1 = Global_262145.f_23410;
					}
				}
				break;
			
			case 1909189272:
				iVar1 = 940000;
				if (bVar0)
				{
					if (Global_262145.f_23610 >= 0)
					{
						iVar1 = Global_262145.f_23610;
					}
				}
				break;
			
			case 1617472902:
				iVar1 = 335000;
				if (bVar0)
				{
					if (Global_262145.f_23616 >= 0)
					{
						iVar1 = Global_262145.f_23616;
					}
				}
				break;
			
			case -1267543371:
				if (bParam2)
				{
					iVar1 = 423750;
					if (bVar0)
					{
						if (Global_262145.f_27727 >= 0)
						{
							iVar1 = Global_262145.f_27727;
						}
					}
				}
				else
				{
					iVar1 = 565000;
					if (bVar0)
					{
						if (Global_262145.f_23614 >= 0)
						{
							iVar1 = Global_262145.f_23614;
						}
					}
					iVar2 = 423750;
					if (bVar0)
					{
						if (Global_262145.f_27727 >= 0)
						{
							iVar2 = Global_262145.f_27727;
						}
					}
				}
				break;
			
			case 931280609:
				iVar1 = 360000;
				if (bVar0 && Global_262145.f_23615 >= 0)
				{
					iVar1 = Global_262145.f_23615;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(360000) * 0.75f));
					if (bVar0 && Global_262145.f_25152 >= 0)
					{
						iVar1 = Global_262145.f_25152;
					}
				}
				break;
			
			case 1046206681:
				iVar1 = 1225000;
				if (bVar0)
				{
					if (Global_262145.f_23609 >= 0)
					{
						iVar1 = Global_262145.f_23609;
					}
				}
				break;
			
			case -1259134696:
				iVar1 = 1675000;
				if (bVar0)
				{
					if (Global_262145.f_23608 >= 0)
					{
						iVar1 = Global_262145.f_23608;
					}
				}
				break;
			
			case 1115909093:
				iVar1 = 830000;
				if (bVar0)
				{
					if (Global_262145.f_23611 >= 0)
					{
						iVar1 = Global_262145.f_23611;
					}
				}
				break;
			
			case 1031562256:
				iVar1 = 2825000;
				if (bVar0)
				{
					if (Global_262145.f_23604 >= 0)
					{
						iVar1 = Global_262145.f_23604;
					}
				}
				break;
			
			case -376434238:
				iVar1 = 2515000;
				if (bVar0)
				{
					if (Global_262145.f_23605 >= 0)
					{
						iVar1 = Global_262145.f_23605;
					}
				}
				break;
			
			case -986944621:
				iVar1 = 725000;
				if (bVar0 && Global_262145.f_23613 >= 0)
				{
					iVar1 = Global_262145.f_23613;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(725000) * 0.75f));
				}
				break;
			
			case -1134706562:
				iVar1 = 1980000;
				if (bVar0)
				{
					if (Global_262145.f_23607 >= 0)
					{
						iVar1 = Global_262145.f_23607;
					}
				}
				break;
			
			case -2120700196:
				iVar1 = 2305000;
				if (bVar0)
				{
					if (Global_262145.f_23606 >= 0)
					{
						iVar1 = Global_262145.f_23606;
					}
				}
				break;
			
			case -214906006:
				iVar1 = 790000;
				if (bVar0)
				{
					if (Global_262145.f_23612 >= 0)
					{
						iVar1 = Global_262145.f_23612;
					}
				}
				break;
			
			case -988501280:
				iVar1 = 145000;
				if (bVar0)
				{
					if (Global_262145.f_23617 >= 0)
					{
						iVar1 = Global_262145.f_23617;
					}
				}
				break;
			
			case 1254014755:
				iVar1 = 1775000;
				if (bVar0)
				{
					if (Global_262145.f_23618 >= 0)
					{
						iVar1 = Global_262145.f_23618;
					}
				}
				break;
			
			case -726768679:
				iVar1 = 1815000;
				if (bVar0)
				{
					if (Global_262145.f_23619 >= 0)
					{
						iVar1 = Global_262145.f_23619;
					}
				}
				break;
			
			case -1988428699:
				if (!bParam2)
				{
					iVar1 = 1375000;
					if (bVar0)
					{
						if (Global_262145.f_24326 >= 0)
						{
							iVar1 = Global_262145.f_24326;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case 1945374990:
				if (bParam2)
				{
					iVar1 = 72000;
					if (bVar0)
					{
						if (Global_262145.f_24242 >= 0)
						{
							iVar1 = Global_262145.f_24242;
						}
					}
				}
				else
				{
					iVar1 = 95760;
					if (bVar0)
					{
						if (Global_262145.f_24248 >= 0)
						{
							iVar1 = Global_262145.f_24248;
						}
					}
					iVar2 = 72000;
					if (bVar0)
					{
						if (Global_262145.f_24242 >= 0)
						{
							iVar2 = Global_262145.f_24242;
						}
					}
				}
				break;
			
			case 1653666139:
				if (bParam2)
				{
					iVar1 = 241000;
					if (bVar0)
					{
						if (Global_262145.f_24241 >= 0)
						{
							iVar1 = Global_262145.f_24241;
						}
					}
				}
				else
				{
					iVar1 = 320530;
					if (bVar0)
					{
						if (Global_262145.f_24247 >= 0)
						{
							iVar1 = Global_262145.f_24247;
						}
					}
					iVar2 = 241000;
					if (bVar0)
					{
						if (Global_262145.f_24241 >= 0)
						{
							iVar2 = Global_262145.f_24241;
						}
					}
				}
				break;
			
			case 500482303:
				iVar1 = 909000;
				if (bVar0)
				{
					if (Global_262145.f_24213 >= 0)
					{
						iVar1 = Global_262145.f_24213;
					}
				}
				break;
			
			case 2044532910:
				iVar1 = 1775000;
				if (bVar0)
				{
					if (Global_262145.f_24244 >= 0)
					{
						iVar1 = Global_262145.f_24244;
					}
				}
				break;
			
			case -638562243:
				if (bParam2)
				{
					iVar1 = 3480000;
					if (bVar0)
					{
						if (Global_262145.f_24245 >= 0)
						{
							iVar1 = Global_262145.f_24245;
						}
					}
				}
				else
				{
					iVar1 = 4628400;
					if (bVar0)
					{
						if (Global_262145.f_24250 >= 0)
						{
							iVar1 = Global_262145.f_24250;
						}
					}
					iVar2 = 3480000;
					if (bVar0)
					{
						if (Global_262145.f_24245 >= 0)
						{
							iVar2 = Global_262145.f_24245;
						}
					}
				}
				break;
			
			case 1692272545:
				iVar1 = 3800000;
				if (bVar0)
				{
					if (Global_262145.f_24246 >= 0)
					{
						iVar1 = Global_262145.f_24246;
					}
				}
				break;
			
			case 2069146067:
				if (bParam2)
				{
					iVar1 = 2925000;
					if (bVar0)
					{
						if (Global_262145.f_24243 >= 0)
						{
							iVar1 = Global_262145.f_24243;
						}
					}
				}
				else
				{
					iVar1 = 3890250;
					if (bVar0)
					{
						if (Global_262145.f_24249 >= 0)
						{
							iVar1 = Global_262145.f_24249;
						}
					}
					iVar2 = 2925000;
					if (bVar0)
					{
						if (Global_262145.f_24243 >= 0)
						{
							iVar2 = Global_262145.f_24243;
						}
					}
				}
				break;
			
			case -420911112:
				if (bParam2)
				{
					iVar1 = 460000;
					if (bVar0)
					{
						if (Global_262145.f_24210 >= 0)
						{
							iVar1 = Global_262145.f_24210;
						}
					}
				}
				else
				{
					iVar1 = 611800;
					if (bVar0)
					{
						if (Global_262145.f_24251 >= 0)
						{
							iVar1 = Global_262145.f_24251;
						}
					}
					iVar2 = 460000;
					if (bVar0)
					{
						if (Global_262145.f_24210 >= 0)
						{
							iVar2 = Global_262145.f_24210;
						}
					}
				}
				break;
			
			case 321186144:
				iVar1 = 1272000;
				if (bVar0)
				{
					if (Global_262145.f_24211 >= 0)
					{
						iVar1 = Global_262145.f_24211;
					}
				}
				break;
			
			case -54332285:
				iVar1 = 597000;
				if (bVar0)
				{
					if (Global_262145.f_24212 >= 0)
					{
						iVar1 = Global_262145.f_24212;
					}
				}
				break;
			
			case -307958377:
				if (bParam2)
				{
					iVar1 = 895000;
					if (bVar0)
					{
						if (Global_262145.f_24215 >= 0)
						{
							iVar1 = Global_262145.f_24215;
						}
					}
				}
				else
				{
					iVar1 = 1190350;
					if (bVar0)
					{
						if (Global_262145.f_24253 >= 0)
						{
							iVar1 = Global_262145.f_24253;
						}
					}
					iVar2 = 895000;
					if (bVar0)
					{
						if (Global_262145.f_24215 >= 0)
						{
							iVar2 = Global_262145.f_24215;
						}
					}
				}
				break;
			
			case 345756458:
				if (bParam2)
				{
					iVar1 = 1385000;
					if (bVar0)
					{
						if (Global_262145.f_24214 >= 0)
						{
							iVar1 = Global_262145.f_24214;
						}
					}
				}
				else
				{
					iVar1 = 1842050;
					if (bVar0)
					{
						if (Global_262145.f_24252 >= 0)
						{
							iVar1 = Global_262145.f_24252;
						}
					}
					iVar2 = 1385000;
					if (bVar0)
					{
						if (Global_262145.f_24214 >= 0)
						{
							iVar2 = Global_262145.f_24214;
						}
					}
				}
				break;
			
			case -801550069:
				iVar1 = 3870300;
				if (bVar0 && Global_262145.f_25218 >= 0)
				{
					iVar1 = Global_262145.f_25218;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2910000;
					if (bVar0 && Global_262145.f_25233 >= 0)
					{
						iVar1 = Global_262145.f_25233;
					}
				}
				break;
			
			case 679453769:
				iVar1 = 3870300;
				if (bVar0 && Global_262145.f_25223 >= 0)
				{
					iVar1 = Global_262145.f_25223;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2910000;
					if (bVar0 && Global_262145.f_25238 >= 0)
					{
						iVar1 = Global_262145.f_25238;
					}
				}
				break;
			
			case 1909700336:
				iVar1 = 3870300;
				if (bVar0 && Global_262145.f_25228 >= 0)
				{
					iVar1 = Global_262145.f_25228;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2910000;
					if (bVar0 && Global_262145.f_25243 >= 0)
					{
						iVar1 = Global_262145.f_25243;
					}
				}
				break;
			
			case 2139203625:
				iVar1 = 2666650;
				if (bVar0 && Global_262145.f_25219 >= 0)
				{
					iVar1 = Global_262145.f_25219;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2005000;
					if (bVar0 && Global_262145.f_25234 >= 0)
					{
						iVar1 = Global_262145.f_25234;
					}
				}
				break;
			
			case -1890996696:
				iVar1 = 2666650;
				if (bVar0 && Global_262145.f_25224 >= 0)
				{
					iVar1 = Global_262145.f_25224;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2005000;
					if (bVar0 && Global_262145.f_25239 >= 0)
					{
						iVar1 = Global_262145.f_25239;
					}
				}
				break;
			
			case 2038858402:
				iVar1 = 2666650;
				if (bVar0 && Global_262145.f_25229 >= 0)
				{
					iVar1 = Global_262145.f_25229;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2005000;
					if (bVar0 && Global_262145.f_25244 >= 0)
					{
						iVar1 = Global_262145.f_25244;
					}
				}
				break;
			
			case -1146969353:
				iVar1 = 3076290;
				if (bVar0 && Global_262145.f_25220 >= 0)
				{
					iVar1 = Global_262145.f_25220;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2313000;
					if (bVar0 && Global_262145.f_25235 >= 0)
					{
						iVar1 = Global_262145.f_25235;
					}
				}
				break;
			
			case 1542143200:
				iVar1 = 3076290;
				if (bVar0 && Global_262145.f_25225 >= 0)
				{
					iVar1 = Global_262145.f_25225;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2313000;
					if (bVar0 && Global_262145.f_25240 >= 0)
					{
						iVar1 = Global_262145.f_25240;
					}
				}
				break;
			
			case -579747861:
				iVar1 = 3076290;
				if (bVar0 && Global_262145.f_25230 >= 0)
				{
					iVar1 = Global_262145.f_25230;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2313000;
					if (bVar0 && Global_262145.f_25245 >= 0)
					{
						iVar1 = Global_262145.f_25245;
					}
				}
				break;
			
			case 444994115:
				iVar1 = 2284940;
				if (bVar0 && Global_262145.f_25221 >= 0)
				{
					iVar1 = Global_262145.f_25221;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1718000;
					if (bVar0 && Global_262145.f_25236 >= 0)
					{
						iVar1 = Global_262145.f_25236;
					}
				}
				break;
			
			case 1637620610:
				iVar1 = 2284940;
				if (bVar0 && Global_262145.f_25226 >= 0)
				{
					iVar1 = Global_262145.f_25226;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1718000;
					if (bVar0 && Global_262145.f_25241 >= 0)
					{
						iVar1 = Global_262145.f_25241;
					}
				}
				break;
			
			case -755532233:
				iVar1 = 2284940;
				if (bVar0 && Global_262145.f_25231 >= 0)
				{
					iVar1 = Global_262145.f_25231;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1718000;
					if (bVar0 && Global_262145.f_25246 >= 0)
					{
						iVar1 = Global_262145.f_25246;
					}
				}
				break;
			
			case 540101442:
				iVar1 = 2138640;
				if (bVar0 && Global_262145.f_25222 >= 0)
				{
					iVar1 = Global_262145.f_25222;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1608000;
					if (bVar0 && Global_262145.f_25237 >= 0)
					{
						iVar1 = Global_262145.f_25237;
					}
				}
				break;
			
			case -1106120762:
				iVar1 = 2138640;
				if (bVar0 && Global_262145.f_25227 >= 0)
				{
					iVar1 = Global_262145.f_25227;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1608000;
					if (bVar0 && Global_262145.f_25242 >= 0)
					{
						iVar1 = Global_262145.f_25242;
					}
				}
				break;
			
			case -1478704292:
				iVar1 = 2138640;
				if (bVar0 && Global_262145.f_25232 >= 0)
				{
					iVar1 = Global_262145.f_25232;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1608000;
					if (bVar0 && Global_262145.f_25247 >= 0)
					{
						iVar1 = Global_262145.f_25247;
					}
				}
				break;
			
			case -2096690334:
				iVar1 = 331835;
				if (bVar0 && Global_262145.f_25146 >= 0)
				{
					iVar1 = Global_262145.f_25146;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 249500;
					if (bVar0 && Global_262145.f_25151 >= 0)
					{
						iVar1 = Global_262145.f_25151;
					}
				}
				break;
			
			case -49115651:
				iVar1 = 596000;
				if (bVar0 && Global_262145.f_25253 >= 0)
				{
					iVar1 = Global_262145.f_25253;
				}
				break;
			
			case 1456744817:
				iVar1 = 718000;
				if (bVar0 && Global_262145.f_25255 >= 0)
				{
					iVar1 = Global_262145.f_25255;
				}
				break;
			
			case 1591739866:
				iVar1 = 1795000;
				if (bVar0 && Global_262145.f_25248 >= 0)
				{
					iVar1 = Global_262145.f_25248;
				}
				break;
			
			case -507495760:
				iVar1 = 1300000;
				if (bVar0 && Global_262145.f_25249 >= 0)
				{
					iVar1 = Global_262145.f_25249;
				}
				break;
			
			case -1168952148:
				iVar1 = 498000;
				if (bVar0 && Global_262145.f_25250 >= 0)
				{
					iVar1 = Global_262145.f_25250;
				}
				break;
			
			case 1279262537:
				iVar1 = 512000;
				if (bVar0 && Global_262145.f_25251 >= 0)
				{
					iVar1 = Global_262145.f_25251;
				}
				break;
			
			case -1566607184:
				iVar1 = 909000;
				if (bVar0 && Global_262145.f_25252 >= 0)
				{
					iVar1 = Global_262145.f_25252;
				}
				break;
			
			case -331467772:
				iVar1 = 1965000;
				if (bVar0 && Global_262145.f_25254 >= 0)
				{
					iVar1 = Global_262145.f_25254;
				}
				break;
			
			case -286046740:
				iVar1 = 1590000;
				if (bVar0 && Global_262145.f_25256 >= 0)
				{
					iVar1 = Global_262145.f_25256;
				}
				break;
			
			case -591651781:
				iVar1 = 0;
				break;
			
			case -2061049099:
				iVar1 = 0;
				break;
			
			case 373261600:
				iVar1 = 100000;
				break;
			
			case 1044193113:
				iVar1 = 2325000;
				if (bVar0 && Global_262145.f_26102 >= 0)
				{
					iVar1 = Global_262145.f_26102;
				}
				break;
			
			case 686471183:
				iVar1 = 718000;
				if (bVar0 && Global_262145.f_26103 >= 0)
				{
					iVar1 = Global_262145.f_26103;
				}
				break;
			
			case -941272559:
				iVar1 = 1625000;
				if (bVar0 && Global_262145.f_26099 >= 0)
				{
					iVar1 = Global_262145.f_26099;
				}
				break;
			
			case -1829436850:
				iVar1 = 608000;
				if (bVar0 && Global_262145.f_26105 >= 0)
				{
					iVar1 = Global_262145.f_26105;
				}
				break;
			
			case -682108547:
				iVar1 = 1925000;
				if (bVar0 && Global_262145.f_26104 >= 0)
				{
					iVar1 = Global_262145.f_26104;
				}
				break;
			
			case 722226637:
				if (bParam2)
				{
					iVar1 = 461250;
					if (bVar0)
					{
						if (Global_262145.f_27726 >= 0)
						{
							iVar1 = Global_262145.f_27726;
						}
					}
				}
				else
				{
					iVar1 = 615000;
					if (bVar0)
					{
						if (Global_262145.f_26100 >= 0)
						{
							iVar1 = Global_262145.f_26100;
						}
					}
					iVar2 = 461250;
					if (bVar0)
					{
						if (Global_262145.f_27726 >= 0)
						{
							iVar2 = Global_262145.f_27726;
						}
					}
				}
				break;
			
			case 1854776567:
				iVar1 = 897000;
				if (bVar0 && Global_262145.f_26106 >= 0)
				{
					iVar1 = Global_262145.f_26106;
				}
				break;
			
			case 1862507111:
				iVar1 = 812000;
				if (bVar0 && Global_262145.f_26101 >= 0)
				{
					iVar1 = Global_262145.f_26101;
				}
				break;
			
			case -882629065:
				iVar1 = 797000;
				if (bVar0 && Global_262145.f_26108 >= 0)
				{
					iVar1 = Global_262145.f_26108;
				}
				break;
			
			case -362150785:
				iVar1 = 835000;
				if (bVar0 && Global_262145.f_26107 >= 0)
				{
					iVar1 = Global_262145.f_26107;
				}
				break;
			
			case 310284501:
				iVar1 = 450000;
				if (bVar0 && Global_262145.f_26109 >= 0)
				{
					iVar1 = Global_262145.f_26109;
				}
				break;
			
			case 916547552:
				iVar1 = 925000;
				if (bVar0 && Global_262145.f_26117 >= 0)
				{
					iVar1 = Global_262145.f_26117;
				}
				break;
			
			case -1804415708:
				iVar1 = 805000;
				if (bVar0 && Global_262145.f_26116 >= 0)
				{
					iVar1 = Global_262145.f_26116;
				}
				break;
			
			case 1934384720:
				iVar1 = 745000;
				if (bVar0 && Global_262145.f_26115 >= 0)
				{
					iVar1 = Global_262145.f_26115;
				}
				break;
			
			case -1349095620:
				iVar1 = 875000;
				if (bVar0 && Global_262145.f_26114 >= 0)
				{
					iVar1 = Global_262145.f_26114;
				}
				break;
			
			case -208911803:
				if (bParam2)
				{
					iVar1 = 918750;
					if (bVar0)
					{
						if (Global_262145.f_27724 >= 0)
						{
							iVar1 = Global_262145.f_27724;
						}
					}
				}
				else
				{
					iVar1 = 1225000;
					if (bVar0)
					{
						if (Global_262145.f_26427 >= 0)
						{
							iVar1 = Global_262145.f_26427;
						}
					}
					iVar2 = 918750;
					if (bVar0)
					{
						if (Global_262145.f_27724 >= 0)
						{
							iVar2 = Global_262145.f_27724;
						}
					}
				}
				break;
			
			case -324618589:
				iVar1 = 2575000;
				if (bVar0 && Global_262145.f_26113 >= 0)
				{
					iVar1 = Global_262145.f_26113;
				}
				break;
			
			case -664141241:
				iVar1 = 2875000;
				if (bVar0 && Global_262145.f_26112 >= 0)
				{
					iVar1 = Global_262145.f_26112;
				}
				break;
			
			case 1323778901:
				iVar1 = 2750000;
				if (bVar0 && Global_262145.f_26111 >= 0)
				{
					iVar1 = Global_262145.f_26111;
				}
				break;
			
			case -1620126302:
				iVar1 = 1875000;
				if (bVar0 && Global_262145.f_26110 >= 0)
				{
					iVar1 = Global_262145.f_26110;
				}
				break;
			
			case -447711397:
				iVar1 = 905000;
				if (bVar0 && Global_262145.f_26492 >= 0)
				{
					iVar1 = Global_262145.f_26492;
				}
				break;
		}
		switch (iParam1)
		{
			case 1118611807:
				if (bParam2)
				{
					iVar1 = 306000;
					if (bVar0)
					{
						if (Global_262145.f_27691 >= 0)
						{
							iVar1 = Global_262145.f_27691;
						}
					}
				}
				else
				{
					iVar1 = 408000;
					if (bVar0)
					{
						if (Global_262145.f_27690 >= 0)
						{
							iVar1 = Global_262145.f_27690;
						}
					}
					iVar2 = 306000;
					if (bVar0)
					{
						if (Global_262145.f_27691 >= 0)
						{
							iVar2 = Global_262145.f_27691;
						}
					}
				}
				break;
			
			case 409049982:
				if (bParam2)
				{
					iVar1 = 435000;
					if (bVar0)
					{
						if (Global_262145.f_27693 >= 0)
						{
							iVar1 = Global_262145.f_27693;
						}
					}
				}
				else
				{
					iVar1 = 580000;
					if (bVar0)
					{
						if (Global_262145.f_27692 >= 0)
						{
							iVar1 = Global_262145.f_27692;
						}
					}
					iVar2 = 435000;
					if (bVar0)
					{
						if (Global_262145.f_27693 >= 0)
						{
							iVar2 = Global_262145.f_27693;
						}
					}
				}
				break;
			
			case -1756021720:
				if (bParam2)
				{
					iVar1 = 1106250;
					if (bVar0)
					{
						if (Global_262145.f_27695 >= 0)
						{
							iVar1 = Global_262145.f_27695;
						}
					}
				}
				else
				{
					iVar1 = 1475000;
					if (bVar0)
					{
						if (Global_262145.f_27694 >= 0)
						{
							iVar1 = Global_262145.f_27694;
						}
					}
					iVar2 = 1106250;
					if (bVar0)
					{
						if (Global_262145.f_27695 >= 0)
						{
							iVar2 = Global_262145.f_27695;
						}
					}
				}
				break;
			
			case 2031587082:
				if (bParam2)
				{
					iVar1 = 1215000;
					if (bVar0)
					{
						if (Global_262145.f_27697 >= 0)
						{
							iVar1 = Global_262145.f_27697;
						}
					}
				}
				else
				{
					iVar1 = 1620000;
					if (bVar0)
					{
						if (Global_262145.f_27696 >= 0)
						{
							iVar1 = Global_262145.f_27696;
						}
					}
					iVar2 = 1215000;
					if (bVar0)
					{
						if (Global_262145.f_27697 >= 0)
						{
							iVar2 = Global_262145.f_27697;
						}
					}
				}
				break;
			
			case 1693751655:
				if (bParam2)
				{
					iVar1 = 981000;
					if (bVar0)
					{
						if (Global_262145.f_27699 >= 0)
						{
							iVar1 = Global_262145.f_27699;
						}
					}
				}
				else
				{
					iVar1 = 1308000;
					if (bVar0)
					{
						if (Global_262145.f_27698 >= 0)
						{
							iVar1 = Global_262145.f_27698;
						}
					}
					iVar2 = 981000;
					if (bVar0)
					{
						if (Global_262145.f_27699 >= 0)
						{
							iVar2 = Global_262145.f_27699;
						}
					}
				}
				break;
			
			case 987469656:
				if (bParam2)
				{
					iVar1 = 918000;
					if (bVar0)
					{
						if (Global_262145.f_27701 >= 0)
						{
							iVar1 = Global_262145.f_27701;
						}
					}
				}
				else
				{
					iVar1 = 1224000;
					if (bVar0)
					{
						if (Global_262145.f_27700 >= 0)
						{
							iVar1 = Global_262145.f_27700;
						}
					}
					iVar2 = 918000;
					if (bVar0)
					{
						if (Global_262145.f_27701 >= 0)
						{
							iVar2 = Global_262145.f_27701;
						}
					}
				}
				break;
			
			case 872704284:
				if (bParam2)
				{
					iVar1 = 1288500;
					if (bVar0)
					{
						if (Global_262145.f_27703 >= 0)
						{
							iVar1 = Global_262145.f_27703;
						}
					}
				}
				else
				{
					iVar1 = 1718000;
					if (bVar0)
					{
						if (Global_262145.f_27702 >= 0)
						{
							iVar1 = Global_262145.f_27702;
						}
					}
					iVar2 = 1288500;
					if (bVar0)
					{
						if (Global_262145.f_27703 >= 0)
						{
							iVar2 = Global_262145.f_27703;
						}
					}
				}
				break;
			
			case 408825843:
				if (bParam2)
				{
					iVar1 = 951000;
					if (bVar0)
					{
						if (Global_262145.f_27705 >= 0)
						{
							iVar1 = Global_262145.f_27705;
						}
					}
				}
				else
				{
					iVar1 = 1268000;
					if (bVar0)
					{
						if (Global_262145.f_27704 >= 0)
						{
							iVar1 = Global_262145.f_27704;
						}
					}
					iVar2 = 951000;
					if (bVar0)
					{
						if (Global_262145.f_27705 >= 0)
						{
							iVar2 = Global_262145.f_27705;
						}
					}
				}
				break;
			
			case 740289177:
				if (bParam2)
				{
					iVar1 = 1660500;
					if (bVar0)
					{
						if (Global_262145.f_27707 >= 0)
						{
							iVar1 = Global_262145.f_27707;
						}
					}
				}
				else
				{
					iVar1 = 2214000;
					if (bVar0)
					{
						if (Global_262145.f_27706 >= 0)
						{
							iVar1 = Global_262145.f_27706;
						}
					}
					iVar2 = 1660500;
					if (bVar0)
					{
						if (Global_262145.f_27707 >= 0)
						{
							iVar2 = Global_262145.f_27707;
						}
					}
				}
				break;
			
			case -834353991:
				if (bParam2)
				{
					iVar1 = 1275000;
					if (bVar0)
					{
						if (Global_262145.f_27709 >= 0)
						{
							iVar1 = Global_262145.f_27709;
						}
					}
				}
				else
				{
					iVar1 = 1700000;
					if (bVar0)
					{
						if (Global_262145.f_27708 >= 0)
						{
							iVar1 = Global_262145.f_27708;
						}
					}
					iVar2 = 1275000;
					if (bVar0)
					{
						if (Global_262145.f_27709 >= 0)
						{
							iVar2 = Global_262145.f_27709;
						}
					}
				}
				break;
			
			case 301304410:
				if (bParam2)
				{
					iVar1 = 502500;
					if (bVar0)
					{
						if (Global_262145.f_27711 >= 0)
						{
							iVar1 = Global_262145.f_27711;
						}
					}
				}
				else
				{
					iVar1 = 670000;
					if (bVar0)
					{
						if (Global_262145.f_27710 >= 0)
						{
							iVar1 = Global_262145.f_27710;
						}
					}
					iVar2 = 502500;
					if (bVar0)
					{
						if (Global_262145.f_27711 >= 0)
						{
							iVar2 = Global_262145.f_27711;
						}
					}
				}
				break;
			
			case 960812448:
				if (bParam2)
				{
					iVar1 = 2055000;
					if (bVar0)
					{
						if (Global_262145.f_27713 >= 0)
						{
							iVar1 = Global_262145.f_27713;
						}
					}
				}
				else
				{
					iVar1 = 2740000;
					if (bVar0)
					{
						if (Global_262145.f_27712 >= 0)
						{
							iVar1 = Global_262145.f_27712;
						}
					}
					iVar2 = 2055000;
					if (bVar0)
					{
						if (Global_262145.f_27713 >= 0)
						{
							iVar2 = Global_262145.f_27713;
						}
					}
				}
				break;
			
			case 1284356689:
				if (bParam2)
				{
					iVar1 = 1800000;
					if (bVar0)
					{
						if (Global_262145.f_27715 >= 0)
						{
							iVar1 = Global_262145.f_27715;
						}
					}
				}
				else
				{
					iVar1 = 2400000;
					if (bVar0)
					{
						if (Global_262145.f_27714 >= 0)
						{
							iVar1 = Global_262145.f_27714;
						}
					}
					iVar2 = 1800000;
					if (bVar0)
					{
						if (Global_262145.f_27715 >= 0)
						{
							iVar2 = Global_262145.f_27715;
						}
					}
				}
				break;
			
			case 394110044:
				iVar1 = 1470000;
				if (bVar0)
				{
					if (Global_262145.f_27793 >= 0)
					{
						iVar1 = Global_262145.f_27793;
					}
				}
				break;
			
			case -1254331310:
				iVar1 = 2275000;
				if (bVar0)
				{
					if (Global_262145.f_27784 >= 0)
					{
						iVar1 = Global_262145.f_27784;
					}
				}
				break;
			
			case 340154634:
				iVar1 = 3515000;
				if (bVar0)
				{
					if (Global_262145.f_27863 >= 0)
					{
						iVar1 = Global_262145.f_27863;
					}
				}
				break;
			
			case -1960756985:
				iVar1 = 3115000;
				if (bVar0)
				{
					if (Global_262145.f_27866 >= 0)
					{
						iVar1 = Global_262145.f_27866;
					}
				}
				break;
			
			case -1132721664:
				iVar1 = 2165000;
				if (bVar0)
				{
					if (Global_262145.f_27869 >= 0)
					{
						iVar1 = Global_262145.f_27869;
					}
				}
				break;
			
			case 83136452:
				iVar1 = 1175000;
				if (bVar0)
				{
					if (Global_262145.f_27870 >= 0)
					{
						iVar1 = Global_262145.f_27870;
					}
				}
				break;
			
			case 1456336509:
				iVar1 = 1285000;
				if (bVar0)
				{
					if (Global_262145.f_27871 >= 0)
					{
						iVar1 = Global_262145.f_27871;
					}
				}
				break;
			
			case -1358197432:
				iVar1 = 2310000;
				if (bVar0)
				{
					if (Global_262145.f_28556 >= 0)
					{
						iVar1 = Global_262145.f_28556;
					}
				}
				break;
			
			case 1492612435:
				iVar1 = 3400000;
				if (bVar0)
				{
					if (Global_262145.f_28560 >= 0)
					{
						iVar1 = Global_262145.f_28560;
					}
				}
				break;
			
			case 1181339704:
				iVar1 = 2997000;
				if (bVar0)
				{
					if (Global_262145.f_28561 >= 0)
					{
						iVar1 = Global_262145.f_28561;
					}
				}
				break;
			
			case -1728685474:
				iVar1 = 1510000;
				if (bVar0)
				{
					if (Global_262145.f_28562 >= 0)
					{
						iVar1 = Global_262145.f_28562;
					}
				}
				break;
			
			case 1107404867:
				iVar1 = 620000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_28570 + func_691(iParam1));
				}
				break;
			
			case 67753863:
				iVar1 = 700000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_23407 + func_691(iParam1));
				}
				break;
			
			case -2122646867:
				iVar1 = 815000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_26100 + func_691(iParam1));
				}
				break;
			
			case -838099166:
				iVar1 = 1220000;
				if (bVar0)
				{
					if (Global_262145.f_28552 >= 0)
					{
						iVar1 = Global_262145.f_28552;
					}
				}
				break;
			
			case -913589546:
				iVar1 = 520000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_7646 + func_691(iParam1));
				}
				break;
			
			case -2098954619:
				iVar1 = 1280000;
				if (bVar0)
				{
					if (Global_262145.f_28554 >= 0)
					{
						iVar1 = Global_262145.f_28554;
					}
				}
				break;
			
			case 2134119907:
				iVar1 = 378000;
				if (bVar0)
				{
					if (Global_262145.f_28548 >= 0)
					{
						iVar1 = Global_262145.f_28548;
					}
				}
				break;
			
			case 1802742206:
				iVar1 = 1288000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_18528 + func_691(iParam1));
				}
				break;
			
			case 1717532765:
				iVar1 = 925000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_28569 + func_691(iParam1));
				}
				break;
			
			case -631322662:
				iVar1 = 1380000;
				if (bVar0)
				{
					if (Global_262145.f_28555 >= 0)
					{
						iVar1 = Global_262145.f_28555;
					}
				}
				break;
			
			case -1810806490:
				iVar1 = 678000;
				if (bVar0)
				{
					if (Global_262145.f_28550 >= 0)
					{
						iVar1 = Global_262145.f_28550;
					}
				}
				break;
			}
	}
	switch (iParam1)
	{
		case 1488164764:
			iVar1 = 50000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 25000;
				if (Global_262145.f_7167 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_7167;
				}
			}
			break;
		
		case -349601129:
			iVar1 = 75000;
			if (bVar0)
			{
				if (Global_262145.f_7165 >= 0)
				{
					iVar1 = Global_262145.f_7165;
				}
			}
			break;
		
		case 92612664:
			iVar1 = 40000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 40000;
				if (Global_262145.f_7166 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_7166;
				}
			}
			break;
		
		case 231083307:
			iVar1 = 325000;
			if (bVar0)
			{
				if (Global_262145.f_7168 >= 0)
				{
					iVar1 = Global_262145.f_7168;
				}
			}
			break;
		
		case 117401876:
			iVar1 = 1150000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 750000;
				if (Global_262145.f_6595 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_6595;
				}
			}
			break;
		
		case -1297672541:
			iVar1 = 240000;
			if (bVar0)
			{
				if (Global_262145.f_6567 >= 0)
				{
					iVar1 = Global_262145.f_6567;
				}
			}
			break;
		
		case 408192225:
			if (!bParam2)
			{
				iVar1 = 500000;
				if (bVar0)
				{
					if (Global_262145.f_6569 >= 0)
					{
						iVar1 = Global_262145.f_6569;
					}
				}
			}
			else
			{
				iVar1 = 0;
			}
			break;
		
		case 767087018:
			iVar1 = 150000;
			if (bVar0)
			{
				if (Global_262145.f_6565 >= 0)
				{
					iVar1 = Global_262145.f_6565;
				}
			}
			break;
		
		case 1341619767:
			iVar1 = 950000;
			if (bVar0)
			{
				if (Global_262145.f_6620 >= 0)
				{
					iVar1 = Global_262145.f_6620;
				}
			}
			break;
		
		case -142942670:
			iVar1 = 275000;
			if (bVar0)
			{
				if (Global_262145.f_6568 >= 0)
				{
					iVar1 = Global_262145.f_6568;
				}
			}
			break;
		
		case -1403128555:
			iVar1 = 725000;
			if (bVar0)
			{
				if (Global_262145.f_6570 >= 0)
				{
					iVar1 = Global_262145.f_6570;
				}
			}
			break;
		
		case 486987393:
			if (!bParam2)
			{
				iVar1 = 195000;
				if (bVar0)
				{
					if (Global_262145.f_6566 >= 0)
					{
						iVar1 = Global_262145.f_6566;
					}
				}
			}
			else
			{
				iVar1 = 0;
			}
			break;
		
		case 1836027715:
			iVar1 = 75000;
			if (bVar0)
			{
				if (Global_262145.f_7169 >= 0)
				{
					iVar1 = Global_262145.f_7169;
				}
			}
			break;
		
		case -1205801634:
			iVar1 = 160000;
			if (bVar0)
			{
				if (Global_262145.f_7645 >= 0)
				{
					iVar1 = Global_262145.f_7645;
				}
			}
			break;
		
		case 1373123368:
			iVar1 = 125000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 120000;
				if (Global_262145.f_7648 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_7648;
				}
			}
			break;
		
		case 75131841:
			iVar1 = 200000;
			if (bVar0 && Global_262145.f_7646 >= 0)
			{
				iVar1 = Global_262145.f_7646;
			}
			if (bParam2)
			{
				iVar2 = iVar1;
				iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(200000) * 0.75f));
				if (bVar0 && Global_262145.f_25148 >= 0)
				{
					iVar1 = Global_262145.f_25148;
				}
			}
			break;
		
		case 841808271:
			iVar1 = 100000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 140000;
				if (Global_262145.f_7647 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_7647;
				}
			}
			break;
		
		case -431692672:
			iVar1 = 85000;
			if (bVar0)
			{
				if (Global_262145.f_7649 >= 0)
				{
					iVar1 = Global_262145.f_7649;
				}
			}
			break;
		
		case -1237253773:
			iVar1 = 249000;
			if (bVar0)
			{
				if (Global_262145.f_7650 >= 0)
				{
					iVar1 = Global_262145.f_7650;
				}
			}
			break;
		
		case 1078682497:
			iVar1 = 400000;
			if (bVar0)
			{
				if (Global_262145.f_7644 >= 0)
				{
					iVar1 = Global_262145.f_7644;
				}
			}
			break;
		
		case 1824333165:
			iVar1 = 658000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 1150000;
				if (Global_262145.f_8071 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_8071;
				}
			}
			break;
		
		case 165154707:
			iVar1 = 1750000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 1700000;
				if (Global_262145.f_8072 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_8072;
				}
			}
			break;
		
		case -339587598:
			if (!bParam2)
			{
				iVar1 = 1500000;
				if (bVar0)
				{
					if (Global_262145.f_8073 >= 0)
					{
						iVar1 = Global_262145.f_8073;
					}
				}
			}
			else
			{
				iVar1 = 1600000;
				if (bVar0)
				{
					if (Global_262145.f_8074 >= 0)
					{
						iVar1 = Global_262145.f_8074;
					}
				}
			}
			break;
		
		case 1011753235:
			if (bParam2)
			{
				iVar1 = 350000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 665000;
					if (Global_262145.f_8069 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_8069;
					}
				}
			}
			else
			{
				iVar1 = 395000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 665000;
					if (Global_262145.f_8070 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_8070;
					}
				}
			}
			break;
		
		case 743478836:
			iVar1 = 120000;
			if (bVar0)
			{
				if (Global_262145.f_7814 >= 0)
				{
					iVar1 = Global_262145.f_7814;
				}
			}
			break;
		
		case -845961253:
			iVar1 = 742000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 742014;
				if (Global_262145.f_7813 >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_7813;
				}
			}
			break;
		
		case -159126838:
			iVar1 = 92500;
			if (bVar0)
			{
				if (Global_262145.f_8387 >= 0)
				{
					iVar1 = Global_262145.f_8387;
				}
			}
			break;
		
		case 1265391242:
			iVar1 = 82000;
			if (bVar0)
			{
				if (Global_262145.f_8388 >= 0)
				{
					iVar1 = Global_262145.f_8388;
				}
			}
			break;
		
		case -1089039904:
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_8389 >= 0)
				{
					iVar1 = Global_262145.f_8389;
				}
			}
			break;
		
		case 444171386:
			if (!bParam2)
			{
				iVar1 = 45000;
				if (bVar0)
				{
					if (Global_262145.f_8620 >= 0)
					{
						iVar1 = Global_262145.f_8620;
					}
				}
			}
			else
			{
				iVar1 = 59850;
				if (bVar0)
				{
					if (Global_262145.f_19711 >= 0)
					{
						iVar1 = Global_262145.f_19711;
					}
				}
			}
			break;
		
		case 941800958:
			if (!bParam2)
			{
				iVar1 = 680000;
				if (bVar0)
				{
					if (Global_262145.f_8621 >= 0)
					{
						iVar1 = Global_262145.f_8621;
					}
				}
			}
			else
			{
				iVar1 = 904400;
				if (bVar0)
				{
					if (Global_262145.f_19712 >= 0)
					{
						iVar1 = Global_262145.f_19712;
					}
				}
			}
			break;
		
		case 509498602:
			if (!bParam2)
			{
				iVar1 = 125000;
				if (bVar0)
				{
					if (Global_262145.f_8622 >= 0)
					{
						iVar1 = Global_262145.f_8622;
					}
				}
			}
			else
			{
				iVar1 = 166250;
				if (bVar0)
				{
					if (Global_262145.f_19713 >= 0)
					{
						iVar1 = Global_262145.f_19713;
					}
				}
			}
			break;
		
		case 1753414259:
			iVar1 = 48000;
			if (bVar0)
			{
				if (Global_262145.f_8623 >= 0)
				{
					iVar1 = Global_262145.f_8623;
				}
			}
			break;
		
		case 296357396:
			if (!bParam2)
			{
				iVar1 = 65000;
				if (bVar0)
				{
					if (Global_262145.f_8624 >= 0)
					{
						iVar1 = Global_262145.f_8624;
					}
				}
			}
			else
			{
				iVar1 = 86450;
				if (bVar0)
				{
					if (Global_262145.f_19714 >= 0)
					{
						iVar1 = Global_262145.f_19714;
					}
				}
			}
			break;
		
		case -2107990196:
			iVar1 = 375000;
			if (bVar0)
			{
				if (Global_262145.f_8625 >= 0)
				{
					iVar1 = Global_262145.f_8625;
				}
			}
			break;
		
		case 970385471:
			if (!bParam2)
			{
				iVar1 = 3000000;
				if (bVar0)
				{
					if (Global_262145.f_8626 >= 0)
					{
						iVar1 = Global_262145.f_8626;
					}
				}
			}
			else
			{
				iVar1 = 3990000;
				if (bVar0)
				{
					if (Global_262145.f_19715 >= 0)
					{
						iVar1 = Global_262145.f_19715;
					}
				}
			}
			break;
		
		case -1860900134:
			if (!bParam2)
			{
				iVar1 = 1350000;
				if (bVar0)
				{
					if (Global_262145.f_8627 >= 0)
					{
						iVar1 = Global_262145.f_8627;
					}
				}
			}
			else
			{
				iVar1 = 1795500;
				if (bVar0)
				{
					if (Global_262145.f_19716 >= 0)
					{
						iVar1 = Global_262145.f_19716;
					}
				}
			}
			break;
		
		case 2071877360:
			if (!bParam2)
			{
				iVar1 = 675000;
				if (bVar0)
				{
					if (Global_262145.f_8628 >= 0)
					{
						iVar1 = Global_262145.f_8628;
					}
				}
			}
			else
			{
				iVar1 = 897750;
				if (bVar0)
				{
					if (Global_262145.f_19717 >= 0)
					{
						iVar1 = Global_262145.f_19717;
					}
				}
			}
			break;
		
		case -1372848492:
			if (!bParam2)
			{
				iVar1 = 95000;
				if (bVar0)
				{
					if (Global_262145.f_8629 >= 0)
					{
						iVar1 = Global_262145.f_8629;
					}
				}
			}
			else
			{
				iVar1 = 126350;
				if (bVar0)
				{
					if (Global_262145.f_19718 >= 0)
					{
						iVar1 = Global_262145.f_19718;
					}
				}
			}
			break;
		
		case 410882957:
			if (!bParam2)
			{
				iVar1 = 525000;
				if (bVar0)
				{
					if (Global_262145.f_8630 >= 0)
					{
						iVar1 = Global_262145.f_8630;
					}
				}
			}
			else
			{
				iVar1 = 698250;
				if (bVar0)
				{
					if (Global_262145.f_19719 >= 0)
					{
						iVar1 = Global_262145.f_19719;
					}
				}
			}
			break;
		
		case 640818791:
			if (!bParam2)
			{
				iVar1 = 750000;
				if (bVar0)
				{
					if (Global_262145.f_8631 >= 0)
					{
						iVar1 = Global_262145.f_8631;
					}
				}
			}
			else
			{
				iVar1 = 997500;
				if (bVar0)
				{
					if (Global_262145.f_19720 >= 0)
					{
						iVar1 = Global_262145.f_19720;
					}
				}
			}
			break;
		
		case -2007026063:
			if (!bParam2)
			{
				iVar1 = 550000;
				if (bVar0)
				{
					if (Global_262145.f_8637 >= 0)
					{
						iVar1 = Global_262145.f_8637;
					}
				}
			}
			else
			{
				iVar1 = 731500;
				if (bVar0)
				{
					if (Global_262145.f_19726 >= 0)
					{
						iVar1 = Global_262145.f_19726;
					}
				}
			}
			break;
		
		case -2052737935:
			if (!bParam2)
			{
				iVar1 = 32500;
				if (bVar0)
				{
					if (Global_262145.f_8632 >= 0)
					{
						iVar1 = Global_262145.f_8632;
					}
				}
			}
			else
			{
				iVar1 = 43225;
				if (bVar0)
				{
					if (Global_262145.f_19721 >= 0)
					{
						iVar1 = Global_262145.f_19721;
					}
				}
			}
			break;
		
		case -82626025:
			if (!bParam2)
			{
				iVar1 = 1950000;
				if (bVar0)
				{
					if (Global_262145.f_8633 >= 0)
					{
						iVar1 = Global_262145.f_8633;
					}
				}
			}
			else
			{
				iVar1 = 2593500;
				if (bVar0)
				{
					if (Global_262145.f_19722 >= 0)
					{
						iVar1 = Global_262145.f_19722;
					}
				}
			}
			break;
		
		case -1600252419:
			if (!bParam2)
			{
				iVar1 = 2850000;
				if (bVar0)
				{
					if (Global_262145.f_8635 >= 0)
					{
						iVar1 = Global_262145.f_8635;
					}
				}
			}
			else
			{
				iVar1 = 3790500;
				if (bVar0)
				{
					if (Global_262145.f_19724 >= 0)
					{
						iVar1 = Global_262145.f_19724;
					}
				}
			}
			break;
		
		case -2096818938:
			if (!bParam2)
			{
				iVar1 = 950000;
				if (bVar0)
				{
					if (Global_262145.f_8634 >= 0)
					{
						iVar1 = Global_262145.f_8634;
					}
				}
			}
			else
			{
				iVar1 = 1263500;
				if (bVar0)
				{
					if (Global_262145.f_19723 >= 0)
					{
						iVar1 = Global_262145.f_19723;
					}
				}
			}
			break;
		
		case 1077420264:
			if (!bParam2)
			{
				iVar1 = 995000;
				if (bVar0)
				{
					if (Global_262145.f_8636 >= 0)
					{
						iVar1 = Global_262145.f_8636;
					}
				}
			}
			else
			{
				iVar1 = 1323350;
				if (bVar0)
				{
					if (Global_262145.f_19725 >= 0)
					{
						iVar1 = Global_262145.f_19725;
					}
				}
			}
			break;
		
		case -901163259:
			iVar1 = 500000;
			if (bVar0)
			{
				if (!bParam2)
				{
					if (Global_262145.f_8724 >= 0)
					{
						iVar1 = Global_262145.f_8724;
					}
				}
				else
				{
					iVar1 = Global_262145.f_19729;
				}
			}
			break;
		
		case 1233534620:
			iVar1 = 250000;
			if (bVar0 || iParam3 == 1)
			{
				if (!bParam2)
				{
					iVar1 = 500000;
					if (Global_262145.f_8726 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_8726;
					}
				}
				else
				{
					iVar1 = Global_262145.f_19728;
				}
			}
			break;
		
		case -1066334226:
			iVar1 = 1325000;
			if (bVar0)
			{
				if (!bParam2)
				{
					if (Global_262145.f_8728 >= 0)
					{
						iVar1 = Global_262145.f_8728;
					}
				}
				else
				{
					iVar1 = Global_262145.f_19730;
				}
			}
			break;
		
		case 1039032026:
			iVar1 = 42000;
			if (bVar0)
			{
				if (!bParam2)
				{
					if (Global_262145.f_8723 >= 0)
					{
						iVar1 = Global_262145.f_8723;
					}
				}
				else
				{
					iVar1 = Global_262145.f_19733;
				}
			}
			break;
		
		case 1923400478:
			iVar1 = 71000;
			if (bVar0)
			{
				if (!bParam2)
				{
					if (Global_262145.f_8727 >= 0)
					{
						iVar1 = Global_262145.f_8727;
					}
				}
				else
				{
					iVar1 = Global_262145.f_19732;
				}
			}
			break;
		
		case 723973206:
			iVar1 = 62000;
			if (bVar0)
			{
				if (!bParam2)
				{
					iVar1 = 62000;
					if (Global_262145.f_8725 >= 0)
					{
						iVar1 = Global_262145.f_8725;
					}
				}
				else
				{
					iVar1 = Global_262145.f_19731;
				}
			}
			break;
		
		case -326143852:
			iVar1 = 279000;
			if (bVar0 || iParam3 == 1)
			{
				if (!bParam2)
				{
					iVar1 = 665000;
					if (Global_262145.f_19727 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_19727;
					}
				}
				else
				{
					iVar1 = Global_262145.f_19734;
				}
			}
			break;
		
		case -401643538:
			iVar1 = 277000;
			if (bVar0)
			{
				if (Global_262145.f_16903 >= 0)
				{
					iVar1 = Global_262145.f_16903;
				}
			}
			break;
		
		case -915704871:
			iVar1 = 315000;
			if (bVar0 && Global_262145.f_16901 >= 0)
			{
				iVar1 = Global_262145.f_16901;
			}
			if (bParam2)
			{
				iVar2 = iVar1;
				iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(315000) * 0.75f));
			}
			break;
		
		case 349315417:
			iVar1 = 230000;
			if (bVar0)
			{
				if (Global_262145.f_16902 >= 0)
				{
					iVar1 = Global_262145.f_16902;
				}
			}
			break;
		
		case 237764926:
			iVar1 = 535000;
			if (bVar0)
			{
				if (Global_262145.f_16900 >= 0)
				{
					iVar1 = Global_262145.f_16900;
				}
			}
			break;
		
		case 729783779:
			iVar1 = 49500;
			if (bVar0 && Global_262145.f_8939 >= 0)
			{
				iVar1 = Global_262145.f_8939;
			}
			if (bParam2)
			{
				iVar2 = iVar1;
				iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(49500) * 0.75f));
				if (bVar0 && Global_262145.f_25149 >= 0)
				{
					iVar1 = Global_262145.f_25149;
				}
			}
			break;
		
		case -589178377:
			iVar1 = 37500;
			if (bVar0 && Global_262145.f_8938 >= 0)
			{
				iVar1 = Global_262145.f_8938;
			}
			if (bParam2)
			{
				iVar2 = iVar1;
				iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(37500) * 0.75f));
				if (bVar0 && Global_262145.f_25147 >= 0)
				{
					iVar1 = Global_262145.f_25147;
				}
			}
			break;
		
		case -1106353882:
			iVar1 = 350000;
			if (bVar0)
			{
				if (Global_262145.f_8936 >= 0)
				{
					iVar1 = Global_262145.f_8936;
				}
			}
			break;
		
		case -631760477:
			iVar1 = 385000;
			if (bVar0)
			{
				if (Global_262145.f_8937 >= 0)
				{
					iVar1 = Global_262145.f_8937;
				}
			}
			break;
		
		case -1566741232:
			iVar1 = 975000;
			if (bVar0)
			{
				if (Global_262145.f_10593 >= 0)
				{
					iVar1 = Global_262145.f_10593;
				}
			}
			break;
		
		case -1214293858:
			iVar1 = 10000000;
			if (bVar0)
			{
				if (Global_262145.f_10594 >= 0)
				{
					iVar1 = Global_262145.f_10594;
				}
			}
			break;
		
		case 1987142870:
			iVar1 = 1950000;
			if (bVar0)
			{
				if (Global_262145.f_10595 >= 0)
				{
					iVar1 = Global_262145.f_10595;
				}
			}
			break;
		
		case 1075432268:
			iVar1 = 5150000;
			if (bVar0)
			{
				if (Global_262145.f_10596 >= 0)
				{
					iVar1 = Global_262145.f_10596;
				}
			}
			break;
		
		case -498054846:
			iVar1 = 195000;
			if (bVar0)
			{
				if (Global_262145.f_10597 >= 0)
				{
					iVar1 = Global_262145.f_10597;
				}
			}
			break;
		
		case 1581459400:
			if (!bParam2)
			{
				iVar1 = 845000;
				if (bVar0)
				{
					if (Global_262145.f_10598 >= 0)
					{
						iVar1 = Global_262145.f_10598;
					}
				}
			}
			else
			{
				iVar1 = 0;
			}
			break;
		
		case -1479664699:
			iVar1 = 715000;
			if (bVar0)
			{
				if (Global_262145.f_10885 >= 0)
				{
					iVar1 = Global_262145.f_10885;
				}
			}
			break;
		
		case 349605904:
			iVar1 = 225000;
			if (bVar0)
			{
				if (Global_262145.f_10886 >= 0)
				{
					iVar1 = Global_262145.f_10886;
				}
			}
			break;
		
		case 784565758:
			iVar1 = 695000;
			if (bVar0)
			{
				if (Global_262145.f_10887 >= 0)
				{
					iVar1 = Global_262145.f_10887;
				}
			}
			break;
		
		case 1663218586:
			iVar1 = 2200000;
			if (bVar0)
			{
				if (Global_262145.f_10888 >= 0)
				{
					iVar1 = Global_262145.f_10888;
				}
			}
			break;
		
		case 1070967343:
			iVar1 = 1750000;
			if (bVar0)
			{
				if (Global_262145.f_10889 >= 0)
				{
					iVar1 = Global_262145.f_10889;
				}
			}
			break;
		
		case -1353081087:
			iVar1 = 630000;
			if (bVar0)
			{
				if (Global_262145.f_10890 >= 0)
				{
					iVar1 = Global_262145.f_10890;
				}
			}
			break;
		
		case -1361687965:
			iVar1 = 225000;
			iVar1 = (Global_262145.f_11867 + func_691(iParam1));
			break;
		
		case -2040426790:
			iVar1 = 100000;
			if (bVar0 && Global_262145.f_11866 >= 0)
			{
				iVar1 = (Global_262145.f_11866 + func_691(iParam1));
			}
			break;
		
		case 525509695:
			iVar1 = 32500;
			if (bVar0 && Global_262145.f_11863 >= 0)
			{
				iVar1 = Global_262145.f_11863;
			}
			break;
		
		case 1896491931:
			iVar1 = (Global_262145.f_11863 + func_691(iParam1));
			break;
		
		case -2119578145:
			iVar1 = 36000;
			if (bVar0 && Global_262145.f_11862 >= 0)
			{
				iVar1 = Global_262145.f_11862;
			}
			break;
		
		case -1790546981:
			iVar1 = 95000;
			iVar1 = (Global_262145.f_11862 + func_691(iParam1));
			break;
		
		case -682211828:
			iVar1 = 29000;
			if (bVar0 && Global_262145.f_11864 >= 0)
			{
				iVar1 = Global_262145.f_11864;
			}
			break;
		
		case -1013450936:
			iVar1 = 85000;
			iVar1 = (Global_262145.f_11864 + func_691(iParam1));
			break;
		
		case 523724515:
			iVar1 = 5500;
			if (bVar0 && Global_262145.f_11865 >= 0)
			{
				iVar1 = Global_262145.f_11865;
			}
			break;
		
		case 2006667053:
			iVar1 = 105000;
			iVar1 = (Global_262145.f_11865 + func_691(iParam1));
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			iVar1 = (Global_262145.f_25150 + func_691(iParam1));
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			iVar1 = (Global_262145.f_8939 + func_691(iParam1));
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			iVar1 = (Global_262145.f_23615 + func_691(iParam1));
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			iVar1 = (Global_262145.f_25151 + func_691(iParam1));
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			iVar1 = (Global_262145.f_25153 + func_691(iParam1));
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			iVar1 = (Global_262145.f_25147 + func_691(iParam1));
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			iVar1 = (Global_262145.f_25148 + func_691(iParam1));
			break;
		
		case -831834716:
			iVar1 = 550000;
			if (bVar0 && Global_262145.f_12084 >= 0)
			{
				iVar1 = Global_262145.f_12084;
			}
			break;
		
		case 2068293287:
			iVar1 = 650000;
			if (bVar0 && Global_262145.f_12085 >= 0)
			{
				iVar1 = Global_262145.f_12085;
			}
			break;
		
		case 1878062887:
			iVar1 = 149000;
			if (bVar0 && Global_262145.f_12781 >= 0)
			{
				iVar1 = Global_262145.f_12781;
			}
			break;
		
		case 470404958:
			iVar1 = 374000;
			if (bVar0 && Global_262145.f_12782 >= 0)
			{
				iVar1 = Global_262145.f_12782;
			}
			break;
		
		case 634118882:
			iVar1 = 247000;
			if (bVar0 && Global_262145.f_12783 >= 0)
			{
				iVar1 = Global_262145.f_12783;
			}
			break;
		
		case 666166960:
			iVar1 = 513000;
			if (bVar0 && Global_262145.f_12784 >= 0)
			{
				iVar1 = Global_262145.f_12784;
			}
			break;
		
		case 906642318:
			iVar1 = 154000;
			if (bVar0 && Global_262145.f_12785 >= 0)
			{
				iVar1 = Global_262145.f_12785;
			}
			break;
		
		case 704435172:
			iVar1 = 396000;
			if (bVar0 && Global_262145.f_12786 >= 0)
			{
				iVar1 = Global_262145.f_12786;
			}
			break;
		
		case -2030171296:
			iVar1 = 254000;
			if (bVar0 && Global_262145.f_12787 >= 0)
			{
				iVar1 = Global_262145.f_12787;
			}
			break;
		
		case -604842630:
			iVar1 = 558000;
			if (bVar0 && Global_262145.f_12788 >= 0)
			{
				iVar1 = Global_262145.f_12788;
			}
			break;
		
		case -114627507:
			iVar1 = 1650000;
			if (bVar0 && Global_262145.f_12789 >= 0)
			{
				iVar1 = Global_262145.f_12789;
			}
			break;
		
		case -1660945322:
			iVar1 = 995000;
			if (bVar0 && Global_262145.f_12790 >= 0)
			{
				iVar1 = Global_262145.f_12790;
			}
			break;
		
		case -1943285540:
			iVar1 = 585000;
			if (bVar0 && Global_262145.f_12791 >= 0)
			{
				iVar1 = Global_262145.f_12791;
			}
			break;
		
		case -1485523546:
			iVar1 = 116000;
			if (bVar0 && Global_262145.f_12792 >= 0)
			{
				iVar1 = Global_262145.f_12792;
			}
			break;
		
		case -888242983:
			iVar1 = 325000;
			if (bVar0 && Global_262145.f_12793 >= 0)
			{
				iVar1 = Global_262145.f_12793;
			}
			break;
		
		case 1489967196:
			iVar1 = 208000;
			if (bVar0 && Global_262145.f_12794 >= 0)
			{
				iVar1 = Global_262145.f_12794;
			}
			break;
		
		case 1922255844:
			iVar1 = 438000;
			if (bVar0 && Global_262145.f_12795 >= 0)
			{
				iVar1 = Global_262145.f_12795;
			}
			break;
		
		case 1102544804:
			iVar1 = 695000;
			if (bVar0 && Global_262145.f_12796 >= 0)
			{
				iVar1 = Global_262145.f_12796;
			}
			break;
		
		case 710198397:
			iVar1 = 2113000;
			if (bVar0 && Global_262145.f_12797 >= 0)
			{
				iVar1 = Global_262145.f_12797;
			}
			break;
		
		case -1671539132:
			iVar1 = 3330000;
			if (bVar0 && Global_262145.f_12798 >= 0)
			{
				iVar1 = Global_262145.f_12798;
			}
			break;
		
		case 972671128:
			iVar1 = 375000;
			if (bVar0 && Global_262145.f_12858 >= 0)
			{
				iVar1 = Global_262145.f_12858;
			}
			break;
		
		case 970598228:
			if (bVar0 && Global_262145.f_12977 >= 0)
			{
				iVar1 = Global_262145.f_12977;
			}
			break;
		
		case -295689028:
			iVar1 = (Global_262145.f_12977 + func_691(iParam1));
			break;
		
		case -1041692462:
			if (bVar0 && Global_262145.f_12979 >= 0)
			{
				iVar1 = Global_262145.f_12979;
			}
			break;
		
		case 633712403:
			iVar1 = (Global_262145.f_12979 + func_691(iParam1));
			break;
		
		case -602287871:
			iVar1 = 982000;
			if (bVar0 && Global_262145.f_13007 >= 0)
			{
				iVar1 = Global_262145.f_13007;
			}
			break;
		
		case -2039755226:
			iVar1 = (Global_262145.f_11862 + func_691(iParam1));
			break;
		
		case -1126264336:
			iVar1 = (Global_262145.f_6577 + func_691(iParam1));
			break;
		
		case 223258115:
			iVar1 = (Global_262145.f_14514 + func_691(iParam1));
			break;
		
		case 1119641113:
			iVar1 = (Global_262145.f_8939 + func_691(iParam1));
			break;
		
		case -1797613329:
			iVar1 = (Global_262145.f_14515 + func_691(iParam1));
			break;
		
		case 16646064:
			iVar1 = Global_262145.f_14513;
			break;
		
		case -899509638:
			iVar1 = (Global_262145.f_14513 + func_691(iParam1));
			break;
		
		case 1356124575:
			iVar1 = (950000 + func_691(iParam1));
			if (bVar0)
			{
				if (Global_262145.f_8634 >= 0)
				{
					iVar1 = (Global_262145.f_8634 + func_691(iParam1));
				}
			}
			break;
		
		case -1924433270:
			iVar1 = (1350000 + func_691(iParam1));
			if (bVar0)
			{
				if (Global_262145.f_8627 >= 0)
				{
					iVar1 = (Global_262145.f_8627 + func_691(iParam1));
				}
			}
			break;
	}
	switch (iParam1)
	{
		case -591610296:
			if (bVar0)
			{
				if (Global_262145.f_7175 >= 0)
				{
					iVar1 = Global_262145.f_7175;
				}
			}
			break;
		
		case 499169875:
			if (bVar0)
			{
				if (Global_262145.f_7176 >= 0)
				{
					iVar1 = Global_262145.f_7176;
				}
			}
			break;
		
		case -377465520:
			if (bVar0)
			{
				if (Global_262145.f_7177 >= 0)
				{
					iVar1 = Global_262145.f_7177;
				}
			}
			break;
		
		case 1349725314:
			if (bVar0)
			{
				if (Global_262145.f_7178 >= 0)
				{
					iVar1 = Global_262145.f_7178;
				}
			}
			break;
		
		case 873639469:
			if (bVar0)
			{
				if (Global_262145.f_7179 >= 0)
				{
					iVar1 = Global_262145.f_7179;
				}
			}
			break;
	}
	if (bVar0)
	{
		switch (iParam1)
		{
			case -566387422:
				if (bParam2)
				{
					if (Global_262145.f_4040 >= 0)
					{
						iVar1 = Global_262145.f_4040;
					}
				}
				break;
			
			case 544021352:
				if (Global_262145.f_4056 >= 0)
				{
					iVar1 = Global_262145.f_4056;
				}
				break;
			
			case 37348240:
				if (Global_262145.f_4050 >= 0)
				{
					iVar1 = Global_262145.f_4050;
				}
				break;
			
			case 11251904:
				if (Global_262145.f_4026 >= 0)
				{
					iVar1 = Global_262145.f_4026;
				}
				break;
			}
	}
	if (bVar0 || iParam3 == 1)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 108773431:
					iVar1 = 138000;
					if (Global_262145.f_7172 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_7172;
					}
					break;
				
				case -1041692462:
					iVar1 = 126000;
					if (Global_262145.f_7171 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_7171;
					}
					break;
				
				case 1545842587:
					iVar1 = 850000;
					if (Global_262145.f_7173 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_7173;
					}
					break;
				
				case -1622444098:
					iVar1 = 150000;
					if (Global_262145.f_4096 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_4096;
					}
					break;
				
				case 349605904:
					iVar1 = 225000;
					if (Global_262145.f_11867 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_11867;
					}
					break;
				
				case 92612664:
					iVar1 = 40000;
					if (Global_262145.f_8390 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_8390;
					}
					break;
				
				case 729783779:
					iVar1 = 49500;
					if (Global_262145.f_14517 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_14517;
					}
					if (bParam2)
					{
						iVar2 = iVar1;
						iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * 0.75f));
						if (bVar0 && Global_262145.f_25149 >= 0)
						{
							iVar1 = Global_262145.f_25149;
						}
					}
					break;
				
				case -310465116:
					iVar1 = 30000;
					if (Global_262145.f_14516 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_14516;
					}
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case -1622444098:
					if (Global_262145.f_7170 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_7170;
					}
					break;
				
				case -1041692462:
					if (Global_262145.f_12979 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_12979;
					}
					break;
				}
			}
	}
	if (iVar1 == -1)
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = iVar1;
	}
	*uParam0 = iVar1;
	uParam0->f_3 = SYSTEM::FLOOR((IntToFloat(SYSTEM::FLOOR((IntToFloat(iVar1) * 0.5f))) * 0.1f));
	uParam0->f_5 = SYSTEM::FLOOR((IntToFloat(SYSTEM::FLOOR((IntToFloat(iVar1) * 0.5f))) * 0.25f));
	uParam0->f_1 = SYSTEM::FLOOR((IntToFloat(iVar1) * 0.5f));
	if (!func_690(iParam1))
	{
		uParam0->f_2 = SYSTEM::FLOOR((IntToFloat(SYSTEM::FLOOR((IntToFloat(iVar2) * 0.5f))) * 0.25f));
		uParam0->f_4 = SYSTEM::FLOOR((IntToFloat(uParam0->f_2) * 0.1f));
		if (uParam0->f_4 > Global_262145.f_16306 && uParam0->f_4 <= Global_262145.f_16307)
		{
			uParam0->f_4 = Global_262145.f_16306;
		}
	}
	else
	{
		uParam0->f_2 = SYSTEM::FLOOR((IntToFloat(iVar2) * 0.06f));
		uParam0->f_4 = SYSTEM::FLOOR((IntToFloat(uParam0->f_2) * 0.1f));
		if (uParam0->f_4 > Global_262145.f_23485)
		{
			uParam0->f_4 = Global_262145.f_23485;
		}
	}
	if (bVar0)
	{
		uParam0->f_3 = SYSTEM::FLOOR((IntToFloat(uParam0->f_1) * 0.2f));
	}
	return 1;
}

int func_690(int iParam0)
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
		case 159274291:
		case 433954513:
		case 1483171323:
		case 886810209:
		case 1561920505:
		case -410205223:
		case 903794909:
		case -391595372:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
		case 1180875963:
		case 682434785:
		case -1912017790:
		case -1649536104:
		case 989294410:
		case -312295511:
		case 941494461:
		case -1590337689:
		case 1254014755:
		case 1945374990:
		case 1653666139:
		case -638562243:
		case 2069146067:
		case 2044532910:
		case 1416466158:
			return 1;
			break;
		
		default:
			if (Global_2513563 != 0)
			{
				if (Global_2513563 == iParam0)
				{
					return 1;
				}
			}
			if (func_636(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_691(int iParam0)
{
	switch (iParam0)
	{
		case -1361687965:
			return Global_262145.f_11869;
			break;
		
		case -2040426790:
			return Global_262145.f_11872;
			break;
		
		case 1896491931:
			return Global_262145.f_11871;
			break;
		
		case -1790546981:
			return Global_262145.f_11870;
			break;
		
		case -1013450936:
			return Global_262145.f_11868;
			break;
		
		case 2006667053:
			return Global_262145.f_11873;
			break;
		
		case -295689028:
			return Global_262145.f_12978;
			break;
		
		case 633712403:
			return Global_262145.f_12980;
			break;
		
		case -2039755226:
			return Global_262145.f_14518;
			break;
		
		case -1126264336:
			return Global_262145.f_14519;
			break;
		
		case 223258115:
			return Global_262145.f_14520;
			break;
		
		case 1119641113:
			return Global_262145.f_14521;
			break;
		
		case -1797613329:
			return Global_262145.f_14522;
			break;
		
		case -899509638:
			return Global_262145.f_14523;
			break;
		
		case -2022483795:
			return Global_262145.f_19169;
			break;
		
		case 1790834270:
			return Global_262145.f_19173;
			break;
		
		case -757735410:
			return Global_262145.f_19171;
			break;
		
		case -482719877:
			return Global_262145.f_19163;
			break;
		
		case 1074745671:
			return Global_262145.f_19165;
			break;
		
		case 1093792632:
			return Global_262145.f_19167;
			break;
		
		case 196747873:
			return Global_262145.f_19168;
			break;
		
		case 1356124575:
			return Global_262145.f_20896;
			break;
		
		case -1924433270:
			return Global_262145.f_20895;
			break;
		
		case 668439077:
			return Global_262145.f_25198;
			break;
		
		case 1721676810:
			return Global_262145.f_25197;
			break;
		
		case 1009171724:
			return Global_262145.f_25201;
			break;
		
		case 628003514:
			return Global_262145.f_25202;
			break;
		
		case -27326686:
			return Global_262145.f_25203;
			break;
		
		case -688189648:
			return Global_262145.f_25200;
			break;
		
		case -2061049099:
			return Global_262145.f_25199;
			break;
		
		case -1374500452:
			return Global_262145.f_25217;
			break;
		
		case -1812949672:
			return Global_262145.f_25210;
			break;
		
		case -1924800695:
			return Global_262145.f_25208;
			break;
		
		case -1694081890:
			return Global_262145.f_25205;
			break;
		
		case 373261600:
			return Global_262145.f_25206;
			break;
		
		case 1537277726:
			return Global_262145.f_25209;
			break;
		
		case 840387324:
			return Global_262145.f_25204;
			break;
		
		case -1375060657:
			return Global_262145.f_25207;
			break;
		
		case -1744505657:
			return Global_262145.f_25215;
			break;
		
		case -2042350822:
			return Global_262145.f_25212;
			break;
		
		case 1742022738:
			return Global_262145.f_25213;
			break;
		
		case 1239571361:
			return Global_262145.f_25216;
			break;
		
		case -715746948:
			return Global_262145.f_25211;
			break;
		
		case -1293924613:
			return Global_262145.f_25214;
			break;
		
		case 1802742206:
			return Global_262145.f_28568;
			break;
		
		case -2122646867:
			return Global_262145.f_28563;
			break;
		
		case 1717532765:
			return Global_262145.f_28567;
			break;
		
		case 1107404867:
			return Global_262145.f_28565;
			break;
		
		case 67753863:
			return Global_262145.f_28564;
			break;
		
		case -913589546:
			return Global_262145.f_28566;
			break;
	}
	return 0;
}

int func_692(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (func_372(iVar0, iParam3) > 0 && func_697(func_372(iVar0, iParam3)))
		{
			if (iParam2 != 0)
			{
				if (func_693(iParam2, iParam0, iVar0, bParam1, iParam3, 0))
				{
					return 1;
				}
			}
			else if (func_693(Global_1323615[iParam0].f_66, iParam0, iVar0, bParam1, iParam3, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	if (func_372(0, iParam3) > 0)
	{
		return 0;
	}
	if (bParam4)
	{
		return 0;
	}
	return 1;
}

int func_693(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	iVar0 = func_372(iParam2, iParam4);
	if ((iVar0 > 0 && iVar0 <= 126) && func_697(iVar0))
	{
		if (bParam3)
		{
			func_695(iParam1, &iVar1, iParam4);
		}
		else
		{
			func_336(iParam1, &iVar1);
		}
		if (iVar1 >= 0)
		{
			if (bParam5)
			{
				if (((iVar1 - func_354(iParam2)) >= 0 && (iVar1 - func_354(iParam2)) < func_357(-1, iVar0)) && iVar1 < 307)
				{
					return 1;
				}
			}
			else if (((iVar1 - func_354(iParam2)) >= 0 && (iVar1 - func_354(iParam2)) < func_357(iParam2, -1)) && iVar1 < 307)
			{
				return 1;
			}
			if (func_694(iParam0))
			{
				if (Global_1049922[iVar0].f_33 == 2 && iVar1 == (10 + func_354(iParam2)))
				{
					return 1;
				}
				if ((Global_1049922[iVar0].f_33 == 6 && iVar1 >= (10 + func_354(iParam2))) && iVar1 <= (11 + func_354(iParam2)))
				{
					return 1;
				}
				if ((Global_1049922[iVar0].f_33 == 10 && iVar1 >= (10 + func_354(iParam2))) && iVar1 <= (12 + func_354(iParam2)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_694(int iParam0)
{
	if (iParam0 == 1131912276)
	{
		return 1;
	}
	if (iParam0 == 448402357)
	{
		return 1;
	}
	if (iParam0 == -186537451)
	{
		return 1;
	}
	if ((iParam0 == 1127861609 || iParam0 == -1233807380) || iParam0 == -400295096)
	{
		return 1;
	}
	if (iParam0 == -836512833)
	{
		return 1;
	}
	return 0;
}

void func_695(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 307)
	{
		if (iParam0 == (func_696(iVar0, iParam2) - 1))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
}

int func_696(int iParam0, int iParam1)
{
	iVar0 = func_557(func_623(iParam0), iParam1, -1);
	iVar0 = (iVar0 + func_557(func_622(iParam0), iParam1, -1));
	return iVar0;
}

int func_697(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return 0;
			break;
	}
	return 1;
}

int func_698(int iParam0)
{
	if (STREAMING::IS_MODEL_A_VEHICLE(func_323(iParam0)))
	{
		func_647(iParam0);
		if (func_646(func_323(iParam0)))
		{
			if (func_699(iParam0))
			{
				return 1;
			}
		}
		else
		{
			func_604(iParam0, -1);
		}
	}
	return 0;
}

int func_699(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 307)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1323615[iParam0].f_102, 1))
		{
			return GAMEPLAY::IS_BIT_SET(Global_1323615[iParam0].f_102, 2);
		}
	}
	return 0;
}

void func_700(bool bParam0)
{
	func_704("CUST_GAR_VEH_L8", -1);
	if (Global_1322852.f_2 > 0 && !Global_262145.f_131)
	{
		if (bParam0)
		{
			if (func_90())
			{
				func_78(68030260, Global_1322852.f_2, &iVar0, 1, 1, 0);
				Global_4263954[iVar0] = Global_1323615[Global_1322852.f_3].f_66;
			}
			else
			{
				NETWORKCASH::NETWORK_BUY_ITEM(Global_1322852.f_2, Global_1323615[Global_1322852.f_3].f_66, 9, 1, 1, 0, 0, 0, 0, 1);
			}
		}
		else
		{
			NETWORKCASH::NETWORK_BUY_ITEM(Global_1322852.f_2, Global_1323615[Global_1322852.f_3].f_66, 9, 1, 1, 0, 0, 0, 0, 1);
		}
	}
	func_1(Local_147.f_1, "CT_AUD", "MPCT_MoGen1", &Local_1270, 0);
	Global_1322852.f_1 = 1;
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	func_32(4);
	func_701(-205702236, 3, 0);
}

void func_701(int iParam0, int iParam1, int iParam2)
{
	if (func_703(iParam1, iParam2))
	{
		iVar0 = func_702();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_702()
{
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_703(int iParam0, var uParam1)
{
	if (Global_1312865)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_704(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_705(int iParam0, int iParam1)
{
	Global_2439138.f_502.f_49 = iParam1;
	Global_2439138.f_502.f_42 = 1;
	if (Global_2439138.f_502.f_48 != 0)
	{
		*iParam0 = Global_2439138.f_502.f_48;
		Global_2439138.f_502.f_48 = 0;
		Global_2439138.f_502.f_42 = 0;
		return 1;
	}
	return 0;
}

void func_706()
{
	switch (iLocal_1329)
	{
		case 1:
			if (iLocal_519 > 0)
			{
				if (func_79(&iLocal_1330, -1135378931, 537254313, 1474183246, 68030260, iLocal_519, 4, 3))
				{
					iLocal_1329++;
				}
				else
				{
					func_81(iLocal_1330);
					iLocal_1329 = 0;
				}
			}
			else
			{
				func_718(0);
				iLocal_1329 = 0;
			}
			break;
		
		case 2:
			if (func_672(iLocal_1330))
			{
				if (func_670(iLocal_1330) == 2)
				{
					func_718(0);
					func_81(iLocal_1330);
					iLocal_1329 = 0;
				}
				else
				{
					func_81(iLocal_1330);
					iLocal_1329 = 0;
				}
			}
			break;
	}
	bVar0 = false;
	bVar1 = true;
	if (func_455(0) || Global_1652631)
	{
		if (func_717(1, 1, 1, 1, 1, 1, 1, 1))
		{
			bVar1 = false;
		}
	}
	if (func_372(iLocal_522, -1) == 116)
	{
		bVar0 = true;
		bVar1 = false;
	}
	if (iLocal_522 >= 1000 && func_356(iLocal_522) == 1)
	{
		bVar0 = true;
		bVar1 = false;
	}
	if (Global_1322852.f_3 >= 0 && Global_1322852.f_3 < 307)
	{
		if (Global_1323615[Global_1322852.f_3].f_66 == 2069146067 && func_322())
		{
			bVar0 = true;
			bVar1 = false;
		}
	}
	switch (iLocal_1331)
	{
		case 1:
			if (Global_1322852.f_2 > 0)
			{
				if (func_79(&iLocal_1332, -1135378931, 537254313, 1474183246, 68030260, Global_1322852.f_2, 4, 3))
				{
					iLocal_1331++;
				}
				else
				{
					func_81(iLocal_1332);
					iLocal_1331 = 0;
				}
			}
			else
			{
				if (func_716(PLAYER::PLAYER_ID()))
				{
					bVar0 = true;
					bVar1 = false;
				}
				func_714(Global_1322852.f_2, Global_1322852.f_3, bVar0, bVar1, 0);
				iLocal_1331 = 0;
			}
			break;
		
		case 2:
			if (func_672(iLocal_1332))
			{
				if (func_670(iLocal_1332) == 2)
				{
					if (!func_692(Global_1322852.f_3, 0, 0, -1, 0))
					{
						bVar0 = true;
					}
					if (func_90())
					{
						UNK3::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_669(iLocal_1332));
					}
					if (func_716(PLAYER::PLAYER_ID()))
					{
						bVar0 = true;
						bVar1 = false;
					}
					func_714(Global_1322852.f_2, Global_1322852.f_3, bVar0, bVar1, 0);
					func_81(iLocal_1332);
					iLocal_1331 = 0;
				}
				else
				{
					func_81(iLocal_1332);
					iLocal_1331 = 0;
				}
			}
			break;
		
		case 11:
			if (Global_1322852.f_2 > 0)
			{
				if (func_79(&iLocal_1332, -1135378931, 537254313, 1474183246, 68030260, Global_1322852.f_2, 4, 3))
				{
					iLocal_1331++;
				}
				else
				{
					func_81(iLocal_1332);
					iLocal_1331 = 0;
				}
			}
			else
			{
				func_707(Global_1322852.f_2, Global_1322852.f_3, 0);
				iLocal_1331 = 0;
			}
			break;
		
		case 12:
			if (func_672(iLocal_1332))
			{
				if (func_670(iLocal_1332) == 2)
				{
					if (func_90())
					{
						UNK3::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_669(iLocal_1332));
					}
					func_707(Global_1322852.f_2, Global_1322852.f_3, 0);
					func_81(iLocal_1332);
					iLocal_1331 = 0;
				}
				else
				{
					func_81(iLocal_1332);
					iLocal_1331 = 0;
				}
			}
			break;
	}
	switch (iLocal_1333)
	{
		case 1:
			if (Global_1322852.f_2 > 0)
			{
				if (func_79(&iLocal_1334, -1135378931, 537254313, 1474183246, 68030260, Global_1322852.f_2, 4, 3))
				{
					iLocal_1333++;
				}
				else
				{
					func_81(iLocal_1334);
					iLocal_1333 = 0;
				}
			}
			else
			{
				func_700(0);
				iLocal_1333 = 0;
			}
			break;
		
		case 2:
			if (func_672(iLocal_1334))
			{
				if (func_670(iLocal_1334) == 2)
				{
					func_700(0);
					func_81(iLocal_1334);
					iLocal_1333 = 0;
				}
				else
				{
					func_81(iLocal_1334);
					iLocal_1333 = 0;
				}
			}
			break;
	}
}

void func_707(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1322852.f_2 > 0 && !Global_262145.f_131)
	{
		if (bParam2)
		{
			if (func_90())
			{
				func_78(68030260, iParam0, &iVar0, 1, 1, 0);
				Global_4263954[iVar0] = Global_1323615[iParam1].f_66;
			}
			else
			{
				NETWORKCASH::NETWORK_BUY_ITEM(Global_1322852.f_2, Global_1323615[iParam1].f_66, 9, 1, 1, 0, 0, 0, 0, 1);
			}
		}
		else
		{
			NETWORKCASH::NETWORK_BUY_ITEM(Global_1322852.f_2, Global_1323615[iParam1].f_66, 9, 1, 1, 0, 0, 0, 0, 1);
		}
	}
	func_704("CUST_GAR_VEH_L8", -1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", 1);
	Global_1322852.f_1 = 1;
	func_1(Local_147.f_1, "CT_AUD", "MPCT_MoGen1", &Local_1270, 0);
	func_710(1, 0, 0, 0, 0, 0, 0);
	GAMEPLAY::CLEAR_BIT(&(Global_1323615[iParam1].f_102), 1);
	GAMEPLAY::CLEAR_BIT(&(Global_1323615[iParam1].f_102), 6);
	GAMEPLAY::CLEAR_BIT(&(Global_1323615[iParam1].f_102), 16);
	GAMEPLAY::SET_BIT(&(Global_1323615[iParam1].f_102), 0);
	GAMEPLAY::SET_BIT(&(Global_1323615[iParam1].f_102), 11);
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	func_708();
	func_32(4);
	func_605(iParam1, &(Global_1323615[iParam1]), 1, -1, 0, 0);
	func_701(-205702236, 3, 0);
}

void func_708()
{
	func_709(10);
}

void func_709(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::SET_BIT(&(Global_1574577.f_3[iVar0]), iVar1);
}

void func_710(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_337() < 0 && Global_1687528)
	{
		return;
	}
	if (func_455(35))
	{
		bParam0 = true;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2439138.f_502.f_44, 3))
	{
		bParam0 = true;
	}
	if (bParam0)
	{
		func_713(2);
	}
	else
	{
		func_713(1);
	}
	if (bParam1)
	{
		func_713(11);
	}
	if (bParam2)
	{
		func_713(32);
		if (bParam3)
		{
			if (func_337() >= 0 && GAMEPLAY::IS_BIT_SET(Global_1323615[func_337()].f_102, 0))
			{
				func_713(33);
			}
		}
		else
		{
			func_712(33);
		}
		if (func_337() >= 0)
		{
			if (func_711(Global_1323615[func_337()].f_66))
			{
				func_713(40);
			}
		}
	}
	else if (bParam5)
	{
		func_713(37);
	}
	if (bParam4)
	{
		func_713(36);
	}
	if (func_455(36))
	{
		if (func_455(2))
		{
			func_712(36);
		}
	}
	if (bParam6)
	{
		func_713(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2537071.f_389 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_711(int iParam0)
{
	if (iParam0 == -1881846085)
	{
		return 1;
	}
	return 0;
}

void func_712(int iParam0)
{
	if (iParam0 < 32)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2439138.f_502.f_1, iParam0))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_2439138.f_502.f_1), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_2439138.f_502.f_2, (iParam0 - 32)))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2439138.f_502.f_2), (iParam0 - 32));
	}
}

void func_713(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2439138.f_502.f_1, iParam0))
		{
			GAMEPLAY::SET_BIT(&(Global_2439138.f_502.f_1), iParam0);
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Global_2439138.f_502.f_2, (iParam0 - 32)))
	{
		GAMEPLAY::SET_BIT(&(Global_2439138.f_502.f_2), (iParam0 - 32));
	}
}

void func_714(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 > 0 && !Global_262145.f_131)
	{
		if (bParam4)
		{
			if (func_90())
			{
				func_78(68030260, iParam0, &iVar0, 1, 1, 0);
				Global_4263954[iVar0] = Global_1323615[iParam1].f_66;
			}
			else
			{
				NETWORKCASH::NETWORK_BUY_ITEM(iParam0, Global_1323615[iParam1].f_66, 9, 1, 1, 0, 0, 0, 0, 1);
			}
		}
		else
		{
			NETWORKCASH::NETWORK_BUY_ITEM(iParam0, Global_1323615[iParam1].f_66, 9, 1, 1, 0, 0, 0, 0, 1);
		}
	}
	func_1(Local_147.f_1, "CT_AUD", "MPCT_MoGen1", &Local_1270, 0);
	Global_1323615[iParam1].f_104 = 0;
	GAMEPLAY::CLEAR_BIT(&(Global_1323615[iParam1].f_102), 1);
	GAMEPLAY::CLEAR_BIT(&(Global_1323615[iParam1].f_102), 6);
	GAMEPLAY::CLEAR_BIT(&(Global_1323615[iParam1].f_102), 16);
	GAMEPLAY::CLEAR_BIT(&(Global_1323615[iParam1].f_102), 0);
	GAMEPLAY::CLEAR_BIT(&(Global_1323615[iParam1].f_102), 11);
	if (bParam2)
	{
		if (func_372(iLocal_522, -1) == 116)
		{
			func_704("HANGAR_CLAIM", -1);
		}
		else if (func_372(iLocal_522, -1) == 117)
		{
			func_704("DBASE_CLAIM", -1);
		}
		else if (iLocal_522 >= 1000 && func_356(iLocal_522) == 0)
		{
			func_704("PER_VEH_MRS_GR", -1);
		}
		else
		{
			func_704("PER_VEH_MORS_STO", -1);
		}
	}
	else if (bParam3)
	{
		func_704("CUST_GAR_VEH_L8", -1);
		GAMEPLAY::SET_BIT(&(Global_1323615[iParam1].f_102), 0);
		GAMEPLAY::SET_BIT(&(Global_1323615[iParam1].f_102), 11);
		func_715(iParam1);
	}
	else
	{
		func_704("CUST_GAR_VEH_L7", -1);
	}
	func_708();
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	func_32(4);
	func_605(iParam1, &(Global_1323615[iParam1]), 1, -1, 0, 0);
	func_701(-205702236, 3, 0);
}

void func_715(int iParam0)
{
	Global_2097152[func_326()].f_6174.f_2 = iParam0;
}

int func_716(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_61(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == PLAYER::PLAYER_ID()) && func_61(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_717(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if ((((((((((func_372(0, -1) > 0 || func_372(6, -1) > 0) || (func_372(11, -1) > 0 && iParam0)) || func_372(8, -1) > 0) || ((iParam1 && func_68(5393, -1, 0) != 0) && func_557(15270, -1, -1) == 7)) || (func_372(12, -1) > 0 && iParam2)) || (func_372(13, -1) > 0 && iParam3)) || (func_372(14, -1) > 0 && iParam4)) || (func_372(18, -1) > 0 && iParam5)) || (func_372(21, -1) > 0 && iParam6)) || ((func_372(22, -1) > 0 && iParam7) && func_365()))
	{
		return 1;
	}
	return 0;
}

void func_718(bool bParam0)
{
	if (func_372(iLocal_522, -1) == 116)
	{
		func_704("HANGAR_CLAIM2", -1);
	}
	else if (func_372(iLocal_522, -1) == 117)
	{
		func_704("DBASE_CLAIM2", -1);
	}
	else
	{
		func_704("CUST_GAR_ALL", -1);
	}
	func_1(Local_147.f_1, "CT_AUD", "MPCT_MoGen1", &Local_1270, 0);
	iVar9 = 0;
	while (iVar9 < iLocal_520)
	{
		iVar1 = iLocal_599[iVar9];
		func_689(&Var2, Global_1323615[iVar1].f_66, 0, -1);
		if (GAMEPLAY::IS_BIT_SET(Global_1323615[iVar1].f_102, 16))
		{
			iVar8 = Var2.f_4;
			if (func_686(iVar1) > 0)
			{
				iVar8 = (iVar8 - func_686(iVar1));
			}
			if (func_641(Global_1323615[iVar1].f_66))
			{
				iVar8 = Global_262145.f_21457;
			}
		}
		else
		{
			iVar8 = 0;
		}
		if (iVar8 > 0 && !Global_262145.f_131)
		{
			if (bParam0)
			{
				if (func_90())
				{
					func_78(68030260, iVar8, &iVar0, 1, 1, 0);
					Global_4263954[iVar0] = Global_1323615[iVar1].f_66;
				}
				else
				{
					NETWORKCASH::NETWORK_BUY_ITEM(iVar8, Global_1323615[iVar1].f_66, 9, 1, 1, 0, 0, 0, 0, 1);
				}
			}
			else
			{
				if (func_90())
				{
					UNK3::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_669(iLocal_1330));
				}
				NETWORKCASH::NETWORK_BUY_ITEM(iVar8, Global_1323615[iVar1].f_66, 9, 1, 1, 0, 0, 0, 0, 1);
			}
		}
		GAMEPLAY::CLEAR_BIT(&(Global_1323615[iVar1].f_102), 1);
		GAMEPLAY::CLEAR_BIT(&(Global_1323615[iVar1].f_102), 0);
		GAMEPLAY::CLEAR_BIT(&(Global_1323615[iVar1].f_102), 6);
		GAMEPLAY::CLEAR_BIT(&(Global_1323615[iVar1].f_102), 11);
		GAMEPLAY::CLEAR_BIT(&(Global_1323615[iVar1].f_102), 16);
		func_605(iVar1, &(Global_1323615[iVar1]), 1, -1, 0, 0);
		Global_1323615[iVar1].f_104 = 0;
		iVar9++;
	}
	func_708();
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	func_32(4);
	func_701(-205702236, 3, 0);
}

int func_719(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_12[iParam1];
}

void func_720()
{
	if (!func_717(1, 1, 1, 1, 1, 1, 1, 1))
	{
		iLocal_522 = -1;
		func_685();
	}
	else
	{
		func_60(0, 0);
		func_59("MPCT_INSH");
		func_57(1, 1, 0, 0, 0);
		func_56(1, 2, 1, 1, 1);
		func_55(0, 0, 0, 0, 0);
		iVar0 = 0;
		iVar28 = 0;
		while (iVar28 < 25)
		{
			if (func_372(iVar28, -1) > 0 && !func_364(iVar28))
			{
				iVar31 = func_357(iVar28, -1);
				if (iVar28 == 13)
				{
					iVar31 = 11;
				}
				else if (iVar28 == 18)
				{
					iVar31 = 10;
				}
				iVar27 = 0;
				while (iVar27 < iVar31)
				{
					iVar29 = (func_354(iVar28) + iVar27);
					func_353(iVar29, &iVar30, 1);
					if (iVar30 >= 0 && func_698(iVar30))
					{
						iVar1[iVar28] = 1;
						iVar27 = 999;
					}
					iVar27++;
				}
				if (iVar1[iVar28])
				{
					MemCopy(&Var32, {Global_1049922[func_372(iVar28, -1)].f_16}, 6);
					StringConCat(&Var32, "S", 24);
					if (iVar28 == 12)
					{
						StringCopy(&Var32, func_723(func_505(PLAYER::PLAYER_ID())), 24);
					}
					if (iVar28 == 13)
					{
						StringCopy(&Var32, func_657(func_658(PLAYER::PLAYER_ID())), 24);
					}
					if (iVar28 == 14)
					{
						StringCopy(&Var32, func_721(func_722(PLAYER::PLAYER_ID())), 24);
					}
					else if (iVar28 == 15)
					{
						StringCopy(&Var32, func_656(1), 24);
					}
					else if (iVar28 == 16)
					{
						StringCopy(&Var32, func_656(2), 24);
					}
					else if (iVar28 == 17)
					{
						StringCopy(&Var32, func_656(3), 24);
					}
					if (iVar28 == 18)
					{
						StringCopy(&Var32, func_655(1), 24);
					}
					else if (iVar28 == 19)
					{
						StringCopy(&Var32, func_655(2), 24);
					}
					else if (iVar28 == 20)
					{
						StringCopy(&Var32, func_655(3), 24);
					}
					else if (iVar28 == 21)
					{
						StringCopy(&Var32, "CASINO_GARNAME", 24);
					}
					else if (iVar28 == 22)
					{
						StringCopy(&Var32, "ARCADE_GARNAME", 24);
					}
					func_42(iVar0, &Var32, 0, iVar1[iVar28], 0, 0);
					iLocal_524[iVar0] = iVar28;
					iVar0++;
				}
			}
			iVar28++;
		}
		iVar28 = 0;
		while (iVar28 < 3)
		{
			iVar42 = iVar28;
			iVar27 = 0;
			while (iVar27 < func_601(iVar42))
			{
				func_353((func_355(iVar42) + iVar27), &iVar30, 1);
				if (iVar30 >= 0 && func_698(iVar30))
				{
					iVar38[iVar28] = 1;
					iVar27 = 999;
				}
				iVar27++;
			}
			if (iVar38[iVar28])
			{
				func_42(iVar0, func_654(iVar42), 0, 1, 0, 0);
				iLocal_524[iVar0] = func_653(iVar42);
				iVar0++;
			}
			iVar28++;
		}
		Local_147.f_181.f_2 = iVar0;
		if (Local_147.f_181.f_69 >= Local_147.f_181.f_2 || Local_147.f_181.f_69 < 0)
		{
			Local_147.f_181.f_69 = 0;
		}
		func_109(Local_147.f_181.f_69, 1, 0);
		Local_147.f_181.f_3[1] = 0;
		Local_147.f_181.f_36[1] = 0;
		bLocal_521 = true;
		func_40(-1);
		if (func_904())
		{
			if (CONTROLS::_IS_INPUT_DISABLED(2))
			{
				func_111(237, "BB_SELECT", -1, 0);
				func_111(238, "BB_BACK", -1, 0);
			}
			else
			{
				func_110(176, "BB_SELECT", -1);
				func_110(177, "BB_BACK", -1);
			}
			GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
		}
	}
}

char* func_721(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_NCLU_1";
			break;
		
		case 2:
			return "MP_NCLU_2";
			break;
		
		case 3:
			return "MP_NCLU_3";
			break;
		
		case 4:
			return "MP_NCLU_4";
			break;
		
		case 5:
			return "MP_NCLU_5";
			break;
		
		case 6:
			return "MP_NCLU_6";
			break;
		
		case 7:
			return "MP_NCLU_7";
			break;
		
		case 8:
			return "MP_NCLU_8";
			break;
		
		case 9:
			return "MP_NCLU_9";
			break;
		
		case 10:
			return "MP_NCLU_10";
			break;
	}
	return "";
}

int func_722(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1590535[iParam0].f_274.f_322;
	}
	return 0;
}

char* func_723(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_HANGAR_1";
			break;
		
		case 2:
			return "MP_HANGAR_2";
			break;
		
		case 3:
			return "MP_HANGAR_3";
			break;
		
		case 4:
			return "MP_HANGAR_4";
			break;
		
		case 5:
			return "MP_HANGAR_5";
			break;
	}
	return "";
}

void func_724()
{
	if (!func_479(90, 0, 0))
	{
		func_32(4);
		return;
	}
	if (!func_62(0, -1, 1))
	{
		return;
	}
	if (func_798())
	{
		func_746();
		func_284();
	}
	else
	{
		func_284();
		if (func_745())
		{
			func_725();
		}
	}
}

void func_725()
{
	if (func_744())
	{
		if (func_738())
		{
			func_737(0);
		}
	}
	if (!func_736())
	{
		return;
	}
	if (func_735())
	{
		func_731();
	}
	else
	{
		func_726();
	}
	func_662();
}

void func_726()
{
	func_730();
	func_727();
	func_71(1, 0);
}

void func_727()
{
	func_1(Local_147.f_1, "CT_AUD", func_728(), &Local_1270, 0);
}

char* func_728()
{
	if (func_28())
	{
		return func_729("MPCT_19", "MPCT_19c", 50);
	}
	return func_729("MPCT_20", "MPCT_20c", 50);
}

char* func_729(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < iParam2)
	{
		return sParam0;
	}
	return sParam1;
}

void func_730()
{
	if (func_90())
	{
		func_663(func_65(22), 5, 2, 1);
		return;
	}
}

void func_731()
{
	func_732();
	func_32(4);
}

void func_732()
{
	func_1(Local_147.f_1, "CT_AUD", func_733(Global_2439138.f_3993), &Local_1270, 0);
}

char* func_733(var uParam0)
{
	iVar0 = VEHICLE::GET_VEHICLE_CLASS_FROM_NAME(uParam0);
	bVar1 = func_28();
	switch (iVar0)
	{
		case 14:
			return func_734(bVar1, "MPCT_13", "MPCT_14");
		
		case 16:
		case 15:
			return func_734(bVar1, "MPCT_15", "MPCT_16");
		
		default:
	}
	return func_734(bVar1, "MPCT_17", "MPCT_18");
	return func_734(bVar1, "MPCT_17", "MPCT_18");
}

char* func_734(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_735()
{
	return GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 2);
}

bool func_736()
{
	return GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 1);
}

void func_737(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 18);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 18);
	}
}

int func_738()
{
	if (func_65(22) <= 0)
	{
		func_743();
		return 1;
	}
	return func_739();
}

int func_739()
{
	if (!func_742())
	{
		return 0;
	}
	iVar0 = func_666(283351220, func_65(22), 0, 0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (iVar0 == 1)
	{
		func_741();
		return 1;
	}
	if (iVar0 == 0)
	{
		func_740();
		return 1;
	}
	return 0;
}

void func_740()
{
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 17);
	func_71(1, 0);
}

void func_741()
{
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 17);
	func_743();
}

bool func_742()
{
	return (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_65(22), 0, 1, 0, -1, 0) || GAMEPLAY::IS_BIT_SET(Local_147.f_359, 17));
}

void func_743()
{
	GAMEPLAY::SET_BIT(&(Global_2439138.f_3992), 7);
	GAMEPLAY::SET_BIT(&(Global_2439138.f_3992), 0);
}

bool func_744()
{
	return GAMEPLAY::IS_BIT_SET(Local_147.f_359, 18);
}

bool func_745()
{
	return (iLocal_1222 != -1 && iLocal_1223);
}

void func_746()
{
	if (func_797() && iLocal_1223)
	{
		func_777(iLocal_1222);
	}
	else
	{
		func_747();
	}
	GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
}

void func_747()
{
	func_776();
	uVar0 = func_751();
	func_750(uVar0);
	func_749();
	func_748();
	iLocal_1223 = 1;
}

void func_748()
{
	func_40(-1);
	if (!func_904())
	{
		return;
	}
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		func_111(237, "BB_SELECT", -1, 0);
		func_111(238, "BB_BACK", -1, 0);
	}
	else
	{
		func_110(176, "BB_SELECT", -1);
		func_110(177, "BB_BACK", -1);
	}
	GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
}

void func_749()
{
	if (Local_147.f_181.f_69 < 0)
	{
		Local_147.f_181.f_69 = 0;
	}
	func_109(Local_147.f_181.f_69, 1, 0);
	iLocal_1222 = -1;
}

void func_750(var uParam0)
{
	Local_147.f_181.f_2 = uParam0;
	Local_147.f_181.f_3[1] = 0;
	Local_147.f_181.f_36[1] = 0;
}

int func_751()
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 12;
	func_775(&iLocal_1257);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar3 = iVar0;
		if (func_754(iVar3))
		{
			func_752(iVar3, iVar1);
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_752(int iParam0, int iParam1)
{
	sVar0 = func_753(iParam0);
	func_42(iParam1, sVar0, 0, 1, 0, 0);
	iLocal_1257[iParam1] = iParam0;
}

char* func_753(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return "PEG_CAT_BLIMP";
		
		case 4:
			return "PEG_CAT_BOAT";
		
		case 2:
			return "PEG_CAT_HELI";
		
		case 1:
			return "PEG_CAT_MILITARY";
		
		case 5:
			return "PEG_CAT_MONSTER";
		
		case 3:
			return "PEG_CAT_PLANE";
		
		case 8:
			return "PEG_CAT_SERVICES";
		
		case 11:
			return "PEG_CAT_SPECIAL";
		
		case 9:
			return "PEG_CAT_SUBMARINE";
		
		case 7:
			return "PEG_CAT_TRANSPORT";
		
		case 6:
			return "PEG_CAT_TRUCK";
		
		case 0:
			return "PEG_CAT_WEAPONIZED";
		
		default:
	}
	return "";
}

bool func_754(int iParam0)
{
	return func_755(iParam0) > 0;
}

int func_755(int iParam0)
{
	iVar0 = func_769(iParam0);
	iVar1 = func_756(iParam0);
	return (iVar0 + iVar1);
}

int func_756(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < DLC1::GET_NUM_DLC_VEHICLES())
	{
		iVar2 = DLC1::GET_DLC_VEHICLE_MODEL(iVar0);
		if (func_757(iVar0, iVar2, iParam0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_757(int iParam0, int iParam1, int iParam2)
{
	return (((DLC1::GET_DLC_VEHICLE_DATA(iParam0, &uVar0) && !DLC1::_IS_DLC_DATA_EMPTY(uVar0)) && !func_768(iParam0)) && func_758(iParam1, iParam2));
}

bool func_758(int iParam0, int iParam1)
{
	return iParam1 == func_759(iParam0);
}

int func_759(int iParam0)
{
	iVar0 = VEHICLE::GET_VEHICLE_CLASS_FROM_NAME(iParam0);
	if (func_767(iParam0))
	{
		return 5;
	}
	if (func_766(iParam0))
	{
		return 0;
	}
	if (func_765(iParam0))
	{
		return 9;
	}
	if (func_764(iParam0))
	{
		return 6;
	}
	if (func_763(iParam0))
	{
		return 7;
	}
	if (func_762(iParam0))
	{
		return 10;
	}
	if (func_761(iParam0))
	{
		return 8;
	}
	if (func_760(iParam0))
	{
		return 11;
	}
	switch (iVar0)
	{
		case 14:
			return 4;
		
		case 15:
			return 2;
		
		case 19:
			return 1;
		
		case 16:
			return 3;
		
		case 17:
			return 8;
		
		default:
	}
	return 11;
}

int func_760(int iParam0)
{
	switch (iParam0)
	{
		case -2007026063:
		case 345756458:
		case 534258863:
		case -956048545:
		case 1886712733:
		case 728614474:
		case -1255698084:
		case 1074326203:
		case -784816453:
		case 1641462412:
			return 1;
		
		default:
	}
	return 0;
}

int func_761(int iParam0)
{
	switch (iParam0)
	{
		case 475220373:
		case -2130482718:
			return 1;
		
		default:
	}
	return 0;
}

int func_762(int iParam0)
{
	switch (iParam0)
	{
		case -150975354:
		case -613725916:
		case -307958377:
			return 1;
		
		default:
	}
	return 0;
}

int func_763(int iParam0)
{
	switch (iParam0)
	{
		case 1283517198:
		case -713569950:
		case -120287622:
		case -1098802077:
		case -1961627517:
		case -2007026063:
		case -2072933068:
			return 1;
		
		default:
	}
	return 0;
}

int func_764(int iParam0)
{
	switch (iParam0)
	{
		case 904750859:
		case -1050465301:
		case -2052737935:
		case -305727417:
		case -1661854193:
		case -1987130134:
		case -233098306:
		case 121658888:
		case 444171386:
		case 682434785:
			return 1;
		
		default:
	}
	return 0;
}

int func_765(int iParam0)
{
	switch (iParam0)
	{
		case 771711535:
		case -1066334226:
			return 1;
		
		default:
	}
	return 0;
}

int func_766(int iParam0)
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
		case 2044532910:
		case -638562243:
		case -114627507:
		case -2096818938:
		case -1860900134:
			return 1;
		
		default:
	}
	return 0;
}

int func_767(int iParam0)
{
	switch (iParam0)
	{
		case -845961253:
		case 1721676810:
		case 840387324:
		case -715746948:
		case 1233534620:
			return 1;
		
		default:
	}
	return 0;
}

int func_768(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (DLC1::GET_DLC_VEHICLE_DATA(iParam0, &uVar1))
	{
		iVar0 = DLC1::GET_DLC_VEHICLE_FLAGS(iParam0);
		if (!GAMEPLAY::IS_BIT_SET(iVar0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_769(int iParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < func_774())
	{
		iVar2 = func_773(iVar0);
		iVar3 = func_587(iVar2, -1);
		if (func_770(iVar0, iVar3, iParam0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_770(int iParam0, int iParam1, int iParam2)
{
	return (((func_772(iParam0) && func_771(iParam0)) && func_758(iParam1, iParam2)) && func_645(iParam1));
}

int func_771(int iParam0)
{
	if (func_547(245, 0) == iParam0)
	{
		return 0;
	}
	if (func_547(323, 0) == iParam0)
	{
		return 0;
	}
	if (func_547(324, 0) == iParam0)
	{
		return 0;
	}
	if (func_547(357, 0) == iParam0)
	{
		return 0;
	}
	if (func_547(402, 0) == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_772(int iParam0)
{
	if (func_90())
	{
		if (iParam0 == func_547(245, 0) && func_68(3168, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_547(323, 0) && func_68(5393, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_547(324, 0) && func_369(9461, -1, -1))
		{
			return 1;
		}
		if (iParam0 == func_547(357, 0) && func_68(6156, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_547(402, 0) && func_68(7207, -1, 0) != 0)
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			iVar1 = -1;
			switch (iVar0)
			{
				case 0:
					iVar1 = 450;
					break;
				
				case 1:
					iVar1 = 451;
					break;
				
				case 2:
					iVar1 = 452;
					break;
				
				case 3:
					iVar1 = 453;
					break;
				
				case 4:
					iVar1 = 454;
					break;
				
				case 5:
					iVar1 = 455;
					break;
				
				case 6:
					iVar1 = 456;
					break;
				
				case 7:
					iVar1 = 457;
					break;
			}
			if (iParam0 == func_547(iVar1, 0) && func_552(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	if (iParam0 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2097152[func_326()].f_5500.f_1[(iParam0 / 32)], (iParam0 % 32)))
		{
			return 1;
		}
	}
	return 0;
}

int func_773(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 17;
		
		case 1:
			return 9;
		
		case 2:
			return 10;
		
		case 3:
			return 11;
		
		case 4:
			return 12;
		
		case 5:
			return 13;
		
		case 6:
			return 14;
		
		case 7:
			return 15;
		
		case 8:
			return 16;
		
		case 9:
			return 19;
		
		case 10:
			return 22;
		
		case 11:
			return 23;
		
		case 12:
			return 24;
		
		case 13:
			return 25;
		
		case 14:
			return 27;
		
		case 15:
			return 28;
		
		case 16:
			return 29;
		
		case 17:
			return 30;
		
		case 18:
			return 31;
		
		case 19:
			return 20;
		
		case 20:
			return 32;
		
		case 21:
			return 21;
		
		case 22:
			return 78;
		
		case 23:
			return 79;
		
		case 24:
			return 80;
		
		case 25:
			return 18;
		
		case 26:
			return 81;
		
		case 27:
			return 82;
		
		case 28:
			return 83;
		
		case 29:
			return 84;
		
		case 30:
			return 85;
		
		case 31:
			return 86;
		
		case 32:
			return 87;
		
		case 33:
			return 88;
		
		case 34:
			return 102;
		
		case 35:
			return 113;
		
		case 36:
			return 160;
		
		case 37:
			return 163;
		
		case 38:
			return 162;
		
		case 39:
		case 40:
			return 164;
		
		case 41:
			return 199;
		
		case 42:
			return 201;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 200;
		
		case 68:
			return 171;
		
		case 69:
			return 187;
		
		case 70:
			return 177;
		
		case 71:
			return 183;
		
		case 72:
			return 185;
		
		case 73:
			return 184;
		
		case 74:
			return 188;
		
		case 75:
			return 173;
		
		case 76:
			return 178;
		
		case 77:
			return 186;
		
		case 78:
			return 215;
		
		case 79:
			return 217;
		
		case 80:
			return 224;
		
		case 81:
			return 237;
		
		case 82:
			return 243;
		
		case 83:
			return 244;
		
		case 84:
			return 245;
		
		case 85:
			return 253;
		
		case 86:
			return 254;
		
		case 87:
			return 256;
		
		case 88:
			return 257;
		
		case 89:
			return 258;
		
		case 90:
		case 91:
			return 276;
		
		case 92:
			return 323;
		
		case 93:
			return 324;
		
		case 94:
			return 337;
		
		case 95:
			return 357;
		
		case 96:
			return 402;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			return 413;
		
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
			return 414;
		
		case 115:
			return 450;
		
		case 116:
			return 451;
		
		case 117:
			return 452;
		
		case 118:
			return 453;
		
		case 119:
			return 454;
		
		case 120:
			return 455;
		
		case 121:
			return 456;
		
		case 122:
			return 457;
		
		case 123:
			return 480;
		
		case 124:
			return 482;
		
		case 125:
			return 483;
		
		default:
	}
	return -1;
}

int func_774()
{
	return 128;
}

void func_775(var uParam0)
{
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		(*uParam0)[iVar0] = -1;
		iVar0++;
	}
}

void func_776()
{
	func_60(0, 0);
	func_59("PEG_TITLE");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
}

void func_777(int iParam0)
{
	func_776();
	uVar0 = func_780(iParam0);
	func_750(uVar0);
	func_778();
	func_748();
}

void func_778()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 14))
	{
		Local_147.f_181.f_69 = 0;
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 14);
	}
	else
	{
		Local_147.f_181.f_69 = func_779(Local_147.f_181.f_69, 0, Local_147.f_181.f_2);
	}
	func_109(Local_147.f_181.f_69, 1, 0);
}

int func_779(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

int func_780(int iParam0)
{
	iVar0 = 0;
	func_781(iParam0, !func_791(), &iVar0);
	return iVar0;
}

int func_781(int iParam0, bool bParam1, int iParam2)
{
	func_790(&uLocal_1226);
	iLocal_1225 = func_787(iParam0, bParam1, iParam2);
	iLocal_1224 = func_782(iParam0, bParam1, iParam2);
	return (iLocal_1225 + iLocal_1224);
}

int func_782(int iParam0, bool bParam1, var uParam2)
{
	iVar2 = DLC1::GET_NUM_DLC_VEHICLES();
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar3 = DLC1::GET_DLC_VEHICLE_MODEL(iVar0);
		if (func_757(iVar0, iVar3, iParam0))
		{
			sVar4 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar3);
			sVar5 = func_784(iVar3, iVar0);
			func_783(iVar0, sVar4, sVar5, bParam1, *uParam2);
			*uParam2++;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_783(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	bVar0 = !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (bVar0)
	{
		if (func_417(22))
		{
			func_42(iParam4, "TWOSTRINGS", 3, bParam3, 0, 0);
		}
		else
		{
			func_42(iParam4, "TWOSTRINGS", 2, bParam3, 0, 0);
		}
		func_624(sParam1, 0);
		func_624(sParam2, 0);
	}
	else
	{
		if (func_417(22))
		{
			func_42(iParam4, "STRING", 2, bParam3, 0, 0);
		}
		else
		{
			func_42(iParam4, "STRING", 1, bParam3, 0, 0);
		}
		func_624(sParam1, 0);
	}
	if (func_417(22))
	{
		func_592(51, 0);
	}
	iVar1 = func_65(22);
	func_42(iParam4, "MPCT_CASH", 1, bParam3, 0, 0);
	func_595(iVar1, 0);
	uLocal_1226[iParam4] = iParam0;
}

char* func_784(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -339587598:
			if (iParam1 == 39)
			{
				return "VNX_SWFTC";
			}
			else
			{
				return "VNX_SWFTB";
			}
			break;
		
		case 1233534620:
			switch (iParam1)
			{
				case 43:
					return "WEB_VEH_FLAG_0";
				
				case 44:
					return "WEB_VEH_FLAG_1";
				
				case 45:
					return "WEB_VEH_FLAG_2";
				
				case 46:
					return "WEB_VEH_FLAG_3";
				
				case 47:
					return "WEB_VEH_FLAG_4";
				
				case 48:
					return "WEB_VEH_FLAG_5";
				
				case 49:
					return "WEB_VEH_FLAG_6";
				
				case 50:
					return "WEB_VEH_FLAG_7";
				
				case 51:
					return "WEB_VEH_FLAG_8";
				
				case 52:
					return "WEB_VEH_FLAG_9";
				
				case 53:
					return "WEB_VEH_FLAG_10";
				
				case 54:
					return "WEB_VEH_FLAG_11";
				
				case 55:
					return "WEB_VEH_FLAG_12";
				
				case 56:
					return "WEB_VEH_FLAG_13";
				
				case 57:
					return "WEB_VEH_FLAG_14";
				
				case 58:
					return "WEB_VEH_FLAG_15";
				
				case 59:
					return "WEB_VEH_FLAG_16";
				
				case 60:
					return "WEB_VEH_FLAG_17";
				
				case 61:
					return "WEB_VEH_FLAG_18";
				
				case 62:
					return "WEB_VEH_FLAG_19";
				
				case 63:
					return "WEB_VEH_FLAG_20";
				
				case 64:
					return "WEB_VEH_FLAG_21";
				
				case 65:
					return "WEB_VEH_FLAG_22";
				
				case 66:
					return "WEB_VEH_FLAG_23";
				
				case 67:
					return "WEB_VEH_FLAG_24";
				
				default:
			}
			break;
		
		case -2103821244:
			if (iParam1 == 90)
			{
				return "SSS_DUNE_LIVERY_1";
			}
			else
			{
				return "SSS_DUNE_LIVERY_2";
			}
			break;
		
		case -307958377:
			switch (iParam1)
			{
				case 97:
					return "BLIMP3_ELT_1";
				
				case 98:
					return "BLIMP3_ELT_2";
				
				case 99:
					return "BLIMP3_ELT_3";
				
				case 100:
					return "BLIMP3_ELT_4";
				
				case 101:
					return "BLIMP3_ELT_5";
				
				case 102:
					return "BLIMP3_ELT_6";
				
				case 103:
					return "BLIMP3_ELT_7";
				
				case 104:
					StringCopy(&cVar0, "FCCLUB_NAME_", 16);
					StringIntConCat(&cVar0, func_785(func_68(7212, -1, 0)) + 1, 16);
					return UI::_GET_TEXT_SUBSTRING(&cVar0, 0, UI::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
					break;
			}
			break;
		
		case 345756458:
			switch (iParam1)
			{
				case 105:
					return "PBUS2_SSA_1";
				
				case 106:
					return "PBUS2_SSA_2";
				
				case 107:
					return "PBUS2_SSA_3";
				
				case 108:
					return "PBUS2_SSA_4";
				
				case 109:
					return "PBUS2_SSA_5";
				
				case 110:
					return "PBUS2_SSA_6";
				
				case 111:
					return "PBUS2_SSA_7";
				
				case 112:
					return "PBUS2_SSA_8";
				
				case 113:
					return "PBUS2_SSA_9";
				
				case 114:
					return "PBUS2_SSA_10";
				
				default:
			}
			break;
	}
	return "";
}

int func_785(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_786(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_786(int iParam0)
{
	if (iParam0 == 4)
	{
		return 0;
	}
	else if (iParam0 == 3)
	{
		return 1;
	}
	else if (iParam0 == 6)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 3;
	}
	else if (iParam0 == 0)
	{
		return 4;
	}
	else if (iParam0 == 7)
	{
		return 5;
	}
	else if (iParam0 == 2)
	{
		return 6;
	}
	else if (iParam0 == 5)
	{
		return 7;
	}
	else if (iParam0 == 8)
	{
		return 8;
	}
	if (iParam0 == -1)
	{
		return -1;
	}
	return 0;
}

int func_787(int iParam0, bool bParam1, var uParam2)
{
	iVar0 = 0;
	iVar2 = func_774();
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar3 = func_773(iVar0);
		iVar4 = func_587(iVar3, -1);
		if (func_770(iVar0, iVar4, iParam0))
		{
			sVar5 = func_788(iVar4, iVar3);
			sVar6 = func_784(iVar4, iVar0);
			func_783(iVar0, sVar5, sVar6, bParam1, *uParam2);
			*uParam2++;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

char* func_788(int iParam0, int iParam1)
{
	sVar0 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0);
	sVar0 = func_789(iParam0, sVar0, iParam1);
	return sVar0;
}

char* func_789(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 1621617168)
	{
		sParam1 = func_589(iParam2);
	}
	return sParam1;
}

void func_790(var uParam0)
{
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		(*uParam0)[iVar0] = -1;
		iVar0++;
	}
}

bool func_791()
{
	iVar0 = func_104(22);
	return (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_792(46), -1, 0, 0) || func_429(PLAYER::PLAYER_ID()) == 194));
}

char* func_792(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "AM_HOLD_UP";
		
		case 32:
			return "AM_JOYRIDER";
		
		case 33:
			return "AM_PLANE_TAKEDOWN";
		
		case 34:
			return "AM_DISTRACT_COPS";
		
		case 35:
			return "AM_DESTROY_VEH";
		
		case 36:
			return "AM_HOT_TARGET";
		
		case 37:
			return "AM_KILL_LIST";
		
		case 38:
			return "AM_TIME_TRIAL";
		
		case 39:
			return "AM_CP_COLLECTION";
		
		case 40:
			return "AM_CHALLENGES";
		
		case 41:
			return "AM_PENNED_IN";
		
		case 42:
			return "AM_PASS_THE_PARCEL";
		
		case 43:
			return "AM_HOT_PROPERTY";
		
		case 44:
			return "AM_DEAD_DROP";
		
		case 45:
			return "AM_KING_OF_THE_CASTLE";
		
		case 46:
			return "AM_CRIMINAL_DAMAGE";
		
		case 47:
			return "AM_HUNT_THE_BEAST";
		
		case 48:
			return "GB_LIMO_ATTACK";
		
		case 49:
			return "GB_DEATHMATCH";
		
		case 50:
			return "GB_STEAL_VEH";
		
		case 51:
			return "GB_POINT_TO_POINT";
		
		case 52:
			return "GB_TERMINATE";
		
		case 53:
			return "GB_YACHT_ROB";
		
		case 54:
			return "GB_BELLYBEAST";
		
		case 55:
			return "GB_FIVESTAR";
		
		case 56:
			return "GB_ROB_SHOP";
		
		case 57:
			return "GB_COLLECT_MONEY";
		
		case 58:
			return "GB_ASSAULT";
		
		case 59:
			return "GB_VEH_SURV";
		
		case 60:
			return "GB_SIGHTSEER";
		
		case 61:
			return "GB_FLYING_IN_STYLE";
		
		case 62:
			return "GB_FINDERSKEEPERS";
		
		case 63:
			return "GB_HUNT_THE_BOSS";
		
		case 64:
			return "GB_CARJACKING";
		
		case 65:
			return "GB_HEADHUNTER";
		
		case 66:
			return "GB_CONTRABAND_BUY";
		
		case 67:
			return "GB_CONTRABAND_SELL";
		
		case 68:
			return "GB_CONTRABAND_DEFEND";
		
		case 69:
			return "GB_AIRFREIGHT";
		
		case 70:
			return "GB_CASHING_OUT";
		
		case 71:
			return "GB_SALVAGE";
		
		case 72:
			return "GB_FRAGILE_GOODS";
		
		case 161:
			return "dont_cross_the_line";
		
		case 164:
			return "grid_arcade_cabinet";
		
		case 165:
			return "scroll_arcade_cabinet";
		
		case 166:
			return "example_arcade";
		
		case 167:
			return "road_arcade";
		
		case 172:
			return "Degenatron Games";
		
		case 168:
			return "gunslinger_arcade";
		
		case 173:
			return "ggsm_arcade";
		
		case 169:
			return "wizard_arcade";
		
		case 170:
			return "AM_CASINO_LIMO";
		
		case 171:
			return "AM_CASINO_LUXURY_CAR";
		
		case 174:
			return "AM_QUB3D_ARCADE_CABINET";
		
		case 73:
		case 74:
			return "GB_VEHICLE_EXPORT";
		
		case 84:
			return "GB_BIKER_JOUST";
		
		case 83:
			return "GB_BIKER_RACE_P2P";
		
		case 85:
			return "GB_BIKER_UNLOAD_WEAPONS";
		
		case 87:
			return "GB_BIKER_BAD_DEAL";
		
		case 88:
			return "GB_BIKER_RESCUE_CONTACT";
		
		case 89:
			return "GB_BIKER_LAST_RESPECTS";
		
		case 90:
			return "GB_BIKER_CONTRACT_KILLING";
		
		case 91:
			return "GB_BIKER_CONTRABAND_SELL";
		
		case 92:
			return "GB_BIKER_CONTRABAND_DEFEND";
		
		case 93:
			return "GB_ILLICIT_GOODS_RESUPPLY";
		
		case 94:
			return "GB_BIKER_DRIVEBY_ASSASSIN";
		
		case 102:
			return "GB_BIKER_CRIMINAL_MISCHIEF";
		
		case 95:
			return "GB_BIKER_RIPPIN_IT_UP";
		
		case 75:
			return "GB_PLOUGHED";
		
		case 76:
			return "GB_FULLY_LOADED";
		
		case 77:
			return "GB_AMPHIBIOUS_ASSAULT";
		
		case 78:
			return "GB_TRANSPORTER";
		
		case 79:
			return "GB_FORTIFIED";
		
		case 80:
			return "GB_VELOCITY";
		
		case 81:
			return "GB_RAMPED_UP";
		
		case 82:
			return "GB_STOCKPILING";
		
		case 96:
			return "GB_BIKER_FREE_PRISONER";
		
		case 97:
			return "GB_BIKER_SAFECRACKER";
		
		case 98:
			return "GB_BIKER_STEAL_BIKES";
		
		case 99:
			return "GB_BIKER_SEARCH_AND_DESTROY";
		
		case 100:
			return "AM_PENNED_IN";
		
		case 101:
			return "GB_BIKER_STAND_YOUR_GROUND";
		
		case 103:
			return "GB_BIKER_DESTROY_VANS";
		
		case 104:
			return "GB_BIKER_BURN_ASSETS";
		
		case 105:
			return "GB_BIKER_SHUTTLE";
		
		case 106:
			return "GB_BIKER_WHEELIE_RIDER";
		
		case 107:
		case 108:
			return "GB_GUNRUNNING";
		
		case 109:
			return "GB_GUNRUNNING_DEFEND";
		
		case 110:
		case 111:
		case 112:
			return "GB_SMUGGLER";
		
		case 113:
			return "GB_GANGOPS";
		
		case 114:
			return "BUSINESS_BATTLES";
		
		case 115:
			return "BUSINESS_BATTLES_SELL";
		
		case 116:
			return "BUSINESS_BATTLES_DEFEND";
		
		case 117:
			return "GB_SECURITY_VAN";
		
		case 118:
			return "GB_TARGET_PURSUIT";
		
		case 119:
			return "GB_JEWEL_STORE_GRAB";
		
		case 120:
			return "GB_BANK_JOB";
		
		case 121:
			return "GB_DATA_HACK";
		
		case 122:
			return "GB_INFILTRATION";
		
		case 123:
			return "BUSINESS_BATTLES_DEFEND";
		
		case 124:
			return "BUSINESS_BATTLES_SELL";
		
		case 125:
			return "GB_CASINO";
		
		case 126:
			return "GB_CASINO_HEIST";
		
		case 127:
			return "fm_content_business_battles";
		
		case 128:
			return "fm_content_drug_vehicle";
		
		case 129:
			return "fm_content_movie_props";
		
		case 3:
			return "AM_CR_SELL_DRUGS";
		
		case 12:
			return "AM_Safehouse";
		
		case 16:
			return "MG_RACE_TO_POINT";
		
		case 18:
			return "AM_CRATE_DROP";
		
		case 28:
			return "AM_AMMO_DROP";
		
		case 29:
			return "AM_VEHICLE_DROP";
		
		case 30:
			return "AM_BRU_BOX";
		
		case 31:
			return "AM_GA_PICKUPS";
		
		case 26:
			return "AM_backup_heli";
		
		case 27:
			return "AM_airstrike";
		
		case 17:
			return "AM_PI_MENU";
		
		case 130:
			return "AM_BOAT_TAXI";
		
		case 131:
			return "AM_HELI_TAXI";
		
		case 19:
			return "AM_IMP_EXP";
		
		case 22:
			return "AM_TAXI";
		
		case 23:
			return "AM_TAXI_LAUNCHER";
		
		case 24:
			return "AM_GANG_CALL";
		
		case 25:
			return "heli_gun";
		
		case 144:
			return "am_rollercoaster";
		
		case 145:
			return "am_ferriswheel";
		
		case 146:
			return "AM_LAUNCHER";
		
		case 147:
			return "AM_DAILY_OBJECTIVES";
		
		case 4:
			return "AM_STRIPPER";
		
		case 13:
			return "AM_Hitchhiker";
		
		case 5:
			return "stripclub_mp";
		
		case 6:
			return "AM_ArmWrestling";
		
		case 8:
			return "AM_Tennis";
		
		case 9:
			return "AM_Darts";
		
		case 7:
			return "AM_ImportExport";
		
		case 10:
			return "AM_FistFight";
		
		case 11:
			return "AM_DropOffHooker";
		
		case 15:
			return "AM_DOORS";
		
		case 20:
			return "FM_INTRO";
		
		case 21:
			return "AM_PROSTITUTE";
		
		case 132:
			return "fm_hold_up_tut";
		
		case 133:
			return "AM_CAR_MOD_TUT";
		
		case 134:
			return "AM_CONTACT_REQUESTS";
		
		case 135:
			return "am_mission_launch";
		
		case 136:
			return "am_npc_invites";
		
		case 137:
			return "am_lester_cut";
		
		case 140:
			return "AM_VEHICLE_SPAWN";
		
		case 141:
			return "am_ronTrevor_Cut";
		
		case 142:
			return "AM_ARMYBASE";
		
		case 143:
			return "AM_PRISON";
		
		case 148:
			return "AM_ArmWrestling";
		
		case 155:
			return "fm_Bj_race_controler";
		
		case 149:
			return "AM_Darts";
		
		case 156:
			return "fm_deathmatch_controler";
		
		case 154:
			return "FM_Impromptu_DM_Controler";
		
		case 157:
			return "fm_hideout_controler";
		
		case 150:
			return "golf_mp";
		
		case 153:
			return "Pilot_School_MP";
		
		case 158:
			return func_794();
		
		case 159:
			return "FM_Race_Controler";
		
		case 151:
			return "Range_Modern_MP";
		
		case 160:
			if (func_793(Global_4456448.f_232883))
			{
				return "FM_Survival_Controller";
			}
			else
			{
				return "FM_Horde_Controler";
			}
			break;
		
		case 152:
			return "tennis_network_mp";
		
		case 138:
			return "am_heist_int";
		
		case 139:
			return "am_lowrider_int";
		
		case 162:
			return "am_darts_apartment";
		
		case 163:
			return "AM_Armwrestling_Apartment";
		
		case 176:
			return "SCTV";
		
		case 0:
			return "";
		
		default:
			break;
	}
	return "";
}

bool func_793(int iParam0)
{
	return iParam0 == 998;
}

char* func_794()
{
	if (func_795())
	{
		return "fm_mission_controller";
	}
	return "fm_mission_controller_2020";
}

int func_795()
{
	if (func_796(2))
	{
		return 0;
	}
	return 1;
}

bool func_796(int iParam0)
{
	return Global_4456448.f_232884 >= iParam0;
}

bool func_797()
{
	return iLocal_1222 != -1;
}

bool func_798()
{
	return (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2));
}

void func_799()
{
	switch (Local_147.f_178)
	{
		case 9:
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_651();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_284();
				}
				else
				{
					func_284();
				}
			}
			break;
		
		case 6:
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					if (func_599())
					{
						GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
						func_284();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_284();
				}
			}
			break;
	}
}

void func_800()
{
	switch (Local_147.f_178)
	{
		case 7:
			if (func_62(0, -1, 1))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_801();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_284();
				}
				else
				{
					func_284();
				}
			}
			break;
	}
}

void func_801()
{
	func_60(0, 0);
	func_59("MPCT_BRUCIEH");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	if (func_479(74, 0, 0))
	{
		bVar2 = true;
		iVar1 = func_104(0);
		if ((iVar1 > 0 || !func_424(0)) || !func_454(0))
		{
			bVar2 = false;
		}
		func_596(0, iVar0, "MPCT_BRUCIE0", bVar2);
		func_42(iVar0, "MPCT_CASH", 1, bVar2, 0, 0);
		func_595(func_65(0), 0);
	}
	else
	{
		func_42(iVar0, "MPCT_BRUCIE0", 0, 1, 0, 0);
		func_42(iVar0, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	iVar0++;
	func_40(-1);
	if (func_904())
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			func_111(237, "BB_SELECT", -1, 0);
			func_111(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_110(176, "BB_SELECT", -1);
			func_110(177, "BB_BACK", -1);
		}
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = iVar0 + 1;
}

void func_802()
{
	switch (Local_147.f_178)
	{
		case 4:
			if (func_62(0, -1, 1))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_843();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_284();
				}
				else
				{
					func_284();
				}
			}
			break;
		
		case 8:
			if (func_842())
			{
				if (func_62(0, -1, 0))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
					{
						func_841();
						GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
						func_284();
					}
					else
					{
						if (iLocal_555 == 0)
						{
							if (func_61(Local_147.f_358, 0, 1))
							{
								func_107("GC_MENU42", 100, 0);
								func_103(PLAYER::GET_PLAYER_NAME(Local_147.f_358));
								func_419(func_65(12));
							}
						}
						func_284();
					}
				}
			}
			break;
		
		case 1:
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_839();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					GAMEPLAY::SET_BIT(&iLocal_556, 20);
					func_803();
				}
				else
				{
					func_803();
				}
			}
			break;
	}
}

void func_803()
{
	if (func_838(0, &uLocal_563, 0))
	{
		uLocal_1289 = unk_0x67D02A194A2FC2BD("TEXTFIELD");
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1289))
		{
			bVar0 = false;
			iVar1 = 0;
			bVar2 = false;
			iVar3 = 0;
			iVar4 = 0;
			while (iVar4 < 32)
			{
				iVar5 = Local_147.f_181.f_136[iVar3];
				iVar6 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
				if (func_829(iVar6))
				{
					if (iVar3 < 32)
					{
						if (func_828(iVar6))
						{
							Local_147.f_181.f_69 = iVar3;
						}
						if (Local_147.f_181.f_69 == iVar3)
						{
							if (Local_147.f_181.f_69 != Local_147.f_181.f_169)
							{
								Local_147.f_181.f_169 = Local_147.f_181.f_69;
								iVar1 = 1;
							}
						}
						Local_147.f_181.f_136[iVar3] = iVar6;
						if (iVar6 != iVar5)
						{
							bVar0 = true;
						}
						iVar3++;
					}
				}
				iVar4++;
			}
			if (iVar3 != Local_147.f_181.f_2 || iLocal_516)
			{
				iLocal_516 = 0;
				bVar0 = true;
			}
			Local_147.f_181.f_2 = iVar3;
			if (Local_147.f_181.f_69 > (Local_147.f_181.f_2 - 1))
			{
				Local_147.f_181.f_69 = 0;
			}
			if (iVar3 <= 0)
			{
				func_827();
			}
			if (bVar0 || iVar1)
			{
				bVar2 = true;
				if (bVar0)
				{
					if (GAMEPLAY::IS_BIT_SET(iLocal_556, 20))
					{
						GAMEPLAY::CLEAR_BIT(&iLocal_556, 20);
						iVar4 = 0;
						while (iVar4 < Local_147.f_181.f_2)
						{
							uLocal_564[iVar4] = func_821(Local_147.f_181.f_136[iVar4]);
							iVar4++;
						}
					}
					func_820(&uLocal_563, 0, 0);
					switch (Local_147.f_179)
					{
						case 0:
							func_816(&uLocal_563, "BB_HEAD", "", 0, -1, -1, 0);
							break;
						
						case 1:
							func_816(&uLocal_563, "GC_MENU5", "", 0, -1, -1, 0);
							break;
						
						case 2:
							func_816(&uLocal_563, "GC_MENU24", "", 0, -1, -1, 0);
							break;
						
						case 3:
							func_816(&uLocal_563, "GC_MENU23", "", 0, -1, -1, 0);
							break;
					}
					bVar2 = false;
					iVar4 = 0;
					while (iVar4 < Local_147.f_181.f_2)
					{
						iVar6 = Local_147.f_181.f_136[iVar4];
						iVar7 = 9;
						func_811(iVar6, &cVar8);
						iVar13 = uLocal_564[iVar4];
						if (iVar13 != 0)
						{
							cVar12 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar13);
						}
						func_807(uLocal_563, bVar2, iVar4, func_809(iVar6), iVar7, PLAYER::GET_PLAYER_NAME(iVar6), &cVar8, cVar12, 0, -1, 1);
						iVar4++;
					}
					func_806(&uLocal_563, 1, 1);
				}
				func_805(&uLocal_563, Local_147.f_181.f_69);
			}
			func_804(&uLocal_563, 76);
			GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar14, &uVar15);
			func_297(iVar14, -1, 0, 1, 0, 0, 1, 1, 0);
			if (Local_147.f_181.f_2 > 16)
			{
				iVar16 = 15;
			}
			else
			{
				iVar16 = (Local_147.f_181.f_2 - 1);
			}
			GRAPHICS::_SCREEN_DRAW_POSITION_END();
			GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_1289, 0.119f, (0.575f + (0.034722f * IntToFloat(iVar16))), 0.235f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::_SCREEN_DRAW_POSITION_END();
			Global_22350.f_5878 = GAMEPLAY::GET_GAME_TIMER();
			func_286(0);
		}
	}
}

void func_804(var uParam0, int iParam1)
{
	GRAPHICS::_SET_SCREEN_DRAW_POSITION(iParam1, 84);
	if (iParam1 == 82)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.14f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
	}
	else if (iParam1 == 76)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.14f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

void func_805(var uParam0, int iParam1)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_HIGHLIGHT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_806(var uParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "COLLAPSE"))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(iParam1);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

void func_807(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, var uParam5, char[4] cParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10)
{
	sVar0 = "SET_DATA_SLOT";
	if (bParam1)
	{
		sVar0 = "UPDATE_SLOT";
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sVar0);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	func_808(uParam5);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
	if (bParam8)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(66);
	}
	else if (bParam10)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	}
	else
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(118);
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(65);
	if (iParam9 > -1)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam9);
		func_298("");
	}
	else if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("char_default");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING("char_default");
	}
	else
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam7);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam7);
	}
	func_808(cParam6);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_808(var uParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(uParam0);
}

int func_809(int iParam0)
{
	return func_810(iParam0);
}

var func_810(int iParam0)
{
	return Global_1590535[iParam0].f_211.f_6;
}

void func_811(int iParam0, char[4] cParam1)
{
	StringCopy(cParam1, "", 16);
	Var0 = { func_49(iParam0) };
	if (GAMEPLAY::IS_DURANGO_VERSION())
	{
		if (func_325(Var0))
		{
			if (!NETWORK::_0xB57A49545BA53CE7(&Var0))
			{
				return;
			}
		}
	}
	else if (!NETWORK::_0x72D918C99BCACC54(0))
	{
		return;
	}
	if (func_815(&Var0))
	{
		Var13 = { func_813(iParam0) };
		func_812(&Var13, cParam1);
	}
}

void func_812(var uParam0, char* sParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_813(int iParam0)
{
	if (func_814(iParam0))
	{
		return Global_1312909[PLAYER::PLAYER_ID()];
	}
	Var0 = { func_49(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_814(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_815(var uParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_816(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_808(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam1);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
		else
		{
			func_298(sParam1);
		}
		if (func_819() && iParam6)
		{
			if (func_818())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("LBD_DPD_CNT");
			UI::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			UI::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
		else
		{
			func_298(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
			if (func_817(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(166);
			}
			else if (func_640())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(220);
			}
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

int func_817(int iParam0)
{
	if (func_435(iParam0) || func_434(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_818()
{
	return Global_1574187;
}

int func_819()
{
	if (Global_1574186 > 16)
	{
		return 1;
	}
	return 0;
}

void func_820(var uParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

int func_821(int iParam0)
{
	iVar0 = func_824(iParam0);
	if (iVar0 == -1)
	{
		func_822(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0].f_4 = 1;
	return Global_1389078[iVar0].f_2;
}

void func_822(int iParam0, bool bParam1)
{
	if (!func_61(iParam0, 0, 1))
	{
		return;
	}
	if (func_824(iParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (iParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_823(iParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = iParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

int func_823(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_824(int iParam0)
{
	if (!func_61(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iVar0].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1389078[iVar0].f_2))
			{
				return iVar0;
			}
			func_825(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_825(int iParam0)
{
	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iParam0].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1389078[iParam0].f_2), 64);
			UI::_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1389078[iParam0].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32] = { Global_1389078[iVar33] };
		iVar32++;
		iVar33++;
	}
	func_826(&(Global_1389078[iVar32]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_826(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_8();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_827()
{
	switch (Local_147.f_179)
	{
		case 0:
			func_71(19, 0);
			Local_147.f_178 = 0;
			GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
			if (iLocal_508 != 1)
			{
			}
			func_32(1);
			break;
		
		case 2:
			GAMEPLAY::SET_BIT(&uLocal_511, 8);
			func_71(10, 0);
			Local_147.f_178 = 0;
			GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
			Global_1653535 = 0;
			Global_1653536 = 0;
			if (iLocal_508 != 1)
			{
			}
			func_32(1);
			break;
		
		case 1:
			GAMEPLAY::SET_BIT(&uLocal_511, 5);
			func_71(7, 0);
			Local_147.f_178 = 5;
			GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
			Global_1653535 = 0;
			Global_1653536 = 0;
			if (iLocal_508 != 1)
			{
			}
			func_32(1);
			break;
		
		case 3:
			GAMEPLAY::SET_BIT(&uLocal_511, 7);
			func_71(9, 0);
			Local_147.f_178 = 4;
			GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
			Global_1653535 = 0;
			Global_1653536 = 0;
			if (iLocal_508 != 1)
			{
			}
			func_32(1);
			break;
	}
}

int func_828(int iParam0)
{
	switch (Local_147.f_179)
	{
		case 0:
			if (Global_2537071.f_1854.f_1 == iParam0 && !GAMEPLAY::IS_BIT_SET(Local_147.f_359, 7))
			{
				GAMEPLAY::SET_BIT(&(Local_147.f_359), 7);
				return 1;
			}
			break;
	}
	return 0;
}

int func_829(int iParam0)
{
	switch (Local_147)
	{
		case 12:
			switch (Local_147.f_179)
			{
				case 0:
					if (!func_61(iParam0, 0, 1))
					{
						return 0;
					}
					if (iParam0 == Global_2537071.f_5049)
					{
						return 0;
					}
					if (func_93(iParam0, 0))
					{
						return 0;
					}
					if (!func_837(iParam0))
					{
						return 0;
					}
					if (iParam0 == PLAYER::PLAYER_ID())
					{
						return 0;
					}
					if (GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
					{
						return 0;
					}
					if (func_836(1))
					{
						if (func_117(iParam0, func_181(), 1))
						{
							return 0;
						}
					}
					if (func_142(iParam0))
					{
						return 0;
					}
					break;
				
				case 2:
					if (!func_61(iParam0, 1, 1))
					{
						return 0;
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) >= 5)
					{
						return 0;
					}
					if (func_93(iParam0, 0))
					{
						return 0;
					}
					if (iParam0 == PLAYER::PLAYER_ID())
					{
						return 0;
					}
					if (func_447(iParam0))
					{
						return 0;
					}
					if (func_413(iParam0, 1, 0))
					{
						return 0;
					}
					if (func_835(iParam0))
					{
						return 0;
					}
					if (!func_834(iParam0))
					{
						return 0;
					}
					if (INTERIOR::IS_VALID_INTERIOR(Global_2425662[iParam0].f_235))
					{
						iVar0 = INTERIOR::GET_INTERIOR_GROUP_ID(Global_2425662[iParam0].f_235);
						if (((iVar0 == 1 || iVar0 == 11) || iVar0 == 10) || iVar0 == 3)
						{
							return 0;
						}
					}
					if (GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
					{
						return 0;
					}
					if (func_142(iParam0))
					{
						return 0;
					}
					break;
			}
			break;
		
		case 85:
			switch (Local_147.f_179)
			{
				case 3:
					if (!func_61(iParam0, 0, 1))
					{
						return 0;
					}
					if (func_93(iParam0, 0))
					{
						return 0;
					}
					if (iParam0 == PLAYER::PLAYER_ID())
					{
						return 0;
					}
					if (func_447(iParam0))
					{
						return 0;
					}
					if (func_413(iParam0, 1, 0))
					{
						return 0;
					}
					if (func_835(iParam0))
					{
						return 0;
					}
					if (!func_834(iParam0))
					{
						return 0;
					}
					if (GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
					{
						return 0;
					}
					if (func_833())
					{
						if (Global_1574402)
						{
							if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
							{
								return 0;
							}
						}
					}
					if (func_474(iParam0, 146))
					{
						return 0;
					}
					if (func_474(iParam0, 136))
					{
						return 0;
					}
					if (func_474(iParam0, 129))
					{
						return 0;
					}
					if (func_474(iParam0, 131))
					{
						return 0;
					}
					if (func_115(iParam0, 24))
					{
						if (func_473(iParam0))
						{
							return 0;
						}
					}
					if (func_471(iParam0))
					{
						return 0;
					}
					if (func_836(1))
					{
						if (func_117(iParam0, func_181(), 1))
						{
							return 0;
						}
					}
					if (func_832(iParam0) && ((func_429(iParam0) == 148 || func_429(iParam0) == 142) || func_429(iParam0) == 164))
					{
						return 0;
					}
					if (func_429(iParam0) == 153)
					{
						return 0;
					}
					if (func_429(iParam0) == 167)
					{
						return 0;
					}
					if (func_429(iParam0) == 168)
					{
						return 0;
					}
					if (func_429(iParam0) == 190)
					{
						return 0;
					}
					if (func_429(iParam0) == 179)
					{
						return 0;
					}
					if (func_425(iParam0) && (((((func_429(iParam0) == 185 || func_429(iParam0) == 182) || func_429(iParam0) == 197) || func_429(iParam0) == 183) || func_429(iParam0) == 195) || func_429(iParam0) == 198))
					{
						return 0;
					}
					if (func_425(iParam0) && (func_429(iParam0) == 216 || func_429(iParam0) == 219))
					{
						return 0;
					}
					if (func_142(iParam0))
					{
						return 0;
					}
					break;
			}
			break;
		
		case 19:
			switch (Local_147.f_179)
			{
				case 1:
					if (!func_61(iParam0, 0, 1))
					{
						return 0;
					}
					if (func_93(iParam0, 0))
					{
						return 0;
					}
					if (iParam0 == PLAYER::PLAYER_ID())
					{
						return 0;
					}
					if (func_447(iParam0))
					{
						return 0;
					}
					if (func_413(iParam0, 1, 1))
					{
						return 0;
					}
					if (func_835(iParam0))
					{
						return 0;
					}
					if (!func_834(iParam0))
					{
						return 0;
					}
					if (GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
					{
						return 0;
					}
					if (((func_474(iParam0, 129) || func_474(iParam0, 146)) || func_474(iParam0, 131)) || func_474(iParam0, 136))
					{
						return 0;
					}
					if (func_115(iParam0, 24))
					{
						if (func_473(iParam0))
						{
							return 0;
						}
					}
					if (GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 14))
					{
						return 0;
					}
					if (func_836(1) && func_181() == func_125(iParam0))
					{
						return 0;
					}
					if (func_832(iParam0) && func_429(iParam0) == 164)
					{
						return 0;
					}
					if (Global_1590535[iParam0] == 148)
					{
						return 0;
					}
					if (func_471(iParam0))
					{
						return 0;
					}
					if (func_467(iParam0))
					{
						return 0;
					}
					if (func_475(iParam0))
					{
						return 0;
					}
					if (func_425(iParam0) && func_429(iParam0) == 170)
					{
						return 0;
					}
					if (func_429(iParam0) == 168)
					{
						return 0;
					}
					if (func_429(iParam0) == 190)
					{
						return 0;
					}
					if (func_429(iParam0) == 167)
					{
						return 0;
					}
					if (func_425(iParam0) && (((((func_429(iParam0) == 185 || func_429(iParam0) == 182) || func_429(iParam0) == 197) || func_429(iParam0) == 183) || func_429(iParam0) == 195) || func_429(iParam0) == 198))
					{
						return 0;
					}
					if (func_425(iParam0) && (func_429(iParam0) == 238 || func_429(iParam0) == 249))
					{
						return 0;
					}
					if (Global_1573353.f_516[iParam0])
					{
						return 0;
					}
					switch (func_831(iParam0))
					{
						case 6:
						case 7:
							if (func_425(iParam0))
							{
								return 0;
							}
							break;
					}
					if (func_142(iParam0))
					{
						return 0;
						return 0;
					}
					if (func_830(iParam0))
					{
						return 0;
					}
					break;
			}
			break;
	}
	return 1;
}

int func_830(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0].f_12 != 0;
	}
	return 0;
}

int func_831(int iParam0)
{
	if (func_429(iParam0) == 243)
	{
		return func_460(iParam0);
	}
	return -1;
}

int func_832(int iParam0)
{
	if (func_131(iParam0))
	{
		if (func_425(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_833()
{
	return Global_1574401;
}

bool func_834(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_142, 6);
}

bool func_835(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_478();
	}
	return GAMEPLAY::IS_BIT_SET(Global_1377170.f_241.f_136[func_577(10)][iParam0], func_573(10));
}

bool func_836(bool bParam0)
{
	return func_165(PLAYER::PLAYER_ID(), bParam0);
}

int func_837(int iParam0)
{
	if (Global_1590535[iParam0].f_195)
	{
		return 1;
	}
	return 0;
}

bool func_838(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x67D02A194A2FC2BD("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x67D02A194A2FC2BD("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x67D02A194A2FC2BD("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1);
}

void func_839()
{
	func_60(0, 0);
	func_40(-1);
	sVar0 = func_840();
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		func_111(237, "BB_SELECT", -1, 0);
		func_111(238, "BB_BACK", -1, 0);
		func_111(37, sVar0, -1, 0);
	}
	else
	{
		func_110(176, "BB_SELECT", -1);
		func_110(177, "BB_BACK", -1);
		func_110(236, sVar0, -1);
	}
	GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
}

char* func_840()
{
	if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION())
	{
		sVar0 = "HUD_XBXCRD";
	}
	else
	{
		sVar0 = "HUD_PS3CRD";
	}
	return sVar0;
}

void func_841()
{
	if (func_61(Local_147.f_358, 0, 1))
	{
		func_60(0, 0);
		func_59("STRING");
		StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(Local_147.f_358), 64);
		func_58(Var1);
		func_57(1, 1, 0, 0, 0);
		func_56(1, 2, 1, 1, 1);
		func_55(0, 0, 0, 0, 0);
		if (func_479(81, 0, 0))
		{
			func_42(iVar0, "GC_MENU41", 0, 1, 0, 0);
			func_42(iVar0, "MPCT_CASH", 1, 1, 0, 0);
			func_595(func_65(12), 0);
		}
		else
		{
			func_42(iVar0, "GC_MENU41", 0, 1, 0, 0);
			func_42(iVar0, "", 1, 1, 0, 0);
			func_592(15, 0);
		}
		iVar0++;
		func_40(-1);
		if (func_904())
		{
			if (CONTROLS::_IS_INPUT_DISABLED(2))
			{
				func_111(237, "BB_SELECT", -1, 0);
				func_111(238, "BB_BACK", -1, 0);
			}
			else
			{
				func_110(176, "BB_SELECT", -1);
				func_110(177, "BB_BACK", -1);
			}
			GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
		}
		func_109(Local_147.f_181.f_69, 1, 1);
		Local_147.f_181.f_2 = 1;
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
		Local_147.f_178 = 1;
	}
}

int func_842()
{
	switch (Local_147.f_178)
	{
		case 2:
			if (func_829(Local_147.f_358))
			{
				if (iLocal_509)
				{
					if (!func_328(Local_147.f_358))
					{
						iLocal_509 = 0;
						GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
					}
				}
				else if (func_328(Local_147.f_358))
				{
					iLocal_509 = 1;
					GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
				}
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
				Local_147.f_178 = 1;
				return 0;
			}
			break;
		
		case 3:
			if (func_829(Local_147.f_358))
			{
				if (iLocal_512 != PLAYER::GET_PLAYER_WANTED_LEVEL(Local_147.f_358))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
				}
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
				Local_147.f_178 = 1;
				return 0;
			}
			break;
		
		case 8:
			if (!func_829(Local_147.f_358))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
				Local_147.f_178 = 1;
				return 0;
			}
			break;
		
		case 0:
		case 1:
		case 4:
		case 7:
		case 5:
		case 9:
		case 6:
		case 18:
		case 19:
		case 20:
		case 24:
			break;
	}
	return 1;
}

void func_843()
{
	func_60(0, 0);
	func_59("MPCT_MERRYH");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	if (func_479(61, 0, 0))
	{
		iVar1 = func_104(8);
		bVar2 = true;
		if ((iVar1 > 0 || !func_454(8)) || !func_424(8))
		{
			bVar2 = false;
		}
		func_596(8, 0, "MPCT_MERRY0", bVar2);
		func_42(0, "MPCT_CASH", 1, bVar2, 0, 0);
		func_595(func_65(8), 0);
	}
	else
	{
		func_42(0, "MPCT_MERRY0", 0, 1, 0, 0);
		func_42(0, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar0] = 0;
	iVar0++;
	if (func_479(62, 0, 0))
	{
		iVar1 = func_104(10);
		bVar2 = true;
		if ((iVar1 > 0 || !func_454(10)) || !func_424(10))
		{
			bVar2 = false;
		}
		func_596(10, 1, "MPCT_MERRY3", bVar2);
		func_42(1, "MPCT_CASH", 1, bVar2, 0, 0);
		func_595(func_65(10), 0);
	}
	else
	{
		func_42(1, "MPCT_MERRY3", 0, 1, 0, 0);
		func_42(1, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar0] = 1;
	iVar0++;
	if (func_479(63, 0, 0))
	{
		iVar1 = func_104(9);
		bVar2 = true;
		if (((iVar1 > 0 || !func_454(9)) || !func_424(9)) || func_844(PLAYER::PLAYER_ID()))
		{
			bVar2 = false;
		}
		func_596(9, 2, "MPCT_MERRY1", bVar2);
		func_42(2, "MPCT_CASH", 1, bVar2, 0, 0);
		func_595(func_65(9), 0);
	}
	else
	{
		func_42(2, "MPCT_MERRY1", 0, 1, 0, 0);
		func_42(2, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar0] = 2;
	iVar0++;
	if (func_479(77, 0, 0))
	{
		iVar1 = func_104(13);
		bVar2 = true;
		if (((iVar1 > 0 || !func_454(13)) || !func_424(13)) || func_844(PLAYER::PLAYER_ID()))
		{
			bVar2 = false;
		}
		func_596(13, 3, "MPCT_MERRY5", bVar2);
		func_42(3, "MPCT_CASH", 1, bVar2, 0, 0);
		func_595(func_65(13), 0);
	}
	else
	{
		func_42(3, "MPCT_MERRY5", 0, 1, 0, 0);
		func_42(3, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar0] = 3;
	iVar0++;
	if (func_479(81, 0, 0))
	{
		iVar1 = func_104(12);
		bVar2 = true;
		if (((iVar1 > 0 || !func_454(12)) || !func_424(12)) || func_835(PLAYER::PLAYER_ID()))
		{
			bVar2 = false;
		}
		func_596(12, 4, "GC_MENU41", bVar2);
		func_42(4, "MPCT_CASH", 1, bVar2, 0, 0);
		func_595(func_65(12), 0);
	}
	else
	{
		func_42(4, "GC_MENU41", 0, 1, 0, 0);
		func_42(4, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar0] = 4;
	iVar0++;
	if (func_479(64, 0, 0))
	{
		iVar1 = func_104(11);
		bVar2 = true;
		if (((iVar1 > 0 || !func_454(11)) || !func_424(11)) || GAMEPLAY::IS_BIT_SET(Global_42599, 10))
		{
			bVar2 = false;
		}
		func_596(11, 5, "MPCT_MERRY4", bVar2);
		func_42(5, "MPCT_CASH", 1, bVar2, 0, 0);
		func_595(func_65(11), 0);
	}
	else
	{
		func_42(5, "MPCT_MERRY4", 0, 1, 0, 0);
		func_42(5, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar0] = 5;
	iVar0++;
	func_40(-1);
	if (func_904())
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			func_111(237, "BB_SELECT", -1, 0);
			func_111(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_110(176, "BB_SELECT", -1);
			func_110(177, "BB_BACK", -1);
		}
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = iVar0;
}

bool func_844(int iParam0)
{
	return func_470(iParam0) == 1119849093;
}

void func_845()
{
	switch (Local_147.f_178)
	{
		case 5:
			if (func_62(0, -1, 1))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_846();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_284();
				}
				else
				{
					func_284();
				}
			}
			break;
		
		case 1:
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_839();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_310();
					GAMEPLAY::SET_BIT(&iLocal_556, 20);
					func_803();
				}
				else
				{
					func_310();
					func_803();
				}
			}
			break;
	}
}

void func_846()
{
	func_60(0, 0);
	func_59("MPCT_LAMAR");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	if (func_479(67, 0, 0))
	{
		iVar2 = func_104(2);
		bVar1 = true;
		if ((iVar2 > 0 || !func_454(2)) || !func_424(2))
		{
			bVar1 = false;
		}
		func_596(2, iVar0, "GC_MENU7", bVar1);
		func_42(iVar0, "MPCT_CASH", 1, bVar1, 0, 0);
		func_595(func_65(2), 0);
	}
	else
	{
		func_42(iVar0, "GC_MENU7", 0, 1, 0, 0);
		func_42(iVar0, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar0] = 0;
	iVar0++;
	if (func_847(0))
	{
		bVar1 = true;
		if (!func_454(38) || !func_424(38))
		{
			bVar1 = false;
		}
		func_42(iVar0, "FM_LAMC_FR", 0, bVar1, 0, 0);
		Local_147.f_181.f_70[iVar0] = 1;
		iVar0++;
	}
	else
	{
		Local_147.f_181.f_70[iVar0] = 2;
		iVar0++;
	}
	func_40(-1);
	if (func_904())
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			func_111(237, "BB_SELECT", -1, 0);
			func_111(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_110(176, "BB_SELECT", -1);
			func_110(177, "BB_BACK", -1);
		}
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = iVar0;
}

bool func_847(int iParam0)
{
	return (func_851(iParam0) > Global_794709.f_123024[iParam0].f_9 && func_848(iParam0) > 8);
}

int func_848(int iParam0)
{
	if (Global_1671743[iParam0].f_1 == -1)
	{
		iVar0 = func_68(func_850(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_849(iParam0, 0);
			iVar0 = 0;
		}
		Global_1671743[iParam0].f_1 = iVar0;
	}
	return Global_1671743[iParam0].f_1;
}

void func_849(int iParam0, int iParam1)
{
	Global_1671743[iParam0].f_1 = iParam1;
	func_608(func_850(iParam0), iParam1, -1, 1, 0);
	func_701(-1830957326, 3, 0);
}

int func_850(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9981;
		
		default:
	}
	return 9981;
}

int func_851(int iParam0)
{
	if (Global_1671743[iParam0] == -1)
	{
		iVar0 = func_68(func_853(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_852(iParam0, 0);
			iVar0 = 0;
		}
		Global_1671743[iParam0] = iVar0;
	}
	return Global_1671743[iParam0];
}

void func_852(int iParam0, int iParam1)
{
	Global_1671743[iParam0] = iParam1;
	func_608(func_853(iParam0), iParam1, -1, 1, 0);
}

int func_853(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9978;
		
		default:
	}
	return 9978;
}

void func_854()
{
	func_902();
	func_888();
	func_876();
	iVar0 = 0;
	switch (Local_147.f_178)
	{
		case 0:
			if (func_62(0, -1, 1))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_875();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_284();
				}
				else
				{
					func_874();
					func_284();
					if (GAMEPLAY::IS_BIT_SET(Local_147.f_359, 18))
					{
						if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_65(iLocal_554), 0, 1, 0, -1, 0) || GAMEPLAY::IS_BIT_SET(Local_147.f_359, 17))
						{
							iVar1 = func_666(1064954035, func_65(iLocal_554), 0, 0);
							if (iVar1 == 1)
							{
								GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 17);
								GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 18);
								switch (iLocal_554)
								{
									case 23:
										GAMEPLAY::SET_BIT(&(Global_2439138.f_3992), 3);
										break;
									
									case 24:
										GAMEPLAY::SET_BIT(&(Global_2439138.f_3992), 4);
										break;
									
									case 25:
										GAMEPLAY::SET_BIT(&(Global_2439138.f_3992), 5);
										break;
									
									case 26:
										GAMEPLAY::SET_BIT(&(Global_2439138.f_3992), 6);
										break;
									
									case 57:
										GAMEPLAY::SET_BIT(&(Global_2439138.f_3992), 15);
										break;
								}
								GAMEPLAY::SET_BIT(&(Global_2439138.f_3992), 0);
							}
							else if (iVar1 == 0)
							{
								GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 17);
								GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 18);
								func_71(1, 0);
							}
							else
							{
								return;
							}
						}
						else
						{
							func_71(1, 0);
						}
					}
					if (GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 0))
					{
						if (GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 1))
						{
							if (GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 2))
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 3))
								{
									iVar0 = func_65(23);
									if (func_90())
									{
										UNK3::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_669(iLocal_553));
									}
									NETWORKCASH::NETWORK_BUY_ITEM(iVar0, Global_2439138.f_3993, 10, -1, 0, "LESTER", 0, 0, 0, 1);
									func_81(iLocal_553);
									func_1(Local_147.f_1, "CT_AUD", "MPCT_LoBoat", &Local_1270, 0);
								}
								else if (GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 4))
								{
									iVar0 = func_65(24);
									if (func_90())
									{
										UNK3::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_669(iLocal_553));
									}
									NETWORKCASH::NETWORK_BUY_ITEM(iVar0, Global_2439138.f_3993, 10, -1, 0, "LESTER", 0, 0, 0, 1);
									func_81(iLocal_553);
									func_1(Local_147.f_1, "CT_AUD", "MPCT_LoHeli", &Local_1270, 0);
								}
								else if (GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 5))
								{
									iVar0 = func_65(25);
									if (func_90())
									{
										UNK3::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_669(iLocal_553));
									}
									NETWORKCASH::NETWORK_BUY_ITEM(iVar0, Global_2439138.f_3993, 10, -1, 0, "LESTER", 0, 0, 0, 1);
									func_81(iLocal_553);
									func_1(Local_147.f_1, "CT_AUD", "MPCT_LoCar", &Local_1270, 0);
								}
								else if (GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 6))
								{
									iVar0 = func_65(26);
									if (func_90())
									{
										UNK3::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_669(iLocal_553));
									}
									NETWORKCASH::NETWORK_BUY_ITEM(iVar0, Global_2439138.f_3993, 10, -1, 0, "LESTER", 0, 0, 0, 1);
									func_81(iLocal_553);
									func_1(Local_147.f_1, "CT_AUD", "MPCT_LoPlane", &Local_1270, 0);
								}
								else if (GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 15))
								{
									iVar0 = func_65(57);
									if (func_90())
									{
										UNK3::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_669(iLocal_553));
									}
									NETWORKCASH::NETWORK_BUY_ITEM(iVar0, Global_2439138.f_3993, 10, -1, 0, "LESTER", 0, 0, 0, 1);
									func_81(iLocal_553);
									func_1(Local_147.f_1, "CT_AUD", "MPCT_LoHeli", &Local_1270, 0);
								}
								func_32(4);
							}
							else
							{
								func_663(func_65(iLocal_554), 5, 2, 1);
								func_71(1, 0);
							}
							func_662();
						}
					}
					if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4555, 3))
					{
						iVar2 = func_65(35);
						if ((func_873(1) >= iVar2 || NETWORKCASH::NETWORK_CAN_SPEND_MONEY(iVar2, 0, 1, 0, -1, 0)) || GAMEPLAY::IS_BIT_SET(Local_147.f_359, 17))
						{
							iVar3 = func_666(-407201236, iVar2, 0, 0);
							if (iVar3 == 1)
							{
								GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 17);
								GAMEPLAY::SET_BIT(&(Global_2537071.f_4555), 0);
								Global_1590535[PLAYER::PLAYER_ID()].f_751 = 1;
								GAMEPLAY::SET_BIT(&(Global_2537071.f_4555), 2);
								GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4555), 1);
								func_1(Local_147.f_1, "CT_AUD", "MPCT_Lconf", &Local_1270, 0);
								func_72(&(Global_2451426.f_4308.f_197[35]), 1, 0);
								func_869(35, -1, -1);
								GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4555), 3);
								func_32(4);
							}
							else if (iVar3 == 0)
							{
								GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4555), 3);
								GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 17);
								func_71(1, 0);
							}
							else
							{
								return;
							}
						}
						else
						{
							GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4555), 3);
							GAMEPLAY::SET_BIT(&iLocal_1277, 0);
							func_1(Local_147.f_1, "CT_AUD", "MPCT_LSmon", &Local_1270, 0);
							func_71(0, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
				{
					func_839();
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					func_310();
					GAMEPLAY::SET_BIT(&iLocal_556, 20);
					func_803();
				}
				else
				{
					func_310();
					func_803();
				}
			}
			break;
		
		case 2:
			if (func_842())
			{
				if (func_62(0, -1, 0))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
					{
						func_866();
						GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
						func_284();
					}
					else
					{
						func_284();
					}
				}
			}
			break;
		
		case 3:
			if (func_842())
			{
				if (func_62(0, -1, 0))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4) || CONTROLS::_0x6CD79468A1E595C6(2))
					{
						func_864();
						GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
					}
					if (GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4))
					{
						if (iLocal_555 == 0)
						{
							if (func_61(Local_147.f_358, 0, 1))
							{
								iVar0 = Local_147.f_181.f_103[0] * 500;
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(Local_147.f_358) == 0)
								{
									func_107("GC_MENU54", 100, 0);
									func_419(Local_147.f_181.f_103[0]);
									func_419(iVar0);
								}
								else
								{
									func_107("GC_MENU32", 100, 0);
									func_419(PLAYER::GET_PLAYER_WANTED_LEVEL(Local_147.f_358));
									func_419(Local_147.f_181.f_103[0]);
									func_419(iVar0);
								}
							}
						}
						func_284();
					}
				}
			}
			break;
		
		case 17:
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4))
				{
					if (func_857() || CONTROLS::_0x6CD79468A1E595C6(2))
					{
						GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
						func_284();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_284();
				}
			}
			break;
		
		case 22:
			if (func_62(0, -1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_147.f_359, 4))
				{
					if (func_855() || CONTROLS::_0x6CD79468A1E595C6(2))
					{
						GAMEPLAY::SET_BIT(&(Local_147.f_359), 4);
						func_284();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_284();
				}
			}
			break;
	}
}

int func_855()
{
	iVar2 = 0;
	func_60(0, 0);
	func_59("HPPHONE_REPLAY");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	iVar2 = 0;
	while (iVar2 < 3)
	{
		bVar1 = true;
		Var3 = { func_856(iVar2) };
		func_42(iVar2, "STRING", 1, bVar1, 0, 0);
		func_625(UI::_GET_LABEL_TEXT(&Var3), 0, 0, 0);
		iVar0++;
		iVar2++;
	}
	GAMEPLAY::SET_BIT(&iLocal_1277, 2);
	iVar0++;
	func_40(-1);
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		func_111(237, "BB_SELECT", -1, 0);
		func_111(238, "BB_BACK", -1, 0);
	}
	else
	{
		func_110(176, "BB_SELECT", -1);
		func_110(177, "BB_BACK", -1);
	}
	GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = iVar0;
	return 1;
}

struct<16> func_856(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HPSTRAND_IAAb", 64);
			break;
		
		case 1:
			StringCopy(&Var0, "HPSTRAND_SUBb", 64);
			break;
		
		case 2:
			StringCopy(&Var0, "HPSTRAND_MSILb", 64);
			break;
	}
	return Var0;
}

int func_857()
{
	uVar2 = func_316(PLAYER::PLAYER_ID());
	iVar3 = func_314(12, uVar2, &uLocal_1290, &iLocal_1316);
	iVar4 = 0;
	iVar5 = 0;
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_9 = -1;
	func_60(0, 0);
	func_59("GC_MENURH");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	if (iVar3 > 0)
	{
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			iVar5 = uLocal_1290[iVar4];
			Var22 = { Global_2404283[iVar5].f_2 };
			Var6 = { func_859(&Var22, 0) };
			if (!GAMEPLAY::IS_BIT_SET(iLocal_1316, iVar4))
			{
				bVar1 = false;
			}
			else
			{
				bVar1 = true;
			}
			func_42(iVar0, "STRING", 1, bVar1, 0, 0);
			func_625(&Var6, 0, 0, 0);
			iVar0++;
			iVar4++;
		}
	}
	else
	{
		func_858();
	}
	if (iVar3 == 1)
	{
		GAMEPLAY::SET_BIT(&iLocal_1277, 2);
		iVar0++;
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&iLocal_1277, 2);
	}
	func_40(-1);
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		func_111(237, "BB_SELECT", -1, 0);
		func_111(238, "BB_BACK", -1, 0);
	}
	else
	{
		func_110(176, "BB_SELECT", -1);
		func_110(177, "BB_BACK", -1);
	}
	GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = iVar0;
	return 1;
}

void func_858()
{
	Local_147.f_178 = 0;
	GAMEPLAY::CLEAR_BIT(&iLocal_1277, 2);
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	Local_147.f_181.f_69 = uLocal_1279;
}

struct<16> func_859(var uParam0, bool bParam1)
{
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_863(uParam0))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1311772.f_1[uParam0->f_9], 0))
			{
				return Global_2398237[uParam0->f_9];
			}
			return Global_2395346.f_356[uParam0->f_9].f_10.f_12;
		}
	}
	if (func_862(uParam0->f_1))
	{
		if (func_861(uParam0))
		{
			return Global_2398103.f_1.f_12;
		}
		return Var0;
	}
	iVar16 = func_860(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar16].f_22;
		
		case 62:
			return Global_917806.f_604[iVar16].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_939452.f_5[iVar16].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_860(var uParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_862(uParam0->f_1))
	{
		if (func_861(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (GAMEPLAY::IS_BIT_SET(Global_794709.f_4[uParam0->f_1].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_794709.f_4[uParam0->f_1].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_794709.f_4[iVar0].f_76, 13))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (GAMEPLAY::IS_BIT_SET(Global_917806.f_604[uParam0->f_1].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_917806.f_604[uParam0->f_1]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_917806.f_604[uParam0->f_1].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_917806.f_604[iVar0].f_76, 13))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_917806.f_604[iVar0]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[uParam0->f_1].f_76, 13))
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_939452.f_5[uParam0->f_1]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[uParam0->f_1].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[iVar0].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_939452.f_5[iVar0]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_861(var uParam0)
{
	if (Global_2398103)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_862(int iParam0)
{
	return iParam0 == 9999;
}

int func_863(var uParam0)
{
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2395346.f_356[iVar0])
	{
		return 0;
	}
	if (!GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2395346.f_356[iVar0].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2395346.f_356[iVar0].f_5, 3))
	{
		return 0;
	}
	return 1;
}

void func_864()
{
	if (func_61(Local_147.f_358, 0, 1))
	{
		iLocal_512 = PLAYER::GET_PLAYER_WANTED_LEVEL(Local_147.f_358);
		func_60(0, 0);
		StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(Local_147.f_358), 64);
		func_59("GC_MENU27");
		func_57(1, 1, 0, 0, 0);
		func_56(1, 2, 1, 1, 1);
		func_55(0, 1, 0, 0, 0);
		Local_147.f_181.f_2 = 1;
		Local_147.f_181.f_69 = 0;
		func_42(iVar0, "STRING", 1, 1, 0, 0);
		func_865(&Var1, 0, 1);
		func_42(iVar0, "GC_MENU3", 1, 1, 0, 0);
		func_595(Local_147.f_181.f_103[0], 0);
		func_40(-1);
		Local_147.f_181.f_3[0] = iLocal_512 + 1;
		Local_147.f_181.f_36[0] = 5;
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			if (Local_147.f_181.f_69 == 0)
			{
				func_111(237, "BB_SELECT", -1, 0);
			}
			func_111(238, "BB_BACK", -1, 0);
		}
		else
		{
			if (Local_147.f_181.f_69 == 0)
			{
				func_110(176, "BB_SELECT", -1);
			}
			func_110(177, "BB_BACK", -1);
		}
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
		func_109(Local_147.f_181.f_69, 1, 1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
		Local_147.f_178 = 1;
	}
}

void func_865(char* sParam0, bool bParam1, bool bParam2)
{
	if (Global_22350.f_5221 >= 32)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	StringCopy(&(Global_2461220[Global_22350.f_5221]), sParam0, 64);
	Global_22350.f_5221++;
	Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 5;
	Global_22350.f_5743++;
	fVar0 = func_594();
	if (bParam2)
	{
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_594();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_44(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_593();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

void func_866()
{
	if (func_61(Local_147.f_358, 0, 1))
	{
		bVar1 = func_328(Local_147.f_358);
		func_60(0, 0);
		func_59("STRING");
		if (bVar1)
		{
			func_59("BB_CUR_TITLE");
		}
		else
		{
			func_59("BB_SET_TITLE");
		}
		func_57(1, 1, 0, 0, 0);
		func_56(1, 2, 1, 1, 1);
		func_55(0, 1, 0, 0, 0);
		Local_147.f_181.f_2 = 2;
		StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(Local_147.f_358), 64);
		if (bVar1)
		{
			func_42(iVar0, "STRING", 1, 1, 0, 0);
			func_865(&Var2, 0, 1);
			func_42(iVar0, "BB_CASHAMT", 1, 1, 0, 0);
			func_595(func_868(Local_147.f_358), 0);
			Local_147.f_181.f_3[1] = 0;
			Local_147.f_181.f_36[1] = 0;
			func_40(-1);
			if (CONTROLS::_IS_INPUT_DISABLED(2))
			{
				func_111(237, "BB_SELECT", -1, 0);
				func_111(238, "BB_BACK", -1, 0);
			}
			else
			{
				func_110(176, "BB_SELECT", -1);
				func_110(177, "BB_BACK", -1);
			}
			GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
		}
		else
		{
			func_42(iVar0, "STRING", 1, 1, 0, 0);
			func_865(&Var2, 0, 1);
			func_42(iVar0, "BB_CASHAMT", 1, 1, 0, 0);
			func_595(func_867(Local_147.f_181.f_103[0]), 0);
			func_40(-1);
			Local_147.f_181.f_3[0] = 0;
			Local_147.f_181.f_36[0] = 4;
			Local_147.f_181.f_3[1] = 0;
			Local_147.f_181.f_3[1] = 0;
			if (CONTROLS::_IS_INPUT_DISABLED(2))
			{
				func_111(237, "BB_SELECT", -1, 0);
				func_111(238, "BB_BACK", -1, 0);
			}
			else
			{
				func_110(176, "BB_SELECT", -1);
				func_110(177, "BB_BACK", -1);
			}
			GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
		}
		iVar0++;
		func_42(iVar0, "BB_LC_EXIT", 0, 1, 0, 0);
		iVar0++;
		if (Local_147.f_181.f_69 == 0)
		{
			if (!bVar1)
			{
				func_109(Local_147.f_181.f_69, 1, 1);
			}
			else
			{
				func_109(Local_147.f_181.f_69, 1, 0);
			}
		}
		else
		{
			func_109(Local_147.f_181.f_69, 1, 0);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
		Local_147.f_178 = 1;
	}
}

int func_867(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_2338;
			break;
		
		case 1:
			return Global_262145.f_2339;
			break;
		
		case 2:
			return Global_262145.f_2340;
			break;
		
		case 3:
			return Global_262145.f_2341;
			break;
		
		case 4:
			return Global_262145.f_2342;
			break;
	}
	return 0;
}

int func_868(int iParam0)
{
	if (Global_2537071.f_1791.f_19[iParam0] != 0)
	{
		return Global_2537071.f_1791.f_19[iParam0];
	}
	return Global_1573353.f_4[iParam0].f_1;
}

void func_869(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		Global_2451426.f_4308.f_328[iParam0] = (Global_2451426.f_4308.f_328[iParam0] + iParam2);
	}
	else if (iParam1 != -1)
	{
		Global_2451426.f_4308.f_328[iParam0] = iParam1;
	}
	else
	{
		Global_2451426.f_4308.f_328[iParam0] = func_870(iParam0);
	}
}

int func_870(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 300000;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 600000;
			break;
		
		case 3:
			return 600000;
			break;
		
		case 4:
			return 600000;
			break;
		
		case 5:
			return 2880000;
			break;
		
		case 6:
			return 300000;
			break;
		
		case 8:
			return 300000;
			break;
		
		case 9:
			return 300000;
			break;
		
		case 10:
			return 600000;
			break;
		
		case 11:
			return 300000;
			break;
		
		case 12:
			return 900000;
			break;
		
		case 13:
			return 300000;
			break;
		
		case 14:
			return 0;
			break;
		
		case 15:
			return 180000;
			break;
		
		case 16:
			return 0;
			break;
		
		case 17:
			return 180000;
			break;
		
		case 18:
			return 180000;
			break;
		
		case 19:
			return 180000;
			break;
		
		case 20:
			return 300000;
			break;
		
		case 21:
			return 180000;
			break;
		
		case 22:
			return func_872();
			break;
		
		case 23:
			return func_871();
			break;
		
		case 24:
			return func_871();
			break;
		
		case 25:
			return func_871();
			break;
		
		case 26:
			return func_871();
			break;
		
		case 57:
			return func_871();
			break;
		
		case 35:
			return 480000;
			break;
		
		case 36:
			return 180000;
			break;
		
		case 45:
		case 7:
		case 48:
			if (Global_2537071.f_871 == 1)
			{
				return Global_262145.f_21096;
			}
			else if (Global_2537071.f_883 == 1)
			{
				return Global_262145.f_22187;
			}
			else
			{
				return Global_262145.f_18782;
			}
			break;
		
		case 53:
		case 54:
		case 55:
		case 56:
			return Global_262145.f_23968;
			break;
		
		case 47:
			return Global_262145.f_20708;
		
		case 46:
			return Global_262145.f_21092;
		
		case 49:
			return Global_262145.f_22587;
		
		case 52:
			return Global_262145.f_24174;
		
		case 39:
			return 0;
		
		case 40:
			return 0;
		
		case 41:
			return 0;
		
		case 42:
			return 0;
		
		case 50:
			return 1800000;
		
		case 58:
			return Global_262145.f_24998;
		
		case 62:
			return Global_262145.f_24999;
		
		case 59:
			return Global_262145.f_27582;
		
		case 60:
			return Global_262145.f_27581;
		
		case 63:
			return Global_262145.f_28457;
		
		case 64:
			return 180000;
			break;
	}
	return 0;
}

int func_871()
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_792(46), -1, 0, 0) || func_429(PLAYER::PLAYER_ID()) == 194)
	{
		return Global_262145.f_11477;
	}
	return 0;
}

int func_872()
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_792(46), -1, 0, 0) || func_429(PLAYER::PLAYER_ID()) == 194)
	{
		return Global_262145.f_11237;
	}
	return 0;
}

int func_873(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE();
	}
	iVar0 = (iVar0 + NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1));
	return iVar0;
}

void func_874()
{
	iVar0 = 0;
	bVar1 = false;
	if (GAMEPLAY::IS_BIT_SET(iLocal_1280, 1))
	{
		iVar0 = func_104(20);
		if ((iVar0 <= 0 && func_454(20)) && func_424(20))
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1280, 1);
			bVar1 = true;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1280, 2))
	{
		iVar0 = func_104(6);
		if ((iVar0 <= 0 && func_454(6)) && func_424(6))
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1280, 2);
			bVar1 = true;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1280, 3))
	{
		iVar0 = func_104(6);
		if ((iVar0 <= 0 && func_454(14)) && func_424(14))
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1280, 3);
			bVar1 = true;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1280, 4))
	{
		iVar0 = func_104(15);
		if ((iVar0 <= 0 && func_454(15)) && func_424(15))
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1280, 4);
			bVar1 = true;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1280, 0))
	{
		iVar0 = func_104(35);
		if (iVar0 <= 0)
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1280, 0);
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		func_875();
	}
}

void func_875()
{
	func_60(0, 0);
	func_59("BB_FIRST_0");
	func_57(1, 1, 0, 0, 0);
	func_56(1, 2, 1, 1, 1);
	func_55(0, 0, 0, 0, 0);
	if (func_479(29, 0, 0))
	{
		bVar1 = true;
		if (!func_454(1) || !func_424(1))
		{
			bVar1 = false;
		}
		func_596(1, iVar2, "BB_FIRST_1", bVar1);
	}
	else
	{
		func_42(iVar2, "BB_FIRST_1", 0, 1, 0, 0);
		func_42(iVar2, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar2] = 0;
	iVar2++;
	if (func_479(65, 0, 0))
	{
		iVar0 = func_104(20);
		bVar1 = true;
		if ((iVar0 > 0 || !func_454(20)) || !func_424(20))
		{
			GAMEPLAY::SET_BIT(&iLocal_1280, 1);
			bVar1 = false;
			bVar1 = false;
		}
		func_596(20, iVar2, "GC_MENU26", bVar1);
		iVar3 = func_65(20);
		if (iVar3 <= 0)
		{
			func_42(iVar2, "PEG_FREE", 0, bVar1, 0, 0);
		}
		else
		{
			func_42(iVar2, "MPCT_CASH", 1, bVar1, 0, 0);
			func_595(iVar3, 0);
		}
	}
	else
	{
		func_42(iVar2, "GC_MENU26", 0, 1, 0, 0);
		func_42(iVar2, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar2] = 1;
	iVar2++;
	if (func_479(75, 0, 0))
	{
		iVar0 = func_104(6);
		bVar1 = true;
		if (((iVar0 > 0 || !func_454(6)) || !func_424(6)) || Global_2425662[PLAYER::PLAYER_ID()].f_200)
		{
			GAMEPLAY::SET_BIT(&iLocal_1280, 2);
			bVar1 = false;
		}
		func_596(6, iVar2, "GC_MENU25", bVar1);
		func_42(iVar2, "MPCT_CASH", 1, bVar1, 0, 0);
		func_595(func_65(6), 0);
	}
	else
	{
		func_42(iVar2, "GC_MENU25", 0, 1, 0, 0);
		func_42(iVar2, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar2] = 2;
	iVar2++;
	if (func_479(95, 0, 0))
	{
		iVar0 = func_104(14);
		bVar1 = true;
		if ((iVar0 > 0 || !func_454(14)) || !func_424(14))
		{
			GAMEPLAY::SET_BIT(&iLocal_1280, 3);
			bVar1 = false;
		}
		func_596(14, iVar2, "GC_MENU47", bVar1);
		func_42(iVar2, "MPCT_CASH", 1, bVar1, 0, 0);
		func_595(func_65(14), 0);
	}
	else
	{
		func_42(iVar2, "GC_MENU47", 0, 1, 0, 0);
		func_42(iVar2, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar2] = 3;
	iVar2++;
	if (func_479(88, 0, 0))
	{
		iVar0 = func_104(15);
		bVar1 = true;
		if ((iVar0 > 0 || !func_454(15)) || !func_424(15))
		{
			GAMEPLAY::SET_BIT(&iLocal_1280, 4);
			bVar1 = false;
		}
		func_596(15, iVar2, "GC_MENU48", bVar1);
		if (func_65(15) > 0)
		{
			func_42(iVar2, "MPCT_CASH", 1, bVar1, 0, 0);
			func_595(func_65(15), 0);
		}
	}
	else
	{
		func_42(iVar2, "GC_MENU48", 0, 1, 0, 0);
		func_42(iVar2, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar2] = 4;
	iVar2++;
	if (func_479(121, 0, 0))
	{
		iVar0 = func_104(36);
		bVar1 = true;
		if ((((iVar0 > 0 || !func_454(36)) || !func_424(36)) || func_414()) || (func_413(PLAYER::PLAYER_ID(), 0, 0) && func_398()))
		{
			GAMEPLAY::SET_BIT(&iLocal_1280, 5);
			bVar1 = false;
		}
		func_596(36, iVar2, "GC_MENURH", bVar1);
		if (func_65(36) > 0)
		{
			func_42(iVar2, "MPCT_CASH", 1, bVar1, 0, 0);
			func_595(func_65(36), 0);
		}
	}
	else
	{
		func_42(iVar2, "GC_MENURH", 0, 1, 0, 0);
		func_42(iVar2, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar2] = 10;
	iVar2++;
	if (func_479(96, 0, 0))
	{
		iVar0 = func_104(37);
		bVar1 = true;
		if (((iVar0 > 0 || !func_454(37)) || !func_424(37)) || !func_414())
		{
			bVar1 = false;
		}
		func_596(37, iVar2, "GC_MENUCH", bVar1);
		if (func_65(37) > 0)
		{
			func_42(iVar2, "MPCT_CASH", 1, bVar1, 0, 0);
			func_595(func_65(15), 0);
		}
	}
	else
	{
		func_42(iVar2, "GC_MENUCH", 0, 1, 0, 0);
		func_42(iVar2, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar2] = 11;
	iVar2++;
	if (func_397(PLAYER::PLAYER_ID()))
	{
		bVar1 = true;
		if (func_396(PLAYER::PLAYER_ID(), 0) == -1)
		{
			bVar1 = false;
		}
		func_596(51, iVar2, "HPPHONE_CANCEL", bVar1);
		if (func_65(51) > 0)
		{
			func_42(iVar2, "MPCT_CASH", 1, bVar1, 0, 0);
			func_595(func_65(51), 0);
		}
	}
	else
	{
		func_42(iVar2, "HPPHONE_CANCEL", 0, 1, 0, 0);
		func_42(iVar2, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar2] = 13;
	iVar2++;
	if ((func_395(PLAYER::PLAYER_ID(), 1) && func_395(PLAYER::PLAYER_ID(), 2)) && func_395(PLAYER::PLAYER_ID(), 3))
	{
		bVar1 = true;
		if (!func_394(PLAYER::PLAYER_ID()) || func_392(PLAYER::PLAYER_ID()))
		{
			bVar1 = false;
		}
		func_596(61, iVar2, "CSH_LPHONE_CANCEL", bVar1);
		if (func_65(61) > 0)
		{
			func_42(iVar2, "MPCT_CASH", 1, bVar1, 0, 0);
			func_595(func_65(61), 0);
		}
	}
	else
	{
		func_42(iVar2, "CSH_LPHONE_CANCEL", 0, 1, 0, 0);
		func_42(iVar2, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar2] = 15;
	iVar2++;
	if (func_479(104, 0, 0))
	{
		iVar0 = func_104(25);
		bVar1 = true;
		if (((GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 10) || !func_454(23)) || !func_424(23)) || (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_792(46), -1, 0, 0) || func_429(PLAYER::PLAYER_ID()) == 194)))
		{
			bVar1 = false;
		}
		func_596(23, iVar2, "GC_MENU49", bVar1);
		func_42(iVar2, "MPCT_CASH", 1, bVar1, 0, 0);
		func_595(func_65(23), 0);
	}
	else
	{
		func_42(iVar2, "GC_MENU49", 0, 1, 0, 0);
		func_42(iVar2, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar2] = 5;
	iVar2++;
	if (func_479(98, 0, 0))
	{
		iVar0 = func_104(25);
		bVar1 = true;
		if (((GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 10) || !func_454(24)) || !func_424(24)) || (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_792(46), -1, 0, 0) || func_429(PLAYER::PLAYER_ID()) == 194)))
		{
			bVar1 = false;
		}
		func_596(24, iVar2, "GC_MENU50", bVar1);
		func_42(iVar2, "MPCT_CASH", 1, bVar1, 0, 0);
		func_595(func_65(24), 0);
	}
	else
	{
		func_42(iVar2, "GC_MENU50", 0, 1, 0, 0);
		func_42(iVar2, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar2] = 6;
	iVar2++;
	if (func_479(103, 0, 0))
	{
		iVar0 = func_104(25);
		bVar1 = true;
		if (((GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 10) || !func_454(25)) || !func_424(25)) || (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_792(46), -1, 0, 0) || func_429(PLAYER::PLAYER_ID()) == 194)))
		{
			bVar1 = false;
		}
		func_596(25, iVar2, "GC_MENU51", bVar1);
		func_42(iVar2, "MPCT_CASH", 1, bVar1, 0, 0);
		func_595(func_65(25), 0);
	}
	else
	{
		func_42(iVar2, "GC_MENU51", 0, 1, 0, 0);
		func_42(iVar2, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar2] = 7;
	iVar2++;
	if (func_479(105, 0, 0))
	{
		iVar0 = func_104(25);
		bVar1 = true;
		if (((GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 10) || !func_454(26)) || !func_424(26)) || (iVar0 > 0 && (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_792(46), -1, 0, 0) || func_429(PLAYER::PLAYER_ID()) == 194)))
		{
			bVar1 = false;
		}
		func_596(26, iVar2, "GC_MENU52", bVar1);
		func_42(iVar2, "MPCT_CASH", 1, bVar1, 0, 0);
		func_595(func_65(26), 0);
	}
	else
	{
		func_42(iVar2, "GC_MENU52", 0, 1, 0, 0);
		func_42(iVar2, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar2] = 8;
	iVar2++;
	if (func_479(119, 0, 0))
	{
		iVar0 = func_104(35);
		bVar1 = true;
		if (iVar0 > 0)
		{
			bVar1 = false;
			GAMEPLAY::SET_BIT(&iLocal_1280, 0);
		}
		if ((!func_454(35) || !func_424(35)) || func_391())
		{
			bVar1 = false;
		}
		func_596(35, iVar2, "GC_MENU55", bVar1);
		func_42(iVar2, "MPCT_CASH", 1, bVar1, 0, 0);
		func_595(func_65(35), 0);
	}
	else
	{
		func_42(iVar2, "GC_MENU55", 0, 1, 0, 0);
		func_42(iVar2, "", 1, 1, 0, 0);
		func_592(15, 0);
	}
	Local_147.f_181.f_70[iVar2] = 9;
	iVar2++;
	func_40(-1);
	if (func_904())
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			func_111(237, "BB_SELECT", -1, 0);
			func_111(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_110(176, "BB_SELECT", -1);
			func_110(177, "BB_BACK", -1);
		}
		GAMEPLAY::SET_BIT(&(Local_147.f_359), 6);
	}
	func_109(Local_147.f_181.f_69, 1, 1);
	Local_147.f_181.f_2 = iVar2;
}

void func_876()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_1324, 3))
	{
		Local_147 = 12;
		StringCopy(&(Local_147.f_166), "LESTER", 16);
		Local_147.f_178 = 0;
		Local_147.f_180 = 2;
		StringCopy(&(Local_147.f_170), "HS3LEAU", 16);
		StringCopy(&(Local_147.f_174), "HS3LE_PM_2", 16);
		func_887(&(Local_147.f_1), Local_147.f_180, 0, &(Local_147.f_166), 0, 1);
		GAMEPLAY::CLEAR_BIT(&iLocal_1324, 3);
		GAMEPLAY::SET_BIT(&iLocal_1324, 4);
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_1324, 4))
	{
		func_1(Local_147.f_1, "HS3LEAU", "HS3LE_PM_2", &Local_1270, 1);
		iLocal_1286 = 0;
		func_32(4);
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_1324, 0))
	{
		UI::_SET_WARNING_MESSAGE_2("HUD_CONNPROB", "MPCT_CNCW", 36, 0, 0, -1, 0, 0, 1, 0);
		if (func_96(&uLocal_1284, 1000, 0))
		{
			if (func_885(201))
			{
				func_877(1);
				GAMEPLAY::SET_BIT(&iLocal_1324, 3);
			}
			else if (func_885(202))
			{
				func_1(Local_147.f_1, "CT_AUD", "MPCT_LGEN4", &Local_1270, 0);
				GAMEPLAY::CLEAR_BIT(&iLocal_1286, 0);
				func_32(4);
			}
		}
	}
}

void func_877(bool bParam0)
{
	if (func_392(PLAYER::PLAYER_ID()) && !bParam0)
	{
		return;
	}
	func_882(8517, -1);
	func_882(8518, -1);
	func_882(8519, -1);
	func_882(8520, -1);
	func_882(8521, -1);
	func_882(8522, -1);
	func_882(8523, -1);
	func_882(8524, -1);
	func_882(8525, -1);
	func_882(8526, -1);
	func_882(8527, -1);
	func_882(8528, -1);
	func_882(8530, -1);
	func_882(8532, -1);
	func_882(11505, -1);
	func_882(8802, -1);
	func_615(28081, 0, -1, 1);
	func_615(28082, 0, -1, 1);
	func_881();
	func_880(0);
	func_878();
	iVar0 = func_68(8723, -1, 0);
	GAMEPLAY::CLEAR_BIT(&iVar0, 29);
	GAMEPLAY::CLEAR_BIT(&iVar0, 30);
	func_608(8723, iVar0, -1, 1, 0);
	func_701(-1713398555, 18, 0);
}

void func_878()
{
	iVar2[0] = func_68(8828, -1, 0);
	iVar2[1] = func_68(8829, -1, 0);
	iVar2[2] = func_68(8830, -1, 0);
	iVar6 = 0;
	while (iVar6 < 77)
	{
		iVar0 = (iVar6 / 32);
		iVar1 = (iVar6 % 32);
		if (func_879(iVar6))
		{
			GAMEPLAY::CLEAR_BIT(&(iVar2[iVar0]), iVar1);
		}
		iVar6++;
	}
	func_608(8828, iVar2[0], -1, 1, 0);
	func_608(8829, iVar2[1], -1, 1, 0);
	func_608(8830, iVar2[2], -1, 1, 0);
}

int func_879(int iParam0)
{
	switch (iParam0)
	{
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 58:
		case 61:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 73:
		case 74:
			return 1;
		
		default:
	}
	return 0;
}

void func_880(bool bParam0)
{
	func_608(8801, 0, -1, 1, 0);
	if (bParam0)
	{
		func_701(-1713398555, 8, 0);
	}
}

void func_881()
{
	iVar0 = func_68(8723, -1, 0);
	if (GAMEPLAY::IS_BIT_SET(iVar0, 0))
	{
		GAMEPLAY::CLEAR_BIT(&iVar0, 0);
		Global_1696370.f_24 = iVar0;
		func_608(8723, iVar0, -1, 1, 0);
		func_701(-1713398555, 28, 0);
	}
}

void func_882(int iParam0, int iParam1)
{
	if (!func_884(iParam0))
	{
		func_608(iParam0, 0, iParam1, 0, 0);
	}
	else
	{
		func_883(iParam0, 0, iParam1, 0);
	}
}

void func_883(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_34(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_34(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_34(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_34(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_34(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_34(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_34(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_34(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_34(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_34(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_34(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_34(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_34(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_34(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_34(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_34(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_34(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_34(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_34(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_34(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_34(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_34(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_34(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_34(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_34(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_34(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_34(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_34(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_34(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_34(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_34(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_34(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_34(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_34(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_34(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_34(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_34(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_34(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_34(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_34(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_34(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_34(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_34(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_34(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_34(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_34(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_34(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_34(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_34(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_34(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_34(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_34(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_34(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_34(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_34(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_34(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_34(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_34(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_34(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_34(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_34(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_34(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_34(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_34(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_34(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_34(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_34(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_34(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_34(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_34(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_34(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_34(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_34(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_34(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_34(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_34(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_34(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_34(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_34(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_34(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_34(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_34(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_34(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_34(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_34(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_34(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_34(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_34(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_34(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_34(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_34(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_34(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_34(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_34(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_34(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_34(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_34(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_34(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_34(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_34(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_34(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_34(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_34(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_34(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_34(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_34(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_884(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return 1;
				break;
			}
	}
	return 0;
}

int func_885(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = func_577(iVar0);
	iVar2 = func_573(iVar0);
	if ((CONTROLS::IS_CONTROL_JUST_RELEASED(2, iParam0) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, iParam0)) || func_886(iParam0, &(Global_1377170.f_1060), 1))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1377170.f_1049[iVar1], iVar2))
		{
			GAMEPLAY::SET_BIT(&(Global_1377170.f_1049[iVar1]), iVar2);
			return 1;
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1377170.f_1049[iVar1], iVar2))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1377170.f_1049[iVar1]), iVar2);
	}
	return 0;
}

int func_886(int iParam0, var uParam1, int iParam2)
{
	iVar0 = (CONTROLS::GET_CONTROL_VALUE(2, 195) - 127);
	iVar1 = (CONTROLS::GET_CONTROL_VALUE(2, 196) - 127);
	iVar2 = (CONTROLS::GET_CONTROL_VALUE(2, 197) - 127);
	switch (iParam0)
	{
		case 189:
			if (iVar0 < -30)
			{
				if (*uParam1 < GAMEPLAY::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = GAMEPLAY::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 190:
			if (iVar0 > 30)
			{
				if (*uParam1 < GAMEPLAY::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = GAMEPLAY::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 188:
			if (iVar1 < -30)
			{
				if (*uParam1 < GAMEPLAY::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = GAMEPLAY::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 187:
			if (iVar1 > 30)
			{
				if (*uParam1 < GAMEPLAY::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = GAMEPLAY::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 194:
			if (iVar2 > 30)
			{
				if (*uParam1 < GAMEPLAY::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = GAMEPLAY::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 193:
			if (iVar2 < -30)
			{
				if (*uParam1 < GAMEPLAY::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = GAMEPLAY::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_887(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
	}
	(*uParam0)[iParam1] = iParam2;
	StringCopy(&(uParam0[iParam1]->f_1), sParam3, 24);
	uParam0[iParam1]->f_7 = 1;
	uParam0[iParam1]->f_8 = iParam4;
	uParam0[iParam1]->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (uParam0[iParam1]->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (uParam0[iParam1]->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_888()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_1286, 0))
	{
		UI::_SET_WARNING_MESSAGE_2("HUD_CONNPROB", "MPCT_CNCW", 36, 0, 0, -1, 0, 0, 1, 0);
		if (func_96(&uLocal_1284, 1000, 0))
		{
			if (func_885(201))
			{
				func_890(1, -1);
				func_889();
				GAMEPLAY::SET_BIT(&(Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_27), 6);
				func_1(Local_147.f_1, "CT_AUD", "MPCT_Lconf", &Local_1270, 0);
				GAMEPLAY::CLEAR_BIT(&iLocal_1286, 0);
				func_32(4);
			}
			else if (func_885(202))
			{
				func_1(Local_147.f_1, "CT_AUD", "MPCT_LGEN4", &Local_1270, 0);
				GAMEPLAY::CLEAR_BIT(&iLocal_1286, 0);
				func_32(4);
			}
		}
	}
}

void func_889()
{
	Var0.x = 1324051317;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.z = 1;
	iVar3 = func_92(0, 1);
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iVar3);
	}
}

void func_890(bool bParam0, int iParam1)
{
	iVar0 = func_396(PLAYER::PLAYER_ID(), 0);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (iVar0 != -1)
	{
		iVar1 = func_68(6424, -1, 0);
		switch (iVar0)
		{
			case 0:
				GAMEPLAY::CLEAR_BIT(&iVar1, 0);
				func_897(16, 0, 0, 0, 1);
				func_897(17, 0, 0, 0, 1);
				func_897(18, 0, 0, 0, 1);
				func_897(0, 0, 0, 0, 1);
				func_897(1, 0, 0, 0, 1);
				func_897(2, 0, 0, 0, 1);
				func_897(3, 0, 0, 0, 1);
				func_896();
				if (bParam0)
				{
					func_894(iVar0, -1);
				}
				break;
			
			case 1:
				GAMEPLAY::CLEAR_BIT(&iVar1, 1);
				func_897(19, 0, 0, 0, 1);
				func_897(20, 0, 0, 0, 1);
				func_897(21, 0, 0, 0, 1);
				func_897(22, 0, 0, 0, 1);
				func_897(23, 0, 0, 0, 1);
				func_897(4, 0, 0, 0, 1);
				func_897(5, 0, 0, 0, 1);
				func_897(6, 0, 0, 0, 1);
				func_897(7, 0, 0, 0, 1);
				func_897(8, 0, 0, 0, 1);
				func_896();
				if (bParam0)
				{
					func_894(iVar0, -1);
				}
				break;
			
			case 2:
				GAMEPLAY::CLEAR_BIT(&iVar1, 2);
				func_897(24, 0, 0, 0, 1);
				func_897(25, 0, 0, 0, 1);
				func_897(26, 0, 0, 0, 1);
				func_897(27, 0, 0, 0, 1);
				func_897(28, 0, 0, 0, 1);
				func_897(29, 0, 0, 0, 1);
				func_897(9, 0, 0, 0, 1);
				func_897(10, 0, 0, 0, 1);
				func_897(11, 0, 0, 0, 1);
				func_897(12, 0, 0, 0, 1);
				func_897(13, 0, 0, 0, 1);
				func_897(14, 0, 0, 0, 1);
				func_897(15, 0, 0, 0, 1);
				func_896();
				if (bParam0)
				{
					func_894(iVar0, -1);
				}
				break;
		}
		func_608(6424, iVar1, -1, 1, 0);
		func_893();
		func_891();
	}
}

void func_891()
{
	iVar0 = func_35();
	iVar2 = func_892(iVar0);
	iVar3 = GAMEPLAY::GET_PROFILE_SETTING(iVar2);
	if (GAMEPLAY::IS_BIT_SET(iVar3, 24))
	{
		GAMEPLAY::CLEAR_BIT(&iVar3, 24);
		bVar1 = true;
	}
	if (GAMEPLAY::IS_BIT_SET(iVar3, 25))
	{
		GAMEPLAY::CLEAR_BIT(&iVar3, 25);
		bVar1 = true;
	}
	if (GAMEPLAY::IS_BIT_SET(iVar3, 26))
	{
		GAMEPLAY::CLEAR_BIT(&iVar3, 26);
		bVar1 = true;
	}
	if (bVar1)
	{
		STATS::_0x0D01D20616FC73FB(iVar3, iVar0);
	}
}

int func_892(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_35();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_893()
{
	func_608(6517, 0, -1, 1, 0);
}

void func_894(int iParam0, int iParam1)
{
	iVar0 = func_68(6424, -1, 0);
	iVar1 = NETWORK::_GET_POSIX_TIME();
	bVar3 = GAMEPLAY::IS_BIT_SET(iVar0, 13);
	switch (iParam0)
	{
		case 0:
			if (bVar3)
			{
				iVar2 = (iVar1 + func_895(iParam0, iParam1));
				func_608(6497, iVar2, -1, 1, 0);
			}
			if (!GAMEPLAY::IS_BIT_SET(iVar0, 15))
			{
				GAMEPLAY::SET_BIT(&iVar0, 15);
				func_608(6424, iVar0, -1, 1, 0);
			}
			break;
		
		case 1:
			if (bVar3)
			{
				iVar2 = (iVar1 + func_895(iParam0, iParam1));
				func_608(6498, iVar2, -1, 1, 0);
			}
			if (!GAMEPLAY::IS_BIT_SET(iVar0, 16))
			{
				GAMEPLAY::SET_BIT(&iVar0, 16);
				func_608(6424, iVar0, -1, 1, 0);
			}
			break;
		
		case 2:
			if (bVar3)
			{
				iVar2 = (iVar1 + func_895(iParam0, iParam1));
				func_608(6499, iVar2, -1, 1, 0);
			}
			if (!GAMEPLAY::IS_BIT_SET(iVar0, 17))
			{
				GAMEPLAY::SET_BIT(&iVar0, 17);
				func_608(6424, iVar0, -1, 1, 0);
			}
			break;
	}
	if ((func_347() == 0 && !Global_1312877) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_701(-1564914501, 28, 0);
	}
}

int func_895(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 2:
					return Global_262145.f_22857;
				
				case 3:
					return Global_262145.f_22860;
				
				case 4:
					return Global_262145.f_22863;
				
				default:
			}
			return Global_262145.f_22855;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 2:
					return Global_262145.f_22858;
				
				case 3:
					return Global_262145.f_22861;
				
				case 4:
					return Global_262145.f_22864;
				
				default:
			}
			return Global_262145.f_22856;
			break;
		
		case 2:
			switch (iParam1)
			{
				case 2:
					return Global_262145.f_22859;
				
				case 3:
					return Global_262145.f_22862;
				
				case 4:
					return Global_262145.f_22865;
				
				default:
			}
			return Global_262145.f_22866;
			break;
	}
	return 3600;
}

void func_896()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1741, 5))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1741), 5);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1740, 26))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1740), 26);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1741, 6))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1741), 6);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1740, 27))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1740), 27);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1741, 8))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1741), 8);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1740, 28))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1740), 28);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1741, 11))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1741), 11);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1740, 29))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1740), 29);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1741, 9))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1741), 9);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1742, 0))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1742), 0);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1742, 1))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1742), 1);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1742, 2))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1742), 2);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1742, 3))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1742), 3);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1742, 4))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1742), 4);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1742, 5))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1742), 5);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1742, 6))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1742), 6);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1742, 7))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1742), 7);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1742, 8))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1742), 8);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1742, 9))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1742), 9);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1742, 10))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1742), 10);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1742, 11))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1742), 11);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1742, 12))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1742), 12);
	}
}

void func_897(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_901(iParam0))
	{
		iVar0 = func_563(iParam0);
		iVar1 = func_68(5659, -1, 0);
		iVar2 = func_68(5661, -1, 0);
		if (bParam1)
		{
			if (!GAMEPLAY::IS_BIT_SET(iVar1, iVar0))
			{
				GAMEPLAY::SET_BIT(&iVar1, iVar0);
				func_608(5659, iVar1, -1, 1, 0);
				if (!GAMEPLAY::IS_BIT_SET(iVar2, iVar0))
				{
					GAMEPLAY::SET_BIT(&iVar2, iVar0);
					func_608(5661, iVar2, -1, 1, 0);
				}
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar1, iVar0))
		{
			GAMEPLAY::CLEAR_BIT(&iVar1, iVar0);
			func_608(5659, iVar1, -1, 1, 0);
		}
		Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_23 = iVar1;
	}
	else if (func_900(iParam0))
	{
		iVar0 = func_899(iParam0);
		iVar1 = func_68(6165, -1, 0);
		iVar2 = func_68(6166, -1, 0);
		iVar3 = func_68(6518, -1, 0);
		if (bParam1)
		{
			if (!GAMEPLAY::IS_BIT_SET(iVar1, iVar0))
			{
				GAMEPLAY::SET_BIT(&iVar1, iVar0);
				if (bParam2)
				{
					GAMEPLAY::SET_BIT(&iVar1, func_898(iVar0));
				}
				func_608(6165, iVar1, -1, 1, 0);
				if (bParam3)
				{
					GAMEPLAY::SET_BIT(&iVar3, iVar0);
					func_608(6518, iVar3, -1, 1, 0);
				}
				if (!GAMEPLAY::IS_BIT_SET(iVar2, iVar0))
				{
					GAMEPLAY::SET_BIT(&iVar2, iVar0);
					func_608(6166, iVar2, -1, 1, 0);
				}
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iVar1, iVar0))
		{
			GAMEPLAY::CLEAR_BIT(&iVar1, iVar0);
			GAMEPLAY::CLEAR_BIT(&iVar1, func_898(iVar0));
			func_608(6165, iVar1, -1, 1, 0);
			if (GAMEPLAY::IS_BIT_SET(iVar3, iVar0))
			{
				GAMEPLAY::CLEAR_BIT(&iVar3, iVar0);
				func_608(6518, iVar3, -1, 1, 0);
			}
		}
		Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_24 = iVar1;
		Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_25 = iVar3;
		if (func_347() == 0 && !Global_1312877)
		{
			if (bParam4)
			{
				func_701(-1564914501, 28, 0);
			}
		}
	}
	if (Global_1688696.f_812.f_2001 == 0)
	{
		Global_1688696.f_812.f_2001 = 1;
	}
}

int func_898(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 2:
			return 16;
		
		case 3:
			return 17;
		
		case 4:
			return 18;
		
		case 5:
			return 19;
		
		case 6:
			return 20;
		
		case 7:
			return 21;
		
		case 8:
			return 22;
		
		case 9:
			return 23;
		
		case 10:
			return 24;
		
		case 11:
			return 25;
		
		case 12:
			return 26;
		
		case 13:
			return 27;
		
		default:
	}
	return -1;
}

int func_899(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 19:
			return 3;
		
		case 20:
			return 4;
		
		case 21:
			return 5;
		
		case 22:
			return 6;
		
		case 23:
			return 7;
		
		case 24:
			return 8;
		
		case 25:
			return 9;
		
		case 26:
			return 10;
		
		case 27:
			return 11;
		
		case 28:
			return 12;
		
		case 29:
			return 13;
		
		default:
	}
	return -1;
}

int func_900(int iParam0)
{
	switch (iParam0)
	{
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
			return 1;
		
		default:
	}
	return 0;
}

int func_901(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			return 1;
		
		default:
	}
	return 0;
}

void func_902()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_1283, 0))
	{
		UI::_SET_WARNING_MESSAGE_2("HUD_CONNPROB", "MPCT_CNCW", 36, 0, 0, -1, 0, 0, 1, 0);
		if (func_96(&uLocal_1284, 1000, 0))
		{
			if (func_885(201))
			{
				func_903();
				func_1(Local_147.f_1, "CT_AUD", "MPCT_Lconf", &Local_1270, 0);
				GAMEPLAY::CLEAR_BIT(&iLocal_1283, 0);
				func_32(4);
			}
			else if (func_885(202))
			{
				func_1(Local_147.f_1, "CT_AUD", "MPCT_LGEN4", &Local_1270, 0);
				GAMEPLAY::CLEAR_BIT(&iLocal_1283, 0);
				func_32(4);
			}
		}
	}
}

void func_903()
{
	if (!func_414())
	{
		return;
	}
	Global_2405056 = 1;
}

int func_904()
{
	if (func_300())
	{
		return 0;
	}
	return 1;
}

void func_905()
{
	if (func_1148())
	{
		func_1094(Local_147.f_360);
	}
	else if (((!UI::IS_PAUSE_MENU_ACTIVE() && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !UI::IS_WARNING_MESSAGE_ACTIVE()) && !func_22(8, -1))
	{
		iVar0 = Local_147.f_181.f_69;
		iVar15 = 0;
		iVar16 = 0;
		if (CONTROLS::_IS_INPUT_DISABLED(0))
		{
			iVar17 = Global_4268497;
			CONTROLS::SET_INPUT_EXCLUSIVE(2, 237);
			CONTROLS::SET_INPUT_EXCLUSIVE(2, 238);
			CONTROLS::SET_INPUT_EXCLUSIVE(2, 241);
			CONTROLS::SET_INPUT_EXCLUSIVE(2, 242);
			CONTROLS::SET_INPUT_EXCLUSIVE(2, 239);
			CONTROLS::SET_INPUT_EXCLUSIVE(2, 240);
			func_1092(0, &uLocal_1336);
			switch (Local_147.f_178)
			{
				case 1:
					func_1091(&fVar18, &fVar20, &fVar19, &fVar21, 76);
					fVar18 = (fVar18 - (fVar19 / 2f));
					fVar20 = (fVar20 - (fVar21 / 2f));
					fVar20 = (fVar20 + 0.034722f);
					Global_4268497 = func_1089(fVar18, fVar20, 0.222f, 0.034722f, 0.034722f, func_1090(Local_147.f_181.f_2, 0, 16), 255, 0, 0);
					if (Global_4268497 < 0 || Global_4268497 > 15)
					{
						Global_4268497 = -1;
						iVar17 = -1;
					}
					else
					{
						iVar22 = (Local_147.f_181.f_69 - 16) + 1;
						if (iVar22 < 0)
						{
							iVar22 = 0;
						}
						iVar17 = (Global_4268497 + iVar22);
					}
					break;
				
				case 5:
				case 7:
				case 12:
				case 13:
				case 14:
				case 15:
				case 6:
				case 17:
				case 18:
				case 22:
				case 24:
					func_1086(0, 0, GAMEPLAY::IS_BIT_SET(iLocal_1277, 2), 1);
					break;
				
				case 10:
					if (iLocal_1222 == -1 && iLocal_1223)
					{
						func_1086(0, 0, 0, 1);
					}
					else
					{
						func_1086(0, 1, 0, 1);
					}
					break;
				
				default:
					func_1086(0, 0, 0, 1);
					break;
			}
			if (func_1085())
			{
				if (Local_147.f_181.f_69 == iVar17)
				{
					if (Local_147.f_178 == 2 && Local_147.f_181.f_69 == 0)
					{
						iVar16 = func_1084(0.15f);
						if (iVar16 == -999)
						{
							iVar15 = 1;
						}
					}
					else
					{
						iVar15 = 1;
					}
				}
				else
				{
					Local_147.f_181.f_69 = iVar17;
					func_109(Local_147.f_181.f_69, 1, 1);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
				}
				iLocal_911 = 1;
			}
		}
		if (Local_147.f_181.f_2 > 0)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_147.f_181, 0))
			{
				if ((CONTROLS::IS_CONTROL_PRESSED(2, 172) || (func_290(0) && CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 172))) || func_1083())
				{
					func_1082();
					GAMEPLAY::SET_BIT(&(Local_147.f_181), 0);
					func_313(&uLocal_597);
				}
				else if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 181))
				{
					func_1082();
					GAMEPLAY::SET_BIT(&(Local_147.f_181), 0);
					func_313(&uLocal_597);
				}
			}
			else if (func_1081(172) && func_1081(181))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_147.f_181), 0);
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_147.f_181, 1))
			{
				if ((CONTROLS::IS_CONTROL_PRESSED(2, 173) || (func_290(0) && CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 173))) || func_1080())
				{
					func_1078();
					GAMEPLAY::SET_BIT(&(Local_147.f_181), 1);
					func_313(&uLocal_597);
				}
				else if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 180))
				{
					func_1078();
					GAMEPLAY::SET_BIT(&(Local_147.f_181), 1);
					func_313(&uLocal_597);
				}
			}
			else if (func_1081(173) && func_1081(180))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_147.f_181), 1);
			}
			if (Local_147.f_181.f_69 < 0)
			{
				Local_147.f_181.f_69 = (Local_147.f_181.f_2 - 1);
			}
			if (Local_147.f_181.f_69 > (Local_147.f_181.f_2 - 1))
			{
				Local_147.f_181.f_69 = 0;
			}
			if (Local_147.f_181.f_69 != iVar0)
			{
				iLocal_555 = 0;
				GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
			}
		}
		if (Local_147.f_181.f_69 < 32)
		{
			iVar1 = Local_147.f_181.f_103[Local_147.f_181.f_69];
			if (!GAMEPLAY::IS_BIT_SET(Local_147.f_181, 2))
			{
				if ((CONTROLS::IS_CONTROL_PRESSED(2, 174) || (func_290(0) && CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 174))) || iVar16 == -1)
				{
					func_1077();
					GAMEPLAY::SET_BIT(&(Local_147.f_181), 2);
					func_313(&uLocal_597);
				}
			}
			else if (func_1081(174))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_147.f_181), 2);
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_147.f_181, 3))
			{
				if ((CONTROLS::IS_CONTROL_PRESSED(2, 175) || (func_290(0) && CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 175))) || iVar16 == 1)
				{
					func_1076();
					GAMEPLAY::SET_BIT(&(Local_147.f_181), 3);
					func_313(&uLocal_597);
				}
			}
			else if (func_1081(175))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_147.f_181), 3);
			}
			if (Local_147.f_181.f_103[Local_147.f_181.f_69] < Local_147.f_181.f_3[Local_147.f_181.f_69])
			{
				Local_147.f_181.f_103[Local_147.f_181.f_69] = Local_147.f_181.f_36[Local_147.f_181.f_69];
			}
			if (Local_147.f_181.f_103[Local_147.f_181.f_69] > Local_147.f_181.f_36[Local_147.f_181.f_69])
			{
				Local_147.f_181.f_103[Local_147.f_181.f_69] = Local_147.f_181.f_3[Local_147.f_181.f_69];
			}
			if (Local_147.f_181.f_103[Local_147.f_181.f_69] != iVar1)
			{
				GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
				iLocal_555 = 0;
			}
		}
		bVar23 = false;
		bVar24 = false;
		if (!GAMEPLAY::IS_BIT_SET(Local_147.f_181, 4))
		{
			if (func_1075() || iVar15)
			{
				if (func_1072())
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", 1);
					GAMEPLAY::SET_BIT(&(Local_147.f_181), 4);
					bVar23 = true;
					func_936();
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FREEMODE_SOUNDSET", 1);
				}
			}
		}
		else if (!CONTROLS::IS_CONTROL_PRESSED(2, 176))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_147.f_181), 4);
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_147.f_181, 5))
		{
			if (!bVar23)
			{
				if (func_935() || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 238))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", 1);
					GAMEPLAY::SET_BIT(&(Local_147.f_181), 5);
					bVar24 = true;
					func_906();
				}
			}
		}
		else if (!CONTROLS::IS_CONTROL_PRESSED(2, 177))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_147.f_181), 5);
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_147.f_181, 5))
		{
			if (!bVar23 && !bVar24)
			{
				if (CONTROLS::_IS_INPUT_DISABLED(0))
				{
					bVar25 = CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 37);
				}
				else
				{
					bVar25 = CONTROLS::IS_CONTROL_PRESSED(2, 236);
				}
				if (bVar25)
				{
					if (func_1173() == 1 && Local_147.f_178 == 1)
					{
						if (func_61(Local_147.f_181.f_136[Local_147.f_181.f_69], 0, 1))
						{
							Var2 = { func_49(Local_147.f_181.f_136[Local_147.f_181.f_69]) };
							NETWORK::NETWORK_SHOW_PROFILE_UI(&Var2);
						}
					}
					GAMEPLAY::SET_BIT(&(Local_147.f_181), 5);
				}
			}
		}
		else
		{
			if (CONTROLS::_IS_INPUT_DISABLED(0))
			{
				bVar26 = CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 37);
			}
			else
			{
				bVar26 = CONTROLS::IS_CONTROL_PRESSED(2, 236);
			}
			if (!bVar26)
			{
				GAMEPLAY::CLEAR_BIT(&(Local_147.f_181), 5);
			}
		}
	}
}

void func_906()
{
	iLocal_911 = 1;
	switch (Local_147.f_178)
	{
		case 0:
			func_934();
			iLocal_912 = 1;
			break;
		
		case 5:
			func_933();
			iLocal_912 = 1;
			break;
		
		case 1:
			func_932();
			break;
		
		case 2:
			func_931();
			break;
		
		case 3:
			func_930();
			break;
		
		case 4:
			func_929();
			iLocal_912 = 1;
			break;
		
		case 7:
			func_928();
			iLocal_912 = 1;
			break;
		
		case 6:
			func_927();
			iLocal_912 = 1;
			break;
		
		case 8:
			func_926();
			break;
		
		case 9:
			func_925();
			if (!Global_2537071.f_870)
			{
				iLocal_912 = 1;
			}
			break;
		
		case 10:
			func_920();
			iLocal_912 = 1;
			break;
		
		case 11:
			if ((iLocal_1329 == 0 && iLocal_1333 == 0) && iLocal_1331 == 0)
			{
				func_919();
				iLocal_912 = 1;
			}
			break;
		
		case 12:
			func_918();
			iLocal_912 = 1;
			break;
		
		case 13:
			func_917();
			iLocal_912 = 1;
			break;
		
		case 14:
			func_916();
			iLocal_912 = 1;
			break;
		
		case 15:
			func_915();
			iLocal_912 = 1;
			break;
		
		case 16:
			func_914();
			break;
		
		case 17:
			func_858();
			break;
		
		case 22:
			func_913();
			break;
		
		case 18:
			func_912();
			break;
		
		case 19:
			func_911();
			break;
		
		case 20:
			func_910();
			break;
		
		case 21:
			func_909();
			break;
		
		case 23:
			func_908();
			break;
		
		case 24:
			func_907();
			iLocal_912 = 1;
			break;
	}
}

void func_907()
{
	Local_147.f_178 = 23;
	GAMEPLAY::CLEAR_BIT(&iLocal_1277, 2);
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	Local_147.f_181.f_69 = uLocal_1279;
}

void func_908()
{
	if (!func_497(PLAYER::PLAYER_ID(), 12))
	{
		func_1(Local_147.f_1, "CAGTAU", "CAGT_PM_3", &Local_1270, 0);
		func_32(4);
	}
}

void func_909()
{
	Local_147.f_178 = 20;
	GAMEPLAY::CLEAR_BIT(&iLocal_1277, 2);
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	Local_147.f_181.f_69 = uLocal_1279;
}

void func_910()
{
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	func_32(4);
}

void func_911()
{
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	func_32(4);
}

void func_912()
{
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	func_32(4);
}

void func_913()
{
	Local_147.f_178 = 0;
	GAMEPLAY::CLEAR_BIT(&iLocal_1277, 2);
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	Local_147.f_181.f_69 = uLocal_1279;
}

void func_914()
{
	StringCopy(&Var0, "MPCT_REPOL_", 16);
	StringIntConCat(&Var0, iLocal_1276, 16);
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	func_1(Local_147.f_1, "CT_AUD", &Var0, &Local_1270, 0);
	func_32(4);
}

void func_915()
{
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	func_32(4);
}

void func_916()
{
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	func_32(4);
}

void func_917()
{
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	func_32(4);
}

void func_918()
{
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	func_32(4);
}

void func_919()
{
	if (!bLocal_521 && iLocal_522 > -1)
	{
		Local_147.f_181.f_69 = uLocal_523;
		func_720();
	}
	else if (!Global_1322852)
	{
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
		func_32(4);
	}
	else if (iLocal_907 != 0)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", 1);
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	}
}

void func_920()
{
	if (func_744())
	{
		return;
	}
	if (func_745())
	{
		func_922();
	}
	else
	{
		func_921();
	}
}

void func_921()
{
	iLocal_1222 = -1;
	iLocal_1223 = 0;
	if (GAMEPLAY::IS_BIT_SET(Local_147.f_359, 17))
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 7))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
		func_32(4);
	}
}

void func_922()
{
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	func_923(iLocal_1222);
	iLocal_1222 = -1;
	iLocal_1223 = 0;
}

void func_923(int iParam0)
{
	if (iParam0 != -1)
	{
		Local_147.f_181.f_69 = func_924(iParam0);
		return;
	}
}

int func_924(int iParam0)
{
	iVar1 = iLocal_1257;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iLocal_1257[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar0;
}

void func_925()
{
	if (Global_2537071.f_5900)
	{
		Local_147.f_178 = 19;
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
		StringCopy(&(Local_147.f_174), "APCAL_GENOH", 16);
		func_1(Local_147.f_1, &(Local_147.f_170), &(Local_147.f_174), &Local_1270, 1);
		Local_147.f_181.f_69 = 2;
		Global_2537071.f_5900 = 0;
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
		func_32(4);
	}
}

void func_926()
{
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	Local_147.f_181.f_69 = 4;
	Local_147.f_178 = 1;
}

void func_927()
{
	Local_147.f_178 = 9;
	GAMEPLAY::CLEAR_BIT(&iLocal_1277, 2);
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	Local_147.f_181.f_69 = uLocal_1279;
}

void func_928()
{
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	func_32(4);
}

void func_929()
{
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	func_32(4);
}

void func_930()
{
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	Local_147.f_181.f_69 = 1;
	Local_147.f_178 = 1;
}

void func_931()
{
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
	Local_147.f_181.f_69 = 0;
	Local_147.f_178 = 1;
}

void func_932()
{
	switch (Local_147.f_179)
	{
		case 0:
			Local_147.f_178 = 0;
			GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
			Local_147.f_181.f_69 = 0;
			iLocal_516 = 1;
			break;
		
		case 1:
			Local_147.f_178 = 5;
			GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
			Local_147.f_181.f_69 = 1;
			iLocal_516 = 1;
			break;
		
		case 3:
			Local_147.f_178 = 4;
			GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
			Local_147.f_181.f_69 = 4;
			iLocal_516 = 1;
			break;
	}
}

void func_933()
{
	func_32(4);
}

void func_934()
{
	func_32(4);
}

int func_935()
{
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (((CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177) && !CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return 1;
		}
	}
	else if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177))
	{
		return 1;
	}
	return 0;
}

void func_936()
{
	iLocal_911 = 1;
	switch (Local_147.f_178)
	{
		case 0:
			func_1066();
			break;
		
		case 5:
			func_1064();
			break;
		
		case 1:
			func_1062();
			break;
		
		case 2:
			func_1061();
			break;
		
		case 3:
			func_1058();
			break;
		
		case 4:
			func_1041();
			break;
		
		case 7:
			func_1040();
			break;
		
		case 6:
			func_1018();
			break;
		
		case 8:
			func_1017();
			break;
		
		case 9:
			func_1015();
			break;
		
		case 10:
			func_983();
			break;
		
		case 11:
			func_982();
			break;
		
		case 12:
			func_981();
			break;
		
		case 13:
			func_980();
			break;
		
		case 14:
			func_979();
			break;
		
		case 15:
			func_978();
			break;
		
		case 16:
			func_976();
			break;
		
		case 17:
			func_975();
			break;
		
		case 22:
			func_971();
			break;
		
		case 18:
			func_970();
			break;
		
		case 19:
			func_966();
			break;
		
		case 20:
			func_964();
			break;
		
		case 21:
			func_956();
			break;
		
		case 23:
			func_945();
			break;
		
		case 24:
			func_937();
			break;
	}
}

void func_937()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_1277, 2) && Local_147.f_181.f_69 == 6)
	{
		func_907();
	}
	if (Global_262145.f_26329)
	{
		func_491();
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_1323, 2))
	{
		func_491();
		return;
	}
	if (func_944())
	{
		func_943();
	}
	else
	{
		func_942();
	}
	func_72(&(Global_2451426.f_4308.f_197[60]), 1, 0);
	func_869(60, -1, -1);
	func_939(func_941(Local_147.f_181.f_69));
	func_938(0, Local_147.f_181.f_69, "CM_VEH_REQUEST");
	if (!NETWORK::_0x82377B65E943F72D(PLAYER::PLAYER_ID()))
	{
		func_938(0, 0, "CM_CONTACT_LIMO");
	}
	else
	{
		func_938(0, 1, "CM_CONTACT_LIMO");
	}
	func_32(4);
}

int func_938(int iParam0, int iParam1, char* sParam2)
{
	if (func_90())
	{
		func_78(-1693570755, iParam0, &iVar0, 0, 1, 0);
		StringCopy(&(Global_4263954[iVar0].f_14.f_26), sParam2, 32);
		Global_4263954[iVar0] = iParam1;
		return iVar0;
	}
	else
	{
		unk_0xFB43929E288533F1(iParam0, 0, 1, sParam2, iParam1);
	}
	return -1;
}

void func_939(var uParam0)
{
	if (!func_501(PLAYER::PLAYER_ID()))
	{
		func_940(15);
		Global_1628237[PLAYER::PLAYER_ID()].f_11.f_300 = uParam0;
	}
	else
	{
		func_940(18);
		Global_1628237[PLAYER::PLAYER_ID()].f_11.f_300 = uParam0;
	}
}

void func_940(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_6), iParam0);
}

int func_941(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 330661258;
		
		case 1:
			return 1581459400;
		
		case 2:
			return 1909141499;
		
		case 3:
			return 1123216662;
		
		case 4:
			return -394074634;
		
		case 5:
			return -1995326987;
		
		default:
	}
	return 0;
}

void func_942()
{
	func_1(Local_147.f_1, "CAGTAU", "CAGT_PM_5", &Local_1270, 0);
}

void func_943()
{
	func_1(Local_147.f_1, "CAGTAU", "CAGT_PM_9", &Local_1270, 0);
}

int func_944()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_945()
{
	if (func_497(PLAYER::PLAYER_ID(), 12))
	{
		return;
	}
	switch (Local_147.f_181.f_69)
	{
		case 0:
			if (Global_262145.f_26327)
			{
				func_491();
				return;
			}
			if (func_488())
			{
				func_491();
				return;
			}
			if (!func_486())
			{
				func_491();
				return;
			}
			func_948(-1);
			func_72(&(Local_1317.f_4), 0, 0);
			func_940(12);
			if (func_490())
			{
				func_489(12);
				func_32(4);
			}
			break;
		
		case 1:
			if (Global_262145.f_26328)
			{
				func_491();
				return;
			}
			if (!GAMEPLAY::IS_BIT_SET(iLocal_1323, 1))
			{
				func_491();
				return;
			}
			if (func_944())
			{
				func_947();
			}
			else
			{
				func_942();
			}
			func_72(&(Global_2451426.f_4308.f_197[59]), 1, 0);
			func_869(59, -1, -1);
			func_946();
			if (!NETWORK::_0x82377B65E943F72D(PLAYER::PLAYER_ID()))
			{
				func_938(0, 0, "CM_CONTACT_LIMO");
			}
			else
			{
				func_938(0, 1, "CM_CONTACT_LIMO");
			}
			func_32(4);
			break;
		
		case 2:
			if (Global_262145.f_26329)
			{
				func_491();
				return;
			}
			if (!GAMEPLAY::IS_BIT_SET(iLocal_1323, 2))
			{
				func_491();
				return;
			}
			Local_147.f_178 = 24;
			uLocal_1278 = Local_147.f_181.f_70[Local_147.f_181.f_69];
			GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
			uLocal_1279 = Local_147.f_181.f_69;
			Local_147.f_181.f_69 = 0;
			break;
		
		case 3:
			func_32(4);
			break;
	}
}

void func_946()
{
	if (!func_541(PLAYER::PLAYER_ID()))
	{
		func_940(9);
	}
	else
	{
		func_940(14);
	}
}

void func_947()
{
	func_1(Local_147.f_1, "CAGTAU", "CAGT_PM_8", &Local_1270, 0);
}

void func_948(int iParam0)
{
	if (!func_955(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (iParam0 != -1)
	{
		func_954(iParam0);
	}
	func_949(243, -1);
}

void func_949(int iParam0, int iParam1)
{
	if (func_283() || !func_836(1))
	{
		if (!func_953(PLAYER::PLAYER_ID(), 0))
		{
			func_952(iParam0);
			func_950(iParam0, func_92(1, 1), func_496(), func_495(), func_951(), iParam1);
		}
	}
}

void func_950(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	Var0 = 848786118;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = uParam5;
	if (!iParam1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 7, iParam1);
	}
}

var func_951()
{
	return Global_2537071.f_5124.f_341;
}

void func_952(var uParam0)
{
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_32 = uParam0;
}

int func_953(int iParam0, int iParam1)
{
	if (func_430(iParam0, 0))
	{
		return func_136(Global_1628237[iParam0].f_11.f_33) == iParam1;
	}
	return 0;
}

void func_954(int iParam0)
{
	if (Global_2537071.f_5124.f_339 != iParam0)
	{
		Global_2537071.f_5124.f_339 = iParam0;
	}
}

bool func_955(int iParam0)
{
	return Global_1590535[iParam0].f_274.f_369 != 0;
}

void func_956()
{
	iVar2 = -1;
	bVar3 = false;
	iVar4 = 0;
	iVar1 = func_330();
	if (!func_329())
	{
		bVar3 = true;
	}
	if (!bVar3)
	{
		if (iVar1 == 0)
		{
			if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_65(44), 0, 1, 0, -1, 0))
			{
				iVar4 = func_960(2);
				if (iVar4 == 0)
				{
					iVar5 = func_104(44);
					if (iVar5 > 0)
					{
						func_71(20, iVar5);
						iVar2 = 1;
					}
					else
					{
						GAMEPLAY::SET_BIT(&(Local_147.f_359), 10);
						Local_147.f_360 = 44;
						Local_147.f_358 = func_8();
						Global_2537071.f_842 = 1;
						func_958(func_92(1, 1), Local_147.f_360, func_8(), 0);
					}
				}
			}
			else
			{
				bVar0 = true;
			}
		}
	}
	if (iVar4 == 1)
	{
		func_71(24, 0);
		iVar2 = 1;
	}
	else if (iVar4 == 5)
	{
		func_71(1, 0);
		iVar2 = 1;
	}
	else if (iVar4 == 6)
	{
		func_71(29, 0);
		iVar2 = 1;
	}
	else if (iVar1 != 0)
	{
		if (iVar1 == 1)
		{
			func_71(1, 0);
			iVar2 = 2;
		}
		else if (iVar1 == 2)
		{
			func_71(26, 0);
			iVar2 = 2;
		}
	}
	else if (bVar0)
	{
		GAMEPLAY::SET_BIT(&iLocal_1277, 0);
		func_71(0, 0);
		iVar2 = 0;
	}
	else if (bVar3)
	{
		iVar2 = 1;
		func_957(21, 0);
	}
	switch (iVar2)
	{
		case 0:
			break;
		
		case 1:
			if (func_332())
			{
				func_1(Local_147.f_1, "EXCALAU", "EXCAL_HENEGM", &Local_1270, 0);
			}
			else
			{
				func_1(Local_147.f_1, "EXCALAU", "EXCAL_HENEGF", &Local_1270, 0);
			}
			break;
		
		case 2:
			if (func_332())
			{
				func_1(Local_147.f_1, "EXCALAU", "EXCAL_HPROBM", &Local_1270, 0);
			}
			else
			{
				func_1(Local_147.f_1, "EXCALAU", "EXCAL_HPROBF", &Local_1270, 0);
			}
			break;
	}
}

void func_957(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		Local_557 = { func_73(iParam1, 0, 0) };
	}
	func_72(&uLocal_561, 0, 0);
	GAMEPLAY::SET_BIT(&iLocal_556, iParam0);
}

void func_958(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0 = -290471766;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_5 = iParam3;
	Var0.f_2 = iParam2;
	if (!iParam0 == 0)
	{
		if (iParam3 == 0)
		{
			Global_2451426.f_4308[Var0.f_3] = 0;
			func_72(&(Global_2451426.f_4308.f_66[iParam1]), 1, 0);
			Global_2451426.f_4308.f_394 = NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_959(), -1, 0);
		}
		else
		{
			Global_2537071.f_4467.f_1 = 0;
			func_72(&(Global_2537071.f_4467.f_2), 0, 0);
		}
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

char* func_959()
{
	switch (Global_2463024)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_960(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_963(0))
			{
				return 1;
			}
			if (func_963(1) || func_963(2))
			{
				return 5;
			}
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
			{
				return 7;
			}
			break;
		
		case 1:
			if (func_963(1))
			{
				return 1;
			}
			if (func_963(0))
			{
				return 2;
			}
			if (func_963(2))
			{
				return 4;
			}
			if (func_962(PLAYER::PLAYER_ID(), 2) || func_961())
			{
				return 6;
			}
			break;
		
		case 2:
			if (func_963(2))
			{
				return 1;
			}
			if (func_963(0) || func_963(1))
			{
				return 5;
			}
			if ((Global_1590535[PLAYER::PLAYER_ID()] == 2 || Global_1590535[PLAYER::PLAYER_ID()] == 1) || Global_1590535[PLAYER::PLAYER_ID()] == 3)
			{
				return 6;
			}
			break;
		
		case 4:
			if (func_963(2))
			{
				return 4;
			}
			break;
	}
	return 0;
}

bool func_961()
{
	return Global_1574420;
}

int func_962(int iParam0, int iParam1)
{
	if (func_347() != 0)
	{
		return 0;
	}
	if (!func_319(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590535[iVar0] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_963(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if ((GAMEPLAY::IS_BIT_SET(Global_1573353.f_171[8], PLAYER::PLAYER_ID()) || Global_2537071.f_833 == 1) || Global_2537071.f_843 == 1)
			{
				return 1;
			}
			break;
		
		case 1:
			if (GAMEPLAY::IS_BIT_SET(Global_1573353.f_171[10], PLAYER::PLAYER_ID()) || Global_2537071.f_4389 == 1)
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_2537071.f_835 == 1 || GAMEPLAY::IS_BIT_SET(Global_1573353.f_171[13], PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		
		case 3:
			iVar0 = PLAYER::PLAYER_ID();
			if (Global_2425662[iVar0].f_239)
			{
				return 1;
			}
			break;
		
		case 4:
			if (Global_2537071.f_4390 || GAMEPLAY::IS_BIT_SET(Global_1573353.f_171[11], PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_964()
{
	bVar2 = false;
	switch (Local_147.f_181.f_69)
	{
		case 0:
			if (func_454(43))
			{
				if (func_424(43))
				{
					func_965();
				}
				else
				{
					func_71(29, 0);
					bVar2 = true;
				}
			}
			else
			{
				func_71(1, 0);
				bVar2 = true;
			}
			break;
		
		case 1:
			if (func_330() != 0)
			{
				if (func_332())
				{
					func_1(Local_147.f_1, "EXCALAU", "EXCAL_HPROBM", &Local_1270, 0);
				}
				else
				{
					func_1(Local_147.f_1, "EXCALAU", "EXCAL_HPROBF", &Local_1270, 0);
				}
			}
			else if (func_454(44))
			{
				if (func_424(44))
				{
					func_956();
				}
				else
				{
					bVar2 = true;
					func_71(29, 0);
				}
			}
			else
			{
				bVar2 = true;
				func_71(1, 0);
			}
			break;
	}
	if (bVar2)
	{
		if (func_332())
		{
			func_1(Local_147.f_1, "EXCALAU", "EXCAL_NEGM", &Local_1270, 0);
		}
		else
		{
			func_1(Local_147.f_1, "EXCALAU", "EXCAL_NEGF", &Local_1270, 0);
		}
	}
	if (bVar1)
	{
		func_71(1, 0);
	}
	else if (bVar0)
	{
		func_71(0, 0);
	}
}

void func_965()
{
	iVar2 = -1;
	iVar3 = 0;
	if (func_333(func_337()))
	{
		bVar1 = true;
	}
	if (Local_147.f_181.f_69 == 0)
	{
		if (bVar1)
		{
			if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_65(43), 0, 1, 0, -1, 0))
			{
				iVar3 = func_960(5);
				if (iVar3 == 0)
				{
					iVar4 = func_104(43);
					if (iVar4 > 0)
					{
						func_71(20, iVar4);
						func_1(Local_147.f_1, "CT_AUD", "MPCT_HPno", &Local_1270, 0);
					}
					else
					{
						GAMEPLAY::SET_BIT(&(Local_147.f_359), 10);
						Local_147.f_360 = 43;
						Local_147.f_358 = func_8();
						func_958(func_92(1, 1), Local_147.f_360, func_8(), 0);
					}
				}
			}
			else
			{
				bVar0 = true;
			}
		}
	}
	if (iVar3 == 1)
	{
		func_71(24, 0);
		iVar2 = 1;
	}
	else if (iVar3 == 5)
	{
		func_71(1, 0);
		iVar2 = 1;
	}
	else if (iVar3 == 6)
	{
		func_71(29, 0);
		iVar2 = 1;
	}
	else if (bVar1 == 0)
	{
		func_957(22, 0);
		iVar2 = 1;
	}
	else if (bVar0)
	{
		GAMEPLAY::SET_BIT(&iLocal_1277, 0);
		func_71(0, 0);
		iVar2 = 0;
	}
	switch (iVar2)
	{
		case 0:
			break;
		
		case 1:
			if (func_332())
			{
				func_1(Local_147.f_1, "EXCALAU", "EXCAL_IMNEGM", &Local_1270, 0);
			}
			else
			{
				func_1(Local_147.f_1, "EXCALAU", "EXCAL_IMNEGF", &Local_1270, 0);
			}
			break;
	}
}

void func_966()
{
	switch (Local_147.f_181.f_69)
	{
		case 3:
			if ((func_424(64) && func_454(64)) && !Global_262145.f_28467)
			{
				if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_65(64), 0, 1, 0, -1, 0) || func_65(64) == 0)
				{
					GAMEPLAY::SET_BIT(&(Global_2537071.f_1714), 7);
					StringCopy(&(Local_147.f_170), "CCYCAUD", 16);
					StringCopy(&(Local_147.f_174), "CCYC_FCREQ1", 16);
					func_1(Local_147.f_1, &(Local_147.f_170), &(Local_147.f_174), &Local_1270, 1);
					func_32(4);
				}
			}
			break;
		
		case 0:
			if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_65(40), 0, 1, 0, -1, 0))
			{
				iVar2 = func_385(PLAYER::PLAYER_ID());
				if (((((!func_376(PLAYER::PLAYER_ID(), iVar2, 100f) && !func_375(0)) && !func_383(0)) && !func_382(PLAYER::PLAYER_ID(), 0)) && !func_384(0, 1024)) && !Global_262145.f_12643)
				{
					func_968(0, 1);
					if (func_967(0))
					{
						if (func_90())
						{
							func_78(-754024203, func_65(40), &iVar3, 1, 1, 0);
						}
						else
						{
							NETWORKCASH::NETWORK_SPENT_HELI_PICKUP(func_65(40), 0, 1);
						}
						StringCopy(&(Local_147.f_174), "APCAL_HELIC", 16);
						func_1(Local_147.f_1, &(Local_147.f_170), &(Local_147.f_174), &Local_1270, 1);
						func_32(4);
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar1 || bVar0)
			{
				StringCopy(&(Local_147.f_174), "APCAL_HELIR", 16);
				func_1(Local_147.f_1, &(Local_147.f_170), &(Local_147.f_174), &Local_1270, 1);
			}
			break;
		
		case 1:
			if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_65(41), 0, 1, 0, -1, 0))
			{
				iVar2 = func_385(PLAYER::PLAYER_ID());
				if (((((!func_376(PLAYER::PLAYER_ID(), iVar2, 100f) && !func_375(1)) && !func_383(1)) && !func_384(1, 1024)) && !func_382(PLAYER::PLAYER_ID(), 1)) && !Global_262145.f_12642)
				{
					func_968(1, 1);
					if (func_967(1))
					{
						if (func_90())
						{
							func_78(1208553146, func_65(41), &iVar3, 1, 1, 0);
						}
						else
						{
							NETWORKCASH::NETWORK_SPENT_BOAT_PICKUP(func_65(41), 0, 1);
						}
						StringCopy(&(Local_147.f_174), "APCAL_BOATC", 16);
						func_1(Local_147.f_1, &(Local_147.f_170), &(Local_147.f_174), &Local_1270, 1);
						func_32(4);
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar1 || bVar0)
			{
				StringCopy(&(Local_147.f_174), "APCAL_BOATR", 16);
				func_1(Local_147.f_1, &(Local_147.f_170), &(Local_147.f_174), &Local_1270, 1);
			}
			break;
		
		case 2:
			func_349(&uVar5, &uVar4);
			if (((((uVar4 && uVar5) && func_376(PLAYER::PLAYER_ID(), func_385(PLAYER::PLAYER_ID()), 100f)) && !func_339(1133903872)) && !func_348(PLAYER::PLAYER_ID())) && !Global_262145.f_12641)
			{
				Global_2537071.f_5900 = 1;
				Local_147.f_178 = 9;
				GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
				Local_147.f_181.f_69 = 0;
				StringCopy(&(Local_147.f_174), "APCAL_GENOH", 16);
				func_1(Local_147.f_1, &(Local_147.f_170), &(Local_147.f_174), &Local_1270, 1);
			}
			else
			{
				Global_2537071.f_5900 = 0;
				bVar1 = true;
			}
			if (bVar1 || bVar0)
			{
				StringCopy(&(Local_147.f_174), "APCAL_PVR", 16);
				func_1(Local_147.f_1, &(Local_147.f_170), &(Local_147.f_174), &Local_1270, 1);
			}
			break;
	}
	if (bVar1)
	{
		func_71(1, 0);
	}
	else if (bVar0)
	{
		func_71(0, 0);
	}
}

bool func_967(int iParam0)
{
	return func_384(iParam0, 256);
}

void func_968(int iParam0, bool bParam1)
{
	func_969(iParam0, 256, bParam1);
}

void func_969(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_384(iParam0, iParam1))
		{
			Global_4010230[iParam0].f_6 = (Global_4010230[iParam0].f_6 + iParam1);
		}
	}
	else if (func_384(iParam0, iParam1))
	{
		Global_4010230[iParam0].f_6 = (Global_4010230[iParam0].f_6 - iParam1);
	}
}

void func_970()
{
	if (Local_147.f_181.f_69 == 0)
	{
		if (func_479(74, 0, 0))
		{
			if (func_454(39))
			{
				if (func_424(39))
				{
					if (func_873(1) >= func_65(39))
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 0))
						{
							iVar2 = func_104(39);
							if (iVar2 > 0)
							{
								func_71(20, iVar2);
							}
							else if (!GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 7) && !GAMEPLAY::IS_BIT_SET(Local_147.f_359, 18))
							{
								Global_2439138.f_3993 = -1961627517;
								GAMEPLAY::SET_BIT(&(Local_147.f_359), 18);
							}
							else
							{
								func_1(Local_147.f_1, "BACALAU", "BACAL_UNABLE", &Local_1270, 1);
								func_71(1, 0);
							}
						}
						else
						{
							bVar1 = true;
						}
					}
					else
					{
						GAMEPLAY::SET_BIT(&iLocal_1277, 0);
						bVar0 = true;
					}
				}
				else
				{
					func_71(29, 0);
				}
			}
			else
			{
				func_71(1, 0);
			}
		}
	}
	else
	{
		func_912();
	}
	if (bVar1)
	{
		func_71(27, 0);
	}
	else if (bVar0)
	{
		func_71(0, 0);
		func_1(Local_147.f_1, "CT_AUD", "MPCT_Bmon", &Local_1270, 0);
	}
}

void func_971()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_1277, 2))
	{
		if (Local_147.f_181.f_70[Local_147.f_181.f_69] > 3)
		{
			func_913();
			return;
		}
	}
	iVar0 = func_974(Local_147.f_181.f_70[Local_147.f_181.f_69]);
	iVar1 = func_973(iVar0);
	if (func_90())
	{
		func_78(-517447402, iVar1, &iVar2, 1, 1, 0);
	}
	else
	{
		NETWORKCASH::_0x9D26502BB97BFE62(iVar1, 0, 0);
	}
	func_972(iVar0);
	func_72(&(Global_2451426.f_4308.f_197[50]), 1, 0);
	func_869(50, -1, -1);
	func_32(4);
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
}

void func_972(int iParam0)
{
	iVar0 = func_68(6424, -1, 0);
	switch (iParam0)
	{
		case -1:
			GAMEPLAY::CLEAR_BIT(&iVar0, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, 1);
			GAMEPLAY::CLEAR_BIT(&iVar0, 2);
			GAMEPLAY::CLEAR_BIT(&(Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_26), 0);
			GAMEPLAY::CLEAR_BIT(&(Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_26), 1);
			GAMEPLAY::CLEAR_BIT(&(Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_26), 2);
			bVar1 = true;
			break;
		
		case 0:
			GAMEPLAY::SET_BIT(&(Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_26), 0);
			GAMEPLAY::CLEAR_BIT(&(Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_26), 1);
			GAMEPLAY::CLEAR_BIT(&(Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_26), 2);
			GAMEPLAY::SET_BIT(&iVar0, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, 1);
			GAMEPLAY::CLEAR_BIT(&iVar0, 2);
			bVar1 = true;
			break;
		
		case 1:
			GAMEPLAY::CLEAR_BIT(&(Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_26), 0);
			GAMEPLAY::SET_BIT(&(Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_26), 1);
			GAMEPLAY::CLEAR_BIT(&(Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_26), 2);
			GAMEPLAY::CLEAR_BIT(&iVar0, 0);
			GAMEPLAY::SET_BIT(&iVar0, 1);
			GAMEPLAY::CLEAR_BIT(&iVar0, 2);
			bVar1 = true;
			break;
		
		case 2:
			GAMEPLAY::CLEAR_BIT(&(Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_26), 0);
			GAMEPLAY::CLEAR_BIT(&(Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_26), 1);
			GAMEPLAY::SET_BIT(&(Global_1692770[PLAYER::NETWORK_PLAYER_ID_TO_INT()].f_26), 2);
			GAMEPLAY::CLEAR_BIT(&iVar0, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, 1);
			GAMEPLAY::SET_BIT(&iVar0, 2);
			bVar1 = true;
			break;
	}
	if (bVar1)
	{
		func_608(6424, iVar0, -1, 1, 0);
		func_893();
	}
}

int func_973(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_22838;
		
		case 1:
			return Global_262145.f_22839;
		
		case 2:
			return Global_262145.f_22840;
		
		default:
	}
	return -1;
}

int func_974(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		default:
	}
	return -1;
}

void func_975()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_1277, 2))
	{
		if (Local_147.f_181.f_70[Local_147.f_181.f_69] > 0)
		{
			func_858();
			return;
		}
	}
	uVar0 = func_316(PLAYER::PLAYER_ID());
	iVar1 = func_314(12, uVar0, &uLocal_1290, &iLocal_1316);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (Local_147.f_181.f_70[Local_147.f_181.f_69] == iVar2)
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_1316, iVar2))
			{
				return;
			}
		}
		iVar2++;
	}
	iVar3 = func_65(36);
	func_76(-iVar3, 1, 1, 0f);
	if (iVar3 > 0)
	{
		NETWORKCASH::_0x9D26502BB97BFE62(iVar3, 0, 1);
	}
	GAMEPLAY::SET_BIT(&(Global_2537071.f_1714), 6);
	iVar4 = Local_147.f_181.f_70[Local_147.f_181.f_69];
	Global_2537071.f_1716 = uLocal_1290[iVar4];
	func_72(&(Global_2451426.f_4308.f_197[36]), 1, 0);
	func_869(36, -1, -1);
	func_32(4);
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
}

void func_976()
{
	switch (Local_147.f_181.f_69)
	{
		case 0:
			GAMEPLAY::SET_BIT(&(Local_147.f_359), 10);
			Local_147.f_360 = func_977(Local_147);
			Local_147.f_358 = func_8();
			func_958(func_92(1, 1), Local_147.f_360, func_8(), 0);
			break;
		
		case 1:
			func_32(4);
			break;
	}
}

int func_977(int iParam0)
{
	switch (iParam0)
	{
		case 104:
			return 27;
			break;
		
		case 105:
			return 28;
			break;
		
		case 106:
			return 29;
			break;
		
		case 107:
			return 30;
			break;
		
		case 108:
			return 31;
			break;
		
		case 109:
			return 32;
			break;
		
		case 110:
			return 33;
			break;
		
		case 111:
			return 34;
			break;
	}
	return 27;
}

void func_978()
{
	if (Local_147.f_181.f_69 == 0)
	{
		if (func_479(106, 0, 0))
		{
			if (func_454(21))
			{
				if (func_424(21))
				{
					iVar2 = func_104(21);
					if (iVar2 > 0)
					{
						func_71(20, iVar2);
						if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_1731, 18))
						{
							func_1(Local_147.f_1, "CT_AUD", "MPCT_RJobcoo", &Local_1270, 0);
						}
						else
						{
							func_1(Local_147.f_1, "CT_AUD", "MPCT_RJobno", &Local_1270, 0);
						}
					}
					else if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_65(21), 0, 1, 0, -1, 0))
					{
						GAMEPLAY::SET_BIT(&(Global_2537071.f_1714), 5);
						func_72(&(Global_2451426.f_4308.f_197[21]), 1, 0);
						func_869(21, -1, -1);
						func_32(4);
					}
					else
					{
						GAMEPLAY::SET_BIT(&iLocal_1277, 0);
						func_1(Local_147.f_1, "CT_AUD", "MPCT_Rmon", &Local_1270, 0);
						func_71(0, 0);
					}
				}
				else
				{
					func_71(29, 0);
				}
			}
			else
			{
				func_71(1, 0);
			}
		}
	}
	else
	{
		func_915();
	}
	if (bVar1)
	{
		func_71(27, 0);
	}
	else if (bVar0)
	{
		func_71(0, 0);
	}
}

void func_979()
{
	if (Local_147.f_181.f_69 == 0)
	{
		if (func_479(97, 0, 0))
		{
			if (func_454(17))
			{
				if (func_424(17))
				{
					iVar2 = func_104(17);
					if (iVar2 > 0)
					{
						func_71(20, iVar2);
						if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_1730, 2))
						{
							func_1(Local_147.f_1, "CT_AUD", "MPCT_GJobcoo", &Local_1270, 0);
						}
						else
						{
							func_1(Local_147.f_1, "CT_AUD", "MPCT_GJobno", &Local_1270, 0);
						}
					}
					else if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_65(17), 0, 1, 0, -1, 0))
					{
						GAMEPLAY::SET_BIT(&(Global_2537071.f_1714), 2);
						func_72(&(Global_2451426.f_4308.f_197[17]), 1, 0);
						func_869(17, -1, -1);
						func_32(4);
					}
					else
					{
						GAMEPLAY::SET_BIT(&iLocal_1277, 0);
						func_1(Local_147.f_1, "CT_AUD", "MPCT_Gmon", &Local_1270, 0);
						func_71(0, 0);
					}
				}
				else
				{
					func_71(29, 0);
				}
			}
			else
			{
				func_71(1, 0);
			}
		}
	}
	else
	{
		func_916();
	}
	if (bVar1)
	{
		func_71(27, 0);
	}
	else if (bVar0)
	{
		func_71(0, 0);
	}
}

void func_980()
{
	if (Local_147.f_181.f_69 == 0)
	{
		if (func_479(100, 0, 0))
		{
			if (func_454(19))
			{
				if (func_424(19))
				{
					iVar2 = func_104(19);
					if (iVar2 > 0)
					{
						func_71(20, iVar2);
						if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_1730, 9))
						{
							func_1(Local_147.f_1, "CT_AUD", "MPCT_MJobcoo", &Local_1270, 0);
						}
						else
						{
							func_1(Local_147.f_1, "CT_AUD", "MPCT_MJobno", &Local_1270, 0);
						}
					}
					else if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_65(15), 0, 1, 0, -1, 0))
					{
						GAMEPLAY::SET_BIT(&(Global_2537071.f_1714), 4);
						func_72(&(Global_2451426.f_4308.f_197[19]), 1, 0);
						func_869(19, -1, -1);
						func_32(4);
					}
					else
					{
						GAMEPLAY::SET_BIT(&iLocal_1277, 0);
						func_1(Local_147.f_1, "CT_AUD", "MPCT_Mmon", &Local_1270, 0);
						func_71(0, 0);
					}
				}
				else
				{
					func_71(29, 0);
				}
			}
			else
			{
				func_71(1, 0);
			}
		}
	}
	else
	{
		func_917();
	}
	if (bVar1)
	{
		func_71(27, 0);
	}
	else if (bVar0)
	{
		func_71(0, 0);
	}
}

void func_981()
{
	if (Local_147.f_181.f_69 == 0)
	{
		if (func_479(99, 0, 0))
		{
			if (func_454(18))
			{
				if (func_424(18))
				{
					iVar2 = func_104(18);
					if (iVar2 > 0)
					{
						func_71(20, iVar2);
						if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_1730, 8))
						{
							func_1(Local_147.f_1, "CT_AUD", "MPCT_SJobcoo", &Local_1270, 0);
						}
						else
						{
							func_1(Local_147.f_1, "CT_AUD", "MPCT_SJobno", &Local_1270, 0);
						}
					}
					else if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_65(18), 0, 1, 0, -1, 0))
					{
						GAMEPLAY::SET_BIT(&(Global_2537071.f_1714), 3);
						func_72(&(Global_2451426.f_4308.f_197[18]), 1, 0);
						func_869(18, -1, -1);
						func_32(4);
					}
					else
					{
						GAMEPLAY::SET_BIT(&iLocal_1277, 0);
						func_1(Local_147.f_1, "CT_AUD", "MPCT_Smon", &Local_1270, 0);
						func_71(0, 0);
					}
				}
				else
				{
					func_71(29, 0);
				}
			}
			else
			{
				func_71(1, 0);
			}
		}
	}
	else
	{
		func_918();
	}
	if (bVar1)
	{
		func_71(27, 0);
	}
	else if (bVar0)
	{
		func_71(0, 0);
	}
}

void func_982()
{
	if (bLocal_521)
	{
		uLocal_523 = Local_147.f_181.f_69;
		iLocal_522 = iLocal_524[Local_147.f_181.f_69];
		func_685();
	}
	else
	{
		bVar0 = true;
		bVar1 = false;
		if (func_455(0) || Global_1652631)
		{
			if (func_717(1, 1, 1, 1, 1, 1, 1, 1))
			{
				bVar0 = false;
			}
		}
		if (func_372(iLocal_522, -1) == 116)
		{
			bVar1 = true;
			bVar0 = false;
		}
		if (iLocal_522 >= 1000 && func_356(iLocal_522) == 1)
		{
			bVar1 = true;
			bVar0 = false;
		}
		if (iLocal_1329 == 0)
		{
			if (iLocal_520 == Local_147.f_181.f_69)
			{
				if (iLocal_519 < 0)
				{
					iLocal_519 = 0;
				}
				if (iLocal_519 == 0 || ((iLocal_519 > 0 && (NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE() + NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1)) >= iLocal_519) || NETWORKCASH::NETWORK_CAN_SPEND_MONEY(iLocal_519, 0, 1, 0, -1, 0)))
				{
					if (func_719(91, 3) == 1)
					{
						if (func_90())
						{
							iLocal_1329++;
						}
						else
						{
							func_718(1);
						}
					}
					else
					{
						func_32(4);
					}
				}
				else
				{
					func_1(Local_147.f_1, "CT_AUD", "MPCT_INSmon", &Local_1270, 0);
					func_71(31, 0);
					GAMEPLAY::SET_BIT(&iLocal_1277, 0);
				}
			}
		}
		if (iLocal_1331 == 0)
		{
			if (!iLocal_520 == Local_147.f_181.f_69)
			{
				iVar2 = iLocal_599[Local_147.f_181.f_69];
				if (func_699(iVar2))
				{
					if (!Global_1322852)
					{
						if (func_719(91, 3) == 1)
						{
							func_689(&Var3, Global_1323615[iVar2].f_66, 0, -1);
							if (GAMEPLAY::IS_BIT_SET(Global_1323615[iVar2].f_102, 16))
							{
								iVar9 = Var3.f_4;
								if (func_686(iVar2) > 0)
								{
									iVar9 = (iVar9 - func_686(iVar2));
								}
								if (func_641(Global_1323615[iVar2].f_66))
								{
									iVar9 = Global_262145.f_21457;
								}
							}
							else
							{
								iVar9 = 0;
							}
							if (!func_692(iVar2, 0, 0, -1, 0))
							{
								bVar1 = true;
							}
							if (func_716(PLAYER::PLAYER_ID()))
							{
								bVar1 = true;
								bVar0 = false;
							}
							if (Global_1323615[iVar2].f_66 == 2069146067 && func_322())
							{
								bVar1 = true;
								bVar0 = false;
							}
							if (iVar9 == 0 || ((NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE() + NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1)) >= iVar9 || NETWORKCASH::NETWORK_CAN_SPEND_MONEY(iVar9, 0, 1, 0, -1, 0)))
							{
								Global_1322852.f_2 = iVar9;
								Global_1322852.f_3 = iVar2;
								if (func_90())
								{
									iLocal_1331++;
								}
								else
								{
									func_714(Global_1322852.f_2, Global_1322852.f_3, bVar1, bVar0, 1);
								}
							}
							else
							{
								func_1(Local_147.f_1, "CT_AUD", "MPCT_INSmon", &Local_1270, 0);
								func_71(31, 0);
								GAMEPLAY::SET_BIT(&iLocal_1277, 0);
							}
						}
						else
						{
							func_32(4);
						}
					}
					else if (iLocal_907 != 0)
					{
						if ((Global_1322852.f_2 > 0 && NETWORKCASH::NETWORK_CAN_SPEND_MONEY(Global_1322852.f_2, 0, 1, 0, -1, 0)) || Global_1322852.f_2 <= 0)
						{
							Global_1322852.f_3 = iVar2;
							if (func_90())
							{
								iLocal_1331 = 11;
							}
							else
							{
								func_707(Global_1322852.f_2, Global_1322852.f_3, 1);
							}
						}
					}
				}
			}
		}
	}
}

void func_983()
{
	if (func_797())
	{
		func_985();
		return;
	}
	if (iLocal_1223)
	{
		func_984();
	}
}

void func_984()
{
	iLocal_1222 = iLocal_1257[Local_147.f_181.f_69];
	Local_147.f_181.f_69 = 0;
	GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
}

void func_985()
{
	if (!func_1013())
	{
		return;
	}
	iVar0 = Local_147.f_181.f_69;
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = uLocal_1226[iVar0];
	if (func_1012(iVar0))
	{
		func_1008(iVar1);
	}
	else
	{
		func_986(iVar1);
	}
}

void func_986(int iParam0)
{
	if (!func_1007(iParam0))
	{
		func_71(1, 0);
		return;
	}
	if (!func_772(iParam0))
	{
		func_71(1, 0);
		return;
	}
	if (!func_1005(func_587(func_773(iParam0), -1)))
	{
		func_71(1, 0);
		return;
	}
	if (func_1004())
	{
		func_1003();
		return;
	}
	func_987(iParam0);
}

void func_987(int iParam0)
{
	iVar0 = func_773(iParam0);
	Global_2439138.f_3993 = func_587(iVar0, -1);
	if (func_1002(iVar0))
	{
		func_988(iParam0);
	}
	func_737(1);
	GAMEPLAY::CLEAR_BIT(&(Global_2439138.f_3992), 11);
}

void func_988(int iParam0)
{
	iVar0 = PLAYER::PLAYER_ID();
	Global_2425662[iVar0].f_46 = func_990(iParam0);
	func_989(iParam0, &(uVar1[0]), &(uVar1[1]));
	Global_2425662[iVar0].f_47 = uVar1[0];
	Global_2425662[iVar0].f_48 = uVar1[1];
}

int func_989(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = -1;
	*uParam2 = -1;
	switch (iParam0)
	{
		case 39:
			*uParam1 = 0;
			*uParam2 = 11;
			return 1;
		
		case 43:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 44:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 45:
			*uParam1 = 53;
			*uParam2 = 89;
			return 1;
		
		case 46:
			*uParam1 = 28;
			*uParam2 = 89;
			return 1;
		
		case 47:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 48:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 49:
			*uParam1 = 1;
			*uParam2 = 89;
			return 1;
		
		case 50:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 51:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 52:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 53:
			*uParam1 = 53;
			*uParam2 = 111;
			return 1;
		
		case 54:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 55:
			*uParam1 = 1;
			*uParam2 = 53;
			return 1;
		
		case 56:
			*uParam1 = 88;
			*uParam2 = 64;
			return 1;
		
		case 57:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 58:
			*uParam1 = 70;
			*uParam2 = 88;
			return 1;
		
		case 59:
			*uParam1 = 1;
			*uParam2 = 88;
			return 1;
		
		case 60:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 61:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 62:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 63:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 64:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 65:
			*uParam1 = 53;
			*uParam2 = 38;
			return 1;
		
		case 66:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 67:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 90:
			*uParam1 = 27;
			*uParam2 = 27;
			return 1;
		
		case 91:
			*uParam1 = 111;
			*uParam2 = 0;
			return 1;
		
		case 115:
			*uParam1 = 40;
			*uParam2 = 12;
			return 1;
		
		case 116:
			*uParam1 = 58;
			*uParam2 = 1;
			return 1;
		
		case 118:
			*uParam1 = 111;
			return 1;
		
		case 119:
			*uParam1 = 120;
			return 1;
		
		case 120:
			*uParam1 = 1;
			*uParam2 = 1;
			return 1;
		
		default:
	}
	return 0;
}

int func_990(int iParam0)
{
	switch (iParam0)
	{
		case 39:
			return 0;
		
		case 40:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 1;
		
		case 45:
			return 2;
		
		case 46:
			return 3;
		
		case 47:
			return 4;
		
		case 48:
			return 5;
		
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 51:
			return 8;
		
		case 52:
			return 9;
		
		case 53:
			return 10;
		
		case 54:
			return 11;
		
		case 55:
			return 12;
		
		case 56:
			return 13;
		
		case 57:
			return 14;
		
		case 58:
			return 15;
		
		case 59:
			return 16;
		
		case 60:
			return 17;
		
		case 61:
			return 18;
		
		case 62:
			return 19;
		
		case 63:
			return 20;
		
		case 64:
			return 21;
		
		case 65:
			return 22;
		
		case 66:
			return 23;
		
		case 67:
			return 24;
		
		case 82:
			return 0;
		
		case 83:
			return 1;
		
		case 90:
			return 0;
		
		case 91:
			return 1;
		
		case 97:
			return 0;
		
		case 98:
			return 1;
		
		case 99:
			return 2;
		
		case 100:
			return 3;
		
		case 101:
			return 4;
		
		case 102:
			return 5;
		
		case 103:
			return 6;
		
		case 104:
			if (func_1001(PLAYER::PLAYER_ID(), 0))
			{
				return 14;
			}
			else if (func_1001(PLAYER::PLAYER_ID(), 1))
			{
				return 13;
			}
			else if (func_1001(PLAYER::PLAYER_ID(), 2))
			{
				return 8;
			}
			else if (func_1001(PLAYER::PLAYER_ID(), 3))
			{
				return 12;
			}
			else if (func_1001(PLAYER::PLAYER_ID(), 4))
			{
				return 11;
			}
			else if (func_1001(PLAYER::PLAYER_ID(), 5))
			{
				return 10;
			}
			else if (func_1001(PLAYER::PLAYER_ID(), 6))
			{
				return 9;
			}
			else if (func_1001(PLAYER::PLAYER_ID(), 7))
			{
				return 7;
			}
			else if (func_1001(PLAYER::PLAYER_ID(), 8))
			{
				return 15;
			}
			if (func_991(PLAYER::PLAYER_ID()))
			{
			}
			return -1;
			break;
		
		case 105:
			return 0;
		
		case 106:
			return 1;
		
		case 107:
			return 2;
		
		case 108:
			return 3;
		
		case 109:
			return 4;
		
		case 110:
			return 5;
		
		case 111:
			return 6;
		
		case 112:
			return 7;
		
		case 113:
			return 8;
		
		case 114:
			return 9;
	}
	return -1;
}

int func_991(int iParam0)
{
	if ((((((((func_1000(iParam0) || func_999(iParam0)) || func_998(iParam0)) || func_997(iParam0)) || func_996(iParam0)) || func_995(iParam0)) || func_994(iParam0)) || func_993(iParam0)) || func_992(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_992(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_2, 0);
}

bool func_993(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 31);
}

bool func_994(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 30);
}

bool func_995(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 29);
}

bool func_996(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 28);
}

bool func_997(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 27);
}

bool func_998(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 26);
}

bool func_999(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 25);
}

bool func_1000(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 24);
}

int func_1001(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			return func_1000(iParam0);
		
		case 3:
			return func_999(iParam0);
		
		case 6:
			return func_998(iParam0);
		
		case 1:
			return func_997(iParam0);
		
		case 0:
			return func_996(iParam0);
		
		case 7:
			return func_995(iParam0);
		
		case 2:
			return func_994(iParam0);
		
		case 5:
			return func_993(iParam0);
		
		case 8:
			return func_992(iParam0);
		
		default:
	}
	return 0;
}

int func_1002(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232) || iParam0 == 275) || iParam0 == 270) || iParam0 == 274) || iParam0 == 278) || iParam0 == 267) || iParam0 == 280) || iParam0 == 268) || iParam0 == 276) || iParam0 == 281) || iParam0 == 277) || iParam0 == 271) || iParam0 == 272) || iParam0 == 269) || iParam0 == 279) || iParam0 == 413) || iParam0 == 414)
	{
		return 1;
	}
	return 0;
}

void func_1003()
{
	func_1(Local_147.f_1, "CT_AUD", "MPCT_PGblip", &Local_1270, 0);
	func_71(1, 0);
}

bool func_1004()
{
	return ((GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 7) || GAMEPLAY::IS_BIT_SET(Local_147.f_359, 18)) || GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 0));
}

int func_1005(int iParam0)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 837858166:
			iVar0 = 78;
			break;
		
		case 788747387:
			iVar0 = 20;
			break;
		
		case 782665360:
			iVar0 = 17;
			break;
	}
	if (iVar0 != -1)
	{
		if (func_415(PLAYER::PLAYER_ID()) < func_1006(iVar0, &uVar1))
		{
			return 0;
		}
	}
	return 1;
}

int func_1006(int iParam0, var uParam1)
{
	*uParam1 = 0;
	if ((((iParam0 == 17 || iParam0 == 20) || iParam0 == 78) || iParam0 == 148) || iParam0 == 169)
	{
		*uParam1 = 1;
	}
	switch (iParam0)
	{
		case 0:
			return 31;
		
		case 1:
			return 43;
		
		case 2:
			return 45;
		
		case 3:
			return 27;
		
		case 4:
			return 47;
		
		case 5:
			return 49;
		
		case 6:
			return 36;
		
		case 7:
			return 26;
		
		case 46:
			return 29;
		
		case 70:
			return 24;
		
		case 71:
			return 21;
		
		case 72:
			return 35;
		
		case 56:
			return 44;
		
		case 50:
			return 46;
		
		case 44:
			return 25;
		
		case 47:
			return 28;
		
		case 73:
			return 28;
		
		case 74:
			return 33;
		
		case 75:
			return 33;
		
		case 76:
			return 43;
		
		case 55:
			return 22;
		
		case 77:
			return 23;
		
		case 48:
			return 20;
		
		case 45:
			return 19;
		
		case 49:
			return 16;
		
		case 95:
			return 1;
		
		case 96:
			return 1;
		
		case 97:
			return 1;
		
		case 98:
			return 1;
		
		case 9:
			return 1;
		
		case 13:
			return 9;
		
		case 10:
			return 39;
		
		case 12:
			return 16;
		
		case 14:
			return 50;
		
		case 11:
			return 40;
		
		case 15:
			return 30;
		
		case 16:
			return 7;
		
		case 78:
			if (!Global_262145.f_19668)
			{
				*uParam1 = 1;
				return 37;
			}
			else
			{
				*uParam1 = 0;
				return 1;
			}
			break;
		
		case 79:
			return 12;
		
		case 80:
			return 20;
		
		case 17:
			if (!Global_262145.f_19666)
			{
				*uParam1 = 1;
				return 70;
			}
			else
			{
				*uParam1 = 0;
				return 1;
			}
			break;
		
		case 22:
			return 10;
		
		case 18:
			return 32;
		
		case 19:
			return 22;
		
		case 20:
			if (!Global_262145.f_19667)
			{
				*uParam1 = 1;
				return 42;
			}
			else
			{
				*uParam1 = 0;
				return 1;
			}
			break;
		
		case 21:
			return 8;
		
		case 81:
			return 19;
		
		case 82:
			return 41;
		
		case 83:
			return 41;
		
		case 84:
			return 23;
		
		case 85:
			return 11;
		
		case 86:
			return 13;
		
		case 87:
			return 17;
		
		case 148:
			if (Global_262145.f_16311)
			{
				*uParam1 = 1;
				return 100;
			}
			else
			{
				*uParam1 = 0;
				return 1;
			}
			break;
		
		case 23:
			return 1;
		
		case 24:
			return 48;
		
		case 25:
			return 17;
		
		case 26:
			return 1;
		
		case 27:
			return 23;
		
		case 28:
			return 1;
		
		case 29:
			return 16;
		
		case 30:
			return 5;
		
		case 31:
			return 1;
		
		case 32:
			return 38;
		
		case 33:
			return 9;
		
		case 34:
			return 13;
		
		case 35:
			return 19;
		
		case 36:
			return 18;
		
		case 37:
			return 17;
		
		case 38:
			return 5;
		
		case 63:
			return 12;
		
		case 57:
			return 12;
		
		case 62:
			return 18;
		
		case 94:
			return 18;
		
		case 51:
			return 7;
		
		case 89:
			return 14;
		
		case 66:
			return 15;
		
		case 58:
			return 14;
		
		case 54:
			return 10;
		
		case 90:
			return 11;
		
		case 69:
			return 5;
		
		case 60:
			return 21;
		
		case 91:
			return 21;
		
		case 53:
			return 17;
		
		case 41:
			return 13;
		
		case 92:
			return 15;
		
		case 43:
			return 5;
		
		case 61:
			return 9;
		
		case 67:
			return 8;
		
		case 59:
			return 11;
		
		case 64:
			return 10;
		
		case 68:
			return 6;
		
		case 52:
			return 15;
		
		case 39:
			return 15;
		
		case 88:
			return 34;
		
		case 65:
			return 7;
		
		case 42:
			return 6;
		
		case 40:
			return 14;
		
		case 93:
			return 14;
	}
	return 1;
}

bool func_1007(int iParam0)
{
	return iParam0 >= 0;
}

void func_1008(int iParam0)
{
	if (!func_1010(iParam0))
	{
		func_71(1, 0);
		return;
	}
	if (!DLC1::GET_DLC_VEHICLE_DATA(iParam0, &uVar0))
	{
		func_71(1, 0);
		return;
	}
	if (DLC1::_IS_DLC_DATA_EMPTY(uVar0))
	{
		func_71(1, 0);
		return;
	}
	if (func_1004())
	{
		func_1003();
		return;
	}
	func_1009(DLC1::GET_DLC_VEHICLE_MODEL(iParam0));
}

void func_1009(int iParam0)
{
	Global_2439138.f_3993 = iParam0;
	func_737(1);
	GAMEPLAY::SET_BIT(&(Global_2439138.f_3992), 11);
}

int func_1010(int iParam0)
{
	if (!func_1011(iParam0))
	{
		return 0;
	}
	if (func_768(iParam0))
	{
		return 0;
	}
	if (func_1005(DLC1::GET_DLC_VEHICLE_MODEL(iParam0)))
	{
		return 0;
	}
	return 1;
}

bool func_1011(int iParam0)
{
	return (func_1007(iParam0) && iLocal_1224 > 0);
}

bool func_1012(int iParam0)
{
	return iParam0 > iLocal_1225;
}

int func_1013()
{
	if (func_744())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2439138.f_3992, 0))
	{
		return 0;
	}
	if (func_791())
	{
		func_71(20, func_1014());
		return 0;
	}
	if (!func_479(90, 0, 0))
	{
		func_71(1, 0);
		return 0;
	}
	if (!NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_65(22), 0, 1, 0, -1, 0))
	{
		func_1(Local_147.f_1, "CT_AUD", "MPCT_PGmon", &Local_1270, 0);
		func_71(0, 0);
		return 0;
	}
	return 1;
}

int func_1014()
{
	return func_104(22);
}

void func_1015()
{
	if (func_1016(Local_147.f_181.f_70[Local_147.f_181.f_69]))
	{
		Local_147.f_178 = 6;
		uLocal_1278 = Local_147.f_181.f_70[Local_147.f_181.f_69];
		GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
		uLocal_1279 = Local_147.f_181.f_69;
		Local_147.f_181.f_69 = 0;
	}
	else
	{
		func_957(17, 0);
	}
}

int func_1016(int iParam0)
{
	if (iParam0 < 25)
	{
		if (func_372(iParam0, -1) > 0 && !func_364(iParam0))
		{
			iVar0 = 0;
			iVar3 = func_357(iParam0, -1);
			if (iParam0 == 13)
			{
				iVar3 = 11;
			}
			else if (iParam0 == 18)
			{
				iVar3 = 10;
			}
			iVar0 = 0;
			while (iVar0 < iVar3)
			{
				iVar1 = (func_354(iParam0) + iVar0);
				func_353(iVar1, &iVar2, 1);
				if (iVar2 >= 0 && !func_335(iVar1))
				{
					if (STREAMING::IS_MODEL_A_VEHICLE(func_323(iVar2)))
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_1323615[iVar2].f_102, 10))
						{
							return 1;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		iVar4 = func_356(iParam0);
		iVar0 = 0;
		while (iVar0 < func_601(iVar4))
		{
			iVar1 = (func_355(iVar4) + iVar0);
			func_353(iVar1, &iVar2, 1);
			if (iVar2 >= 0 && !func_335(iVar1))
			{
				if (STREAMING::IS_MODEL_A_VEHICLE(func_323(iVar2)))
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_1323615[iVar2].f_102, 10))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_1017()
{
	iVar1 = func_65(12);
	if (func_70(1))
	{
		if (func_61(Local_147.f_358, 0, 1))
		{
			if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(iVar1, 0, 1, 0, -1, 0))
			{
				iVar2 = func_104(12);
				if (iVar2 > 0)
				{
					func_71(20, iVar2);
				}
				else
				{
					GAMEPLAY::SET_BIT(&(Local_147.f_359), 10);
					Local_147.f_360 = 12;
					func_958(func_92(1, 1), 12, Local_147.f_358, 0);
				}
			}
			else
			{
				bVar0 = true;
			}
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
			Local_147.f_178 = 4;
			Local_147.f_181.f_69 = 0;
		}
		if (bVar0)
		{
			GAMEPLAY::SET_BIT(&iLocal_1277, 0);
			GAMEPLAY::CLEAR_BIT(&(Local_147.f_359), 4);
			Local_147.f_178 = 4;
			func_1(Local_147.f_1, "CT_AUD", "MPCT_MWmon", &Local_1270, 0);
			func_71(0, 0);
		}
	}
}

void func_1018()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_1277, 2) && Local_147.f_181.f_69 == 1)
	{
		iVar1 = 80;
		func_927();
	}
	else
	{
		iVar1 = func_1019(uLocal_914[Local_147.f_181.f_69], 0, 0, 0, 0, 0, 0, 0);
	}
	if (iVar1 == 0)
	{
		iVar2 = func_104(7);
		if (func_323(uLocal_914[Local_147.f_181.f_69]) == 2069146067 && func_322())
		{
			iVar2 = (Global_262145.f_27616 - func_321(&Global_2514799, 1));
		}
		if (iVar2 > 0)
		{
			func_71(20, iVar2);
		}
		else
		{
			Global_2537071.f_892 = 1;
			GAMEPLAY::SET_BIT(&(Local_147.f_359), 10);
			Local_147.f_360 = 7;
			Local_147.f_358 = func_8();
			func_958(func_92(1, 1), Local_147.f_360, func_8(), 0);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (iVar1 == 1)
		{
			func_107("BB_PVUNA1", 100, 0);
			func_71(14, 0);
		}
		else if (iVar1 == 2)
		{
			func_107("BB_PVUNA2", 100, 0);
			func_71(13, 0);
		}
		else if (iVar1 == 3)
		{
			func_107("BB_PVUNA3", 100, 0);
			func_71(15, 0);
		}
		else if (iVar1 == 4)
		{
			func_107("BB_PVUNA4", 100, 0);
			func_71(16, 0);
		}
		else if (iVar1 == 5)
		{
			func_107("BB_PVUNA5", 100, 0);
			func_71(17, 0);
		}
		else if (iVar1 == 6)
		{
			func_107("BB_PVUNA6", 100, 0);
			func_71(18, 0);
		}
		else if (iVar1 == 7)
		{
			func_107("BB_PVUNA7", 100, 0);
			func_71(21, 0);
		}
		else if (iVar1 == 8)
		{
			func_107("BB_PVUNA8", 100, 0);
			func_71(22, 0);
			func_1(Local_147.f_1, "CT_AUD", "MPCT_MCGEN2", &Local_1270, 0);
		}
		else if (iVar1 == 9)
		{
			func_107("BB_PVUNA9", 100, 0);
			func_957(2, 0);
		}
		else if (iVar1 == 11)
		{
			func_107("BB_PVUNA11", 100, 0);
			func_957(13, 0);
		}
		else if (iVar1 == 12)
		{
			func_107("BB_PVUNA12", 100, 0);
			func_957(16, 0);
		}
		else if (iVar1 == 13)
		{
			func_107("BB_PVUNA13", 100, 0);
			func_957(18, 0);
		}
		else if (iVar1 == 14)
		{
			func_107("PIM_HRPV14", 100, 0);
			func_957(23, 0);
		}
	}
}

int func_1019(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	bVar0 = iParam5 == true;
	bVar1 = iParam5 == 2;
	bVar2 = iParam5 == 3;
	bVar3 = false;
	if (iParam0 == 157)
	{
		bVar3 = true;
	}
	if ((!bVar0 && !bVar1) && !bVar2)
	{
		if (iParam0 == -1)
		{
			if (func_337() > -1)
			{
				iParam0 = func_337();
				if (func_642(Global_1323615[iParam0].f_66, 0) && iParam4 == 0)
				{
					return 1;
				}
				else if (func_641(Global_1323615[iParam0].f_66) && iParam4 == 0)
				{
					return 1;
				}
			}
			else if (iParam2 == 0)
			{
				iParam0 = 0;
			}
			else
			{
				return 1;
			}
		}
		if (iParam0 <= -1)
		{
			return 1;
		}
		if ((func_435(PLAYER::PLAYER_ID()) || func_434(PLAYER::PLAYER_ID())) || func_638())
		{
			if (!func_1038(1, iParam0, -1, 0, 0))
			{
				return 6;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1323615[iParam0].f_102, 1))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1323615[iParam0].f_102, 2))
			{
				return 12;
			}
			else
			{
				return 13;
			}
		}
	}
	if (iParam3 == 1)
	{
		if (!func_344(func_343(0)))
		{
			return 6;
		}
	}
	if (iParam1 == 0)
	{
		if (Global_2537071.f_870)
		{
			return 7;
		}
		if (Global_2537071.f_872)
		{
			return 7;
		}
		if (Global_2537071.f_883)
		{
			return 7;
		}
		if (Global_2537071.f_880)
		{
			return 7;
		}
		if (Global_2537071.f_884)
		{
			return 7;
		}
	}
	if (((GAMEPLAY::IS_BIT_SET(Global_2097152[func_326()].f_6174.f_1273, 0) && !bVar1) && !bVar0) && !bVar2)
	{
		return 10;
	}
	if ((!bVar0 && !bVar1) && !bVar2)
	{
		if (func_333(iParam0))
		{
			return 8;
		}
	}
	if ((!bVar0 && !bVar1) && !bVar2)
	{
		if (func_642(Global_1323615[iParam0].f_66, 0))
		{
			if (((ENTITY::DOES_ENTITY_EXIST(func_341()) && !ENTITY::IS_ENTITY_DEAD(func_341(), 0)) && func_642(ENTITY::GET_ENTITY_MODEL(func_341()), 0)) && ENTITY::GET_ENTITY_MODEL(func_341()) != -1881846085)
