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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_122(ScriptParam_0);
	}
	else
	{
		func_119();
	}
	while (true)
	{
		func_118();
		if (func_107())
		{
			func_119();
		}
		if (func_99())
		{
			func_119();
		}
		func_2();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	switch (Local_156.f_65)
	{
		case 0:
			func_93();
			break;
		
		case 1:
			func_71();
			break;
		
		case 2:
			func_43();
			break;
	}
	func_41();
	func_3();
}

void func_3()
{
	switch (Local_156.f_116)
	{
		case 1:
			func_40();
			break;
		
		case 2:
			func_36();
			break;
		
		case 3:
			func_28();
			break;
		
		case 4:
			func_23();
			break;
		
		case 5:
			func_8();
			break;
	}
	func_4();
}

void func_4()
{
	if (Local_156.f_116 > 0 && !ENTITY::DOES_ENTITY_EXIST(Local_156.f_64))
	{
		if (Local_156.f_8 != -1)
		{
			AUDIO::STOP_SOUND(Local_156.f_8);
			AUDIO::RELEASE_SOUND_ID(Local_156.f_8);
			Local_156.f_8 = -1;
		}
		if (Local_156.f_7 != -1)
		{
			AUDIO::STOP_SOUND(Local_156.f_7);
			AUDIO::RELEASE_SOUND_ID(Local_156.f_7);
			Local_156.f_7 = -1;
		}
		STREAMING::REMOVE_ANIM_DICT(func_7(Local_156.f_10));
		func_6(0);
		func_5(&(Local_156.f_11));
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_6(int iParam0)
{
	Local_156.f_116 = iParam0;
}

char* func_7(bool bParam0)
{
	sVar0 = "ANIM_HEIST@ARCADE@FORTUNE@MALE@";
	if (bParam0)
	{
		sVar0 = "ANIM_HEIST@ARCADE@FORTUNE@FEMALE@";
	}
	return sVar0;
}

void func_8()
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_156.f_64, func_7(Local_156.f_10), "prop_body_loop_outro", 3))
	{
		return;
	}
	if (Local_156.f_8 != -1)
	{
		AUDIO::STOP_SOUND(Local_156.f_8);
		AUDIO::RELEASE_SOUND_ID(Local_156.f_8);
		Local_156.f_8 = -1;
	}
	if (Local_156.f_7 != -1)
	{
		AUDIO::STOP_SOUND(Local_156.f_7);
		AUDIO::RELEASE_SOUND_ID(Local_156.f_7);
		Local_156.f_7 = -1;
	}
	StringCopy(&Var0, "HS3MN_EXIT", 64);
	func_10(Var0, 1);
	STREAMING::REMOVE_ANIM_DICT(func_7(Local_156.f_10));
	func_6(0);
	func_5(&(Local_156.f_11));
	Local_156.f_6 = 0;
	Local_156.f_9 = -1;
	func_9(9);
}

void func_9(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Local_156, iParam0))
	{
		GAMEPLAY::CLEAR_BIT(&Local_156, iParam0);
	}
}

void func_10(char[64] cParam0, bool bParam16)
{
	Local_156.f_9 = func_21(PLAYER::PLAYER_ID());
	Local_156.f_76.f_36 = 11;
	Local_156.f_76.f_35 = Local_156.f_9;
	Local_156.f_76 = { cParam0 };
	Local_156.f_76.f_33 = 1;
	func_11(&(Local_156.f_76), bParam16);
}

void func_11(var uParam0, bool bParam1)
{
	Var0 = -503716486;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { *uParam0 };
	Var0.f_34 = uParam0->f_34;
	Var0.f_37 = bParam1;
	Var0.f_35 = uParam0->f_35;
	Var0.f_36 = uParam0->f_36;
	Var0.f_38 = uParam0->f_33;
	if (!func_20(&(uParam0->f_37)))
	{
		func_19(&(uParam0->f_37), 0, 0);
	}
	bVar39 = true;
	if (GAMEPLAY::ARE_STRINGS_EQUAL(&(uParam0->f_16), &(Var0.f_2)))
	{
		if (func_20(&(uParam0->f_37)) && !func_18(&(uParam0->f_37), 1000, 0))
		{
			bVar39 = false;
		}
		else
		{
			func_5(&(uParam0->f_37));
		}
	}
	else
	{
		uParam0->f_16 = { Var0.f_2 };
		func_5(&(uParam0->f_37));
	}
	uParam0->f_32 = 0;
	if (bVar39)
	{
		iVar40 = func_17(PLAYER::PLAYER_ID());
		if (bParam1)
		{
			iVar40 = func_12(1, 1);
		}
		if (iVar40 != 0)
		{
			uParam0->f_32 = 1;
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 39, iVar40);
		}
	}
}

