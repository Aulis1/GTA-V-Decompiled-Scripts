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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_221(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_208(ScriptParam_0);
	}
	else
	{
		func_204();
	}
	while (true)
	{
		func_203();
		if (func_192() || func_188(15))
		{
			func_204();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_204();
		}
		switch (func_187(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_186() == 1)
				{
					if (func_185(60000))
					{
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_2))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_73.f_2), 0))
							{
								if (!func_183())
								{
									if (!GAMEPLAY::IS_BIT_SET(Local_73.f_1, 0))
									{
										func_182("PTD_HELP1", -1);
									}
									else
									{
										func_182("PTD_HELP1H", -1);
									}
								}
							}
						}
					}
					Local_101[NETWORK::PARTICIPANT_ID_TO_INT()] = 1;
				}
				else if (func_186() == 4)
				{
					Local_101[NETWORK::PARTICIPANT_ID_TO_INT()] = 3;
				}
				break;
			
			case 1:
				if (func_186() == 1)
				{
					func_22();
				}
				else if (func_186() == 4)
				{
					Local_101[NETWORK::PARTICIPANT_ID_TO_INT()] = 3;
				}
				break;
			
			case 3:
				func_21(&(Local_73.f_24));
				if (func_20(&(Local_73.f_24)))
				{
					Local_101[NETWORK::PARTICIPANT_ID_TO_INT()] = 4;
				}
				break;
			
			case 2:
				Local_101[NETWORK::PARTICIPANT_ID_TO_INT()] = 4;
			
			case 4:
				func_204();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_186())
			{
				case 0:
					if (func_11())
					{
						Local_73 = 1;
					}
					break;
				
				case 1:
					func_10();
					func_9();
					if (func_1())
					{
						Local_73 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_7(Local_73.f_2))
	{
		if (Local_73.f_22 > 0)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_2))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_VEH(Local_73.f_2), 400f, -3850f, -50f, 400f, 7950f, 1000f, 4050f, 0, 1, 0))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_73.f_1, 0))
					{
						Var0.f_2 = 1919748918;
					}
					else
					{
						Var0.f_2 = -430230173;
					}
					func_5(Var0, func_6(1));
					GAMEPLAY::SET_BIT(&(Local_73.f_1), 1);
					return 1;
				}
			}
		}
	}
	if (Local_73.f_23 == 0)
	{
		if (Local_73 != 4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_2))
			{
				if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_73.f_2), 0))
				{
					if (func_3(&(Local_73.f_26), 3000, 0))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_73.f_1, 0))
						{
							Var14.f_2 = -25272461;
						}
						else
						{
							Var14.f_2 = -1451024071;
						}
						func_5(Var14, func_6(1));
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

void func_4(var uParam0, bool bParam1, bool bParam2)
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

void func_5(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_6(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_221(iVar2, 0, 0))
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

int func_7(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_8(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_8(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
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

void func_9()
{
	switch (Local_73.f_23)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_10()
{
	if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_73.f_2), 0))
	{
		if (Local_73 != 4)
		{
			iLocal_199 = 0;
			while (iLocal_199 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_199)))
				{
					uVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_199));
					if (GAMEPLAY::IS_BIT_SET(Local_101[iLocal_199].f_1, 0))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_73.f_1, 0))
						{
							Var0.f_2 = 1393757853;
						}
						else
						{
							Var0.f_2 = -1380476051;
						}
						Var0.f_10 = uVar14;
						func_5(Var0, func_6(1));
						Local_73 = 4;
						return;
					}
					if (GAMEPLAY::IS_BIT_SET(Local_101[iLocal_199].f_1, 1))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_73.f_1, 2))
						{
							GAMEPLAY::SET_BIT(&(Local_73.f_1), 2);
						}
					}
				}
				iLocal_199++;
			}
		}
	}
}

int func_11()
{
	if (func_19(Local_73.f_4) && func_19(Local_73.f_5))
	{
		if (func_14() && func_12())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_73.f_4);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_73.f_5);
			return 1;
		}
	}
	return 0;
}

int func_12()
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_3) && func_19(Local_73.f_5)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_2))
	{
		if (func_7(Local_73.f_2))
		{
			if (func_13(&(Local_73.f_3), Local_73.f_2, 22, Local_73.f_5, -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_73.f_3), 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_73.f_3), Global_1575002);
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_73.f_3), 0);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_73.f_3), 1);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_3))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_14()
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_2))
	{
		if (func_19(Local_73.f_4))
		{
			if (func_15(&(Local_73.f_2), Local_73.f_4, Local_73.f_6, func_18(Local_73.f_6, Local_73.f_9[0]), 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_73.f_2), 2);
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_73.f_2), 0);
				ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_73.f_2), 1);
				ROPE::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_73.f_2));
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_73.f_2), 30f);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_73.f_2));
				VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_73.f_2), 1, 1, 0);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(NETWORK::NET_TO_VEH(Local_73.f_2), 0);
				ENTITY::_SET_ENTITY_REGISTER(NETWORK::NET_TO_VEH(Local_73.f_2), 0);
				if (Local_73.f_4 == -644710429)
				{
					VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_73.f_2), 3);
				}
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_73.f_2), "MPBitset"))
					{
						uVar0 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_73.f_2), "MPBitset");
					}
					GAMEPLAY::SET_BIT(&uVar0, 10);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_73.f_2), "MPBitset", uVar0);
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_2))
	{
		return 0;
	}
	return 1;
}

