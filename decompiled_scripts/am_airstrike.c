void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_111(ScriptParam_0);
	}
	while (true)
	{
		func_110();
		if (func_99())
		{
			func_95();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_94();
			switch (func_93(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				case 0:
					if (func_92() > 0)
					{
						Local_300[NETWORK::PARTICIPANT_ID_TO_INT()] = 2;
					}
					break;
				
				case 2:
					if (func_92() == 3)
					{
						Local_300[NETWORK::PARTICIPANT_ID_TO_INT()] = 3;
					}
					break;
				
				case 3:
					func_95();
					break;
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (func_92())
				{
					case 0:
						Local_242 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	switch (Local_242.f_1)
	{
		case 0:
			func_26();
			break;
		
		case 1:
			func_25();
			break;
	}
	if (Local_242.f_2.f_2 == 3 && iLocal_57 == 0)
	{
		Local_242 = 3;
	}
	func_18();
	if (Local_242.f_53 && Local_242.f_50 < 10)
	{
		func_13();
	}
	if (Local_242.f_50 >= 10)
	{
		if (!func_12(&uLocal_69))
		{
			func_11(&uLocal_69, 0, 0);
		}
		else if (func_10(&uLocal_69, 10000, 0))
		{
			Local_242 = 3;
		}
	}
	if (func_9())
	{
		Local_242 = 3;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_42599, 10))
	{
		if (Local_242.f_55 == 1)
		{
			if (!Local_242.f_56)
			{
				if (((!UI::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_8("AIRSTRIKE_1")) || func_8("AIRSTRIKE_2")) || func_8("AIRSTRIKE_4"))
				{
					func_7("AIRSTRIKE_3", -1);
					Local_242.f_56 = 1;
				}
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_4(PLAYER::PLAYER_ID(), 1, 0))
		{
			Local_242 = 3;
		}
	}
	else if (func_4(PLAYER::PLAYER_ID(), 1, 0) || func_3())
	{
		Local_242 = 3;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		Local_242 = 3;
	}
	if (Global_2513890.f_223 || func_2(PLAYER::PLAYER_ID()))
	{
		Local_242 = 3;
	}
}

int func_2(int iParam0)
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

bool func_3()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 0);
}

int func_4(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_5(iParam0))
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

bool func_5(int iParam0)
{
	return func_6(iParam0);
}

bool func_6(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_13.f_1, 0);
}

void func_7(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_8(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_9()
{
	return Global_1312418;
}

int func_10(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
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

void func_11(var uParam0, bool bParam1, bool bParam2)
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

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

void func_13()
{
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar7 = 200;
	if (GAMEPLAY::IS_BIT_SET(Global_42599, 10))
	{
		iVar0 = 0;
		iVar7 = 300;
	}
	if (func_17(Local_63))
	{
		if (func_15(Local_242.f_2))
		{
			Local_63 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_242.f_2), 1) };
			Local_63.z = (Local_63.z - 5f);
		}
	}
	switch (Local_242.f_50)
	{
		case 0:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 };
					Var1.z = Local_63.z;
					Var4 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.z = (Var4.z - 25f);
					GAMEPLAY::_0xBFE5756E7407064A(Var1, Var4, iVar7, 1, 324506233, PLAYER::PLAYER_PED_ID(), 1, 0, -1f, iVar0, 1, 1, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					iLocal_57 = 1;
					GAMEPLAY::SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 750, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 1:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, 5f, 5f) };
					Var1.z = Local_63.z;
					Var4 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, 5f, 5f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.z = (Var4.z - 25f);
					GAMEPLAY::_0xBFE5756E7407064A(Var1, Var4, iVar7, 1, 324506233, NETWORK::NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					GAMEPLAY::SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 2:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, -5f, -5f) };
					Var1.z = Local_63.z;
					Var4 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, -5f, -5f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.z = (Var4.z - 25f);
					GAMEPLAY::_0xBFE5756E7407064A(Var1, Var4, iVar7, 1, 324506233, NETWORK::NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					GAMEPLAY::SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 3:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, 5f, -5f) };
					Var1.z = Local_63.z;
					Var4 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, 5f, -5f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.z = (Var4.z - 25f);
					GAMEPLAY::_0xBFE5756E7407064A(Var1, Var4, iVar7, 1, 324506233, NETWORK::NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					GAMEPLAY::SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 750, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 4:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, -5f, 5f) };
					Var1.z = Local_63.z;
					Var4 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, -5f, 5f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.z = (Var4.z - 25f);
					GAMEPLAY::_0xBFE5756E7407064A(Var1, Var4, iVar7, 1, 324506233, NETWORK::NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					GAMEPLAY::SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 5:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, 5f, 10f) };
					Var1.z = Local_63.z;
					Var4 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, 5f, 10f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.z = (Var4.z - 25f);
					GAMEPLAY::_0xBFE5756E7407064A(Var1, Var4, iVar7, 1, 324506233, NETWORK::NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					GAMEPLAY::SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 750, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 6:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, 10f, 10f) };
					Var1.z = Local_63.z;
					Var4 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, 10f, 10f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.z = (Var4.z - 25f);
					GAMEPLAY::_0xBFE5756E7407064A(Var1, Var4, iVar7, 1, 324506233, NETWORK::NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					GAMEPLAY::SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 7:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, -10f, -10f) };
					Var1.z = Local_63.z;
					Var4 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, -10f, -10f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.z = (Var4.z - 25f);
					GAMEPLAY::_0xBFE5756E7407064A(Var1, Var4, iVar7, 1, 324506233, NETWORK::NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					GAMEPLAY::SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 8:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, 10f, -10f) };
					Var1.z = Local_63.z;
					Var4 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, 10f, -10f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.z = (Var4.z - 25f);
					GAMEPLAY::_0xBFE5756E7407064A(Var1, Var4, iVar7, 1, 324506233, NETWORK::NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					GAMEPLAY::SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 9:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, -10f, 10f) };
					Var1.z = Local_63.z;
					Var4 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0f, -10f, 10f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.z = (Var4.z - 25f);
					GAMEPLAY::_0xBFE5756E7407064A(Var1, Var4, iVar7, 1, 324506233, NETWORK::NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					Local_242.f_50++;
					iLocal_57 = 0;
					GAMEPLAY::SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			break;
	}
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_15(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_16(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_16(int iParam0)
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

int func_17(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_18()
{
	if (func_15(Local_242.f_2))
	{
		uVar0 = NETWORK::NET_TO_VEH(Local_242.f_2);
		Var4 = { ENTITY::GET_ENTITY_COORDS(uVar0, 1) };
	}
	if (!iLocal_59)
	{
		if (!func_17(Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2))
		{
			Var1 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 };
		}
		else if (func_24(PLAYER::PLAYER_ID(), 1, 1))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
	}
	if (iLocal_58 && !GAMEPLAY::IS_BIT_SET(Global_42599, 10))
	{
		if (!iLocal_59)
		{
			if (func_15(Local_242.f_2))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_60, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_66 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var4, Var1, 0);
				}
				else
				{
					iLocal_59 = 1;
				}
			}
			else
			{
				iLocal_59 = 1;
			}
		}
		else
		{
			fLocal_66 = (fLocal_66 - 3.75f);
		}
		iVar7 = SYSTEM::FLOOR(fLocal_66);
		if (fLocal_66 <= 200f)
		{
			iVar8 = 6;
		}
		else
		{
			iVar8 = 1;
		}
		if (fLocal_66 >= 0f)
		{
			func_19(iVar7, "AIRSTRIKE_2", -1, iVar8, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar8, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
	}
}

void func_19(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_23(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_22(6, iVar0);
		Global_1378678.f_3944[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_3944.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_3944.f_183[iVar0] = iParam3;
		Global_1378678.f_3944.f_172[iVar0] = iParam2;
		Global_1378678.f_3944.f_260[iVar0] = iParam4;
		Global_1378678.f_3944.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378678.f_3944.f_282[iVar0]), sParam6, 64);
		Global_1378678.f_3944.f_443[iVar0] = iParam7;
		Global_1378678.f_3944.f_454[iVar0] = fParam8;
		Global_1378678.f_3944.f_497[iVar0] = iParam9;
		Global_1378678.f_3944.f_508[iVar0] = iParam10;
		Global_1378678.f_3944.f_205[iVar0] = iParam11;
		Global_1378678.f_3944.f_216[iVar0] = iParam12;
		Global_1378678.f_3944.f_227[iVar0] = iParam13;
		Global_1378678.f_3944.f_238[iVar0] = iParam14;
		Global_1378678.f_3944.f_249[iVar0] = iParam15;
		Global_1378678.f_3944.f_519[iVar0] = iParam16;
		Global_1378678.f_3944.f_530[iVar0] = iParam17;
		Global_1378678.f_3944.f_541[iVar0] = iParam18;
		Global_1378678.f_3944.f_552[iVar0] = iParam19;
		Global_1378678.f_3944.f_563[iVar0] = iParam20;
		Global_1378678.f_3944.f_574[iVar0] = iParam21;
		Global_1378678.f_3944.f_585[iVar0] = iParam22;
		Global_1378678.f_3944.f_596[iVar0] = iParam23;
		Global_1378678.f_3944.f_607[iVar0] = iParam24;
		Global_1378678.f_3944.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_21())
		{
			Global_1378678.f_1130 = 1;
		}
		if (GAMEPLAY::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1378678.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1378678.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378678.f_1130 = 1;
			}
			if (func_20())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

int func_20()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_21()
{
	if (((UNK::_GET_CURRENT_LANGUAGE_ID() == 8 || UNK::_GET_CURRENT_LANGUAGE_ID() == 9) || UNK::_GET_CURRENT_LANGUAGE_ID() == 10) || UNK::_GET_CURRENT_LANGUAGE_ID() == 12)
	{
		return 1;
	}
	return 0;
}

void func_22(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_23(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

int func_24(int iParam0, bool bParam1, bool bParam2)
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

void func_25()
{
}

void func_26()
{
	func_90();
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!iLocal_56 && !GAMEPLAY::IS_BIT_SET(Global_42599, 10))
			{
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) <= 0)
				{
					bVar3 = !func_89();
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), 1233104067, 1, bVar3, bVar3);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 1233104067, bVar3);
					iLocal_56 = 1;
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_42599, 10) || GAMEPLAY::_0xDFB4138EEFED7B81(PLAYER::PLAYER_PED_ID(), 1233104067, 100f, &(Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 1))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_42599, 10))
				{
					Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				}
				else if (func_88(Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 0f, 0f, 0f, 0))
				{
					Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 = { Var0 };
				}
				if (func_8("AIRSTRIKE_1"))
				{
					UI::CLEAR_HELP(1);
				}
				if (!iLocal_55)
				{
					if (!func_87(Local_242.f_2.f_3))
					{
						if (func_15(Local_242.f_2))
						{
							func_86();
							AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_242.f_2.f_3));
							AI::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_242.f_2.f_3), uLocal_49);
							VEHICLE::_SET_PLANE_MIN_HEIGHT_ABOVE_GROUND(NETWORK::NET_TO_VEH(Local_242.f_2), SYSTEM::ROUND(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54 && !GAMEPLAY::IS_BIT_SET(Global_42599, 10))
			{
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (func_85(PLAYER::PLAYER_PED_ID()))
					{
						func_7("AIRSTRIKE_4", -1);
					}
					else
					{
						func_7("AIRSTRIKE_1", -1);
					}
					iLocal_54 = 1;
				}
			}
		}
	}
	func_56();
	func_27();
}