var func_12(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_16(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_13(iVar2, 0))
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_13(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_14(-1, 0) == 8;
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

int func_14(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_15();
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

int func_15()
{
	return Global_1312745;
}

int func_16(int iParam0, bool bParam1, bool bParam2)
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

var func_17(int iParam0)
{
	if (iParam0 != -1)
	{
		GAMEPLAY::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_18(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
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

void func_19(var uParam0, bool bParam1, bool bParam2)
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

bool func_20(var uParam0)
{
	return uParam0->f_1;
}

int func_21(int iParam0)
{
	if (iParam0 != func_22())
	{
		return Global_2425662[iParam0].f_416.f_1;
	}
	return -1;
}

int func_22()
{
	return -1;
}

void func_23()
{
	if (func_20(&(Local_156.f_11)))
	{
		if (func_18(&(Local_156.f_11), Local_156.f_6, 0))
		{
			if (func_27())
			{
				if (!func_26(6))
				{
					AI::STOP_ANIM_PLAYBACK(Local_156.f_64, 1, 1);
					AI::STOP_ANIM_PLAYBACK(Local_156.f_64, 0, 1);
					func_25(6);
				}
				if (ENTITY::PLAY_ENTITY_ANIM(Local_156.f_64, "prop_body_loop_outro", func_7(Local_156.f_10), 0.125f, 0, 0, 0, 0, 0))
				{
					if (func_24(PLAYER::PLAYER_ID(), Local_156.f_64))
					{
						Local_156.f_8 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_COORD(Local_156.f_8, "fortune_bell", ENTITY::GET_ENTITY_COORDS(Local_156.f_64, 1), "dlc_ch_nazar_speaks_sounds", 0, 0, 0);
					}
					func_9(6);
					func_6(5);
				}
			}
		}
	}
}

int func_24(int iParam0, var uParam1)
{
	if ((!ENTITY::DOES_ENTITY_EXIST(uParam1) || !ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0))) || ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 1) };
	fVar3 = Var0.z;
	if (fVar3 <= -48f)
	{
		return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(uParam1, 1), 1) <= 4f;
	}
	return 0;
}

void func_25(int iParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(Local_156, iParam0))
	{
		GAMEPLAY::SET_BIT(&Local_156, iParam0);
	}
}

bool func_26(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Local_156, iParam0);
}

bool func_27()
{
	STREAMING::REQUEST_ANIM_DICT(func_7(Local_156.f_10));
	return STREAMING::HAS_ANIM_DICT_LOADED(func_7(Local_156.f_10));
}

void func_28()
{
	if (func_20(&(Local_156.f_11)))
	{
		if (func_18(&(Local_156.f_11), func_34(Local_156.f_4) + 2000, 0))
		{
			func_10(func_33(Local_156.f_3), 0);
			if (Local_156.f_76.f_32)
			{
				func_32(&(Local_156.f_11), 0, 0);
				Local_156.f_6 = func_29();
				func_25(9);
				func_6(4);
			}
		}
	}
}

int func_29()
{
	iVar0 = 5200;
	iVar1 = func_34(Local_156.f_4);
	iVar2 = func_30(Local_156.f_3);
	switch (iVar1)
	{
		case 2000:
			switch (iVar2)
			{
				case 5000:
					iVar0 = 5200;
					break;
				
				case 8000:
					iVar0 = 9400;
					break;
				
				case 12500:
					iVar0 = 16800;
					break;
			}
			break;
		
		case 4000:
			switch (iVar2)
			{
				case 5000:
					iVar0 = 6500;
					break;
				
				case 8000:
					iVar0 = 11000;
					break;
				
				case 12500:
					iVar0 = 15300;
					break;
			}
			break;
		
		case 7000:
			switch (iVar2)
			{
				case 5000:
					iVar0 = 4300;
					break;
				
				case 8000:
					iVar0 = 8700;
					break;
				
				case 12500:
					iVar0 = 16200;
					break;
			}
			break;
	}
	return iVar0;
}

int func_30(int iParam0)
{
	iVar0 = 5000;
	iVar1 = func_31(iParam0);
	if (iVar1 <= 5000)
	{
		iVar0 = 5000;
	}
	else if (iVar1 > 5000 && iVar1 <= 8000)
	{
		iVar0 = 8000;
	}
	else if (iVar1 > 8000)
	{
		iVar0 = 12500;
	}
	return iVar0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5000;
		
		case 1:
			return 8000;
		
		case 2:
			return 7000;
		
		case 3:
			return 14000;
		
		case 4:
			return 9000;
		
		case 5:
			return 7000;
		
		case 6:
			return 7000;
		
		case 7:
			return 6000;
		
		case 8:
			return 7000;
		
		case 9:
			return 1000;
		
		case 10:
			return 9000;
		
		case 11:
			return 7000;
		
		case 12:
			return 6000;
		
		case 13:
			return 9000;
		
		case 14:
			return 8000;
		
		case 15:
			return 11000;
		
		case 16:
			return 3000;
		
		case 17:
			return 3000;
		
		case 18:
			return 7000;
		
		case 19:
			return 7000;
		
		case 20:
			return 9000;
		
		case 21:
			return 9000;
		
		case 22:
			return 4000;
		
		case 23:
			return 5000;
		
		case 24:
			return 4000;
		
		case 25:
			return 8000;
		
		case 26:
			return 8000;
		
		case 27:
			return 7000;
		
		case 28:
			return 7000;
		
		case 29:
			return 7000;
		
		case 30:
			return 4000;
		
		case 31:
			return 4000;
		
		case 32:
			return 6000;
		
		case 33:
			return 7000;
		
		case 34:
			return 7000;
		
		case 35:
			return 6000;
		
		case 36:
			return 5000;
		
		case 37:
			return 4000;
		
		case 38:
			return 6000;
		
		case 39:
			return 5000;
		
		case 40:
			return 7000;
		
		case 41:
			return 6000;
		
		case 42:
			return 7000;
		
		case 43:
			return 6000;
		
		case 44:
			return 7000;
		
		case 45:
			return 7000;
		
		case 46:
			return 7000;
		
		case 47:
			return 7000;
		
		case 48:
			return 7000;
		
		default:
	}
	return 0;
}