int func_15(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
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
			func_16(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_16(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_17(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
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

int func_17(int iParam0, struct<3> Param1, int iParam4)
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

var func_18(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return GAMEPLAY::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

int func_19(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_20(var uParam0)
{
	if (uParam0->f_1)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_21(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_4(uParam0, 0, 0);
		}
	}
}

void func_22()
{
	switch (Local_101[NETWORK::PARTICIPANT_ID_TO_INT()].f_2)
	{
		case 0:
			func_180();
			func_23();
			if (Local_73.f_23 > 0)
			{
				Local_101[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 = 1;
			}
			break;
		
		case 1:
			func_204();
			break;
	}
}

void func_23()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_2))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 0))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_73.f_2), 0))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_73.f_2), 0))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_73.f_2), 0))
			{
				if (PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_73.f_2, &uVar0))
				{
					func_179(2061, -1);
					iVar1 = func_178(2061, -1, 0);
					iVar2 = iVar1;
					if (iVar2 > Global_262145.f_8099)
					{
						iVar2 = Global_262145.f_8099;
					}
					iVar3 = (Global_262145.f_8097 * iVar2);
					func_124(0, PLAYER::PLAYER_PED_ID(), "XPT_KAIE", -875716015, -1219286988, iVar3, 1, -1, 0, 0, 0);
					if (iVar1 > Global_262145.f_8098)
					{
						iVar1 = Global_262145.f_8098;
					}
					iVar4 = (Global_262145.f_8096 * iVar1);
					func_120(iVar4, 1, 1, 1092616192);
					Global_2462880 = iVar4;
					func_61(&iVar4, 1);
					if (iVar4 > 0)
					{
						if (func_60())
						{
							func_48(1780666425, iVar4, &uVar9, 0, 0, 0);
						}
						else
						{
							NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_PLANE_TAKEDOWN", &uVar5);
						}
					}
					func_43(65, 1, -1);
					if (func_42())
					{
						func_29(2, "PTD_PASS0", 0, 0, -99);
					}
					else
					{
						func_29(2, "PTD_PASS1", 0, 0, -99);
					}
					GAMEPLAY::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 0);
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (Local_73.f_22 < 4)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_VEH(Local_73.f_2), Local_73.f_9[Local_73.f_22], 50f, 50f, 500f, 0, 1, 0))
						{
							Local_73.f_22++;
						}
					}
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_73.f_2))
				{
					func_27();
					if (func_26())
					{
						if (func_25(Local_73.f_2) && func_25(Local_73.f_3))
						{
							NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_73.f_2), 1, 1, -1);
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_73.f_2))
							{
								func_24(&(Local_73.f_2));
							}
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_73.f_3))
							{
								PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_73.f_3), 1);
								func_24(&(Local_73.f_3));
							}
						}
					}
				}
			}
		}
	}
}

void func_24(var uParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
	}
}

int func_25(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_26()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_2))
	{
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_73.f_2), 0, 7000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_73.f_2), 1, 40000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_73.f_2), 3, 30000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_73.f_2), 2, 30000))
		{
			return 1;
		}
	}
	return 0;
}

void func_27()
{
	if (func_7(Local_73.f_2) && !func_28(Local_73.f_3))
	{
		if (PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_73.f_3), NETWORK::NET_TO_VEH(Local_73.f_2), 0))
		{
			if (Local_73.f_22 < 4)
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_73.f_1, 0))
				{
					AI::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_73.f_3), NETWORK::NET_TO_VEH(Local_73.f_2), 0, 0, Local_73.f_9[Local_73.f_22] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, 1);
				}
				else
				{
					AI::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_73.f_3), NETWORK::NET_TO_VEH(Local_73.f_2), 0, 0, Local_73.f_9[Local_73.f_22] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, -1082130432, 0);
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_73.f_1, 2) && !GAMEPLAY::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 1))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_VEH(Local_73.f_2), 0f, 12000f, 0f) };
				if (Var0.x < -3700f)
				{
					Var0.x = -3700f;
				}
				else if (Var0.x > 4500f)
				{
					Var0.x = 4500f;
				}
				if (Var0.y < -3900f)
				{
					Var0.y = -3900f;
				}
				else if (Var0.y > 8000f)
				{
					Var0.y = 8000f;
				}
				Var0.z = 100f;
				if (!GAMEPLAY::IS_BIT_SET(Local_73.f_1, 0))
				{
					AI::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_73.f_3), NETWORK::NET_TO_VEH(Local_73.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100, 1);
				}
				else
				{
					AI::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_73.f_3), NETWORK::NET_TO_VEH(Local_73.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100, -1082130432, 0);
				}
				GAMEPLAY::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 1);
			}
		}
	}
}