void func_27()
{
	switch (Local_242.f_2.f_2)
	{
		case 0:
			func_55();
			break;
		
		case 1:
			func_55();
			break;
		
		case 2:
			if (func_15(Local_242.f_2))
			{
				iLocal_58 = 1;
				uVar0 = NETWORK::NET_TO_VEH(Local_242.f_2);
				if (!UI::DOES_BLIP_EXIST(uLocal_47))
				{
					uLocal_47 = UI::ADD_BLIP_FOR_ENTITY(uVar0);
					UI::SET_BLIP_SPRITE(uLocal_47, 16);
					UI::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_47, "AIRSTRIKE_5");
					UI::_0x75A16C3DA34F1245(uLocal_47, 0);
				}
				else
				{
					UI::SET_BLIP_ROTATION(uLocal_47, SYSTEM::CEIL(ENTITY::GET_ENTITY_HEADING(uVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_17(Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2))
					{
						Var7 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 };
					}
					else
					{
						Var7 = { Local_60 };
					}
					if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var7, ENTITY::GET_ENTITY_COORDS(uVar0, 1), 1) <= (60f * 5f))
					{
						AUDIO::PLAY_STREAM_FROM_VEHICLE(NETWORK::NET_TO_VEH(Local_242.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_239 && !GAMEPLAY::IS_BIT_SET(Global_42599, 10))
				{
					if (!Local_242.f_54)
					{
						if (!func_87(Local_242.f_2.f_3))
						{
							if (!func_17(Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2))
							{
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_54(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_242.f_2.f_3), 1), 0) <= 250f)
								{
									if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var7, ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) >= (60f * 2.5f))
									{
										func_31(&uLocal_73, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
										iLocal_239 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_242.f_50 < 10)
				{
					if (!Local_242.f_53)
					{
						if (!func_17(Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2))
						{
							if (func_30() == 2)
							{
								if (!func_12(&uLocal_67))
								{
									func_11(&uLocal_67, 0, 0);
								}
								else if (func_10(&uLocal_67, 7500, 0))
								{
									Local_242.f_53 = 1;
								}
								Var1 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 - Vector(1000f, 25f, 25f) };
								Var4 = { Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(1000f, 25f, 25f) };
								Var1.z = -200f;
								Var4.z = 1500f;
								if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 75f, 75f, 1000f, 0, 1, 0) && GAMEPLAY::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var4, 1233104067, 0))
								{
									Local_242.f_53 = 1;
								}
							}
							else if (func_30() == 1)
							{
								Local_242.f_53 = 1;
								Local_242.f_50 = 100;
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_60, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_242.f_53 = 1;
							Local_242.f_50 = 100;
							Local_242.f_54 = 1;
							if (!iLocal_240 && !GAMEPLAY::IS_BIT_SET(Global_42599, 10))
							{
								func_31(&uLocal_73, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								iLocal_240 = 1;
							}
						}
					}
				}
			}
			if (!func_15(Local_242.f_2) || func_87(Local_242.f_2.f_3))
			{
				func_28();
			}
			break;
		
		case 3:
			func_55();
			break;
	}
}