void func_32(var uParam0, bool bParam1, bool bParam2)
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

struct<16> func_33(int iParam0)
{
	StringCopy(&Var0, "HS3MN_FT_", 64);
	if (iParam0 > 28)
	{
		StringIntConCat(&Var0, iParam0 + 2, 64);
	}
	else
	{
		StringIntConCat(&Var0, iParam0 + 1, 64);
	}
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HS3MN_FT_130", 64);
			break;
		
		case 41:
			switch (GAMEPLAY::GET_NEXT_WEATHER_TYPE_HASH_NAME())
			{
				case 1420204096:
					StringCopy(&Var0, "HS3MN_FT_43", 64);
					break;
				
				case 1840358669:
				case -1530260698:
				case 916995460:
					StringCopy(&Var0, "HS3MN_FT_44", 64);
					break;
				
				case -1148613331:
				case 282916021:
					StringCopy(&Var0, "HS3MN_FT_45", 64);
					break;
				
				case -318724249:
				case 821931868:
					StringCopy(&Var0, "HS3MN_FT_46", 64);
					break;
				
				case -1233681761:
					StringCopy(&Var0, "HS3MN_FT_47", 64);
					break;
				
				case -273223690:
				case -1429616491:
					StringCopy(&Var0, "HS3MN_FT_48", 64);
					break;
				
				default:
					StringCopy(&Var0, "HS3MN_FT_44", 64);
					break;
			}
			break;
		
		case 42:
			StringCopy(&Var0, "HS3MN_FT_55", 64);
			break;
		
		case 43:
			StringCopy(&Var0, "HS3MN_FT_56", 64);
			break;
		
		case 44:
			StringCopy(&Var0, "HS3MN_FT_50", 64);
			break;
		
		case 45:
			StringCopy(&Var0, "HS3MN_FT_51", 64);
			break;
		
		case 46:
			StringCopy(&Var0, "HS3MN_FT_57", 64);
			break;
		
		case 47:
			StringCopy(&Var0, "HS3MN_FT_58", 64);
			break;
		
		case 48:
			StringCopy(&Var0, "HS3MN_FT_53", 64);
			break;
	}
	return Var0;
}

int func_34(int iParam0)
{
	iVar0 = 2000;
	iVar1 = func_35(iParam0);
	if (iVar1 <= 2000)
	{
		iVar0 = 2000;
	}
	else if (iVar1 > 2000 && iVar1 <= 4000)
	{
		iVar0 = 4000;
	}
	else if (iVar1 > 4000)
	{
		iVar0 = 7000;
	}
	return iVar0;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4000;
		
		case 1:
			return 4000;
		
		case 2:
			return 3000;
		
		case 3:
			return 3000;
		
		case 4:
			return 2000;
		
		case 5:
			return 4000;
		
		case 6:
			return 3000;
		
		case 7:
			return 4000;
		
		case 8:
			return 7000;
		
		case 9:
			return 3000;
		
		default:
	}
	return 0;
}

void func_36()
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_156.f_64, func_7(Local_156.f_10), "prop_body_loop_intro", 3))
	{
		fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_156.f_64, func_7(Local_156.f_10), "prop_body_loop_intro");
		if (fVar0 >= 0.96f)
		{
			if (func_38())
			{
				func_37();
				func_6(3);
			}
		}
	}
	else if (func_38())
	{
		func_37();
		func_6(3);
	}
}

void func_37()
{
	Local_156.f_19 = 1;
	Local_156.f_19.f_1 = func_7(Local_156.f_10);
	Local_156.f_19.f_2 = "prop_body_loop";
	Local_156.f_19.f_3 = 0f;
	Local_156.f_19.f_4 = 1f;
	Local_156.f_19.f_5 = 1f;
	Local_156.f_19.f_17 = 0.125f;
	Local_156.f_19.f_18 = 0.125f;
	Local_156.f_19.f_19 = -1;
	Local_156.f_19.f_20 = 1;
	Local_156.f_19.f_21 = 0;
	Local_156.f_41 = 1;
	Local_156.f_41.f_1 = func_7(Local_156.f_10);
	Local_156.f_41.f_2 = "prop_mouth_loop";
	Local_156.f_41.f_3 = 0f;
	Local_156.f_41.f_4 = 1f;
	Local_156.f_41.f_5 = 1f;
	Local_156.f_41.f_17 = 0.125f;
	Local_156.f_41.f_18 = 0.125f;
	Local_156.f_41.f_19 = -1;
	Local_156.f_41.f_20 = 289;
	Local_156.f_41.f_21 = 0;
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	AI::PLAY_ENTITY_SCRIPTED_ANIM(Local_156.f_64, &(Local_156.f_19), &(Local_156.f_41), &Var0, 0.125f, 0.125f);
	func_19(&(Local_156.f_11), 0, 0);
}

bool func_38()
{
	Var0 = { func_39(Local_156.f_4) };
	func_10(Var0, 0);
	return Local_156.f_76.f_32;
}