int func_28(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

void func_29(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_30(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_30(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	uVar0 = uParam1;
	bVar1 = false;
	func_31(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_31(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (UI::_0x43E4111189E54F0E(sParam1) > 15)
	{
		return;
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		if (UI::_0x43E4111189E54F0E(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_40();
	if (iVar0 == -1)
	{
		return;
	}
	func_39(iVar0);
	func_38(iVar0, uParam0);
	func_37(iVar0, uParam2, bParam3);
	func_36(iVar0, sParam1);
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_35(iVar0);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_33(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_32(iVar0, iParam6);
	}
}

void func_32(int iParam0, int iParam1)
{
	Global_1370527.f_59[iParam0].f_15 = iParam1;
}

void func_33(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1370527.f_59[iParam0].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_34(iParam0);
}

void func_34(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1370527.f_59[iParam0]), 5);
}

void func_35(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1370527.f_59[iParam0]), 4);
}

void func_36(int iParam0, char* sParam1)
{
	StringCopy(&Var0, sParam1, 16);
	Global_1370527.f_59[iParam0].f_3 = { Var0 };
}

void func_37(int iParam0, var uParam1, bool bParam2)
{
	Global_1370527.f_59[iParam0].f_2 = uParam1;
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_1370527.f_59[iParam0]), 2);
		GAMEPLAY::CLEAR_BIT(&(Global_1370527.f_59[iParam0]), 3);
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_1370527.f_59[iParam0]), 3);
		GAMEPLAY::CLEAR_BIT(&(Global_1370527.f_59[iParam0]), 2);
	}
}

void func_38(int iParam0, var uParam1)
{
	Global_1370527.f_59[iParam0].f_1 = uParam1;
}

void func_39(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1370527.f_59[iParam0]), 0);
}

int func_40()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_41(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_41(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1370527.f_59[iParam0], 0);
}