void func_28()
{
	if (!func_87(Local_242.f_2.f_3))
	{
		if (func_29(Local_242.f_2.f_3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_242.f_2.f_3))
			{
				uVar0 = NETWORK::NET_TO_PED(Local_242.f_2.f_3);
				ENTITY::SET_ENTITY_HEALTH(uVar0, 0, 0);
			}
		}
	}
}

int func_29(var uParam0)
{
	if (NETWORK::_0xA1607996431332DF(uParam0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_30()
{
	if (Local_242.f_55 == 1)
	{
		return Local_242.f_55;
	}
	else if (Local_242.f_55 == 2)
	{
		return Local_242.f_55;
	}
	if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_242.f_55 = 1;
		return Local_242.f_55;
	}
	Local_242.f_55 = 2;
	return Local_242.f_55;
}

int func_31(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_53(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_32(sParam2, iParam3, 0);
}

int func_32(char* sParam0, int iParam1, bool bParam2)
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
					func_52();
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
		if (func_51(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_50();
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
				func_42();
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
				if (func_41())
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
			if (func_40())
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
			func_39();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_38();
		func_33();
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
		func_52();
	}
	return 0;
}

void func_33()
{
	if (!func_34())
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

int func_34()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_37())
	{
		return 0;
	}
	if (func_35(PLAYER::PLAYER_ID()))
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

bool func_35(int iParam0)
{
	return func_36(iParam0, 20);
}

bool func_36(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_37()
{
	return -1;
}

void func_38()
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

void func_39()
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

int func_40()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_41()
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

void func_42()
{
	if (func_49(14))
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
		Global_19486 = func_43();
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

var func_43()
{
	func_44();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_44()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_47(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_46(PLAYER::PLAYER_PED_ID());
			if (func_45(iVar0) && (!func_49(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_45(Global_111638.f_2358.f_539.f_4321))
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

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return func_48(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_48(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_49(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_50()
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

bool func_51(int iParam0, int iParam1)
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

void func_52()
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

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
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

Vector3 func_54(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

void func_55()
{
	if (UI::DOES_BLIP_EXIST(uLocal_47))
	{
		UI::REMOVE_BLIP(&uLocal_47);
	}
}

void func_56()
{
	switch (Local_242.f_2.f_2)
	{
		case 0:
			func_84(1);
			break;
		
		case 1:
			if (func_57())
			{
				func_84(2);
			}
			break;
		
		case 2:
			if (!func_15(Local_242.f_2))
			{
				if (func_87(Local_242.f_2.f_3))
				{
					func_84(3);
				}
			}
			else if (func_87(Local_242.f_2.f_3))
			{
				func_84(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_57()
{
	if (!func_12(&uLocal_71))
	{
		func_11(&uLocal_71, 0, 0);
	}
	else if (func_83(Local_242.f_2.f_1) && func_83(Local_242.f_2.f_3.f_1))
	{
		if (func_10(&uLocal_71, 3000, 0))
		{
			if (func_61() && func_58())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_58()
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_242.f_2.f_3) && func_83(Local_242.f_2.f_3.f_1)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_242.f_2))
	{
		if (func_15(Local_242.f_2))
		{
			if (func_60(&(Local_242.f_2.f_3), Local_242.f_2, 22, Local_242.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_242.f_2.f_3), 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_242.f_2.f_3), Global_1575000);
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_242.f_2.f_3), 0);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_242.f_2.f_3), 1);
				func_59();
				AI::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_242.f_2.f_3), uLocal_48);
				VEHICLE::_SET_PLANE_MIN_HEIGHT_ABOVE_GROUND(NETWORK::NET_TO_VEH(Local_242.f_2), SYSTEM::ROUND(50f));
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_242.f_2.f_3))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_242.f_2.f_3.f_1);
	return 1;
}

void func_59()
{
	if (!iLocal_50)
	{
		if (func_15(Local_242.f_2))
		{
			AI::OPEN_SEQUENCE_TASK(&uLocal_48);
			AI::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_242.f_2), 0, 0, Local_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 20, 1);
			AI::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_242.f_2), 0, 0, Local_242.f_2.f_14, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 20, 1);
			AI::CLOSE_SEQUENCE_TASK(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_60(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_REGISTER(NETWORK::NET_TO_PED(*uParam0), iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_61()
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_242.f_2))
	{
		if (func_83(Local_242.f_2.f_1))
		{
			if (AUDIO::LOAD_STREAM("AIRSTRIKE_FLYOVER", 0))
			{
				func_79(&Var0, &uVar3);
				if (func_65(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_62(&(Local_242.f_2), Local_242.f_2.f_1, Var0, uVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						Local_242.f_2.f_14 = { Var0 * Vector(0f, -1f, -1f) };
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_242.f_2), 2);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_242.f_2), 0);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_242.f_2), 1);
						ROPE::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_242.f_2));
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_242.f_2), 60f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_242.f_2), 1, 1, 0);
						VEHICLE::_0x79DF7E806202CE01(NETWORK::NET_TO_VEH(Local_242.f_2), 1000);
						ENTITY::_SET_ENTITY_REGISTER(NETWORK::NET_TO_VEH(Local_242.f_2), 0);
						VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_242.f_2), 3);
						VEHICLE::OPEN_BOMB_BAY_DOORS(NETWORK::NET_TO_VEH(Local_242.f_2));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_242.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_62(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		GAMEPLAY::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2537071.f_6516 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(iVar1, 1);
			}
			ENTITY::_SET_ENTITY_REGISTER(iVar1, iParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
				}
				if (bParam13)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), 1);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, iParam9);
			unk_0xB2E0C0D6922D31F2(iVar1, 1);
			if (bParam12)
			{
				unk_0xFC40CBF7B90CA77C(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_63(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_63(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_64(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2405072.f_2912[1].f_5 == iParam5 && Global_2405072.f_2912[1].f_4 == iParam4) && SYSTEM::VDIST(Global_2405072.f_2912[1], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405072.f_2912[iVar0] = { Global_2405072.f_2912[iVar0 + 1] };
			}
			iVar0++;
		}
		Global_2405072.f_2912[1] = { Param0 };
		Global_2405072.f_2912[1].f_3 = uParam3;
		Global_2405072.f_2912[1].f_4 = iParam4;
		Global_2405072.f_2912[1].f_5 = iParam5;
	}
}

int func_64(int iParam0, struct<3> Param1, int iParam4)
{
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417897.f_461[iVar0][iVar1].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (GAMEPLAY::ABSF((Global_2417897.f_461[iVar0][iVar1].f_2 - Var2.z)) < 2f)
				{
					Var2.z = Global_2417897.f_461[iVar0][iVar1].f_2;
				}
				if (SYSTEM::VDIST(Global_2417897.f_461[iVar0][iVar1], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_65(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405072.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.x, Param0.y, (Param0.z + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (fParam14 > 0f)
	{
		if (func_73(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_66(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_66(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	if (iParam4 && !bParam7)
	{
		if (func_24(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_71(PLAYER::PLAYER_ID()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_24(iVar1, 1, 1))
		{
			if (!func_68(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_67(iVar1) || !bParam10) && !Global_2425662[iVar1].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_71(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_71(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2425662[iParam0].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_68(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_69(-1, 0) == 8;
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

int func_69(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_70();
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

int func_70()
{
	return Global_1312745;
}

Vector3 func_71(int iParam0)
{
	iVar0 = iParam0;
	if ((func_72() && Global_1590535[iVar0].f_847) && !func_17(Global_1590535[iVar0].f_848))
	{
		return Global_1590535[iVar0].f_848;
	}
	return func_54(iParam0);
}

var func_72()
{
	return Global_2450632.f_17;
}

int func_73(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_24(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_67(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_74(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_54(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0)
{
	if (func_78(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_77(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2513218))
	{
		return 1;
	}
	if (func_75(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0, int iParam1)
{
	iVar0 = func_76(iParam0);
	if (!iVar0 == func_37())
	{
		if (iVar0 == func_76(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	if (iParam0 != func_37())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_37();
}

struct<13> func_77(var uParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

int func_78(int iParam0, var uParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2513218 = { func_77(iParam0) };
		Global_2513231 = { func_77(uParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513218))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513231))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_79(var uParam0, var uParam1)
{
	*uParam0 = { func_81(Local_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = PATHFIND::_0x8ABE8608576D9CE3((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_80(*uParam0, Local_60);
}

var func_80(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return GAMEPLAY::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_81(struct<3> Param0, float fParam3, float fParam4, float fParam5)
{
	Var0 = { GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	Var0 = { func_82(Var0, GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(fParam3, fParam4)) };
	Var0.z = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return Param0 + Var0;
}

Vector3 func_82(struct<3> Param0, float fParam3)
{
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_83(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_84(int iParam0)
{
	Local_242.f_2.f_2 = iParam0;
}

int func_85(int iParam0)
{
	if (PED::IS_PED_IN_ANY_HELI(iParam0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_86()
{
	if (!iLocal_51)
	{
		if (func_15(Local_242.f_2))
		{
			AI::OPEN_SEQUENCE_TASK(&uLocal_49);
			AI::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_242.f_2), 0, 0, Local_300[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 20, 1);
			AI::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_242.f_2), 0, 0, Local_242.f_2.f_14, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 20, 1);
			AI::CLOSE_SEQUENCE_TASK(uLocal_49);
			iLocal_51 = 1;
		}
	}
}

int func_87(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

bool func_88(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

bool func_89()
{
	return Global_98796.f_345 > 0;
}

void func_90()
{
	if (!iLocal_238)
	{
		if (!func_87(Local_242.f_2.f_3))
		{
			func_91(&uLocal_73, 3, NETWORK::NET_TO_PED(Local_242.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_238 = 1;
		}
	}
}

void func_91(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
	}
	(*uParam0)[iParam1] = uParam2;
	StringCopy(&(uParam0[iParam1]->f_1), sParam3, 24);
	uParam0[iParam1]->f_7 = 1;
	uParam0[iParam1]->f_8 = iParam4;
	uParam0[iParam1]->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if (uParam0[iParam1]->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if (uParam0[iParam1]->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
			}
		}
	}
}

int func_92()
{
	return Local_242;
}

int func_93(int iParam0)
{
	return Local_300[iParam0];
}

void func_94()
{
}

void func_95()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_242.f_2.f_3) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_242.f_2))
	{
		if (func_15(Local_242.f_2) && !func_87(Local_242.f_2.f_3))
		{
			AI::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_242.f_2.f_3), NETWORK::NET_TO_VEH(Local_242.f_2), 0, PLAYER::PLAYER_PED_ID(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400, 1);
		}
	}
	func_97(func_98(1, 1), 11, func_37());
	func_96();
}

void func_96()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_97(int iParam0, int iParam1, var uParam2)
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

int func_98(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_24(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_68(iVar2, 0))
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_99()
{
	func_107(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_106())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_105())
	{
		return 1;
	}
	if (func_104(159))
	{
		if (!func_103())
		{
			return 1;
		}
	}
	if (func_104(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_100() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_100()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_100()
{
	switch (func_102())
	{
		case 0:
			return func_101();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_101()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_102()
{
	return Global_30768;
}

bool func_103()
{
	return Global_2450632.f_598;
}

int func_104(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_105()
{
	return Global_2460680;
}

bool func_106()
{
	return Global_2450632.f_593;
}

void func_107(var uParam0)
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
					func_108(iVar0);
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

void func_108(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_24(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_109(uVar4, &bVar5))
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

int func_109(int iParam0, var uParam1)
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

void func_110()
{
	SYSTEM::WAIT(0);
}

void func_111(struct<21> Param0)
{
	func_117(func_118(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_115(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_242, 58);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_300, 11);
	GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_114())
	{
		func_95();
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		Local_60 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	}
	if (func_4(PLAYER::PLAYER_ID(), 1, 0))
	{
		bLocal_52 = true;
	}
	func_112(64, 1);
	Local_300[NETWORK::PARTICIPANT_ID_TO_INT()] = 0;
}

void func_112(int iParam0, bool bParam1)
{
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_113()].f_6174.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_113()].f_6174.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_113()].f_6174.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_113()].f_6174.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_113()].f_6174.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_113()].f_6174.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_113()].f_6174.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_113()].f_6174.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_113()].f_6174.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_113()].f_6174.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_113()].f_6174.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_113()].f_6174.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_113()].f_6174.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_113()].f_6174.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_113()].f_6174.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_113()].f_6174.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_113()].f_6174.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_113()].f_6174.f_30 = iVar0;
			break;
	}
}

int func_113()
{
	iVar0 = 0;
	return iVar0;
}

int func_114()
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
		if (func_106())
		{
			return 0;
		}
		if (func_104(157))
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

int func_115(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_96();
			}
			else
			{
				return 0;
			}
		}
		if (!func_116())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_96();
					}
					else
					{
						return 0;
					}
				}
				if (func_106())
				{
					if (!bParam2)
					{
						func_96();
					}
					else
					{
						return 0;
					}
				}
				if (func_104(157))
				{
					if (!bParam2)
					{
						func_96();
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
					func_96();
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
				func_96();
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
			func_96();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_116()
{
	return Global_1312854;
}

void func_117(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_96();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 137:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 148:
			return 2;
		
		case 153:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 4;
		
		case 151:
			return 2;
		
		case 152:
			return 2;
		
		case 134:
			return 1;
		
		case 154:
			return 2;
		
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		
		case 176:
			return 1;
		
		case 161:
			return 4;
		
		case 164:
			return 4;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 172:
			return 1;
		
		case 168:
			return 2;
		
		case 173:
			return 1;
		
		case 169:
			return 1;
		
		case 167:
			return 2;
		
		case 170:
			return 8;
		
		case 171:
			return 8;
		
		case 174:
			return 1;
		
		case 162:
			return 16;
		
		case 163:
			return 32;
		
		default:
	}
	return 0;
}