struct<16> func_39(int iParam0)
{
	StringCopy(&Var0, "HS3MN_PRE", 64);
	if (iParam0 > 0)
	{
		StringConCat(&Var0, "_", 64);
		StringIntConCat(&Var0, iParam0 + 1, 64);
	}
	return Var0;
}

void func_40()
{
	if (func_27())
	{
		if (ENTITY::PLAY_ENTITY_ANIM(Local_156.f_64, "prop_body_loop_intro", func_7(Local_156.f_10), 0.125f, 0, 0, 0, 0, 0))
		{
			if (func_24(PLAYER::PLAYER_ID(), Local_156.f_64))
			{
				Local_156.f_7 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_COORD(Local_156.f_7, "fortune_mech_loop", ENTITY::GET_ENTITY_COORDS(Local_156.f_64, 1), "dlc_ch_nazar_speaks_sounds", 0, 0, 0);
			}
			func_6(2);
		}
	}
}

void func_41()
{
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case -559810780:
						if (Global_1391799.f_788)
						{
							return;
						}
						func_42(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_42(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Var0.f_1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_156.f_64))
			{
				Local_156.f_3 = Var0.f_4;
				Local_156.f_4 = Var0.f_3;
				Local_156.f_9 = Var0.f_5;
				Local_156.f_10 = Var0.f_2;
				func_6(1);
			}
		}
	}
}

void func_43()
{
	if (func_70("ARC_CAB_FRT_TLL_H"))
	{
		UI::CLEAR_HELP(1);
	}
	func_68();
	Local_156 = 0;
	Local_156.f_1 = -1;
	Local_156.f_10 = 0;
	func_5(&(Local_156.f_13));
	func_5(&(Local_156.f_15));
	func_67(0);
	func_66(&(Local_156.f_65), 0);
	func_25(8);
	func_56();
	func_44(PLAYER::PLAYER_ID(), 1, 0, 0);
}