int func_42()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_43(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_45(iParam0, func_46(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_44(iParam0, iVar0, iParam2);
}

void func_44(int iParam0, int iParam1, int iParam2)
{
	iVar0 = Global_2585280[iParam0][func_46(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_45(int iParam0, int iParam1)
{
	uVar0 = Global_2585280[iParam0][func_46(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_46(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
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

int func_47()
{
	return Global_1312745;
}

void func_48(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_60())
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
				func_49(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_49(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_49(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_49(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_60())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!UNK3::_0xB24F0944DA203D9E(func_47()) || UNK3::_0x810E8431C0614BF9())
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
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || UNK3::_NETWORK_SHOP_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || UNK3::_NETWORK_SHOP_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_56(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0].f_66.f_8 = 1;
					Global_4263954[*uParam0].f_66.f_12 = 1;
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
			func_55(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_50(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_50(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_51(iParam0);
	}
}

void func_51(int iParam0)
{
	bVar0 = false;
	if (!func_60())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_54(iParam0))
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
		func_52(&(Global_4263954[iParam0]));
	}
}

void func_52(var uParam0)
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
	func_53(&(uParam0->f_14));
	func_53(&(uParam0->f_14.f_13));
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

void func_53(var uParam0)
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

int func_54(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_55(int iParam0, var uParam1)
{
	Global_2463019 = uParam1;
	Global_2463018 = iParam0;
}

int func_56(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_60())
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
				func_57(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_57(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_59(Var0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_58();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_58()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_59(int iParam0)
{
	if (iParam0 != -1)
	{
		GAMEPLAY::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_60()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

void func_61(int iParam0, int iParam1)
{
	if (*iParam0 > 0)
	{
		if (!func_119())
		{
			if (func_118(0))
			{
				if (!func_114(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_113()))
					{
						if (func_112() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_112());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_110(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_66("GB_BCUT_TICK1", func_113(), iVar0, 0, 0, 1);
						}
						func_65(20);
						func_62(func_113(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_62(int iParam0, int iParam1, int iParam2)
{
	if (func_221(iParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_64(iParam0);
		func_63(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_59(iParam0));
	}
}

void func_63(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_64(int iParam0)
{
	return Global_1628237[iParam0].f_533;
}

void func_65(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::SET_BIT(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

int func_66(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		UI::_SET_NOTIFACTION_COLOR_NEXT(func_75(iParam1, -2, 1, 0, 0));
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_73(&Var1));
		if (!iParam3 == 0)
		{
			UI::_SET_NOTIFACTION_COLOR_NEXT(iParam3);
		}
		UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		func_67(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_67(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_72() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_70(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_68(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0] = iParam0;
		Global_1670846.f_5[iVar0].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0].f_2[0] = uParam4;
		Global_1670846.f_5[iVar0].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0].f_7 = iParam7;
		Global_1670846.f_5[iVar0].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[0]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[1]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[2]), sParam11, 24);
	}
}

int func_68(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_69(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_69(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_70(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_71(-1, 0) == 8;
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

int func_71(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
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

bool func_72()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

var func_73(char* sParam0)
{
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_74(&cVar0);
}

var func_74(char[4] cParam0)
{
	return cParam0;
}

int func_75(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_108(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_190067[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_108(PLAYER::PLAYER_ID()) || (func_107() && func_106())) && !GAMEPLAY::IS_BIT_SET(Global_2537071.f_4591, 31)) && !bParam4)
	{
		uVar1 = func_105();
		if (ENTITY::DOES_ENTITY_EXIST(uVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::_NETWORK_GET_PED_PLAYER(iVar1) != -1)
				{
					if (func_221(NETWORK::_NETWORK_GET_PED_PLAYER(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_103(iParam1, iParam0, 0);
							}
							else
							{
								return func_88(iParam0, NETWORK::_NETWORK_GET_PED_PLAYER(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_88(iParam0, NETWORK::_NETWORK_GET_PED_PLAYER(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_103(iParam1, iParam0, 0);
				}
				else
				{
					return func_76(0, -1, 0);
				}
			}
			else
			{
				return func_76(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_103(iParam1, iParam0, 0);
		}
		else
		{
			return func_88(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_88(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_76(bool bParam0, int iParam1, bool bParam2)
{
	return func_77(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_77(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_87() || (func_86() && func_84())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_83(iParam2, iVar0);
		}
		else
		{
			return func_83(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_82(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_81(1);
				}
				else
				{
					return func_81(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_78(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_78(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_81(1);
	}
	return func_81(0);
}

int func_78(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_80(iParam0, iParam1, iParam3);
	if (func_79(Global_4456448.f_194990, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_79(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_82(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_81(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_82(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 0);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 1);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 2);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 4);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 5);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 6);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 8);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 9);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 10);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 12);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 13);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 14);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_83(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_80(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_84()
{
	if (func_85())
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_237025, 4);
}

bool func_85()
{
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_226020, 12);
}

bool func_86()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return GAMEPLAY::IS_BIT_SET(Global_4456448.f_237025, 0);
	}
	return ((GAMEPLAY::IS_BIT_SET(Global_4456448.f_237025, 0) || Global_1653478) && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1518439287) > 0);
}

int func_87()
{
	if (func_85() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_88(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590535[PLAYER::PLAYER_ID()] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590535[iVar2] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_98())
			{
				iVar3 = func_93(iParam0);
				if (!iVar3 == -1)
				{
					return func_91(iVar3);
				}
			}
			if ((func_90(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_82(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_81(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_89(1);
			}
			else
			{
				return func_77(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_81(1);
			}
			else
			{
				return func_77(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_93(iParam0);
	if (!iVar4 == -1)
	{
		return func_91(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_89(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_90(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_91(int iParam0)
{
	if (iParam0 > -1)
	{
		iVar0 = func_92(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_92(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0].f_1;
}

int func_93(int iParam0)
{
	if (!iParam0 == func_97())
	{
		if (func_95(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_94(iParam0)];
		}
	}
	return -1;
}

int func_94(int iParam0)
{
	if (iParam0 != func_97())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_97();
}

bool func_95(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_96(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_97();
}

int func_96(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (Global_1628237[iParam0].f_11 != func_97())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_97()
{
	return -1;
}

int func_98()
{
	if (((func_102() || func_101()) || func_100()) || func_99())
	{
		return 1;
	}
	return 0;
}

var func_99()
{
	return Global_2450632.f_19;
}

var func_100()
{
	return Global_2450632.f_17;
}

var func_101()
{
	return Global_2450632.f_16;
}

var func_102()
{
	return Global_2450632.f_15;
}

int func_103(int iParam0, int iParam1, bool bParam2)
{
	iVar1 = Global_969031.f_14[iParam0];
	if (func_98())
	{
		iVar2 = func_93(iParam1);
		if (!iVar2 == -1)
		{
			return func_91(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_271[iParam0].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_97())
	{
		if (Global_4456448.f_190067[iParam0] != -1 && Global_4456448.f_190067[iParam0] <= 4)
		{
			if (Global_4456448.f_190067[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_190067[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_190067[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_190067[iParam0] == 4)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_190067[iParam0];
			}
		}
		else
		{
			iVar0 = func_77(iParam1, !bParam2, iParam0, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_104(iParam0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26) && !func_82(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_89(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_233007;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_233008;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_233009;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_233010;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_105()
{
	return Global_2359302.f_2;
}

bool func_106()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 4);
}

bool func_107()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

int func_108(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		return 1;
	}
	if (func_109())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_109()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

void func_110(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar1 = func_111(1);
	}
	else
	{
		iVar1 = func_111(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_111(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_112()
{
	return Global_262145.f_12389;
}

int func_113()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

bool func_114(bool bParam0)
{
	return func_115(PLAYER::PLAYER_ID(), bParam0);
}

int func_115(int iParam0, bool bParam1)
{
	return func_116(iParam0, bParam1, 1);
}

int func_116(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_97())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_117(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_97() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_117(int iParam0, int iParam1)
{
	if (iParam0 != func_97())
	{
		if (Global_1628237[iParam0].f_11 != func_97())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_118(bool bParam0)
{
	return func_95(PLAYER::PLAYER_ID(), bParam0);
}

bool func_119()
{
	return func_96(PLAYER::PLAYER_ID());
}

void func_120(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_121(iParam0, iParam1, iParam2, fParam3);
}

void func_121(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_122(iParam0, iParam1, iParam2, fParam3);
}

void func_122(int iParam0, int iParam1, int iParam2, float fParam3)
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
		func_123(iVar1, 0);
	}
}

void func_123(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_124(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_125(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_125(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	iVar0 = func_135(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_131(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_126(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_126(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	Var0 = { func_129(iParam0, 1) };
	if (iParam0 == func_128(PLAYER::PLAYER_PED_ID()))
	{
		func_127(1);
	}
	func_131(Var0, iParam1, 0, sParam2, uParam3);
}

void func_127(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_128(var uParam0)
{
	return uParam0;
}

Vector3 func_129(int iParam0, bool bParam1)
{
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_130(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar6 = Var3.z;
		}
	}
	GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.z + 0.18f);
	}
	else
	{
		fVar13 = (Var7.z + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_130(var uParam0)
{
	return uParam0;
}

void func_131(struct<3> Param0, int iParam3, int iParam4, char* sParam5, var uParam6)
{
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2439138.f_1290[iVar0].f_6 == 0 || Global_2439138.f_1290[iVar0].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2439138.f_1290[iVar1] = { Param0 };
			Global_2439138.f_1290[iVar1].f_6 = 1;
			Global_2439138.f_1290[iVar1].f_4 = func_134(Global_2439138.f_1290[iVar1], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2439138.f_1290[iVar1].f_3 = iParam3;
			Global_2439138.f_1290[iVar1].f_8 = iParam4;
			Global_2439138.f_1290[iVar1].f_9 = func_133();
			Global_2439138.f_1290[iVar1].f_10 = func_132();
			StringCopy(&(Global_2439138.f_1290[iVar1].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), uParam6);
		}
	}
}

int func_132()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_133()
{
	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_134(struct<3> Param0, var uParam3, var uParam4)
{
	fVar0 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_135(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_136(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_136(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_177(PLAYER::PLAYER_ID()) || func_176(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_174() || func_170(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_169(uParam2))
	{
	}
	if (func_168())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_166(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_165(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_162(0, &iVar1);
					break;
				
				case 3:
					func_162(1, &iVar1);
					break;
				
				case 1:
					func_159(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686714)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_157(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_147((func_156(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590535[PLAYER::PLAYER_ID()].f_39.f_2 != -1)
				{
					func_157(1165, iVar1, -1);
				}
				func_141(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_137((func_139(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_137((func_139(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_137(int iParam0)
{
	if (func_168())
	{
		Global_1590535[PLAYER::PLAYER_ID()].f_211.f_5 = iParam0;
		func_138(-1804740956, iParam0);
	}
}

void func_138(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_139(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_221(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_140(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_140(-1804740956);
		}
	}
	return 0;
}

int func_140(int iParam0)
{
	uVar0 = iParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_141(int iParam0)
{
	Var0 = { func_146(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_144(func_145(&Var0));
			if (iVar13 == 0)
			{
				func_143(&Global_1387915, iParam0);
				func_142(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_143(&Global_1387916, iParam0);
				func_142(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_143(&Global_1387917, iParam0);
				func_142(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_143(&Global_1387918, iParam0);
				func_142(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_143(&Global_1387919, iParam0);
				func_142(1894078811, Global_1387919);
			}
		}
	}
}

void func_142(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case 406381289:
			Global_1387910 = iParam1;
			break;
		
		case 1669900865:
			Global_1387912 = iParam1;
			break;
		
		case 54164875:
			Global_1387912 = iParam1;
			break;
		
		case -842450336:
			Global_1387913 = iParam1;
			break;
		
		case -1576871964:
			Global_1387914 = iParam1;
			break;
		
		case -1446982891:
			Global_1387915 = iParam1;
			break;
		
		case -1676857426:
			Global_1387916 = iParam1;
			break;
		
		case 1280806976:
			Global_1387917 = iParam1;
			break;
		
		case -1096682281:
			Global_1387918 = iParam1;
			break;
		
		case 1894078811:
			Global_1387919 = iParam1;
			break;
		
		case -1566025259:
			Global_1387920 = iParam1;
			break;
		
		case -621080327:
			Global_1387921 = iParam1;
			break;
		
		case 1021002722:
			Global_1387922 = iParam1;
			break;
		
		case -1670771646:
			Global_1387923 = iParam1;
			break;
		
		case -1992420464:
			Global_1387924 = iParam1;
			break;
		
		case -386175531:
			Global_1387925 = iParam1;
			break;
		
		case -203536263:
			Global_1387926 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_143(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_144(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_145(var uParam0)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

struct<13> func_146(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_147(int iParam0, int iParam1, int iParam2)
{
	if (func_168())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_46(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_46(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_155(PLAYER::PLAYER_ID()))
		{
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_1 = iParam0;
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_6 = func_153(iParam0, 1);
		}
		func_152(639, iParam0, -1, 1);
		func_151(640, func_153(iParam0, 1), -1, 1, 0);
		Global_1388060[func_46(-1)] = iParam0;
		func_148(-1109644434, 7, 0);
	}
}

void func_148(int iParam0, int iParam1, int iParam2)
{
	if (func_150(iParam1, iParam2))
	{
		iVar0 = func_149();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_149()
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

int func_150(int iParam0, var uParam1)
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

void func_151(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_46(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_152(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_46(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_46(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_46(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_46(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_46(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_46(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_46(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_46(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_46(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_46(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_46(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_46(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_46(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_46(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_46(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_46(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_46(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_46(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_46(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_46(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_46(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_46(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_46(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_46(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_46(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_46(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_46(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_46(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_46(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_46(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_46(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_46(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_46(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_46(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_46(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_46(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_46(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_46(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_46(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_46(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_46(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_46(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_46(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_46(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_46(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_46(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_46(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_46(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_46(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_46(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_46(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_46(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_46(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_46(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_46(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_46(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_46(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_46(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_46(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_46(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_46(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_46(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_46(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_46(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_46(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_46(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_46(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_46(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_46(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_46(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_46(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_46(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_46(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_46(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_46(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_46(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_46(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_46(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_46(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_46(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_46(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_46(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_46(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_46(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_46(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_46(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_46(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_46(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_46(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_46(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_46(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_46(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_46(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_46(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_46(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_46(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_46(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_46(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_46(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_46(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_46(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_46(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_46(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_46(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_46(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_46(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_153(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_154(iParam0, 0);
}

int func_154(int iParam0, int iParam1)
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

int func_155(int iParam0)
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

int func_156(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388060[func_46(-1)];
			}
			else if (func_155(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_46(-1)];
	}
	return 0;
}

void func_157(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_178(iParam0, func_46(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_158(iParam0))
	{
		func_151(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_152(iParam0, iVar0, iParam2, 1);
	}
}

int func_158(int iParam0)
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

void func_159(int iParam0)
{
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_82(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_161(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_160(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_160(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_160(int iParam0, int iParam1)
{
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_161(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2513218 = { func_146(iParam0) };
		Global_2513231 = { func_146(iParam1) };
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

void func_162(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_221(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_161(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_221(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_163(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_161(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_160(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_160(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_163(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_164(iParam0), func_164(iParam1));
	return 0f;
}

Vector3 func_164(var uParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

int func_165(int iParam0)
{
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_160(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_166(int iParam0)
{
	if (iParam0 < 0)
	{
		if (GAMEPLAY::ABSI(iParam0) > func_156(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_156(PLAYER::PLAYER_ID());
		}
	}
	if (func_167(8000, 0, 0) > 0)
	{
		if (func_167(8000, 0, 0) < (iParam0 + func_156(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_167(8000, 0, 0) - func_156(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_167(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

int func_168()
{
	return 1;
}

int func_169(var uParam0)
{
	if (GAMEPLAY::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "") || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_170(int iParam0)
{
	return func_171(func_172(iParam0));
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_172(int iParam0)
{
	if (func_173(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_173(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_174()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_100();
	}
	return func_175(Global_4456448.f_194990);
}

int func_175(int iParam0)
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

bool func_176(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_177(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

int func_178(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_46(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_179(int iParam0, int iParam1)
{
	iVar0 = func_178(iParam0, func_46(iParam1), 0);
	iVar0++;
	if (!func_158(iParam0))
	{
		func_151(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_152(iParam0, iVar0, iParam1, 1);
	}
}

void func_180()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_2) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_73.f_2), 0))
	{
		if (!UI::DOES_BLIP_EXIST(uLocal_200))
		{
			uLocal_200 = UI::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_73.f_2));
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_1, 0))
			{
				UI::SET_BLIP_SPRITE(uLocal_200, 307);
				UI::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_200, "PTD_BLIPN");
			}
			else
			{
				UI::SET_BLIP_SPRITE(uLocal_200, 64);
				UI::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_200, "PTD_BLIPH");
			}
			UI::SET_BLIP_COLOUR(uLocal_200, 1);
			UI::SET_BLIP_FLASH_TIMER(uLocal_200, 7000);
			UI::SET_BLIP_PRIORITY(uLocal_200, 6);
			if (func_183())
			{
				UI::SET_BLIP_DISPLAY(uLocal_200, 0);
			}
		}
		else
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_1, 0))
			{
				UI::SET_BLIP_ROTATION(uLocal_200, SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_73.f_2))));
			}
			if (func_183() || func_181())
			{
				UI::SET_BLIP_DISPLAY(uLocal_200, 0);
			}
			else
			{
				UI::SET_BLIP_DISPLAY(uLocal_200, 4);
			}
		}
	}
}

var func_181()
{
	return Global_2416079.f_1812;
}

void func_182(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_183()
{
	if (func_184(19))
	{
		return 1;
	}
	if (func_184(0))
	{
		return 1;
	}
	return 0;
}

bool func_184(int iParam0)
{
	uVar0 = func_178(2480, -1, 0);
	return GAMEPLAY::IS_BIT_SET(uVar0, iParam0);
}

bool func_185(int iParam0)
{
	return GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2413895, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

int func_186()
{
	return Local_73;
}

int func_187(int iParam0)
{
	return Local_101[iParam0];
}

bool func_188(int iParam0)
{
	return !func_189(iParam0);
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6660)
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_190(4))
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_190(4))
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_190(4))
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_190(4))
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_190(4))
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_190(4))
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_190(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_221(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2425662[iVar0].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_191(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_208, iParam1);
}

int func_192()
{
	func_200(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_199())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_198())
	{
		return 1;
	}
	if (func_197(159))
	{
		if (!func_196())
		{
			return 1;
		}
	}
	if (func_197(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_193() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_193()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_193()
{
	switch (func_195())
	{
		case 0:
			return func_194();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_194()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_195()
{
	return Global_30768;
}

bool func_196()
{
	return Global_2450632.f_598;
}

int func_197(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_198()
{
	return Global_2460680;
}

bool func_199()
{
	return Global_2450632.f_593;
}

void func_200(var uParam0)
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
					func_201(iVar0);
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

void func_201(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_221(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_202(uVar4, &bVar5))
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

int func_202(int iParam0, var uParam1)
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

void func_203()
{
	SYSTEM::WAIT(0);
}

void func_204()
{
	if (UI::DOES_BLIP_EXIST(uLocal_200))
	{
		UI::REMOVE_BLIP(&uLocal_200);
	}
	if (GAMEPLAY::IS_BIT_SET(Local_73.f_1, 1))
	{
		func_29(2, "PTD_FAIL", 0, 0, -99);
	}
	func_207();
	if (func_186() == 4 && Local_73.f_4 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_73.f_4, 0);
	}
	func_206(15, 0);
	func_205();
}

void func_205()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_206(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_208, iParam0))
		{
			GAMEPLAY::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_208), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_208, iParam0))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_208), iParam0);
	}
}

void func_207()
{
	AI::CLEAR_SEQUENCE_TASK(&uLocal_198);
}

void func_208(struct<21> Param0)
{
	func_219(func_220(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_217(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_73, 28);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_101, 97);
	if (!func_216())
	{
		func_204();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6);
			switch (iVar0)
			{
				case 0:
					Local_73.f_4 = -644710429;
					Local_73.f_5 = 32417469;
					break;
				
				case 1:
					Local_73.f_4 = -2122757008;
					Local_73.f_5 = 377976310;
					break;
				
				case 2:
					Local_73.f_4 = 970356638;
					Local_73.f_5 = -1760377969;
					break;
				
				case 3:
					Local_73.f_4 = -1746576111;
					Local_73.f_5 = 1561705728;
					break;
				
				case 4:
					Local_73.f_4 = -1660661558;
					Local_73.f_5 = 131961260;
					GAMEPLAY::SET_BIT(&(Local_73.f_1), 0);
					break;
				
				case 5:
					Local_73.f_4 = -339587598;
					Local_73.f_5 = -1697435671;
					GAMEPLAY::SET_BIT(&(Local_73.f_1), 0);
					break;
			}
			if (Local_73.f_4 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_73.f_4, 1);
			}
			func_215();
			func_209();
		}
		func_206(15, 1);
		Local_101[NETWORK::PARTICIPANT_ID_TO_INT()] = 0;
	}
	else
	{
		func_204();
	}
}

void func_209()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3);
		Local_73.f_9[iVar0] = { func_211(iVar1) };
		if (iVar0 > 0)
		{
			if (func_210(Local_73.f_9[iVar0], Local_73.f_9[(iVar0 - 1)], 250f, 0))
			{
				Local_73.f_9[iVar0] = { func_211(iVar1 + 1) };
			}
		}
		iVar0++;
	}
}

int func_210(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (GAMEPLAY::ABSF((Param0.x - Param3.x)) <= fParam6)
		{
			if (GAMEPLAY::ABSF((Param0.y - Param3.y)) <= fParam6)
			{
				if (GAMEPLAY::ABSF((Param0.z - Param3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (GAMEPLAY::ABSF((Param0.x - Param3.x)) <= fParam6)
	{
		if (GAMEPLAY::ABSF((Param0.y - Param3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_211(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 2;
	}
	else if (iParam0 > 2)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			return func_214();
		
		case 1:
			return func_213();
		
		case 2:
			return func_212();
		
		default:
	}
	return 3250f, 1500f, 0f;
}

Vector3 func_212()
{
	switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 1915.902f, 563.9669f, 174.4925f;
		
		case 1:
			return 1402.858f, -2148.418f, 57.9675f;
		
		case 2:
			return 1104.815f, -3142.335f, 4.901f;
		
		case 3:
			return 545.7347f, -3025.327f, 5.0591f;
		
		case 4:
			return 1376.037f, -740.2166f, 66.2331f;
		
		case 5:
			return 1147.162f, 126.3452f, 80.8693f;
		
		case 6:
			return -1731.085f, -989.8386f, 4.4152f;
		
		case 7:
			return 728.2132f, -1532.48f, 18.7348f;
		
		case 8:
			return 1140.923f, -1285.639f, 33.6091f;
		
		case 9:
			return 2811.453f, -668.671f, 1.581f;
		
		case 10:
			return -1706.013f, -183.4387f, 56.3712f;
		
		case 11:
			return -134.0402f, -869.4509f, 43.2175f;
		
		case 12:
			return 1098.246f, -544.2941f, 56.4061f;
		
		default:
	}
	return 1098.246f, -544.2941f, 56.4061f;
}

Vector3 func_213()
{
	switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 2312.707f, 1531.258f, 59.8792f;
		
		case 1:
			return 1069.58f, 2366.363f, 43.0396f;
		
		case 2:
			return -1979.781f, 2584.161f, 2.2587f;
		
		case 3:
			return 1458.393f, 1113.066f, 113.334f;
		
		case 4:
			return 817.5361f, 1316.57f, 362.0491f;
		
		case 5:
			return 1671.232f, 3041.176f, 53.0351f;
		
		case 6:
			return -3163.364f, 756.8276f, 2.1183f;
		
		case 7:
			return -799.6782f, 885.0139f, 202.1319f;
		
		case 8:
			return -401.2717f, 1211.677f, 324.9297f;
		
		case 9:
			return 2909.154f, 770.3181f, 21.1684f;
		
		case 10:
			return 2778.909f, 2853.266f, 34.7828f;
		
		case 11:
			return 585.3987f, 2893.778f, 38.5297f;
		
		case 12:
			return -498.3305f, 3006.906f, 27.4341f;
		
		default:
	}
	return -498.3305f, 3006.906f, 27.4341f;
}

Vector3 func_214()
{
	switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 1015.599f, 4350.668f, 41.484f;
		
		case 1:
			return -1731.06f, 4959.484f, 3.8134f;
		
		case 2:
			return -2436.25f, 4181.913f, 7.7719f;
		
		case 3:
			return 2463.142f, 3769.651f, 40.328f;
		
		case 4:
			return 1888.61f, 4626.815f, 37.4665f;
		
		case 5:
			return -388.8584f, 4353.478f, 54.3806f;
		
		case 6:
			return 3800f, 4462f, 5f;
		
		case 7:
			return 3350f, 5152f, 20f;
		
		case 8:
			return 2200f, 5600f, 54f;
		
		case 9:
			return 1410f, 6560f, 20f;
		
		case 10:
			return -330f, 6100f, 32f;
		
		case 11:
			return -1365f, 4380f, 42f;
		
		case 12:
			return 700f, 3900f, 30f;
		
		default:
	}
	return 700f, 3900f, 30f;
}

void func_215()
{
	Local_73.f_6 = { func_211(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3)) };
	Local_73.f_6 = { Local_73.f_6 + Vector(120f, 0f, 0f) };
}

int func_216()
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
		if (func_199())
		{
			return 0;
		}
		if (func_197(157))
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

int func_217(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_205();
			}
			else
			{
				return 0;
			}
		}
		if (!func_218())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_205();
					}
					else
					{
						return 0;
					}
				}
				if (func_199())
				{
					if (!bParam2)
					{
						func_205();
					}
					else
					{
						return 0;
					}
				}
				if (func_197(157))
				{
					if (!bParam2)
					{
						func_205();
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
					func_205();
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
				func_205();
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
			func_205();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_218()
{
	return Global_1312854;
}

void func_219(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_205();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_220(int iParam0)
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

int func_221(int iParam0, bool bParam1, bool bParam2)
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