void func_44(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_55())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_53())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				return;
			}
			uVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar14 || (!func_13(PLAYER::PLAYER_ID(), 0) && !func_52()))
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2425662[iParam0].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_49(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_48(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar27, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
					}
					ENTITY::_SET_ENTITY_REGISTER(uVar27, 1);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				unk_0x6BC97F4F4BB3C04B(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(uVar27) && PED::_0x7350823473013C02(uVar27))
				{
					PED::_0x4668D80430D6C299(uVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(uVar27, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_47();
					func_46();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2425662[iParam0].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_48(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar27, !bVar15, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(uVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_REGISTER(uVar27, 1);
						}
					}
					if (func_45(Global_4456448.f_232883))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(uVar27) && !PED::IS_PED_IN_ANY_VEHICLE(uVar27, 0))
					{
						AI::CLEAR_PED_TASKS_IMMEDIATELY(uVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_45(int iParam0)
{
	return iParam0 == 17;
}

void func_46()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_47()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_48(var uParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = AI::GET_SCRIPT_TASK_STATUS(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_49(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::_NETWORK_GET_PED_PLAYER(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_51();
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_13(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::_0x419594E137637120(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		UI::KEY_HUD_COLOUR(iParam0, iParam1);
		func_50(-2008016205, iParam0);
	}
}

void func_50(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_51()
{
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 2);
			GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_52()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_53()
{
	if (func_54() == 0)
	{
		return 1;
	}
	return 0;
}

int func_54()
{
	return Global_1312467.f_18;
}

int func_55()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_56()
{
	if (Local_156.f_2 == 19)
	{
		if (!func_63(27247, -1, -1))
		{
			func_62(27247, 1, -1, 1);
			func_61(1);
			func_62(28191, 1, -1, 1);
			func_60(10);
			func_57(18, 0);
		}
	}
	else if (Local_156.f_2 == 41)
	{
		GAMEPLAY::SET_BIT(&Global_42599, 1);
	}
	else if (Local_156.f_2 == 42)
	{
		GAMEPLAY::SET_BIT(&Global_42599, 2);
	}
	else if (Local_156.f_2 == 43)
	{
		GAMEPLAY::SET_BIT(&Global_42599, 3);
	}
	else if (Local_156.f_2 == 44)
	{
		GAMEPLAY::SET_BIT(&Global_42599, 4);
	}
	else if (Local_156.f_2 == 45)
	{
		GAMEPLAY::SET_BIT(&Global_42599, 5);
	}
	else if (Local_156.f_2 == 46)
	{
		GAMEPLAY::SET_BIT(&Global_42599, 7);
	}
	else if (Local_156.f_2 == 47)
	{
		GAMEPLAY::SET_BIT(&Global_42599, 10);
	}
	else if (Local_156.f_2 == 48)
	{
		GAMEPLAY::SET_BIT(&Global_42599, 8);
	}
	else if (Local_156.f_2 == 22)
	{
		func_62(28250, 1, -1, 1);
	}
	else if (Local_156.f_2 == 23)
	{
		func_62(28251, 1, -1, 1);
	}
	else if (Local_156.f_2 == 24)
	{
		func_62(28252, 1, -1, 1);
	}
}

void func_57(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(6);
	}
	switch (iParam0)
	{
		case 0:
			func_58(3);
			break;
		
		case 1:
			func_58(12);
			break;
		
		case 7:
			func_58(21);
			break;
		
		case 8:
			func_58(31);
			break;
		
		case 9:
			func_58(32);
			break;
		
		case 10:
			func_58(33);
			break;
		
		case 11:
			func_58(34);
			break;
		
		case 12:
			func_58(35);
			break;
		
		case 13:
			func_58(36);
			break;
		
		case 14:
			func_58(37);
			break;
		
		case 15:
			func_58(38);
			break;
		
		case 16:
			func_58(39);
			break;
		
		case 17:
			func_58(40);
			break;
		
		case 18:
			func_58(41);
			break;
		
		case 4:
			func_58(59);
			break;
		
		case 19:
			func_58(70);
			break;
	}
}

void func_58(int iParam0)
{
	if (!func_59(iParam0))
	{
		iVar0 = iParam0;
		if (iVar0 > 31)
		{
			if (iVar0 <= 63)
			{
				iVar0 = (iVar0 - 32);
				GAMEPLAY::SET_BIT(&(Global_2537071.f_6593), iVar0);
			}
			else if (iVar0 <= 95)
			{
				iVar0 = (iVar0 - 64);
				GAMEPLAY::SET_BIT(&(Global_2537071.f_6594), iVar0);
			}
		}
		else
		{
			GAMEPLAY::SET_BIT(&(Global_2537071.f_6592), iVar0);
		}
	}
}

bool func_59(var uParam0)
{
	iVar0 = uParam0;
	uVar1 = Global_2537071.f_6592;
	if (iVar0 > 31)
	{
		if (iVar0 <= 63)
		{
			uVar1 = Global_2537071.f_6593;
			iVar0 = (iVar0 - 32);
		}
		else if (iVar0 <= 95)
		{
			uVar1 = Global_2537071.f_6594;
			iVar0 = (iVar0 - 64);
		}
	}
	return GAMEPLAY::IS_BIT_SET(uVar1, iVar0);
}

void func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_58(0);
			break;
		
		case 1:
			func_58(1);
			break;
		
		case 2:
			func_58(2);
			break;
		
		case 3:
			func_58(5);
			break;
		
		case 4:
			func_58(7);
			break;
		
		case 5:
			func_58(8);
			break;
		
		case 9:
			func_58(14);
			break;
		
		case 6:
			func_58(9);
			break;
		
		case 7:
			func_58(10);
			break;
		
		case 8:
			func_58(11);
			break;
		
		case 10:
			func_58(15);
			break;
		
		case 11:
			func_58(16);
			break;
		
		case 12:
			func_58(17);
			break;
		
		case 13:
			func_58(18);
			break;
		
		case 14:
			func_58(19);
			break;
		
		case 15:
			func_58(20);
			break;
		
		case 20:
			func_58(22);
			break;
		
		case 21:
			func_58(23);
			break;
		
		case 22:
			func_58(24);
			break;
		
		case 23:
			func_58(25);
			break;
		
		case 24:
			func_58(26);
			break;
		
		case 25:
			func_58(27);
			break;
		
		case 26:
			func_58(28);
			break;
		
		case 27:
			func_58(29);
			break;
		
		case 28:
			func_58(30);
			break;
		
		case 29:
			func_58(43);
			break;
		
		case 30:
			func_58(44);
			break;
		
		case 31:
			func_58(45);
			break;
		
		case 32:
			func_58(46);
			break;
		
		case 33:
			func_58(47);
			break;
		
		case 34:
			func_58(48);
			break;
		
		case 35:
			func_58(49);
			break;
		
		case 36:
			func_58(50);
			break;
		
		case 37:
			func_58(51);
			break;
		
		case 38:
			func_58(52);
			break;
		
		case 16:
			func_58(53);
			break;
		
		case 17:
			func_58(54);
			break;
		
		case 18:
			func_58(55);
			break;
		
		case 19:
			func_58(56);
			break;
		
		case 39:
			func_58(61);
			break;
		
		case 40:
			func_58(65);
			break;
		
		case 41:
			func_58(66);
			break;
		
		case 43:
			func_58(64);
			break;
		
		case 42:
			func_58(63);
			break;
		
		case 44:
			func_58(67);
			break;
		
		case 45:
			func_58(68);
			break;
		
		case 46:
			func_58(69);
			break;
	}
}

void func_61(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_393.f_2, 14))
		{
			GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_393.f_2), 14);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_393.f_2, 14))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_393.f_2), 14);
	}
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_15();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_63(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	iVar1 = func_65(iParam0, iParam1);
	uVar2 = func_64(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_64(int iParam0)
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

int func_65(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_15();
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

void func_66(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

void func_67(int iParam0)
{
	Local_156.f_115 = iParam0;
}

void func_68()
{
	Var0 = -438538740;
	Var0.f_2 = 1;
	Var0.f_6 = GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_156.f_13));
	Var10 = { func_33(Local_156.f_2) };
	Var0.f_8 = GAMEPLAY::GET_HASH_KEY(func_69(&Var10));
	if (Local_156.f_2 == 19)
	{
		Var0.f_9 = 1;
	}
	unk_0xEEE9620CDB225790(&Var0);
}

var func_69(var uParam0)
{
	return uParam0;
}

bool func_70(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_71()
{
	switch (Local_156.f_115)
	{
		case 0:
			func_92();
			break;
		
		case 1:
			func_86();
			break;
		
		case 2:
			func_83();
			break;
		
		case 3:
			func_79();
			break;
		
		case 4:
			func_72();
			break;
	}
}

void func_72()
{
	if (!func_26(5))
	{
		Local_156.f_67.f_4 = 0;
		Local_156.f_67.f_3 = 0;
		func_78(&(Local_156.f_67), 11);
		if (Local_156.f_67.f_5)
		{
			func_25(5);
		}
	}
	else if (func_73(PLAYER::PLAYER_PED_ID(), 11))
	{
		func_66(&(Local_156.f_65), 2);
	}
}

int func_73(var uParam0, int iParam1)
{
	if (func_77(uParam0))
	{
		Var0.f_2 = 14;
		func_74(Local_156.f_66, iParam1, 0, &Var0);
		return ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0, &(Var0.f_17), Var0.f_1, 3);
	}
	return 0;
}

void func_74(var uParam0, int iParam1, int iParam2, var uParam3)
{
	if (!func_75())
	{
		StringCopy(&(uParam3->f_17), "anim_heist@arcade@fortune@male@", 64);
	}
	else
	{
		StringCopy(&(uParam3->f_17), "anim_heist@arcade@fortune@female@", 64);
	}
	switch (iParam1)
	{
		case 0:
			uParam3->f_1 = "start_game";
			break;
		
		case 1:
			uParam3->f_1 = "idle";
			break;
		
		case 11:
			uParam3->f_1 = "exit";
			break;
		
		case 21:
			uParam3->f_1 = "reaction_amused";
			break;
		
		case 22:
			uParam3->f_1 = "reaction_angry";
			break;
		
		case 23:
			uParam3->f_1 = "reaction_confused";
			break;
		
		case 24:
			uParam3->f_1 = "reaction_disgusted";
			break;
		
		case 25:
			uParam3->f_1 = "reaction_insulted";
			break;
		
		case 26:
			uParam3->f_1 = "reaction_pondering";
			break;
		
		case 27:
			uParam3->f_1 = "reaction_surprised";
			break;
	}
}

bool func_75()
{
	return func_76(PLAYER::PLAYER_ID());
}

int func_76(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

int func_77(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_78(var uParam0, int iParam1)
{
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0 = -734905987;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar8 = false;
	if (iParam1 == 11)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_416, 1))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_416), 1);
			bVar8 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_20(&(uParam0->f_1)))
	{
		func_19(&(uParam0->f_1), 0, 0);
	}
	bVar9 = true;
	if (*uParam0 == iParam1 && !bVar8)
	{
		if (func_20(&(uParam0->f_1)) && !func_18(&(uParam0->f_1), 1000, 0))
		{
			bVar9 = false;
		}
		else
		{
			func_5(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_5(&(uParam0->f_1));
	}
	if (bVar9)
	{
		iVar10 = func_17(PLAYER::PLAYER_ID());
		if (iVar10 != -1)
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, iVar10);
			uParam0->f_5 = 1;
		}
	}
}

void func_79()
{
	if (!func_26(2))
	{
		if (func_26(9) && func_18(&(Local_156.f_11), (func_31(Local_156.f_3) / 3) * 2, 0))
		{
			Local_156.f_67.f_4 = 0;
			Local_156.f_67.f_3 = 0;
			func_78(&(Local_156.f_67), Local_156.f_63);
			func_9(9);
			func_25(2);
		}
	}
	else if (func_80())
	{
		func_67(4);
	}
}

bool func_80()
{
	if (!func_26(3))
	{
		if (func_73(PLAYER::PLAYER_PED_ID(), Local_156.f_63))
		{
			func_25(3);
		}
	}
	else if (!func_26(4))
	{
		Local_156.f_1 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(func_82());
		fVar0 = func_81(Local_156.f_63);
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_156.f_1) >= fVar0)
		{
			func_25(4);
		}
	}
	return func_26(4);
}

float func_81(int iParam0)
{
	fVar0 = 0.96f;
	switch (iParam0)
	{
		case 22:
			fVar0 = 0.65f;
			break;
		
		case 23:
			fVar0 = 0.85f;
			break;
		
		case 26:
			fVar0 = 0.9f;
			break;
		
		case 27:
			fVar0 = 0.9f;
			break;
	}
	return fVar0;
}

var func_82()
{
	return Global_1702977.f_1;
}

void func_83()
{
	if (func_18(&(Local_156.f_15), 2100, 0))
	{
		func_5(&(Local_156.f_15));
		Local_156.f_9 = func_21(PLAYER::PLAYER_ID());
		func_84(Local_156.f_2, Local_156.f_5, Local_156.f_9, Local_156.f_10);
		func_67(3);
	}
}

void func_84(var uParam0, var uParam1, var uParam2, var uParam3)
{
	Var0 = -559810780;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam3;
	Var0.f_3 = uParam1;
	Var0.f_4 = uParam0;
	Var0.f_5 = uParam2;
	iVar6 = func_85(1);
	if (!iVar6 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iVar6);
	}
}

var func_85(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_16(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_86()
{
	Local_156.f_2 = func_91();
	Local_156.f_63 = func_88(Local_156.f_2);
	Local_156.f_5 = func_87();
	func_67(2);
}

int func_87()
{
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 10);
	iVar1 = 0;
	while (iVar0 == Local_156.f_5 && iVar1 < 10)
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 10);
		iVar1++;
	}
	if (iVar1 >= 10)
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 10);
	}
	return iVar0;
}

var func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			uVar0 = func_90(23, 26);
			break;
		
		case 1:
			uVar0 = func_90(26, 27);
			break;
		
		case 2:
			uVar0 = func_90(21, 27);
			break;
		
		case 3:
			uVar0 = func_90(21, 26);
			break;
		
		case 4:
			uVar0 = func_90(23, 23);
			break;
		
		case 5:
			uVar0 = func_90(22, 23);
			break;
		
		case 6:
			uVar0 = func_90(26, 26);
			break;
		
		case 7:
			uVar0 = func_90(27, 23);
			break;
		
		case 8:
			uVar0 = func_90(23, 26);
			break;
		
		case 9:
			uVar0 = func_90(23, 23);
			break;
		
		case 10:
			uVar0 = func_90(22, 25);
			break;
		
		case 11:
			uVar0 = func_90(22, 21);
			break;
		
		case 12:
			uVar0 = func_90(22, 25);
			break;
		
		case 13:
			uVar0 = func_90(23, 26);
			break;
		
		case 14:
			uVar0 = func_90(27, 26);
			break;
		
		case 15:
			uVar0 = func_90(21, 24);
			break;
		
		case 16:
			uVar0 = func_90(23, 22);
			break;
		
		case 17:
			uVar0 = func_90(23, 26);
			break;
		
		case 18:
			uVar0 = func_90(22, 23);
			break;
		
		case 19:
			uVar0 = func_90(27, 27);
			break;
		
		case 20:
			uVar0 = func_90(27, 27);
			break;
		
		case 21:
			uVar0 = func_90(22, 25);
			break;
		
		case 22:
			uVar0 = func_90(23, 26);
			break;
		
		case 23:
			uVar0 = func_90(23, 26);
			break;
		
		case 24:
			uVar0 = func_90(23, 26);
			break;
		
		case 25:
			uVar0 = func_90(21, 21);
			break;
		
		case 26:
			uVar0 = func_90(27, 26);
			break;
		
		case 27:
			uVar0 = func_90(21, 22);
			break;
		
		case 28:
			uVar0 = func_90(23, 25);
			break;
		
		case 29:
			uVar0 = func_90(23, 26);
			break;
		
		case 30:
			uVar0 = func_90(23, 26);
			break;
		
		case 31:
			uVar0 = func_90(23, 26);
			break;
		
		case 32:
			uVar0 = func_90(23, 26);
			break;
		
		case 33:
			uVar0 = func_90(23, 26);
			break;
		
		case 34:
			uVar0 = func_90(23, 26);
			break;
		
		case 35:
			uVar0 = func_90(23, 26);
			break;
		
		case 36:
			uVar0 = func_90(23, 26);
			break;
		
		case 37:
			uVar0 = func_90(23, 26);
			break;
		
		case 38:
			uVar0 = func_90(23, 26);
			break;
		
		case 39:
			uVar0 = func_90(23, 26);
			break;
		
		case 40:
			uVar0 = func_90(23, 26);
			break;
		
		case 41:
			uVar0 = func_89();
			break;
		
		case 42:
			uVar0 = func_90(22, 25);
			break;
		
		case 43:
			uVar0 = func_90(27, 26);
			break;
		
		case 44:
			uVar0 = func_90(22, 25);
			break;
		
		case 45:
			uVar0 = func_90(22, 25);
			break;
		
		case 46:
			uVar0 = func_90(22, 25);
			break;
		
		case 47:
			uVar0 = func_90(22, 25);
			break;
		
		case 48:
			uVar0 = func_90(23, 26);
			break;
	}
	return uVar0;
}

int func_89()
{
	switch (GAMEPLAY::GET_NEXT_WEATHER_TYPE_HASH_NAME())
	{
		case 1420204096:
			iVar0 = 24;
			iVar1 = 22;
			break;
		
		case 1840358669:
		case -1530260698:
		case 916995460:
			iVar0 = 21;
			iVar1 = 27;
			break;
		
		case -1148613331:
		case 282916021:
			iVar0 = 26;
			iVar1 = 23;
			break;
		
		case -318724249:
		case 821931868:
			iVar0 = 26;
			iVar1 = 23;
			break;
		
		case -1233681761:
			iVar0 = 22;
			iVar1 = 24;
			break;
		
		case -273223690:
		case -1429616491:
			iVar0 = 27;
			iVar1 = 27;
			break;
		
		default:
			iVar0 = 26;
			iVar1 = 26;
			break;
	}
	return func_90(iVar0, iVar1);
}

int func_90(int iParam0, int iParam1)
{
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 2);
	iVar1 = -1;
	switch (iVar0)
	{
		case 0:
			iVar1 = iParam0;
			if (Local_156.f_63 == iParam0)
			{
				iVar1 = iParam1;
			}
			break;
		
		case 1:
			iVar1 = iParam1;
			if (Local_156.f_63 == iParam1)
			{
				iVar1 = iParam0;
			}
			break;
	}
	return iVar1;
}

int func_91()
{
	iVar0 = 49;
	if (Global_42599 != 0)
	{
		iVar0 = 41;
	}
	else if (!Global_262145.f_26342)
	{
		iVar0 = 48;
	}
	iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	uVar2 = func_63(27247, -1, -1);
	uVar3 = func_63(28250, -1, -1);
	uVar4 = func_63(28251, -1, -1);
	uVar5 = func_63(28252, -1, -1);
	iVar6 = 0;
	while ((((iVar1 == Local_156.f_2 || (iVar1 == 19 && uVar2)) || (iVar1 == 22 && uVar3)) || (iVar1 == 23 && uVar4)) || ((iVar1 == 24 && uVar5) && iVar6 < 10))
	{
		iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		iVar6++;
	}
	if (iVar6 >= 10)
	{
		iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 19);
	}
	return iVar1;
}

void func_92()
{
	Local_156.f_10 = func_75();
	Local_156.f_67.f_4 = 0;
	Local_156.f_67.f_3 = 0;
	func_78(&(Local_156.f_67), 1);
	func_19(&(Local_156.f_13), 0, 0);
	func_67(1);
}

void func_93()
{
	if (func_96())
	{
		func_66(&(Local_156.f_65), 1);
	}
	else if (func_95(PLAYER::PLAYER_ID()) == Local_156.f_66 && Local_156.f_66 == 11)
	{
		func_94();
	}
	else if (func_20(&(Local_156.f_17)))
	{
		func_5(&(Local_156.f_17));
	}
}

void func_94()
{
	if (!func_20(&(Local_156.f_17)))
	{
		if (func_26(8))
		{
			func_9(8);
			func_32(&(Local_156.f_17), 0, 0);
		}
		else
		{
			StringCopy(&Var0, "HS3MN_ATTRCT", 64);
			func_10(Var0, 0);
			if (Local_156.f_76.f_32)
			{
				func_32(&(Local_156.f_17), 0, 0);
			}
		}
	}
	else if (func_18(&(Local_156.f_17), 40000, 0))
	{
		func_5(&(Local_156.f_17));
	}
}

int func_95(int iParam0)
{
	if (iParam0 != func_22())
	{
		return Global_2425662[iParam0].f_416.f_3;
	}
	return -1;
}

int func_96()
{
	if (!func_98(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_97(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_95(PLAYER::PLAYER_ID()) != Local_156.f_66)
	{
		return 0;
	}
	return 1;
}

int func_97(int iParam0)
{
	if (iParam0 != func_22())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_416, 1);
	}
	return 0;
}

int func_98(int iParam0)
{
	if (iParam0 != func_22())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_416, 0);
	}
	return 0;
}

int func_99()
{
	if (func_106())
	{
		return 1;
	}
	if (!func_53())
	{
		return 1;
	}
	if (func_103(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_102(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_100(11))
	{
		return 1;
	}
	return 0;
}

bool func_100(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1702977, func_101(iParam0));
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		default:
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

int func_102(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 14))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_103(int iParam0)
{
	if (iParam0 != func_22() && func_16(iParam0, 1, 1))
	{
		if (func_105(iParam0) && !func_104(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_104(int iParam0)
{
	if (iParam0 != func_22() && func_16(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310, 4);
	}
	return 0;
}

int func_105(int iParam0)
{
	if (iParam0 != func_22() && func_16(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

bool func_106()
{
	return GAMEPLAY::IS_BIT_SET(Global_1702977, 0);
}

int func_107()
{
	func_115(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_114())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_113())
	{
		return 1;
	}
	if (func_112(159))
	{
		if (!func_111())
		{
			return 1;
		}
	}
	if (func_112(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_108() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_108()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_108()
{
	switch (func_110())
	{
		case 0:
			return func_109();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_109()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_110()
{
	return Global_30768;
}

bool func_111()
{
	return Global_2450632.f_598;
}

int func_112(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_113()
{
	return Global_2460680;
}

bool func_114()
{
	return Global_2450632.f_593;
}

void func_115(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_116(iVar0);
					break;
				
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_116(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_16(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_117(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_117(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_118()
{
	SYSTEM::WAIT(0);
}

void func_119()
{
	func_121(11, 0);
	func_120();
}

void func_120()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_121(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_100(iParam0))
		{
			GAMEPLAY::SET_BIT(&Global_1702977, func_101(iParam0));
		}
	}
	else if (func_100(iParam0))
	{
		GAMEPLAY::CLEAR_BIT(&Global_1702977, func_101(iParam0));
	}
}

void func_122(struct<18> Param0)
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, Param0);
	func_125(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_155, 1);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_122, 33);
	if (!func_124())
	{
		func_119();
	}
	Local_156.f_64 = Param0.f_1;
	Local_156.f_66 = Param0.f_17;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_119();
	}
	func_123();
}

void func_123()
{
	func_121(11, 0);
}

int func_124()
{
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_114())
		{
			return 0;
		}
		if (func_112(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_125(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_120();
			}
			else
			{
				return 0;
			}
		}
		if (!func_126())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_120();
					}
					else
					{
						return 0;
					}
				}
				if (func_114())
				{
					if (!bParam2)
					{
						func_120();
					}
					else
					{
						return 0;
					}
				}
				if (func_112(157))
				{
					if (!bParam2)
					{
						func_120();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_120();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_120();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_120();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_126()
{
	return Global_1312854;
}
