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
	fLocal_116 = 3f;
	fLocal_117 = 0f;
	fLocal_118 = 2f;
	fLocal_119 = 100f;
	iLocal_128 = -1;
	fLocal_130 = 0.5f;
	iLocal_1918 = -1;
	iLocal_1919 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_2153(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!func_2106(ScriptParam_0))
			{
				func_2104(0, 1);
				func_1976(0);
			}
		}
		else
		{
			func_1976(0);
		}
	}
	else
	{
		func_2104(0, 1);
		func_1976(0);
	}
	bLocal_2089 = func_1975();
	while (true)
	{
		func_1974();
		if (func_1970(1))
		{
			func_2104(0, 1);
			func_1976(0);
		}
		if (func_1962())
		{
			func_2104(0, 1);
			func_1976(1);
		}
		func_1958();
		func_1945();
		switch (func_1944(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_1943() == 1)
				{
					if (func_1975() && !func_1942())
					{
						if (func_1941())
						{
							if (Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_25 == -1)
							{
								Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_25 = func_1940();
							}
							func_1924(Local_701, func_1940(), 0, 1, 1, &iLocal_700);
							if (iLocal_700 == 2 || iLocal_700 == 3)
							{
								if (iLocal_700 == 2)
								{
									Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_26 = func_1923(PLAYER::PLAYER_ID(), Local_701);
								}
								else if (iLocal_700 == 3)
								{
									Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_25 = 0;
									Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_26 = func_1923(PLAYER::PLAYER_ID(), Local_701);
								}
								if (func_1915())
								{
									func_1914(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
									func_1913();
								}
							}
						}
						else
						{
							Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_26 = func_1923(PLAYER::PLAYER_ID(), Local_701);
							Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_25 = 0;
							if (func_1915())
							{
								func_1914(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
								func_1913();
							}
						}
					}
					else if (func_1915())
					{
						func_1914(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
						func_1913();
					}
				}
				else if (func_1943() == 3)
				{
					func_1914(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			
			case 1:
				if (func_1943() == 1)
				{
					func_615();
				}
				else if (func_1943() == 3)
				{
					func_1914(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_1976(0);
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_614())
			{
				func_613(3);
			}
			switch (func_1943())
			{
				case 0:
					if (func_551())
					{
						func_613(1);
					}
					break;
				
				case 1:
					func_84();
					func_1();
					break;
				
				case 3:
					break;
				}
		}
	}
}

void func_1()
{
	bVar10 = true;
	bVar16 = true;
	bVar17 = false;
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar8 = iVar0;
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
			iVar9 = PLAYER::GET_PLAYER_PED(iVar2);
			iVar1 = iVar2;
			func_75(&(Local_701.f_154), iVar0);
			GAMEPLAY::SET_BIT(&iLocal_664, iVar0);
			if (func_2153(iVar2, 0, 1))
			{
				iVar19++;
				if (Local_1685[iVar0] != 3)
				{
					bVar16 = false;
				}
				GAMEPLAY::SET_BIT(&iLocal_663, iVar1);
				if (ENTITY::IS_ENTITY_DEAD(iVar9, 0))
				{
					GAMEPLAY::SET_BIT(&uLocal_665, iVar1);
				}
				if (func_74())
				{
					iVar20 = 0;
					while (iVar20 < func_72())
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_64[iVar20]))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_701.f_166, iVar20))
							{
								if (GAMEPLAY::IS_BIT_SET(Local_1685[iVar0].f_3, iVar20))
								{
									func_71(1);
									GAMEPLAY::SET_BIT(&(Local_701.f_166), iVar20);
								}
							}
						}
						iVar20++;
					}
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_59[0]))
				{
					if (func_70(0, PLAYER::GET_PLAYER_PED(iVar2)))
					{
						iVar3[0] = iVar2;
						iVar11[0] = 1;
					}
					func_69(iVar0, 0, 0);
					func_64(iVar2, 0);
				}
				else
				{
					func_69(iVar0, 0, 1);
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_59[1]))
				{
					if (func_70(1, PLAYER::GET_PLAYER_PED(iVar2)))
					{
						iVar3[1] = iVar2;
						iVar11[1] = 1;
					}
					func_69(iVar0, 1, 0);
					func_64(iVar2, 1);
				}
				else
				{
					func_69(iVar0, 1, 1);
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_59[2]))
				{
					if (func_70(2, PLAYER::GET_PLAYER_PED(iVar2)))
					{
						iVar3[2] = iVar2;
						iVar11[2] = 1;
					}
					func_69(iVar0, 2, 0);
					func_64(iVar2, 2);
				}
				else
				{
					func_69(iVar0, 2, 1);
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_59[3]))
				{
					if (func_70(3, PLAYER::GET_PLAYER_PED(iVar2)))
					{
						iVar3[3] = iVar2;
						iVar11[3] = 1;
					}
					func_69(iVar0, 3, 0);
					func_64(iVar2, 3);
				}
				else
				{
					func_69(iVar0, 3, 1);
				}
				if (!bVar17)
				{
					if (func_63(iVar8, 14))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_701.f_961, 0))
						{
							if (func_62(10) || !func_61())
							{
								bVar17 = true;
							}
							else
							{
								GAMEPLAY::SET_BIT(&(Local_701.f_961), 0);
							}
						}
					}
					else if (func_63(iVar8, 15))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_701.f_961, 1))
						{
							if (func_62(11) || !func_61())
							{
								bVar17 = true;
							}
							else
							{
								GAMEPLAY::SET_BIT(&(Local_701.f_961), 1);
							}
						}
					}
					else if (func_63(iVar8, 16))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_701.f_961, 2))
						{
							if (func_62(12) || !func_61())
							{
								bVar17 = true;
							}
							else
							{
								GAMEPLAY::SET_BIT(&(Local_701.f_961), 2);
							}
						}
					}
					else if (func_63(iVar8, 17))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_701.f_961, 3))
						{
							if (func_62(13) || !func_61())
							{
								bVar17 = true;
							}
							else
							{
								GAMEPLAY::SET_BIT(&(Local_701.f_961), 3);
							}
						}
					}
				}
				if (!func_63(iVar8, 0))
				{
					bVar10 = false;
				}
				if (func_63(iVar8, 20))
				{
					bVar18 = true;
				}
				if (!func_60(0))
				{
					if (func_63(iVar8, 22) && Local_1685[iVar0].f_15 != func_59())
					{
						func_51(Local_1685[iVar0].f_15);
						func_50(0);
					}
				}
				if (!func_60(1))
				{
					if (func_63(iVar8, 23) && Local_1685[iVar0].f_15 != func_59())
					{
						func_51(Local_1685[iVar0].f_15);
						func_50(1);
					}
				}
				if (!func_60(2))
				{
					if (func_63(iVar8, 24) && Local_1685[iVar0].f_15 != func_59())
					{
						func_51(Local_1685[iVar0].f_15);
						func_50(2);
					}
				}
				if (!func_60(3))
				{
					if (func_63(iVar8, 25) && Local_1685[iVar0].f_15 != func_59())
					{
						func_51(Local_1685[iVar0].f_15);
						func_50(3);
					}
				}
				if (!func_60(4))
				{
					if (func_63(iVar8, 26) && Local_1685[iVar0].f_15 != func_59())
					{
						func_51(Local_1685[iVar0].f_15);
						func_50(4);
					}
				}
				if (!func_60(5))
				{
					if (func_63(iVar8, 27) && Local_1685[iVar0].f_15 != func_59())
					{
						func_51(Local_1685[iVar0].f_15);
						func_50(5);
					}
				}
				if (!func_60(6))
				{
					if (func_63(iVar8, 28) && Local_1685[iVar0].f_15 != func_59())
					{
						func_51(Local_1685[iVar0].f_15);
						func_50(6);
					}
				}
				if (!func_60(7))
				{
					if (func_63(iVar8, 29) && Local_1685[iVar0].f_15 != func_59())
					{
						func_51(Local_1685[iVar0].f_15);
						func_50(7);
					}
				}
				if (!func_49(0))
				{
					if (func_63(iVar8, 8))
					{
						func_48(21);
						func_47(0);
						func_38(4, 0);
					}
				}
				if (!func_49(1))
				{
					if (func_63(iVar8, 9))
					{
						func_48(22);
						func_47(1);
						func_38(4, 1);
					}
				}
				if (!func_49(2))
				{
					if (func_63(iVar8, 10))
					{
						func_48(23);
						func_47(2);
						func_38(4, 2);
					}
				}
				if (!func_62(9))
				{
					if (func_63(iVar8, 4))
					{
						func_48(9);
					}
				}
				if (!func_62(20))
				{
					if (func_63(iVar8, 7))
					{
						iVar21 = func_30();
						if (iVar21 > -1)
						{
							Local_701.f_966 = iVar21;
							func_48(20);
						}
					}
				}
				if (!func_62(24))
				{
					if (func_63(iVar8, 12))
					{
						func_48(24);
					}
				}
				if (!func_29(0))
				{
					if (func_63(iVar8, 13))
					{
						func_28(0);
					}
				}
				if (!func_29(6))
				{
					if (func_63(iVar8, 18))
					{
						func_28(6);
					}
				}
				if (!func_62(30))
				{
					if (func_63(iVar8, 2))
					{
						func_48(30);
						if (func_27())
						{
							func_48(6);
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (func_1943() == 1)
	{
		if (iLocal_2090 != iVar19 && func_26(&(Local_701.f_10), 15000, 0))
		{
			iLocal_2090 = iVar19;
			if (func_25())
			{
				iVar23 = 0;
				while (iVar23 < 32)
				{
					iVar24 = PLAYER::INT_TO_PLAYERINDEX(iVar23);
					if ((iVar24 == func_59() || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar24)) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar24))
					{
						iVar22 = 0;
						while (iVar22 < func_24())
						{
							if (Local_701.f_101[iVar22] == iVar23)
							{
								func_71(func_20(iVar22));
								Local_701.f_101[iVar22] = -1;
							}
							iVar22++;
						}
					}
					iVar23++;
				}
			}
			else
			{
				func_19();
				iVar23 = 0;
				while (iVar23 < 32)
				{
					iVar25 = PLAYER::INT_TO_PLAYERINDEX(iVar23);
					iVar22 = 0;
					while (iVar22 < func_14())
					{
						if (ENTITY::DOES_ENTITY_EXIST(func_13(iVar22)) && !func_12(iVar22))
						{
							if (func_11(iVar22, iVar23))
							{
								if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar25) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar25))
								{
									func_71(func_20(iVar22));
									func_10(iVar22);
									func_9(0, iVar2, iVar22);
									func_8(iVar22, Local_701.f_175[iVar22]);
									func_7(iVar22);
								}
							}
						}
						iVar22++;
					}
					iVar23++;
				}
			}
		}
	}
	if (!func_29(27))
	{
		if (bVar18)
		{
			func_28(27);
		}
	}
	if (iVar3[0] != Local_701.f_54[0])
	{
		Local_701.f_54[0] = iVar3[0];
	}
	if (iVar3[1] != Local_701.f_54[1])
	{
		Local_701.f_54[1] = iVar3[1];
	}
	if (iVar3[2] != Local_701.f_54[2])
	{
		Local_701.f_54[2] = iVar3[2];
	}
	if (iVar3[3] != Local_701.f_54[3])
	{
		Local_701.f_54[3] = iVar3[3];
	}
	if (iVar11[0])
	{
		if (!func_62(10))
		{
			func_3(1);
			func_48(10);
		}
		if (!func_62(14))
		{
			func_48(14);
		}
	}
	else if (func_62(14))
	{
		func_2(14);
	}
	if (iVar11[1])
	{
		if (!func_62(11))
		{
			func_3(1);
			func_48(11);
		}
		if (!func_62(15))
		{
			func_48(15);
		}
	}
	else if (func_62(15))
	{
		func_2(15);
	}
	if (iVar11[2])
	{
		if (!func_62(12))
		{
			func_3(1);
			func_48(12);
		}
		if (!func_62(16))
		{
			func_48(16);
		}
	}
	else if (func_62(16))
	{
		func_2(16);
	}
	if (iVar11[3])
	{
		if (!func_62(13))
		{
			func_3(1);
			func_48(13);
		}
		if (!func_62(17))
		{
			func_48(17);
		}
	}
	else if (func_62(17))
	{
		func_2(17);
	}
	if (bVar16)
	{
		if (!func_62(18))
		{
			func_48(18);
		}
	}
	if (bVar10)
	{
		if (!func_62(0))
		{
			func_48(0);
		}
	}
	else if (func_62(0))
	{
		func_2(0);
	}
}

void func_2(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Local_701.f_6), iParam0);
}

void func_3(int iParam0)
{
	if (func_25() || iParam0)
	{
		if (func_6())
		{
			if (!func_5(&(Local_701.f_959)))
			{
				func_4(&(Local_701.f_959), 0, 0);
			}
		}
		else
		{
			func_28(3);
		}
	}
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

bool func_5(var uParam0)
{
	return uParam0->f_1;
}

int func_6()
{
	switch (Local_701.f_1)
	{
		case 4:
			if (Global_262145.f_16245 > 0)
			{
				return 1;
			}
			break;
		
		case 0:
		case 2:
		case 3:
		case 1:
			return 1;
	}
	return 0;
}

void func_7(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Local_701.f_21, iParam0))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_701.f_21), iParam0);
	}
}

void func_8(int iParam0, int iParam1)
{
	GAMEPLAY::CLEAR_BIT(&(Local_701.f_134[iParam0]), iParam1);
}

void func_9(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_59())
	{
		iVar0 = iParam1;
		if (bParam0)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_701.f_22[iParam2], iVar0))
			{
				GAMEPLAY::SET_BIT(&(Local_701.f_22[iParam2]), iVar0);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_701.f_22[iParam2], iVar0))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_701.f_22[iParam2]), iVar0);
		}
	}
}

void func_10(int iParam0)
{
	Local_701.f_168[iParam0]++;
}

bool func_11(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Local_701.f_22[iParam0], iParam1);
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_29(15);
		
		case 1:
			return func_29(16);
		
		case 2:
			return func_29(17);
		
		case 3:
			return func_29(18);
		
		case 4:
			return func_29(19);
		
		case 5:
			return func_29(20);
		
		case 6:
			return func_29(21);
		
		case 7:
			return func_29(22);
		
		default:
	}
	return 0;
}

int func_13(int iParam0)
{
	if (iParam0 != -1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_701.f_59[iParam0]))
		{
			uVar0 = NETWORK::NET_TO_VEH(Local_701.f_59[iParam0]);
		}
	}
	return uVar0;
}

int func_14()
{
	if ((func_18() || func_17()) || func_15())
	{
		return 1;
	}
	switch (Local_701.f_957)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			if (func_74() || func_27())
			{
				return 4;
			}
			return 3;
		
		default:
	}
	return 1;
}

bool func_15()
{
	return func_16() == 12;
}

int func_16()
{
	return Local_701.f_17;
}

bool func_17()
{
	return func_16() == 7;
}

bool func_18()
{
	return func_16() == 0;
}

bool func_19()
{
	return func_16() == 5;
}

int func_20(int iParam0)
{
	iVar0 = 1;
	if (func_23())
	{
		iVar0 = ((((func_22() * func_21()) / func_24()) - Local_701.f_124[iParam0]) - Local_701.f_184[iParam0]);
	}
	else if (func_15())
	{
		iVar0 = (3 - Local_701.f_124[iParam0]);
	}
	return iVar0;
}

int func_21()
{
	switch (Local_701.f_957)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		default:
	}
	return 0;
}

int func_22()
{
	switch (func_16())
	{
		case 6:
		case 8:
		case 0:
		case 10:
		case 11:
			return 1;
		
		case 3:
		case 5:
		case 1:
		case 12:
		case 2:
			return 5;
		
		case 4:
			return 4;
		
		case 9:
			return 5;
		
		default:
	}
	return 1;
}

bool func_23()
{
	return func_16() == 4;
}

int func_24()
{
	if (func_23())
	{
		if (Local_701.f_112 == 3 && (Local_701.f_957 == 0 || Local_701.f_957 == 1))
		{
			return 2;
		}
		if (Local_701.f_112 > Global_262145.f_18052)
		{
			return Global_262145.f_18052;
		}
	}
	return Local_701.f_112;
}

int func_25()
{
	switch (Local_701.f_17)
	{
		case 10:
		case 11:
		case 12:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_26(var uParam0, int iParam1, bool bParam2)
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

bool func_27()
{
	return func_16() == 6;
}

void func_28(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	GAMEPLAY::SET_BIT(&(Local_701.f_7), iParam0);
}

bool func_29(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Local_701.f_7, iParam0);
}

int func_30()
{
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_59[iVar0]))
		{
			if (func_36(Local_701.f_59[iVar0]))
			{
				if (!func_32(NETWORK::NET_TO_VEH(Local_701.f_59[iVar0]), Local_701.f_110, 350f))
				{
					if (func_31(iVar0))
					{
						return iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_62(14);
		
		case 1:
			return func_62(15);
		
		case 2:
			return func_62(16);
		
		case 3:
			return func_62(17);
		
		default:
	}
	return 0;
}

int func_32(int iParam0, int iParam1, float fParam2)
{
	Var0 = { func_34(iParam1) };
	if (!func_33(Var0, 0f, 0f, 0f, 0))
	{
		return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Var0, 1) <= fParam2;
	}
	return 0;
}

bool func_33(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

Vector3 func_34(int iParam0)
{
	Var0 = { 0f, 0f, 0f };
	if (!func_35(iParam0))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 1:
			Var0 = { 50.9205f, -2560.01f, 6f };
			break;
		
		case 2:
			Var0 = { -1074.852f, -1257.452f, 5.6938f };
			break;
		
		case 3:
			Var0 = { 901.936f, -1019.425f, 34.9666f };
			break;
		
		case 4:
			Var0 = { 253.9006f, -1955.933f, 22.9477f };
			break;
		
		case 5:
			Var0 = { -426.279f, 180.9043f, 80.6855f };
			break;
		
		case 6:
			Var0 = { -1050.36f, -2023.939f, 12.1616f };
			break;
		
		case 7:
			Var0 = { -1275.378f, -815.4295f, 17.1148f };
			break;
		
		case 8:
			Var0 = { -883.2906f, -2730.542f, 12.8285f };
			break;
		
		case 9:
			Var0 = { 269.6765f, -3016.279f, 5.7176f };
			break;
		
		case 10:
			Var0 = { 1561.402f, -2138.697f, 77.5275f };
			break;
		
		case 11:
			Var0 = { -303.7892f, -2698.39f, 6.0003f };
			break;
		
		case 12:
			Var0 = { 507.2061f, -649.5859f, 24.7512f };
			break;
		
		case 13:
			Var0 = { -525.8206f, -1775.87f, 21.3501f };
			break;
		
		case 14:
			Var0 = { -291.6372f, -1352.556f, 31.3146f };
			break;
		
		case 15:
			Var0 = { 348.6436f, 324.428f, 104.3185f };
			break;
		
		case 16:
			Var0 = { 922.0838f, -1561.299f, 29.7475f };
			break;
		
		case 17:
			Var0 = { 763.7448f, -885.2086f, 25.0869f };
			break;
		
		case 18:
			Var0 = { 1043.884f, -2172.603f, 30.471f };
			break;
		
		case 19:
			Var0 = { 1001.659f, -2511.88f, 28.302f };
			break;
		
		case 20:
			Var0 = { -263.138f, 194.3424f, 85.184f };
			break;
		
		case 21:
			Var0 = { 547.8112f, -1942.514f, 23.9851f };
			break;
		
		case 22:
			Var0 = { 88.9678f, -2216.882f, 6.0613f };
			break;
	}
	return Var0;
}

int func_35(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_36(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_37(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_37(int iParam0)
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

void func_38(int iParam0, int iParam1)
{
	if ((((func_45() || func_15()) || func_23()) || func_44()) || func_43())
	{
		if (iParam1 >= 0)
		{
			Local_701.f_124[iParam1]++;
		}
	}
	Local_701.f_122++;
	if (func_15() && func_40(0))
	{
		func_39(iParam0);
	}
	else if (func_23() || func_74())
	{
		func_39(iParam0);
	}
	else
	{
		func_8(iParam1, iParam0);
	}
}

void func_39(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_8(iVar0, iParam0);
		iVar0++;
	}
}

int func_40(int iParam0)
{
	if (func_42(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < func_24())
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_701.f_145[iVar1], iVar0))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_701.f_145[iVar1]), iVar0);
					iVar0 = 32;
				}
				iVar0++;
			}
			Local_701.f_113[iVar1] = 0;
			iVar1++;
		}
		Local_701.f_123++;
		if (!func_41())
		{
			if (func_29(25) || func_29(24))
			{
				if (Local_701.f_123 == 2)
				{
					func_48(6);
				}
				else
				{
					iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
					if (iVar2 > 50)
					{
						func_48(6);
					}
				}
			}
		}
		Local_701.f_680 = -1;
		return 1;
	}
	return 0;
}

bool func_41()
{
	return func_62(6);
}

int func_42(var uParam0)
{
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < func_24())
	{
		if (Local_701.f_101[iVar1] != -1)
		{
			if (Local_701.f_124[iVar1] == 0)
			{
				return 0;
			}
			else
			{
				if (iVar0 == 0)
				{
					iVar0 = Local_701.f_124[iVar1];
					iVar2 = iVar1;
				}
				else
				{
					iVar2 = -1;
				}
				if (Local_701.f_124[iVar1] != iVar0)
				{
					return 0;
				}
				if (Local_701.f_124[iVar1] <= Local_701.f_123)
				{
					return 0;
				}
			}
		}
		iVar1++;
	}
	if (uParam0 && iVar2 != -1)
	{
		if (Local_701.f_124[iVar2] == Local_701.f_123)
		{
			return 0;
		}
	}
	return 1;
}

bool func_43()
{
	return func_16() == 10;
}

bool func_44()
{
	return func_16() == 11;
}

int func_45()
{
	switch (func_46())
	{
		case 1:
			if (!func_18() && !func_17())
			{
				return 1;
			}
			break;
		
		case 2:
			if (!func_18() && !func_17())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_46()
{
	return Local_701.f_957;
}

void func_47(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_29(15))
			{
				func_28(15);
			}
			break;
		
		case 1:
			if (!func_29(16))
			{
				func_28(16);
			}
			break;
		
		case 2:
			if (!func_29(17))
			{
				func_28(17);
			}
			break;
		
		case 3:
			if (!func_29(18))
			{
				func_28(18);
			}
			break;
		
		case 4:
			if (!func_29(19))
			{
				func_28(19);
			}
			break;
		
		case 5:
			if (!func_29(20))
			{
				func_28(20);
			}
			break;
		
		case 6:
			if (!func_29(21))
			{
				func_28(21);
			}
			break;
		
		case 7:
			if (!func_29(22))
			{
				func_28(22);
			}
			break;
	}
}

void func_48(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	GAMEPLAY::SET_BIT(&(Local_701.f_6), iParam0);
}

int func_49(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_62(21);
		
		case 1:
			return func_62(22);
		
		case 2:
			return func_62(23);
		
		default:
	}
	return 0;
}

void func_50(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	GAMEPLAY::SET_BIT(&(Local_701.f_8), iParam0);
}

void func_51(var uParam0)
{
	func_52(func_55(1, 0), func_54(), uParam0);
}

void func_52(int iParam0, int iParam1, var uParam2)
{
	Var0 = 1172070503;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam2;
	func_53(&(Var0.f_4), &(Var0.f_5));
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

void func_53(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

int func_54()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11.f_35;
}

int func_55(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_2153(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_56(iVar2, 0))
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_56(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_57(-1, 0) == 8;
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

int func_57(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_58();
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

int func_58()
{
	return Global_1312745;
}

int func_59()
{
	return -1;
}

bool func_60(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Local_701.f_8, iParam0);
}

int func_61()
{
	switch (func_16())
	{
		case 6:
		case 0:
		case 3:
		case 4:
		case 5:
		case 7:
		case 8:
		case 10:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_62(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Local_701.f_6, iParam0);
}

bool func_63(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Local_1685[iParam0].f_2, iParam1);
}

void func_64(int iParam0, int iParam1)
{
	switch (func_16())
	{
		case 5:
			if (func_11(iParam1, iParam0))
			{
				if (func_68(iParam0, &(Local_701.f_173)))
				{
					func_71(1);
					func_9(0, iParam0, iParam1);
					func_8(iParam1, Local_701.f_175[iParam1]);
					func_7(iParam1);
					func_10(iParam1);
				}
				else if (!func_66(iParam1))
				{
					func_9(0, iParam0, iParam1);
					func_8(iParam1, Local_701.f_175[iParam1]);
					func_7(iParam1);
				}
			}
			break;
	}
	if (func_25())
	{
		iVar1 = -1;
		if (func_2153(iParam0, 0, 1) && iParam0 != func_59())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
			{
				iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
				{
					if (func_63(iVar0, 19))
					{
						if (func_68(iParam0, &(Local_701.f_173)) || func_63(iVar0, 21))
						{
							iVar1 = func_65(iParam0);
							if (iVar1 != -1 && !func_12(iVar1))
							{
								func_71(func_20(iVar1));
								func_8(iParam1, Local_701.f_175[iParam1]);
								Local_701.f_101[iVar1] = -1;
								if (func_15())
								{
									func_40(1);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_65(int iParam0)
{
	iVar1 = -1;
	iVar2 = iParam0;
	iVar0 = 0;
	while (iVar0 < func_24())
	{
		if (Local_701.f_101[iVar0] == iVar2)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_66(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(func_67(iParam0)) && !ENTITY::IS_ENTITY_DEAD(func_67(iParam0), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(func_13(iParam0), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_67(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_701.f_59[iParam0]))
	{
		uVar0 = NETWORK::NET_TO_ENT(Local_701.f_59[iParam0]);
	}
	return uVar0;
}

int func_68(int iParam0, var uParam1)
{
	iVar0 = iParam0;
	if (func_2153(iParam0, 1, 1))
	{
		if (GAMEPLAY::IS_BIT_SET(*uParam1, iVar0))
		{
			GAMEPLAY::CLEAR_BIT(uParam1, iVar0);
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(*uParam1, iVar0))
	{
		GAMEPLAY::SET_BIT(uParam1, iVar0);
		return 1;
	}
	return 0;
}

void func_69(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 || Local_1685[iParam0].f_9[iParam1] == 2)
	{
		if (Local_701.f_970[iParam1] != 2)
		{
			Local_701.f_970[iParam1] = 2;
		}
	}
	else if (Local_1685[iParam0].f_9[iParam1] == 1)
	{
		if (Local_701.f_970[iParam1] != 1)
		{
			Local_701.f_970[iParam1] = 1;
		}
	}
}

int func_70(int iParam0, int iParam1)
{
	if (func_66(iParam0))
	{
		if (iParam1 == VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_13(iParam0), -1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_71(int iParam0)
{
	Local_701.f_167 = (Local_701.f_167 + iParam0);
}

int func_72()
{
	switch (func_16())
	{
		case 1:
			return func_73(-1);
		
		case 9:
			return func_22();
		
		case 8:
			return func_14();
		
		default:
	}
	return 0;
}

int func_73(int iParam0)
{
	iVar0 = -1;
	if (func_18() || func_17())
	{
		return (func_22() - Local_701.f_167);
	}
	if (func_15())
	{
		return (func_24() * 3 - Local_701.f_167);
	}
	if (func_43() || func_44())
	{
		return (func_24() - Local_701.f_167);
	}
	switch (Local_701.f_957)
	{
		case 0:
			return (func_22() - Local_701.f_167);
		
		case 1:
			return (func_22() * 2 - Local_701.f_167);
		
		case 2:
			if (func_27() || func_74())
			{
				return (func_22() * 4 - Local_701.f_167);
			}
			if (func_25())
			{
				if (iParam0 != -1)
				{
					return (func_22() * 3 - Local_701.f_184[iParam0]);
				}
			}
			return (func_22() * 3 - Local_701.f_167);
		
		default:
	}
	return iVar0;
}

bool func_74()
{
	return func_16() == 8;
}

void func_75(var uParam0, int iParam1)
{
	if (!func_83(uParam0) || *uParam0)
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if ((func_82(iVar0, 16) && !func_82(iVar0, 15)) && func_77(iVar0, func_54(), 1))
		{
			func_76(&(uParam0->f_2), iParam1);
		}
	}
}

void func_76(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return;
		}
		if ((*uParam0)[iVar0] == -1)
		{
			(*uParam0)[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
}

bool func_77(int iParam0, int iParam1, bool bParam2)
{
	return func_78(iParam0, iParam1, bParam2, 1);
}

int func_78(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_59() && iParam0 != func_59())
	{
		if (!bParam2)
		{
			if (func_81(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_59())
		{
			if (iParam1 == Global_1628237[iParam0].f_11)
			{
				return func_79(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	if (func_80(iParam0))
	{
		return Global_1628237[iParam0].f_11.f_450 == iParam1;
	}
	return 0;
}

int func_80(int iParam0)
{
	if (iParam0 != func_59())
	{
		if (Global_1628237[iParam0].f_11 != func_59())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_81(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_59())
	{
		if (iParam0 != func_59())
		{
			if (Global_1628237[iParam0].f_11 != func_59())
			{
				if (Global_1628237[iParam0].f_11 == iParam0)
				{
					if (Global_1628237[iParam0].f_11.f_450 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

bool func_82(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_5, iParam1);
}

bool func_83(var uParam0)
{
	return uParam0->f_2[0] != -1;
}

void func_84()
{
	func_538();
	func_520();
	func_506();
	func_495();
	func_481();
	func_479();
	func_473();
	func_468();
	func_467();
	bVar0 = true;
	switch (func_466())
	{
		case 0:
			if (func_449())
			{
				if (!func_409())
				{
					bVar0 = false;
				}
				if (!func_355())
				{
					bVar0 = false;
				}
				if (!func_343())
				{
					bVar0 = false;
				}
				if (!func_317())
				{
					bVar0 = false;
				}
				if (!func_255())
				{
					bVar0 = false;
				}
				if (!func_244())
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					func_3(0);
					Local_701.f_983 = NETWORK::_GET_POSIX_TIME();
					func_243(1);
					if (func_242())
					{
						iVar1 = 0;
						while (iVar1 < func_241())
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_239(iVar1));
							iVar1++;
						}
					}
					if (func_238())
					{
						iVar1 = 0;
						while (iVar1 < func_237())
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_235(iVar1));
							iVar1++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (func_234() == 0)
			{
				if (!func_5(&(Local_701.f_10)))
				{
					func_4(&(Local_701.f_10), 0, 0);
				}
				else if (func_26(&(Local_701.f_10), func_232(), 0))
				{
					func_231(1);
				}
				else if (func_26(&(Local_701.f_10), 600000, 0))
				{
					if (!func_62(3))
					{
						func_48(3);
					}
				}
				iVar1 = 0;
				while (iVar1 < func_14())
				{
					if (func_62(1))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_59[iVar1]) && !func_66(iVar1))
						{
							if (func_74())
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_701.f_165, iVar1))
								{
									func_71(1);
									GAMEPLAY::SET_BIT(&(Local_701.f_165), iVar1);
								}
							}
							if (func_230() || func_19())
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_701.f_165, iVar1))
								{
									func_71(((func_229(iVar1) - Local_701.f_124[iVar1]) - Local_701.f_168[iVar1]));
									GAMEPLAY::SET_BIT(&(Local_701.f_165), iVar1);
								}
							}
							if (!GAMEPLAY::IS_BIT_SET(Local_701.f_133, iVar1))
							{
								if (!func_12(iVar1))
								{
									GAMEPLAY::SET_BIT(&(Local_701.f_133), iVar1);
									func_227(iVar1);
								}
							}
						}
					}
					iVar1++;
				}
				if (func_25())
				{
					iVar4 = func_24();
				}
				else
				{
					iVar4 = func_14();
				}
				iVar1 = 0;
				while (iVar1 < iVar4)
				{
					if (GAMEPLAY::IS_BIT_SET(Local_701.f_133, iVar1))
					{
						iVar2++;
					}
					if (GAMEPLAY::IS_BIT_SET(Local_701.f_133, iVar1) || func_12(iVar1))
					{
						iVar3++;
					}
					iVar1++;
				}
				if (iVar2 == iVar4)
				{
					if (!func_225(0))
					{
						if (func_234() != 4)
						{
							func_231(4);
						}
					}
				}
				if (func_25())
				{
					if (func_224())
					{
						if (!func_225(0))
						{
							if (func_234() != 4)
							{
								func_231(4);
							}
						}
					}
				}
				if (func_17())
				{
					if (func_234() != 6)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_707[0]) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_701.f_707[0]), 0))
						{
							func_231(6);
						}
					}
				}
				if (func_62(18) || iVar3 == iVar4)
				{
					if (func_234() == 0)
					{
						if (func_222())
						{
							func_231(7);
						}
						else
						{
							func_231(6);
						}
					}
				}
			}
			else
			{
				func_243(2);
			}
			func_85();
			break;
		
		case 2:
			if (func_62(0))
			{
				func_243(3);
			}
			break;
		
		case 3:
			func_613(3);
			break;
	}
}

void func_85()
{
	if (!func_61())
	{
		return;
	}
	Var1.f_4 = 1125515264;
	Var1.f_5 = 1;
	Var1.f_6 = 1;
	Var1.f_8 = 1082130432;
	Var1.f_9 = 1176255488;
	Var1.f_10 = 1;
	Var1.f_13 = 1;
	Var1.f_15 = 2;
	Var1.f_22 = 2;
	Var1.f_25 = 1;
	Var1.f_26 = 1;
	Var1.f_29 = 1123024896;
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (GAMEPLAY::IS_BIT_SET(Local_701.f_961, iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(func_13(iVar0), 0))
			{
				if (Local_701.f_965 == -1 || Local_701.f_965 == iVar0)
				{
					if (Local_701.f_965 == -1)
					{
						Local_701.f_965 = iVar0;
						Local_701.f_962 = { ENTITY::GET_ENTITY_COORDS(func_13(iVar0), 1) };
					}
					Var1 = 10f;
					Var1.f_1 = 0;
					Var1.f_4 = 100f;
					Var1.f_5 = 0;
					Var1.f_6 = 1;
					Var1.f_12 = 1;
					Var1.f_3 = 0;
					Var31 = { 0f, 0f, 0f };
					fVar34 = 0f;
					iVar35 = ENTITY::GET_ENTITY_MODEL(func_13(iVar0));
					if (func_87(Local_701.f_962, 0f, 0f, 0f, iVar35, 0, &Var31, &fVar34, &Var1))
					{
						if (func_86(func_13(iVar0)))
						{
							ENTITY::SET_ENTITY_COORDS(func_13(iVar0), Var31, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(func_13(iVar0), fVar34);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(func_13(iVar0), 1084227584);
							Local_701.f_965 = -1;
							GAMEPLAY::CLEAR_BIT(&(Local_701.f_961), iVar0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_86(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
			return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0);
		}
	}
	return 0;
}

int func_87(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, float fParam9, var uParam10)
{
	bVar0 = false;
	if (uParam10->f_14)
	{
		if (uParam10->f_25)
		{
			uParam10->f_25 = 0;
		}
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE() == 5)
		{
			return 0;
		}
	}
	if (Global_2405072.f_514)
	{
		Global_2405072.f_514 = 0;
		return 0;
	}
	if (!func_221(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!Global_2405072.f_600 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_605) < func_220(0))
	{
		if (!Global_2405072.f_670 == 0)
		{
			Global_2405072.f_670 = 0;
			func_219();
			func_218();
		}
		return 0;
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_669)
	{
		if (!Global_2405072.f_670 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_673) < func_220(0))
			{
				return 0;
			}
			else
			{
				Global_2405072.f_670 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_671) > 30000)
		{
			Global_2405072.f_670 = 0;
		}
		if (!Global_2405072.f_670 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_673) > func_220(1))
			{
				Global_2405072.f_670 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_211(Param0))
		{
			if (func_210(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2405072.f_670 == 0)
	{
		if (SYSTEM::VDIST(Global_2405072.f_688, Param0) > 50f)
		{
			return 0;
		}
	}
	PATHFIND::_0x07FB139B592FA687((Param0.x - 100f), (Param0.y - 100f), (Param0.x + 100f), (Param0.y + 100f));
	if (Global_2405072.f_670 == 0)
	{
		Global_2405072.f_675 = 0;
		Global_2405072.f_671 = NETWORK::_0x89023FBBF9200E9F();
		Global_2405072.f_669 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405072.f_673 = NETWORK::_0x89023FBBF9200E9F();
		Global_2405072.f_688 = { Param0 };
		Global_2405072.f_674 = NETWORK::_0x89023FBBF9200E9F();
		Global_2405072.f_670 = 2;
		func_209();
		func_219();
		if (!uParam10->f_27 || (((((func_208(Param0, 1, 1133903872) && !uParam10->f_28) && !Global_2537071.f_883) && !Global_2537071.f_872) && !Global_2537071.f_880) && !Global_2537071.f_884))
		{
			func_189(Param0, iParam6);
		}
		if (func_174(Param0))
		{
			func_189(Param0, iParam6);
		}
	}
	switch (Global_2405072.f_670)
	{
		case 2:
			if (PATHFIND::_0xF7B79A50B905A30D((Param0.x - 100f), (Param0.y - 100f), (Param0.x + 100f), (Param0.y + 100f)))
			{
				Global_2405072.f_676 = { Param0 };
				Global_2405072.f_679 = 0f;
				if (Global_2537071.f_883)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam10->f_3 && func_168(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_166(Param0, *fParam9, iParam6, PLAYER::PLAYER_ID(), 0))
				{
					Global_2405072.f_676 = { Param0 };
					Global_2405072.f_679 = *fParam9;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = -1008861746;
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam7;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam10->f_5;
					Var5.f_4 = *uParam10;
					Var5.f_13 = uParam10->f_1;
					Var5.f_14 = uParam10->f_2;
					Var5.f_5 = uParam10->f_4;
					Var5.f_15 = uParam10->f_6;
					Var5.f_11 = uParam10->f_7;
					Var5.f_6 = uParam10->f_8;
					Var5.f_7 = uParam10->f_9;
					Var5.f_16 = uParam10->f_10;
					Var5.f_17 = uParam10->f_11;
					Var5 = { Param3 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam6;
					Var5.f_31 = uParam10->f_13;
					Var5.f_30 = 1;
					Var5.f_48 = uParam10->f_14;
					Var5.f_56 = uParam10->f_25;
					Var5.f_57 = uParam10->f_26;
					Var5.f_49 = uParam10->f_29;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1] = { uParam10->f_15[iVar1] };
						Var5.f_45[iVar1] = uParam10->f_22[iVar1];
						iVar1++;
					}
					func_114(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var5);
				}
				func_112(Global_2405072.f_676, Global_2405072.f_679, iParam6, &(Global_2405072.f_667));
				Global_2405072.f_665 = 0;
				Global_2405072.f_666 = 0;
				Global_2405072.f_675++;
				Global_2405072.f_672 = NETWORK::_0x89023FBBF9200E9F();
				Global_2405072.f_671 = NETWORK::_0x89023FBBF9200E9F();
				Global_2405072.f_670 = 3;
			}
			break;
		
		case 3:
			if (Global_2405072.f_665)
			{
				if (Global_2405072.f_667 == Global_2405072.f_668)
				{
					if (Global_2405072.f_666)
					{
						if (uParam10->f_12 && !uParam10->f_11)
						{
							if (func_111(Global_2405072.f_676, Global_2405072.f_679, iParam6, 1, 1036831949))
							{
								Global_2405072.f_670 = 4;
								Global_2405072.f_692 = NETWORK::_0x89023FBBF9200E9F();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_109(Global_2405072.f_676, 0);
						func_108(-1);
					}
				}
				else
				{
					Global_2405072.f_665 = 0;
					Global_2405072.f_666 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_672) > 3000)
			{
				func_108(-1);
			}
			break;
		
		case 4:
			if (uParam10->f_12 && !uParam10->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_692) < 10000)
				{
					if (NETWORK::_0xE64A3CA08DFA37A9(Global_2405072.f_691))
					{
						if (NETWORK::_0x4DF7CFFF471A7FB1(Global_2405072.f_691))
						{
							if (!NETWORK::_0x4A2D4E8BF4265B0F(Global_2405072.f_691))
							{
								if (func_107(Global_2405072.f_676, Global_2405072.f_679, iParam6, PLAYER::PLAYER_ID(), 0) || func_89(Global_2405072.f_676, Global_2405072.f_679, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_109(Global_2405072.f_676, 0);
									func_108(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_109(Global_2405072.f_676, 0);
								func_108(-1);
							}
						}
					}
					else
					{
						func_108(-1);
					}
				}
				else
				{
					func_108(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2405072.f_676 = { Param0 };
			Global_2405072.f_679 = 0f;
			Var64.f_6 = 1082130432;
			Var64.f_7 = 1176255488;
			Var64.f_8 = 1;
			Var64.f_10 = 1;
			Var64.f_13 = 1;
			Var64.f_15 = 1;
			Var64.f_16 = 1;
			Var64.f_31 = 1;
			Var64.f_34 = -1008861746;
			Var64.f_38 = 2;
			Var64.f_45 = 2;
			Var64.f_49 = 1123024896;
			Var64.f_53 = 999;
			Var64.f_54 = 1176256410;
			Var64.f_55 = 1;
			Var64.f_56 = 1;
			Var64.f_57 = 1;
			Var64.f_9 = iParam7;
			Var64.f_3 = 3.5f;
			Var64.f_10 = uParam10->f_5;
			Var64.f_4 = *uParam10;
			Var64.f_12 = 1;
			Var64.f_13 = 0;
			Var64.f_15 = uParam10->f_6;
			Var64.f_11 = uParam10->f_7;
			Var64.f_6 = uParam10->f_8;
			Var64.f_7 = uParam10->f_9;
			Var64 = { Param3 };
			Var64.f_34 = iParam6;
			Var64.f_31 = uParam10->f_13;
			Var64.f_30 = 1;
			Var64.f_48 = uParam10->f_14;
			Var64.f_56 = uParam10->f_25;
			Var64.f_57 = uParam10->f_26;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var64.f_38[iVar1] = { uParam10->f_15[iVar1] };
				Var64.f_45[iVar1] = uParam10->f_22[iVar1];
				iVar1++;
			}
			Var64.f_49 = uParam10->f_29;
			func_114(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var64);
			Global_2405072.f_670 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2405072.f_688 = { Param0 };
	Global_2405072.f_673 = NETWORK::_0x89023FBBF9200E9F();
	if (bVar0)
	{
		Global_2405072.f_513 = 0;
		*uParam8 = { Global_2405072.f_676 };
		*fParam9 = Global_2405072.f_679;
		func_88(1);
		return 1;
	}
	return 0;
}

void func_88(bool bParam0)
{
	Global_2405072.f_670 = 0;
	func_209();
	func_219();
	if (bParam0)
	{
		func_218();
	}
}

int func_89(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam9 == 0)
		{
			if (func_2153(iVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_106(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_101(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), 0))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										Var5 = { ENTITY::GET_ENTITY_COORDS(iVar3, 0) };
										fVar8 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_100(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_90(func_99(iVar1), Param0, fParam3, iParam4, fVar2))
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

int func_90(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	if (SYSTEM::VDIST(Param0, Param3) < func_98(iParam7, 1008981770))
	{
		func_91(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_91(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	Var0 = { 0f, 1f, 0f };
	func_97(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_92(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.y + fParam8)) };
	Var9.z = (Var9.z - ((0.5f * GAMEPLAY::ABSF((Var6.z - Var3.z))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.y * -1f) + fParam8)) };
	Var12.z = (Var12.z + ((0.5f * GAMEPLAY::ABSF((Var6.z - Var3.z))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = GAMEPLAY::ABSF((Var6.x - Var3.x));
}

void func_92(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		GAMEPLAY::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_95(iParam0);
		if (iVar0 != 0)
		{
			func_93(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_93(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	func_94(iParam0, &Global_1315812);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1315812[iVar0]))
		{
			GAMEPLAY::GET_MODEL_DIMENSIONS(Global_1315812[iVar0], &(Global_1315816[iVar0]), &(Global_1315823[iVar0]));
		}
		if (SYSTEM::VMAG(Global_1315816[iVar0]) <= 0.01f || SYSTEM::VMAG(Global_1315823[iVar0]) <= 0.01f)
		{
			Global_1315816[iVar0] = (0f - (fParam4 * 0.5f));
			Global_1315823[iVar0] = (0f + (fParam4 * 0.5f));
			Global_1315816[iVar0].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315823[iVar0].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315816[iVar0].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315823[iVar0].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315830[iVar0] = (Global_1315823[iVar0] - Global_1315816[iVar0]);
		Global_1315833[iVar0] = (Global_1315823[iVar0].f_1 - Global_1315816[iVar0].f_1);
		Global_1315836[iVar0] = (Global_1315823[iVar0].f_2 - Global_1315816[iVar0].f_2);
		if (Global_1315830[iVar0] > Global_1315839)
		{
			Global_1315839 = Global_1315830[iVar0];
		}
		if (Global_1315836[iVar0] > Global_1315840)
		{
			Global_1315840 = Global_1315836[iVar0];
		}
		iVar0++;
	}
	Global_1315841 = (Global_1315839 * -0.5f);
	Global_1315844 = (Global_1315839 * 0.5f);
	Global_1315841.f_1 = ((((0.5f * Global_1315833[0]) + Global_1315833[1]) + Global_1315812.f_3) * -1f);
	Global_1315844.f_1 = (0.5f * Global_1315833[0]);
	Global_1315841.f_2 = (Global_1315836[0] * -0.5f);
	Global_1315844.f_2 = (Global_1315836[0] * 0.5f);
	*uParam1 = { Global_1315841 };
	*uParam2 = { Global_1315844 };
}

void func_94(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_95(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_96(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_96(int iParam0)
{
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_97(var uParam0, struct<3> Param1)
{
	fVar0 = SYSTEM::COS(Param1.x);
	fVar1 = SYSTEM::SIN(Param1.x);
	Var2.x = *uParam0;
	Var2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.y);
	fVar1 = SYSTEM::SIN(Param1.y);
	Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.y = uParam0->f_1;
	Var2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.z);
	fVar1 = SYSTEM::SIN(Param1.z);
	Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.z = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_98(int iParam0, float fParam1)
{
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_92(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (SYSTEM::SQRT(((((Var6.x * 0.5f) * (Var6.x * 0.5f)) + ((Var6.y * 0.5f) * (Var6.y * 0.5f))) + ((Var6.z * 0.5f) * (Var6.z * 0.5f)))) + fParam1);
	return fVar9;
}

Vector3 func_99(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_100(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	if (func_90(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_92(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	Var20 = { 0f, Var17.y, 0f };
	func_97(&Var20, 0f, 0f, fParam3);
	Var23 = { 0f, Var14.y, 0f };
	func_97(&Var23, 0f, 0f, fParam3);
	Var26 = { (GAMEPLAY::ABSF((Var17.x - Var14.x)) * 0.5f), 0f, 0f };
	func_97(&Var26, 0f, 0f, fParam3);
	Var1[0] = { Param0 + Var20 + Var26 };
	Var1[0].f_2 = (Var1[0].f_2 + (0.5f * GAMEPLAY::ABSF((Var17.z - Var14.z))));
	Var1[1] = { Param0 + Var20 - Var26 };
	Var1[1].f_2 = (Var1[1].f_2 + (0.5f * GAMEPLAY::ABSF((Var17.z - Var14.z))));
	Var1[2] = { Param0 + Var23 + Var26 };
	Var1[2].f_2 = (Var1[2].f_2 + (0.5f * GAMEPLAY::ABSF((Var17.z - Var14.z))));
	Var1[3] = { Param0 + Var23 - Var26 };
	Var1[3].f_2 = (Var1[3].f_2 + (0.5f * GAMEPLAY::ABSF((Var17.z - Var14.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_90(Var1[iVar0], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_100(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_101(int iParam0)
{
	if (func_105(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_104(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2513218))
	{
		return 1;
	}
	if (func_102(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0, int iParam1)
{
	iVar0 = func_103(iParam0);
	if (!iVar0 == func_59())
	{
		if (iVar0 == func_103(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_103(int iParam0)
{
	if (iParam0 != func_59())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_59();
}

struct<13> func_104(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_105(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2513218 = { func_104(iParam0) };
		Global_2513231 = { func_104(iParam1) };
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

int func_106(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2425662[iParam0].f_245)
	{
		return 1;
	}
	return 0;
}

int func_107(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_2153(iVar1, 0, 1) && func_2153(iParam5, 0, 1))
			{
				if (Global_2417897.f_261[iVar0])
				{
					if (func_90(Global_2417897.f_131[iVar0], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_90(func_99(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417897.f_261[iVar0])
			{
				if (func_90(Global_2417897.f_131[iVar0], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_2153(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_90(func_99(iVar1), Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_108(int iParam0)
{
	if (Global_2405072.f_675 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_674) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2405072.f_675 < iParam0))
		{
			Global_2405072.f_670 = 2;
		}
		else
		{
			Global_2405072.f_670 = 5;
		}
	}
	else
	{
		Global_2405072.f_670 = 5;
	}
}

void func_109(struct<3> Param0, int iParam3)
{
	if (iParam3 == 0 && func_110(Param0, 0.01f))
	{
		return;
	}
	if (iParam3 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2405072.f_2728[iParam3] };
		Global_2405072.f_2728[iParam3] = { Param0 };
		func_109(Var0, iParam3 + 1);
	}
}

int func_110(struct<3> Param0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(Param0, Global_2405072.f_2728[iVar0]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_111(struct<3> Param0, float fParam3, int iParam4, bool bParam5, float fParam6)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	else
	{
		func_219();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2405072.f_680[iVar7] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_91(Param0, fParam3, iParam4, &Var0, &Var3, &uVar6, fParam6);
				if (bParam5)
				{
					fVar8 = GAMEPLAY::ABSF((Var0.z - Var3.z));
					Var0.z = (Var0.z + ((fVar8 * 0.5f) - 2f));
					Var3.z = (Var3.z + (fVar8 * 0.5f));
				}
				Global_2405072.f_680[iVar7] = unk_0x2B1C623823DB0D9D(Var0, Var3, fParam6);
				Global_2405072.f_684[iVar7] = SCRIPT::GET_ID_OF_THIS_THREAD();
				Global_2405072.f_691 = Global_2405072.f_680[iVar7];
				return 1;
			}
			iVar7++;
		}
	}
	return 0;
}

void func_112(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	*uParam5 = func_113(&Param0, &uParam3, &iParam4);
	Var0 = -1768581418;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = *uParam5;
	SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_55(1, 1));
}

int func_113(var uParam0, var uParam1, var uParam2)
{
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam0), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_1), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_2), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar16 = GAMEPLAY::GET_HASH_KEY(&cVar0);
	return iVar16;
}

void func_114(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		while (func_163(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_115(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_115(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_159(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_154(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2412474.f_162 = 0;
	Global_2412474.f_163 = 0;
	Global_2412474.f_164 = -99;
	Global_2412474.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412474[iVar16] = { 0f, 0f, 0f };
		Global_2412474.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_95(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &Var1);
			bVar12 = false;
			if (Global_2412474.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412474.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::_GET_IS_SLOW_ROAD_FLAG(iVar8)) || PATHFIND::_GET_SUPPORTS_GPS_ROUTE_FLAG(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_147(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_144(Var1))
									{
										Var1 = { func_139(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_138(Var1, 5f))
											{
												if (Var1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_134(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_154(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.x, Var1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_133(Var1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_159(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_132(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_168(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_168(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_89(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_124(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162)
																										{
																											Global_2412474[iVar16] = { 0f, 0f, 0f };
																											Global_2412474.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412474.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412474.f_162 == 0)
																									{
																										Global_2412474[0] = { Var1 };
																										Global_2412474.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2412474[iVar16], uParam2->f_35))
																												{
																													func_123(Var1, fVar4, iVar16);
																													iVar16 = Global_2412474.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412474.f_162++;
																									if (Global_2412474.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412474[Global_2412474.f_162] = { Var1 };
																									Global_2412474.f_121[Global_2412474.f_162] = fVar4;
																									Global_2412474.f_162++;
																									if (func_134(Var1, uParam2))
																									{
																										Global_2412474.f_163++;
																									}
																									if (Global_2412474.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2412474.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412474[0] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
						{
							func_121(0, uParam2);
						}
						iVar26 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Global_2412474.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2412474[0] };
						uVar30 = Global_2412474.f_121[0];
						Global_2412474[0] = { Global_2412474[iVar26] };
						Global_2412474.f_121[0] = Global_2412474.f_121[iVar26];
						Global_2412474[iVar26] = { Var27 };
						Global_2412474.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412474[0] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_120(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						Var31 = { Var1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_159(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_154(&Var31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_116(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412474.f_164 = iVar8;
	}
	return 0;
}

void func_116(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*uParam0[iVar2], Param3);
		if (fVar1 < fVar0)
		{
			if (!func_117(*uParam0[iVar2], 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *uParam0[iVar3] };
		*uParam2 = uParam0[iVar3]->f_3;
	}
}

int func_117(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_119(Param0, fParam3, iParam4, iParam5, 0) || func_118(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_118(struct<3> Param0, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417897.f_461[iVar0][iVar1].f_4 == 0)
				{
					if (func_90(Param0, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_3, Global_2417897.f_461[iVar0][iVar1].f_4, 1036831949))
					{
						if (func_2153(iVar2, 0, 1) && func_2153(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_119(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_2153(iVar1, 0, 1) && func_2153(iParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_2153(iVar1, 0, 1) && func_2153(iParam4, 0, 1))
				{
					if (Global_2417897.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417897.f_131[iVar0], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_99(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417897.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2417897.f_131[iVar0], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_2153(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_99(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_120(int iParam0, struct<3> Param1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12);
		*uParam5 = { func_139(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51) };
		if (!func_144(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_121(int iParam0, var uParam1)
{
	if (!func_134(Global_2412474[iParam0], uParam1))
	{
		Global_2412474.f_162 = (Global_2412474.f_162 - 1);
		func_122(iParam0);
		if (Global_2412474.f_162 > Global_2412474.f_163)
		{
			func_121(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_121(iParam0 + 1, uParam1);
	}
}

void func_122(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412474[iParam0] = { Global_2412474[iParam0 + 1] };
			Global_2412474.f_121[iParam0] = Global_2412474.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_123(struct<3> Param0, float fParam3, int iParam4)
{
	Var0 = { Global_2412474[iParam4] };
	uVar3 = Global_2412474.f_121[iParam4];
	Global_2412474[iParam4] = { Param0 };
	Global_2412474.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412474.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_123(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_124(struct<3> Param0, float fParam3, float fParam4)
{
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_125(iVar5))
		{
			Var1 = { func_99(iVar5) };
			fVar7 = SYSTEM::VDIST(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_125(int iParam0)
{
	if (func_2153(iParam0, 0, 1))
	{
		if (!func_130(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_127(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_126(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_127(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_101(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_126(int iParam0, int iParam1, int iParam2)
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

int func_127(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_128(iParam0))
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

bool func_128(int iParam0)
{
	return func_129(iParam0);
}

bool func_129(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_13.f_1, 0);
}

int func_130(int iParam0)
{
	if (func_56(iParam0, 0))
	{
		return 1;
	}
	if (func_131())
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

bool func_131()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_132(struct<3> Param0, float fParam3, int iParam4)
{
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, 0) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_100(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, 0) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_100(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_133(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_107(Param0, fParam3, iParam4, iParam5, iParam6) || func_166(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_134(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_137(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_135(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_135(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_136(&Param3, &Param6);
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

void func_136(var uParam0, var uParam1)
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

bool func_137(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

int func_138(struct<3> Param0, float fParam3)
{
	if (func_127(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4456448.f_91960 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_91960)
			{
				if (Global_4456448.f_91961[iVar0].f_7 != 0)
				{
					if (func_90(Param0, Global_4456448.f_91961[iVar0], Global_4456448.f_91961[iVar0].f_6, Global_4456448.f_91961[iVar0].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_78239 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_78239)
			{
				if (Global_4456448.f_78242[iVar0].f_15 != 0)
				{
					if (func_90(Param0, Global_4456448.f_78242[iVar0], Global_4456448.f_78242[iVar0].f_3, Global_4456448.f_78242[iVar0].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_124061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_124061)
			{
				if (Global_4456448.f_124065[iVar0].f_12 != 0)
				{
					if (func_90(Param0, Global_4456448.f_124065[iVar0], Global_4456448.f_124065[iVar0].f_3, Global_4456448.f_124065[iVar0].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_268)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969031.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969031.f_233[iVar0], 0))
				{
					if (func_90(Param0, ENTITY::GET_ENTITY_COORDS(Global_969031.f_233[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_969031.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969031.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_266)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969031.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969031.f_119[iVar0], 0))
				{
					if (func_90(Param0, ENTITY::GET_ENTITY_COORDS(Global_969031.f_119[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_969031.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969031.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

Vector3 func_139(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)
{
	if (bParam15)
	{
		if (SYSTEM::VMAG(Param6) > 0f)
		{
			if (!func_142(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_141(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*uParam3 = (*uParam3 + 180f);
			if (*uParam3 > 360f)
			{
				*uParam3 = (*uParam3 + -360f);
			}
		}
		if (*uParam3 <= 90f || *uParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_140(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_140(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(Param6) > 0f)
	{
		if (!func_142(Param0, *uParam3, Param6))
		{
			if (bParam5 || ((uVar4 & 1024 != 0 || Param0.z == 0f) && bParam10))
			{
				*uParam3 = (*uParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, *uParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0xA0F8A7517A273C05(Param0, *uParam3, &Var15))
		{
			Var18 = { Var15 - Param0 };
			if (!iParam11 == 0)
			{
				Var21 = { Var18 / FtoV(SYSTEM::VMAG(Var18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_140(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_140(iParam11, 1.5f);
				}
				Var21 = { Var21 * FtoV((fVar14 * 0.5f)) };
				Var18 = { Var18 - Var21 };
				Var15 = { Param0 + Var18 };
			}
			Var21 = { Var0 - Var15 };
			Var0 = { Var15 };
		}
	}
	return Var0;
}

float func_140(int iParam0, float fParam1)
{
	func_92(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_141(struct<3> Param0)
{
	if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Param0.x, Param0.y, (Param0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_142(struct<3> Param0, float fParam3, struct<3> Param4)
{
	Var0 = { 0f, 1f, 0f };
	func_97(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_143(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_143(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.y * Param3.y)) + (Param0.z * Param3.z));
}

int func_144(struct<3> Param0)
{
	iVar1 = func_146(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2412181[iVar1])
	{
		if (func_145(Param0, &(Global_2411478[iVar1][iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412181[8])
	{
		if (func_145(Param0, &(Global_2411478[8][iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_145(struct<3> Param0, var uParam3)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_146(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411469[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411469[1])
	{
		if (Param0 < Global_2411473[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411469[2])
	{
		if (Param0 < Global_2411473[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411473[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411473[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_147(var uParam0, bool bParam1)
{
	if (func_153(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_152(&Var1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 0, fVar4);
			if (func_148(Var1, &uVar0) || func_153(Var1))
			{
				Var1 = { *uParam0 };
				func_152(&Var1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_148(struct<3> Param0, var uParam3)
{
	if (func_151())
	{
		return 0;
	}
	iVar1 = func_150();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405072.f_365[iVar0].f_9 == 1)
		{
			if (func_149(Param0, &(Global_2405072.f_365[iVar0]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_149(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_137(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405072.f_2726) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_135(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
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

int func_150()
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405072.f_365[iVar0].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_151()
{
	return Global_1676377.f_474;
}

void func_152(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	Var0 = { *uParam0 - Param1 };
	Var0.z = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_97(&Var0, 0f, 0f, GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_97(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.x;
	uParam0->f_1 = Var3.y;
}

int func_153(struct<3> Param0)
{
	if (Global_2405072.f_590 > 0f)
	{
		fVar0 = SYSTEM::VDIST(Param0, Global_2405072.f_587);
		if (fVar0 < Global_2405072.f_590)
		{
			return 1;
		}
	}
	return 0;
}

bool func_154(var uParam0, bool bParam1)
{
	bVar0 = false;
	if (Global_2405072.f_26.f_18)
	{
		switch (Global_2405072.f_26.f_17)
		{
			case 0:
				if (func_137(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_135(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_155(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, Global_2405072.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_155(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	switch (iParam10)
	{
		case 0:
			func_152(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_158(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_156(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_137(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_135(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_156(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	Var0 = { Param4 - Param1 };
	Var0.z = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.z = 0f;
	Var6 = { func_157(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.y, Var3.x, Var3.y)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_143(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_143(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = SYSTEM::VDIST(Param1.x, Param1.y, 0f, Param4.x, Param4.y, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.z = 0f;
		Var6 = { func_157(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.z = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.z = 0f;
		Var6 = { func_157(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(Var26.x, Var26.y, Var29.x, Var29.y)));
		if (!bParam9)
		{
			if (func_143(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_143(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (SYSTEM::VDIST(Var10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

Vector3 func_157(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.y * Param3.z) - (Param0.z * Param3.y)), ((Param0.z * Param3.x) - (Param0.x * Param3.z)), ((Param0.x * Param3.y) - (Param0.y * Param3.x));
}

void func_158(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1);
	fVar4 = (*uParam0 - Param4);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.x = (Param1 - fParam7);
			}
			else
			{
				Var0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.y = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.y = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.x = (Param4 + fParam7);
		}
		else
		{
			Var0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.y = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.y = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

int func_159(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	if (func_211(Param0))
	{
		if (func_162(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_160(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_110(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (SYSTEM::VDIST(*uParam3, *uParam4[iVar0]) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_152(uParam3, *uParam4[iVar0], (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_160(var uParam0, bool bParam1, bool bParam2)
{
	if (func_148(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_161(&Var2, &(Global_2405072.f_365[iVar0]), 1036831949, 0, bParam2);
			if (func_148(Var2, &uVar1) || func_153(Var2))
			{
				Var2 = { *uParam0 };
				func_161(&Var2, &(Global_2405072.f_365[iVar0]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_161(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_155(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_155(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_155(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_152(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_158(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_156(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_162(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409984[iVar0].f_16))
			{
				if (func_149(*uParam0, &(Global_2409984[iVar0]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409984[iVar0].f_12)
						{
							*uParam0 = { Global_2409984[iVar0].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_161(&Var1, &(Global_2409984[iVar0]), 1036831949, 0, bParam3);
							if (func_162(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_161(&Var1, &(Global_2409984[iVar0]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_163(var uParam0, var uParam1, var uParam2)
{
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_159(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_154(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412474.f_162 = 0;
		Global_2412474.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412474[iVar6] = { 0f, 0f, 0f };
			Global_2412474.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_164(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_1746)
		{
			iVar1 = Global_2405072.f_2152[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				Var2 = { Global_2405072.f_1747[iVar1] };
				fVar5 = Global_2405072.f_1747[iVar1].f_3;
				if (SYSTEM::VMAG(Var2) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var2.x, Var2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_133(Var2, fVar5, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_159(uParam2->f_35, &Var2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar7 = uParam2->f_31;
										bVar8 = true;
										iVar9 = 1;
										fVar10 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											fVar10 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar10 = (fVar10 * 0.375f);
											}
										}
										else
										{
											bVar8 = true;
											iVar9 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar10 = (fVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (!func_132(Var2, fVar5, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_168(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_168(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_89(Var2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar11 = true;
											}
										}
										if (bVar11)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar13 = 0f;
												if (uParam2->f_52)
												{
													iVar12 = func_124(Var2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162)
															{
																Global_2412474[iVar6] = { 0f, 0f, 0f };
																Global_2412474.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412474.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412474.f_162 == 0)
														{
															Global_2412474[0] = { Var2 };
															Global_2412474.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (SYSTEM::VDIST2(Var2, uParam2->f_35) < SYSTEM::VDIST2(Global_2412474[iVar6], uParam2->f_35))
																	{
																		func_123(Var2, fVar5, iVar6);
																		iVar6 = Global_2412474.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
													else
													{
														Global_2412474[Global_2412474.f_162] = { Var2 };
														Global_2412474.f_121[Global_2412474.f_162] = fVar5;
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var2 };
												*uParam1 = fVar5;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var2 };
										*uParam1 = fVar5;
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
		if (Global_2412474.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412474[0] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
				{
					func_121(0, uParam2);
				}
				iVar14 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Global_2412474.f_162);
				Var15 = { Global_2412474[0] };
				uVar18 = Global_2412474.f_121[0];
				Global_2412474[0] = { Global_2412474[iVar14] };
				Global_2412474.f_121[0] = Global_2412474.f_121[iVar14];
				Global_2412474[iVar14] = { Var15 };
				Global_2412474.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2412474[0] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_164(struct<3> Param0)
{
	fVar0 = -1f;
	while (iVar2 < Global_2405072.f_1746)
	{
		uVar1 = func_165(Param0, fVar0, &fVar0);
		Global_2405072.f_2152[iVar2] = uVar1;
		iVar2++;
	}
}

int func_165(struct<3> Param0, float fParam3, float fParam4)
{
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405072.f_1746)
	{
		fVar2 = SYSTEM::VDIST2(Param0, Global_2405072.f_1747[iVar3]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

int func_166(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_167(Param0, iParam4, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_4))
				{
					if (func_100(Param0, fParam3, iParam4, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_3, Global_2417897.f_461[iVar0][iVar1].f_4, 0))
					{
						if (func_2153(iVar2, 0, 1) && func_2153(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_167(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	fVar0 = func_98(iParam3, 1008981770);
	fVar1 = func_98(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_168(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
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
		if (func_173(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_169(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_169(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	if (iParam4 && !bParam7)
	{
		if (func_2153(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_170(PLAYER::PLAYER_ID()), Param0, 1) <= (fVar2 + fParam3))
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
		if (func_2153(iVar1, 1, 1))
		{
			if (!func_56(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_106(iVar1) || !bParam10) && !Global_2425662[iVar1].f_259)
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
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_170(iVar1), Param0, 1) <= (fVar2 + fParam3))
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
							if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_170(iVar1), Param0, 1) <= (fVar2 + fParam3))
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

Vector3 func_170(int iParam0)
{
	iVar0 = iParam0;
	if ((func_172() && Global_1590535[iVar0].f_847) && !func_171(Global_1590535[iVar0].f_848))
	{
		return Global_1590535[iVar0].f_848;
	}
	return func_99(iParam0);
}

int func_171(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_172()
{
	return Global_2450632.f_17;
}

int func_173(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_2153(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_106(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_101(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_99(iVar1), Param0, 1) < fParam3)
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

int func_174(struct<3> Param0)
{
	if (Global_2537071.f_883 && func_175(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_175(struct<3> Param0, var uParam3)
{
	*uParam3 = -1;
	iVar2 = func_188(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_176(iVar1))
			{
				if (func_188(Global_1676377.f_488[iVar0], 0) == iVar2)
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

int func_176(int iParam0)
{
	iVar0 = func_187(iParam0);
	if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_264 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1628237[PLAYER::PLAYER_ID()].f_11;
	if (iVar1 != func_59())
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
	if (func_186(PLAYER::PLAYER_ID(), 0) || (func_183(PLAYER::PLAYER_ID()) && func_181(func_182(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (func_180(PLAYER::PLAYER_ID()) || (func_183(PLAYER::PLAYER_ID()) && func_181(func_182(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (func_179(PLAYER::PLAYER_ID()) || (func_183(PLAYER::PLAYER_ID()) && func_181(func_182(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (func_178(PLAYER::PLAYER_ID()) || (func_183(PLAYER::PLAYER_ID()) && func_181(func_182(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (func_177(PLAYER::PLAYER_ID()) || (func_183(PLAYER::PLAYER_ID()) && func_181(func_182(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_177(int iParam0)
{
	if (iParam0 != func_59())
	{
		if (func_2153(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_181(Global_2425662[iParam0].f_310.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_178(int iParam0)
{
	if (iParam0 != func_59())
	{
		if (func_2153(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_181(Global_2425662[iParam0].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_179(int iParam0)
{
	if (iParam0 != func_59())
	{
		if (func_2153(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_59())
			{
				return func_181(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_180(int iParam0)
{
	if (iParam0 != func_59())
	{
		if (func_2153(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_59())
			{
				return func_181(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_181(int iParam0)
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

int func_182(int iParam0)
{
	if (iParam0 != func_59() && func_2153(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_14;
	}
	return -1;
}

int func_183(int iParam0)
{
	if (iParam0 != func_59() && func_2153(iParam0, 1, 1))
	{
		if (func_185(iParam0) && !func_184(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_184(int iParam0)
{
	if (iParam0 != func_59() && func_2153(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310, 4);
	}
	return 0;
}

int func_185(int iParam0)
{
	if (iParam0 != func_59() && func_2153(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_186(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_59())
	{
		if (func_2153(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_59())
			{
				return func_181(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_187(int iParam0)
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

int func_188(struct<3> Param0, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0].f_9 == 1 || iParam3 == 0)
		{
			if (func_149(Param0, &(Global_2409984[iVar0]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_189(struct<3> Param0, int iParam3)
{
	if (Global_2405072.f_45.f_316)
	{
		return;
	}
	if (!func_207())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_206(Param0);
		if (iVar1 > -1)
		{
			func_218();
			switch (iVar1)
			{
				case 0:
					func_205(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_205(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_205(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_205(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_205(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_205(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_205(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_205(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_205(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_205(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_205(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_205(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_205(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_205(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_205(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_205(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_205(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_205(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_205(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_205(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_205(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_205(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_205(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_205(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_205(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_205(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_205(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_205(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_205(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_205(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_205(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_205(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_205(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_205(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_205(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_205(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_205(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_205(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_205(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_205(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_205(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_205(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_205(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_205(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_205(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_205(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_205(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_205(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_205(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_205(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_205(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_205(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_205(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_203(78);
					break;
				
				case 11:
					func_203(79);
					break;
				
				case 12:
					func_203(82);
					break;
				
				case 13:
					func_203(81);
					break;
				
				case 14:
					func_203(73);
					break;
				
				case 15:
					func_205(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_205(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_205(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_205(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_203(75);
					break;
				
				case 17:
					func_203(76);
					break;
				
				case 18:
					func_203(77);
					break;
				
				case 19:
					func_205(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_205(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_205(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_205(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_203(80);
					break;
				
				case 21:
				case 25:
					func_203(87);
					break;
				
				case 22:
				case 26:
					func_203(88);
					break;
				
				case 23:
				case 27:
					func_203(89);
					break;
				
				case 24:
				case 28:
					func_203(90);
					break;
				
				case 29:
				case 30:
					if (func_202(iParam3))
					{
						func_203(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_28);
					}
					break;
				
				case 31:
					func_205(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_205(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_205(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_205(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_205(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_205(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_205(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_205(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_205(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_205(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_205(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_205(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_205(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_205(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_205(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_205(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_205(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_205(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_205(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_205(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_205(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_205(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_205(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_205(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_205(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_205(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_205(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_205(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_205(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_205(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_205(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_205(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_205(-194.254f, -2018.756f, 26.62f, 75f);
					func_205(-186.956f, -2031.369f, 26.62f, 338f);
					func_205(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_205(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_205(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_205(-233.372f, -2089.601f, 26.62f, 304f);
					func_205(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_205(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_205(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_205(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_205(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_205(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_205(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_205(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_205(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_205(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_205(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_205(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_205(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_205(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_205(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_205(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_199(Param0, &iVar2, &iVar6) || (func_175(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))))
		{
			func_218();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar6[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2405072.f_513 = 1;
				}
				if (!iVar6[iVar0] && func_198(iVar2[iVar0], -1))
				{
					if (func_202(iParam3))
					{
						func_203(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_197(PLAYER::PLAYER_PED_ID()) || func_196(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))
					{
						if (func_195(iParam3))
						{
							func_194(iVar2[iVar0]);
						}
						else if (func_193(iParam3))
						{
							func_192(iVar2[iVar0]);
							func_194(iVar2[iVar0]);
						}
						else
						{
							func_192(iVar2[iVar0]);
							func_194(iVar2[iVar0]);
						}
					}
					else
					{
						func_190(iVar2[iVar0], iParam3);
					}
				}
				else
				{
					func_203(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_190(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_205(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_205(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_205(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_205(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_205(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_205(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_205(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_205(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_205(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_205(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_205(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_205(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_205(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_205(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_205(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_205(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_205(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_205(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_205(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_205(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_205(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_205(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_205(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_205(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_205(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_205(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_205(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_205(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_205(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_205(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_205(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_205(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_205(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_205(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_205(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_205(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_205(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_205(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_205(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_205(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_205(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_205(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_205(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_205(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_205(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_205(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_205(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_205(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_205(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_205(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_205(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_205(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_205(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_205(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_205(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_205(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_205(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_205(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_205(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_205(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_205(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_205(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_205(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_205(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_205(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_205(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_205(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_205(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_205(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_205(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_205(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_205(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_205(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_205(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_205(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_205(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_205(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_205(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_205(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_205(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_205(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_205(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_205(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_205(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_205(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_205(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_205(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_205(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_205(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_205(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_205(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_205(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_205(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_205(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_205(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_205(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_205(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_205(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_205(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_205(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_205(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_205(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_205(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_205(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_205(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_205(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_205(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_205(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_205(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_205(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_205(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_205(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_205(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_205(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_205(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_205(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_205(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_205(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_205(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_205(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_205(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_205(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_205(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_205(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_205(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_205(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_205(142.7427f, -2536.147f, 5f, 205.0002f);
			func_205(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_205(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_205(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_205(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_205(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_205(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_205(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_205(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_205(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_205(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_205(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_205(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_205(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_205(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_205(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_205(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_205(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_205(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_205(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_205(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_205(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_205(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_205(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_205(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_205(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_205(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_205(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_205(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_205(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_205(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_205(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_205(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_205(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_205(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_205(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_205(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_205(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_205(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_205(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_205(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_205(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_205(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_205(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_205(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_205(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_205(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_205(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_205(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_205(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_205(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_205(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_205(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_205(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_205(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_205(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_205(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_205(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_205(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_205(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_205(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_205(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_205(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_205(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_205(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_205(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_205(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_205(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_205(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_205(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_205(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_205(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_205(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_205(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_205(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_205(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_205(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_205(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_205(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_205(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_205(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_205(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_205(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_205(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_205(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_205(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_205(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_205(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_205(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_205(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_205(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_205(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_205(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_205(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_205(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_205(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_205(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_205(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_205(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_205(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_205(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_205(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_205(-1823.414f, 3092.762f, 31.843f, 330f);
			func_205(-1819.045f, 3100.435f, 31.845f, 330f);
			func_205(-1833.313f, 3075.722f, 31.838f, 330f);
			func_205(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_205(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_205(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_205(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_205(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_205(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_205(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_205(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_205(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_205(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_205(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_205(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_205(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_205(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_205(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_205(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_205(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_205(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_205(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_205(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_205(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_205(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_205(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_205(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_205(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_205(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_205(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_205(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_205(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_205(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_205(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_205(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_205(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_205(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_205(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_205(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_205(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_205(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_205(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_205(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_205(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_205(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_205(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_205(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_205(1231.279f, 2910.881f, 43.3085f, 12f);
				func_205(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_205(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_205(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_205(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_205(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_205(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_205(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_205(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_205(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_205(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_205(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_205(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_205(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_205(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_205(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_205(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_205(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_205(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_205(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_205(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_205(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_205(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_205(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_205(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_205(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_205(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_205(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_205(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_205(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_205(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_205(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_205(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_205(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_205(3.855f, 2672.388f, 78.437f, 319.2f);
				func_205(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_205(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_205(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_205(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_205(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_205(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_205(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_205(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_205(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_205(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_205(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_205(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_205(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_205(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_205(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_205(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_205(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_205(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_205(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_205(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_205(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_205(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_205(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_205(102.851f, 2688.009f, 51.732f, 224f);
				func_205(109.815f, 2681.012f, 51.112f, 224f);
				func_205(116.355f, 2674.26f, 50.529f, 224f);
				func_205(125.138f, 2665.98f, 49.8f, 224f);
				func_205(132.228f, 2659.865f, 49.26f, 228.4f);
				func_205(139.354f, 2653.536f, 48.737f, 228.4f);
				func_205(88.512f, 2702.995f, 53.042f, 224.199f);
				func_205(81.565f, 2710.357f, 53.67f, 224.199f);
				func_205(75.156f, 2716.981f, 54.223f, 224.199f);
				func_205(68.442f, 2723.806f, 54.775f, 226.199f);
				func_205(61.449f, 2730.606f, 55.308f, 226.199f);
				func_205(53.702f, 2738.167f, 55.855f, 226.199f);
				func_205(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_205(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_205(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_205(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_205(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_205(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_205(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_205(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_205(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_205(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_205(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_205(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_205(2714.633f, 3918.283f, 42.938f, 16f);
				func_205(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_205(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_205(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_205(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_205(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_205(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_205(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_205(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_205(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_205(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_205(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_205(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_205(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_205(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_205(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_205(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_205(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_205(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_205(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_205(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_205(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_205(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_205(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_205(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_205(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_205(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_205(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_205(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_205(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_205(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_205(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_205(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_205(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_205(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_205(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_205(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_205(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_205(3374.923f, 5520.177f, 20.3207f, 86f);
				func_205(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_205(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_205(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_205(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_205(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_205(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_205(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_205(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_205(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_205(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_205(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_205(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_205(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_205(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_205(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_205(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_205(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_205(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_205(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_205(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_205(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_205(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_205(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_205(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_205(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_205(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_205(43.848f, 6845.657f, 13.379f, 247.2f);
				func_205(50.379f, 6861.146f, 15.105f, 247.2f);
				func_205(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_205(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_205(55.806f, 6875.081f, 14.824f, 247.2f);
				func_205(11.616f, 6877.079f, 11.466f, 247.2f);
				func_205(18.954f, 6891.633f, 11.37f, 247.2f);
				func_205(26.68f, 6907.587f, 11.869f, 247.2f);
				func_205(7.479f, 6907.895f, 12.024f, 247.2f);
				func_205(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_205(35.591f, 6836.608f, 13.288f, 274.4f);
				func_205(36.028f, 6830.135f, 13.801f, 270.8f);
				func_205(35.114f, 6823.884f, 14.527f, 260.8f);
				func_205(48.779f, 6838.693f, 14.337f, 273.6f);
				func_205(56.738f, 6821.8f, 15.244f, 244.8f);
				func_205(48.377f, 6825.895f, 14.656f, 249.8f);
				func_205(49.11f, 6831.439f, 13.991f, 274.8f);
				func_205(53.544f, 6818.275f, 16.342f, 243f);
				func_205(46.162f, 6821.945f, 15.483f, 249.8f);
				func_205(60.129f, 6836.8f, 15.605f, 269.6f);
				func_205(40.88f, 6802.952f, 20.113f, 242.6f);
				func_205(48.203f, 6799.134f, 20.897f, 244.4f);
				func_205(70.449f, 6809.271f, 16.846f, 243f);
				func_205(61.436f, 6814.266f, 16.71f, 244.2f);
				func_205(56.142f, 6793.458f, 19.806f, 242.6f);
				func_205(65.759f, 6791.12f, 18.433f, 276.4f);
				func_205(77.305f, 6805.391f, 18.558f, 245.6f);
				func_205(85.893f, 6800.243f, 18.535f, 249.8f);
				func_205(56.85f, 6780.582f, 18.822f, 297.999f);
				func_205(65.636f, 6784.669f, 18.789f, 293.799f);
				func_205(74.121f, 6788.498f, 18.739f, 293.799f);
				func_205(97.779f, 6796.32f, 19.02f, 276.799f);
				func_205(106.76f, 6796.983f, 18.914f, 272.599f);
				func_205(112.387f, 6802.858f, 18.994f, 210.599f);
				func_205(117.58f, 6802.644f, 18.663f, 209.399f);
				func_205(122.481f, 6802.693f, 18.468f, 209.399f);
				func_205(127.182f, 6802.686f, 18.218f, 209.399f);
				func_205(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_205(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_205(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_205(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_205(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_205(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_205(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_205(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_205(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_205(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_205(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_205(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_205(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_205(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_205(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_205(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_205(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_205(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_205(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_205(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_205(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_205(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_205(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_205(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_205(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_205(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_205(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_205(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_205(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_205(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_205(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_205(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_205(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_205(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_205(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_205(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_205(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_205(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_205(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_205(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_205(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_205(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_205(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_205(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_205(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_205(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_205(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_205(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_205(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_205(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_205(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_205(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_205(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_205(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_205(30.027f, 3292.351f, 38.604f, 140.199f);
				func_205(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_205(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_205(23.897f, 3283.152f, 39.381f, 145.399f);
				func_205(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_205(18.723f, 3274.025f, 40.054f, 155.799f);
				func_205(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_205(36.958f, 3298.847f, 38.001f, 127.799f);
				func_205(54.165f, 3311.582f, 36.517f, 303.799f);
				func_205(61.607f, 3317.105f, 35.916f, 306.999f);
				func_205(68.994f, 3323.129f, 35.364f, 308.199f);
				func_205(76.266f, 3329.467f, 34.805f, 311.399f);
				func_205(82.757f, 3335.915f, 34.344f, 316.598f);
				func_205(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_205(14.664f, 3263.688f, 40.931f, 160.398f);
				func_205(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_205(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_205(89.575f, 3343.311f, 33.932f, 318.398f);
				func_205(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_205(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_205(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_205(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_205(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_205(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_205(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_205(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_205(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_205(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_205(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_205(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_205(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_205(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_205(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_205(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_205(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_205(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_205(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_205(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_205(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_205(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_205(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_205(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_205(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_205(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_205(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_205(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_205(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_205(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_205(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_205(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_205(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_205(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_205(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_205(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_205(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_205(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_205(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_205(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_205(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_205(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_205(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_205(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_205(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_205(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_205(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_205(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_205(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_205(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_205(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_205(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_205(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_205(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_205(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_205(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_205(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_205(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_205(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_205(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_205(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_205(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_205(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_205(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_205(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_205(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_205(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_205(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_205(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_205(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_205(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_205(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_205(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_205(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_205(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_205(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_205(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_205(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_205(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_205(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_205(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_191(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_191(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_191(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_191(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_191(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_191(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_191(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_191(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_191(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_191(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_191(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_191(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_191(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_191(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_191(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_191(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_191(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_191(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_191(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_191(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_191(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_191(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_191(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_191(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_191(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_191(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_191(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_191(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_191(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_191(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_191(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_191(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_191(struct<3> Param0, float fParam3, int iParam4, bool bParam5)
{
	if (!iParam4 == 0)
	{
		func_92(iParam4, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0.5f);
		Var7 = { 0f, fVar6, 0f };
		Var10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam3, Var7) };
		func_205(Var10, fParam3);
	}
	else
	{
		func_205(Param0, fParam3);
	}
}

void func_192(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_205(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_205(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_205(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_205(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_205(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_205(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_205(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_205(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_205(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_205(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_205(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_205(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_205(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_205(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_205(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_205(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_205(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_205(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_205(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_205(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_205(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_205(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_205(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_205(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_205(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_205(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_205(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_205(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_205(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_205(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_205(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_205(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_205(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_205(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_205(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_205(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_205(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_205(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_205(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_205(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_205(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_205(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_205(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_205(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_205(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_205(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_205(-1356.991f, -3242.228f, 12.945f, 330f);
			func_205(-1369.313f, -3234.758f, 12.945f, 330f);
			func_205(-1381.751f, -3227.408f, 12.945f, 330f);
			func_205(-1394.302f, -3220.021f, 12.945f, 330f);
			func_205(-1354.339f, -3223.129f, 12.945f, 330f);
			func_205(-1366.302f, -3215.809f, 12.945f, 330f);
			func_205(-1378.492f, -3208.645f, 12.945f, 330f);
			func_205(-1350.322f, -3203.405f, 12.945f, 330f);
			func_205(-1362.684f, -3196.451f, 12.945f, 330f);
			func_205(-1347.089f, -3182.69f, 12.945f, 330f);
			func_205(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_205(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_205(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_205(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_205(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_205(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_205(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_205(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_205(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_205(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_205(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_205(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_205(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_205(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_205(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_205(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_205(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_205(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_205(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_205(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_205(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_205(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_205(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_205(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_205(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_205(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_205(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_205(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_205(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_205(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_205(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_205(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_205(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_205(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_205(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_205(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_205(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_205(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_205(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_205(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_205(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_205(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_205(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_205(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_205(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_205(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_205(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_205(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_205(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_205(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_205(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_205(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_205(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_205(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_205(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_205(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_205(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_205(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_205(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_205(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_205(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_205(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_205(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_205(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_205(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_205(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_205(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_205(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_205(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_205(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_205(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_205(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_205(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_205(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_205(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_205(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_205(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_205(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_205(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_205(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_205(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_205(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_205(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_205(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_205(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_205(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_205(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_205(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_205(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_205(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_205(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_205(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_205(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_205(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_205(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_205(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_205(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_205(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_205(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_205(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_205(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_205(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_205(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_205(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_205(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_205(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_205(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_205(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_205(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_205(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_205(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_205(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_205(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_205(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_205(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_205(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_205(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_205(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_205(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_205(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_205(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_205(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_205(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_205(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_205(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_205(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_205(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_205(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_205(-2484.323f, 3249.294f, 31.828f, 151f);
			func_205(-2495.313f, 3255.746f, 31.828f, 151f);
			func_205(-2472.644f, 3242.684f, 31.828f, 151f);
			func_205(-2506.313f, 3262.27f, 31.823f, 151f);
			func_205(-2461.494f, 3235.93f, 31.828f, 151f);
			func_205(-2505.602f, 3238.049f, 31.828f, 151f);
			func_205(-2481.937f, 3224.8f, 31.828f, 151f);
			func_205(-2516.813f, 3244.266f, 31.823f, 151f);
			func_205(-2470.03f, 3217.899f, 31.828f, 151f);
			func_205(-2493.933f, 3231.308f, 31.828f, 151f);
			func_205(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_205(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_205(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_205(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_205(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_205(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_205(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_205(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_205(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_205(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_205(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_205(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_205(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_205(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_205(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_205(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_205(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_205(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_205(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_205(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_205(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_205(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_205(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_205(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_205(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_205(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_205(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_205(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_205(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_205(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_205(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_205(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_205(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_205(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_205(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_205(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case -1763555241:
		case -1984275979:
		case -392675425:
		case -975345305:
		case -1386191424:
		case 788747387:
		case 744705981:
		case -1660661558:
		case 710198397:
		case -1671539132:
		case -1845487887:
		case -644710429:
		case 1824333165:
		case 970356638:
		case -2122757008:
		case -1673356438:
		case 1077420264:
		case 1341619767:
		case -1281684762:
		case -1523619738:
		case -1007528109:
		case 1565978651:
		case 1036591958:
		case -1700874274:
			return 1;
		
		default:
	}
	return 0;
}

void func_194(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_205(-947.712f, -3367.704f, 12.944f, 60f);
			func_205(-904.692f, -3293.072f, 12.944f, 60f);
			func_205(-863.71f, -3221.978f, 12.944f, 60f);
			func_205(-966.418f, -3162.773f, 12.944f, 60f);
			func_205(-1007.435f, -3233.93f, 12.944f, 60f);
			func_205(-1050.455f, -3308.559f, 12.944f, 60f);
			func_205(-1145.673f, -3253.456f, 12.944f, 60f);
			func_205(-1098.386f, -3181.428f, 12.944f, 60f);
			func_205(-1060.474f, -3108.903f, 12.944f, 60f);
			func_205(-1155.391f, -3053.632f, 12.944f, 60f);
			func_205(-1196.114f, -3125.146f, 12.948f, 60f);
			func_205(-1235.552f, -3201.86f, 12.944f, 60f);
			func_205(-1344.446f, -3139.177f, 12.944f, 60f);
			func_205(-1301.308f, -3064.341f, 12.944f, 60f);
			func_205(-1260.135f, -2992.912f, 12.944f, 60f);
			func_205(-1364.244f, -2932.9f, 12.98f, 60f);
			func_205(-1405.284f, -3004.108f, 12.96f, 60f);
			func_205(-1448.29f, -3078.72f, 12.95f, 60f);
			func_205(-1535.732f, -3028.318f, 12.945f, 60f);
			func_205(-1492.639f, -2953.558f, 12.945f, 60f);
			func_205(-1451.506f, -2882.2f, 12.944f, 60f);
			func_205(-1553.927f, -2823.12f, 13.002f, 60f);
			func_205(-1595.097f, -2894.571f, 12.944f, 60f);
			func_205(-1637.836f, -2968.714f, 12.945f, 60f);
			func_205(-1740.971f, -2911.484f, 12.944f, 330f);
			func_205(-1696.293f, -2833.978f, 12.944f, 330f);
			func_205(-1651.502f, -2756.273f, 12.945f, 330f);
			func_205(-1588.258f, -2647.575f, 12.944f, 330f);
			func_205(-1536.862f, -2681.378f, 12.945f, 330f);
			func_205(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_205(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_205(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_205(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_205(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_205(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_205(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_205(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_205(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_205(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_205(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_205(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_205(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_205(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_205(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_205(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_205(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_205(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_205(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_205(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_205(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_205(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_205(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_205(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_205(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_205(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_205(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_205(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_205(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_205(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_205(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 970385471:
		case -901163259:
		case -1746576111:
		case 837858166:
		case 1043222410:
		case -42959138:
		case -749299473:
		case -50547061:
		case 1621617168:
		case -1214505995:
		case -82626025:
		case 621481054:
		case -1214293858:
		case -1295027632:
		case -339587598:
		case 1075432268:
		case -1600252419:
		case 1981688531:
		case 1044954915:
		case 165154707:
		case -32878452:
		case 447548909:
			return 1;
		
		default:
	}
	return 0;
}

int func_196(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0, int iParam1)
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

int func_199(struct<2> Param0, var uParam2, var uParam3, var uParam4)
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
			if (func_176(iVar0))
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
			if (func_200(iVar0))
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

int func_200(int iParam0)
{
	iVar0 = func_201(iParam0);
	if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_271 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1628237[PLAYER::PLAYER_ID()].f_11;
	if (iVar1 != func_59())
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

int func_201(int iParam0)
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

int func_202(int iParam0)
{
	if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_203(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_205(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_205(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_205(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_205(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case 79:
			func_205(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_205(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_205(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_205(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_205(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_205(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_205(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_205(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_205(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_205(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_205(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_205(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_205(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_205(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_205(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_205(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_205(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_205(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_205(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_205(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_205(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_205(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_205(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_205(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_205(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_205(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_205(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_205(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_205(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_205(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_205(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_205(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_204())
			{
				func_205(-1608.297f, -556.875f, 33.406f, 310f);
				func_205(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_205(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_205(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_205(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_205(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_205(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_205(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_205(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_205(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_205(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_205(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_204())
			{
				func_205(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_205(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_205(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_205(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_205(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_205(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_205(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_205(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_205(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_205(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_205(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_205(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_204())
			{
				func_205(-102.737f, -597.379f, 35.053f, 160.999f);
				func_205(-97.793f, -589.568f, 35.082f, 134.799f);
				func_205(-110.357f, -619.402f, 35.055f, 160.599f);
				func_205(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_205(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_205(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_205(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_205(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_205(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_205(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_205(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_205(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_204())
			{
				func_205(-59.349f, -779.238f, 43.134f, 228.398f);
				func_205(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_205(-65.212f, -772.66f, 43.151f, 219.398f);
				func_205(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_205(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_205(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_205(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_205(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_205(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_205(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_205(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_205(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_205(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_205(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_205(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_205(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_205(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_205(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_205(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_205(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_205(-1464.5f, -927.9f, 9f, 296.7991f);
			func_205(-1466f, -926.1f, 9f, 296.7991f);
			func_205(-1467.9f, -924.7f, 9f, 296.7991f);
			func_205(-1469.7f, -923.7f, 9f, 296.7991f);
			func_205(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_205(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_205(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_205(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_205(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_205(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_205(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_205(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_205(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_205(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_205(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_205(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_205(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_205(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_205(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_205(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_205(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_205(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_205(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_205(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_205(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_205(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_205(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_205(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_205(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_205(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_205(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_205(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_205(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_205(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_205(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_205(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_205(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_205(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_205(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_205(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_205(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_205(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_205(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_205(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_205(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_205(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_205(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_205(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_205(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_205(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_205(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_205(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_205(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_205(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_205(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_205(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_205(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_205(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_205(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_205(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_205(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_205(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_205(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_205(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_205(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_205(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_205(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_205(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_205(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_205(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_205(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_205(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_205(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_205(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_205(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_205(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_205(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_205(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_205(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_205(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_205(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_205(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_205(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_205(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_205(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_205(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_205(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_205(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_204()
{
	return Global_2450632.f_15;
}

void func_205(struct<3> Param0, float fParam3)
{
	if (Global_2405072.f_1746 < 101)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405072.f_1747[Global_2405072.f_1746] = { Param0 };
		Global_2405072.f_1747[Global_2405072.f_1746].f_3 = fParam3;
		Global_2405072.f_1746++;
	}
}

int func_206(struct<3> Param0)
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
		if (func_145(Param0, &(Global_2412235[iVar0])))
		{
			Global_2405072.f_2898 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405072.f_2898 = -1;
	return -1;
}

int func_207()
{
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_13, 0) && !Global_2451426.f_6285)
	{
		return 0;
	}
	return 0;
}

int func_208(struct<2> Param0, var uParam2, bool bParam3, float fParam4)
{
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam3)
		{
			if (func_176(iVar0))
			{
				fVar1 = fParam4;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam4;
		}
		fVar2 = SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1676377.f_488[iVar0], Global_1676377.f_488[iVar0].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_209()
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405072.f_2728[iVar0] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_210(var uParam0, bool bParam1)
{
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.z <= 0f)
		{
			Var1.z = ((Global_2412191[iVar0].f_2 + Global_2412191[iVar0].f_3.f_2) * 0.5f);
		}
		if (func_145(Var1, &(Global_2412191[iVar0])))
		{
			if (bParam1)
			{
				func_156(&Var1, Global_2412191[iVar0], Global_2412191[iVar0].f_3, Global_2412191[iVar0].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_211(struct<3> Param0)
{
	if (!Global_2405072.f_512 && !Global_2405072.f_513)
	{
		if (!Global_2405072.f_45.f_314)
		{
			if (!func_215(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_214(Param0, 1008981770))
			{
				if (!func_162(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_162(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_213(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_212(&(Global_2405072.f_45[iVar0])) };
					if (!func_162(&Var1, 0, 0, 0, 1))
					{
						if (!func_162(&Param0, 0, 0, 0, 1))
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

Vector3 func_212(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_213(struct<3> Param0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0].f_9)
		{
			if (func_149(Param0, &(Global_2405072.f_45[iVar0]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_214(struct<3> Param0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0].f_9)
		{
			if (func_149(Param0, &(Global_2405072.f_45[iVar0]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_215(int iParam0, bool bParam1)
{
	if (func_217() != 0)
	{
		return func_216(iParam0) != 0;
	}
	return func_127(iParam0, bParam1, 0);
}

int func_216(int iParam0)
{
	if (func_2153(iParam0, 0, 1))
	{
		return Global_2425662[iParam0].f_1;
	}
	return 0;
}

int func_217()
{
	return Global_30768;
}

void func_218()
{
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405072.f_1747[iVar0] = { Var1 };
		iVar0++;
	}
	Global_2405072.f_1746 = 0;
}

void func_219()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2405072.f_684[iVar0]))
		{
			if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_684[iVar0])
			{
				if (!Global_2405072.f_680[iVar0] == -1)
				{
					if (NETWORK::_0xE64A3CA08DFA37A9(Global_2405072.f_680[iVar0]))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2405072.f_680[iVar0]);
						Global_2405072.f_680[iVar0] = -1;
					}
					else
					{
						Global_2405072.f_680[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2405072.f_680[iVar0] == -1)
		{
			Global_2405072.f_680[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_220(bool bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_221(int iParam0)
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

bool func_222()
{
	return func_223() > 0;
}

int func_223()
{
	return Local_701.f_122;
}

int func_224()
{
	iVar0 = 0;
	while (iVar0 < func_24())
	{
		if (Local_701.f_101[iVar0] != -1)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_225(bool bParam0)
{
	if (bParam0)
	{
		return func_223() >= func_226();
	}
	return func_223() >= func_73(-1);
}

int func_226()
{
	return Local_701.f_174;
}

void func_227(int iParam0)
{
	if (func_45())
	{
		iVar0 = 0;
		while (iVar0 < func_228())
		{
			if (GAMEPLAY::IS_BIT_SET(Local_701.f_134[iParam0], iVar0))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_701.f_134[iParam0]), iVar0);
			}
			iVar0++;
		}
	}
}

int func_228()
{
	if (func_74())
	{
		return 15;
	}
	if (func_15())
	{
		return 10;
	}
	return 20;
}

int func_229(int iParam0)
{
	if (func_15())
	{
		return 3;
	}
	if (func_43() || func_44())
	{
		return 1;
	}
	if (func_23())
	{
		return (func_226() / func_24());
	}
	if (func_25())
	{
		return (func_73(iParam0) / func_24());
	}
	return (func_226() / func_14());
}

bool func_230()
{
	return func_16() == 3;
}

void func_231(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_701.f_15 = iParam0;
}

int func_232()
{
	return func_233();
}

var func_233()
{
	switch (Local_701.f_17)
	{
		case 0:
			return Global_262145.f_18040;
		
		case 3:
			return Global_262145.f_18044;
		
		case 7:
			return Global_262145.f_18046;
		
		case 4:
			return Global_262145.f_18050;
		
		case 9:
			return Global_262145.f_18053;
		
		case 2:
			return Global_262145.f_18077;
		
		case 5:
			return Global_262145.f_18080;
		
		case 1:
			return Global_262145.f_18082;
		
		case 6:
			return Global_262145.f_18087;
		
		case 8:
			return Global_262145.f_18091;
		
		case 10:
			return Global_262145.f_18095;
		
		case 11:
			return Global_262145.f_18100;
		
		case 12:
			return Global_262145.f_18105;
		
		default:
	}
	return Global_262145.f_15108;
}

int func_234()
{
	return Local_701.f_15;
}

int func_235(int iParam0)
{
	switch (func_16())
	{
		case 3:
			switch (Local_701.f_679)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1176698112;
						
						case 1:
							return -9308122;
						
						case 2:
							return -9308122;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam0)
					{
						case 0:
							return -236444766;
						
						case 1:
							return -39239064;
						
						case 2:
							return -39239064;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam0)
					{
						case 0:
							return 891945583;
						
						case 1:
							return 611648169;
						
						case 2:
							return 611648169;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam0)
					{
						case 0:
							return 1466037421;
						
						case 1:
							return 1520708641;
						
						case 2:
							return 832784782;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam0)
					{
						case 0:
							return -1872961334;
						
						case 1:
							return 663522487;
						
						case 2:
							return 663522487;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam0)
					{
						case 0:
							return -236444766;
						
						case 1:
							return -39239064;
						
						case 2:
							return -39239064;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam0)
					{
						case 0:
							return 891945583;
						
						case 1:
							return 611648169;
						
						case 2:
							return 611648169;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1176698112;
						
						case 1:
							return -9308122;
						
						case 2:
							return -9308122;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1752208920;
						
						case 1:
							return 1752208920;
						
						case 2:
							return 1752208920;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam0)
					{
						case 0:
							return -1176698112;
						
						case 1:
							return -9308122;
						
						case 2:
							return -9308122;
						
						default:
					}
					break;
			}
			break;
		
		case 4:
		case 5:
			return -48477765;
		
		case 7:
			return 2097407511;
		
		case 6:
			switch (Local_701.f_981)
			{
				case 0:
					return -48477765;
				
				case 1:
					if (Local_701.f_679 == 2)
					{
						return -1211756494;
					}
					return -1589423867;
				
				case 2:
					if (Local_701.f_679 == 2)
					{
						return 588969535;
					}
					return -236444766;
				
				default:
			}
			break;
		
		case 1:
			if (func_236(iParam0) == -1)
			{
				return 600300561;
			}
			return -1697435671;
	}
	return -48477765;
}

int func_236(int iParam0)
{
	return -1;
}

int func_237()
{
	switch (func_16())
	{
		case 4:
			return 5;
		
		case 1:
			return func_72();
		
		case 9:
			return 5;
		
		default:
	}
	return 0;
}

int func_238()
{
	switch (func_16())
	{
		case 1:
		case 9:
			return 1;
		
		default:
	}
	return 0;
}

int func_239(int iParam0)
{
	switch (func_16())
	{
		case 7:
			return 2097407511;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return -1023672578;
				
				case 1:
					return 2114544056;
				
				case 2:
					return 1264851357;
				
				case 3:
					return 1546450936;
				
				case 4:
					return 1371553700;
				
				case 5:
					return -1023672578;
				
				case 6:
					return 2114544056;
				
				case 7:
					return 1264851357;
				
				case 8:
					return 1546450936;
				
				case 9:
					return 1371553700;
				
				case 10:
					return -1023672578;
				
				case 11:
					return 2114544056;
				
				default:
			}
			break;
		
		case 12:
			return -39239064;
		
		case 0:
			return Local_701.f_884;
		
		case 6:
			if (func_240())
			{
				switch (Local_701.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 2064532783;
							
							case 1:
								return -673538407;
							
							case 2:
								return -673538407;
							
							case 3:
								return -673538407;
							
							case 4:
								return -673538407;
							
							case 5:
								return -673538407;
							
							case 6:
								return -673538407;
							
							case 7:
								return 1650288984;
							
							case 8:
								return 1650288984;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return -398748745;
							
							case 1:
								return 1650288984;
							
							case 2:
								return 1650288984;
							
							case 3:
								return -673538407;
							
							case 4:
								return -673538407;
							
							case 5:
								return -673538407;
							
							case 6:
								return -673538407;
							
							case 7:
								return -673538407;
							
							case 8:
								return -673538407;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 2097407511;
							
							case 1:
								return 1650288984;
							
							case 2:
								return 1650288984;
							
							case 3:
								return -951490775;
							
							case 4:
								return -951490775;
							
							case 5:
								return 587703123;
							
							case 6:
								return -408329255;
							
							case 7:
								return -2076336881;
							
							case 8:
								return 390939205;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return -1067576423;
							
							case 1:
								return 1650288984;
							
							case 2:
								return 1650288984;
							
							case 3:
								return 587703123;
							
							case 4:
								return 343259175;
							
							case 5:
								return 2097407511;
							
							case 6:
								return 390939205;
							
							case 7:
								return -951490775;
							
							case 8:
								return -2076336881;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return 2064532783;
							
							case 1:
								return 2064532783;
							
							case 2:
								return -673538407;
							
							case 3:
								return -951490775;
							
							case 4:
								return -1211756494;
							
							case 5:
								return 390939205;
							
							case 6:
								return 390939205;
							
							case 7:
								return 1650288984;
							
							case 8:
								return 1650288984;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_701.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return -48477765;
							
							case 1:
								return 1650288984;
							
							case 2:
								return 1650288984;
							
							case 3:
								return -408329255;
							
							case 4:
								return -408329255;
							
							case 5:
								return -1589423867;
							
							case 6:
								return -1589423867;
							
							case 7:
								return 390939205;
							
							case 8:
								return -951490775;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 587703123;
							
							case 1:
								return 1650288984;
							
							case 2:
								return 1650288984;
							
							case 3:
								return -2076336881;
							
							case 4:
								return -1697435671;
							
							case 5:
								return -1697435671;
							
							case 6:
								return 1264920838;
							
							case 7:
								return -951490775;
							
							case 8:
								return -2076336881;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 588969535;
							
							case 1:
								return -1697435671;
							
							case 2:
								return 587703123;
							
							case 3:
								return -2076336881;
							
							case 4:
								return -1211756494;
							
							case 5:
								return 1650288984;
							
							case 6:
								return 1650288984;
							
							case 7:
								return 390939205;
							
							case 8:
								return -951490775;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return -1067576423;
							
							case 1:
								return -1697435671;
							
							case 2:
								return -1211756494;
							
							case 3:
								return 600300561;
							
							case 4:
								return 1165780219;
							
							case 5:
								return 587703123;
							
							case 6:
								return -1589423867;
							
							case 7:
								return 1650288984;
							
							case 8:
								return 1650288984;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return -1067576423;
							
							case 1:
								return -1697435671;
							
							case 2:
								return -1211756494;
							
							case 3:
								return -951490775;
							
							case 4:
								return -2076336881;
							
							case 5:
								return 587703123;
							
							case 6:
								return -1589423867;
							
							case 7:
								return 1650288984;
							
							case 8:
								return 1650288984;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return -39239064;
}

int func_240()
{
	switch (Local_701)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			if (Local_701.f_2 == 0)
			{
				return 1;
			}
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			if (Local_701.f_2 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_241()
{
	switch (func_16())
	{
		case 12:
		case 0:
			return 4;
		
		case 6:
			return 9;
		
		case 7:
			return 1;
		
		case 4:
			switch (Local_701.f_957)
			{
				case 0:
					return func_22();
				
				case 1:
					return func_22() * 2;
				
				case 2:
					return func_22() * 3;
				
				default:
			}
			break;
	}
	return 0;
}

int func_242()
{
	switch (func_16())
	{
		case 4:
		case 7:
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

void func_243(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_701.f_14 = iParam0;
}

int func_244()
{
	if (func_254())
	{
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (!func_245(iVar0))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_245(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_674[iParam0]))
	{
		if (func_252(func_253()))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(iParam0 + 1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_59[iParam0]) && func_66(iParam0))
				{
					iVar0 = NETWORK::NET_TO_VEH(Local_701.f_59[iParam0]);
					if (func_251(&(Local_701.f_674[iParam0]), func_253(), ENTITY::GET_ENTITY_COORDS(func_13(iParam0), 1) + Vector(5f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						if (func_246(iVar0, iParam0))
						{
							ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_701.f_674[iParam0]), 100);
							ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_701.f_674[iParam0]), 1, 0);
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_701.f_674[iParam0]), 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_253());
							ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_OBJ(Local_701.f_674[iParam0]), 1, 1, 1, 1, 1, 1, 1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_VEH(Local_701.f_674[iParam1]), iParam0))
	{
		sVar0 = func_250();
		ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_701.f_674[iParam1]), iParam0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, sVar0), func_249(), func_247(), 1, 0, 1, 0, 2, 1);
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_247()
{
	if (func_248())
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 90f;
}

bool func_248()
{
	return func_16() == 2;
}

Vector3 func_249()
{
	switch (func_16())
	{
		case 5:
			return 0f, -1f, -0.3f;
			break;
		
		case 7:
		case 0:
			if (Local_701.f_957 == 0)
			{
				return 0f, -1f, 0.75f;
			}
			else if (Local_701.f_957 == 1)
			{
				return 0f, -1f, 0f;
			}
			break;
		
		case 9:
			return 0f, -0.75f, 0.35f;
			break;
		
		case 2:
			return 0f, -0.05f, 0f;
			break;
	}
	return 0f, 0f, 0f;
}

char* func_250()
{
	if (func_248())
	{
		return "chassis";
	}
	return "chassis_dummy";
}

int func_251(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_REGISTER(NETWORK::NET_TO_OBJ(*uParam0), iParam8);
		if (bParam10)
		{
			NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_OBJ(*uParam0), 1);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), 0, 0);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
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

int func_252(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_253()
{
	switch (func_16())
	{
		case 5:
			return 1165008631;
		
		case 7:
		case 0:
			if (Local_701.f_957 == 0)
			{
				return 1165008631;
			}
			else if (Local_701.f_957 == 1)
			{
				return -1322183878;
			}
			break;
		
		case 2:
			return -1515940233;
			break;
		
		case 9:
			return 1666748342;
			break;
	}
	return 0;
}

int func_254()
{
	switch (func_16())
	{
		case 7:
		case 0:
			if (Local_701.f_957 == 0 || Local_701.f_957 == 1)
			{
				return 1;
			}
			break;
		
		case 9:
		case 2:
		case 5:
			return 1;
			break;
	}
	return 0;
}

int func_255()
{
	if (!func_316())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < func_315())
	{
		if (func_256(iVar0))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < func_315())
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_830[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_256(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_830[iParam0]))
	{
		if (func_252(func_314()))
		{
			Var0 = { func_313() };
			Var3 = { func_312() };
			if (NETWORK::CAN_REGISTER_MISSION_PEDS(func_257(190, -1, -1, -1, -1, -1) + 1))
			{
				if (func_251(&(Local_701.f_830[iParam0]), func_314(), Var0, 1, 1, 0, 1, 0, 0, 0))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_ENT(Local_701.f_830[iParam0]), Var0, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_701.f_830[iParam0]), Var3, 2, 1);
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			return func_311(iParam1);
		
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
			return func_309(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_303(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_291(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 233:
			return func_284(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
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
			return func_275(iParam1, iParam2);
		
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
			return func_272(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_271(iParam1);
		
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
			return func_266(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 158:
			return func_261(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 181:
			return func_258(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_258(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_260(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_259(iParam0, iParam2));
	return iVar0;
}

int func_259(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_260(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_261(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_265(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_262(iParam0, iParam2));
	return iVar0;
}

int func_262(int iParam0, int iParam1)
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
			if (func_264(iParam1, 1))
			{
				Var0 = { func_263(iParam1) };
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

Vector3 func_263(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_301;
}

bool func_264(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_80(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_59();
}

int func_265(int iParam0, int iParam1, var uParam2)
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

int func_266(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_270(iParam0, iParam1, iParam3);
	if (!func_269(iParam0))
	{
		iVar0 = (iVar0 + func_267(iParam0, iParam2));
	}
	return iVar0;
}

int func_267(int iParam0, int iParam1)
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
			if (func_268(iParam1) + 1 == 1)
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

int func_268(int iParam0)
{
	if (func_103(iParam0) == func_59())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

int func_269(int iParam0)
{
	return 0;
}

int func_270(int iParam0, int iParam1, int iParam2)
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

int func_271(int iParam0)
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

int func_272(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_274(iParam0, iParam1);
	if (func_273(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_273(int iParam0)
{
	return 1;
}

int func_274(int iParam0, int iParam1)
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

int func_275(int iParam0, int iParam1)
{
	iVar0 = func_283(iParam0, iParam1);
	if (!func_282(iParam0))
	{
		iVar0 = (iVar0 + func_276(iParam0, func_280() + 1));
	}
	if (iParam0 == 14 || ((((func_282(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_276(iParam0, func_280() + 1));
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

int func_276(int iParam0, int iParam1)
{
	if (func_279(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_278(iParam0, iParam1);
			iVar2 = func_277(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_282(iParam0))
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

int func_277(int iParam0)
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

int func_278(int iParam0, int iParam1)
{
	if (func_282(iParam0))
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

int func_279(int iParam0)
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

int func_280()
{
	if (func_281() == func_59())
	{
		return 0;
	}
	return func_268(func_281());
}

int func_281()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

int func_282(int iParam0)
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

int func_283(int iParam0, int iParam1)
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

int func_284(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_290(iParam0, iParam1, iParam2, iParam4);
	if (!func_289(iParam0))
	{
		if (iParam3 != func_59())
		{
			iVar0 = (iVar0 + func_286(iParam0, func_268(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_285(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_285(int iParam0)
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

int func_286(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
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
			if (func_289(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_288(iParam0))
	{
		iVar0 = func_288(iParam0);
	}
	else if (iVar0 < func_287(iParam0))
	{
		iVar0 = func_287(iParam0);
	}
	return iVar0;
}

int func_287(int iParam0)
{
	return 1;
}

int func_288(int iParam0)
{
	return 4;
}

int func_289(int iParam0)
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

int func_290(int iParam0, int iParam1, var uParam2, var uParam3)
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

int func_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_302(iParam0, iParam1, iParam2, iParam4);
	if (!func_301(iParam0))
	{
		if (iParam3 != func_59())
		{
			iVar0 = (iVar0 + func_293(iParam0, func_268(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_292(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_293(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_300(iParam0))
	{
		iVar1 = func_299(iParam3);
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
	else if (func_298(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_297(iParam2))
		{
			iVar0 = func_297(iParam2);
		}
	}
	if (iVar0 > func_295(iParam0))
	{
		iVar0 = func_295(iParam0);
	}
	else if (iVar0 < func_294(iParam0))
	{
		iVar0 = func_294(iParam0);
	}
	return iVar0;
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_295(int iParam0)
{
	if (!func_300(iParam0))
	{
		if (func_301(iParam0))
		{
			if (func_296(iParam0))
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

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_297(int iParam0)
{
	if (iParam0 == func_59() || Global_1590535[iParam0].f_274.f_264 == 0)
	{
		return 50;
	}
	return (50 - Global_1590535[iParam0].f_274.f_264.f_3);
}

int func_298(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_299(int iParam0)
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

int func_300(int iParam0)
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

int func_301(int iParam0)
{
	if (func_300(iParam0) || func_298(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_302(int iParam0, int iParam1, int iParam2, var uParam3)
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

int func_303(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_308(iParam0, iParam1, iParam2, iParam3);
	if (!func_307(iParam0))
	{
		iVar0 = (iVar0 + func_305(iParam0, func_280() + 1, -1, iParam2));
	}
	if (func_304(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_304(int iParam0)
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

int func_305(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_306(iParam0))
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
	else if (func_307(iParam0))
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

int func_306(int iParam0)
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

int func_307(int iParam0)
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

int func_308(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_309(int iParam0, int iParam1, var uParam2)
{
	iVar0 = func_310(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_310(int iParam0, int iParam1)
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

int func_311(int iParam0)
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

Vector3 func_312()
{
	switch (func_16())
	{
		case 11:
			if (func_240())
			{
				switch (Local_701.f_679)
				{
					case 0:
						return 0f, 0f, -74.2005f;
					
					case 1:
						return 0f, 0f, 35.4f;
					
					case 2:
						return 0f, 0f, -124.4004f;
					
					case 3:
						return 0f, 0f, 0f;
					
					case 4:
						return 0f, 0f, -120.0002f;
					
					case 5:
						return -4.023f, -0.652f, 62.577f;
					
					case 6:
						return -1.792f, -5.5507f, 178.5623f;
					
					case 7:
						return 0f, 0f, 160.1995f;
					
					case 9:
						return 5.4894f, 3.5551f, 15.6291f;
					
					default:
				}
			}
			else
			{
				switch (Local_701.f_679)
				{
					case 1:
						return 0f, 0f, 123.1998f;
					
					case 2:
						return 0f, 0f, 83.3999f;
					
					case 4:
						return 3.7412f, 4.9362f, 80.6382f;
					
					case 5:
						return 0f, 0f, -57.6019f;
					
					case 6:
						return 0f, 0f, 143.9997f;
					
					case 7:
						return -1.2379f, 3.8753f, -50.5581f;
					
					case 8:
						return 0f, 0f, 162.9996f;
					
					case 9:
						return -3.2998f, 2.0099f, -74.1426f;
					}
				
				default:
			}
			break;
	}
	return 0f, 0f, 134.7998f;
}

Vector3 func_313()
{
	switch (func_16())
	{
		case 11:
			if (func_240())
			{
				switch (Local_701.f_679)
				{
					case 0:
						return 2569.899f, 1817.359f, 23.8469f;
					
					case 1:
						return -1612.944f, 3177.102f, 29.717f;
					
					case 2:
						return 2833.95f, 1629.805f, 24.0762f;
					
					case 3:
						return 3776.898f, 4493.028f, 6.0035f;
					
					case 4:
						return 1529.463f, 816.2299f, 76.9559f;
					
					case 5:
						return -2998.659f, 3454.522f, 8.975f;
					
					case 6:
						return -1632.468f, 4725.352f, 52.4276f;
					
					case 7:
						return -1916.561f, 2028.237f, 140.2642f;
					
					case 9:
						return 3340.603f, 5495.48f, 19.5593f;
					
					default:
				}
			}
			else
			{
				switch (Local_701.f_679)
				{
					case 1:
						return -1549.411f, 857.0125f, 181.3712f;
					
					case 2:
						return -3149.034f, 1174.239f, 20.0117f;
					
					case 4:
						return -1541.226f, 1384.407f, 124.7998f;
					
					case 5:
						return 1332.413f, 1259.214f, 105.2253f;
					
					case 6:
						return -511.8456f, 1182.682f, 324.4567f;
					
					case 7:
						return 2745.496f, -695.4677f, 10.1195f;
					
					case 8:
						return 752.2509f, 1191.383f, 326.1712f;
					
					case 9:
						return 1526.12f, 1598.589f, 110.9273f;
					}
				
				default:
			}
			break;
	}
	return -320.6169f, 6306.344f, 31.4942f;
}

int func_314()
{
	switch (func_16())
	{
		case 11:
			return -293536422;
		
		default:
	}
	return -1951226014;
}

int func_315()
{
	switch (func_16())
	{
		case 11:
			if (func_240())
			{
				if (Local_701.f_679 == 9)
				{
					return 0;
				}
			}
			else if (Local_701.f_679 == 0 || Local_701.f_679 == 3)
			{
				return 0;
			}
			return 1;
		
		default:
	}
	return 0;
}

int func_316()
{
	switch (func_16())
	{
		case 11:
			if (func_240())
			{
				if (Local_701.f_679 == 9)
				{
					return 0;
				}
			}
			else if (Local_701.f_679 == 0 || Local_701.f_679 == 3)
			{
				return 0;
			}
			return 1;
		
		default:
	}
	return 0;
}

int func_317()
{
	if (!func_342())
	{
		return 1;
	}
	if (!func_242())
	{
		return 1;
	}
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < func_241())
	{
		if (!func_318(iVar0, 1))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_318(int iParam0, bool bParam1)
{
	if (func_252(func_239(iParam0)))
	{
		if (!func_341(iParam0))
		{
			if (func_340(iParam0))
			{
				uVar2 = func_339(iParam0);
				uVar3 = func_338(iParam0);
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar2))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uVar2) || (!NETWORK::_0xA1607996431332DF(uVar2) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
					{
						if (func_337(uVar2))
						{
							if (func_336(&(Local_701.f_707[iParam0]), uVar2, 26, func_239(iParam0), uVar3, 1, 1, 1))
							{
								iVar1 = NETWORK::NET_TO_PED(Local_701.f_707[iParam0]);
								GAMEPLAY::CLEAR_BIT(&(Local_701.f_885), iParam0);
								Local_701.f_707[iParam0].f_1 = { 0f, 0f, 0f };
								Local_701.f_707[iParam0].f_4 = 0f;
								func_335(&(Local_701.f_707[iParam0].f_6));
								Local_701.f_980++;
								if (func_27())
								{
									sVar0 = func_334(iParam0);
									if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar0))
									{
										AI::TASK_START_SCENARIO_IN_PLACE(iVar1, sVar0, 0, 0);
									}
									func_333(iVar1);
								}
								else if (func_15())
								{
									func_332(iVar1, 75);
									func_331(iParam0, 9);
								}
								if (func_17())
								{
									func_330(iVar1, 75);
									PED::SET_PED_CONFIG_FLAG(iVar1, 398, 1);
									unk_0x820E9892A77E97CD(iVar1, 1);
									PED::SET_PED_CAN_BE_TARGETTED(iVar1, 0);
									AUDIO::SET_AMBIENT_VOICE_NAME(iVar1, "A_M_Y_Hippy_01_white_FULL_01");
									unk_0x0F62619393661D6E(iVar1, 1, 0);
								}
							}
						}
					}
				}
			}
			else if (bParam1)
			{
				Var4 = { func_329(iParam0) };
				if (func_327(&(Local_701.f_707[iParam0]), 26, func_239(iParam0), Var4, func_328(iParam0), 1, 1, 1))
				{
					iVar1 = NETWORK::NET_TO_PED(Local_701.f_707[iParam0]);
					GAMEPLAY::CLEAR_BIT(&(Local_701.f_885), iParam0);
					Local_701.f_707[iParam0].f_1 = { 0f, 0f, 0f };
					Local_701.f_707[iParam0].f_4 = 0f;
					func_335(&(Local_701.f_707[iParam0].f_6));
					if (func_23() || func_17())
					{
						func_330(iVar1, 75);
						unk_0x0F62619393661D6E(iVar1, 1, 0);
					}
					else
					{
						func_323(iVar1, 75);
					}
					if (func_27())
					{
						sVar0 = func_334(iParam0);
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar0))
						{
							AI::TASK_START_SCENARIO_IN_PLACE(iVar1, sVar0, 0, 0);
						}
						func_333(iVar1);
						PED::SET_PED_COMBAT_MOVEMENT(iVar1, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iVar1, Var4, 100f, 0, 0);
					}
					if (func_23())
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, 0);
						func_319(iVar1, func_321(0), 0);
					}
					Local_701.f_980++;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_319(int iParam0, char* sParam1, int iParam2)
{
	if (!func_320(iParam0) || iParam2)
	{
		AI::TASK_START_SCENARIO_IN_PLACE(iParam0, uParam1, 0, 0);
	}
}

int func_320(int iParam0)
{
	if (AI::GET_SCRIPT_TASK_STATUS(uParam0, 993674639) == 1 || AI::GET_SCRIPT_TASK_STATUS(iParam0, 993674639) == 0)
	{
		return 1;
	}
	return 0;
}

char* func_321(bool bParam0)
{
	if (bParam0)
	{
		sVar0 = "WORLD_HUMAN_CHEERING";
	}
	else
	{
		Local_138.f_479 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 10000);
		if (func_322(Local_138.f_479, 8000, 10000))
		{
			sVar0 = "WORLD_HUMAN_SMOKING";
		}
		else if (func_322(Local_138.f_479, 6000, 8000))
		{
			sVar0 = "WORLD_HUMAN_SMOKING_POT";
		}
		else if (func_322(Local_138.f_479, 4000, 6000))
		{
			sVar0 = "WORLD_HUMAN_DRINKING";
		}
		else if (func_322(Local_138.f_479, 2000, 4000))
		{
			sVar0 = "WORLD_HUMAN_STAND_MOBILE";
		}
		else
		{
			sVar0 = "WORLD_HUMAN_TOURIST_MAP";
		}
	}
	return sVar0;
}

int func_322(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 >= iParam1 && iParam0 < iParam2)
	{
		return 1;
	}
	return 0;
}

void func_323(int iParam0, int iParam1)
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, 1);
	uVar0 = func_326();
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, uVar0, 9999999, 0, 1);
	iVar1 = 3;
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, iVar1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 42, 0);
	PED::_0x52D59AB61DDC05DD(iParam0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 43, 1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, 1);
	PED::SET_PED_ACCURACY(iParam0, iParam1);
	func_324(iParam0);
	PED::SET_PED_KEEP_TASK(iParam0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1575003);
}

void func_324(int iParam0)
{
	fVar0 = 1f;
	if (func_325() == 1)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 24, 0);
		PED::SET_PED_COMBAT_ABILITY(iParam0, 0);
		PED::SET_PED_SHOOT_RATE(iParam0, Global_262145.f_18029);
		PED::SET_PED_ACCURACY(iParam0, Global_262145.f_18023);
		fVar0 = Global_262145.f_18026;
	}
	else if (func_325() == 2)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 24, 0);
		PED::SET_PED_SHOOT_RATE(iParam0, Global_262145.f_18030);
		PED::SET_PED_ACCURACY(iParam0, Global_262145.f_18024);
		fVar0 = Global_262145.f_18027;
	}
	else if (func_325() == 3)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 24, 0);
		PED::SET_PED_SHOOT_RATE(iParam0, Global_262145.f_18031);
		PED::SET_PED_ACCURACY(iParam0, Global_262145.f_18025);
		fVar0 = Global_262145.f_18028;
	}
	iVar1 = SYSTEM::ROUND((100f + (100f * fVar0)));
	if (ENTITY::GET_ENTITY_HEALTH(iParam0) > iVar1)
	{
		ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, iVar1);
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar1, 0);
	}
}

int func_325()
{
	return Local_701.f_16;
}

int func_326()
{
	return 453432689;
}

int func_327(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_REGISTER(iVar0, iParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

float func_328(int iParam0)
{
	switch (func_16())
	{
		case 4:
			if (func_240())
			{
				switch (iParam0)
				{
					case 0:
						return 351.3999f;
					
					case 1:
						return 237.7996f;
					
					case 2:
						return 297.5995f;
					
					case 3:
						return 160.1991f;
					
					case 4:
						return 0f;
					
					case 5:
						return 133.1999f;
					
					case 6:
						return 183.9992f;
					
					case 7:
						return 178.7996f;
					
					case 8:
						return 342.7993f;
					
					case 9:
						return 236.1996f;
					
					case 10:
						return 151.7995f;
					
					case 11:
						return 327.7988f;
					
					case 12:
						return 179.3996f;
					
					case 13:
						return 37.2f;
					
					case 14:
						return 61.5995f;
					
					case 15:
						return 288.3993f;
					
					case 16:
						return 47.3989f;
					
					case 17:
						return 301.3981f;
					
					case 18:
						return 7.5978f;
					
					case 19:
						return 257.1972f;
					
					default:
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return 142.5997f;
					
					case 1:
						return 273.9993f;
					
					case 2:
						return 90.1998f;
					
					case 3:
						return 153.1995f;
					
					case 4:
						return 219.9995f;
					
					case 5:
						return 206.7996f;
					
					case 6:
						return 151.7992f;
					
					case 7:
						return 310.7996f;
					
					case 8:
						return 291.1991f;
					
					case 9:
						return 354.3999f;
					
					case 10:
						return 0f;
					
					case 11:
						return 46.3999f;
					
					case 12:
						return 295.9995f;
					
					case 13:
						return 200.1998f;
					
					case 14:
						return 245.3996f;
					
					case 15:
						return 37.7992f;
					
					case 16:
						return 127.1989f;
					
					case 17:
						return 203.1994f;
					
					case 18:
						return 250.3991f;
					
					case 19:
						return 333.9992f;
					}
				
				default:
			}
			break;
		
		case 6:
			if (func_240())
			{
				switch (Local_701.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 284.1993f;
							
							case 1:
								return 258.1984f;
							
							case 2:
								return 258.1984f;
							
							case 3:
								return 10.5978f;
							
							case 4:
								return 135.9974f;
							
							case 5:
								return 140.3968f;
							
							case 6:
								return 242.7967f;
							
							case 7:
								return 0.1999f;
							
							case 8:
								return 215.3995f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 50.5989f;
							
							case 1:
								return 46.2f;
							
							case 2:
								return 46.2f;
							
							case 3:
								return 136.5992f;
							
							case 4:
								return 148.9982f;
							
							case 5:
								return 280.3973f;
							
							case 6:
								return 210.9966f;
							
							case 7:
								return 231.7995f;
							
							case 8:
								return 225.5995f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 143.7997f;
							
							case 1:
								return 63.9969f;
							
							case 2:
								return 164.3986f;
							
							case 3:
								return 89.5979f;
							
							case 4:
								return 254.3969f;
							
							case 5:
								return 0f;
							
							case 6:
								return 0f;
							
							case 7:
								return 194.9993f;
							
							case 8:
								return 57.199f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 151.7966f;
							
							case 1:
								return 170.7957f;
							
							case 2:
								return 115.5955f;
							
							case 3:
								return 301.3933f;
							
							case 4:
								return 195.9928f;
							
							case 5:
								return 309.1923f;
							
							case 6:
								return 236.7919f;
							
							case 7:
								return 127.391f;
							
							case 8:
								return 72.1909f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return 341.5992f;
							
							case 1:
								return 54.1994f;
							
							case 2:
								return 236.7991f;
							
							case 3:
								return 57.7988f;
							
							case 4:
								return 177.7986f;
							
							case 5:
								return 105.1981f;
							
							case 6:
								return 343.5978f;
							
							case 7:
								return 343.5978f;
							
							case 8:
								return 343.5978f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_701.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 167.9995f;
							
							case 1:
								return 130.1985f;
							
							case 2:
								return 310.5978f;
							
							case 3:
								return 154.5973f;
							
							case 4:
								return 31.397f;
							
							case 5:
								return 217.9965f;
							
							case 6:
								return 352.5964f;
							
							case 7:
								return 352.5964f;
							
							case 8:
								return 352.5964f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 316.5994f;
							
							case 1:
								return 69.7991f;
							
							case 2:
								return 69.7991f;
							
							case 3:
								return 76.1979f;
							
							case 4:
								return 272.1978f;
							
							case 5:
								return 190.9975f;
							
							case 6:
								return 186.7976f;
							
							case 7:
								return 275.997f;
							
							case 8:
								return 235.9969f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 278.9996f;
							
							case 1:
								return 237.3995f;
							
							case 2:
								return 237.3995f;
							
							case 3:
								return 323.3992f;
							
							case 4:
								return 285.399f;
							
							case 5:
								return 215.7987f;
							
							case 6:
								return 306.3984f;
							
							case 7:
								return 336.9982f;
							
							case 8:
								return 78.9976f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 126.9996f;
							
							case 1:
								return 303.3995f;
							
							case 2:
								return 303.3995f;
							
							case 3:
								return 54.5988f;
							
							case 4:
								return 227.7984f;
							
							case 5:
								return 157.5983f;
							
							case 6:
								return 137.7982f;
							
							case 7:
								return 77.998f;
							
							case 8:
								return 239.9978f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return 154.1996f;
							
							case 1:
								return 55.3991f;
							
							case 2:
								return 55.3991f;
							
							case 3:
								return 343.3988f;
							
							case 4:
								return 166.3979f;
							
							case 5:
								return 227.3975f;
							
							case 6:
								return 66.9971f;
							
							case 7:
								return 0f;
							
							case 8:
								return 0f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f;
}

Vector3 func_329(int iParam0)
{
	switch (func_16())
	{
		case 4:
			if (func_240())
			{
				switch (iParam0)
				{
					case 0:
						return 2854.207f, 4557.837f, 46.1526f;
					
					case 1:
						return 3313.405f, 5175.109f, 18.6105f;
					
					case 2:
						return 2705.169f, 4134.485f, 42.9269f;
					
					case 3:
						return 2055.265f, 3169.848f, 44.1689f;
					
					case 4:
						return 863.803f, 3675.6f, 31.7954f;
					
					case 5:
						return 886.2111f, 2853.005f, 56.0054f;
					
					case 6:
						return 163.784f, 3118.285f, 42.431f;
					
					case 7:
						return 1745.93f, 6415.255f, 34.0135f;
					
					case 8:
						return 749.3223f, 4184.208f, 40.0928f;
					
					case 9:
						return 763.2497f, 6460.267f, 30.6682f;
					
					case 10:
						return -742.2768f, 5553.111f, 32.56f;
					
					case 11:
						return -1586.766f, 5152.244f, 18.6596f;
					
					case 12:
						return -134.4378f, 4622.696f, 124.729f;
					
					case 13:
						return 165.1716f, 2229.792f, 89.7487f;
					
					case 14:
						return 1607.245f, 6630.727f, 14.3514f;
					
					case 15:
						return -208.5306f, 3656.938f, 50.7525f;
					
					case 16:
						return 1627.282f, 3517.429f, 36.0498f;
					
					case 17:
						return 1261.062f, 1920.483f, 77.5035f;
					
					case 18:
						return -776.8787f, 5395.571f, 32.8563f;
					
					case 19:
						return 2492.86f, 2602.992f, 41.8819f;
					
					default:
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return -883.7501f, 267.4142f, 74.0781f;
					
					case 1:
						return -401.2874f, -130.6327f, 37.5323f;
					
					case 2:
						return -835.4493f, -1054.33f, 9.9708f;
					
					case 3:
						return -1161.08f, -322.3042f, 36.6192f;
					
					case 4:
						return -163.9208f, -1456.081f, 30.6095f;
					
					case 5:
						return 570.5107f, 122.0472f, 97.0415f;
					
					case 6:
						return 891.511f, -2206.342f, 29.5095f;
					
					case 7:
						return -3052.881f, 104.9589f, 11.3463f;
					
					case 8:
						return 429.0299f, -1966.275f, 22.289f;
					
					case 9:
						return 1285.692f, -1602.658f, 53.83f;
					
					case 10:
						return -1540.091f, -949.7162f, 10.5661f;
					
					case 11:
						return -2016.265f, 559.5696f, 107.3068f;
					
					case 12:
						return 258.2718f, 894.1854f, 208.1772f;
					
					case 13:
						return -1040.28f, -1588.116f, 4.0416f;
					
					case 14:
						return -1658.251f, 242.2557f, 61.391f;
					
					case 15:
						return -1952.557f, -279.8821f, 40.9733f;
					
					case 16:
						return 1694.616f, -1602.158f, 111.473f;
					
					case 17:
						return -430.3886f, 1205.212f, 324.7585f;
					
					case 18:
						return 1662.317f, -69.9203f, 173.1693f;
					
					case 19:
						return 1428.408f, -2610.024f, 47.2267f;
					}
				
				default:
			}
			break;
		
		case 6:
			if (func_240())
			{
				switch (Local_701.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 308.2296f, 2892.979f, 42.5482f;
							
							case 1:
								return 318.1932f, 2879.93f, 48.5734f;
							
							case 2:
								return 291.4029f, 2895.131f, 42.6065f;
							
							case 3:
								return 316.6138f, 2856.345f, 42.6214f;
							
							case 4:
								return 312.3143f, 2896.062f, 45.4681f;
							
							case 5:
								return 290.6992f, 2873.884f, 42.6424f;
							
							case 6:
								return 305.9541f, 2863.39f, 43.3918f;
							
							case 7:
								return 325.973f, 2871.898f, 43.8916f;
							
							case 8:
								return 274.017f, 2878.485f, 44.0444f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 2348.911f, 3033.47f, 47.1738f;
							
							case 1:
								return 2388.466f, 3038.915f, 48.6456f;
							
							case 2:
								return 2366.008f, 3078.644f, 48.648f;
							
							case 3:
								return 2335.92f, 3049.692f, 47.1517f;
							
							case 4:
								return 2354.389f, 3054.381f, 47.1526f;
							
							case 5:
								return 2335.383f, 3033.607f, 47.1513f;
							
							case 6:
								return 2371.499f, 3039.928f, 47.1524f;
							
							case 7:
								return 2373.612f, 3051.792f, 47.1526f;
							
							case 8:
								return 2345.907f, 3068.643f, 47.1521f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 281.6046f, 6782.363f, 14.6965f;
							
							case 1:
								return 255.1581f, 6841.423f, 16.9099f;
							
							case 2:
								return 243.2855f, 6761.583f, 15.6422f;
							
							case 3:
								return 313.0555f, 6788.746f, 16.1106f;
							
							case 4:
								return 276.1815f, 6815.786f, 14.7039f;
							
							case 5:
								return 304.0913f, 6740.887f, 14.6805f;
							
							case 6:
								return 331.0639f, 6779.333f, 16.3542f;
							
							case 7:
								return 250.6801f, 6767.147f, 15.0135f;
							
							case 8:
								return 275.9807f, 6789.46f, 14.6957f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 2699.279f, 4314.33f, 44.852f;
							
							case 1:
								return 2693.62f, 4362.461f, 46.7702f;
							
							case 2:
								return 2717.853f, 4295.437f, 47.7755f;
							
							case 3:
								return 2701.42f, 4327.995f, 44.852f;
							
							case 4:
								return 2693.926f, 4324.975f, 44.8519f;
							
							case 5:
								return 2691.939f, 4290.637f, 45.0544f;
							
							case 6:
								return 2708.417f, 4308.541f, 45.3998f;
							
							case 7:
								return 2680.529f, 4311.71f, 44.8519f;
							
							case 8:
								return 2679.51f, 4312.198f, 44.852f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return 1695.376f, 6430.466f, 31.6781f;
							
							case 1:
								return 1692.519f, 6435.478f, 31.7642f;
							
							case 2:
								return 1682.131f, 6425.435f, 31.1307f;
							
							case 3:
								return 1702.405f, 6426.481f, 31.6374f;
							
							case 4:
								return 1710.12f, 6423.539f, 31.7638f;
							
							case 5:
								return 1692.51f, 6404.768f, 30.801f;
							
							case 6:
								return 1680.12f, 6436.734f, 30.9586f;
							
							case 7:
								return 1650.869f, 6419.119f, 29.1215f;
							
							case 8:
								return 1713.974f, 6424.335f, 33.263f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_701.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 1125.797f, -645.2601f, 55.7337f;
							
							case 1:
								return 1171.279f, -646.054f, 62.6715f;
							
							case 2:
								return 1165.556f, -618.1664f, 63.871f;
							
							case 3:
								return 1136.13f, -661.4698f, 56.0826f;
							
							case 4:
								return 1136.854f, -632.9972f, 56.3743f;
							
							case 5:
								return 1123.248f, -661.5654f, 55.7665f;
							
							case 6:
								return 1118.498f, -632.6472f, 55.8085f;
							
							case 7:
								return 1146.048f, -635.6122f, 55.7223f;
							
							case 8:
								return 1146.932f, -652.1199f, 55.7868f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return -813.8159f, 47.817f, 47.5815f;
							
							case 1:
								return -792.0341f, 36.543f, 48.1447f;
							
							case 2:
								return -812.02f, 16.9962f, 44.2169f;
							
							case 3:
								return -805.6351f, 63.7177f, 49.7905f;
							
							case 4:
								return -809.7114f, 36.6121f, 46.8549f;
							
							case 5:
								return -834.7526f, 43.4699f, 46.8769f;
							
							case 6:
								return -829.7305f, 68.9156f, 51.3815f;
							
							case 7:
								return -829.5859f, 56.8535f, 49.6704f;
							
							case 8:
								return -828.4629f, 57.7785f, 49.9247f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return -95.5806f, -418.2466f, 35.3348f;
							
							case 1:
								return -121.0947f, -444.8833f, 34.9121f;
							
							case 2:
								return -94.0296f, -391.0595f, 35.981f;
							
							case 3:
								return -69.851f, -426.6504f, 36.7117f;
							
							case 4:
								return -122.0492f, -444.4511f, 34.9121f;
							
							case 5:
								return -43.4647f, -438.7908f, 40.7075f;
							
							case 6:
								return -156.7404f, -423.1685f, 34.079f;
							
							case 7:
								return -132.7098f, -412.4948f, 33.2462f;
							
							case 8:
								return -94.2203f, -447.643f, 34.9121f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return -1313.764f, -765.1419f, 19.2445f;
							
							case 1:
								return -1333.679f, -742.8681f, 23.1737f;
							
							case 2:
								return -1300.986f, -778.6068f, 18.4695f;
							
							case 3:
								return -1333.064f, -787.5348f, 18.8938f;
							
							case 4:
								return -1332.287f, -786.1912f, 18.9137f;
							
							case 5:
								return -1309.695f, -795.2505f, 16.5935f;
							
							case 6:
								return -1340.3f, -759.342f, 19.3298f;
							
							case 7:
								return -1282.254f, -805.6615f, 17.68f;
							
							case 8:
								return -1343.584f, -754.9631f, 22.8771f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return -425.7827f, 1122.551f, 324.8541f;
							
							case 1:
								return -420.6537f, 1148.094f, 324.8583f;
							
							case 2:
								return -421.566f, 1148.923f, 324.8605f;
							
							case 3:
								return -408.7002f, 1130.488f, 324.9044f;
							
							case 4:
								return -441.4777f, 1147.047f, 324.8543f;
							
							case 5:
								return -447.1815f, 1130.182f, 324.8559f;
							
							case 6:
								return -426.4003f, 1110.248f, 326.6821f;
							
							case 7:
								return -385.3321f, 1172.665f, 325.897f;
							
							case 8:
								return -423.4293f, 1180.318f, 325.9146f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_330(int iParam0, int iParam1)
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, 1);
	PED::SET_PED_KEEP_TASK(iParam0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1575000);
}

void func_331(int iParam0, int iParam1)
{
	Local_701.f_707[iParam0].f_5 = iParam1;
}

void func_332(int iParam0, int iParam1)
{
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, 1);
	uVar0 = func_326();
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, uVar0, 9999999, 1, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 42, 0);
	PED::_0x52D59AB61DDC05DD(iParam0, 1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, 1);
	PED::SET_PED_ACCURACY(iParam0, iParam1);
	func_324(iParam0);
	PED::SET_PED_KEEP_TASK(iParam0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1575003);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, 1);
	if (func_15() || func_18())
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam0, 1);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 53, 1);
	if (func_15())
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 0);
	}
}

void func_333(int iParam0)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 272, 1);
	PED::SET_PED_AS_COP(iParam0, 0);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 324, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 249, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 365, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 396, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1574683[1][1][1][1][1]);
}

char* func_334(int iParam0)
{
	switch (func_16())
	{
		case 6:
			if (func_240())
			{
				switch (Local_701.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "";
							
							case 2:
								return "";
							
							case 3:
								return "WORLD_HUMAN_STAND_MOBILE";
							
							case 4:
								return "WORLD_HUMAN_PICNIC";
							
							case 5:
								return "WORLD_HUMAN_BINOCULARS";
							
							case 6:
								return "WORLD_HUMAN_SMOKING";
							
							case 7:
								return "WORLD_HUMAN_BUM_STANDING";
							
							case 8:
								return "WORLD_HUMAN_JOG_STANDING";
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "";
							
							case 2:
								return "";
							
							case 3:
								return "WORLD_HUMAN_PICNIC";
							
							case 4:
								return "WORLD_HUMAN_SMOKING";
							
							case 5:
								return "WORLD_HUMAN_STAND_MOBILE";
							
							case 6:
								return "WORLD_HUMAN_YOGA";
							
							case 7:
								return "WORLD_HUMAN_SUNBATHE";
							
							case 8:
								return "WORLD_HUMAN_SUNBATHE";
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							
							case 2:
								return "WORLD_HUMAN_SMOKING";
							
							case 3:
								return "WORLD_HUMAN_PICNIC";
							
							case 4:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							
							case 5:
								return "";
							
							case 6:
								return "";
							
							case 7:
								return "WORLD_HUMAN_BUM_FREEWAY";
							
							case 8:
								return "WORLD_HUMAN_JOG_STANDING";
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "WORLD_HUMAN_SMOKING";
							
							case 2:
								return "WORLD_HUMAN_STAND_MOBILE";
							
							case 3:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							
							case 4:
								return "WORLD_HUMAN_DRINKING";
							
							case 5:
								return "WORLD_HUMAN_STAND_MOBILE";
							
							case 6:
								return "WORLD_HUMAN_STAND_MOBILE";
							
							case 7:
								return "";
							
							case 8:
								return "";
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							
							case 2:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							
							case 3:
								return "WORLD_HUMAN_PICNIC";
							
							case 4:
								return "WORLD_HUMAN_JOG_STANDING";
							
							case 5:
								return "WORLD_HUMAN_BINOCULARS";
							
							case 6:
								return "WORLD_HUMAN_SMOKING";
							
							case 7:
								return "";
							
							case 8:
								return "";
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_701.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "WORLD_HUMAN_CLIPBOARD";
							
							case 2:
								return "WORLD_HUMAN_WINDOW_SHOP_BROWSE	";
							
							case 3:
								return "WORLD_HUMAN_CLIPBOARD";
							
							case 4:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							
							case 5:
								return "WORLD_HUMAN_SMOKING";
							
							case 6:
								return "WORLD_HUMAN_STAND_MOBILE";
							
							case 7:
								return "";
							
							case 8:
								return "";
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "";
							
							case 2:
								return "";
							
							case 3:
								return "WORLD_HUMAN_CLIPBOARD";
							
							case 4:
								return "WORLD_HUMAN_WELDING";
							
							case 5:
								return "WORLD_HUMAN_CLIPBOARD";
							
							case 6:
								return "WORLD_HUMAN_WELDING";
							
							case 7:
								return "WORLD_HUMAN_SMOKING";
							
							case 8:
								return "WORLD_HUMAN_SMOKING";
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "";
							
							case 2:
								return "";
							
							case 3:
								return "WORLD_HUMAN_BINOCULARS";
							
							case 4:
								return "WORLD_HUMAN_JOG_STANDING";
							
							case 5:
								return "WORLD_HUMAN_STAND_MOBILE";
							
							case 6:
								return "WORLD_HUMAN_PICNIC";
							
							case 7:
								return "WORLD_HUMAN_JOG_STANDING";
							
							case 8:
								return "WORLD_HUMAN_STUPOR";
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "";
							
							case 2:
								return "";
							
							case 3:
								return "WORLD_HUMAN_SMOKING";
							
							case 4:
								return "WORLD_HUMAN_DRINKING";
							
							case 5:
								return "WORLD_HUMAN_PICNIC";
							
							case 6:
								return "WORLD_HUMAN_WINDOW_SHOP_BROWSE";
							
							case 7:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							
							case 8:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "WORLD_HUMAN_SMOKING";
							
							case 2:
								return "WORLD_HUMAN_HAMMERING";
							
							case 3:
								return "WORLD_HUMAN_WINDOW_SHOP_BROWSE";
							
							case 4:
								return "WORLD_HUMAN_DRINKING";
							
							case 5:
								return "WORLD_HUMAN_BUM_FREEWAY";
							
							case 6:
								return "PROP_HUMAN_BUM_BIN";
							
							case 7:
								return "";
							
							case 8:
								return "";
							
							default:
						}
						break;
					}
			}
			break;
	}
	return "WORLD_HUMAN_GUARD_STAND";
}

void func_335(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_336(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
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

int func_337(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_338(int iParam0)
{
	switch (func_16())
	{
		case 12:
		case 0:
			switch (iParam0)
			{
				case 0:
				case 2:
					return -1;
				
				case 1:
				case 3:
					return 0;
				
				default:
			}
			break;
		
		case 7:
			return 0;
		
		case 6:
			if (func_240())
			{
				switch (Local_701.f_679)
				{
					case 1:
					case 2:
					case 3:
						if (iParam0 == 1)
						{
							return -1;
						}
						return 0;
					
					case 0:
					case 4:
						if (iParam0 == 7)
						{
							return -1;
						}
						return 0;
					
					default:
				}
			}
			else
			{
				switch (Local_701.f_679)
				{
					case 0:
					case 1:
						if (iParam0 == 1)
						{
							return -1;
						}
						return 0;
					
					case 2:
						if (iParam0 == 5)
						{
							return -1;
						}
						return 0;
					
					case 3:
					case 4:
						if (iParam0 == 7)
						{
							return -1;
						}
						return 0;
					}
				
				default:
			}
			break;
	}
	return -1;
}

int func_339(int iParam0)
{
	switch (func_16())
	{
		case 12:
		case 0:
			switch (iParam0)
			{
				case 0:
				case 1:
					return Local_701.f_837[0];
				
				case 2:
				case 3:
					return Local_701.f_837[1];
				
				default:
			}
			break;
		
		case 7:
			return Local_701.f_59[0];
		
		case 6:
			return Local_701.f_837[0];
	}
	return -1;
}

int func_340(int iParam0)
{
	switch (func_16())
	{
		case 7:
		case 12:
		case 0:
			return 1;
		
		case 6:
			if (func_240())
			{
				switch (Local_701.f_679)
				{
					case 1:
					case 2:
					case 3:
						if (iParam0 == 1 || iParam0 == 2)
						{
							return 1;
						}
						return 0;
					
					case 0:
					case 4:
						if (iParam0 == 7 || iParam0 == 8)
						{
							return 1;
						}
						return 0;
					
					default:
				}
			}
			else
			{
				switch (Local_701.f_679)
				{
					case 0:
					case 1:
						if (iParam0 == 1 || iParam0 == 2)
						{
							return 1;
						}
						return 0;
					
					case 2:
						if (iParam0 == 5 || iParam0 == 6)
						{
							return 1;
						}
						return 0;
					
					case 3:
					case 4:
						if (iParam0 == 7 || iParam0 == 8)
						{
							return 1;
						}
						return 0;
					}
				
				default:
			}
			break;
	}
	return 0;
}

bool func_341(int iParam0)
{
	return NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_707[iParam0]);
}

int func_342()
{
	switch (func_16())
	{
		case 6:
		case 12:
		case 4:
		case 7:
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

bool func_343()
{
	if (!func_354())
	{
		return 1;
	}
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < func_353())
	{
		if (!func_345(iVar0))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_344());
	}
	return bVar1;
}

int func_344()
{
	switch (func_16())
	{
		case 12:
			return 486987393;
		
		case 0:
			return 788045382;
		
		case 6:
			return -1973172295;
		
		default:
	}
	return 0;
}

int func_345(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_837[iParam0]))
	{
		if (func_252(func_344()))
		{
			Var0 = { func_352(iParam0) };
			fVar3 = func_351(iParam0);
			if (func_348(&(Local_701.f_837[iParam0]), func_344(), Var0, fVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				func_347(iParam0);
				func_346(NETWORK::NET_TO_VEH(Local_701.f_837[iParam0]));
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_346(int iParam0)
{
	if (!Global_262145.f_4683)
	{
		unk_0x80E3357FDEF45C21(iParam0, 0);
	}
}

void func_347(int iParam0)
{
	iVar0 = NETWORK::NET_TO_VEH(Local_701.f_837[iParam0]);
	if (!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iVar0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 0);
	}
	VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iVar0, 1);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 1, 1, 0);
	VEHICLE::_0x9737A37136F07E75(iVar0, 1);
	VEHICLE::_0xDBC631F109350B8C(iVar0, 1);
}

int func_348(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
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
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, iParam7, iParam6, iParam14);
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
			func_349(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_349(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_350(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
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

int func_350(int iParam0, struct<3> Param1, int iParam4)
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

float func_351(int iParam0)
{
	if (func_240())
	{
		switch (Local_701.f_679)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 160.7998f;
					
					case 1:
						return 301.9992f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 107.7992f;
					
					case 1:
						return 69.7991f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return 250.9996f;
					
					case 1:
						return 237.3995f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return 100.5997f;
					
					case 1:
						return 303.3995f;
					
					default:
				}
				break;
			
			case 4:
				switch (iParam0)
				{
					case 0:
						return 70.9999f;
					
					case 1:
						return 154.7995f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (Local_701.f_679)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 190.599f;
					
					case 1:
						return 190.599f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 74.1999f;
					
					case 1:
						return 300.9994f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return 342.8f;
					
					case 1:
						return 158.9997f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return 38.5987f;
					
					case 1:
						return 128.5969f;
					
					default:
				}
				break;
			
			case 4:
				switch (iParam0)
				{
					case 0:
						return 72.5998f;
					
					case 1:
						return 220.1996f;
					
					default:
				}
				break;
			}
	}
	return 0f;
}

Vector3 func_352(int iParam0)
{
	if (func_240())
	{
		switch (Local_701.f_679)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 326.3047f, 2872.003f, 42.4538f;
					
					case 1:
						return 273.864f, 2878.174f, 42.6107f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 2365.385f, 3078.505f, 47.1581f;
					
					case 1:
						return 2388.272f, 3039.541f, 47.1529f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return 243.1329f, 6760.87f, 14.3175f;
					
					case 1:
						return 254.9448f, 6840.601f, 15.7468f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return 2718.618f, 4295.328f, 46.6625f;
					
					case 1:
						return 2695.139f, 4363.16f, 45.4893f;
					
					default:
				}
				break;
			
			case 4:
				switch (iParam0)
				{
					case 0:
						return 1650.276f, 6420.025f, 27.6565f;
					
					case 1:
						return 1713.893f, 6424.411f, 31.776f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (Local_701.f_679)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 1172.109f, -646.3614f, 61.222f;
					
					case 1:
						return 1166.181f, -618.4933f, 62.4457f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return -791.1071f, 36.0586f, 47.0641f;
					
					case 1:
						return -812.9344f, 16.3316f, 43.1182f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return -157.1936f, -423.6889f, 32.8548f;
					
					case 1:
						return -43.208f, -440.1863f, 39.3939f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return -1343.545f, -755.2953f, 21.4565f;
					
					case 1:
						return -1281.971f, -804.7698f, 16.5323f;
					
					default:
				}
				break;
			
			case 4:
				switch (iParam0)
				{
					case 0:
						return -385.0421f, 1171.759f, 324.7181f;
					
					case 1:
						return -424.3064f, 1180.286f, 324.6416f;
					
					default:
				}
				break;
			}
	}
	return 1713.893f, 6424.411f, 31.776f;
}

int func_353()
{
	switch (func_16())
	{
		case 6:
			return 2;
		
		default:
	}
	return 0;
}

bool func_354()
{
	return func_27();
}

int func_355()
{
	if (!func_238())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < func_237())
	{
		if (func_356(iVar0))
		{
		}
		iVar0++;
	}
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < func_237())
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_80[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_356(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_80[iParam0]))
	{
		if (func_252(func_235(iParam0)))
		{
			Var0 = { func_406() };
			uVar3 = func_405();
			if (NETWORK::CAN_REGISTER_MISSION_PEDS(func_364(190, -1, -1, -1) + 1))
			{
				if (func_363())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_360(iParam0)))
					{
						if (func_336(&(Local_701.f_80[iParam0]), func_360(iParam0), 26, func_235(iParam0), func_236(iParam0), 1, 1, 1))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_PED(Local_701.f_80[iParam0]), 1);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_PED(Local_701.f_80[iParam0]), 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_701.f_80[iParam0]), 3, 0);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_701.f_80[iParam0]), 229, 1);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_701.f_80[iParam0]), 128, 0);
							PED::SET_PED_CAN_BE_DRAGGED_OUT(NETWORK::NET_TO_PED(Local_701.f_80[iParam0]), 0);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_701.f_80[iParam0]), 398, 1);
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_701.f_80[iParam0]), 512, 1);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_701.f_80[iParam0]), Global_1575000);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_701.f_80[iParam0]), 1);
							AUDIO::STOP_PED_SPEAKING(NETWORK::NET_TO_PED(Local_701.f_80[iParam0]), 1);
							AI::TASK_STAND_STILL(NETWORK::NET_TO_PED(Local_701.f_80[iParam0]), -1);
							Local_701.f_979++;
						}
					}
				}
				else if (func_359())
				{
					if (func_357())
					{
						Local_701.f_979++;
					}
				}
				else if (func_327(&(Local_701.f_80[iParam0]), 26, func_235(iParam0), Var0, uVar3, 1, 1, 1))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_PED(Local_701.f_80[iParam0]), 1);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_PED(Local_701.f_80[iParam0]), 0);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_701.f_80[iParam0]), 1);
					AUDIO::STOP_PED_SPEAKING(NETWORK::NET_TO_PED(Local_701.f_80[iParam0]), 1);
					Local_701.f_979++;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_357()
{
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		Var1 = { func_358(iVar0, 0, Local_701.f_110, Local_701.f_957, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_ENT(Local_701.f_80[iVar0])))
		{
			if (func_327(&(Local_701.f_80[iVar0]), 26, func_235(iVar0), Var1, uVar4, 1, 1, 1))
			{
				iVar6 = NETWORK::NET_TO_PED(Local_701.f_80[iVar0]);
				ENTITY::SET_ENTITY_INVINCIBLE(iVar6, 1);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar6, 0);
				PED::SET_PED_KEEP_TASK(iVar6, 1);
				AUDIO::STOP_PED_SPEAKING(iVar6, 1);
				PED::SET_PED_CONFIG_FLAG(iVar6, 294, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar6, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_ENT(Local_701.f_80[iVar0]), func_67(iVar0), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_13(iVar0), func_250()), 0f, -1.4f, 0.55f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				func_330(iVar6, 75);
				unk_0x0F62619393661D6E(iVar6, 1, 0);
			}
		}
		else
		{
			iVar5++;
		}
		iVar0++;
	}
	return iVar5 == func_14();
}

Vector3 func_358(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	iVar0 = uParam2;
	if (iParam4 && iParam3 == 2)
	{
		switch (iVar0)
		{
			case 7:
				return 149.3549f, 152.8602f, 104.7787f;
			
			case 10:
				return 313.4909f, -822.9637f, 28.1564f;
			
			case 8:
				return -1520.979f, -393.1905f, 40.1197f;
			
			case 9:
				return -1201.368f, -1372.765f, 3.2609f;
			
			case 6:
				return 1436.717f, -1677.033f, 63.5393f;
			
			case 17:
				return 145.4915f, -2505.529f, 5f;
			
			case 20:
				return -326.8011f, -2741.148f, 6.0907f;
			
			case 16:
				return 1153.678f, -3093.058f, 5.8698f;
			
			case 19:
				return 646.6414f, -2652.586f, 6.155f;
			
			case 18:
				return -235.4306f, -2563.153f, 6.0509f;
			
			case 12:
				return 2859.976f, 4411.673f, 48.0934f;
			
			case 15:
				return 1659.062f, 4804.715f, 42.1896f;
			
			case 13:
				return 365.8367f, 3589.234f, 32.3738f;
			
			case 14:
				return 646.2524f, 2805.813f, 40.7804f;
			
			case 11:
				return 210.1556f, 2439.034f, 58.0282f;
			
			case 2:
				return 422.4615f, 6503.916f, 26.7609f;
			
			case 5:
				return -168.0869f, 6292.866f, 30.4893f;
			
			case 3:
				return 95.4456f, 6490.381f, 30.2949f;
			
			case 4:
				return -435.375f, 6119.498f, 30.1965f;
			
			case 1:
				return 74.3165f, 6316.366f, 30.2273f;
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 144.7052f, 174.0004f, 104.7989f;
							
							case 1:
								return 156.2407f, 172.1833f, 104.8413f;
							
							case 2:
								return 152.3495f, 162.122f, 104.5681f;
							
							case 3:
								return 149.3549f, 152.8602f, 104.7787f;
							
							default:
						}
						break;
					
					case 10:
						switch (iParam0)
						{
							case 0:
								return 303.1082f, -777.2009f, 28.2145f;
							
							case 1:
								return 306.6073f, -766.842f, 28.217f;
							
							case 2:
								return 310.2051f, -756.255f, 28.2203f;
							
							case 3:
								return 313.4909f, -822.9637f, 28.1564f;
							
							default:
						}
						break;
					
					case 8:
						switch (iParam0)
						{
							case 0:
								return -1505.704f, -407.3392f, 37.9183f;
							
							case 1:
								return -1498.254f, -414.4433f, 36.8173f;
							
							case 2:
								return -1512.923f, -400.4784f, 38.9836f;
							
							case 3:
								return -1520.979f, -393.1905f, 40.1197f;
							
							default:
						}
						break;
					
					case 9:
						switch (iParam0)
						{
							case 0:
								return -1170.77f, -1358.821f, 3.8793f;
							
							case 1:
								return -1180.174f, -1363.177f, 3.83f;
							
							case 2:
								return -1189.437f, -1367.422f, 3.6581f;
							
							case 3:
								return -1201.368f, -1372.765f, 3.2609f;
							
							default:
						}
						break;
					
					case 6:
						switch (iParam0)
						{
							case 0:
								return 1416.098f, -1643.641f, 59.6165f;
							
							case 1:
								return 1422.404f, -1653.303f, 60.7606f;
							
							case 2:
								return 1428.712f, -1663.632f, 62.0263f;
							
							case 3:
								return 1436.717f, -1677.033f, 63.5393f;
							
							default:
						}
						break;
					
					case 17:
						switch (iParam0)
						{
							case 0:
								return 148.9618f, -2492.894f, 4.9962f;
							
							case 1:
								return 146.8011f, -2496.193f, 5f;
							
							case 2:
								return 144.4075f, -2499.553f, 5f;
							
							case 3:
								return 145.4915f, -2505.529f, 5f;
							
							default:
						}
						break;
					
					case 20:
						switch (iParam0)
						{
							case 0:
								return -349.1915f, -2783.202f, 4.7145f;
							
							case 1:
								return -344.4598f, -2783.313f, 4.7134f;
							
							case 2:
								return -329.3253f, -2764.197f, 4.7158f;
							
							case 3:
								return -326.8011f, -2741.148f, 6.0907f;
							
							default:
						}
						break;
					
					case 16:
						switch (iParam0)
						{
							case 0:
								return 1177.498f, -3107.529f, 5.028f;
							
							case 1:
								return 1173.594f, -3111.532f, 5.6435f;
							
							case 2:
								return 1173.602f, -3123.754f, 5.6486f;
							
							case 3:
								return 1153.678f, -3093.058f, 5.8698f;
							
							default:
						}
						break;
					
					case 19:
						switch (iParam0)
						{
							case 0:
								return 671.2275f, -2652.373f, 5.7929f;
							
							case 1:
								return 667.0157f, -2650.506f, 5.7929f;
							
							case 2:
								return 656.0261f, -2650.482f, 5.7928f;
							
							case 3:
								return 646.6414f, -2652.586f, 6.155f;
							
							default:
						}
						break;
					
					case 18:
						switch (iParam0)
						{
							case 0:
								return -254.0566f, -2600.409f, 5.7123f;
							
							case 1:
								return -242.6433f, -2601.86f, 5.713f;
							
							case 2:
								return -233.7325f, -2601.958f, 5.713f;
							
							case 3:
								return -235.4306f, -2563.153f, 6.0509f;
							
							default:
						}
						break;
					
					case 12:
						switch (iParam0)
						{
							case 0:
								return 2868.489f, 4438.962f, 47.6502f;
							
							case 1:
								return 2878.345f, 4443.118f, 47.4421f;
							
							case 2:
								return 2888.115f, 4448.735f, 47.528f;
							
							case 3:
								return 2859.976f, 4411.673f, 48.0934f;
							
							default:
						}
						break;
					
					case 15:
						switch (iParam0)
						{
							case 0:
								return 1638.833f, 4838.842f, 41.0227f;
							
							case 1:
								return 1654.903f, 4824.832f, 40.9962f;
							
							case 2:
								return 1643.394f, 4828.428f, 41.0252f;
							
							case 3:
								return 1659.062f, 4804.715f, 42.1896f;
							
							default:
						}
						break;
					
					case 13:
						switch (iParam0)
						{
							case 0:
								return 399.1866f, 3592.775f, 32.2605f;
							
							case 1:
								return 388.2984f, 3594.667f, 32.2891f;
							
							case 2:
								return 377.6639f, 3596.634f, 32.4635f;
							
							case 3:
								return 365.8367f, 3589.234f, 32.3738f;
							
							default:
						}
						break;
					
					case 14:
						switch (iParam0)
						{
							case 0:
								return 649.8233f, 2767.469f, 40.9497f;
							
							case 1:
								return 648.6895f, 2779.705f, 40.904f;
							
							case 2:
								return 647.6401f, 2790.887f, 40.9137f;
							
							case 3:
								return 646.2524f, 2805.813f, 40.7804f;
							
							default:
						}
						break;
					
					case 11:
						switch (iParam0)
						{
							case 0:
								return 217.2443f, 2476.532f, 54.5448f;
							
							case 1:
								return 214.8707f, 2465.348f, 55.0394f;
							
							case 2:
								return 212.683f, 2454.795f, 55.8661f;
							
							case 3:
								return 210.1556f, 2439.034f, 58.0282f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 425.974f, 6541.852f, 26.6953f;
							
							case 1:
								return 424.2257f, 6530.286f, 26.6576f;
							
							case 2:
								return 422.175f, 6517.893f, 26.7314f;
							
							case 3:
								return 422.4615f, 6503.916f, 26.7609f;
							
							default:
						}
						break;
					
					case 5:
						switch (iParam0)
						{
							case 0:
								return -144.8243f, 6315.08f, 30.5034f;
							
							case 1:
								return -152.579f, 6307.761f, 30.3932f;
							
							case 2:
								return -160.0474f, 6300.669f, 30.2302f;
							
							case 3:
								return -168.0869f, 6292.866f, 30.4893f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 69.3182f, 6464.313f, 30.3712f;
							
							case 1:
								return 77.6554f, 6472.552f, 30.402f;
							
							case 2:
								return 85.5971f, 6480.53f, 30.3719f;
							
							case 3:
								return 95.4456f, 6490.381f, 30.2949f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return -424.7343f, 6127.668f, 30.4525f;
							
							case 1:
								return -432.4558f, 6134.91f, 30.4784f;
							
							case 2:
								return -440.5509f, 6142.593f, 30.4784f;
							
							case 3:
								return -435.375f, 6119.498f, 30.1965f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 56.7992f, 6346.404f, 30.229f;
							
							case 1:
								return 62.2523f, 6336.942f, 30.2259f;
							
							case 2:
								return 67.5678f, 6327.642f, 30.2259f;
							
							case 3:
								return 74.3165f, 6316.366f, 30.2273f;
							
							default:
						}
						break;
				}
				break;
			
			case 1:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 126.7303f, 163.1857f, 104.341f;
							
							case 1:
								return 87.1795f, 175.3191f, 104.2598f;
							
							case 2:
								return 92.9219f, 162.1079f, 104.348f;
							
							case 3:
								return 81.3758f, 169.4485f, 104.6149f;
							
							default:
						}
						break;
					
					case 10:
						switch (iParam0)
						{
							case 0:
								return 326.136f, -785.2573f, 28.2144f;
							
							case 1:
								return 322.6066f, -796.3894f, 28.1706f;
							
							case 2:
								return 318.0972f, -809.7634f, 28.1823f;
							
							case 3:
								return 314.0462f, -743.4577f, 28.2014f;
							
							default:
						}
						break;
					
					case 8:
						switch (iParam0)
						{
							case 0:
								return -1440.239f, -413.3762f, 34.8174f;
							
							case 1:
								return -1431.168f, -407.85f, 34.9821f;
							
							case 2:
								return -1422.081f, -402.2156f, 35.1566f;
							
							case 3:
								return -1412.124f, -396.1587f, 35.199f;
							
							default:
						}
						break;
					
					case 9:
						switch (iParam0)
						{
							case 0:
								return -1211.97f, -1356.485f, 3.2077f;
							
							case 1:
								return -1202.679f, -1352.046f, 3.5031f;
							
							case 2:
								return -1192.861f, -1347.387f, 3.7444f;
							
							case 3:
								return -1179.847f, -1341.415f, 3.8704f;
							
							default:
						}
						break;
					
					case 6:
						switch (iParam0)
						{
							case 0:
								return 1430.273f, -1642.976f, 60.7876f;
							
							case 1:
								return 1440.73f, -1647.092f, 62.6074f;
							
							case 2:
								return 1451.992f, -1646.586f, 65.313f;
							
							case 3:
								return 1465.335f, -1639.677f, 67.9453f;
							
							default:
						}
						break;
					
					case 17:
						switch (iParam0)
						{
							case 0:
								return 149.6812f, -2454.479f, 5f;
							
							case 1:
								return 143.9008f, -2450.162f, 5f;
							
							case 2:
								return 140.2904f, -2447.917f, 5f;
							
							case 3:
								return 141.2641f, -2442.472f, 5f;
							
							default:
						}
						break;
					
					case 20:
						switch (iParam0)
						{
							case 0:
								return -361.5018f, -2780.22f, 5.7183f;
							
							case 1:
								return -357.0598f, -2780.403f, 5.8195f;
							
							case 2:
								return -365.9717f, -2779.991f, 5.7418f;
							
							case 3:
								return -351.6208f, -2740.528f, 6.1187f;
							
							default:
						}
						break;
					
					case 16:
						switch (iParam0)
						{
							case 0:
								return 1194.811f, -3104.521f, 5.7054f;
							
							case 1:
								return 1199.255f, -3104.421f, 5.6831f;
							
							case 2:
								return 1193.624f, -3083.208f, 5.6556f;
							
							case 3:
								return 1166.325f, -3078.063f, 5.9384f;
							
							default:
						}
						break;
					
					case 19:
						switch (iParam0)
						{
							case 0:
								return 654.0573f, -2693.037f, 5.8024f;
							
							case 1:
								return 666.6396f, -2692.853f, 5.7917f;
							
							case 2:
								return 657.1966f, -2705.695f, 5.9325f;
							
							case 3:
								return 663.0167f, -2687.504f, 6.1543f;
							
							default:
						}
						break;
					
					case 18:
						switch (iParam0)
						{
							case 0:
								return -250.8277f, -2572.115f, 5.7129f;
							
							case 1:
								return -250.6818f, -2564.549f, 5.7133f;
							
							case 2:
								return -241.3862f, -2565.994f, 5.7129f;
							
							case 3:
								return -247.4174f, -2552.121f, 6.0745f;
							
							default:
						}
						break;
					
					case 12:
						switch (iParam0)
						{
							case 0:
								return 2845.509f, 4483.769f, 47.5946f;
							
							case 1:
								return 2856.061f, 4481.315f, 47.397f;
							
							case 2:
								return 2866.66f, 4477.938f, 47.2923f;
							
							case 3:
								return 2873.481f, 4485.882f, 47.6688f;
							
							default:
						}
						break;
					
					case 15:
						switch (iParam0)
						{
							case 0:
								return 1683.025f, 4785.376f, 40.8715f;
							
							case 1:
								return 1683.861f, 4774.245f, 40.8633f;
							
							case 2:
								return 1685.945f, 4763.556f, 40.8653f;
							
							case 3:
								return 1659.635f, 4798.614f, 42.1739f;
							
							default:
						}
						break;
					
					case 13:
						switch (iParam0)
						{
							case 0:
								return 407.3274f, 3607.456f, 32.2305f;
							
							case 1:
								return 396.5025f, 3610.196f, 32.2266f;
							
							case 2:
								return 384.9869f, 3612.185f, 32.3465f;
							
							case 3:
								return 370.307f, 3612.629f, 32.3487f;
							
							default:
						}
						break;
					
					case 14:
						switch (iParam0)
						{
							case 0:
								return 618.8763f, 2813.685f, 40.9183f;
							
							case 1:
								return 607.5377f, 2812.979f, 40.9482f;
							
							case 2:
								return 595.9734f, 2812.296f, 40.947f;
							
							case 3:
								return 613.4562f, 2794.59f, 41.0611f;
							
							default:
						}
						break;
					
					case 11:
						switch (iParam0)
						{
							case 0:
								return 231.411f, 2485.149f, 54.1002f;
							
							case 1:
								return 230.1177f, 2474.666f, 54.4998f;
							
							case 2:
								return 228.3704f, 2463.432f, 55.0091f;
							
							case 3:
								return 225.9784f, 2449.663f, 56.0529f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 414.5212f, 6557.796f, 26.3661f;
							
							case 1:
								return 403.8975f, 6558.371f, 26.4371f;
							
							case 2:
								return 393.2283f, 6559.076f, 26.5887f;
							
							case 3:
								return 375.7357f, 6559.92f, 26.8811f;
							
							default:
						}
						break;
					
					case 5:
						switch (iParam0)
						{
							case 0:
								return -198.7337f, 6322.492f, 30.4176f;
							
							case 1:
								return -186.4931f, 6325.694f, 30.5028f;
							
							case 2:
								return -177.9904f, 6317.372f, 30.2112f;
							
							case 3:
								return -167.8821f, 6307.144f, 30.2122f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 30.6972f, 6426.06f, 30.3401f;
							
							case 1:
								return 38.5376f, 6434.006f, 30.3431f;
							
							case 2:
								return 46.5618f, 6442.031f, 30.3487f;
							
							case 3:
								return 56.3076f, 6451.954f, 30.356f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return -391.1923f, 6184.078f, 30.4618f;
							
							case 1:
								return -404.3702f, 6202.154f, 30.5146f;
							
							case 2:
								return -404.9331f, 6213.31f, 30.482f;
							
							case 3:
								return -394.9436f, 6212.825f, 30.4886f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 63.2694f, 6350.123f, 30.2268f;
							
							case 1:
								return 68.0914f, 6340.667f, 30.2258f;
							
							case 2:
								return 73.2089f, 6330.613f, 30.2258f;
							
							case 3:
								return 79.0435f, 6319.419f, 30.2364f;
							
							default:
						}
						break;
				}
				break;
			
			case 2:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 74.9695f, 167.98f, 104.3503f;
							
							case 1:
								return 60.7318f, 156.4501f, 104.3953f;
							
							case 2:
								return 62.5776f, 161.2384f, 104.4801f;
							
							case 3:
								return 79.1059f, 163.5721f, 104.7526f;
							
							default:
						}
						break;
					
					case 10:
						switch (iParam0)
						{
							case 0:
								return 344.6402f, -730.1158f, 28.181f;
							
							case 1:
								return 340.6898f, -741.6677f, 28.1341f;
							
							case 2:
								return 336.9805f, -752.3841f, 28.1515f;
							
							case 3:
								return 332.6159f, -765.8456f, 28.1761f;
							
							default:
						}
						break;
					
					case 8:
						switch (iParam0)
						{
							case 0:
								return -1425.267f, -358.664f, 39.8621f;
							
							case 1:
								return -1432.032f, -350.9521f, 41.9045f;
							
							case 2:
								return -1438.948f, -343.1571f, 43.1232f;
							
							case 3:
								return -1447.102f, -334.0293f, 43.2706f;
							
							default:
						}
						break;
					
					case 9:
						switch (iParam0)
						{
							case 0:
								return -1152.865f, -1396.891f, 3.9901f;
							
							case 1:
								return -1161.709f, -1403.417f, 3.7883f;
							
							case 2:
								return -1170.039f, -1409.456f, 3.603f;
							
							case 3:
								return -1179.922f, -1416.552f, 3.4254f;
							
							default:
						}
						break;
					
					case 6:
						switch (iParam0)
						{
							case 0:
								return 1465.397f, -1677.776f, 65.1317f;
							
							case 1:
								return 1468.432f, -1666.437f, 65.1823f;
							
							case 2:
								return 1473.405f, -1653.851f, 66.3969f;
							
							case 3:
								return 1479.382f, -1640.09f, 68.4911f;
							
							default:
						}
						break;
					
					case 17:
						switch (iParam0)
						{
							case 0:
								return 168.1579f, -2467.466f, 5.013f;
							
							case 1:
								return 168.2115f, -2479.412f, 5.015f;
							
							case 2:
								return 168.085f, -2492.188f, 4.991f;
							
							case 3:
								return 167.6928f, -2455.238f, 4.9877f;
							
							default:
						}
						break;
					
					case 20:
						switch (iParam0)
						{
							case 0:
								return -371.8721f, -2768.837f, 5.7118f;
							
							case 1:
								return -368.8315f, -2771.617f, 5.7128f;
							
							case 2:
								return -376.6873f, -2748.82f, 5.7447f;
							
							case 3:
								return -331.9699f, -2729.261f, 6.0959f;
							
							default:
						}
						break;
					
					case 16:
						switch (iParam0)
						{
							case 0:
								return 1151.975f, -3148.326f, 5.6115f;
							
							case 1:
								return 1156.494f, -3148.156f, 5.6117f;
							
							case 2:
								return 1141.328f, -3145.683f, 5.6123f;
							
							case 3:
								return 1176.409f, -3142.344f, 5.7975f;
							
							default:
						}
						break;
					
					case 19:
						switch (iParam0)
						{
							case 0:
								return 625.344f, -2676.219f, 5.8074f;
							
							case 1:
								return 630.9755f, -2688.167f, 5.8092f;
							
							case 2:
								return 623.7214f, -2685.048f, 5.7944f;
							
							case 3:
								return 641.0204f, -2652.495f, 6.1576f;
							
							default:
						}
						break;
					
					case 18:
						switch (iParam0)
						{
							case 0:
								return -282.5058f, -2566.074f, 5.7144f;
							
							case 1:
								return -292.4669f, -2585.14f, 5.715f;
							
							case 2:
								return -302.3321f, -2576.532f, 5.7159f;
							
							case 3:
								return -263.0872f, -2542.552f, 6.0743f;
							
							default:
						}
						break;
					
					case 12:
						switch (iParam0)
						{
							case 0:
								return 2913.793f, 4456.578f, 47.0743f;
							
							case 1:
								return 2924.067f, 4460.802f, 46.5843f;
							
							case 2:
								return 2934.219f, 4465.292f, 46.1155f;
							
							case 3:
								return 2940.822f, 4449.582f, 46.1837f;
							
							default:
						}
						break;
					
					case 15:
						switch (iParam0)
						{
							case 0:
								return 1662.253f, 4849.201f, 40.913f;
							
							case 1:
								return 1660.826f, 4860.057f, 40.9121f;
							
							case 2:
								return 1658.906f, 4875.204f, 41.0773f;
							
							case 3:
								return 1658.426f, 4811.152f, 42.043f;
							
							default:
						}
						break;
					
					case 13:
						switch (iParam0)
						{
							case 0:
								return 342.6013f, 3601.92f, 32.5934f;
							
							case 1:
								return 333.5355f, 3594.518f, 32.5538f;
							
							case 2:
								return 326.2228f, 3586.551f, 32.3555f;
							
							case 3:
								return 320.5603f, 3573.11f, 32.3695f;
							
							default:
						}
						break;
					
					case 14:
						switch (iParam0)
						{
							case 0:
								return 665.3925f, 2724.05f, 40.7514f;
							
							case 1:
								return 664.7371f, 2734.814f, 40.837f;
							
							case 2:
								return 663.9374f, 2746.148f, 40.9304f;
							
							case 3:
								return 660.5984f, 2758.656f, 40.9246f;
							
							default:
						}
						break;
					
					case 11:
						switch (iParam0)
						{
							case 0:
								return 264.4133f, 2475.328f, 52.5213f;
							
							case 1:
								return 254.5964f, 2469.187f, 53.1732f;
							
							case 2:
								return 246.5093f, 2461.836f, 53.6126f;
							
							case 3:
								return 238.3004f, 2453.456f, 54.7109f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 438.7546f, 6555.551f, 26.083f;
							
							case 1:
								return 449.5543f, 6554.03f, 26.0292f;
							
							case 2:
								return 460.5455f, 6552.418f, 26.0041f;
							
							case 3:
								return 443.321f, 6555.394f, 26.0568f;
							
							default:
						}
						break;
					
					case 5:
						switch (iParam0)
						{
							case 0:
								return -134.716f, 6328.355f, 30.5927f;
							
							case 1:
								return -126.8547f, 6320.537f, 30.5044f;
							
							case 2:
								return -119.3266f, 6312.979f, 30.5045f;
							
							case 3:
								return -132.5326f, 6339.82f, 30.4904f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 18.3968f, 6426.546f, 30.4162f;
							
							case 1:
								return 10.8481f, 6433.848f, 30.4252f;
							
							case 2:
								return 3.1266f, 6441.352f, 30.4252f;
							
							case 3:
								return -5.633f, 6449.744f, 30.4252f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return -439.1614f, 6111.74f, 30.2942f;
							
							case 1:
								return -441.554f, 6106.894f, 30.3087f;
							
							case 2:
								return -443.6328f, 6102.508f, 30.2969f;
							
							case 3:
								return -446.7796f, 6098.214f, 30.2083f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 74.6876f, 6348.288f, 30.376f;
							
							case 1:
								return 82.7511f, 6337.771f, 30.2258f;
							
							case 2:
								return 77.8867f, 6335.605f, 30.2258f;
							
							case 3:
								return 86.1207f, 6325.027f, 30.2358f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 131.7841f, -2230.233f, 5.0333f;
}

int func_359()
{
	return 0;
}

var func_360(int iParam0)
{
	if ((func_362() || func_361()) || func_27())
	{
		return Local_701.f_64[iParam0];
	}
	return Local_701.f_64[0];
}

bool func_361()
{
	return func_16() == 9;
}

bool func_362()
{
	return func_16() == 1;
}

int func_363()
{
	if ((func_361() || func_362()) || func_27())
	{
		return 1;
	}
	return 0;
}

int func_364(int iParam0, int iParam1, int iParam2, int iParam3)
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
			return func_404(iParam1);
		
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
			return func_400(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_395(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_390(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_385(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_384(iParam1, iParam2);
		
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
			return func_383();
		
		case 218:
			return func_382();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_381(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_380(iParam1, iParam2);
		
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
			return func_375(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_370(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_365(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_365(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_369(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_366(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_366(int iParam0, var uParam1)
{
	if (func_369(iParam0, uParam1))
	{
		return (func_368(iParam0, uParam1) + func_367(iParam0, uParam1));
	}
	return 0;
}

int func_367(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_368(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_369(int iParam0, int iParam1)
{
	return func_368(iParam0, iParam1) > 0;
}

int func_370(int iParam0, int iParam1, bool bParam2, int iParam3)
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
		if (func_374(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_371(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_371(int iParam0, int iParam1)
{
	if (func_374(iParam0, iParam1))
	{
		return (func_373(iParam0, iParam1) + func_372(iParam0, iParam1));
	}
	return 0;
}

int func_372(int iParam0, int iParam1)
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

int func_373(int iParam0, int iParam1)
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

bool func_374(int iParam0, int iParam1)
{
	return func_373(iParam0, iParam1) > 0;
}

int func_375(int iParam0, int iParam1, bool bParam2, int iParam3)
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
		if (func_379(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_376(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_376(int iParam0, int iParam1)
{
	if (func_379(iParam0, iParam1))
	{
		return (func_378(iParam0, iParam1) + func_377(iParam0, iParam1));
	}
	return 0;
}

int func_377(int iParam0, int iParam1)
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

int func_378(int iParam0, int iParam1)
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

bool func_379(int iParam0, int iParam1)
{
	return func_378(iParam0, iParam1) > 0;
}

int func_380(int iParam0, int iParam1)
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

int func_381(int iParam0, int iParam1, int iParam2)
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

int func_382()
{
	iVar0 = 32;
	return iVar0;
}

int func_383()
{
	iVar0 = 8;
	return iVar0;
}

int func_384(int iParam0, int iParam1)
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
		iVar0 = (iVar0 + func_276(iParam0, func_280() + 1));
	}
	return iVar0;
}

int func_385(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_389(iParam0))
		{
			iVar0 = (iVar0 + func_386(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_386(int iParam0, var uParam1)
{
	if (func_389(iParam0))
	{
		return (func_388(iParam0) + func_387(iParam0, uParam1));
	}
	return 0;
}

int func_387(int iParam0, var uParam1)
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

int func_388(int iParam0)
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

bool func_389(int iParam0)
{
	return func_388(iParam0) > 0;
}

int func_390(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_394(iParam0))
		{
			iVar0 = (iVar0 + func_391(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_391(int iParam0, int iParam1)
{
	if (func_394(iParam0))
	{
		return (func_393(iParam0) + func_392(iParam0, iParam1));
	}
	return 0;
}

int func_392(int iParam0, int iParam1)
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

int func_393(int iParam0)
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

bool func_394(int iParam0)
{
	return func_393(iParam0) > 0;
}

int func_395(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_399(iParam0))
		{
			iVar0 = (iVar0 + func_396(iParam0));
		}
	}
	return iVar0;
}

int func_396(int iParam0)
{
	if (func_399(iParam0))
	{
		return (func_398(iParam0) + func_397(iParam0));
	}
	return 0;
}

int func_397(int iParam0)
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

int func_398(int iParam0)
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

bool func_399(int iParam0)
{
	return func_398(iParam0) > 0;
}

int func_400(int iParam0, int iParam1, var uParam2)
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
	iVar0 = (iVar0 + func_401(iParam0));
	return iVar0;
}

int func_401(int iParam0)
{
	if (func_403(iParam0))
	{
		if (func_402(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_402(int iParam0)
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

int func_403(int iParam0)
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

int func_404(int iParam0)
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

float func_405()
{
	switch (func_16())
	{
		case 3:
			return 124.5999f;
		
		case 4:
			return 124.5999f;
		
		case 5:
			return 124.5999f;
		
		case 7:
			return 124.5999f;
		
		default:
	}
	return 124.5999f;
}

Vector3 func_406()
{
	switch (func_16())
	{
		case 6:
			iVar0 = 0;
			while (iVar0 < func_228())
			{
				if (GAMEPLAY::IS_BIT_SET(Local_701.f_134[0], iVar0))
				{
					return func_407(func_16(), iVar0, Local_701.f_679, 0, 0, 0);
				}
				iVar0++;
			}
			break;
		
		case 3:
			return 1678.634f, 2307.834f, 74.3844f;
		
		case 4:
			return 1678.634f, 2307.834f, 74.3844f;
		
		case 5:
			return 1678.634f, 2307.834f, 74.3844f;
		
		case 7:
			return 1678.634f, 2307.834f, 74.3844f;
	}
	return 1678.634f, 2307.834f, 74.3844f;
}

Vector3 func_407(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	switch (iParam0)
	{
		case 4:
			if (func_240())
			{
				switch (iParam1)
				{
					case 0:
						return 2855.103f, 4562.412f, 45.9071f;
					
					case 1:
						return 3316.973f, 5172.291f, 17.4618f;
					
					case 2:
						return 2708.735f, 4135.479f, 42.8745f;
					
					case 3:
						return 2053.613f, 3166.031f, 44.2098f;
					
					case 4:
						return 863.7849f, 3679.312f, 31.561f;
					
					case 5:
						return 883.5331f, 2849.854f, 55.6733f;
					
					case 6:
						return 164.7644f, 3114.52f, 41.4837f;
					
					case 7:
						return 1745.003f, 6410.566f, 34.2547f;
					
					case 8:
						return 750.2117f, 4188.375f, 39.7546f;
					
					case 9:
						return 759.8706f, 6460.903f, 30.5887f;
					
					case 10:
						return -744.3207f, 5550.492f, 32.5851f;
					
					case 11:
						return -1584.256f, 5155.391f, 18.6781f;
					
					case 12:
						return -135.6222f, 4617.994f, 124.5161f;
					
					case 13:
						return 161.2865f, 2232.68f, 89.151f;
					
					case 14:
						return 1603.276f, 6631.872f, 14.4338f;
					
					case 15:
						return -205.1835f, 3657.763f, 50.8854f;
					
					case 16:
						return 1624.065f, 3518.677f, 36.1863f;
					
					case 17:
						return 1263.991f, 1922.317f, 77.6406f;
					
					case 18:
						return -777.9739f, 5399.38f, 33.3171f;
					
					case 19:
						return 2496.155f, 2601.807f, 41.9696f;
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return -885.3888f, 265.3505f, 74.0379f;
					
					case 1:
						return -397.254f, -128.9808f, 37.5323f;
					
					case 2:
						return -839.3116f, -1054.739f, 9.6889f;
					
					case 3:
						return -1163.028f, -325.2383f, 36.6153f;
					
					case 4:
						return -162.2476f, -1457.61f, 30.6858f;
					
					case 5:
						return 572.7383f, 117.3382f, 97.0415f;
					
					case 6:
						return 888.4307f, -2209.773f, 29.5121f;
					
					case 7:
						return -3050.054f, 107.81f, 11.3462f;
					
					case 8:
						return 433.4743f, -1968.39f, 22.185f;
					
					case 9:
						return 1284.758f, -1597.166f, 53.2252f;
					
					case 10:
						return -1540.827f, -945.9845f, 10.5661f;
					
					case 11:
						return -2018.422f, 562.5836f, 107.1442f;
					
					case 12:
						return 262.0412f, 896.3593f, 208.2672f;
					
					case 13:
						return -1037.813f, -1592.409f, 4.0178f;
					
					case 14:
						return -1653.934f, 241.1802f, 61.5274f;
					
					case 15:
						return -1954.19f, -277.441f, 41.1101f;
					
					case 16:
						return 1691.062f, -1604.99f, 111.6066f;
					
					case 17:
						return -427.6465f, 1201.215f, 324.8949f;
					
					case 18:
						return 1667.233f, -71.2133f, 172.4527f;
					
					case 19:
						return 1430.251f, -2605.631f, 47.2306f;
					}
				
				default:
			}
			break;
		
		case 5:
			if (func_240())
			{
				if (bParam5)
				{
					switch (iParam1)
					{
						case 0:
							return 2617.898f, 1693.1f, 26.5987f;
						
						case 1:
							return -1090.493f, 2714.866f, 18.0742f;
						
						case 2:
							return 957.9468f, 3618.776f, 31.68f;
						
						case 3:
							return 1584.342f, 2905.573f, 55.9087f;
						
						case 4:
							return 2709.535f, 3452.487f, 54.5399f;
						
						case 5:
							return 2720.387f, 4285.945f, 46.259f;
						
						case 6:
							return 1879.329f, 3920.308f, 32.1766f;
						
						case 7:
							return 1683.182f, 4689.506f, 42.0657f;
						
						case 8:
							return 3323.277f, 5165.221f, 17.382f;
						
						case 9:
							return 6.1407f, 3037.272f, 39.8761f;
						
						case 10:
							return 1534.667f, 2231.99f, 76.704f;
						
						case 11:
							return 733.3676f, 2523.386f, 72.2238f;
						
						case 12:
							return -90.154f, 1982.596f, 182.0488f;
						
						case 13:
							return 3680.798f, 4497.241f, 23.1072f;
						
						case 14:
							return 1591.857f, 6449.925f, 24.3172f;
						
						case 15:
							return 2336.251f, 2603.98f, 45.6676f;
						
						default:
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							return 2631.274f, 1649.57f, 25.4685f;
						
						case 1:
							return -1092.811f, 2694.719f, 18.9463f;
						
						case 2:
							return 950.2559f, 3626.43f, 31.3657f;
						
						case 3:
							return 1591.962f, 2883.801f, 56.1303f;
						
						case 4:
							return 2698.547f, 3436.816f, 54.8121f;
						
						case 5:
							return 2712.809f, 4264.86f, 46.1423f;
						
						case 6:
							return 1870.197f, 3916.849f, 31.9349f;
						
						case 7:
							return 1703.267f, 4693.022f, 41.8364f;
						
						case 8:
							return 3315.757f, 5147.607f, 17.283f;
						
						case 9:
							return -6.2277f, 3022.219f, 39.6263f;
						
						case 10:
							return 1525.615f, 2225.177f, 75.2f;
						
						case 11:
							return 748.7995f, 2510.56f, 72.2693f;
						
						case 12:
							return -94.5431f, 1998.215f, 181.7387f;
						
						case 13:
							return 3663.342f, 4485.44f, 27.443f;
						
						case 14:
							return 1584.454f, 6442.569f, 24.056f;
						
						case 15:
							return 2325.668f, 2620.542f, 45.6226f;
						}
					
					default:
				}
			}
			else if (bParam5)
			{
				switch (iParam1)
				{
					case 0:
						return -3186.419f, 1273.716f, 11.642f;
					
					case 1:
						return -2973.857f, 642.226f, 24.7975f;
					
					case 2:
						return -1995.021f, 590.951f, 116.9083f;
					
					case 3:
						return -895.774f, -4.552f, 42.8039f;
					
					case 4:
						return -494.924f, 796.746f, 183.3535f;
					
					case 5:
						return 212.151f, -102.686f, 72.2853f;
					
					case 6:
						return 988.117f, -433.602f, 62.8957f;
					
					case 7:
						return 1193.099f, -1623.448f, 44.2215f;
					
					case 8:
						return 418.036f, -1735.894f, 28.6077f;
					
					case 9:
						return -46.345f, -1446.107f, 31.4346f;
					
					case 10:
						return 371.531f, -827.181f, 28.2927f;
					
					case 11:
						return -238.559f, -773.351f, 33.0967f;
					
					case 12:
						return -1642.121f, -412.467f, 41.0739f;
					
					case 13:
						return -743.009f, -981.219f, 16.0549f;
					
					case 14:
						return -240.619f, 381.349f, 111.4326f;
					
					case 15:
						return 1271.058f, -682.863f, 65.0367f;
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return -3164.946f, 1268.854f, 11.3158f;
					
					case 1:
						return -2993.823f, 637.489f, 20.086f;
					
					case 2:
						return -1973.286f, 579.597f, 115.8f;
					
					case 3:
						return -873.85f, 2.024f, 42.843f;
					
					case 4:
						return -480.775f, 799.763f, 179.956f;
					
					case 5:
						return 206.093f, -111.377f, 67.88f;
					
					case 6:
						return 1005.416f, -443.672f, 63.059f;
					
					case 7:
						return 1198.257f, -1630.183f, 43.671f;
					
					case 8:
						return 407.584f, -1730.363f, 28.282f;
					
					case 9:
						return -48.583f, -1459.337f, 30.825f;
					
					case 10:
						return 358.6393f, -838.0125f, 28.3194f;
					
					case 11:
						return -248.987f, -768.004f, 31.764f;
					
					case 12:
						return -1629.561f, -419.992f, 38.824f;
					
					case 13:
						return -744.481f, -969.493f, 15.994f;
					
					case 14:
						return -259.168f, 398.993f, 108.896f;
					
					case 15:
						return 1288.041f, -680.553f, 64.778f;
					}
				
				default:
			}
			break;
		
		case 7:
			if (func_240())
			{
				switch (iParam1)
				{
					case 0:
						return 2357.599f, 2530.103f, 45.6678f;
					
					case 1:
						return 2373.432f, 2572.65f, 45.6677f;
					
					case 2:
						return 2184.702f, 3511.679f, 44.4123f;
					
					case 3:
						return 2170.231f, 3504.068f, 44.5259f;
					
					case 4:
						return 860.169f, 2849.632f, 56.4467f;
					
					case 5:
						return 870.8168f, 2867.49f, 55.8524f;
					
					case 6:
						return 413.1571f, 2985.396f, 39.6084f;
					
					case 7:
						return 393.024f, 2990.384f, 39.7003f;
					
					case 8:
						return -492.9596f, 6266.186f, 11.1948f;
					
					case 9:
						return -447.8156f, 6350.244f, 11.6295f;
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return -1178.041f, -1576.642f, 3.3286f;
					
					case 1:
						return -1136.833f, -352.7127f, 36.6737f;
					
					case 2:
						return -1139.65f, -320.505f, 36.6735f;
					
					case 3:
						return -18.236f, -216.3413f, 45.1815f;
					
					case 4:
						return 32.7873f, -211.881f, 51.8573f;
					
					case 5:
						return -1290.927f, -276.2561f, 37.8304f;
					
					case 6:
						return -1223.535f, -1320.985f, 3.3066f;
					
					case 7:
						return -1204.813f, -1333.181f, 3.8196f;
					
					case 8:
						return -1119.227f, -1606.902f, 3.3277f;
					
					case 9:
						return -121.8735f, -364.7843f, 35.3104f;
					}
				
				default:
			}
			break;
		
		case 3:
			if (func_240())
			{
				switch (iParam1)
				{
					case 0:
						return 1946.553f, 3848.936f, 31.173f;
					
					case 1:
						return 1841.062f, 3895.484f, 32.2833f;
					
					case 2:
						return 1560.217f, 3800.145f, 33.2544f;
					
					case 3:
						return 1588.55f, 2900.709f, 56.058f;
					
					case 4:
						return 1409.915f, 2167.996f, 96.5534f;
					
					case 5:
						return 1309.234f, 1110.166f, 104.6029f;
					
					case 6:
						return -1138.139f, 2676.507f, 17.0939f;
					
					case 7:
						return -255.5927f, 2185.608f, 129.4257f;
					
					case 8:
						return 163.042f, 2232.03f, 89.145f;
					
					case 9:
						return 215.6581f, 3040.218f, 41.2306f;
					
					case 10:
						return 518.198f, 3081.815f, 39.56f;
					
					case 11:
						return 1026.597f, 2654.781f, 38.5511f;
					
					case 12:
						return 470.1515f, 2613.429f, 42.1769f;
					
					case 13:
						return 2166.767f, 3359.911f, 44.514f;
					
					case 14:
						return 1764.448f, 3309.967f, 40.1595f;
					
					case 15:
						return 650.7023f, 3502.217f, 33.1276f;
					
					case 16:
						return 807.696f, 2180.311f, 51.2812f;
					
					case 17:
						return 1529.466f, 1724.381f, 109.119f;
					
					case 18:
						return 1412.718f, 3614.222f, 33.912f;
					
					case 19:
						return -39.492f, 2857.8f, 58.224f;
					
					case 20:
						return 2727.714f, 4291.594f, 47.3187f;
					
					case 21:
						return 2523.709f, 4213.176f, 38.934f;
					
					case 22:
						return 1963.682f, 4638.882f, 39.7992f;
					
					case 23:
						return 1681.745f, 4680.968f, 42.0554f;
					
					case 24:
						return 1709.24f, 4714f, 41.3369f;
					
					case 25:
						return 1687.665f, 4971.679f, 41.773f;
					
					case 26:
						return 1905.494f, 4924.755f, 47.902f;
					
					case 27:
						return 1600.131f, 6447.809f, 24.268f;
					
					case 28:
						return 1074.053f, 6507.302f, 19.959f;
					
					case 29:
						return 406.933f, 6641.465f, 27.304f;
					
					case 30:
						return -11.297f, 6613.899f, 30.393f;
					
					case 31:
						return -157.479f, 6450.529f, 30.441f;
					
					case 32:
						return -110.5607f, 6251.098f, 30.2798f;
					
					case 33:
						return -425.5597f, 6208.72f, 29.9159f;
					
					case 34:
						return -773.2371f, 5531.055f, 32.4779f;
					
					case 35:
						return -841.17f, 5406.444f, 33.615f;
					
					case 36:
						return 2237.801f, 5161.438f, 58.2713f;
					
					case 37:
						return 1421.668f, 4368.633f, 43.304f;
					
					case 38:
						return 763.354f, 4176.299f, 39.58f;
					
					case 39:
						return 2540.658f, 4677.303f, 32.779f;
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 467.219f, -1540.298f, 28.293f;
					
					case 1:
						return -1311.157f, -598.695f, 27.296f;
					
					case 2:
						return -1021.564f, -1127.712f, 1.1025f;
					
					case 3:
						return -634.427f, -1223.875f, 11.136f;
					
					case 4:
						return -599.348f, 175.415f, 64.207f;
					
					case 5:
						return -705.872f, -302.134f, 35.751f;
					
					case 6:
						return 3.266f, -1824.835f, 24.368f;
					
					case 7:
						return -356.377f, 81.446f, 62.787f;
					
					case 8:
						return 455.4892f, -725.7125f, 26.3591f;
					
					case 9:
						return -1306.995f, -168.6501f, 43.0315f;
					
					case 10:
						return -22.5962f, 215.1706f, 105.5648f;
					
					case 11:
						return 971.0678f, -633.0916f, 56.4665f;
					
					case 12:
						return 1397.159f, -1535.653f, 56.7074f;
					
					case 13:
						return 852.9148f, -2307.143f, 29.3404f;
					
					case 14:
						return 475.8266f, -1062.647f, 28.2115f;
					
					case 15:
						return -1966.061f, -500.5934f, 10.826f;
					
					case 16:
						return -307.141f, -275.295f, 30.389f;
					
					case 17:
						return 315.878f, -181.709f, 56.382f;
					
					case 18:
						return -246.67f, -774.785f, 31.459f;
					
					case 19:
						return -109.298f, -1458.554f, 32.464f;
					
					case 20:
						return -1017.321f, 504.8095f, 78.4535f;
					
					case 21:
						return -1630.454f, 81.513f, 61.2486f;
					
					case 22:
						return -1514.633f, -413.2709f, 34.597f;
					
					case 23:
						return -1428.564f, -649.4637f, 27.6734f;
					
					case 24:
						return -663.382f, -967.998f, 20.1988f;
					
					case 25:
						return -572.2941f, -858.0829f, 25.2536f;
					
					case 26:
						return -82.0467f, -1315.419f, 28.2145f;
					
					case 27:
						return 488.1603f, -1278.896f, 28.4124f;
					
					case 28:
						return 1268.753f, -1583.315f, 51.6875f;
					
					case 29:
						return 159.3053f, -1816.814f, 27.2342f;
					
					case 30:
						return 953.2253f, -1719.283f, 29.6613f;
					
					case 31:
						return -759.6809f, 365.0873f, 86.8667f;
					
					case 32:
						return 1244.374f, -346.5426f, 68.0822f;
					
					case 33:
						return 414.6804f, -2067.89f, 20.4995f;
					
					case 34:
						return -313.8132f, -1537.828f, 26.6973f;
					
					case 35:
						return -1263.321f, -1373.731f, 3.1453f;
					
					case 36:
						return -3049.436f, 173.3395f, 10.6054f;
					
					case 37:
						return 1384.91f, -2044.364f, 50.9985f;
					
					case 38:
						return -154.4409f, 987.5869f, 233.9823f;
					
					case 39:
						return 149.4402f, -2400.073f, 5.0003f;
					}
				
				default:
			}
			break;
		
		case 6:
			if (func_41() && !bParam4)
			{
				return func_408();
			}
			else if (func_240())
			{
				switch (iParam2)
				{
					case 0:
						return 307.7284f, 2890.268f, 42.4904f;
					
					case 1:
						return 2350.718f, 3035.847f, 47.1521f;
					
					case 2:
						return 283.8634f, 6782.829f, 14.6962f;
					
					case 3:
						return 2697.257f, 4312.563f, 44.852f;
					
					case 4:
						return 1694.117f, 6427.723f, 31.6272f;
					
					default:
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						return 1128.363f, -644.7004f, 55.7914f;
					
					case 1:
						return -815.2786f, 48.4003f, 47.6111f;
					
					case 2:
						return -96.7229f, -419.5907f, 35.3127f;
					
					case 3:
						return -1315.46f, -767.4545f, 19.1859f;
					
					case 4:
						return -425.1262f, 1124.943f, 324.8532f;
					}
				
				default:
			}
			break;
		
		case 10:
			if (func_240())
			{
				switch (iParam1)
				{
					case 0:
						return 2660.42f, 3275.803f, 54.241f;
					
					case 1:
						return 863.122f, 2147.322f, 51.453f;
					
					case 2:
						return 1479.641f, 2718.687f, 36.858f;
					
					case 3:
						return 2982.01f, 3489.064f, 70.3823f;
					
					case 4:
						return -2503.177f, 3614.475f, 13.0208f;
					
					case 5:
						return -1087.905f, 2713.253f, 18.074f;
					
					case 6:
						return 1979.431f, 3708.85f, 31.121f;
					
					case 7:
						return -251.122f, 2190.708f, 128.991f;
					
					case 8:
						return 1514.374f, 1830.64f, 105.641f;
					
					case 9:
						return 3352.5f, 5552.192f, 17.1629f;
					
					case 10:
						return 165.549f, 3113.142f, 41.495f;
					
					case 11:
						return 1481.549f, 3674.336f, 33.339f;
					
					case 12:
						return 1738.479f, 3040.162f, 60.388f;
					
					case 13:
						return 2529.567f, 2617.236f, 36.945f;
					
					case 14:
						return 2715.349f, 4132.248f, 42.899f;
					
					case 15:
						return 2288.987f, 4968.037f, 40.583f;
					
					case 16:
						return 352.369f, 4420.294f, 62.74f;
					
					case 17:
						return -838.502f, 5403.729f, 33.614f;
					
					case 18:
						return -1492.637f, 4981.798f, 62.115f;
					
					case 19:
						return 1603.832f, 6451.723f, 24.159f;
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return -1675.335f, -1069.808f, 12.1536f;
					
					case 1:
						return 1927.203f, -974.9163f, 77.7849f;
					
					case 2:
						return -63.5708f, -2248.542f, 6.8122f;
					
					case 3:
						return -516.0604f, -294.2748f, 34.2238f;
					
					case 4:
						return 795.0582f, -78.4309f, 79.5934f;
					
					case 5:
						return -886.8562f, -2104.292f, 7.8599f;
					
					case 6:
						return 770.206f, -1892.954f, 28.264f;
					
					case 7:
						return 1251.037f, -601.1376f, 68.2468f;
					
					case 8:
						return 262.5444f, -1347.44f, 30.9188f;
					
					case 9:
						return -279.5683f, -1064.715f, 24.801f;
					
					case 10:
						return -105.1761f, -1602.351f, 30.7514f;
					
					case 11:
						return -816.12f, -744.9531f, 22.5518f;
					
					case 12:
						return -3080.962f, 365.9827f, 6.1309f;
					
					case 13:
						return -1124.677f, 378.6771f, 69.6817f;
					
					case 14:
						return -500.1782f, -44.6982f, 43.5184f;
					
					case 15:
						return 299.6276f, -189.955f, 60.5704f;
					
					case 16:
						return 1501.391f, -2522.427f, 54.8799f;
					
					case 17:
						return 223.8582f, 679.4021f, 188.368f;
					
					case 18:
						return 883.8307f, -1021.679f, 31.6119f;
					
					case 19:
						return 2569.21f, 479.7553f, 107.5291f;
					}
				
				default:
			}
			break;
		
		case 12:
			if (func_240())
			{
				switch (iParam1)
				{
					case 0:
						return 2687.867f, 2764.891f, 36.883f;
					
					case 1:
						return 856.8327f, 2375.369f, 54.3039f;
					
					case 2:
						return 2468.765f, 3428.797f, 49.0652f;
					
					case 3:
						return 1611.757f, 3718.708f, 33.2478f;
					
					case 4:
						return 433.4957f, 3088.647f, 41.1607f;
					
					case 5:
						return 2649.519f, 4257.31f, 43.7585f;
					
					case 6:
						return 1971.375f, 4646.429f, 40.0244f;
					
					case 7:
						return 1582.152f, 6441.181f, 23.9314f;
					
					case 8:
						return -50.9144f, 6586.478f, 30.0231f;
					
					case 9:
						return -576.7059f, 5329.034f, 69.2571f;
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return -719.5996f, -2228.105f, 4.9328f;
					
					case 1:
						return -26.5003f, -1678.823f, 28.4612f;
					
					case 2:
						return 861.2762f, -2118.541f, 29.6091f;
					
					case 3:
						return -781.009f, -809.6935f, 19.8545f;
					
					case 4:
						return -366.3344f, 30.9147f, 46.9221f;
					
					case 5:
						return 805.3323f, -282.7911f, 65.4618f;
					
					case 6:
						return 1195.717f, -1264.772f, 34.2194f;
					
					case 7:
						return 332.2172f, -999.6744f, 28.2362f;
					
					case 8:
						return -1862.213f, -304.8989f, 48.1449f;
					
					case 9:
						return -896.0381f, -1493.916f, 4.024f;
					}
				
				default:
			}
			break;
		
		case 11:
			if (func_240())
			{
				switch (iParam2)
				{
					case 0:
						return 2565.312f, 1814.683f, 23.3794f;
					
					case 1:
						return -1608.012f, 3169.268f, 29.1f;
					
					case 2:
						return 2828.495f, 1635.059f, 23.5566f;
					
					case 3:
						return 3777.259f, 4487.087f, 5.4462f;
					
					case 4:
						return 1522.381f, 818.6603f, 76.4634f;
					
					case 5:
						return -2991.825f, 3451.685f, 8.592f;
					
					case 6:
						return -1631.712f, 4731.057f, 51.9242f;
					
					case 7:
						return -1914.684f, 2032.754f, 139.7386f;
					
					case 8:
						return -2201.572f, 4257.217f, 46.778f;
					
					case 9:
						return 3341.94f, 5488.945f, 19.0216f;
					
					default:
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						return -2960.671f, 442.2663f, 14.2607f;
					
					case 1:
						return -1545.139f, 860.0988f, 180.4627f;
					
					case 2:
						return -3142.278f, 1174.544f, 19.3651f;
					
					case 3:
						return 1921.121f, 579.848f, 174.533f;
					
					case 4:
						return -1534.198f, 1383.84f, 123.8455f;
					
					case 5:
						return 1328.659f, 1255.887f, 104.7663f;
					
					case 6:
						return -509.8177f, 1186.702f, 323.8416f;
					
					case 7:
						return 2739.774f, -700.0862f, 9.7813f;
					
					case 8:
						return 754.2864f, 1196.157f, 325.3212f;
					
					case 9:
						return 1521.29f, 1597.869f, 110.6245f;
					}
				
				default:
			}
			break;
		
		case 8:
			if (func_240())
			{
				switch (iParam1)
				{
					case 0:
						return -638.0535f, 6068.018f, 7.2136f;
					
					case 1:
						return 1590.245f, 3900.821f, 31.0911f;
					
					case 2:
						return 1776.08f, 4598.296f, 36.7055f;
					
					case 3:
						return 1647.628f, 3643.323f, 33.988f;
					
					case 4:
						return 879.3905f, 2339.73f, 50.6724f;
					
					case 5:
						return 2685.232f, 2801.472f, 39.2155f;
					
					case 6:
						return -468.9186f, 2971.368f, 25.0515f;
					
					case 7:
						return 1407.428f, 2589.375f, 35.8217f;
					
					case 8:
						return 2680.009f, 3923.716f, 42.1682f;
					
					case 9:
						return 1867.408f, 6407.559f, 45.5299f;
					
					case 10:
						return -2328.752f, 4270.824f, 27.5226f;
					
					case 11:
						return 2456.084f, 1544.487f, 34.0485f;
					
					case 12:
						return 2788.27f, 1408.801f, 23.4383f;
					
					case 13:
						return -3185.082f, 1093.102f, 19.8556f;
					
					case 14:
						return 146.1344f, 2280.448f, 93.797f;
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return -614.9329f, -2296.941f, 12.8282f;
					
					case 1:
						return -1189.073f, -2789.581f, 12.9444f;
					
					case 2:
						return 271.6261f, -3159.529f, 4.7903f;
					
					case 3:
						return 548.4889f, -2616.263f, 4.704f;
					
					case 4:
						return 1251.333f, -1125.005f, 37.4375f;
					
					case 5:
						return 1072.572f, -2444.221f, 28.2642f;
					
					case 6:
						return -208.6263f, -1091.39f, 20.6892f;
					
					case 7:
						return 108.6183f, -445.3468f, 40.1308f;
					
					case 8:
						return 2550.552f, 442.1817f, 107.4511f;
					
					case 9:
						return -457.7061f, -969.7913f, 22.5454f;
					
					case 10:
						return 76.9457f, -1631.095f, 28.3918f;
					
					case 11:
						return -291.7224f, -1000.2f, 29.3598f;
					
					case 12:
						return 252.3284f, 378.7073f, 104.5296f;
					
					case 13:
						return 29.3364f, -1247.976f, 28.481f;
					
					case 14:
						return -457.6662f, 374.5519f, 103.7792f;
					}
				
				default:
			}
			break;
		
		case 2:
			if (func_240())
			{
				switch (iParam1)
				{
					case 0:
						return -80.1467f, 6508.823f, 40.3666f;
					
					case 1:
						return 3926.47f, 4390.782f, 15.58f;
					
					case 2:
						return -250.693f, 2205.233f, 128.8621f;
					
					case 3:
						return -1175.921f, 4926.93f, 222.3389f;
					
					case 4:
						return 465.6409f, 5593.752f, 779.9684f;
					
					case 5:
						return 2824.871f, 5967.99f, 350.1f;
					
					case 6:
						return -2590.594f, 1883.714f, 170.4922f;
					
					case 7:
						return 589.7837f, 2763.997f, 50.1451f;
					
					case 8:
						return 2685.087f, 3494.802f, 60.5256f;
					
					case 9:
						return -449.2787f, 1588f, 358.0149f;
					
					case 10:
						return 2269.357f, 4844.731f, 39.6032f;
					
					case 11:
						return 1428.51f, 6345.937f, 22.9855f;
					
					case 12:
						return 2100.848f, 2333.275f, 93.2859f;
					
					case 13:
						return 1524.853f, 3785.204f, 40.7334f;
					
					case 14:
						return -2184.298f, 4292.692f, 52.8159f;
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 774.4489f, -144.0929f, 87.5073f;
					
					case 1:
						return 798.255f, -2980.762f, 16.7776f;
					
					case 2:
						return -909.593f, -1511.588f, 16.977f;
					
					case 3:
						return -1394.971f, 275.6436f, 88.8643f;
					
					case 4:
						return 2803.231f, 1454.991f, 33.3519f;
					
					case 5:
						return -149.7433f, 935.2665f, 234.6255f;
					
					case 6:
						return -222.1787f, -826.9172f, 125.7931f;
					
					case 7:
						return 788.4523f, -1641.459f, 43.147f;
					
					case 8:
						return -1587.14f, -431.0891f, 55.7093f;
					
					case 9:
						return -2823.246f, 1424.177f, 99.8196f;
					
					case 10:
						return -395.6497f, -343.5754f, 69.9681f;
					
					case 11:
						return -724.5102f, -2269.539f, 87.7333f;
					
					case 12:
						return 335.9479f, -1640.768f, 97.496f;
					
					case 13:
						return -2207.713f, 263.8248f, 197.1092f;
					
					case 14:
						return 948.6151f, -1023.122f, 53.0681f;
					}
				
				default:
			}
			break;
		
		case 1:
			if (func_240())
			{
				switch (iParam1)
				{
					case 0:
						return 2428.537f, 6901.111f, 0.7501f;
					
					case 1:
						return 3288.947f, 6714.458f, 0.5623f;
					
					case 2:
						return 4061.476f, 4959.737f, 0.5624f;
					
					case 3:
						return 4255.996f, 2967.701f, 1.3125f;
					
					case 4:
						return -2899.014f, 2519.655f, 0.5625f;
					
					case 5:
						return -2567.543f, 5183.713f, -0.1875f;
					
					case 6:
						return -1897.267f, 5848.36f, 0.5625f;
					
					case 7:
						return 4.7105f, 7951.589f, -0.1875f;
					
					case 8:
						return 825.3421f, 3897.087f, 29.8125f;
					
					case 9:
						return 3401.506f, 1606.796f, 0.75f;
					
					case 10:
						return -3719.255f, 3505.435f, 0.375f;
					
					case 11:
						return -1259.53f, 7343.129f, 0f;
					
					case 12:
						return 1213.939f, 7390.842f, -1.125f;
					
					case 13:
						return 4440.604f, 6104.917f, 2.25f;
					
					case 14:
						return 2044.866f, 4256.562f, 30.1875f;
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 3462.11f, 888.5763f, -0.1875f;
					
					case 1:
						return 3842.867f, -171.3662f, -0.375f;
					
					case 2:
						return 1485.534f, -3655.866f, 0.5625f;
					
					case 3:
						return 409.4799f, -3597.158f, 0.75f;
					
					case 4:
						return -2471.547f, -1730.531f, 0.5625f;
					
					case 5:
						return -2373.452f, -3071.066f, 0.1875f;
					
					case 6:
						return -1920.758f, -3517.675f, -0.75f;
					
					case 7:
						return 3055.372f, -2303.625f, 1.6875f;
					
					case 8:
						return -3749.483f, 988.1151f, 0.5625f;
					
					case 9:
						return 1970.962f, 179.8923f, 160.339f;
					
					case 10:
						return -194.8751f, -3019.768f, 0f;
					
					case 11:
						return -3413.744f, 536.8126f, 0f;
					
					case 12:
						return -2713.849f, -922.2804f, 0f;
					
					case 13:
						return 4061.402f, -1351.123f, 0.1875f;
					
					case 14:
						return 2745.643f, -3239.974f, 0f;
					}
				
				default:
			}
			break;
		
		case 9:
			if (func_240())
			{
				switch (Local_701.f_679)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 808.2712f, 4046.062f, 30.1889f;
							
							case 1:
								return -447.0919f, 4439.109f, 30.0048f;
							
							case 2:
								return -1598.308f, 4390.777f, -0.008f;
							
							case 3:
								return -2514.802f, 4179.379f, -0.048f;
							
							case 4:
								return -3341.245f, 3490.262f, 0.0191f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return -2121.988f, 5038.509f, 0.5625f;
							
							case 1:
								return -1739.635f, 5151.188f, 0.3751f;
							
							case 2:
								return -1509.469f, 5725.465f, 0.1875f;
							
							case 3:
								return -960.0118f, 6100.051f, -0.1875f;
							
							case 4:
								return -425.1715f, 6702.211f, 0f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 606.3173f, 7342.851f, -0.1875f;
							
							case 1:
								return -169.2163f, 7762.534f, 1.125f;
							
							case 2:
								return -417.715f, 7142.086f, 0.1875f;
							
							case 3:
								return -716.0834f, 6112.288f, -0.1875f;
							
							case 4:
								return -832.1136f, 7014.856f, 0f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 3967.26f, 4029.916f, 0f;
							
							case 1:
								return 4342.264f, 3667.88f, -0.1875f;
							
							case 2:
								return 3665.222f, 3008.768f, -0.1875f;
							
							case 3:
								return 3709.616f, 2254.444f, 0.1875f;
							
							case 4:
								return 3627.198f, 1661.066f, -0.1875f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam1)
						{
							case 0:
								return 4066.172f, 5057.345f, 0f;
							
							case 1:
								return 3464.713f, 6143.588f, 0f;
							
							case 2:
								return 3084.776f, 7029.688f, -0.1875f;
							
							case 3:
								return 2188.736f, 7499.77f, 0.2849f;
							
							case 4:
								return 1631.862f, 6822.671f, 0f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_701.f_679)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 3572.305f, -511.0375f, -0.1875f;
							
							case 1:
								return 2941.034f, 175.8028f, 0f;
							
							case 2:
								return 2944.336f, 798.1301f, 0.1874f;
							
							case 3:
								return 3232.803f, 1592.632f, 0.5625f;
							
							case 4:
								return 3120.326f, 2173.747f, 0.3476f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 2990.769f, -1106.801f, 0.1875f;
							
							case 1:
								return 3297.643f, -1959.072f, 0f;
							
							case 2:
								return 2504.655f, -2305.042f, 1.3125f;
							
							case 3:
								return 1742.406f, -2807.717f, -0.375f;
							
							case 4:
								return 824.868f, -2654.722f, 0.375f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 1347.839f, -3066.149f, -0.5625f;
							
							case 1:
								return 675.9639f, -3253.626f, 0f;
							
							case 2:
								return 251.1761f, -3645.486f, -0.5625f;
							
							case 3:
								return -220.8856f, -2769.213f, -0.5625f;
							
							case 4:
								return -540.3663f, -2587.373f, 0.1875f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return -1727.458f, -1781.412f, -0.1875f;
							
							case 1:
								return -2155.494f, -938.1028f, 0f;
							
							case 2:
								return -3068f, -484.3531f, 0f;
							
							case 3:
								return -3755.94f, 404.5808f, 0.9375f;
							
							case 4:
								return -3355.572f, 1176.286f, 0.5625f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam1)
						{
							case 0:
								return -3107.476f, 1547.784f, -0.375f;
							
							case 1:
								return -2527.289f, 2562.024f, -0.1875f;
							
							case 2:
								return -3180.505f, 3368.533f, 0f;
							
							case 3:
								return -2528.755f, 4265.934f, -0.3749f;
							
							case 4:
								return -2108.517f, 5217.124f, 0.375f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 0:
			if (func_240())
			{
				switch (iParam1)
				{
					case 0:
						return 1216.809f, 2390.04f, 64.5991f;
					
					case 1:
						return 2825.74f, 1672.779f, 23.6868f;
					
					case 2:
						return 1558.718f, 3795.329f, 33.1075f;
					
					case 3:
						return -2173.835f, 4271.747f, 47.9632f;
					
					case 4:
						return -2025.131f, 3386.134f, 30.1418f;
					
					case 5:
						return 2734.536f, 2781.955f, 34.9415f;
					
					case 6:
						return 1217.945f, 1842.546f, 78.017f;
					
					case 7:
						return 1424.351f, 4379.483f, 43.1031f;
					
					case 8:
						return 1578.152f, 2200.283f, 78.118f;
					
					case 9:
						return 2385.328f, 3149.508f, 46.1485f;
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 1250.311f, -1912.972f, 37.5002f;
					
					case 1:
						return -642.7444f, -1726.98f, 23.4018f;
					
					case 2:
						return -859.8107f, -2411.807f, 12.9444f;
					
					case 3:
						return -1180.418f, -742.4754f, 18.931f;
					
					case 4:
						return -420.3352f, -328.6894f, 32.1081f;
					
					case 5:
						return 178.907f, -1481.625f, 28.1418f;
					
					case 6:
						return 387.9558f, 61.9439f, 96.9779f;
					
					case 7:
						return 1374.406f, -761.5962f, 66.2718f;
					
					case 8:
						return 2555.366f, 406.5885f, 107.455f;
					
					case 9:
						return -3181.745f, 1096.728f, 19.8407f;
					}
				
				default:
			}
			break;
		
		default:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return -1143.777f, -2223.181f, 12.1958f;
						
						case 1:
							return -815.8469f, -771.4702f, 20.0395f;
						
						case 2:
							return -247.3628f, -252.8104f, 35.519f;
						
						case 3:
							return -20.1711f, -196.9198f, 51.3703f;
						
						case 4:
							return -1206.244f, 332.5545f, 69.9894f;
						
						case 5:
							return -737.7712f, -271.9272f, 35.9486f;
						
						case 6:
							return -10.6554f, -1032.781f, 27.9804f;
						
						case 7:
							return 203.926f, -1469.377f, 28.1446f;
						
						case 8:
							return 1242.214f, -3156.207f, 4.5283f;
						
						case 9:
							return -3157.448f, 1127.872f, 19.844f;
						
						case 10:
							return -1805.809f, -406.731f, 43.6066f;
						
						case 11:
							return -2091.808f, -295.2459f, 12.0469f;
						
						case 12:
							return 1499.64f, -1888.19f, 70.8845f;
						
						case 13:
							return 521.9511f, -2731.876f, 5.0571f;
						
						case 14:
							return 620.4022f, 193.6013f, 97.381f;
						
						case 15:
							return -2190.606f, -414.4555f, 12.1441f;
						
						case 16:
							return 2528.09f, -311.8917f, 91.9929f;
						
						case 17:
							return 1475.093f, 1140.771f, 113.3343f;
						
						case 18:
							return -164.1015f, 976.5763f, 234.9009f;
						
						case 19:
							return -125.636f, -2244.66f, 6.8117f;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							return -1133.386f, -2229.273f, 12.1957f;
						
						case 1:
							return -834.9979f, -771.7531f, 20.0186f;
						
						case 2:
							return -242.6335f, -240.8987f, 35.519f;
						
						case 3:
							return 1.871f, -202.816f, 51.742f;
						
						case 4:
							return -1208.844f, 340.3609f, 70.0006f;
						
						case 5:
							return -727.7335f, -287.528f, 35.9482f;
						
						case 6:
							return -28.01f, -1030.556f, 27.8435f;
						
						case 7:
							return 190.617f, -1454.129f, 28.1416f;
						
						case 8:
							return 1242.088f, -3148.675f, 4.5282f;
						
						case 9:
							return -3170.323f, 1126.011f, 19.9681f;
						
						case 10:
							return -1792.41f, -394.6852f, 44.0166f;
						
						case 11:
							return -2104.064f, -294.0901f, 12.0469f;
						
						case 12:
							return 1458.824f, -1937.281f, 70.3057f;
						
						case 13:
							return 529.5776f, -2736.348f, 5.0569f;
						
						case 14:
							return 602.5372f, 147.507f, 97.0363f;
						
						case 15:
							return -2189.286f, -384.7161f, 12.3121f;
						
						case 16:
							return 2490.019f, -332.8641f, 91.9927f;
						
						case 17:
							return 1481.655f, 1140.735f, 113.3343f;
						
						case 18:
							return -130.6895f, 1005.831f, 234.732f;
						
						case 19:
							return -125.1937f, -2249.124f, 6.8117f;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							return -1190.658f, -2196.359f, 12.1951f;
						
						case 1:
							return -810.0179f, -747.1166f, 22.3082f;
						
						case 2:
							return -243.9944f, -218.211f, 35.519f;
						
						case 3:
							return -47.888f, -188.9245f, 51.1469f;
						
						case 4:
							return -1194.665f, 323.0352f, 69.7224f;
						
						case 5:
							return -703.6254f, -299.056f, 35.6984f;
						
						case 6:
							return -20.652f, -1017.787f, 27.9166f;
						
						case 7:
							return 182.8745f, -1485.711f, 28.1416f;
						
						case 8:
							return 1242.467f, -3142.34f, 4.5282f;
						
						case 9:
							return -3183.809f, 1088.898f, 19.8407f;
						
						case 10:
							return -1784.578f, -378.8281f, 43.9675f;
						
						case 11:
							return -2077.491f, -336.0633f, 12.1576f;
						
						case 12:
							return 1484.176f, -1923.298f, 70.2404f;
						
						case 13:
							return 492.0316f, -2718.325f, 5.0576f;
						
						case 14:
							return 611.6172f, 168.9255f, 97.2794f;
						
						case 15:
							return -2205.85f, -370.1107f, 12.283f;
						
						case 16:
							return 2527.898f, -307.077f, 91.9929f;
						
						case 17:
							return 1497.473f, 1130.526f, 113.3343f;
						
						case 18:
							return -105.4721f, 1004.142f, 234.7601f;
						
						case 19:
							return -125.1227f, -2253.726f, 6.8117f;
						
						default:
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_408()
{
	if (func_240())
	{
		switch (Local_701.f_981)
		{
			case 0:
				return 1359.997f, 3618.942f, 33.8907f;
			
			case 1:
				return -111.2065f, 2804.245f, 52.1193f;
			
			case 2:
				return 2647.59f, 4256.437f, 43.7722f;
			
			default:
		}
	}
	else
	{
		switch (Local_701.f_981)
		{
			case 0:
				return -3180.438f, 1027.737f, 19.8186f;
			
			case 1:
				return 810.8981f, -1665.973f, 28.3998f;
			
			case 2:
				return -828.5842f, -1263.499f, 4.0004f;
			}
		
		default:
	}
	return -1193.289f, -2245.799f, 12.9446f;
}

int func_409()
{
	bVar8 = true;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		Var0 = { func_34(Local_701.f_110) };
	}
	if (!func_448())
	{
		func_48(2);
		return 1;
	}
	if (!func_62(2))
	{
		if (func_448() || func_447(Var0, &Var3, &fVar6, &uVar7, 1, 1, 1))
		{
			iVar9 = 0;
			while (iVar9 < func_72())
			{
				if (func_362())
				{
					iVar10 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4);
				}
				if (func_252(func_445(iVar9, iVar10)) && !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_64[iVar9]))
				{
					if (func_448())
					{
						Var3 = { func_444(iVar9) };
						if (func_74())
						{
							iVar11 = 0;
							iVar12 = 0;
							fVar6 = -1f;
							iVar12 = 0;
							while (iVar12 < 32)
							{
								if (GAMEPLAY::IS_BIT_SET(Local_701.f_144, iVar12) && fVar6 == -1f)
								{
									if (iVar11 == iVar9)
									{
										fVar6 = func_442(iVar12);
									}
									else
									{
										iVar11++;
									}
								}
								iVar12++;
							}
						}
						else
						{
							fVar6 = func_442(iVar9);
						}
					}
					if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(func_410(190, -1, 1, -1, -1, -1) + 1))
					{
						if (func_348(&(Local_701.f_64[iVar9]), func_445(iVar9, iVar10), Var3, fVar6, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							GAMEPLAY::CLEAR_AREA(Var3, 5f, 1, 0, 0, 1);
							if (VEHICLE::IS_THIS_MODEL_A_BOAT(func_445(iVar9, iVar10)))
							{
								VEHICLE::SET_BOAT_ANCHOR(NETWORK::NET_TO_VEH(Local_701.f_64[iVar9]), 1);
							}
							VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_701.f_64[iVar9]), 0);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_ENT(Local_701.f_64[iVar9]), "MPBitset"))
								{
									iVar13 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_ENT(Local_701.f_64[iVar9]), "MPBitset");
								}
								GAMEPLAY::SET_BIT(&iVar13, 10);
								GAMEPLAY::SET_BIT(&iVar13, 11);
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_ENT(Local_701.f_64[iVar9]), "MPBitset", iVar13);
							}
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_ENT(Local_701.f_64[iVar9]), "Not_Allow_As_Saved_Veh", 1);
							}
							unk_0x1DDA078D12879EEE(NETWORK::NET_TO_VEH(Local_701.f_64[iVar9]), 0, 0);
							if (func_74())
							{
								VEHICLE::SET_VEHICLE_DOOR_LATCHED(NETWORK::NET_TO_VEH(Local_701.f_64[iVar9]), 5, 0, 0, 1);
								unk_0x3B458DDB57038F08(NETWORK::NET_TO_VEH(Local_701.f_64[iVar9]), 5, 0);
								VEHICLE::SET_VEHICLE_DOOR_OPEN(NETWORK::NET_TO_VEH(Local_701.f_64[iVar9]), 5, 0, 1);
								VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(NETWORK::NET_TO_VEH(Local_701.f_64[iVar9]), 5, 0);
							}
							VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_ENT(Local_701.f_64[iVar9]), 0, 0);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_701.f_64[iVar9]), 0);
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_701.f_64[iVar9]), 1);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_ENT(Local_701.f_64[iVar9]), 0);
							VEHICLE::_0x9737A37136F07E75(NETWORK::NET_TO_VEH(Local_701.f_64[iVar9]), 1);
							VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_701.f_64[iVar9]), 1);
							VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_701.f_64[iVar9]), 0);
							func_346(NETWORK::NET_TO_VEH(Local_701.f_64[iVar9]));
						}
					}
				}
				iVar9++;
			}
			iVar9 = 0;
			while (iVar9 < func_72())
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_64[iVar9]))
				{
					bVar8 = false;
				}
				iVar9++;
			}
		}
	}
	if (bVar8)
	{
		func_48(2);
	}
	return func_62(2);
}

int func_410(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			return func_441(iParam1);
		
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
			return func_438(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_436(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_432(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
		
		case 233:
			return func_426(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_425(iParam1, iParam3);
		
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
			return func_424(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_423(iParam1);
		
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
			return func_419(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_415(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_411(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_411(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_414(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_413(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_412(func_268(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_369(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_368(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_412(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_413(int iParam0, int iParam1)
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

int func_414(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_415(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
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
		iVar0 = (iVar0 + func_418(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_417(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_416(func_268(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_374(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_373(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_416(int iParam0, int iParam1, int iParam2)
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
			if (iParam2 != func_59())
			{
				if (func_264(iParam2, 1))
				{
					Var0 = { func_263(iParam2) };
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

int func_417(int iParam0, int iParam1)
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

int func_418(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_419(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
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
		if (func_269(iParam0))
		{
			iVar0 = (iVar0 + func_267(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_422(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_421(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_420(func_268(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_379(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_378(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_420(int iParam0, int iParam1)
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

int func_421(int iParam0, int iParam1)
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

int func_422(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_423(int iParam0)
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

int func_424(int iParam0, int iParam1, int iParam2)
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
	if (func_273(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_425(int iParam0, int iParam1)
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
	if ((func_282(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_276(iParam0, func_280() + 1));
	}
	return iVar0;
}

int func_426(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		if (func_289(iParam0))
		{
			if (iParam3 != func_59())
			{
				iVar0 = (iVar0 + func_286(iParam0, func_268(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_59())
		{
			iVar0 = (iVar0 + func_429(iParam0, func_268(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_428(0, iParam1) != -1)
		{
			if (iParam3 != func_59())
			{
				iVar0 = (iVar0 + func_427(func_268(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_389(iParam0))
		{
			iVar0 = (iVar0 + func_388(iParam0));
		}
	}
	return iVar0;
}

int func_427(var uParam0, int iParam1)
{
	return 2;
}

int func_428(int iParam0, int iParam1)
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

int func_429(int iParam0, int iParam1)
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
			uVar0 = func_430(5326, -1, 0);
			if (GAMEPLAY::IS_BIT_SET(uVar0, 7))
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

int func_430(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_431(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_431(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_58();
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

int func_432(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		if (func_301(iParam0))
		{
			if (iParam3 != func_59())
			{
				iVar0 = (iVar0 + func_293(iParam0, func_268(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_59())
		{
			iVar0 = (iVar0 + func_435(iParam0, func_268(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_434(0, iParam1) != -1)
		{
			if (iParam3 != func_59())
			{
				iVar0 = (iVar0 + func_433(func_268(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_394(iParam0))
		{
			iVar0 = (iVar0 + func_393(iParam0));
		}
	}
	return iVar0;
}

int func_433(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_296(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_296(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_296(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_296(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_296(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_296(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_296(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_296(iParam1))
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

int func_434(int iParam0, int iParam1)
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

int func_435(int iParam0, int iParam1)
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

int func_436(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_305(iParam0, func_280() + 1, -1, iParam2) == 1)
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
		if (func_307(iParam0))
		{
			iVar0 = (iVar0 + func_305(iParam0, func_280() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_437(iParam0, func_280() + 1));
	}
	if (!bParam3)
	{
		if (func_399(iParam0))
		{
			iVar0 = (iVar0 + func_398(iParam0));
		}
	}
	return iVar0;
}

int func_437(int iParam0, int iParam1)
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

int func_438(int iParam0, int iParam1, int iParam2)
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
	iVar0 = (iVar0 + func_440(iParam0, func_280() + 1, iParam2));
	iVar0 = (iVar0 + func_439(iParam0));
	return iVar0;
}

int func_439(int iParam0)
{
	if (func_403(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_440(int iParam0, var uParam1, int iParam2)
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

int func_441(int iParam0)
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

float func_442(int iParam0)
{
	switch (func_16())
	{
		case 8:
			if (func_240())
			{
				switch (iParam0)
				{
					case 0:
						return 326.1744f;
					
					case 1:
						return 64.0816f;
					
					case 2:
						return 3.6694f;
					
					case 3:
						return 289.179f;
					
					case 4:
						return 133.1368f;
					
					case 5:
						return 182.2973f;
					
					case 6:
						return 73.2189f;
					
					case 7:
						return 280.3667f;
					
					case 8:
						return 191.965f;
					
					case 9:
						return 284.7794f;
					
					case 10:
						return 123.9193f;
					
					case 11:
						return 90.1645f;
					
					case 12:
						return 267.8796f;
					
					case 13:
						return 157.3811f;
					
					case 14:
						return 251.7047f;
					
					default:
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return 319.4816f;
					
					case 1:
						return 150.6088f;
					
					case 2:
						return 163.4438f;
					
					case 3:
						return 182.3829f;
					
					case 4:
						return 303.5831f;
					
					case 5:
						return 268.3745f;
					
					case 6:
						return 345.4465f;
					
					case 7:
						return 160.8462f;
					
					case 8:
						return 134.0958f;
					
					case 9:
						return 271.4576f;
					
					case 10:
						return 120.1265f;
					
					case 11:
						return 70.193f;
					
					case 12:
						return 250.75f;
					
					case 13:
						return 78.6663f;
					
					case 14:
						return 179.7139f;
					}
				
				default:
			}
			break;
		
		case 6:
			switch (Local_701.f_679)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					switch (Local_701.f_981)
					{
						case 0:
							return 219.7995f;
						
						case 1:
							return 139.5962f;
						
						case 2:
							return 95.3967f;
						
						default:
					}
					break;
				
				case 4:
				case 5:
				case 6:
					switch (Local_701.f_981)
					{
						case 0:
							return 328.1974f;
						
						case 1:
							return 349.9958f;
						
						case 2:
							return 349.7461f;
						
						default:
					}
					break;
				
				case 7:
				case 8:
				case 9:
					switch (Local_701.f_981)
					{
						case 0:
							return 119.3972f;
						
						case 1:
							return 144.5977f;
						
						case 2:
							return 128.1968f;
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 218.1963f;
				
				case 1:
					return 207.9963f;
				
				case 2:
					return 142.7958f;
				
				case 3:
					return 32.1944f;
				
				case 4:
					return 164.5931f;
				
				case 5:
					return 46.3913f;
				
				case 6:
					return 19.9906f;
				
				case 7:
					return 61.7906f;
				
				case 8:
					return 278.1903f;
				
				case 9:
					return 338.1901f;
				
				case 10:
					return 168.5894f;
				
				case 11:
					return 324.4387f;
				
				case 12:
					return 143.2384f;
				
				case 13:
					return 213.0383f;
				
				case 14:
					return 38.4376f;
				
				case 15:
					return 186.6374f;
				
				case 16:
					return 334.4369f;
				
				case 17:
					return 29.6368f;
				
				case 18:
					return 50.6368f;
				
				case 19:
					return 213.2365f;
				
				default:
			}
			break;
		
		case 9:
			switch (Local_701.f_679)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 243.7813f;
						
						case 1:
							return 342.9691f;
						
						case 2:
							return 26.9593f;
						
						case 3:
							return 55.5273f;
						
						case 4:
							return 300.052f;
						
						case 5:
							return 329.7003f;
						
						case 6:
							return 328.7108f;
						
						case 7:
							return 314.9074f;
						
						case 8:
							return 144.371f;
						
						case 9:
							return 309.1066f;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam0)
					{
						case 0:
							return 85.3844f;
						
						case 1:
							return 81.5624f;
						
						case 2:
							return 81.8903f;
						
						case 3:
							return 103.037f;
						
						case 4:
							return 71.677f;
						
						case 5:
							return 25.1165f;
						
						case 6:
							return 84.1133f;
						
						case 7:
							return 162.2021f;
						
						case 8:
							return 95.6473f;
						
						case 9:
							return 91.1218f;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam0)
					{
						case 0:
							return 102.5394f;
						
						case 1:
							return 82.6778f;
						
						case 2:
							return 84.7616f;
						
						case 3:
							return 158.4868f;
						
						case 4:
							return 26.6431f;
						
						case 5:
							return 345.8311f;
						
						case 6:
							return 282.2448f;
						
						case 7:
							return 339.7124f;
						
						case 8:
							return 40.2085f;
						
						case 9:
							return 315.6408f;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam0)
					{
						case 0:
							return 276.2263f;
						
						case 1:
							return 67.2248f;
						
						case 2:
							return 343.5057f;
						
						case 3:
							return 265.3102f;
						
						case 4:
							return 9.3989f;
						
						case 5:
							return 319.7345f;
						
						case 6:
							return 315.535f;
						
						case 7:
							return 17.7265f;
						
						case 8:
							return 298.2788f;
						
						case 9:
							return 299.6168f;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam0)
					{
						case 0:
							return 266.1005f;
						
						case 1:
							return 29.6892f;
						
						case 2:
							return 6.8292f;
						
						case 3:
							return 38.3601f;
						
						case 4:
							return 174.9427f;
						
						case 5:
							return 139.6967f;
						
						case 6:
							return 125.0149f;
						
						case 7:
							return 137.8794f;
						
						case 8:
							return 44.445f;
						
						case 9:
							return 316.8491f;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam0)
					{
						case 0:
							return 215.4694f;
						
						case 1:
							return 134.7844f;
						
						case 2:
							return 344.4861f;
						
						case 3:
							return 212.165f;
						
						case 4:
							return 180.2893f;
						
						case 5:
							return 147.6595f;
						
						case 6:
							return 163.6596f;
						
						case 7:
							return 230.3922f;
						
						case 8:
							return 157.3126f;
						
						case 9:
							return 228.4206f;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam0)
					{
						case 0:
							return 170.3571f;
						
						case 1:
							return 126.5275f;
						
						case 2:
							return 165.452f;
						
						case 3:
							return 239.1617f;
						
						case 4:
							return 144.2343f;
						
						case 5:
							return 116.3512f;
						
						case 6:
							return 211.8666f;
						
						case 7:
							return 87.0125f;
						
						case 8:
							return 72.9686f;
						
						case 9:
							return 54.7701f;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam0)
					{
						case 0:
							return 189.9574f;
						
						case 1:
							return 196.9416f;
						
						case 2:
							return 108.9773f;
						
						case 3:
							return 85.5548f;
						
						case 4:
							return 36.8923f;
						
						case 5:
							return 115.7591f;
						
						case 6:
							return 3.8811f;
						
						case 7:
							return 103.9374f;
						
						case 8:
							return 100.9714f;
						
						case 9:
							return 322.1032f;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam0)
					{
						case 0:
							return 130.2432f;
						
						case 1:
							return 97.4911f;
						
						case 2:
							return 65.9888f;
						
						case 3:
							return 334.2624f;
						
						case 4:
							return 45.7468f;
						
						case 5:
							return 112.9685f;
						
						case 6:
							return 354.8338f;
						
						case 7:
							return 88.0793f;
						
						case 8:
							return 309.572f;
						
						case 9:
							return 1.5184f;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam0)
					{
						case 0:
							return 182.8093f;
						
						case 1:
							return 299.7529f;
						
						case 2:
							return 14.2047f;
						
						case 3:
							return 344.0418f;
						
						case 4:
							return 47.0222f;
						
						case 5:
							return 1.9719f;
						
						case 6:
							return 132.8726f;
						
						case 7:
							return 77.8579f;
						
						case 8:
							return 11.4493f;
						
						case 9:
							return 153.1859f;
						
						default:
					}
					break;
			}
			break;
	}
	if (func_443())
	{
		return 100.5717f;
	}
	return 114.2482f;
}

int func_443()
{
	switch (func_16())
	{
		case 2:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

Vector3 func_444(int iParam0)
{
	switch (func_16())
	{
		case 8:
		case 1:
			iVar1 = 0;
			while (iVar1 < 32)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_701.f_144, iVar1))
				{
					if (iVar0 == iParam0)
					{
						return func_407(func_16(), iVar1, -1, -1, 0, 0);
					}
					else
					{
						iVar0++;
					}
				}
				iVar1++;
			}
			break;
		
		case 6:
			switch (Local_701.f_679)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					switch (Local_701.f_981)
					{
						case 0:
							return 436.6976f, 3549.657f, 32.2386f;
						
						case 1:
							return -105.0853f, 2796.521f, 52.3561f;
						
						case 2:
							return 2644.673f, 4252.409f, 43.7828f;
						
						default:
					}
					break;
				
				case 4:
				case 5:
				case 6:
					switch (Local_701.f_981)
					{
						case 0:
							return -55.6317f, -2237.486f, 6.8116f;
						
						case 1:
							return 793.4781f, -1598.91f, 30.2601f;
						
						case 2:
							return -826.1995f, -1263.957f, 4.0004f;
						
						default:
					}
					break;
				
				case 7:
				case 8:
				case 9:
					switch (Local_701.f_981)
					{
						case 0:
							return -3195.318f, 947.9199f, 15.6207f;
						
						case 1:
							return 1303.046f, 1446.051f, 98.3667f;
						
						case 2:
							return 260.1804f, 894.4424f, 208.2057f;
						
						default:
					}
					break;
			}
			break;
		
		case 9:
			return func_407(9, iParam0, Local_701.f_679, iParam0, 0, 0);
			break;
		
		case 3:
			return -1193.289f, -2245.799f, 12.9446f;
		
		case 4:
			return -1193.289f, -2245.799f, 12.9446f;
		
		case 5:
			return -1193.289f, -2245.799f, 12.9446f;
		
		case 7:
			return -1193.289f, -2245.799f, 12.9446f;
	}
	return -1193.289f, -2245.799f, 12.9446f;
}

int func_445(int iParam0, int iParam1)
{
	switch (func_16())
	{
		case 1:
			return func_446(iParam1);
		
		case 8:
			return 2053223216;
		
		case 9:
			switch (Local_701.f_679)
			{
				case 1:
					if (((iParam0 == 4 || iParam0 == 6) || iParam0 == 7) || iParam0 == 8)
					{
						return -1207771834;
					}
					break;
				
				case 2:
					if ((iParam0 == 3 || iParam0 == 6) || iParam0 == 7)
					{
						return -1207771834;
					}
					break;
				
				case 3:
					if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 7)
					{
						return -1207771834;
					}
					break;
				
				case 4:
					if (iParam0 == 7)
					{
						return -1207771834;
					}
					break;
				
				case 5:
					if (iParam0 == 1)
					{
						return -1207771834;
					}
					break;
				
				case 6:
					if (iParam0 == 2)
					{
						return -1207771834;
					}
					break;
				
				case 8:
					if (iParam0 == 4)
					{
						return -1207771834;
					}
					break;
			}
			return -282946103;
		
		case 6:
			switch (Local_701.f_981)
			{
				case 0:
					return 1269098716;
				
				case 1:
					if (Local_701.f_679 == 0)
					{
						return -1485523546;
					}
					return -1255452397;
				
				case 2:
					if (Local_701.f_679 == 2)
					{
						return -808831384;
					}
					return -1122289213;
				
				default:
			}
			break;
	}
	return -1745203402;
}

int func_446(int iParam0)
{
	if (iParam0 == 0)
	{
		iVar0 = -1043459709;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 509498602;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 290013743;
	}
	else
	{
		iVar0 = -2100640717;
	}
	return iVar0;
}

int func_447(struct<3> Param0, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, bool bParam8)
{
	while (true)
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, iParam6, uParam3, uParam4, uParam5, 1, 1077936128, 0))
		{
			if (func_168(*uParam3, 10f, 1f, 1f, 5f, iParam7, bParam8, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iParam6++;
		iVar0++;
		if (iVar0 > 75)
		{
			*uParam3 = { Param0 };
			return 0;
		}
	}
	return 0;
}

int func_448()
{
	switch (func_16())
	{
		case 1:
		case 8:
		case 9:
			return 1;
		
		default:
	}
	return 0;
}

int func_449()
{
	if (func_62(1))
	{
		return 1;
	}
	if (!func_25())
	{
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (func_450(iVar0))
			{
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(func_13(iVar0)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	func_48(1);
	return 1;
}

int func_450(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_59[iParam0]))
	{
		if (func_458(iParam0, &(Local_701.f_48), &(Local_701.f_51)))
		{
			if (!func_33(Local_701.f_48, 0f, 0f, 0f, 0))
			{
				if (iParam0 == 0 || (iParam0 > 0 && GAMEPLAY::IS_BIT_SET(Local_701.f_46, (iParam0 - 1))))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_701.f_46, iParam0))
					{
						if (func_252(func_457()))
						{
							Var0.f_4 = 1125515264;
							Var0.f_5 = 1;
							Var0.f_6 = 1;
							Var0.f_8 = 1082130432;
							Var0.f_9 = 1176255488;
							Var0.f_10 = 1;
							Var0.f_13 = 1;
							Var0.f_15 = 2;
							Var0.f_22 = 2;
							Var0.f_25 = 1;
							Var0.f_26 = 1;
							Var0.f_29 = 1123024896;
							Var0 = 0f;
							Var0.f_1 = 0;
							Var0.f_4 = 200f;
							Var0.f_5 = 0;
							if (!func_443() && !func_456())
							{
								Var0.f_6 = 1;
							}
							else
							{
								Var0.f_6 = 0;
							}
							Var0.f_12 = 1;
							Var0.f_3 = 1;
							Var30 = { func_454(Local_701.f_48, Local_701.f_51, 20f) };
							if (func_87(Local_701.f_48, Var30, func_457(), 0, &(Local_701.f_28[iParam0]), &(Local_701.f_41[iParam0]), &Var0))
							{
								GAMEPLAY::SET_BIT(&(Local_701.f_46), iParam0);
							}
						}
					}
				}
			}
		}
		if (func_456())
		{
			func_458(iParam0, &(Local_701.f_28[iParam0]), &(Local_701.f_41[iParam0]));
		}
		if (func_252(func_457()))
		{
			if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(func_410(190, -1, 1, -1, -1, -1)))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_701.f_46, iParam0))
				{
					if (func_348(&(Local_701.f_59[iParam0]), func_457(), Local_701.f_28[iParam0], Local_701.f_41[iParam0], 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_701.f_59[iParam0]), 1, 1);
						GAMEPLAY::CLEAR_AREA_OF_VEHICLES(Local_701.f_28[iParam0], 20f, 0, 0, 0, 0, 0, 0);
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
						{
							if (DECORATOR::DECOR_EXIST_ON(func_13(iParam0), "MPBitset"))
							{
								iVar33 = DECORATOR::DECOR_GET_INT(func_13(iParam0), "MPBitset");
							}
							GAMEPLAY::SET_BIT(&iVar33, 10);
							GAMEPLAY::SET_BIT(&iVar33, 11);
							DECORATOR::DECOR_SET_INT(func_13(iParam0), "MPBitset", iVar33);
						}
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
						{
							DECORATOR::DECOR_SET_INT(func_13(iParam0), "Not_Allow_As_Saved_Veh", 1);
						}
						if (!func_6())
						{
							func_451(func_13(iParam0), iParam0, 1623637790, 0, 0);
						}
						if (func_456())
						{
							if (unk_0x24F4121D07579880(func_13(iParam0)))
							{
								VEHICLE::SET_BOAT_ANCHOR(func_13(iParam0), 1);
							}
							VEHICLE::SET_VEHICLE_COLOURS(func_13(iParam0), 12, 12);
							VEHICLE::SET_VEHICLE_EXTRA_COLOURS(func_13(iParam0), 12, 0);
						}
						if (func_443())
						{
							ENTITY::SET_ENTITY_MAX_HEALTH(func_13(iParam0), Global_262145.f_15109);
							ENTITY::SET_ENTITY_HEALTH(func_13(iParam0), Global_262145.f_15109, 0);
							VEHICLE::SET_VEHICLE_CAN_BREAK(func_13(iParam0), 0);
							if (func_362())
							{
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(func_13(iParam0), 0);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(func_13(iParam0), SYSTEM::TO_FLOAT(Global_262145.f_15113));
							VEHICLE::SET_VEHICLE_BODY_HEALTH(func_13(iParam0), SYSTEM::TO_FLOAT(Global_262145.f_15113));
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(func_13(iParam0), SYSTEM::TO_FLOAT(Global_262145.f_15113));
							VEHICLE::SET_VEHICLE_COLOURS(func_13(iParam0), 17, 12);
							VEHICLE::SET_VEHICLE_EXTRA_COLOURS(func_13(iParam0), 1, 156);
							VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(func_13(iParam0), 0);
						}
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(func_13(iParam0), 0, 0);
						VEHICLE::_0x9737A37136F07E75(func_13(iParam0), 1);
						VEHICLE::_0xDBC631F109350B8C(func_13(iParam0), 1);
						VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(func_13(iParam0), 0);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(func_13(iParam0), 0);
						if (!func_443())
						{
							VEHICLE::SET_VEHICLE_STRONG(func_13(iParam0), 1);
						}
						unk_0xBB2333BB87DDD87F(func_13(iParam0), 0);
						unk_0x4E20D2A627011E8E(func_13(iParam0), Global_262145.f_18038);
						ENTITY::SET_ENTITY_INVINCIBLE(func_13(iParam0), 1);
						ENTITY::_SET_ENTITY_REGISTER(func_13(iParam0), 1);
						if (func_19() || (func_17() && Local_701.f_957 != 0))
						{
							VEHICLE::SET_PED_TARGETTABLE_VEHICLE_DESTROY(func_13(iParam0), 2, 2);
							VEHICLE::SET_PED_TARGETTABLE_VEHICLE_DESTROY(func_13(iParam0), 3, 2);
						}
						func_346(func_13(iParam0));
						Local_701.f_48 = { 0f, 0f, 0f };
						Local_701.f_52 = 0;
						return 1;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_451(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandOwner", 3))
	{
		iVar0 = func_54();
		func_453(iParam1, &iVar0);
		DECORATOR::DECOR_SET_INT(iParam0, "ContrabandOwner", iVar0);
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandDeliveryType", 3))
		{
			DECORATOR::DECOR_SET_INT(iParam0, "ContrabandDeliveryType", iParam2);
		}
		func_452(iParam2);
		if (iParam2 == -81613951)
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ExportVehicle", 3))
			{
				iVar1 = iParam3;
				iVar1 = (iVar1 + iParam4);
				DECORATOR::DECOR_SET_INT(iParam0, "ExportVehicle", iVar1);
			}
		}
	}
}

void func_452(int iParam0)
{
	if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_485 != iParam0)
	{
		Global_1628237[PLAYER::PLAYER_ID()].f_11.f_485 = iParam0;
	}
}

void func_453(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 8)
	{
		iVar0 = (24 + iParam0);
		GAMEPLAY::SET_BIT(iParam1, iVar0);
	}
}

Vector3 func_454(struct<3> Param0, float fParam3, float fParam4)
{
	Var0 = { 0f, 1f, 0f };
	func_455(Var0, fParam3);
	Var0.x = (Var0.x * fParam4);
	Var0.y = (Var0.y * fParam4);
	Var0.z = (Var0.z * fParam4);
	Var0 = { Var0 + Param0 };
	return Var0;
}

Vector3 func_455(struct<3> Param0, float fParam3)
{
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.y * fVar3));
	Var0.y = ((Param0.x * fVar3) + (Param0.y * fVar4));
	Var0.z = Param0.z;
	return Var0;
}

int func_456()
{
	switch (func_16())
	{
		case 9:
			return 1;
		
		default:
	}
	return 0;
}

int func_457()
{
	switch (func_16())
	{
		case 3:
			return -1255698084;
		
		case 6:
			return -2140431165;
		
		case 4:
			return -1353081087;
		
		case 8:
			return -2140431165;
		
		case 11:
			return -2140431165;
		
		case 5:
			return 444171386;
		
		case 2:
			return 745926877;
		
		case 9:
			return 509498602;
		
		case 1:
			return -901163259;
		
		case 0:
		case 7:
			if (Local_701.f_957 == 0)
			{
				return -589178377;
			}
			else if (Local_701.f_957 == 1)
			{
				return 296357396;
			}
			return 2112052861;
			break;
	}
	return 833469436;
}

int func_458(int iParam0, var uParam1, var uParam2)
{
	if (func_61())
	{
		if (iParam0 == 0 || (iParam0 > 0 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_59[(iParam0 - 1)])))
		{
			if (!func_171(*uParam1))
			{
				return 1;
			}
			Var0.f_4 = 1125515264;
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0.f_8 = 1082130432;
			Var0.f_9 = 1176255488;
			Var0.f_10 = 1;
			Var0.f_13 = 1;
			Var0.f_15 = 2;
			Var0.f_22 = 2;
			Var0.f_25 = 1;
			Var0.f_26 = 1;
			Var0.f_29 = 1123024896;
			Var0 = 0f;
			Var0.f_1 = 0;
			Var0.f_4 = 200f;
			Var0.f_6 = 1;
			Var0.f_5 = 0;
			Var0.f_12 = 1;
			Var0.f_3 = 1;
			Var33 = { func_358(iParam0, Local_701.f_52, Local_701.f_110, Local_701.f_957, func_465()) };
			fVar36 = func_464(iParam0, Local_701.f_52, Local_701.f_110, Local_701.f_957, func_465());
			Var30 = { func_454(Var33, fVar36, 20f) };
			if (func_87(Var33, Var30, func_457(), 0, &Var33, &fVar36, &Var0))
			{
				*uParam1 = { Var33 };
				*uParam2 = fVar36;
				Local_701.f_28[iParam0] = { *uParam1 };
				Local_701.f_41[iParam0] = *uParam2;
				return 1;
			}
			else
			{
				if (Global_2405072.f_675 > 1)
				{
					if (Global_2405072.f_670 > 2)
					{
						bVar37 = true;
					}
				}
				if (!func_171(Global_2405072.f_676))
				{
					if (Global_2405072.f_670 > 2)
					{
						if (!func_33(Global_2405072.f_676, Var33, 0))
						{
							bVar37 = true;
						}
					}
				}
				if (bVar37)
				{
					Global_2405072.f_670 = 0;
					func_219();
					func_218();
					Local_701.f_52++;
					if (Local_701.f_52 > 2)
					{
						*uParam1 = { func_358(iParam0, 0, Local_701.f_110, Local_701.f_957, 0) };
						*uParam2 = func_464(iParam0, 0, Local_701.f_110, Local_701.f_957, 0);
						Local_701.f_28[iParam0] = { *uParam1 };
						Local_701.f_41[iParam0] = *uParam2;
						return 1;
					}
				}
			}
		}
	}
	else if (func_443())
	{
		*uParam1 = { func_463(iParam0) };
		*uParam2 = func_461(iParam0);
		return 1;
	}
	else if (func_456())
	{
		*uParam1 = { func_460(iParam0) };
		*uParam2 = func_459(iParam0);
		return 1;
	}
	return 0;
}

float func_459(int iParam0)
{
	switch (func_16())
	{
		case 9:
			if (func_240())
			{
				switch (Local_701.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 147.5271f;
							
							case 1:
								return 154.7648f;
							
							case 2:
								return 174.3838f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 327.4666f;
							
							case 1:
								return 357.546f;
							
							case 2:
								return 39.2522f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 266.595f;
							
							case 1:
								return 324.9111f;
							
							case 2:
								return 356.9818f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 293.786f;
							
							case 1:
								return 314.3035f;
							
							case 2:
								return 279.6294f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return 299.3501f;
							
							case 1:
								return 298.1051f;
							
							case 2:
								return 327.6068f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_701.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 280.2248f;
							
							case 1:
								return 290f;
							
							case 2:
								return 292.9998f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 272.0344f;
							
							case 1:
								return 268.581f;
							
							case 2:
								return 271.7284f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 96.4944f;
							
							case 1:
								return 78.458f;
							
							case 2:
								return 101.9711f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 111.1444f;
							
							case 1:
								return 129.8609f;
							
							case 2:
								return 118.5472f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return 87.1994f;
							
							case 1:
								return 87.1994f;
							
							case 2:
								return 87.1995f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f;
}

Vector3 func_460(int iParam0)
{
	switch (func_16())
	{
		case 9:
			if (func_240())
			{
				switch (Local_701.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 1669.838f, 4463.124f, 30.2346f;
							
							case 1:
								return 1639.418f, 4463.435f, 30.2346f;
							
							case 2:
								return 1689.976f, 4447.034f, 30.2346f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return -2474.625f, 4298.621f, -0.5996f;
							
							case 1:
								return -2466.818f, 4320.201f, 0.7852f;
							
							case 2:
								return -2482.858f, 4284.592f, 0.7852f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 210.034f, 7105.625f, 0.8233f;
							
							case 1:
								return 222.346f, 7102.231f, 0.8233f;
							
							case 2:
								return 192.3831f, 7113.899f, 0.7619f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 3875.186f, 4438.681f, 0f;
							
							case 1:
								return 3890.5f, 4431.843f, 0.2249f;
							
							case 2:
								return 3874.457f, 4451.473f, 0.3764f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return 3383.365f, 5199.885f, 0.334f;
							
							case 1:
								return 3392.557f, 5191.7f, 0.334f;
							
							case 2:
								return 3374.513f, 5207.521f, 0.334f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_701.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 2861.406f, -589.7202f, 0.0375f;
							
							case 1:
								return 2854.219f, -571.7832f, -0.0609f;
							
							case 2:
								return 2866.62f, -606.0164f, -0.1215f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 2861.664f, -772.0405f, 0.4f;
							
							case 1:
								return 2864.028f, -797.7262f, 0.4f;
							
							case 2:
								return 2852.859f, -761.8168f, 0.4937f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 1153.197f, -2707.234f, 0.2712f;
							
							case 1:
								return 1152.673f, -2722.869f, 0.2712f;
							
							case 2:
								return 1146.269f, -2696.77f, 0.3314f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return -823.7054f, -1421.909f, 0.3542f;
							
							case 1:
								return -814.55f, -1428.77f, 0.3542f;
							
							case 2:
								return -820.3769f, -1412.6f, 0.3492f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return -3142.33f, 603.1377f, -0.1875f;
							
							case 1:
								return -3145.597f, 590.7033f, 0f;
							
							case 2:
								return -3140.239f, 596.7289f, 0.3751f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_461(int iParam0)
{
	if (func_462())
	{
		if (func_362())
		{
			switch (iParam0)
			{
				case 0:
					return 125.7982f;
				
				case 1:
					return 138.1985f;
				
				case 2:
					return 120.5984f;
				}
			
			default:
		}
		switch (iParam0)
		{
			case 0:
				return 59.9954f;
			
			case 1:
				return 59.9954f;
			
			case 2:
				return 59.9954f;
			
			default:
		}
	}
	else
	{
		if (func_362())
		{
			switch (iParam0)
			{
				case 0:
					return 231.1979f;
				
				case 1:
					return 220.9979f;
				
				case 2:
					return 200.5979f;
				}
			
			default:
		}
		switch (iParam0)
		{
			case 0:
				return 329.1958f;
			
			case 1:
				return 88.7981f;
			
			case 2:
				return 11.9956f;
			}
		
		default:
	}
	return 0f;
}

int func_462()
{
	switch (Local_701)
	{
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			return 1;
			break;
	}
	return 0;
}

Vector3 func_463(int iParam0)
{
	if (func_462())
	{
		if (func_362())
		{
			switch (iParam0)
			{
				case 0:
					return -2167.467f, -464.1693f, 1.2103f;
				
				case 1:
					return -2140.76f, -497.2295f, 1.142f;
				
				case 2:
					return -2117.403f, -518.1268f, 1.1092f;
				}
			
			default:
		}
		switch (iParam0)
		{
			case 0:
				return -981.4223f, -2994.741f, 12.9451f;
			
			case 1:
				return -1009.04f, -3014.903f, 12.9451f;
			
			case 2:
				return -1008.803f, -2992.59f, 12.9451f;
			
			default:
		}
	}
	else
	{
		if (func_362())
		{
			switch (iParam0)
			{
				case 0:
					return 2110.362f, 4605.95f, 32.5004f;
				
				case 1:
					return 2098.762f, 4580.914f, 31.7869f;
				
				case 2:
					return 2067.822f, 4568.974f, 32.3914f;
				}
			
			default:
		}
		switch (iParam0)
		{
			case 0:
				return 2090.686f, 4757.17f, 40.5952f;
			
			case 1:
				return 2106.546f, 4768.953f, 40.2101f;
			
			case 2:
				return 2066.145f, 4752.323f, 40.5033f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_464(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	iVar0 = uParam2;
	if (iParam4 && iParam3 == 2)
	{
		switch (iVar0)
		{
			case 7:
				return 249.5883f;
			
			case 10:
				return 340.799f;
			
			case 8:
				return 226.7973f;
			
			case 9:
				return 295.592f;
			
			case 6:
				return 20.1886f;
			
			case 17:
				return 233.9995f;
			
			case 20:
				return 44.233f;
			
			case 16:
				return 150.9631f;
			
			case 19:
				return 178.5457f;
			
			case 18:
				return 0.3221f;
			
			case 12:
				return 25.2f;
			
			case 15:
				return 257.1545f;
			
			case 13:
				return 336.3971f;
			
			case 14:
				return 189.1967f;
			
			case 11:
				return 355.5965f;
			
			case 2:
				return 357.7957f;
			
			case 5:
				return 314.995f;
			
			case 3:
				return 134.594f;
			
			case 4:
				return 228.9938f;
			
			case 1:
				return 30.7923f;
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 341.5062f;
							
							case 1:
								return 339.2488f;
							
							case 2:
								return 340.5622f;
							
							case 3:
								return 249.5883f;
							
							default:
						}
						break;
					
					case 10:
						switch (iParam0)
						{
							case 0:
								return 160.7998f;
							
							case 1:
								return 160.5997f;
							
							case 2:
								return 159.9997f;
							
							case 3:
								return 340.799f;
							
							default:
						}
						break;
					
					case 8:
						switch (iParam0)
						{
							case 0:
								return 226.9976f;
							
							case 1:
								return 226.9976f;
							
							case 2:
								return 226.9976f;
							
							case 3:
								return 226.7973f;
							
							default:
						}
						break;
					
					case 9:
						switch (iParam0)
						{
							case 0:
								return 294.9953f;
							
							case 1:
								return 294.9953f;
							
							case 2:
								return 294.9953f;
							
							case 3:
								return 295.592f;
							
							default:
						}
						break;
					
					case 6:
						switch (iParam0)
						{
							case 0:
								return 34.9908f;
							
							case 1:
								return 32.9908f;
							
							case 2:
								return 30.9908f;
							
							case 3:
								return 20.1886f;
							
							default:
						}
						break;
					
					case 17:
						switch (iParam0)
						{
							case 0:
								return 234.6001f;
							
							case 1:
								return 234.6001f;
							
							case 2:
								return 234.6001f;
							
							case 3:
								return 233.9995f;
							
							default:
						}
						break;
					
					case 20:
						switch (iParam0)
						{
							case 0:
								return 358.7308f;
							
							case 1:
								return 358.7193f;
							
							case 2:
								return 90.2674f;
							
							case 3:
								return 44.233f;
							
							default:
						}
						break;
					
					case 16:
						switch (iParam0)
						{
							case 0:
								return 90.5574f;
							
							case 1:
								return 359.4268f;
							
							case 2:
								return 358.5126f;
							
							case 3:
								return 150.9631f;
							
							default:
						}
						break;
					
					case 19:
						switch (iParam0)
						{
							case 0:
								return 139.0354f;
							
							case 1:
								return 140.0933f;
							
							case 2:
								return 180.4328f;
							
							case 3:
								return 178.5457f;
							
							default:
						}
						break;
					
					case 18:
						switch (iParam0)
						{
							case 0:
								return 89.4132f;
							
							case 1:
								return 147.4095f;
							
							case 2:
								return 149.9085f;
							
							case 3:
								return 0.3221f;
							
							default:
						}
						break;
					
					case 12:
						switch (iParam0)
						{
							case 0:
								return 112.1987f;
							
							case 1:
								return 110.3987f;
							
							case 2:
								return 127.1985f;
							
							case 3:
								return 25.2f;
							
							default:
						}
						break;
					
					case 15:
						switch (iParam0)
						{
							case 0:
								return 192.5977f;
							
							case 1:
								return 277.5977f;
							
							case 2:
								return 223.1979f;
							
							case 3:
								return 257.1545f;
							
							default:
						}
						break;
					
					case 13:
						switch (iParam0)
						{
							case 0:
								return 260.3974f;
							
							case 1:
								return 260.3974f;
							
							case 2:
								return 260.3974f;
							
							case 3:
								return 336.3971f;
							
							default:
						}
						break;
					
					case 14:
						switch (iParam0)
						{
							case 0:
								return 184.1966f;
							
							case 1:
								return 184.1966f;
							
							case 2:
								return 184.1966f;
							
							case 3:
								return 189.1967f;
							
							default:
						}
						break;
					
					case 11:
						switch (iParam0)
						{
							case 0:
								return 348.1965f;
							
							case 1:
								return 348.1965f;
							
							case 2:
								return 348.1965f;
							
							case 3:
								return 355.5965f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 354.1997f;
							
							case 1:
								return 350.1997f;
							
							case 2:
								return 353.1997f;
							
							case 3:
								return 357.7957f;
							
							default:
						}
						break;
					
					case 5:
						switch (iParam0)
						{
							case 0:
								return 314.995f;
							
							case 1:
								return 314.995f;
							
							case 2:
								return 314.995f;
							
							case 3:
								return 314.995f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 134.594f;
							
							case 1:
								return 134.594f;
							
							case 2:
								return 134.594f;
							
							case 3:
								return 134.594f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return 226.9938f;
							
							case 1:
								return 226.9938f;
							
							case 2:
								return 226.9938f;
							
							case 3:
								return 228.9938f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 30.7923f;
							
							case 1:
								return 30.7923f;
							
							case 2:
								return 30.7923f;
							
							case 3:
								return 30.7923f;
							
							default:
						}
						break;
				}
				break;
			
			case 1:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 249.8551f;
							
							case 1:
								return 248.7611f;
							
							case 2:
								return 341.4139f;
							
							case 3:
								return 251.1714f;
							
							default:
						}
						break;
					
					case 10:
						switch (iParam0)
						{
							case 0:
								return 341.399f;
							
							case 1:
								return 341.399f;
							
							case 2:
								return 341.399f;
							
							case 3:
								return 161.5993f;
							
							default:
						}
						break;
					
					case 8:
						switch (iParam0)
						{
							case 0:
								return 121.9971f;
							
							case 1:
								return 121.9971f;
							
							case 2:
								return 121.9971f;
							
							case 3:
								return 123.3971f;
							
							default:
						}
						break;
					
					case 9:
						switch (iParam0)
						{
							case 0:
								return 115.1943f;
							
							case 1:
								return 115.1943f;
							
							case 2:
								return 115.1943f;
							
							case 3:
								return 114.7914f;
							
							default:
						}
						break;
					
					case 6:
						switch (iParam0)
						{
							case 0:
								return 62.3901f;
							
							case 1:
								return 75.79f;
							
							case 2:
								return 109.9899f;
							
							case 3:
								return 120.7884f;
							
							default:
						}
						break;
					
					case 17:
						switch (iParam0)
						{
							case 0:
								return 299.9998f;
							
							case 1:
								return 299.9998f;
							
							case 2:
								return 299.9998f;
							
							case 3:
								return 269.7981f;
							
							default:
						}
						break;
					
					case 20:
						switch (iParam0)
						{
							case 0:
								return 1.0299f;
							
							case 1:
								return 0.7598f;
							
							case 2:
								return 0.8382f;
							
							case 3:
								return 333.4183f;
							
							default:
						}
						break;
					
					case 16:
						switch (iParam0)
						{
							case 0:
								return 0.1963f;
							
							case 1:
								return 0.2369f;
							
							case 2:
								return 89.2356f;
							
							case 3:
								return 111.3352f;
							
							default:
						}
						break;
					
					case 19:
						switch (iParam0)
						{
							case 0:
								return 91.643f;
							
							case 1:
								return 90.3414f;
							
							case 2:
								return 22.7655f;
							
							case 3:
								return 90.5753f;
							
							default:
						}
						break;
					
					case 18:
						switch (iParam0)
						{
							case 0:
								return 88.9654f;
							
							case 1:
								return 88.9654f;
							
							case 2:
								return 0.489f;
							
							case 3:
								return 91.5284f;
							
							default:
						}
						break;
					
					case 12:
						switch (iParam0)
						{
							case 0:
								return 78.9995f;
							
							case 1:
								return 73.9995f;
							
							case 2:
								return 68.9994f;
							
							case 3:
								return 74.1999f;
							
							default:
						}
						break;
					
					case 15:
						switch (iParam0)
						{
							case 0:
								return 0.9999f;
							
							case 1:
								return 7.1999f;
							
							case 2:
								return 13.3999f;
							
							case 3:
								return 258.3402f;
							
							default:
						}
						break;
					
					case 13:
						switch (iParam0)
						{
							case 0:
								return 255.3967f;
							
							case 1:
								return 256.5966f;
							
							case 2:
								return 262.7966f;
							
							case 3:
								return 271.996f;
							
							default:
						}
						break;
					
					case 14:
						switch (iParam0)
						{
							case 0:
								return 273.1965f;
							
							case 1:
								return 273.1965f;
							
							case 2:
								return 273.1965f;
							
							case 3:
								return 5.5963f;
							
							default:
						}
						break;
					
					case 11:
						switch (iParam0)
						{
							case 0:
								return 352.9965f;
							
							case 1:
								return 352.9965f;
							
							case 2:
								return 351.1965f;
							
							case 3:
								return 348.3964f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 265.1992f;
							
							case 1:
								return 266.3993f;
							
							case 2:
								return 266.3993f;
							
							case 3:
								return 267.7954f;
							
							default:
						}
						break;
					
					case 5:
						switch (iParam0)
						{
							case 0:
								return 314.7944f;
							
							case 1:
								return 44.3943f;
							
							case 2:
								return 43.1943f;
							
							case 3:
								return 45.1943f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 134.594f;
							
							case 1:
								return 134.594f;
							
							case 2:
								return 134.594f;
							
							case 3:
								return 134.594f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return 224.994f;
							
							case 1:
								return 194.3941f;
							
							case 2:
								return 177.7943f;
							
							case 3:
								return 143.5941f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 27.1922f;
							
							case 1:
								return 27.1922f;
							
							case 2:
								return 27.1922f;
							
							case 3:
								return 27.1922f;
							
							default:
						}
						break;
				}
				break;
			
			case 2:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 339.6511f;
							
							case 1:
								return 250.1768f;
							
							case 2:
								return 250.5529f;
							
							case 3:
								return 250.8644f;
							
							default:
						}
						break;
					
					case 10:
						switch (iParam0)
						{
							case 0:
								return 340.5994f;
							
							case 1:
								return 340.5994f;
							
							case 2:
								return 340.5994f;
							
							case 3:
								return 341.399f;
							
							default:
						}
						break;
					
					case 8:
						switch (iParam0)
						{
							case 0:
								return 223.3969f;
							
							case 1:
								return 223.3969f;
							
							case 2:
								return 223.3969f;
							
							case 3:
								return 222.1969f;
							
							default:
						}
						break;
					
					case 9:
						switch (iParam0)
						{
							case 0:
								return 305.9928f;
							
							case 1:
								return 305.9928f;
							
							case 2:
								return 305.9928f;
							
							case 3:
								return 305.391f;
							
							default:
						}
						break;
					
					case 6:
						switch (iParam0)
						{
							case 0:
								return 168.3895f;
							
							case 1:
								return 159.1894f;
							
							case 2:
								return 157.1893f;
							
							case 3:
								return 153.7882f;
							
							default:
						}
						break;
					
					case 17:
						switch (iParam0)
						{
							case 0:
								return 178.5991f;
							
							case 1:
								return 178.5991f;
							
							case 2:
								return 178.5991f;
							
							case 3:
								return 179.797f;
							
							default:
						}
						break;
					
					case 20:
						switch (iParam0)
						{
							case 0:
								return 315.1037f;
							
							case 1:
								return 316.1562f;
							
							case 2:
								return 316.2499f;
							
							case 3:
								return 44.6831f;
							
							default:
						}
						break;
					
					case 16:
						switch (iParam0)
						{
							case 0:
								return 0.5054f;
							
							case 1:
								return 359.6695f;
							
							case 2:
								return 89.329f;
							
							case 3:
								return 90.2361f;
							
							default:
						}
						break;
					
					case 19:
						switch (iParam0)
						{
							case 0:
								return 204.477f;
							
							case 1:
								return 206.2505f;
							
							case 2:
								return 205.6789f;
							
							case 3:
								return 179.8434f;
							
							default:
						}
						break;
					
					case 18:
						switch (iParam0)
						{
							case 0:
								return 158.7604f;
							
							case 1:
								return 228.9877f;
							
							case 2:
								return 229.1641f;
							
							case 3:
								return 130.5588f;
							
							default:
						}
						break;
					
					case 12:
						switch (iParam0)
						{
							case 0:
								return 113.3989f;
							
							case 1:
								return 113.3989f;
							
							case 2:
								return 115.7988f;
							
							case 3:
								return 108.9997f;
							
							default:
						}
						break;
					
					case 15:
						switch (iParam0)
						{
							case 0:
								return 187.5977f;
							
							case 1:
								return 187.7977f;
							
							case 2:
								return 187.7977f;
							
							case 3:
								return 255.16f;
							
							default:
						}
						break;
					
					case 13:
						switch (iParam0)
						{
							case 0:
								return 303.3963f;
							
							case 1:
								return 314.3961f;
							
							case 2:
								return 321.7961f;
							
							case 3:
								return 342.1961f;
							
							default:
						}
						break;
					
					case 14:
						switch (iParam0)
						{
							case 0:
								return 182.3966f;
							
							case 1:
								return 182.3966f;
							
							case 2:
								return 182.3966f;
							
							case 3:
								return 205.5968f;
							
							default:
						}
						break;
					
					case 11:
						switch (iParam0)
						{
							case 0:
								return 293.396f;
							
							case 1:
								return 305.5958f;
							
							case 2:
								return 314.5957f;
							
							case 3:
								return 314.5957f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 263.1992f;
							
							case 1:
								return 263.1992f;
							
							case 2:
								return 263.1992f;
							
							case 3:
								return 263.9953f;
							
							default:
						}
						break;
					
					case 5:
						switch (iParam0)
						{
							case 0:
								return 45.1943f;
							
							case 1:
								return 45.1943f;
							
							case 2:
								return 45.1943f;
							
							case 3:
								return 135.794f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 226.9938f;
							
							case 1:
								return 226.9938f;
							
							case 2:
								return 226.9938f;
							
							case 3:
								return 226.9938f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return 224.1938f;
							
							case 1:
								return 224.1938f;
							
							case 2:
								return 224.1938f;
							
							case 3:
								return 224.1938f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 27.1922f;
							
							case 1:
								return 27.1922f;
							
							case 2:
								return 27.1922f;
							
							case 3:
								return 27.1922f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 269.4978f;
}

int func_465()
{
	if (func_18() || func_17())
	{
		return 1;
	}
	return 0;
}

int func_466()
{
	return Local_701.f_14;
}

void func_467()
{
	if (func_281() == func_59() && func_234() == 0)
	{
		func_231(2);
	}
}

void func_468()
{
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (func_12(iVar0))
		{
			iVar1++;
		}
		if (func_19())
		{
			if (func_472(iVar0))
			{
				iVar3 = func_471(iVar0);
				if (iVar3 != func_59())
				{
					if (func_2153(iVar3, 1, 1))
					{
						iVar2 = iVar3;
						if (!func_11(iVar0, iVar2))
						{
							func_469(iVar0, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_701.f_978 != iVar1)
	{
		Local_701.f_978 = iVar1;
	}
}

void func_469(int iParam0, int iParam1)
{
	if ((func_470(iParam0, 0) && (!func_443() || iParam1)) && !func_456())
	{
		AI::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), func_13(iParam0), 0);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 23, 1);
	}
}

int func_470(int iParam0, bool bParam1)
{
	if (!func_66(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_12(iParam0))
		{
			return 0;
		}
	}
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_701.f_59[iParam0]), 0))
	{
		return 0;
	}
	return 1;
}

int func_471(int iParam0)
{
	if (func_31(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
				iVar1 = iVar0;
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
				if (func_2153(iVar2, 0, 1))
				{
					iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
					if (!PED::IS_PED_INJURED(iVar3))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
						{
							if (PED::GET_VEHICLE_PED_IS_IN(iVar3, 0) == NETWORK::NET_TO_VEH(Local_701.f_59[iParam0]))
							{
								if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(iVar3, 0), -1, 0) == iVar3)
								{
									return iVar2;
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return func_59();
}

int func_472(int iParam0)
{
	if (func_19())
	{
		return GAMEPLAY::IS_BIT_SET(Local_701.f_21, iParam0);
	}
	return 0;
}

void func_473()
{
	if (func_6() && func_234() == 0)
	{
		if (!func_29(3))
		{
			if (func_5(&(Local_701.f_959)) && func_26(&(Local_701.f_959), func_478(), 0))
			{
				if (!func_25())
				{
					iVar0 = 0;
					while (iVar0 < func_14())
					{
						func_451(func_13(iVar0), iVar0, 1623637790, 0, 0);
						iVar0++;
					}
				}
				func_474(0);
				func_28(3);
			}
		}
	}
}

void func_474(bool bParam0)
{
	Var0.f_2 = 294222157;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = func_281();
	if (bParam0)
	{
		func_476(Var0, func_477(PLAYER::PLAYER_ID()));
	}
	else
	{
		func_476(Var0, func_475(1));
	}
}

int func_475(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_2153(iVar2, 0, 0))
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

void func_476(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_477(int iParam0)
{
	if (iParam0 != -1)
	{
		GAMEPLAY::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_478()
{
	switch (Local_701.f_16)
	{
		case 1:
			return Global_262145.f_17777;
		
		case 2:
			return Global_262145.f_17778;
		
		case 3:
			return Global_262145.f_17779;
		
		default:
	}
	return Global_262145.f_17778;
}

void func_479()
{
	Var0 = { func_34(Local_701.f_110) };
	if (!func_171(Var0))
	{
		func_480(&(Local_701.f_953), Var0, 1, 1103626240);
	}
}

void func_480(var uParam0, struct<3> Param1, int iParam4, int iParam5)
{
	if (!GAMEPLAY::_0x1327E2FE9746BAEE(*uParam0))
	{
		*uParam0 = GAMEPLAY::_0x67F6413D3220E18D(Param1 - Vector(iParam5, iParam5, iParam5), Param1 + Vector(iParam5, iParam5, iParam5), 1f, 0.25f, iParam4, 1);
	}
}

void func_481()
{
	if (func_342() && func_494())
	{
		if (!func_493())
		{
			if (func_491())
			{
				func_4(&(Local_701.f_856), 0, 0);
			}
		}
		else if (func_489())
		{
			if (!func_5(&(Local_701.f_858)))
			{
				if (func_486() && func_483())
				{
					func_335(&(Local_701.f_856));
					func_4(&(Local_701.f_858), 0, 0);
					if (func_45())
					{
						if (!func_18())
						{
							Local_701.f_966 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, func_14());
						}
					}
				}
			}
		}
		else if (func_482())
		{
			func_486();
			func_483();
			if (func_45())
			{
				if (!func_18())
				{
					Local_701.f_966 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, func_14());
				}
			}
		}
	}
}

int func_482()
{
	return 0;
}

int func_483()
{
	iVar0 = 0;
	while (iVar0 < func_241())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_707[iVar0]))
		{
			if ((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_701.f_707[iVar0]) || (!NETWORK::_0xA1607996431332DF(Local_701.f_707[iVar0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())) || (NETWORK::_0xA1607996431332DF(Local_701.f_707[iVar0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (func_337(Local_701.f_707[iVar0]))
				{
					if (!func_18())
					{
						NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_701.f_707[iVar0]), 1, 1);
						func_485(&(Local_701.f_707[iVar0]));
					}
					else
					{
						func_484(&(Local_701.f_707[iVar0]));
					}
					func_331(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_241())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_707[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_484(var uParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
	}
}

void func_485(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

int func_486()
{
	iVar0 = 0;
	while (iVar0 < func_488())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_837[iVar0]))
		{
			if ((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_701.f_837[iVar0]) || (!NETWORK::_0xA1607996431332DF(Local_701.f_837[iVar0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())) || (NETWORK::_0xA1607996431332DF(Local_701.f_837[iVar0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (func_337(Local_701.f_837[iVar0]))
				{
					if (!func_18())
					{
						NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_701.f_837[iVar0]), 1, 1);
					}
					func_484(&(Local_701.f_837[iVar0]));
					func_335(&(Local_701.f_915[iVar0]));
					func_487(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_488())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_837[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_487(int iParam0, int iParam1)
{
	Local_701.f_837[iParam0].f_5 = iParam1;
}

int func_488()
{
	switch (func_16())
	{
		case 12:
		case 0:
			return 2;
		
		default:
	}
	return 0;
}

int func_489()
{
	if (func_5(&(Local_701.f_856)))
	{
		if (func_26(&(Local_701.f_856), func_490(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_490()
{
	return 10000;
}

int func_491()
{
	iVar0 = 0;
	switch (func_16())
	{
		case 0:
			if ((Local_701.f_837[0].f_5 == 4 && Local_701.f_837[1].f_5 == 4) || func_492())
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

int func_492()
{
	iVar0 = 0;
	while (iVar0 < func_241())
	{
		if (Local_701.f_707[iVar0].f_5 != 18)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_493()
{
	return func_5(&(Local_701.f_856));
}

int func_494()
{
	switch (func_16())
	{
		case 12:
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

void func_495()
{
	if (func_494())
	{
		iVar0 = 0;
		while (iVar0 < func_488())
		{
			switch (func_505(iVar0))
			{
				case 0:
					break;
				
				case 1:
					if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_837[iVar0]))
					{
						if (func_502())
						{
							if (func_5(&(Local_701.f_858)))
							{
								func_335(&(Local_701.f_858));
							}
							if (func_252(func_344()))
							{
								if (func_498(iVar0, func_344()))
								{
									func_487(iVar0, 2);
								}
							}
						}
					}
					break;
				
				case 2:
					if (func_342())
					{
						iVar1 = 0;
						while (iVar1 < func_241())
						{
							if (func_318(iVar1, 0))
							{
							}
							iVar1++;
						}
					}
					if (func_496(iVar0))
					{
						func_487(iVar0, 3);
						if (!func_29(29) && func_15())
						{
							func_28(29);
						}
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_837[iVar0]))
					{
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_701.f_837[iVar0]), 0) || ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_701.f_837[iVar0]), 0))
						{
							func_487(iVar0, 4);
						}
					}
					break;
				
				case 4:
					break;
				
				case 5:
					break;
			}
			iVar0++;
		}
	}
}

int func_496(int iParam0)
{
	iVar0 = 1;
	switch (func_16())
	{
		case 12:
		case 0:
			iVar1 = 0;
			while (iVar1 < func_241())
			{
				if (iParam0 == 0)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_707[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_707[1]))
					{
						if (!func_497(NETWORK::NET_TO_PED(Local_701.f_707[0]), NETWORK::NET_TO_VEH(Local_701.f_837[iParam0]), 0) || !func_497(NETWORK::NET_TO_PED(Local_701.f_707[1]), NETWORK::NET_TO_VEH(Local_701.f_837[iParam0]), 0))
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
				else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_707[2]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_707[3]))
				{
					if (!func_497(NETWORK::NET_TO_PED(Local_701.f_707[2]), NETWORK::NET_TO_VEH(Local_701.f_837[iParam0]), 0) || !func_497(NETWORK::NET_TO_PED(Local_701.f_707[3]), NETWORK::NET_TO_VEH(Local_701.f_837[iParam0]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_497(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_498(int iParam0, int iParam1)
{
	switch (func_16())
	{
		case 12:
			if (Local_701.f_860.f_6 == -1 || Local_701.f_860.f_6 == iParam0)
			{
				iVar0 = func_501();
				Local_701.f_860.f_6 = iParam0;
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (func_171(Local_701.f_860.f_7))
					{
						if (func_171(Local_701.f_860.f_13))
						{
							Local_701.f_860.f_13 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar0) };
						}
						else
						{
							if ((Local_701.f_860.f_13.f_2 >= 0f && Local_701.f_860.f_13.f_2 < 90f) || (Local_701.f_860.f_13.f_2 >= 270f && Local_701.f_860.f_13.f_2 < 360f))
							{
								fVar1 = 220f;
							}
							else
							{
								fVar1 = 120f;
							}
							bVar2 = true;
							if (GAMEPLAY::FIND_SPAWN_POINT_IN_DIRECTION(ENTITY::GET_ENTITY_COORDS(iVar0, 1), Local_701.f_860.f_13, fVar1, &(Local_701.f_860.f_7)))
							{
								fVar3 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Local_701.f_860.f_7, ENTITY::GET_ENTITY_COORDS(iVar0, 0), 1);
								Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar0, Local_701.f_860.f_7) };
								if (fVar3 > 290f)
								{
									bVar2 = false;
								}
								if (!func_168(Local_701.f_860.f_7, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 190f, 0, -1, 1, 0, 0, 0, 0, 0))
								{
									bVar2 = false;
								}
								if (GAMEPLAY::ABSF(Var4.x) > 100f)
								{
									bVar2 = false;
								}
								if (!bVar2)
								{
									Local_701.f_860.f_7 = { 0f, 0f, 0f };
								}
								else
								{
									Local_701.f_860.f_10 = func_500(Local_701.f_860.f_7, ENTITY::GET_ENTITY_COORDS(iVar0, 1));
								}
							}
							else
							{
								func_499(&(Local_701.f_860.f_13));
							}
						}
					}
					if (!func_171(Local_701.f_860.f_7))
					{
						if (func_348(&(Local_701.f_837[iParam0]), iParam1, Local_701.f_860.f_7, Local_701.f_860.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							func_347(iParam0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
							Local_701.f_860.f_6 = -1;
							Local_701.f_860.f_7 = { 0f, 0f, 0f };
							Local_701.f_860.f_10 = 0f;
							Local_701.f_860.f_12 = 0;
							Local_701.f_860.f_11 = 0;
							Local_701.f_882 = (Local_701.f_882 + 1f);
							return 1;
						}
					}
				}
			}
			break;
		
		case 0:
			if (Local_701.f_860 == -1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_59[Local_701.f_966]))
				{
					if (func_36(Local_701.f_59[Local_701.f_966]))
					{
						if (Local_701.f_860.f_6 == -1 || Local_701.f_860.f_6 == iParam0)
						{
							Local_701.f_860.f_6 = iParam0;
							if (func_171(Local_701.f_860.f_7))
							{
								if (func_171(Local_701.f_860.f_13))
								{
									Local_701.f_860.f_13 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(NETWORK::NET_TO_VEH(Local_701.f_59[Local_701.f_966])) };
								}
								else
								{
									if ((Local_701.f_860.f_13.f_2 >= 0f && Local_701.f_860.f_13.f_2 < 90f) || (Local_701.f_860.f_13.f_2 >= 270f && Local_701.f_860.f_13.f_2 < 360f))
									{
										fVar7 = 220f;
									}
									else
									{
										fVar7 = 120f;
									}
									bVar8 = true;
									if (GAMEPLAY::FIND_SPAWN_POINT_IN_DIRECTION(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_701.f_59[Local_701.f_966]), 1), Local_701.f_860.f_13, fVar7, &(Local_701.f_860.f_7)))
									{
										fVar9 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Local_701.f_860.f_7, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_701.f_59[Local_701.f_966]), 0), 1);
										Var10 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(NETWORK::NET_TO_VEH(Local_701.f_59[Local_701.f_966]), Local_701.f_860.f_7) };
										if (fVar9 > 290f)
										{
											bVar8 = false;
										}
										if (!func_168(Local_701.f_860.f_7, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 190f, 0, -1, 1, 0, 0, 0, 0, 0))
										{
											bVar8 = false;
										}
										if (GAMEPLAY::ABSF(Var10.x) > 100f)
										{
											bVar8 = false;
										}
										if (!bVar8)
										{
											Local_701.f_860.f_7 = { 0f, 0f, 0f };
										}
										else
										{
											Local_701.f_860.f_10 = func_500(Local_701.f_860.f_7, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_701.f_59[Local_701.f_966]), 1));
										}
									}
									else
									{
										func_499(&(Local_701.f_860.f_13));
									}
								}
							}
							if (!func_171(Local_701.f_860.f_7))
							{
								if (func_348(&(Local_701.f_837[iParam0]), iParam1, Local_701.f_860.f_7, Local_701.f_860.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									func_347(iParam0);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
									Local_701.f_860.f_6 = -1;
									Local_701.f_860.f_7 = { 0f, 0f, 0f };
									Local_701.f_860.f_10 = 0f;
									Local_701.f_860.f_12 = 0;
									Local_701.f_860.f_11 = 0;
									Local_701.f_882 = (Local_701.f_882 + 1f);
									return 1;
								}
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

void func_499(var uParam0)
{
	Local_701.f_860.f_12++;
	if (Local_701.f_860.f_12 < 5)
	{
		switch (Local_701.f_860.f_12)
		{
			case 1:
			case 2:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			
			case 3:
				*uParam0 = { *uParam0 - Vector(30f, 0f, 0f) };
				break;
			
			case 4:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		Local_701.f_860.f_12 = 0;
		*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
	}
}

var func_500(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5)
{
	return GAMEPLAY::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

int func_501()
{
	iVar0 = 0;
	while (iVar0 < func_24())
	{
		if (Local_701.f_101[iVar0] != -1)
		{
			iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(Local_701.f_101[iVar0]));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_502()
{
	if (func_234() != 0)
	{
		return 0;
	}
	if (func_18())
	{
		if (Local_701.f_882 >= IntToFloat(func_504()))
		{
			return 0;
		}
	}
	if (func_15())
	{
		if (func_41())
		{
			if (func_29(24))
			{
				return 1;
			}
		}
	}
	if (func_18())
	{
		if (func_62(20))
		{
			if (func_5(&(Local_701.f_856)))
			{
				return 0;
			}
		}
	}
	if (func_5(&(Local_701.f_858)))
	{
		if (!func_26(&(Local_701.f_858), 3000, 0))
		{
			return 0;
		}
	}
	if (func_503())
	{
		if (func_62(9))
		{
			return 1;
		}
	}
	if (func_62(20))
	{
		return 1;
	}
	return 0;
}

int func_503()
{
	if (((func_62(10) || func_62(11)) || func_62(12)) || func_62(13))
	{
		return 1;
	}
	return 0;
}

int func_504()
{
	iVar0 = 0;
	iVar1 = Global_1676229;
	if (Global_1676227 == 1)
	{
		iVar1 = 3;
	}
	if (func_18())
	{
		switch (iVar1)
		{
			case 1:
			case 4:
				iVar0 = Global_262145.f_16260 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				iVar0 = Global_262145.f_16259 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			case 3:
				iVar0 = Global_262145.f_16258 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			default:
				iVar0 = 6;
				break;
			}
	}
	return iVar0;
}

int func_505(int iParam0)
{
	return Local_701.f_837[iParam0].f_5;
}

void func_506()
{
	if (func_342())
	{
		iVar0 = 0;
		while (iVar0 < func_241())
		{
			switch (func_519(iVar0))
			{
				case 0:
					break;
				
				case 1:
					if (func_341(iVar0))
					{
						if (func_17())
						{
							func_331(iVar0, 19);
						}
						else if (func_15())
						{
							func_331(iVar0, 9);
						}
						else
						{
							func_331(iVar0, 2);
						}
					}
					break;
				
				case 11:
					if (func_518())
					{
						if (func_341(iVar0))
						{
							if (ENTITY::IS_ENTITY_DEAD(func_517(iVar0), 0))
							{
								func_331(iVar0, 18);
							}
							else if (GAMEPLAY::IS_BIT_SET(Local_701.f_9, iVar0))
							{
								func_331(iVar0, 10);
							}
						}
					}
					break;
				
				case 19:
					break;
				
				case 2:
					if (func_341(iVar0))
					{
						switch (func_16())
						{
							case 0:
							case 4:
								if (!ENTITY::IS_ENTITY_DEAD(func_517(iVar0), 0))
								{
									func_331(iVar0, func_516(iVar0));
								}
								else
								{
									func_331(iVar0, 18);
								}
								break;
							}
					}
					break;
				
				case 6:
					if (func_341(iVar0))
					{
						if (ENTITY::IS_ENTITY_DEAD(func_515(iVar0), 0))
						{
							func_331(iVar0, 18);
						}
						else
						{
							if (func_18())
							{
								func_509(iVar0);
							}
							if (GAMEPLAY::IS_BIT_SET(Local_701.f_886, iVar0))
							{
								func_331(iVar0, 14);
							}
						}
					}
					break;
				
				case 9:
					if (func_341(iVar0))
					{
						if (ENTITY::IS_ENTITY_DEAD(func_515(iVar0), 0))
						{
							func_331(iVar0, 18);
						}
						else
						{
							if (func_15() || func_18())
							{
								func_509(iVar0);
							}
							if (GAMEPLAY::IS_BIT_SET(Local_701.f_886, iVar0))
							{
								func_331(iVar0, 14);
							}
							if (func_15() && func_225(0))
							{
								func_331(iVar0, 10);
							}
						}
					}
					break;
				
				case 8:
					if (func_341(iVar0))
					{
						if (ENTITY::IS_ENTITY_DEAD(func_515(iVar0), 0))
						{
							func_331(iVar0, 18);
						}
						else if (func_18())
						{
							func_509(iVar0);
						}
					}
					break;
				
				case 12:
					break;
				
				case 13:
					break;
				
				case 17:
					break;
				
				case 14:
					if (func_341(iVar0))
					{
						if (ENTITY::IS_ENTITY_DEAD(func_515(iVar0), 0))
						{
							func_331(iVar0, 18);
						}
						else
						{
							if (func_466() > 1)
							{
								func_331(iVar0, 10);
							}
							func_509(iVar0);
						}
					}
					break;
				
				case 15:
					break;
				
				case 16:
					break;
				
				case 18:
					if (func_23())
					{
						iVar1 = func_507(iVar0);
						if (iVar1 != -1)
						{
							func_71(1);
							Local_701.f_184[iVar1]++;
							func_8(iVar1, Local_701.f_175[iVar1]);
							func_484(&(Local_701.f_707[iVar0]));
							func_331(iVar0, 10);
						}
					}
					break;
				
				case 20:
					break;
			}
			iVar0++;
		}
	}
}

int func_507(int iParam0)
{
	fVar1 = 9999.99f;
	if (func_341(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < func_24())
		{
			iVar4 = PLAYER::INT_TO_PLAYERINDEX(Local_701.f_101[iVar0]);
			if (Local_701.f_101[iVar0] != -1 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
			{
				fVar2 = func_508(PLAYER::GET_PLAYER_PED(iVar4), func_517(iParam0), 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
				}
			}
			iVar0++;
		}
	}
	return iVar3;
}

float func_508(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

void func_509(int iParam0)
{
	fVar0 = func_514();
	fVar1 = func_513();
	if (func_15())
	{
		iVar3 = func_512(iParam0, &iVar2);
	}
	else
	{
		iVar3 = func_511(iParam0, &iVar2, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_701.f_885, iParam0))
		{
			if (func_508(func_515(iParam0), iVar3, 1) > fVar0)
			{
				GAMEPLAY::SET_BIT(&(Local_701.f_885), iParam0);
			}
			else if (func_508(func_515(iParam0), iVar3, 1) > fVar1)
			{
				if (!func_5(&(Local_701.f_707[iParam0].f_6)))
				{
					func_4(&(Local_701.f_707[iParam0].f_6), 0, 0);
				}
				else if (func_26(&(Local_701.f_707[iParam0].f_6), func_510(), 0))
				{
					GAMEPLAY::SET_BIT(&(Local_701.f_885), iParam0);
				}
			}
			else if (func_5(&(Local_701.f_707[iParam0].f_6)))
			{
				func_335(&(Local_701.f_707[iParam0].f_6));
			}
		}
		if (func_15() || func_18())
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_701.f_885, iParam0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_701.f_886, iParam0))
				{
					if (Local_701.f_175[iVar2] >= 0)
					{
						Var4 = { func_407(func_16(), Local_701.f_175[iVar2], Local_701.f_679, iVar2, 0, 0) };
						fVar7 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_515(iParam0), 0), Var4, 1);
						if (fVar7 < 100f)
						{
							GAMEPLAY::SET_BIT(&(Local_701.f_886), iParam0);
						}
					}
				}
			}
		}
	}
}

int func_510()
{
	return 10000;
}

int func_511(int iParam0, var uParam1, int iParam2)
{
	fVar1 = 9999.99f;
	iVar3 = -1;
	if (func_45())
	{
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_13(iVar0)))
			{
				if (!func_12(iVar0) || iParam2)
				{
					fVar2 = func_508(NETWORK::NET_TO_PED(Local_701.f_707[iParam0]), func_13(iVar0), 1);
					if (fVar2 < fVar1)
					{
						fVar1 = fVar2;
						iVar3 = func_13(iVar0);
						*uParam1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar3 = func_13(0);
		*uParam1 = 0;
	}
	return iVar3;
}

int func_512(int iParam0, var uParam1)
{
	fVar3 = 9999.99f;
	iVar0 = 0;
	while (iVar0 < func_24())
	{
		if (Local_701.f_101[iVar0] != -1)
		{
			iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(Local_701.f_101[iVar0]));
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				fVar4 = func_508(NETWORK::NET_TO_PED(Local_701.f_707[iParam0]), iVar2, 1);
				if (fVar4 < fVar3)
				{
					fVar3 = fVar4;
					iVar1 = iVar2;
					*uParam1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

float func_513()
{
	return 600f;
}

float func_514()
{
	return 800f;
}

int func_515(int iParam0)
{
	if (func_341(iParam0))
	{
		return NETWORK::NET_TO_ENT(Local_701.f_707[iParam0]);
	}
	return 0;
}

int func_516(int iParam0)
{
	switch (func_16())
	{
		case 7:
			return 19;
		
		case 0:
			switch (iParam0)
			{
				case 0:
				case 2:
					return 6;
				
				case 1:
				case 3:
					return 8;
				
				default:
			}
			break;
	}
	return 2;
}

int func_517(int iParam0)
{
	if (func_341(iParam0))
	{
		return NETWORK::NET_TO_PED(Local_701.f_707[iParam0]);
	}
	return 0;
}

int func_518()
{
	switch (Local_701.f_17)
	{
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_519(int iParam0)
{
	return Local_701.f_707[iParam0].f_5;
}

void func_520()
{
	if (func_25())
	{
		if (!func_225(0))
		{
			iVar2 = 0;
			while (iVar2 < func_24())
			{
				iVar3 = PLAYER::INT_TO_PLAYERINDEX(Local_701.f_101[iVar2]);
				if (Local_701.f_101[iVar2] != -1)
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
					{
						if (!func_12(iVar2))
						{
							func_64(iVar3, iVar2);
							func_536(&iVar0, iVar2);
							if (Local_701.f_175[iVar2] != iVar0)
							{
								Local_701.f_175[iVar2] = iVar0;
							}
							iVar0 = 0;
						}
					}
				}
				iVar2++;
			}
		}
	}
	else if (func_45())
	{
		iVar1 = 0;
		while (iVar1 < func_14())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_13(iVar1)) && !func_12(iVar1))
			{
				func_521(func_13(iVar1), iVar1, &iVar0);
				if (Local_701.f_175[iVar1] != iVar0)
				{
					Local_701.f_175[iVar1] = iVar0;
				}
				iVar0 = 0;
			}
			iVar1++;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(func_13(0)))
	{
		func_521(func_13(0), 0, &iVar0);
		if (Local_701.f_175[0] != iVar0)
		{
			Local_701.f_175[0] = iVar0;
		}
	}
}

void func_521(int iParam0, int iParam1, int iParam2)
{
	iVar5 = -1;
	fVar7 = 1E+07f;
	if (!func_225(0))
	{
		if (func_534() && !func_19())
		{
			if (func_533(iParam1))
			{
			}
			iVar1 = func_532(iParam1);
			if (iVar1 < 10)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_701.f_193[iVar1][iParam1]))
				{
					iVar8 = NETWORK::NET_TO_ENT(Local_701.f_193[iVar1][iParam1]);
				}
			}
		}
		else if (func_19() && func_2153(Local_701.f_27, 0, 1))
		{
			iVar8 = PLAYER::GET_PLAYER_PED(Local_701.f_27);
		}
		else
		{
			iVar8 = iParam0;
		}
		iVar0 = 0;
		while (iVar0 < func_228())
		{
			if (func_361())
			{
				if (iVar5 == -1)
				{
					if (GAMEPLAY::IS_BIT_SET(Local_701.f_134[iParam1], iVar0))
					{
						iVar5 = iVar0;
					}
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_701.f_134[iParam1], iVar0) && !func_531(iVar0))
			{
				Var2 = { func_407(func_16(), iVar0, Local_701.f_679, iParam1, 0, func_472(iParam1)) };
				fVar6 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var2, ENTITY::GET_ENTITY_COORDS(iParam0, 0), 1);
				if (fVar6 < fVar7)
				{
					fVar7 = fVar6;
					*iParam2 = iVar0;
				}
			}
			iVar0++;
		}
		if (func_361())
		{
			if (iVar5 != -1)
			{
				*iParam2 = iVar5;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !ENTITY::IS_ENTITY_DEAD(iVar8, 0))
		{
			Var10 = { func_407(func_16(), *iParam2, Local_701.f_679, iParam1, 0, func_472(iParam1)) };
			if (((func_74() && func_530(iParam0, iParam1)) || ((func_27() && func_527(Var10, iVar8, 1)) && PLAYER::GET_PLAYER_WANTED_LEVEL(func_471(iParam1)) == 0)) || ((!func_74() && !func_27()) && func_527(Var10, iVar8, 1)))
			{
				if (func_74())
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_701.f_4, iParam1))
					{
						GAMEPLAY::SET_BIT(&(Local_701.f_4), iParam1);
					}
				}
				if (!func_29(23))
				{
					func_28(23);
				}
				if (func_27() && !func_41())
				{
					func_48(6);
					func_526(2);
				}
				else if (func_19() && !GAMEPLAY::IS_BIT_SET(Local_701.f_21, iParam1))
				{
					iVar9 = func_471(iParam1);
					if (iVar9 != func_59())
					{
						func_525(iParam1);
						func_9(1, iVar9, iParam1);
					}
				}
				else
				{
					func_38(*iParam2, iParam1);
					if (func_534() || func_74())
					{
						if (!func_443())
						{
							Var13 = { func_524(iParam1, 0) };
							if (func_19())
							{
								if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !ENTITY::IS_ENTITY_DEAD(iVar8, 0))
								{
									Var13 = { ENTITY::GET_ENTITY_COORDS(iVar8, 1) };
								}
							}
							AUDIO::PLAY_SOUND_FROM_COORD(-1, func_523(), Var13, func_522(), 1, 0, 0);
						}
					}
					if (func_45())
					{
						if (func_532(iParam1) == func_229(iParam1) || func_74())
						{
							func_47(iParam1);
						}
					}
					else if (func_225(0))
					{
						func_47(iParam1);
					}
					if (func_19())
					{
						func_7(iParam1);
						func_9(0, Local_701.f_27, iParam1);
						Local_701.f_27 = func_59();
					}
				}
			}
		}
	}
}

char* func_522()
{
	switch (func_16())
	{
		case 3:
			return "DLC_Biker_Sell_Trash_Sounds";
		
		case 5:
			return "DLC_Biker_Sell_Postman_Sounds";
		
		case 2:
			return "DLC_Biker_Air_Drop_Sounds";
		
		case 4:
		case 8:
			return "GTAO_Biker_Modes_Soundset";
		
		default:
	}
	if (func_25())
	{
		return "GTAO_Biker_Modes_Soundset";
	}
	return "DLC_Biker_Sell_Sea_Sounds";
}

char* func_523()
{
	switch (func_16())
	{
		case 4:
		case 8:
			return "Deliver_Item";
		
		default:
	}
	if (func_25())
	{
		return "Deliver_Item";
	}
	return "Drop_Package";
}

Vector3 func_524(int iParam0, bool bParam1)
{
	if (func_66(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(func_67(iParam0), 1) };
	}
	if (bParam1)
	{
		Var0 = { Var0 + Vector(0f, 5f, 5f) };
	}
	return Var0;
}

void func_525(int iParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(Local_701.f_21, iParam0))
	{
		GAMEPLAY::SET_BIT(&(Local_701.f_21), iParam0);
	}
}

void func_526(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), iParam0);
}

int func_527(struct<3> Param0, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_AT_COORD(iParam3, Param0, func_528(bParam4), 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

Vector3 func_528(bool bParam0)
{
	if (func_23())
	{
		return 2f, 2f, 2f;
	}
	if (func_443())
	{
		if (func_248())
		{
			if (bParam0)
			{
				return (150f / 3f), (150f / 3f), (150f * 1.5f);
			}
			return (150f / 4f), (150f / 4f), (150f * 1.5f);
		}
		return (150f / 2f), (150f / 2f), (150f * 1.5f);
	}
	else if (func_529() && !func_19())
	{
		if (func_361())
		{
			return (20f * 1.2f), (20f * 1.2f), (3f * 2f);
		}
		else if (bParam0)
		{
			return (20f * 1.5f), (20f * 1.5f), 3f;
		}
		else
		{
			return (20f * 1.2f), (20f * 1.2f), 3f;
		}
	}
	if (func_43())
	{
		return 3f, 3f, 5f;
	}
	return 3f, 3f, 3f;
}

int func_529()
{
	switch (Local_701.f_17)
	{
		case 3:
		case 4:
		case 5:
		case 9:
			return 1;
		
		default:
	}
	return 0;
}

int func_530(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_64[iParam1]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_701.f_64[iParam1]);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, 0.3f, 0.1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -3.4f, 1.4f), 2.1f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_531(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_701.f_145[iVar0], iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_532(int iParam0)
{
	if (iParam0 == -1)
	{
		return Local_701.f_122;
	}
	if ((((func_45() || func_15()) || func_23()) || func_44()) || func_43())
	{
		return Local_701.f_124[iParam0];
	}
	else
	{
		return Local_701.f_122;
	}
	return 0;
}

int func_533(int iParam0)
{
	if (func_19())
	{
		return GAMEPLAY::IS_BIT_SET(Local_701.f_21, iParam0);
	}
	return 1;
}

int func_534()
{
	if (func_361())
	{
		return 0;
	}
	if (func_443() || (func_529() && func_535()))
	{
		if (!func_518())
		{
			return 1;
		}
	}
	return 0;
}

bool func_535()
{
	if (func_230() || func_19())
	{
		return 1;
	}
	return func_223() < (func_73(-1) - 1);
}

void func_536(var uParam0, int iParam1)
{
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_701.f_101[iParam1]);
	if (Local_701.f_101[iParam1] != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iVar1);
			func_537(iParam1, iVar0, uParam0);
		}
	}
}

void func_537(int iParam0, int iParam1, var uParam2)
{
	fVar5 = 1E+07f;
	Var6 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	iVar0 = 0;
	while (iVar0 < func_228())
	{
		if (GAMEPLAY::IS_BIT_SET(Local_701.f_134[iParam0], iVar0))
		{
			if (!func_531(iVar0))
			{
				Var1 = { func_407(func_16(), iVar0, Local_701.f_679, iParam0, 0, 0) };
				fVar4 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var1, Var6, 1);
				if (fVar4 < fVar5)
				{
					fVar5 = fVar4;
					*uParam2 = iVar0;
				}
			}
		}
		iVar0++;
	}
}

void func_538()
{
	func_550();
	if (func_534())
	{
		if (func_548())
		{
			iVar0 = 0;
			while (iVar0 < func_14())
			{
				iVar1 = (25 + iVar0);
				iVar2 = iVar1;
				if (func_62(iVar2))
				{
					if (Local_701.f_664[iVar0] < 10)
					{
						switch (Local_701.f_669[iVar0])
						{
							case 0:
								Local_701.f_669[iVar0]++;
								break;
							
							case 1:
								if (GAMEPLAY::IS_BIT_SET(Local_701.f_967, iVar0))
								{
									Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_67(iVar0), func_547()) };
									if (func_66(iVar0) && func_542(Var3, func_546(iVar0), iVar0))
									{
										Local_701.f_664[iVar0]++;
										func_2(iVar2);
										Local_701.f_669[iVar0] = 0;
										GAMEPLAY::CLEAR_BIT(&(Local_701.f_967), iVar0);
									}
								}
								else
								{
									func_2(iVar2);
								}
								break;
							}
						}
				}
				iVar0++;
			}
		}
	}
	func_539();
}

void func_539()
{
	iVar7 = 0;
	while (iVar7 < func_14())
	{
		iVar6 = 0;
		while (iVar6 < 10)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_701.f_193[iVar6][iVar7]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_193[iVar6][iVar7]))
			{
				if (func_337(Local_701.f_193[iVar6][iVar7]))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_ENT(Local_701.f_193[iVar6][iVar7]), 0, 0f, 0f, 5f, 0, 0, 1, 0);
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_701.f_193[iVar6][iVar7]) || (!NETWORK::_0xA1607996431332DF(Local_701.f_193[iVar6][iVar7]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_701.f_193[iVar6].f_5[iVar7]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_193[iVar6].f_5[iVar7]))
					{
						iVar4 = NETWORK::NET_TO_OBJ(Local_701.f_193[iVar6][iVar7]);
						iVar5 = NETWORK::NET_TO_OBJ(Local_701.f_193[iVar6].f_5[iVar7]);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_701.f_193[iVar6].f_5[iVar7]) || (!NETWORK::_0xA1607996431332DF(Local_701.f_193[iVar6].f_5[iVar7]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
						{
							if (func_337(Local_701.f_193[iVar6][iVar7]) && func_337(Local_701.f_193[iVar6].f_5[iVar7]))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_701.f_193[iVar6].f_15[iVar7], 2) && !GAMEPLAY::IS_BIT_SET(Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iVar7], 2))
								{
									if (GAMEPLAY::IS_BIT_SET(Local_701.f_193[iVar6].f_15[iVar7], 1) || GAMEPLAY::IS_BIT_SET(Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iVar7], 1))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar5))
										{
											if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iVar5, "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
											{
												GAMEPLAY::SET_BIT(&(Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iVar7]), 2);
												func_485(&(Local_701.f_193[iVar6].f_5[iVar7]));
												GAMEPLAY::CLEAR_BIT(&(Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iVar7]), 0);
												GAMEPLAY::CLEAR_BIT(&(Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iVar7]), 1);
												GAMEPLAY::CLEAR_BIT(&(Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iVar7]), 2);
											}
										}
									}
								}
								if (!GAMEPLAY::IS_BIT_SET(Local_701.f_193[iVar6].f_15[iVar7], 1) && !GAMEPLAY::IS_BIT_SET(Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iVar7], 1))
								{
									if (GAMEPLAY::IS_BIT_SET(Local_701.f_193[iVar6].f_15[iVar7], 0) || GAMEPLAY::IS_BIT_SET(Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iVar7], 0))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar5))
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar5, "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
											{
												GAMEPLAY::SET_BIT(&(Local_1685[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iVar7]), 1);
											}
										}
									}
								}
								if (!GAMEPLAY::IS_BIT_SET(Local_701.f_193[iVar6].f_15[iVar7], 0))
								{
									if (func_540(iVar6, iVar7))
									{
										ENTITY::PLAY_ENTITY_ANIM(iVar5, "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
										GAMEPLAY::SET_BIT(&(Local_701.f_193[iVar6].f_15[iVar7]), 0);
										AUDIO::PLAY_SOUND_FROM_ENTITY(Local_138.f_473, "Parachute_Land", iVar5, "DLC_Exec_Air_Drop_Sounds", 0, 0);
									}
									else
									{
										ROPE::SET_DAMPING(iVar4, 2, 0.0245f);
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(iVar4, 1) };
						if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3, 0, 0))
						{
							if (Var0.z < fVar3 && !ENTITY::IS_ENTITY_IN_WATER(iVar4))
							{
								if (func_337(Local_701.f_193[iVar6][iVar7]))
								{
									ENTITY::SET_ENTITY_COORDS(iVar4, Var0.x, Var0.y, fVar3, 1, 0, 0, 1);
								}
							}
						}
					}
					if (func_61())
					{
						if (!func_5(&(Local_701.f_193[iVar6].f_29[iVar7])))
						{
							func_4(&(Local_701.f_193[iVar6].f_29[iVar7]), 0, 0);
						}
						else if (func_26(&(Local_701.f_193[iVar6].f_29[iVar7]), 30000, 0))
						{
							func_484(&(Local_701.f_193[iVar6][iVar7]));
						}
					}
				}
			}
			iVar6++;
		}
		iVar7++;
	}
}

int func_540(int iParam0, int iParam1)
{
	if (func_26(&(Local_701.f_193[iParam0].f_20[iParam1]), 3000, 0))
	{
		if (!ENTITY::IS_ENTITY_IN_AIR(NETWORK::NET_TO_OBJ(Local_701.f_193[iParam0][iParam1])))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_701.f_193[iParam0][iParam1])))
	{
		return 1;
	}
	if (func_541(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_541(int iParam0, int iParam1)
{
	fVar0 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_701.f_193[iParam0][iParam1]));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_701.f_193[iParam0][iParam1]));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

int func_542(struct<3> Param0, float fParam3, int iParam4)
{
	iVar3 = Local_701.f_664[iParam4];
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_701.f_193[iVar3][iParam4]))
	{
		if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
		{
			Local_701.f_193[iVar3][iParam4] = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(1263688126, Param0, 0, func_545()));
			ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3][iParam4]), uParam3);
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_701.f_193[iVar3][iParam4], 1);
			if (!func_19())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3][iParam4]), 1);
			}
			OBJECT::_0x77F33F2CCF64B3AA(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3][iParam4]), 1);
			OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3][iParam4]), 1);
			ROPE::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3][iParam4]));
			ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3][iParam4]), 0f, 0f, -0.2f);
			if (!func_19())
			{
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3][iParam4]), 1, 0);
			}
			ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3][iParam4]), 1200);
			if (func_5(&(Local_701.f_193[iVar3].f_29[iParam4])))
			{
				func_335(&(Local_701.f_193[iVar3].f_29[iParam4]));
			}
			if (func_230())
			{
				ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3][iParam4]), 0, 0);
				unk_0x46F3ADD1E2D5BAF2(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3][iParam4]), 1);
			}
			if (func_248())
			{
				ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3][iParam4]), 0, 0);
			}
			Local_701.f_3 = NETWORK::NET_TO_ENT(Local_701.f_193[iVar3][iParam4]);
		}
	}
	if (func_544())
	{
		if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_701.f_193[iVar3][iParam4]))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_701.f_193[iVar3].f_5[iParam4]))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3][iParam4]), 1) };
					if (func_251(&(Local_701.f_193[iVar3].f_5[iParam4]), func_543(), Var0 + Vector(1f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						if (func_248())
						{
							ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3].f_5[iParam4]), 0, 0);
						}
						ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3].f_5[iParam4]), NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3][iParam4]), 0, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3].f_5[iParam4]), 1);
						ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3].f_5[iParam4]), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3].f_5[iParam4]));
						ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_701.f_193[iVar3].f_5[iParam4]), 1200);
						func_4(&(Local_701.f_193[iVar3].f_38[iParam4]), 0, 0);
						func_335(&(Local_701.f_193[iVar3].f_20[iParam4]));
					}
				}
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_701.f_193[iVar3][iParam4]) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_701.f_193[iVar3].f_5[iParam4]))
			{
				return 1;
			}
		}
	}
	else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_701.f_193[iVar3][iParam4]))
	{
		return 1;
	}
	return 0;
}

int func_543()
{
	return 886894755;
}

int func_544()
{
	if (func_443())
	{
		return 1;
	}
	return 0;
}

int func_545()
{
	switch (func_16())
	{
		case 3:
			return 1138881502;
		
		case 7:
			return 528555233;
		
		case 5:
			return -719727517;
		
		default:
	}
	if (func_61())
	{
		return 1688540826;
	}
	else if (func_443())
	{
		return 2042500905;
	}
	return 528555233;
}

float func_546(int iParam0)
{
	if (func_66(iParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(func_67(iParam0));
	}
	return fVar0;
}

Vector3 func_547()
{
	if (func_230())
	{
		return 0f, -5.2f, 1f;
	}
	if (!func_443())
	{
		return 0f, -6f, -0.32f;
	}
	return 0f, 0f, -1f;
}

int func_548()
{
	STREAMING::REQUEST_MODEL(func_545());
	STREAMING::REQUEST_MODEL(func_543());
	STREAMING::REQUEST_ANIM_DICT(func_549());
	if ((STREAMING::HAS_MODEL_LOADED(func_545()) && STREAMING::HAS_MODEL_LOADED(func_543())) && STREAMING::HAS_ANIM_DICT_LOADED(func_549()))
	{
		return 1;
	}
	return 0;
}

char* func_549()
{
	return "P_cargo_chute_S";
}

void func_550()
{
	if (func_230())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_701.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_701.f_3, 0))
		{
			if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(Local_701.f_3))
			{
				if (func_5(&(Local_701.f_12)))
				{
					func_335(&(Local_701.f_12));
				}
			}
			else if (func_5(&(Local_701.f_12)))
			{
				if (func_26(&(Local_701.f_12), 500, 0))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_701.f_3, 1, 0);
				}
			}
			else
			{
				func_4(&(Local_701.f_12), 0, 0);
			}
		}
	}
}

int func_551()
{
	func_612();
	func_611();
	func_605();
	func_603();
	if (((((func_589() && func_587()) && func_579()) && func_577()) && func_575()) && func_574())
	{
		func_573();
		func_572();
		func_571();
		if (func_557())
		{
			func_556();
			if (func_45() && !func_15())
			{
				Local_701.f_966 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, func_14());
			}
			Local_701.f_174 = func_73(-1);
			func_554();
			if (func_44())
			{
				func_553(&(Local_701.f_154));
			}
			Local_701.f_53 = PLAYER::PLAYER_ID();
			Local_701.f_27 = func_59();
			func_552();
			STATS::_0x6DEE77AFF8C21BD1(&(Local_701.f_19), &(Local_701.f_20));
			return 1;
		}
	}
	return 0;
}

void func_552()
{
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (func_61())
		{
			Local_701.f_28[iVar0] = { func_358(iVar0, 0, Local_701.f_110, Local_701.f_957, 0) };
			Local_701.f_41[iVar0] = func_464(iVar0, 0, Local_701.f_110, Local_701.f_957, 0);
		}
		else if (func_443())
		{
			Local_701.f_28[iVar0] = { func_463(iVar0) };
			Local_701.f_41[iVar0] = func_461(iVar0);
		}
		if (!func_168(Local_701.f_28[iVar0], 4f, 1f, 1f, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			GAMEPLAY::CLEAR_AREA(Local_701.f_28[iVar0], 4f, 1, 0, 0, 1);
		}
		iVar0++;
	}
}

void func_553(var uParam0)
{
	*uParam0 = 1;
}

void func_554()
{
	if (func_361())
	{
		if (func_14() == 1)
		{
			Local_701.f_893[0] = func_555();
		}
		else if (func_14() == 2)
		{
			Local_701.f_893[0] = (func_555() / 2);
			Local_701.f_893[1] = (func_555() / 2);
		}
		else if (func_14() == 3)
		{
			Local_701.f_893[0] = (func_555() / 3);
			Local_701.f_893[1] = (func_555() / 3);
			Local_701.f_893[2] = (func_555() / 3);
		}
	}
}

int func_555()
{
	return Global_262145.f_18597;
}

void func_556()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_18())
		{
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				Local_701.f_884 = 1822107721;
			}
			Local_701.f_884 = 2064532783;
			Local_701.f_883 = 788045382;
		}
	}
}

bool func_557()
{
	if (func_570())
	{
		iVar1 = func_569();
		iVar2 = 1;
	}
	else if (!func_568())
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, func_228());
		iVar2 = 1;
		if (func_567(iVar0))
		{
			return 0;
		}
		if ((func_15() || func_74()) || func_43())
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (iVar0 + Local_701.f_143);
		}
	}
	else if (func_248() || func_362())
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, func_566());
		if (((func_248() && func_240()) && iVar0 == 3) && Local_701.f_977 == 0)
		{
			Local_701.f_977 = 1;
		}
		iVar2 = 1;
		iVar1 = iVar0;
	}
	else if (func_19())
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, func_228());
		iVar2 = 1;
		iVar1 = iVar0;
	}
	else if (func_361())
	{
		iVar1 = Local_701.f_143;
	}
	else if (func_230())
	{
		iVar1 = Local_701.f_143;
		iVar2 = 1;
	}
	else if (func_23())
	{
		iVar1 = Local_701.f_143;
		iVar2 = 1;
	}
	else
	{
		iVar1 = (iVar0 + Local_701.f_143);
	}
	if (func_74())
	{
		if (iVar1 >= 20)
		{
			iVar1 = 0;
		}
	}
	else if (((!func_362() && !func_248()) && !func_15()) && !func_43())
	{
		if (iVar1 >= func_73(-1))
		{
			iVar1 = 0;
		}
	}
	iVar3 = func_73(-1);
	if (func_361())
	{
		iVar3 = (func_73(-1) / func_14());
	}
	else if (func_15())
	{
		iVar3 = 3;
	}
	if (iVar1 > -1)
	{
		if (func_561(iVar1))
		{
			if (Local_701.f_143 < iVar3)
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_701.f_144, iVar1))
				{
					Local_701.f_143++;
					if (iVar2 || iVar1 < func_560())
					{
						iVar4 = 0;
						bVar5 = func_559();
						iVar6 = func_14();
						bVar7 = func_15();
						if (((bVar7 || func_43()) || func_44()) || func_23())
						{
							iVar6 = func_24();
						}
						iVar4 = 0;
						while (iVar4 < iVar6)
						{
							if (bVar5)
							{
								if (Local_701.f_681[iVar4] < (iVar3 / iVar6))
								{
									func_558(iVar4, iVar1);
									Local_701.f_681[iVar4]++;
									iVar4 = iVar6;
								}
							}
							else
							{
								if (bVar7 && Local_701.f_143 != 1)
								{
									GAMEPLAY::SET_BIT(&(Local_701.f_145[iVar4]), iVar1);
								}
								func_558(iVar4, iVar1);
							}
							iVar4++;
						}
						GAMEPLAY::SET_BIT(&(Local_701.f_144), iVar1);
					}
					if ((((!func_568() && !func_74()) && !func_15()) && !func_43()) || func_27())
					{
						return 1;
					}
				}
			}
		}
	}
	return Local_701.f_143 == iVar3;
}

void func_558(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Local_701.f_134[iParam0]), iParam1);
}

int func_559()
{
	if (((((func_230() || func_248()) || func_19()) || func_362()) || func_43()) || func_74())
	{
		return 1;
	}
	return 0;
}

int func_560()
{
	return 5;
}

int func_561(int iParam0)
{
	if (func_565())
	{
		Var1 = { func_563(Local_701) };
		iVar4 = 0;
		while (iVar4 < func_14())
		{
			fVar0 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_407(func_16(), iParam0, Local_701.f_679, iVar4, 0, 0), Var1, 1);
			if (fVar0 >= func_562())
			{
				return 1;
			}
			iVar4++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

float func_562()
{
	return Global_262145.f_18039;
}

Vector3 func_563(int iParam0)
{
	iVar0 = func_564(iParam0);
	switch (iVar0)
	{
		case 1:
			Var1 = { 1049.6f, -3196.6f, -38.5f };
			break;
		
		case 3:
			Var1 = { 1009.5f, -3196.6f, -38.5f };
			break;
		
		case 4:
			Var1 = { 1093.6f, -3196.6f, -38.5f };
			break;
		
		case 2:
			Var1 = { 1124.6f, -3196.6f, -38.5f };
			break;
		
		case 0:
			Var1 = { 1165f, -3196.6f, -38.2f };
			break;
		
		case 5:
			Var1 = { 938.3077f, -3196.112f, -100f };
			break;
	}
	return Var1;
}

int func_564(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

int func_565()
{
	switch (func_16())
	{
		case 3:
		case 8:
		case 10:
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

int func_566()
{
	if (func_248() || func_362())
	{
		return 15;
	}
	return 10;
}

int func_567(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_15250;
		
		case 1:
			return Global_262145.f_15251;
		
		case 2:
			return Global_262145.f_15252;
		
		case 3:
			return Global_262145.f_15253;
		
		case 4:
			return Global_262145.f_15254;
		
		case 5:
			return Global_262145.f_15255;
		
		case 6:
			return Global_262145.f_15256;
		
		case 7:
			return Global_262145.f_15257;
		
		case 8:
			return Global_262145.f_15258;
		
		case 9:
			return Global_262145.f_15259;
		
		case 10:
			return Global_262145.f_15260;
		
		case 11:
			return Global_262145.f_15261;
		
		case 12:
			return Global_262145.f_15262;
		
		case 13:
			return Global_262145.f_15263;
		
		case 14:
			return Global_262145.f_15264;
		
		case 15:
			return Global_262145.f_15265;
		
		case 16:
			return Global_262145.f_15266;
		
		case 17:
			return Global_262145.f_15267;
		
		case 18:
			return Global_262145.f_15268;
		
		case 19:
			return Global_262145.f_15269;
		
		default:
	}
	return 0;
}

int func_568()
{
	if ((func_529() || func_443()) || func_18())
	{
		return 1;
	}
	return 0;
}

int func_569()
{
	fVar6[0] = 0f;
	fVar6[1] = 0f;
	fVar6[2] = 0f;
	iVar1[0] = -1;
	iVar1[1] = -1;
	iVar1[2] = -1;
	Var10 = { func_563(Local_701) };
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Var13 = { func_407(func_16(), iVar0, iVar0, -1, 0, 0) };
		fVar5 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var10, Var13, 0);
		if (fVar5 > fVar6[0])
		{
			fVar6[2] = fVar6[1];
			iVar1[2] = iVar1[1];
			fVar6[1] = fVar6[0];
			iVar1[1] = iVar1[0];
			fVar6[0] = fVar5;
			iVar1[0] = iVar0;
		}
		else if (fVar5 < fVar6[0] && fVar5 > fVar6[1])
		{
			fVar6[2] = fVar6[1];
			iVar1[2] = iVar1[1];
			fVar6[1] = fVar5;
			iVar1[1] = iVar0;
		}
		else if (fVar5 < fVar6[1] && fVar5 > fVar6[2])
		{
			fVar6[2] = fVar5;
			iVar1[2] = iVar0;
		}
		iVar0++;
	}
	if ((iVar1[0] != -1 && iVar1[1] != -1) && iVar1[2] != -1)
	{
		iVar16 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3);
		return iVar1[iVar16];
	}
	return -1;
}

int func_570()
{
	switch (func_16())
	{
		case 7:
		case 0:
		case 11:
		case 12:
			return 1;
			break;
	}
	return 0;
}

void func_571()
{
	if (func_448() && !func_362())
	{
		iVar0 = 0;
		while (iVar0 < func_72())
		{
			func_252(func_445(iVar0, 0));
			iVar0++;
		}
	}
	if (func_238())
	{
		iVar0 = 0;
		while (iVar0 < func_237())
		{
			func_252(func_235(iVar0));
			iVar0++;
		}
	}
	if (func_354())
	{
		func_252(func_344());
	}
	if (func_342() && func_242())
	{
		iVar0 = 0;
		while (iVar0 < func_241())
		{
			func_252(func_239(iVar0));
			iVar0++;
		}
	}
	if (func_316())
	{
		func_252(func_314());
	}
	if (func_254())
	{
		func_252(func_253());
	}
}

void func_572()
{
	if (Local_701.f_694 == -1 && func_17())
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(30000, 120000);
		Local_701.f_694 = iVar0;
	}
}

void func_573()
{
	if (Local_701.f_693 == -1 && (func_27() || func_17()))
	{
		Local_701.f_693 = 0;
	}
}

int func_574()
{
	if (func_15())
	{
		if ((!func_29(25) && !func_29(24)) && !func_29(28))
		{
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 150);
			if (iVar0 > 100)
			{
				func_28(28);
			}
			else if (iVar0 > 50)
			{
				func_28(25);
			}
			else
			{
				func_28(24);
			}
		}
	}
	return 1;
}

int func_575()
{
	if (!func_62(29))
	{
		if ((((func_568() || func_27()) || func_43()) || func_44()) || func_15())
		{
			iVar1 = 5;
			if (func_44() || func_15())
			{
				iVar1 = 10;
			}
			else if (func_43())
			{
				iVar1 = 20;
			}
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar1);
			if (func_576(iVar0))
			{
				return 0;
			}
			Local_701.f_679 = iVar0;
			if (Local_701.f_981 == -1)
			{
				Local_701.f_981 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3);
			}
			func_48(29);
		}
		else
		{
			func_48(29);
			return 1;
		}
	}
	return func_62(29);
}

int func_576(int iParam0)
{
	switch (func_16())
	{
		case 9:
			if (func_240())
			{
				switch (iParam0)
				{
					case 0:
						return Global_262145.f_18057;
					
					case 1:
						return Global_262145.f_18058;
					
					case 2:
						return Global_262145.f_18059;
					
					case 3:
						return Global_262145.f_18060;
					
					case 4:
						return Global_262145.f_18061;
					
					default:
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return Global_262145.f_18062;
					
					case 1:
						return Global_262145.f_18063;
					
					case 2:
						return Global_262145.f_18064;
					
					case 3:
						return Global_262145.f_18065;
					
					case 4:
						return Global_262145.f_18066;
					}
				
				default:
			}
			break;
	}
	return 0;
}

int func_577()
{
	if (!func_62(28))
	{
		iVar3 = func_578(PLAYER::PLAYER_ID());
		if (func_443())
		{
			switch (func_46())
			{
				case 0:
					iVar0 = iVar3 * 3;
					break;
				
				case 1:
					iVar0 = iVar3 * 3;
					iVar1 = iVar0 + 1;
					if (iVar0 == iVar1)
					{
						return 0;
					}
					break;
				
				case 2:
					iVar0 = iVar3 * 3;
					iVar1 = iVar0 + 1;
					iVar2 = iVar1 + 1;
					if ((iVar0 == iVar1 || iVar0 == iVar2) || iVar1 == iVar2)
					{
						return 0;
					}
					break;
			}
		}
		else
		{
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 5);
		}
		Local_701.f_700[0] = iVar0;
		Local_701.f_700[1] = iVar1;
		Local_701.f_700[2] = iVar2;
		func_48(28);
	}
	return func_62(28);
}

int func_578(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar1 < Global_262145.f_12366)
	{
		if (Global_1650640.f_11.f_132[iVar1] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_579()
{
	if (Local_701.f_957 == -1)
	{
		uVar1 = func_582(&uVar0);
		func_581(uVar1);
		func_580(uVar0);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_580(var uParam0)
{
	Local_701.f_958 = uParam0;
}

void func_581(var uParam0)
{
	Local_701.f_957 = uParam0;
}

int func_582(var uParam0)
{
	Var0 = { func_586() };
	iVar2 = func_564(Var0);
	iVar3 = func_1923(PLAYER::PLAYER_ID(), Var0);
	if (iVar3 > func_585(iVar2, Var0))
	{
		*uParam0 = iVar3;
		return 2;
	}
	else if (iVar3 > func_583(iVar2, Var0) && iVar3 <= func_585(iVar2, Var0))
	{
		*uParam0 = iVar3;
		return 1;
	}
	else if (iVar3 > 0 && iVar3 <= func_583(iVar2, Var0))
	{
		*uParam0 = iVar3;
		return 0;
	}
	*uParam0 = 1;
	return -1;
}

int func_583(int iParam0, int iParam1)
{
	fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18035);
	fVar1 = (fVar0 / 100f);
	fVar2 = fVar1;
	switch (iParam0)
	{
		case 4:
			return SYSTEM::CEIL((IntToFloat(func_584(iParam1)) * fVar2));
		
		case 0:
			return SYSTEM::CEIL((IntToFloat(func_584(iParam1)) * fVar2));
		
		case 2:
			return SYSTEM::CEIL((IntToFloat(func_584(iParam1)) * fVar2));
		
		case 3:
			return SYSTEM::CEIL((IntToFloat(func_584(iParam1)) * fVar2));
		
		case 1:
			return SYSTEM::CEIL((IntToFloat(func_584(iParam1)) * fVar2));
		
		default:
	}
	return 5;
}

int func_584(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_18439;
		
		case 1:
			return Global_262145.f_18447;
		
		case 3:
			return Global_262145.f_18455;
		
		case 5:
			return Global_262145.f_18463;
		
		case 4:
			return Global_262145.f_18471;
		
		case 7:
			return Global_262145.f_18439;
		
		case 6:
			return Global_262145.f_18447;
		
		case 8:
			return Global_262145.f_18455;
		
		case 10:
			return Global_262145.f_18463;
		
		case 9:
			return Global_262145.f_18471;
		
		case 12:
			return Global_262145.f_18439;
		
		case 11:
			return Global_262145.f_18447;
		
		case 13:
			return Global_262145.f_18455;
		
		case 15:
			return Global_262145.f_18463;
		
		case 14:
			return Global_262145.f_18471;
		
		case 17:
			return Global_262145.f_18439;
		
		case 16:
			return Global_262145.f_18447;
		
		case 18:
			return Global_262145.f_18455;
		
		case 20:
			return Global_262145.f_18463;
		
		case 19:
			return Global_262145.f_18471;
		
		case 21:
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
			return Global_262145.f_21054;
		
		default:
	}
	return 0;
}

int func_585(int iParam0, int iParam1)
{
	fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18036);
	fVar1 = (fVar0 / 100f);
	fVar2 = fVar1;
	switch (iParam0)
	{
		case 4:
			return SYSTEM::CEIL((IntToFloat(func_584(iParam1)) * fVar2));
		
		case 0:
			return SYSTEM::CEIL((IntToFloat(func_584(iParam1)) * fVar2));
		
		case 2:
			return SYSTEM::CEIL((IntToFloat(func_584(iParam1)) * fVar2));
		
		case 3:
			return SYSTEM::CEIL((IntToFloat(func_584(iParam1)) * fVar2));
		
		case 1:
			return SYSTEM::CEIL((IntToFloat(func_584(iParam1)) * fVar2));
		
		default:
	}
	return 5;
}

struct<2> func_586()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11.f_193;
}

int func_587()
{
	if (Local_701.f_110 == -1)
	{
		Local_701.f_110 = Local_138.f_195;
		if (Local_701.f_110 < 1)
		{
			Local_701.f_110 = 1;
		}
		Local_701.f_111 = func_588();
		if (Local_701.f_111 <= 0)
		{
			Local_701.f_111 = 1;
			func_28(2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

var func_588()
{
	return Local_701.f_969;
}

int func_589()
{
	if (func_16() == 13)
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 13);
		if (((((!func_601(iVar0) && !func_600(iVar0)) && !func_596(iVar0)) && func_595(iVar0)) && func_594(iVar0)) && func_593(iVar0))
		{
			Local_701.f_17 = iVar0;
			func_592(iVar0);
			func_590(iVar0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_590(int iParam0)
{
	Global_2537071.f_5124.f_363 = func_591(iParam0);
}

int func_591(int iParam0)
{
	if (iParam0 == 13)
	{
		iParam0 = func_16();
	}
	if (func_61())
	{
		return 0;
	}
	else if (func_443())
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

void func_592(int iParam0)
{
	if (Global_2537071.f_5124.f_352[0] == 13)
	{
		Global_2537071.f_5124.f_352[0] = iParam0;
		return;
	}
	else
	{
		Global_2537071.f_5124.f_352[3] = Global_2537071.f_5124.f_352[2];
		Global_2537071.f_5124.f_352[2] = Global_2537071.f_5124.f_352[1];
		Global_2537071.f_5124.f_352[1] = Global_2537071.f_5124.f_352[0];
		Global_2537071.f_5124.f_352[0] = iParam0;
	}
}

int func_593(int iParam0)
{
	fVar0 = SYSTEM::TO_FLOAT((func_1923(PLAYER::PLAYER_ID(), Local_701) / Local_701.f_112));
	switch (iParam0)
	{
		case 10:
			if (fVar0 < IntToFloat(Global_262145.f_18097))
			{
				return 0;
			}
			break;
		
		case 11:
			if (fVar0 < IntToFloat(Global_262145.f_18102))
			{
				return 0;
			}
			break;
		
		case 12:
			if (fVar0 < IntToFloat(Global_262145.f_18107))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_594(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			if (Local_701.f_112 < Global_262145.f_18096)
			{
				return 0;
			}
			break;
		
		case 11:
			if (Local_701.f_112 < Global_262145.f_18101)
			{
				return 0;
			}
			break;
		
		case 12:
			if (Local_701.f_112 < Global_262145.f_18106)
			{
				return 0;
			}
			break;
		
		case 7:
			if (func_280() + 1 < Global_262145.f_18048)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_595(int iParam0)
{
	if (((((((((iParam0 == 0 || iParam0 == 9) || iParam0 == 2) || iParam0 == 1) || iParam0 == 3) || iParam0 == 5) || iParam0 == 8) || iParam0 == 10) || iParam0 == 11) || iParam0 == 12)
	{
		return 1;
	}
	if (iParam0 == 6 && Local_701.f_1 == 4)
	{
		return 1;
	}
	if (iParam0 == 4 && Local_701.f_1 == 0)
	{
		return 1;
	}
	if (iParam0 == 3 && Local_701.f_1 == 1)
	{
		return 1;
	}
	if (iParam0 == 7 && Local_701.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_596(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (func_80(iVar2))
			{
				if (func_599(iVar2) == 190)
				{
					iVar1 = func_597(iVar2);
					if (iParam0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_597(int iParam0)
{
	if (func_598(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_495;
	}
	return -1;
}

int func_598(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_599(int iParam0)
{
	if (func_598(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_600(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_18043;
		
		case 3:
			return Global_262145.f_18045;
		
		case 7:
			return Global_262145.f_18049;
		
		case 4:
			return Global_262145.f_18051;
		
		case 9:
			return Global_262145.f_18056;
		
		case 2:
			return Global_262145.f_18078;
		
		case 5:
			return Global_262145.f_18081;
		
		case 1:
			return Global_262145.f_18083;
		
		case 6:
			return Global_262145.f_18090;
		
		case 8:
			return Global_262145.f_18092;
		
		case 10:
			return Global_262145.f_18098;
		
		case 11:
			return Global_262145.f_18103;
		
		case 12:
			return Global_262145.f_18108;
		
		default:
	}
	return 0;
}

int func_601(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_602())
	{
		if (Global_2537071.f_5124.f_352[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_602()
{
	return Global_262145.f_18037;
}

void func_603()
{
	if (Local_701.f_16 == 0)
	{
		switch (Local_701.f_1)
		{
			case 4:
				Local_701.f_16 = func_604(Global_262145.f_17784);
				break;
			
			case 0:
				Local_701.f_16 = func_604(Global_262145.f_17781);
				break;
			
			case 2:
				Local_701.f_16 = func_604(Global_262145.f_17782);
				break;
			
			case 3:
				Local_701.f_16 = func_604(Global_262145.f_17783);
				break;
			
			case 1:
				Local_701.f_16 = func_604(Global_262145.f_17780);
				break;
			}
	}
}

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

void func_605()
{
	if (Local_701 == 0)
	{
		Var1.f_1 = -1;
		Var1 = { func_586() };
		iVar3 = func_564(Var1);
		Local_701 = Var1;
		Local_701.f_1 = iVar3;
		Local_701.f_2 = Var1.f_1;
		iVar5 = 8;
		if (func_23())
		{
			iVar5 = Global_262145.f_18052;
		}
		iVar4 = 0;
		while (iVar4 < 32)
		{
			if (iVar0 < iVar5 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar4)))
			{
				iVar6 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
				if (func_609(iVar6, func_281(), 1))
				{
					if (func_608(iVar6))
					{
						if (func_606(iVar6) == Local_701)
						{
							Local_701.f_101[iVar0] = iVar4;
							iVar0++;
						}
					}
				}
			}
			iVar4++;
		}
		Local_701.f_112 = iVar0;
	}
}

int func_606(int iParam0)
{
	if (func_608(iParam0))
	{
		return func_607(Global_2425662[iParam0].f_310.f_5);
	}
	return 0;
}

int func_607(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
			break;
		
		case 71:
			return 22;
			break;
		
		case 72:
			return 23;
			break;
		
		case 73:
			return 24;
			break;
		
		case 74:
			return 25;
			break;
		
		case 75:
			return 26;
			break;
		
		case 76:
			return 27;
			break;
		
		case 77:
			return 28;
			break;
		
		case 78:
			return 29;
			break;
		
		case 79:
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

int func_608(int iParam0)
{
	if (iParam0 != func_59())
	{
		if (func_2153(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_181(Global_2425662[iParam0].f_310.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_609(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_59())
	{
		if (!bParam2)
		{
			if (func_610(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_59())
		{
			return iParam1 == Global_1628237[iParam0].f_11;
		}
	}
	return 0;
}

int func_610(int iParam0, int iParam1)
{
	if (iParam1 != func_59())
	{
		if (iParam0 != func_59())
		{
			if (Global_1628237[iParam0].f_11 != func_59())
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

void func_611()
{
	if (Local_701.f_969 == -1)
	{
		Local_701.f_969 = Global_1676227;
	}
}

void func_612()
{
	if (Local_701.f_968 == -1)
	{
		Local_701.f_968 = Global_1676229;
	}
}

void func_613(int iParam0)
{
	Local_701.f_5 = iParam0;
}

int func_614()
{
	if (Global_2537071.f_5124.f_40)
	{
		Global_2537071.f_5124.f_40 = 0;
		return 1;
	}
	return 0;
}

void func_615()
{
	func_1907();
	func_1902();
	func_1901();
	func_1896();
	func_1893();
	func_1892();
	func_1890();
	func_1889();
	func_1888();
	func_1887();
	func_1867();
	func_1866();
	if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
	{
		unk_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
	}
	switch (func_466())
	{
		case 0:
			break;
		
		case 1:
			if (!func_1865(2))
			{
				func_1843(190, 1, Local_701.f_17, 0);
				func_1841();
				func_1840(1);
				if (func_1839())
				{
					func_1838();
				}
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(210.93f, -2022.58f, 17.65f, 6f, -1234764774, 0))
				{
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(-1234764774, 210.93f, -2022.58f, 17.65f, 1, 1f, 0);
				}
				func_1837(2);
				if (func_44())
				{
					func_1834(&uLocal_676, &(Local_701.f_154), func_407(func_16(), 0, Local_701.f_679, 0, 0, 0), Local_138.f_28[0]);
				}
			}
			else if (!func_1865(3))
			{
				if (func_26(&(Local_701.f_10), 10000, 0))
				{
					func_1833();
					func_1837(3);
				}
			}
			if (func_608(PLAYER::PLAYER_ID()) && func_606(PLAYER::PLAYER_ID()) == Local_701)
			{
				func_1832();
			}
			else
			{
				if (func_608(PLAYER::PLAYER_ID()))
				{
				}
				if ((!func_1828() && !func_1827()) && !func_1826(190))
				{
					if (func_234() == 0)
					{
						if (func_1806(1, 1, 1, 0) || func_225(0))
						{
							if (!func_1865(4))
							{
								func_1725(func_16(), Local_701, 0, -1, 0, 0);
								func_1837(4);
							}
							func_1620(&(Global_1366905.f_534), &Global_1366905, 28, &(Global_1366905.f_1), &(Global_1366905.f_117), -1, 0, 0);
							func_1460();
							if (!Global_1676377.f_474)
							{
								func_1414(0);
								func_1349(0);
								func_1331();
							}
							UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
							UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
							UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
							func_1329();
							func_1327();
							func_1325();
							func_1324();
							func_1323();
							func_1322();
							func_1319();
							func_1308();
							if (func_15() && func_41())
							{
								if (!func_1307(4))
								{
									if (func_29(25))
									{
										func_1306(4);
										if (PLAYER::GET_MAX_WANTED_LEVEL() < func_1305())
										{
											PLAYER::SET_MAX_WANTED_LEVEL(func_1305());
										}
										func_1302(func_1305());
										func_526(5);
									}
									else
									{
										func_1306(4);
									}
								}
								if (!func_1301(30))
								{
									if (func_1865(29))
									{
										if (func_26(&(Local_138.f_261), 10000, 0))
										{
											if (func_29(25) || func_29(24))
											{
												if (!func_29(28))
												{
													func_1300(29);
												}
											}
											func_1299(30);
										}
									}
								}
							}
							if (func_44())
							{
								func_1223(&uLocal_676, &(Local_701.f_154), 5f);
								if (!func_1222() && !func_82(PLAYER::PLAYER_ID(), 15))
								{
									if (!func_82(PLAYER::PLAYER_ID(), 16))
									{
										func_1221(15);
									}
								}
								if (!func_1220())
								{
									func_1219();
								}
							}
							if (((func_362() || func_248()) || func_27()) || func_529())
							{
								func_1173();
							}
							if (iLocal_666 > -1)
							{
								if (iLocal_666 == NETWORK::PARTICIPANT_ID_TO_INT())
								{
								}
							}
						}
					}
				}
				else
				{
					func_1172(24);
					func_1165();
				}
			}
			break;
		
		case 2:
			if (func_234() != 7)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_1674347.f_3, 4))
				{
					GAMEPLAY::SET_BIT(&(Global_1674347.f_3), 4);
				}
			}
			else
			{
				func_1163();
			}
			func_1162();
			func_1160();
			func_1155();
			func_1135(0);
			func_1134();
			func_1414(1);
			func_1349(1);
			func_854();
			func_850(Local_701.f_110);
			func_843();
			func_841(0);
			if (func_2153(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (func_839(PLAYER::PLAYER_PED_ID(), 2, -1))
				{
					func_618(PLAYER::PLAYER_PED_ID(), 2, -1, -1);
				}
			}
			func_616();
			break;
		
		case 3:
			break;
	}
}

void func_616()
{
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_701.f_59[iVar0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_67(iVar0)))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_67(iVar0)))
				{
					if (!ENTITY::IS_ENTITY_DEAD(func_67(iVar0), 0))
					{
						func_617(func_13(iVar0));
					}
				}
			}
		}
		iVar0++;
	}
}

void func_617(int iParam0)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandOwner", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "ContrabandOwner"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "ContrabandOwner");
		}
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandDeliveryType", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "ContrabandDeliveryType"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "ContrabandDeliveryType");
		}
	}
}

void func_618(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::_NETWORK_GET_PED_PLAYER(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_76504[iVar1] = -1;
		Global_76504.f_13[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_76504.f_26)
	{
		Global_76504.f_26[iVar1] = -1;
		Global_76504.f_36[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_76504.f_46)
	{
		Global_76504.f_46[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (func_833(iParam0, &Global_76504, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_76504[iVar1] != -1)
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar1) == Global_76504[iVar1] && PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar1) == Global_76504.f_13[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_76504.f_26)
		{
			if (Global_76504.f_26[iVar1] != -1 && Global_76504.f_26[iVar1] != 255)
			{
				if (PED::GET_PED_PROP_INDEX(iParam0, iVar1) == Global_76504.f_26[iVar1] && PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iVar1) == Global_76504.f_36[iVar1])
				{
					PED::CLEAR_PED_PROP(iParam0, iVar1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!func_832())
			{
				if (func_831(161, -1))
				{
					func_641(iParam0, 2, func_430(2051, Global_76431, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_641(iParam0, 2, func_430(752, Global_76431, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != PLAYER::PLAYER_ID())
				{
					if (NETWORK::_0x237D5336A9A54108(PLAYER::INT_TO_PLAYERINDEX(iParam2)))
					{
						NETWORK::_0x99B72C7ABDE5C910(iParam0, PLAYER::INT_TO_PLAYERINDEX(iParam2));
					}
				}
				else
				{
					func_624(iParam0, -1);
				}
			}
			func_623(0);
			func_619(1, 2);
		}
	}
}

void func_619(int iParam0, int iParam1)
{
	bVar0 = iParam0 != true;
	bVar1 = iParam1 != 2;
	if (bVar0 == 1)
	{
		bVar2 = false;
		if (!iParam0 == 3)
		{
			if (GRAPHICS::_IS_SEETHROUGH_ACTIVE())
			{
				unk_0x0C8FAC83902A62DF(Global_1661288);
				Global_1661288 = -1f;
				GRAPHICS::SET_SEETHROUGH(false);
				bVar2 = true;
			}
			GRAPHICS::SET_NIGHTVISION(bVar0);
			GAMEPLAY::SET_BIT(&(Global_1654919[PLAYER::PLAYER_ID()].f_198), 0);
		}
		else
		{
			if (GRAPHICS::_0x35FB78DC42B7BD21() || GRAPHICS::_IS_NIGHTVISION_INACTIVE())
			{
				GRAPHICS::SET_NIGHTVISION(false);
				bVar2 = true;
			}
			GRAPHICS::SET_SEETHROUGH(bVar0);
			Global_1661288 = unk_0x43DBAE39626CE83F();
			unk_0x0C8FAC83902A62DF(0.5f);
			GAMEPLAY::SET_BIT(&(Global_1654919[PLAYER::PLAYER_ID()].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1661289 == -1)
			{
				Global_1661289 = AUDIO::GET_SOUND_ID();
			}
			if (!Global_1661289 == -1 && AUDIO::HAS_SOUND_FINISHED(Global_1661289))
			{
				if (iParam1 == 1)
				{
					if (!bVar2)
					{
						AUDIO::PLAY_SOUND_FRONTEND(Global_1661289, "On", "GTAO_Vision_Modes_SoundSet", 0);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(Global_1661289, "Switch", "GTAO_Vision_Modes_SoundSet", 0);
					}
				}
				else if (bVar1)
				{
					if (!bVar2)
					{
						AUDIO::PLAY_SOUND_FRONTEND(Global_1661289, "On", "GTAO_Vision_Modes_SoundSet", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(Global_1661289, "Switch", "GTAO_Vision_Modes_SoundSet", 1);
					}
				}
			}
		}
	}
	else
	{
		if (GRAPHICS::_0x35FB78DC42B7BD21() || GRAPHICS::_IS_NIGHTVISION_INACTIVE())
		{
			GRAPHICS::SET_NIGHTVISION(bVar0);
			GAMEPLAY::CLEAR_BIT(&(Global_1654919[PLAYER::PLAYER_ID()].f_198), 0);
		}
		if (GRAPHICS::_IS_SEETHROUGH_ACTIVE())
		{
			unk_0x0C8FAC83902A62DF(Global_1661288);
			Global_1661288 = -1f;
			GRAPHICS::SET_SEETHROUGH(bVar0);
			GAMEPLAY::CLEAR_BIT(&(Global_1654919[PLAYER::PLAYER_ID()].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1661289 == -1)
			{
				Global_1661289 = AUDIO::GET_SOUND_ID();
			}
			if (!Global_1661289 == -1 && AUDIO::HAS_SOUND_FINISHED(Global_1661289))
			{
				if (iParam1 == 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(Global_1661289, "Off", "GTAO_Vision_Modes_SoundSet", 0);
				}
				else if (bVar1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(Global_1661289, "Off", "GTAO_Vision_Modes_SoundSet", 1);
				}
			}
		}
	}
	func_620(!bVar0);
}

void func_620(bool bParam0)
{
	func_621(304, bParam0, -1, 1);
}

void func_621(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_622())
	{
		iVar0 = Global_2583656[iParam0][func_431(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_622()
{
	return 1;
	return 0;
}

void func_623(bool bParam0)
{
	if (Global_4267487 != bParam0)
	{
		Global_4267487 = bParam0;
		if (bParam0)
		{
			StringCopy(&Global_4267488, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
		}
		else
		{
			StringCopy(&Global_4267488, "", 64);
		}
	}
}

void func_624(int iParam0, int iParam1)
{
	if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0))
	{
	}
	PED::_GET_PED_HEAD_BLEND_DATA(iParam0, &Var0);
	iVar10 = func_430(2095, iParam1, 0);
	iVar11 = func_430(2096, iParam1, 0);
	iVar12 = func_430(2097, iParam1, 0);
	iVar13 = func_430(2098, iParam1, 0);
	iVar14 = func_430(2099, iParam1, 0);
	iVar15 = func_430(2100, iParam1, 0);
	fVar16 = func_640(134, iParam1);
	fVar17 = func_640(135, iParam1);
	fVar18 = func_640(136, iParam1);
	bVar19 = func_831(160, iParam1);
	if (((((((((Var0 != iVar10 || Var0.f_1 != iVar11) || Var0.f_2 != iVar12) || Var0.f_3 != iVar13) || Var0.f_4 != iVar14) || Var0.f_5 != iVar15) || Var0.f_6 != fVar16) || Var0.f_7 != fVar17) || Var0.f_8 != fVar18) || Var0.f_9 != bVar19)
	{
		PED::SET_PED_HEAD_BLEND_DATA(iParam0, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, fVar16, fVar17, fVar18, bVar19);
		iVar20 = func_430(2101, iParam1, 0);
		if (iVar20 > 0)
		{
			func_625(iParam0, iParam1, 0);
		}
	}
}

void func_625(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_639(iVar1);
		if (!bParam2)
		{
			fVar3 = func_640(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_638(iVar2, iParam1);
		}
		PED::_SET_PED_FACE_FEATURE(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_637(iVar4);
		iVar6 = func_636(iVar5);
		iVar7 = func_635(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				iVar10 = func_632(iVar6, iParam1, -1);
				uVar11 = func_640(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_631(iVar6, iParam1);
				uVar11 = func_638(iVar7, iParam1);
			}
			PED::SET_PED_HEAD_OVERLAY(iParam0, iVar5, iVar10, uVar11);
			iVar8 = func_630(iVar5);
			iVar9 = func_629(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_430(iVar8, iParam1, 0);
					iVar14 = func_430(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_628(iVar8, iParam1);
					iVar14 = func_628(iVar9, iParam1);
				}
				func_627(iVar13, &uVar12, &uVar15);
				PED::_SET_PED_HEAD_OVERLAY_COLOR(iParam0, iVar5, uVar15, uVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_626(&iParam0, iParam1, bParam2);
}

void func_626(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		fVar0 = func_640(157, iParam1);
	}
	else
	{
		fVar0 = func_638(157, iParam1);
	}
	if (*iParam0 == PLAYER::PLAYER_PED_ID())
	{
	}
	PED::_SET_PED_EYE_COLOR(*iParam0, SYSTEM::ROUND(fVar0));
}

void func_627(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_628(int iParam0, int iParam1)
{
	uVar0 = Global_2548434[iParam0][func_431(iParam1)];
	if (UI::SET_USERIDS_UIHIDDEN(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_629(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2159;
		
		case 1:
			return 2160;
		
		case 5:
			return 2161;
		
		case 8:
			return 2162;
		
		case 10:
			return 2157;
		
		default:
	}
	return -1;
}

int func_630(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2152;
		
		case 1:
			return 2153;
		
		case 5:
			return 2154;
		
		case 8:
			return 2155;
		
		case 10:
			return 2156;
		
		default:
	}
	return -1;
}

int func_631(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_58();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
		iVar2 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
		iVar2 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
		iVar2 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
		iVar2 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
		iVar2 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
		iVar2 = ((iParam0 - 27258) - STATS::_0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
		iVar2 = ((iParam0 - 28483) - STATS::_0x94F12ABF9C79E339((iParam0 - 28483)) * 8) * 8;
	}
	if (!UI::_0x90A6526CF0381030(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_632(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_58();
	}
	iVar0 = 0;
	iVar1 = func_634(iParam0, iParam1);
	uVar2 = func_633(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_633(int iParam0)
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

int func_634(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_58();
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

int func_635(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return -1;
}

int func_636(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return -1;
}

int func_637(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

float func_638(int iParam0, int iParam1)
{
	uVar0 = Global_2582968[iParam0][func_431(iParam1)];
	if (UI::_0x5FBD7095FE7AE57F(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_639(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return -1;
}

float func_640(int iParam0, int iParam1)
{
	uVar0 = Global_2582968[iParam0][func_431(iParam1)];
	if (STATS::STAT_GET_FLOAT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_641(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1312811 != 4 && Global_1312811 != 5) && Global_1312811 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2425662[PLAYER::PLAYER_ID()].f_222 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_76431;
	}
	Global_76432++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_76434[1] = { func_789(iVar5, iParam1, iParam2, -1) };
		if (!func_788(iParam3))
		{
			Global_76432 = (Global_76432 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_76432 > 1)
		{
		}
		else
		{
			func_783(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_76477 };
		}
		else
		{
			uVar15 = { func_779(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_76434[1] = { func_789(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, func_778(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_778(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, func_778(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
					}
					if (GAMEPLAY::IS_BIT_SET(Global_76434[1].f_6, 1))
					{
						func_783(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_76434[1] = { func_789(iVar5, iVar0, uVar15[iVar0], -1) };
					if (GAMEPLAY::IS_BIT_SET(Global_76434[1].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar32 = 9;
							if (iParam5 == 1)
							{
								uVar32 = { Global_76494 };
							}
							else
							{
								uVar32 = { func_775(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_76434[1] = { func_789(iVar5, 14, uVar32[iVar1], -1) };
								func_774(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
								if (GAMEPLAY::IS_BIT_SET(Global_76434[1].f_6, 1))
								{
									func_783(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, func_778(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_778(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, func_778(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
								}
							}
							else
							{
								func_641(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (GAMEPLAY::IS_BIT_SET(Global_76434[1].f_6, 1))
							{
								func_783(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76434[1] = { func_789(iVar5, iVar0, func_770(iParam0, iVar0, -1), -1) };
				if (GAMEPLAY::IS_BIT_SET(Global_76434[1].f_6, 3))
				{
					uVar42 = { func_779(iVar5, 0) };
					func_641(iParam0, iVar0, uVar42[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar59 = func_769();
			if (iVar59 != -1)
			{
				func_767(iVar59, 0, iParam10);
			}
			func_762(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar60 = { func_775(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76434[1] = { func_789(iVar5, 14, uVar60[iVar1], -1) };
			func_774(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
			if (GAMEPLAY::IS_BIT_SET(Global_76434[1].f_6, 1))
			{
				func_783(iVar5, 14, uVar60[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_76432 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_760(iParam0, iVar5, 14, uVar60[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_641(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_774(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
		if (GAMEPLAY::IS_BIT_SET(Global_76434[1].f_6, 1))
		{
			func_783(iVar5, iParam1, iParam2, 1);
		}
		if (Global_76434[1].f_12 == 0)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_76434[1].f_6, 6) && DLC1::_0x341DE7ED1D2A1BFD(Global_2621444, 537651880, 1))
			{
			}
			else
			{
				iVar70 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar70, 66092876, 0))
				{
					func_641(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_76434[1] = { func_789(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_76434[1].f_12 == 0)
		{
			func_753(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_76432 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_760(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_641(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_760(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_641(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar71 = func_778(iParam1);
		if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar71) != Global_76434[1].f_3 || PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar71) != Global_76434[1].f_4)
		{
			iVar72 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
			iVar73 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7), PED::GET_PED_TEXTURE_VARIATION(iParam0, 7));
			if (((iParam1 == 11 && DLC1::_0x341DE7ED1D2A1BFD(iVar73, 307252627, 0)) || (iParam1 == 8 && DLC1::_0x341DE7ED1D2A1BFD(iVar73, 1552218390, 0))) || (iParam1 == 4 && DLC1::_0x341DE7ED1D2A1BFD(iVar73, -2095729091, 0)))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 7));
			}
			if ((iParam1 == 11 && DLC1::_0x341DE7ED1D2A1BFD(iVar72, 307252627, 0)) || (iParam1 == 4 && DLC1::_0x341DE7ED1D2A1BFD(iVar72, -2095729091, 0)))
			{
				if (iVar5 == 1885233650)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
				else if (iVar5 == -1667301416)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar74 = -1;
				if (GAMEPLAY::IS_BIT_SET(Global_76434[1].f_6, 6) && DLC1::_0x341DE7ED1D2A1BFD(Global_2621444, -1996375172, 11))
				{
					PED::_0xCC9682B8951C5229(iParam0, Global_1314034, Global_1314035, Global_1314036, 0);
					PED::_0xCC9682B8951C5229(iParam0, Global_1314034, Global_1314035, Global_1314036, 1);
					PED::_0xCC9682B8951C5229(iParam0, Global_1314034, Global_1314035, Global_1314036, 2);
					PED::_0xCC9682B8951C5229(iParam0, Global_1314034, Global_1314035, Global_1314036, 3);
				}
				iVar75 = func_751(iParam0, 11);
				iVar76 = func_751(iParam0, 8);
				iVar77 = func_751(iParam0, 4);
				iVar8 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
				{
					if (iVar5 == 1885233650)
					{
						iVar74 = func_750(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == -1667301416)
					{
						iVar74 = func_750(iVar5, iParam2, 11, 4);
					}
					if ((((((DLC1::_0x341DE7ED1D2A1BFD(iVar74, 320460654, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar74, -2017999390, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar74, -1410897066, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar74, -826135203, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar74, -1855618474, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar74, -1420825402, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar74, -299089347, 0))
					{
					}
					else
					{
						iVar9 = func_751(iParam0, 8);
					}
				}
				iVar78 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar78, -356646862, 0))
				{
					iVar79 = func_749(iVar5, iVar76, iVar75, iVar77);
					if (iVar79 == -99)
					{
						iVar79 = func_760(iParam0, iVar5, 11, iVar75, 3, 0);
					}
					switch (iVar78)
					{
						case 1165919867:
						case 1606204151:
						case 1774276352:
						case 1934254610:
						case 980775017:
						case 399321881:
							iVar79 = 11;
							iVar74 = func_750(iVar5, iParam2, 11, 4);
							if (!DLC1::_0x341DE7ED1D2A1BFD(iVar74, -530089825, 0))
							{
								iVar79 = -99;
							}
							break;
					}
					if (iVar79 != -99)
					{
						iVar80 = 0;
						while (iVar80 < 18)
						{
							if (func_748(iVar5, iVar79, iVar80) == iVar78)
							{
								iVar11 = iVar80;
								iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar80++;
						}
					}
				}
				iVar74 = -1;
				if ((iVar5 == -1667301416 && iParam2 >= 256) && DLC1::_0x341DE7ED1D2A1BFD(func_750(iVar5, iParam2, 11, 4), -1200513218, 0))
				{
					iVar75 = func_751(iParam0, 11);
					if (iVar75 >= 256)
					{
						iVar74 = func_750(iVar5, iVar75, 11, 4);
					}
					if (iVar75 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar74, 1965569012, 0))
					{
						iVar81 = func_746(iVar5, iVar75, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar81 != -99)
						{
							func_641(iParam0, 8, iVar81, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_76434[1] = { func_789(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_745(iVar5, iParam2, -1))
				{
					if (iVar5 == 1885233650)
					{
						if (iVar75 >= 237)
						{
							iVar74 = func_750(iVar5, iVar75, 11, 3);
						}
					}
					else if (iVar5 == -1667301416)
					{
						if (iVar75 >= 256)
						{
							iVar74 = func_750(iVar5, iVar75, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_745(iVar5, iVar75, -1))
					{
						if ((iVar5 == -1667301416 && iVar75 >= 256) && (DLC1::_0x341DE7ED1D2A1BFD(iVar74, -1200513218, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar74, 1965569012, 0)))
						{
						}
						else if ((iVar5 == -1667301416 && iVar75 >= 256) && ((((((((DLC1::_0x341DE7ED1D2A1BFD(iVar74, 684992453, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar74, 916636514, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar74, -1939378450, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar74, -820724897, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar74, 153792394, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar74, -872449705, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar74, 700658917, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar74, -549843760, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar74, 1830529185, 0)))
						{
						}
						else
						{
							iVar82 = func_744(iParam0, iParam2);
							iVar83 = func_746(iVar5, iVar75, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar83 != -99)
							{
								func_641(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76434[1] = { func_789(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar82 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4267405))
							{
								func_641(iParam0, 8, iVar82, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76434[1] = { func_789(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == 1885233650)
								{
									iVar84 = func_742(iVar5, 11, -1);
									Global_76434[1] = { func_789(iVar5, 11, iVar84, -1) };
									iVar83 = func_746(iVar5, iVar84, iParam2, Global_76434[1].f_4);
									if (iVar83 == -99 || DLC1::_0x341DE7ED1D2A1BFD(func_750(iVar5, iParam2, 11, 3), -1237899132, 0))
									{
										iVar83 = 240;
									}
								}
								else if (iVar5 == -1667301416)
								{
									if (DLC1::_0x341DE7ED1D2A1BFD(func_750(iVar5, iParam2, 11, 4), -1237899132, 0))
									{
										iVar83 = 120;
									}
									else
									{
										iVar83 = 48;
									}
								}
								func_641(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76434[1] = { func_789(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_76434[1] = { func_789(iVar5, 11, iVar75, -1) };
						iVar85 = Global_76434[1].f_3;
						Global_76434[1] = { func_789(iVar5, 11, iParam2, -1) };
						iVar86 = Global_76434[1].f_3;
						if (iVar85 != iVar86)
						{
							iVar88 = func_744(iParam0, iParam2);
							Global_76434[1] = { func_789(iVar5, 8, iVar76, -1) };
							iVar87 = Global_76434[1].f_4;
							iVar89 = func_741(iVar5, iVar76, iVar87);
							if (iVar88 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4267405))
							{
								iVar90 = iVar88;
							}
							else if (iVar89 == -99)
							{
								iVar90 = iVar76;
								if (iVar5 == 1885233650)
								{
									iVar91 = func_750(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_740(iVar91) == 6) || DLC1::_0x341DE7ED1D2A1BFD(iVar91, -1237899132, 0))
									{
										iVar89 = func_742(iVar5, 11, -1);
										Global_76434[1] = { func_789(iVar5, 11, iVar89, -1) };
										iVar90 = func_746(iVar5, iVar89, iParam2, Global_76434[1].f_4);
									}
								}
								if (iVar5 == -1667301416 && (iVar76 == 32 || iVar76 == 33))
								{
									if (!DLC1::_0x341DE7ED1D2A1BFD(func_750(iVar5, iParam2, 11, 4), -491588875, 0))
									{
										iVar89 = func_742(iVar5, 11, -1);
										Global_76434[1] = { func_789(iVar5, 11, iVar89, -1) };
										iVar90 = func_746(iVar5, iVar89, iParam2, Global_76434[1].f_4);
									}
								}
								iVar92 = -1;
								if (iVar5 == 1885233650)
								{
									iVar92 = func_750(iVar5, iVar76, 8, 3);
								}
								else if (iVar5 == -1667301416)
								{
									iVar92 = func_750(iVar5, iVar76, 8, 4);
								}
								if (DLC1::_0x341DE7ED1D2A1BFD(iVar92, -316495692, 0))
								{
									iVar89 = func_742(iVar5, 11, -1);
									Global_76434[1] = { func_789(iVar5, 11, iVar89, -1) };
									iVar90 = func_746(iVar5, iVar89, iParam2, Global_76434[1].f_4);
								}
							}
							else
							{
								iVar90 = func_746(iVar5, iVar89, iParam2, iVar87);
								if (iVar5 == 1885233650)
								{
									if (DLC1::_0x341DE7ED1D2A1BFD(func_750(iVar5, iParam2, 11, 3), -1719338724, 0))
									{
										if (!func_739(iVar5, func_751(iParam0, 4), iVar89))
										{
											iVar90 = 240;
										}
									}
								}
								else if (iVar5 == -1667301416)
								{
									if (DLC1::_0x341DE7ED1D2A1BFD(func_750(iVar5, iParam2, 11, 4), -1719338724, 0))
									{
										if (!func_739(iVar5, func_751(iParam0, 4), iVar89))
										{
											iVar90 = 48;
										}
									}
								}
							}
							if (iVar90 != -99)
							{
								func_641(iParam0, 8, iVar90, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == 1885233650)
							{
								iVar89 = func_742(iVar5, 11, -1);
								Global_76434[1] = { func_789(iVar5, 11, iVar89, -1) };
								iVar90 = func_746(iVar5, iVar89, iParam2, Global_76434[1].f_4);
								if (iVar90 == -99)
								{
									iVar90 = 240;
								}
								func_641(iParam0, 8, iVar90, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == -1667301416)
							{
								func_641(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_76434[1] = { func_789(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_736(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_762(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_749(iVar5, func_770(iParam0, 8, -1), iParam2, func_770(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_430(2151, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_430(2158, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar93 = -99;
					if (iVar5 == 1885233650)
					{
						iVar93 = func_734(iParam2);
					}
					else if (iVar5 == -1667301416)
					{
						iVar93 = func_732(iParam2);
					}
					if (iVar93 != -99 && iParam2 != iVar93)
					{
						iParam2 = iVar93;
					}
				}
				func_679(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar94 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar94, -356646862, 0))
			{
				iVar95 = func_751(iParam0, 11);
				iVar96 = func_751(iParam0, 4);
				iVar97 = func_749(iVar5, iParam2, iVar95, iVar96);
				if (iVar97 == -99)
				{
					iVar97 = func_760(iParam0, iVar5, 11, iVar95, 3, 0);
				}
				switch (iVar94)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar97 = 11;
						iVar98 = func_750(iVar5, iParam2, 11, 4);
						if (!DLC1::_0x341DE7ED1D2A1BFD(iVar98, -530089825, 0))
						{
							iVar97 = -99;
						}
						break;
				}
				if (iVar97 != -99)
				{
					iVar99 = 0;
					while (iVar99 < 18)
					{
						if (func_748(iVar5, iVar97, iVar99) == iVar94)
						{
							iVar11 = iVar99;
							iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar99++;
					}
				}
			}
			func_762(iParam0, iParam1, iParam2, iParam6, 0);
			iVar100 = func_751(iParam0, 11);
			if (func_745(iVar5, iVar100, -1))
			{
				iVar101 = func_741(iVar5, iParam2, Global_76434[1].f_4);
				func_736(iVar5, iVar101);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_749(iVar5, iParam2, func_751(iParam0, 11), func_751(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar102 = func_751(iParam0, 7);
				if (!func_676(iVar5, iVar102, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, func_778(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == 1885233650 && iParam2 >= 26) && DLC1::_0x341DE7ED1D2A1BFD(Global_2621444, -921710083, 0)) || ((iVar5 == -1667301416 && iParam2 >= 26) && DLC1::_0x341DE7ED1D2A1BFD(Global_2621444, -921710083, 0)))
			{
				iVar103 = func_430(2098, iParam10, 0);
				iVar104 = func_430(2099, iParam10, 0);
				iVar105 = func_430(2100, iParam10, 0);
				uVar106 = func_640(135, iParam10);
				if (iVar5 == 1885233650)
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar103, iVar104, iVar105, 0f, uVar106, 0f, false);
				}
				else if (iVar5 == -1667301416)
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar103, iVar104, iVar105, 0f, fVar106, 0f, false);
				}
				iVar107 = 0;
				while (iVar107 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar107, 0f);
					iVar107++;
				}
			}
			else
			{
				func_624(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar108 = func_751(iParam0, 11);
			iVar109 = func_751(iParam0, 8);
			if (iVar5 == 1885233650)
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(func_750(iVar5, iVar108, 11, 3), -1719338724, 0))
				{
					if (!func_739(iVar5, iParam2, func_741(iVar5, iVar109, 0)))
					{
						func_641(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76434[1] = { func_789(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == -1667301416)
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(func_750(iVar5, iVar108, 11, 4), -1719338724, 0))
				{
					if (!func_739(iVar5, iParam2, func_741(iVar5, iVar109, 0)))
					{
						func_641(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76434[1] = { func_789(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_749(iVar5, func_751(iParam0, 8), func_751(iParam0, 11), iParam2);
			}
			iVar110 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar110, -356646862, 0))
			{
				iVar111 = func_749(iVar5, iVar109, iVar108, iParam2);
				if (iVar111 == -99)
				{
					iVar111 = func_760(iParam0, iVar5, 11, iVar108, 3, 0);
				}
				switch (iVar110)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar111 = 11;
						iVar112 = func_750(iVar5, iParam2, 11, 4);
						if (!DLC1::_0x341DE7ED1D2A1BFD(iVar112, -530089825, 0))
						{
							iVar111 = -99;
						}
						break;
				}
				if (iVar111 != -99)
				{
					iVar113 = 0;
					while (iVar113 < 18)
					{
						if (func_748(iVar5, iVar111, iVar113) == iVar110)
						{
							iVar11 = iVar113;
							iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar113++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_778(iParam1), Global_76434[1].f_3, Global_76434[1].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_778(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_778(iParam1), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_76432 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_760(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_641(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case 1165919867:
								case 1606204151:
								case 1774276352:
								case 1934254610:
								case 980775017:
								case 399321881:
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_749(iVar5, iVar3, func_751(iParam0, 11), func_751(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_760(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_641(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_675(iParam0))
				{
					iVar114 = func_673(iParam0, iVar5, iParam1, iParam2);
					if (iVar114 > 0)
					{
						iVar114 = (iVar114 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_667(iParam0, 9, iVar114))
						{
							func_641(iParam0, 9, iVar114, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_641(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (DLC1::_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
					{
						func_641(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar115 = func_430(2040, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, func_661(iParam0, iVar115), func_660(iParam0, iVar115), func_659(iParam0, iVar115));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_661(PLAYER::PLAYER_PED_ID(), iVar115), func_660(PLAYER::PLAYER_PED_ID(), iVar115), 0);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_659(PLAYER::PLAYER_PED_ID(), iVar115));
					func_658(PLAYER::PLAYER_ID(), iVar115);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == 1885233650 && iParam2 >= 92) || (iVar5 == -1667301416 && iParam2 >= 55))
				{
					if (DLC1::_0x341DE7ED1D2A1BFD(Global_2621444, -319568873, 0))
					{
						func_641(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == -1667301416 && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar116 = func_770(iParam0, 4, -1);
					iVar117 = iParam2;
				}
				else
				{
					iVar116 = iParam2;
					iVar117 = func_770(iParam0, 11, -1);
				}
				if (func_657(iVar5, 11, iVar117, -1))
				{
					if (!func_656(iVar5, 4, iVar116, -1))
					{
						if (func_655(iVar5, 4, iVar116, &uVar118))
						{
							func_641(iParam0, 4, uVar118, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_656(iVar5, 4, iVar116, -1))
				{
					if (func_654(iVar5, 4, iVar116, &uVar118))
					{
						func_641(iParam0, 4, uVar118, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar119 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar120 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar121 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar119, iVar120);
				iVar122 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar123 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar124 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar122, iVar123);
				iVar125 = func_751(iParam0, 4);
				iVar126 = func_751(iParam0, 6);
				if (func_653(iVar5, iVar121))
				{
					if (DLC1::_0x341DE7ED1D2A1BFD(iVar121, 1812005517, 0) != func_652(iVar5, iVar125, iVar121))
					{
						iVar127 = DLC1::_0xC17AD0E5752BECDA(iVar121);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							DLC1::GET_VARIANT_COMPONENT(iVar121, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 6)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar126 = func_649(iVar5, iVar129, 6, 3);
										iVar121 = iVar129;
										func_641(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar126 = func_649(iVar5, iVar129, 6, 4);
										iVar121 = iVar129;
										func_641(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
					else if (DLC1::_0x341DE7ED1D2A1BFD(iVar124, -2042643157, 0) != func_648(iVar5, iVar126, iVar124))
					{
						iVar127 = DLC1::_0xC17AD0E5752BECDA(iVar124);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							DLC1::GET_VARIANT_COMPONENT(iVar124, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 4)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar125 = func_649(iVar5, iVar129, 4, 3);
										iVar124 = iVar129;
										func_641(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar125 = func_649(iVar5, iVar129, 4, 4);
										iVar124 = iVar129;
										func_641(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
				}
				if (func_653(iVar5, iVar124))
				{
					if (DLC1::_0x341DE7ED1D2A1BFD(iVar124, -2042643157, 0) != func_648(iVar5, iVar126, iVar124))
					{
						iVar127 = DLC1::_0xC17AD0E5752BECDA(iVar124);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							DLC1::GET_VARIANT_COMPONENT(iVar124, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 4)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar125 = func_649(iVar5, iVar129, 4, 3);
										iVar124 = iVar129;
										func_641(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar125 = func_649(iVar5, iVar129, 4, 4);
										iVar124 = iVar129;
										func_641(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
					else if (DLC1::_0x341DE7ED1D2A1BFD(iVar121, 1812005517, 0) != func_652(iVar5, iVar125, iVar121))
					{
						iVar127 = DLC1::_0xC17AD0E5752BECDA(iVar121);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							DLC1::GET_VARIANT_COMPONENT(iVar121, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 6)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar126 = func_649(iVar5, iVar129, 6, 3);
										iVar121 = iVar129;
										func_641(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar126 = func_649(iVar5, iVar129, 6, 4);
										iVar121 = iVar129;
										func_641(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_753(iParam0);
				iVar132 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar133 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar134 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar132, iVar133);
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar134, 838607662, 0))
				{
					iVar3 = func_760(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_641(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_760(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_641(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_642(iParam0, &uVar4))
		{
			func_641(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_641(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_641(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_641(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar135 = func_748(iVar5, func_770(iParam0, 3, -1), iVar11);
		if (iVar135 != -1)
		{
			if (iVar5 == 1885233650)
			{
				iVar10 = func_649(iVar5, iVar135, 3, 3);
			}
			else if (iVar5 == -1667301416)
			{
				iVar10 = func_649(iVar5, iVar135, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_641(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_76432 = (Global_76432 - 1);
	return 1;
}

int func_642(int iParam0, var uParam1)
{
	*uParam1 = func_770(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (func_430(753, Global_76431, 0) != -99 && func_645())
	{
		if (func_644() == 4)
		{
			return 1;
		}
		if (func_430(753, Global_76431, 0) == 0 && func_430(754, Global_76431, 0) == 0)
		{
			if (func_831(161, Global_76431))
			{
				if (func_430(2051, Global_76431, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_430(752, Global_76431, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_430(753, Global_76431, 0);
		iVar1 = func_430(754, Global_76431, 0);
		if (!func_667(iParam0, iVar1, iVar0))
		{
			if (func_831(161, Global_76431))
			{
				*uParam1 = func_430(2051, Global_76431, 0);
			}
			else
			{
				*uParam1 = func_430(752, Global_76431, 0);
			}
			func_643(753, -99, Global_76431, 1, 0);
			func_643(754, 2, Global_76431, 1, 0);
			return 1;
		}
	}
	return 0;
}

void func_643(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_431(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_644()
{
	return Global_1312811;
}

int func_645()
{
	if (func_647() && func_646(0))
	{
		return 1;
	}
	return 0;
}

var func_646(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_647()
{
	return func_646(func_58() + 1);
}

int func_648(int iParam0, int iParam1, int iParam2)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 1885233650:
			if (iParam1 >= 256)
			{
				iVar0 = func_750(iParam0, iParam1, 6, 3);
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iParam2, 1137160120, 0))
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar0, -364248070, 0))
			{
				if ((DLC1::_0x341DE7ED1D2A1BFD(iParam2, -1080576805, 0) || DLC1::_0x341DE7ED1D2A1BFD(iParam2, -1387458490, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iParam2, -1420825402, 0))
				{
					return 0;
				}
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0))
			{
				if ((((((((((DLC1::_0x341DE7ED1D2A1BFD(iVar0, -713698407, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 140732128, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -849839091, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -269266203, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -685039259, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1266557933, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -364248070, 0))
				{
					return 1;
				}
			}
			break;
		
		case -1667301416:
			if (iParam1 >= 256)
			{
				iVar0 = func_750(iParam0, iParam1, 6, 4);
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iParam2, 1137160120, 0))
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0))
			{
				if (((((((((DLC1::_0x341DE7ED1D2A1BFD(iVar0, -713698407, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 140732128, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 1863955539, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -849839091, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -269266203, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -685039259, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1266557933, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -309899747, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_649(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		DLC1::INIT_SHOP_PED_PROP(&Var0);
		iVar18 = 0;
		iVar19 = DLC1::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			DLC1::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_651(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		DLC1::INIT_SHOP_PED_COMPONENT(&Var20);
		iVar38 = 0;
		iVar39 = DLC1::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 0, -1, func_778(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			DLC1::GET_SHOP_PED_QUERY_COMPONENT(iVar37, &Var20);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_650(iParam0, func_778(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_650(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 1885233650:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_651(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return 113;
			break;
		
		case -1692214353:
			return 175;
			break;
		
		case -1686040670:
			return 155;
			break;
	}
	switch (iParam0)
	{
		case 1885233650:
			return 327;
			break;
		
		case -1667301416:
			return 327;
			break;
	}
	return -99;
}

int func_652(int iParam0, int iParam1, int iParam2)
{
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case 1885233650:
			if (iParam1 >= 256)
			{
				iVar0 = func_750(iParam0, iParam1, 4, 3);
				iVar1 = func_740(iVar0);
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0) || DLC1::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -269266203, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -685039259, 0)) || (DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1080576805, 0) && !DLC1::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0))) || (DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1387458490, 0) && !DLC1::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0))) || (DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1420825402, 0) && !DLC1::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0)))
				{
					iVar2 = 0;
				}
				switch (iVar0)
				{
					case -439764935:
					case 1858824227:
					case -44268217:
					case 301706885:
					case 1283072893:
					case -1590178565:
					case 1995307108:
					case 1029014836:
					case -365568266:
					case -138446327:
					case -2034722819:
					case -1219513062:
					case 153704652:
					case 356276239:
					case 586511233:
					case 1558996842:
					case 1183988406:
					case 1000678684:
					case 761792674:
					case -145679239:
					case 686423978:
					case -763407658:
					case 74266289:
					case 987390769:
					case 1591372991:
					case 1834027448:
					case 913054691:
					case 1142372153:
					case -1698011990:
					case -1443101939:
					case 2133699953:
					case -1924511318:
					case -475531676:
					case -237137197:
					case 754461254:
					case -1155840382:
					case 629180074:
					case 859251223:
					case 1610316715:
					case 901392169:
					case -92983136:
					case 1346362420:
					case 485782942:
					case 312004063:
					case 6695290:
					case 1724446270:
					case -448105673:
					case -611098679:
					case -1111088081:
					case -1406369540:
					case -1912159043:
					case 2076516410:
					case 1919618438:
					case 45227112:
					case -2129094253:
					case -421370587:
					case -675363106:
					case 423009394:
					case 662518015:
					case 1973998937:
					case -2082049580:
					case 8743696:
					case -850459484:
					case -596466965:
					case 1244823145:
					case -1187390334:
					case 1269301600:
					case -607480390:
						iVar2 = 0;
						break;
				}
				if (((DLC1::_0x341DE7ED1D2A1BFD(iParam2, 1248753945, 0) || DLC1::_0x341DE7ED1D2A1BFD(iParam2, 481861038, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iParam2, 713391749, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iParam2, 434101562, 0))
				{
					if ((((((DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1080576805, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1387458490, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -269266203, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -685039259, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1420825402, 0))
					{
						iVar2 = 1;
					}
				}
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar0, 1137160120, 0))
				{
					if (DLC1::_0x341DE7ED1D2A1BFD(iParam2, -2005216901, 0))
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case -1667301416:
			if (iParam1 >= 256)
			{
				iVar0 = func_750(iParam0, iParam1, 4, 4);
				iVar1 = func_740(iVar0);
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0) || DLC1::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0))
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar0, 1137160120, 0))
				{
					if (DLC1::_0x341DE7ED1D2A1BFD(iParam2, -2005216901, 0))
					{
						return 0;
					}
				}
				if ((DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1080576805, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1387458490, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1420825402, 0))
				{
					if ((((DLC1::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0) || DLC1::_0x341DE7ED1D2A1BFD(iParam2, -979468724, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iParam2, -1813210391, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iParam2, 1248753945, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iParam2, 481861038, 0))
					{
						return 1;
					}
					return 0;
				}
				if ((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 1863955539, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -761463976, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 684992453, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 916636514, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1939378450, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 264959411, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1127835965, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1119232689, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1207283343, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -849839091, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -2088146832, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -430330349, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1103045158, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 1055526375, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -2020757158, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1325813684, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 1052059919, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 1006704786, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_653(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1885233650:
			if (DLC1::_0x341DE7ED1D2A1BFD(iParam1, -364248070, 0) || DLC1::_0x341DE7ED1D2A1BFD(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
		
		case -1667301416:
			if (DLC1::_0x341DE7ED1D2A1BFD(iParam1, -364248070, 0) || DLC1::_0x341DE7ED1D2A1BFD(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_654(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_750(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = DLC1::_0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								DLC1::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!DLC1::_0x341DE7ED1D2A1BFD(iVar3, -1100807313, 0))
										{
											*uParam3 = func_649(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_655(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_750(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = DLC1::_0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								DLC1::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (DLC1::_0x341DE7ED1D2A1BFD(iVar3, -1100807313, 0))
										{
											*uParam3 = func_649(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_656(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_750(iParam0, iParam2, 4, 4);
						}
						if (DLC1::_0x341DE7ED1D2A1BFD(iParam3, -1100807313, 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_657(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_750(iParam0, iParam2, 11, 4);
						}
						return DLC1::_0x341DE7ED1D2A1BFD(iParam3, -530089825, 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_658(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, -1825432403);
	}
	else if (iParam1 > 51)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1269440357);
	}
	else if (iParam1 > 46)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1766664132);
	}
	else if (iParam1 > 26)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1277738372);
	}
	else if (iParam1 > 0)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1269440357);
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_659(int iParam0, int iParam1)
{
	return 0;
}

int func_660(int iParam0, int iParam1)
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_661(int iParam0, int iParam1)
{
	bVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
	iVar1 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	iVar2 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	iVar3 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
	if ((((!bVar0 == Global_76595 || !iParam1 == Global_76596) || !iVar1 == Global_76597) || !iVar2 == Global_76598) || !iVar3 == Global_76599)
	{
		Global_76595 = bVar0;
		Global_76596 = iParam1;
		Global_76597 = iVar1;
		Global_76598 = iVar2;
		Global_76599 = iVar3;
		Global_76600 = func_662(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) == -1667301416)
			{
				if (Global_76600 == 61)
				{
					Global_76600 = 79;
				}
				else if (Global_76600 == 39)
				{
					Global_76600 = 79;
				}
				else if (Global_76600 == 76)
				{
					Global_76600 = 80;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) == 1885233650)
			{
				if (Global_76600 == 61)
				{
					Global_76600 = 78;
				}
				else if (Global_76600 == 39)
				{
					Global_76600 = 78;
				}
			}
		}
	}
	return Global_76600;
}

int func_662(int iParam0, int iParam1)
{
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, 240476421, 8))
	{
		if (iVar2 == 1885233650)
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1499233212, 8))
			{
				return (2 + iVar3);
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, 350281921, 8))
			{
				return func_666(iParam0, iParam1) + 15;
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, -887141061, 8))
			{
				return func_666(iParam0, iParam1) + 15;
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1185371730, 8))
			{
				return func_666(iParam0, iParam1) + 15;
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, -2124629577, 8))
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1499233212, 8))
			{
				return (7 + iVar3);
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, -887141061, 8))
			{
				return func_666(iParam0, iParam1) + 15;
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1185371730, 8))
			{
				return func_666(iParam0, iParam1) + 15;
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, -2124629577, 8))
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		return func_666(iParam0, iParam1);
	}
	if (func_665(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 655081063, 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -530089825, 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -713698407, 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == 1885233650)
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1882920022, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -317649054, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -979468724, 0))
			{
				return func_666(iParam0, iParam1) + 15;
			}
			else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -306768813, 0))
			{
				return func_666(iParam0, iParam1) + 15;
			}
			else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -58412562, 0))
			{
				return func_666(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1536649085, 0) && !DLC1::_0x341DE7ED1D2A1BFD(iVar5, 350281921, 0))
		{
			iVar6 = func_664(iVar5, 0);
			if (iVar2 == 1885233650)
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_740(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_740(iVar5);
						break;
					}
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 248194463, 0))
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1347486026, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 396458410, 0))
		{
			iVar7 = func_663(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_740(iVar5);
					break;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -779835469, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1119232689, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -2102859770, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1784133476, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1607949555, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1976716889, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 2099109084, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1488441032, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1719167561, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1431529976, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1274099003, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1723403459, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1407614029, 0))
				{
					return func_666(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 912543594, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
		}
		else if ((DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1086258388, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar5, 103539798, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar5, -994703884, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 2044466679, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -2020757158, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1064262817, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1419806467, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1053842259, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1358888880, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -441291342, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -747583185, 0))
		{
			if (iVar2 == -1667301416)
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1986415230, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -2088146832, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -785939537, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -872449705, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 700658917, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1714969731, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 745826556, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1055526375, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 144417099, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 492620493, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -416620954, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -102825006, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -733792105, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 137011325, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -641612092, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1351486939, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -2119756144, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1507532917, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 947651647, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1506370874, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1927516484, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1786447517, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1010805287, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1325813684, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -549843760, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -828478571, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1690933245, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1360588936, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 2136821028, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1830529185, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -269266203, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 201427653, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 967829025, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -685039259, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1266557933, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -979468724, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1813210391, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 263623295, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -309899747, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -89003918, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -747858475, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return func_666(iParam0, iParam1);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 490219883, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1208450825, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 297865853, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 602650322, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 905042630, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1204125293, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 310055897, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 606713654, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return func_666(iParam0, iParam1);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1831422288, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -838136846, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 655638019, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 970679185, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 83294665, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 382246252, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -99064836, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -697656159, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -398213037, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1380605304, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_666(iParam0, iParam1);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -306768813, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -58412562, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1711219157, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1) + 15;
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1466664110, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1) + 15;
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1968575702, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1) + 15;
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 245429010, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (48 + iVar3);
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 15161247, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 2044923487, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -915352927, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -538378351, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -2139144017, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -435539886, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 695107163, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1499233212, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1) + 15;
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 350281921, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -2124629577, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1877382859, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1) + 15;
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1375878737, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1347486026, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1467843180, 0))
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 2006289597, 0))
			{
				if (iVar2 == 1885233650)
				{
					return func_666(iParam0, iParam1) + 15;
				}
				else
				{
					return func_666(iParam0, iParam1) + 15;
				}
			}
			else if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -540436505, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1) + 15;
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1207461955, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1) + 15;
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return func_666(iParam0, iParam1);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1) + 15;
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -785939537, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -785939537, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -939525357, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1986415230, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (4 + iVar3);
			}
			else
			{
				return func_666(iParam0, iParam1);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1) + 15;
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1663871176, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1) + 15;
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return func_666(iParam0, iParam1);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -939525357, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1);
			}
			else
			{
				return func_666(iParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 398019854, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_666(iParam0, iParam1) + 15;
			}
			else
			{
				return func_666(iParam0, iParam1);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 1965569012, 0) && iVar2 == -1667301416)
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, 2026620439, 0) && iVar2 == -1667301416)
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_0x341DE7ED1D2A1BFD(iVar5, -1410897066, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((DLC1::_0x341DE7ED1D2A1BFD(iVar5, -2017999390, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar5, 320460654, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_740(iVar5);
		}
	}
	if (iVar2 == 1885233650)
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_663(int iParam0, int iParam1)
{
	iVar0 = -1;
	if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, -761463976, iParam1))
	{
		iVar0 = 3;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, -1939378450, iParam1))
	{
		iVar0 = 7;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, -1127835965, iParam1))
	{
		iVar0 = 10;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, -820724897, iParam1))
	{
		iVar0 = 11;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, -672871169, iParam1))
	{
		iVar0 = 13;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, -196114988, iParam1))
	{
		iVar0 = 15;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_664(int iParam0, int iParam1)
{
	iVar0 = -1;
	if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, -870074461, iParam1))
	{
		iVar0 = 0;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, -1174924468, iParam1))
	{
		iVar0 = 1;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, -868698159, iParam1))
	{
		iVar0 = 2;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, -1177480446, iParam1))
	{
		iVar0 = 3;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, -1347486026, iParam1))
	{
		iVar0 = 4;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, -1655154167, iParam1))
	{
		iVar0 = 5;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, -2105858993, iParam1))
	{
		iVar0 = 6;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (DLC1::_0x341DE7ED1D2A1BFD(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_665(int iParam0)
{
	if (DLC1::_0x341DE7ED1D2A1BFD(DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_666(int iParam0, int iParam1)
{
	if (iParam1 > 69)
	{
		return 69;
	}
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

int func_667(int iParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_76434[1] = { func_789(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!GAMEPLAY::IS_BIT_SET(Global_76434[1].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_779(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_667(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar25 = { func_775(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_667(iParam0, 14, uVar25[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_76434[2] = { func_789(iVar0, 14, iVar6, -1) };
									if (Global_76434[2].f_12 == iVar5)
									{
										if (func_667(iParam0, 14, iVar6))
										{
											if (!func_668(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_76434[2])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_751(iParam0, iVar4);
						Global_76434[2] = { func_789(iVar0, iVar4, iVar1, -1) };
						if (!func_668(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_76434[2])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != 1849449579) && uVar8.f_16)
		{
			if (func_430(1757, Global_76431, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar36 = { func_775(iVar0, iParam2) };
		iVar35 = 0;
		while (iVar35 <= 8)
		{
			if (!func_667(iParam0, 14, uVar36[iVar35]))
			{
				return 0;
			}
			iVar35++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_76434[1].f_12) == Global_76434[1].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_76434[1].f_12) == Global_76434[1].f_4 || Global_76434[1].f_3 == -1))
		{
			return 1;
		}
		if (((Global_76434[1].f_12 == 0 && GAMEPLAY::IS_BIT_SET(Global_76434[1].f_6, 6)) && DLC1::_0x341DE7ED1D2A1BFD(Global_2621444, -1033433901, 1)) && unk_0xD40AAC51E8E4C663(Global_2621444) > 0)
		{
			iVar50 = unk_0xD40AAC51E8E4C663(Global_2621444);
			iVar46 = 0;
			while (iVar46 < iVar50)
			{
				unk_0xD81B7F27BC773E66(Global_2621444, iVar46, &iVar47, &uVar48, &uVar49);
				if (iVar47 != 0 && iVar47 != 1849449579)
				{
					DLC1::INIT_SHOP_PED_PROP(&Var51);
					DLC1::_0x5D5CAFF661DDF6FC(iVar47, &Var51);
					if (Var51.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_76434[1].f_12) && Var51.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_76434[1].f_12))
					{
						return 1;
					}
				}
				iVar46++;
			}
		}
	}
	else
	{
		if (Global_76434[1].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_778(iParam1)) && Global_76434[1].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_778(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_76433++;
			if (Global_76433 == 1)
			{
				if (func_657(iVar0, 11, func_751(iParam0, 11), -1))
				{
					if (func_655(iVar0, 4, iParam2, &uVar68))
					{
						return func_667(iParam0, 4, uVar68);
					}
				}
				else if (func_654(iVar0, 4, iParam2, &uVar68))
				{
					return func_667(iParam0, 4, uVar68);
				}
			}
			Global_76433 = (Global_76433 - 1);
		}
	}
	return 0;
}

int func_668(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_775(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_672(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == 225514697)
	{
		if (func_671(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_670(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_669(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == -1692214353)
	{
		if (func_671(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_670(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_669(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1686040670)
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_671(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_670(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_669(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_669(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case 1885233650:
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_750(iParam0, iParam2, 14, 3);
						}
						return (DLC1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) || DLC1::_0x341DE7ED1D2A1BFD(func_750(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_750(iParam0, iParam2, 1, 3);
						}
						return (DLC1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) || DLC1::_0x341DE7ED1D2A1BFD(func_750(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_750(iParam0, iParam2, 14, 4);
						}
						return (DLC1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) || DLC1::_0x341DE7ED1D2A1BFD(func_750(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_750(iParam0, iParam2, 1, 4);
						}
						return (DLC1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) || DLC1::_0x341DE7ED1D2A1BFD(func_750(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_670(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == 225514697)
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1692214353)
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1686040670)
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 1885233650)
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_750(iParam0, iParam2, 1, 3);
					}
					if (DLC1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) || DLC1::_0x341DE7ED1D2A1BFD(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == -1667301416)
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_750(iParam0, iParam2, 1, 4);
					}
					if (DLC1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) || DLC1::_0x341DE7ED1D2A1BFD(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_671(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 225514697:
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case -1692214353:
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case -1686040670:
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case 1885233650:
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_750(iParam0, iParam2, 14, 3);
					}
					return DLC1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
				}
			}
			break;
		
		case -1667301416:
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_750(iParam0, iParam2, 14, 4);
					}
					return DLC1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_672(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_673(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_665(iParam0))
	{
		return -99;
	}
	if (func_674(iParam0))
	{
		return -99;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == 1885233650)
		{
			if (((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 188 && iParam3 <= 203))
			{
				return 1;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 108 && iParam3 <= 123))
			{
				return 11;
			}
			else if (iParam3 >= 96 && iParam3 <= 107)
			{
				return 41;
			}
			else if (iParam3 >= 156 && iParam3 <= 171)
			{
				return 36;
			}
			else if (iParam3 >= 172 && iParam3 <= 187)
			{
				return 31;
			}
			else if (iParam3 >= 204 && iParam3 <= 219)
			{
				return 16;
			}
			else if ((iParam3 >= 220 && iParam3 <= 235) || (iParam3 >= 124 && iParam3 <= 139))
			{
				return 26;
			}
			else if (iParam3 == 236)
			{
				return 21;
			}
			else if (iParam3 >= 237)
			{
				iVar0 = func_750(iParam1, iParam3, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = DLC1::_0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						DLC1::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != 1849449579)
							{
								return func_649(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam1 == -1667301416)
		{
			if ((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255))
			{
				return 1;
			}
			else if (((iParam3 >= 16 && iParam3 <= 31) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 128 && iParam3 <= 143))
			{
				return 16;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (iParam3 >= 48 && iParam3 <= 63)
			{
				return 11;
			}
			else if ((iParam3 >= 96 && iParam3 <= 111) || (iParam3 >= 160 && iParam3 <= 175))
			{
				return 21;
			}
			else if (iParam3 >= 224 && iParam3 <= 239)
			{
				return 26;
			}
			else if (iParam3 >= 144 && iParam3 <= 159)
			{
				return 0;
			}
			else if (iParam3 >= 80 && iParam3 <= 95)
			{
				return 31;
			}
			else if (iParam3 >= 256)
			{
				iVar6 = func_750(iParam1, iParam3, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = DLC1::_0xC17AD0E5752BECDA(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						DLC1::GET_VARIANT_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != 1849449579)
							{
								return func_649(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

int func_674(int iParam0)
{
	if (DLC1::_0x341DE7ED1D2A1BFD(DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8)), -2124629577, 0))
	{
		return 1;
	}
	return 0;
}

int func_675(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (iVar0 == 1885233650)
		{
			if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
			{
				return 1;
			}
		}
		else if (iVar0 == -1667301416)
		{
			if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_676(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (iParam0 == 1885233650)
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_4267117 == iParam1)
		{
			iVar2 = Global_4267116;
			iVar1 = Global_4267115;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_750(iParam0, iParam1, 7, 3);
			iVar1 = func_740(iVar2);
			Global_4267117 = iParam1;
			Global_4267116 = iVar2;
			Global_4267115 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_4267120 == iParam3)
		{
			iVar4 = Global_4267119;
			iVar3 = Global_4267118;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_750(iParam0, iParam3, 11, 3);
			iVar3 = func_740(iVar4);
			Global_4267120 = iParam3;
			Global_4267119 = iVar4;
			Global_4267118 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_4267123 == iParam4)
		{
			iVar6 = Global_4267122;
			iVar5 = Global_4267121;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_750(iParam0, iParam4, 8, 3);
			iVar5 = func_740(iVar6);
			Global_4267123 = iParam4;
			Global_4267122 = iVar6;
			Global_4267121 = iVar5;
		}
		iVar7 = -1;
		iVar8 = -1;
		if (Global_4267126 == iParam10)
		{
			iVar8 = Global_4267125;
			iVar7 = Global_4267124;
		}
		else if (iParam10 >= 26)
		{
			iVar8 = func_750(iParam0, iParam10, 1, 3);
			iVar7 = func_740(iVar8);
			Global_4267126 = iParam10;
			Global_4267125 = iVar8;
			Global_4267124 = iVar7;
		}
		if (iParam3 != -99)
		{
			if ((DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1855618474, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 351511157, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1420825402, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar8, 1438931885, 0) && !DLC1::_0x341DE7ED1D2A1BFD(iVar8, -973213642, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0))
			{
				if (iParam1 != 0 && !(iVar2 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, -713698407, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar2, -372885432, 0))
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, -2103452271, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (DLC1::_0x341DE7ED1D2A1BFD(iVar2, 531704825, 0))
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, -2103452271, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar2, -372885432, 0))
			{
				if (iParam4 == 240)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (DLC1::_0x341DE7ED1D2A1BFD(iVar2, -120244486, 0))
		{
			if (iParam9 != -99)
			{
				iVar9 = -1;
				if (iParam9 >= 327)
				{
					iVar9 = func_750(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return 0;
				}
				switch (iVar9)
				{
					case 1411612772:
					case 1399488226:
					case 1103092621:
					case 798340921:
					case 495850282:
					case -1972900644:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case -882756821:
					case -1242625979:
					case -1358792084:
					case -1854813796:
					case -1257185072:
					case -75666008:
					case -451657514:
					case -1339992339:
					case -1987638855:
					case 1148780446:
					case 1379309694:
					case 491826867:
					case 1855607109:
					case -1962767847:
					case -1654116636:
					case -1485356286:
					case -1178212449:
					case -766633809:
					case 665568109:
					case -288304716:
					case 1772824957:
					case 1533381874:
					case -2012223930:
					case 2008237453:
					case -1304118613:
					case -1543430620:
					case -854101936:
					case -1061103709:
					case -616035151:
					case 1307111925:
					case 1759289928:
					case -1036580403:
					case -203035350:
					case 917598912:
					case 682284723:
					case 481083063:
					case 114660105:
					case 1897981854:
					case 1601455173:
					case 1932815241:
					case 1626031863:
					case 926585800:
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, -1473812293, 0))
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar2, 1396865968, 0))
				{
					if (((((((((((((((((((((((((((((((((((((((((DLC1::_0x341DE7ED1D2A1BFD(iVar4, -63750166, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -870074461, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -868698159, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1834446747, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1119232689, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -2102859770, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1784133476, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1719167561, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1274099003, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1410897066, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1431529976, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1723403459, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -2020757158, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1064262817, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -441291342, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -785939537, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1507532917, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -416620954, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -102825006, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 137011325, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -549843760, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1830529185, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1927516484, 0))
					{
						return 0;
					}
					else if (func_678(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, -63750166, 0))
				{
					return 0;
				}
				else if (func_678(iParam0, iParam3))
				{
					return 0;
				}
				else if (DLC1::_0x341DE7ED1D2A1BFD(iVar2, -120244486, 0))
				{
					if (((((((((((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1127835965, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1927516484, 0))
					{
						return 0;
					}
				}
				if (iParam10 != -99)
				{
					if (DLC1::_0x341DE7ED1D2A1BFD(iVar8, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar2 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, -353070590, 0))
			{
				if (((DLC1::_0x341DE7ED1D2A1BFD(iVar4, -870074461, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -868698159, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1834446747, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar2 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, -1473812293, 0)) || (iVar2 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, -319568873, 0)))
		{
			if (iParam11 != -99)
			{
				iVar10 = -1;
				if (iParam11 >= 256)
				{
					iVar10 = func_750(iParam0, iParam11, 4, 3);
				}
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar10, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, 654065530, 0))
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, 596326873, 0))
		{
			if (iParam3 != -99)
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar2, -319568873, 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (DLC1::_0x341DE7ED1D2A1BFD(iVar2, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 974680318, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1625463492, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -779835469, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1086258388, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1021189127, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1939378450, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1127835965, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 153792394, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -672871169, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 572416369, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -196114988, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1322269404, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1655154167, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1607949555, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1719167561, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1410897066, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1431529976, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1723403459, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -785939537, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -416620954, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -102825006, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 137011325, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1351486939, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -491588875, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -828478571, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1927516484, 0))
				{
					return 0;
				}
				else if (!DLC1::_0x341DE7ED1D2A1BFD(iVar2, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, 974680318, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, -1786447517, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, -1010805287, 0))
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, -319568873, 0))
		{
			if (iParam8 != -99)
			{
				return 0;
			}
		}
		if (iVar2 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, -713698407, 0))
		{
			if (iParam9 >= 327 && DLC1::_0x341DE7ED1D2A1BFD(func_750(iParam0, iParam9, 14, 3), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && DLC1::_0x341DE7ED1D2A1BFD(func_750(iParam0, iParam9, 14, 3), -713698407, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar2 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, -1119006951, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 248194463, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 572350888, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1817355735, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 140732128, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1863955539, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 153792394, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 572416369, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1538937264, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1064262817, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -441291342, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -785939537, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -828478571, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -99064836, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -148928294, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1927516484, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -435539886, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1375878737, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, -1914383230, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, 1553766533, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0))
				{
					return 0;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return 0;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return 0;
				}
			}
			if (iVar4 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar4, 2066241403, 0))
			{
				return 0;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, 158381135, 0))
		{
			if (iParam4 != -99)
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar6, 558082254, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, -920534092, 0)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_745(iParam0, iParam3, -1)) || iVar3 == 13)
				{
					if (((DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1351486939, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0))) || (iVar6 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0)))
				{
					if (DLC1::_0x341DE7ED1D2A1BFD(iVar6, 558082254, 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_751(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_740(func_750(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_745(iParam0, iParam3, -1)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0))) || (iVar6 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0))) || (iVar6 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0))) || (iVar6 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0))) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, -893126917, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
					if (DLC1::_0x341DE7ED1D2A1BFD(iVar6, 558082254, 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_751(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_740(func_750(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!DLC1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, -1950939707, 0))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == -27166014) || iVar4 == -273228435) || iVar4 == -2118057713) || iVar4 == -1809078812) || iVar4 == -1522415600) || iVar4 == -1212584705) || iVar4 == -886664231) || iVar4 == -646500230) || iVar4 == -290891042) || iVar4 == 15400801) || iVar4 == -485413449) || iVar4 == -254359230) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || iVar4 == 1343601766) || iVar4 == 567992305) || iVar4 == -192707261) || iVar4 == 1156347903) || iVar4 == 1853344529) || iVar4 == 1597648022) || iVar4 == -1995669446)
				{
					if (!DLC1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0))
					{
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
			else if (iParam4 != -99)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0))) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, -893126917, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
					if (DLC1::_0x341DE7ED1D2A1BFD(iVar6, 558082254, 0))
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!DLC1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, -1371423804, 0))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1625463492, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0)) && DLC1::_0x341DE7ED1D2A1BFD(iVar2, -277681306, 0)) || (((iVar6 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0)) && !DLC1::_0x341DE7ED1D2A1BFD(iVar2, -277681306, 0)) && !DLC1::_0x341DE7ED1D2A1BFD(iVar6, 558082254, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, -108328099, 0))
		{
			if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == -1305325922) || iVar6 == 242616108) || iVar6 == 1085565864) || iVar6 == -1968210019) || iVar6 == 2028002304) || iVar6 == 830393657) || iVar6 == -473747009) || iVar6 == 240453350) || iVar6 == 1083927410) || iVar6 == -374729298) || iVar6 == 399897093) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, 684992453, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, 1458930564, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, 2048281121, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, 19149565, 0))
				{
					if (!DLC1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							if (!DLC1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, -378906828, 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == -374729298) || iVar6 == 399897093) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, 684992453, 0))
				{
					if (!DLC1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							if (!DLC1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, -695703461, 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_677(iVar6)) || (iVar6 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar6, 310957510, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && DLC1::_0x341DE7ED1D2A1BFD(iVar2, -1473812293, 0))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return 0;
				}
				else if ((iVar4 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0)) || (iVar4 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1322269404, 0)))
				{
					return 0;
				}
				else if (iVar4 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == -1667301416)
	{
		iVar11 = -1;
		iVar12 = -1;
		if (Global_4267117 == iParam1)
		{
			iVar12 = Global_4267116;
			iVar11 = Global_4267115;
		}
		else if (iParam1 >= 55)
		{
			iVar12 = func_750(iParam0, iParam1, 7, 4);
			iVar11 = func_740(iVar12);
			Global_4267117 = iParam1;
			Global_4267116 = iVar12;
			Global_4267115 = iVar11;
		}
		iVar13 = -1;
		iVar14 = -1;
		if (Global_4267120 == iParam3)
		{
			iVar14 = Global_4267119;
			iVar13 = Global_4267118;
		}
		else if (iParam3 >= 256)
		{
			iVar14 = func_750(iParam0, iParam3, 11, 4);
			iVar13 = func_740(iVar14);
			Global_4267120 = iParam3;
			Global_4267119 = iVar14;
			Global_4267118 = iVar13;
		}
		iVar15 = -1;
		iVar16 = -1;
		if (Global_4267123 == iParam4)
		{
			iVar16 = Global_4267122;
			iVar15 = Global_4267121;
		}
		else if (iParam4 >= 136)
		{
			iVar16 = func_750(iParam0, iParam4, 8, 4);
			iVar15 = func_740(iVar16);
			Global_4267123 = iParam4;
			Global_4267122 = iVar16;
			Global_4267121 = iVar15;
		}
		iVar17 = -1;
		iVar18 = -1;
		if (Global_4267126 == iParam10)
		{
			iVar18 = Global_4267125;
			iVar17 = Global_4267124;
		}
		else if (iParam10 >= 26)
		{
			iVar18 = func_750(iParam0, iParam10, 1, 4);
			iVar17 = func_740(iVar18);
			Global_4267126 = iParam10;
			Global_4267125 = iVar18;
			Global_4267124 = iVar17;
		}
		iVar19 = -1;
		if (iParam9 >= 327)
		{
			iVar19 = func_750(iParam0, iParam9, 14, 4);
		}
		if (iParam3 != -99)
		{
			if (((DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1855618474, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 351511157, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -299089347, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1420825402, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0) && !DLC1::_0x341DE7ED1D2A1BFD(iVar18, -973213642, 0))
			{
				if (((((((iParam1 == 0 || (iParam1 >= 13 && iParam1 <= 18)) || iVar11 == 3) || (iVar12 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, -1320139576, 0))) || (iParam1 >= 19 && iParam1 <= 24)) || iVar11 == 4) || (iParam1 >= 25 && iParam1 <= 30)) || iVar11 == 5)
				{
				}
				else
				{
					return 0;
				}
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar14, -713698407, 0))
			{
				if (iParam1 != 0 && !(iVar12 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, -713698407, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar12, -372885432, 0))
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar14, -2103452271, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (DLC1::_0x341DE7ED1D2A1BFD(iVar12, 531704825, 0))
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar14, -2103452271, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar12, -372885432, 0))
			{
				if (iParam4 == 66)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar12 == 281786684 || iVar12 == 653911448) || iVar12 == -1519558015)
		{
			if (iParam9 != -99)
			{
				switch (iVar19)
				{
					case 1446628467:
					case -1938048778:
					case 2041418586:
					case -1342898200:
					case 2026483804:
					case -1977527541:
					case -1670449242:
					case -1385031204:
					case -1088111295:
					case -1530918836:
					case -1221415631:
					case -629869643:
					case 530255864:
					case 38181873:
					case 319110510:
					case 482562282:
					case -1178170642:
					case -880726429:
					case -699776011:
					case -401873032:
					case -700496933:
					case -404429018:
					case -2134238990:
					case -2136376254:
					case 1861212367:
					case -789144321:
					case -223092615:
					case 763352592:
					case -549897852:
					case -1976889495:
					case -1410575637:
					case -428980242:
					case -1731482454:
					case -1390357480:
					case -1765816422:
					case -1533320367:
					case 939297301:
					case 1186965403:
					case 1575507436:
					case 1783131820:
					case 2059866009:
					case -1997689882:
					case -1617209023:
					case -1391954917:
					case -1832969872:
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar16, 240476421, 0))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, -1473812293, 0))
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar12, 1396865968, 0))
				{
					if ((((((((((((((((DLC1::_0x341DE7ED1D2A1BFD(iVar14, -63750166, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1410897066, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 320460654, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -826135203, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -747583185, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -416620954, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -733792105, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -641612092, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1507532917, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -549843760, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1830529185, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1506370874, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1786447517, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1010805287, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2136821028, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1927516484, 0))
					{
						return 0;
					}
					else if (func_678(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_678(iParam0, iParam3) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -63750166, 0))
				{
					return 0;
				}
				if (iParam10 != -99)
				{
					if (DLC1::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar12 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, -353070590, 0))
			{
				if ((((DLC1::_0x341DE7ED1D2A1BFD(iVar14, -870074461, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1174924468, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -868698159, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1769225721, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1834446747, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iVar12 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, -1473812293, 0))
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar16, -63750166, 0))
			{
				return 0;
			}
		}
		else if (iVar12 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, 596326873, 0))
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar16, 974680318, 0))
			{
				return 0;
			}
		}
		if (iVar12 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, -713698407, 0))
		{
			if (iParam9 >= 327 && DLC1::_0x341DE7ED1D2A1BFD(func_750(iParam0, iParam9, 14, 4), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && DLC1::_0x341DE7ED1D2A1BFD(func_750(iParam0, iParam9, 14, 4), -713698407, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if ((((iVar12 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, -1473812293, 0)) || (iVar12 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, -319568873, 0))) || (iParam1 >= 43 && iParam1 <= 48)) || iVar11 == 8)
		{
			if (iParam11 != -99)
			{
				iVar20 = -1;
				if (iParam11 >= 256)
				{
					iVar20 = func_750(iParam0, iParam11, 4, 4);
				}
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar20, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && (DLC1::_0x341DE7ED1D2A1BFD(iVar12, -920534092, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar12, 1537081084, 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((((DLC1::_0x341DE7ED1D2A1BFD(iVar14, 684992453, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 916636514, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1939378450, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -820724897, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 153792394, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -872449705, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1714969731, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1055526375, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 947651647, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -549843760, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1830529185, 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar13 == 7)
				{
				}
				else if ((DLC1::_0x341DE7ED1D2A1BFD(iVar14, 700658917, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 745826556, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 144417099, 0))
				{
					if (DLC1::_0x341DE7ED1D2A1BFD(iVar12, 1537081084, 0))
					{
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
			else if (iParam2 == 8)
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar16, 1553766533, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1914383230, 0))
				{
					if (DLC1::_0x341DE7ED1D2A1BFD(iVar12, -920534092, 0))
					{
						if (DLC1::_0x341DE7ED1D2A1BFD(iVar16, 441715397, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 264959411, 0))
						{
							if (DLC1::_0x341DE7ED1D2A1BFD(iVar12, 1828206051, 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (DLC1::_0x341DE7ED1D2A1BFD(iVar12, 1828206051, 0))
						{
							return 0;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam9 != -99)
		{
			if ((iVar19 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar19, 1406402954, 1)) || (iVar19 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar19, 499051427, 1)))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, 596326873, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1358888880, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -102825006, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -733792105, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -641612092, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1507532917, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -828478571, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (func_745(iParam0, iParam3, -1))
				{
				}
				else if ((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar13 == 2) || iVar13 == 11) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -761463976, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1347486026, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -939525357, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1119232689, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -2102859770, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1784133476, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1488441032, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2044466679, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -2020757158, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -430330349, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1351486939, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2030343924, 0)) || iVar14 == 998321559) || iVar14 == 619380843) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -55550566, 0))
				{
					if (!DLC1::_0x341DE7ED1D2A1BFD(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if ((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -530089825, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1965569012, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1200513218, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -713698407, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1843965488, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -55104292, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -779835469, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1086258388, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 140732128, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2106216756, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1627756587, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 441715397, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 264959411, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1127835965, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -672871169, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 572416369, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -196114988, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1607949555, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1976716889, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2099109084, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1488441032, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 320460654, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -2017999390, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1410897066, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -826135203, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1053842259, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1358888880, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -441291342, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -747583185, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1407863332, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1986415230, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -785939537, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1103045158, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -102825006, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -641612092, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1507532917, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1506370874, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1786447517, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1010805287, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2136821028, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1927516484, 0))
				{
					return 0;
				}
				else if (DLC1::_0x341DE7ED1D2A1BFD(iVar12, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar15 == 11) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 1455992833, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 153792394, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -870074461, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1174924468, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -868698159, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1177480446, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1347486026, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1655154167, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -2105858993, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 1893564692, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 1710451520, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 1416808511, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 1641506460, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 699233865, 0)) || iVar16 == -565297075) || iVar16 == 262349558) || iVar16 == -917804055) || iVar16 == -1156067454) || iVar16 == -2124751863) || iVar16 == 1812836719) || iVar16 == 1582116924) || iVar16 == 877452376) || iVar16 == 1117419763) || iVar16 == 732885188) || iVar16 == -1037820496) || iVar16 == -79097863) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1119232689, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -2102859770, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 1784133476, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1607949555, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 1976716889, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 2099109084, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1488441032, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 2044466679, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -2020757158, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1064262817, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1419806467, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1053842259, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1358888880, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -849839091, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -2088146832, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -352447393, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -642551350, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -819569488, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -2020068325, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1786447517, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1010805287, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1325813684, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -549843760, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -269266203, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 201427653, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 967829025, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -685039259, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1266557933, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -979468724, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -58412562, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -435539886, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 974680318, 0))
				{
					if (!DLC1::_0x341DE7ED1D2A1BFD(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((DLC1::_0x341DE7ED1D2A1BFD(iVar16, 1965569012, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 684992453, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 916636514, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1939378450, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 441715397, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 264959411, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 1353777856, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1207283343, 0))
				{
					return 0;
				}
				else if (func_741(iParam0, iParam4, 0) != -99)
				{
					if (DLC1::_0x341DE7ED1D2A1BFD(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, 654065530, 0))
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1351486939, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar11 == 3) || (iVar12 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, -1320139576, 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1882920022, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && DLC1::_0x341DE7ED1D2A1BFD(func_750(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar11 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1882920022, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && DLC1::_0x341DE7ED1D2A1BFD(func_750(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar19, -1320139576, 1))
				{
					DLC1::_0x5D5CAFF661DDF6FC(iVar19, &Var21);
					if (Var21.f_6 == 7)
					{
						return 0;
					}
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar11 == 5)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1882920022, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && DLC1::_0x341DE7ED1D2A1BFD(func_750(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar11 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1965569012, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1882920022, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 396458410, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -761463976, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 103539798, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1347486026, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -994703884, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1119232689, 0))) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 320460654, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -2017999390, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1410897066, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -826135203, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2044466679, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -2020757158, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1064262817, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1053842259, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1358888880, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -441291342, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -747583185, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1986415230, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -430330349, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -102825006, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -733792105, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -641612092, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1351486939, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1507532917, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2030343924, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -828478571, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1506370874, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1786447517, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1010805287, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2136821028, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 602650322, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 905042630, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1204125293, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1855618474, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1927516484, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1375878737, 0))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar11 == 7) || (iParam1 >= 55 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, 2083259958, 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 2) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1882920022, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 396458410, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -761463976, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 821147517, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 103539798, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1347486026, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -994703884, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1119232689, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1607949555, 0))) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 320460654, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -2017999390, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1410897066, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -826135203, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1965569012, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1064262817, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1053842259, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1358888880, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -441291342, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -747583185, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1986415230, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -430330349, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -102825006, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -733792105, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -641612092, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1351486939, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1507532917, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2030343924, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -828478571, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1506370874, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1786447517, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1010805287, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2136821028, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1831422288, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1927516484, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar13 == 7) || iVar13 == 10) || iVar13 == 12) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 1147939952, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1200513218, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1882920022, 0))) || DLC1::_0x341DE7ED1D2A1BFD(iVar14, -747583185, 0))
				{
					if (iParam1 >= 55 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar16, 1965569012, 0))
				{
					if (DLC1::_0x341DE7ED1D2A1BFD(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
				else if (((DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1786447517, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1010805287, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1325813684, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -549843760, 0))
				{
					return 0;
				}
				else if ((DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1703203608, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1415000253, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -168336417, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar11 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 2) || iVar13 == 4) || iVar13 == 5) || iVar13 == 9) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1200513218, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -530089825, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, 103539798, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -994703884, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar11 == 9)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 4) || iVar13 == 5) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -1200513218, 0))) || (iParam3 >= 256 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -530089825, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar16, -7109286, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, 1943347821, 0))
				{
					return 0;
				}
				else if (((DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1786447517, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1010805287, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -1325813684, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar16, -549843760, 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, 158381135, 0))
		{
			if (iParam4 != -99)
			{
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar16, 558082254, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && DLC1::_0x341DE7ED1D2A1BFD(iVar12, 1716958480, 0))
		{
			if (iParam3 != -99)
			{
				if (iVar14 != -1 && DLC1::_0x341DE7ED1D2A1BFD(iVar14, -747583185, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (iParam11 != -99)
			{
				iVar38 = -1;
				if (iParam11 >= 256)
				{
					iVar38 = func_750(iParam0, iParam11, 4, 4);
				}
				if (DLC1::_0x341DE7ED1D2A1BFD(iVar38, -33031567, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_677(int iParam0)
{
	if (iParam0 != -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case -783649692:
		case 691352495:
		case 1313566316:
		case 451909412:
		case 1552550633:
		case -206550874:
		case 860928119:
		case -445797343:
		case 1107219923:
		case -173716332:
		case -2017140386:
		case -538304226:
		case -1235599732:
		case -592242000:
		case 1815489089:
		case -831095241:
		case 2062043045:
		case -1092100326:
		case -1065332020:
		case -1465994616:
		case -1516536717:
		case 507503642:
		case -1470397961:
		case -1392082519:
		case 264425668:
		case -88859389:
		case 560755735:
		case 157858412:
		case -593565059:
		case -513152401:
		case -286945526:
		case 2004948615:
			return 1;
			break;
	}
	return 0;
}

int func_678(int iParam0, int iParam1)
{
	if (iParam0 == 1885233650)
	{
		iVar0 = func_750(iParam0, iParam1, 11, 3);
		if (iVar0 != -1)
		{
			if (((((((((((((((((((((((((((((((DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1119232689, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -2102859770, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 1784133476, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 1976716889, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 2099109084, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1488441032, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1719167561, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1274099003, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1410897066, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -826135203, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 1431529976, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 1723403459, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 2044466679, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -2020757158, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1064262817, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1419806467, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1053842259, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1358888880, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -441291342, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -785939537, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 492620493, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1506370874, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1786447517, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1010805287, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1325813684, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 1690933245, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 1360588936, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 2136821028, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, 1927516484, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar0, -1603194928, 0))
			{
				return 1;
			}
		}
		if (iVar0 != -1)
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0))
			{
				return 1;
			}
		}
		return func_745(iParam0, iParam1, -1);
	}
	else if (iParam0 == -1667301416)
	{
		iVar1 = func_750(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_740(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, -1393156190, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, 1843965488, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, 441715397, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, 264959411, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, -1410897066, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, 320460654, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, -2017999390, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, -826135203, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, -747583185, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, -102825006, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, -733792105, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, -641612092, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, -1507532917, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, -1506370874, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, -1786447517, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, -1010805287, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, -1325813684, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, 1690933245, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, 1360588936, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, 2136821028, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar1, 1927516484, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_679(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_731(GAMEPLAY::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = func_730(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_76431;
		}
		func_767(iVar1, 1, iParam2);
	}
	func_680(iParam0, bParam3, 0);
}

void func_680(int iParam0, bool bParam1, bool bParam2)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_76431;
		PED::_CLEAR_PED_FACIAL_DECORATIONS(iParam0);
		iVar14 = func_729(iParam0);
		bVar15 = func_724(iParam0, 0);
		bVar16 = func_720(iParam0);
		bVar17 = func_719(iParam0);
		if (bParam1)
		{
			bVar16 = true;
		}
		if (bParam2)
		{
			bVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (func_716(iVar18, iVar0))
			{
				if (func_709(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (func_706(iParam0, &Var1, iVar18, Var1.f_4, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::_SET_PED_DECORATION(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (func_716(123, iVar0))
		{
			if (PED::_GET_TATTOO_ZONE(-1719270477, -1824026490) != 7)
			{
				PED::_SET_PED_DECORATION(iParam0, -1719270477, -1824026490);
			}
		}
		iVar20 = DLC1::_GET_NUM_DECORATIONS(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (DLC1::_0xFF56381874F82086(iVar14, iVar19, &Var21))
			{
				if (!DLC1::_IS_DLC_DATA_EMPTY(Var21))
				{
					iVar36 = (129 + iVar19);
					if (func_716(iVar36, iVar0))
					{
						if (func_706(iParam0, &(Var21.f_7), iVar36, Var21.f_2, Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							if (!func_682(Var21.f_2, Var21.f_3, iVar36))
							{
								PED::_SET_PED_DECORATION(iParam0, Var21.f_2, Var21.f_3);
								func_681(iParam0, Var21.f_2, Var21.f_3);
							}
						}
					}
				}
			}
			iVar19++;
		}
	}
}

void func_681(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1347816957:
			switch (iParam2)
			{
				case -725236090:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -2083543812);
					break;
				
				case -485989621:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1873408074);
					break;
				
				case 711356870:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1873408074);
					break;
				
				case 111487556:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 510898066);
					break;
				
				case 588276502:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 510898066);
					break;
				
				case -3335024:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 557464221);
					break;
				
				case 1184770609:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 557464221);
					break;
				
				case 359647189:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 2089193796);
					break;
				
				case 1545327916:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1305509445);
					break;
				
				case 954502846:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -638853135);
					break;
				
				case -893208491:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -638853135);
					break;
				
				case -1661674318:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1601527241);
					break;
				
				case -1624645348:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1960396175);
					break;
				
				case 620358850:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 54045697);
					break;
				
				case 122204512:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1310058833);
					break;
				
				case -645147161:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 251854291);
					break;
				
				case -375556598:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 2062329004);
					break;
				
				case 1841102407:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1538230799);
					break;
				
				case 831620593:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -59766962);
					break;
				
				case 1129884031:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1480518916);
					break;
				
				case 2092301321:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -482380281);
					break;
				
				case 580667351:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -76867803);
					break;
				
				case 1538832911:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -76867803);
					break;
				
				case -1355259635:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -533311445);
					break;
				
				case -1583168030:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 2137255691);
					break;
				
				case -1831032746:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 2137255691);
					break;
				
				case -2060448515:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -2042378246);
					break;
				
				case -50365286:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 756993084);
					break;
				
				case -364095692:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 756993084);
					break;
				
				case -606979520:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1161584545);
					break;
				
				case -1057062007:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1161584545);
					break;
				
				case -1253872621:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1528861297);
					break;
				
				case -1525625938:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1528861297);
					break;
				
				case 603801989:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 806416816);
					break;
				
				case 432289043:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 806416816);
					break;
				
				case 176592536:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1433191244);
					break;
				
				case -126291331:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1433191244);
					break;
				
				case 2093415191:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1917136673);
					break;
				
				case 1383966341:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1917136673);
					break;
				
				case 1061027846:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1634927571);
					break;
				
				case 610754913:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1634927571);
					break;
				
				case 1856271834:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1965545249);
					break;
				
				case 151235226:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1965545249);
					break;
				
				case 1292317344:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1855774824);
					break;
				
				case 1592055387:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1855774824);
					break;
			}
			switch (iParam2)
			{
				case 1389004292:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -408720218);
					break;
				
				case 459577145:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -789630253);
					break;
				
				case 697971620:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -789630253);
					break;
				
				case -157037136:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1104646403);
					break;
				
				case 70412493:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1104646403);
					break;
				
				case -861963864:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1535753965);
					break;
				
				case -496458438:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1535753965);
					break;
				
				case -1356579150:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -99283873);
					break;
				
				case -1125721545:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -485563451);
					break;
				
				case -2065044930:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1432409825);
					break;
				
				case -346765569:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1432409825);
					break;
				
				case -734816067:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -302122276);
					break;
				
				case -961282630:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -717650362);
					break;
				
				case 1134491538:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -233338433);
					break;
				
				case 842421441:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 314602147);
					break;
				
				case 523316919:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1900511936);
					break;
				
				case 158466873:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 821039296);
					break;
				
				case 1789019544:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -545035086);
					break;
				
				case 1426332252:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1960507422);
					break;
				
				case 1178893529:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -694062896);
					break;
				
				case -1101107129:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1829603753);
					break;
				
				case -1790763503:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 2045678662);
					break;
				
				case -1550271812:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 2045678662);
					break;
				
				case -384612940:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1648833799);
					break;
				
				case -45257176:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -75503803);
					break;
				
				case -866087857:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -75503803);
					break;
				
				case -623761102:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1501392494);
					break;
				
				case 1075770310:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1390523363);
					break;
				
				case 342137938:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1390523363);
					break;
				
				case 599407357:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1233403366);
					break;
				
				case 335056082:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1233403366);
					break;
				
				case 1164668855:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1084269847);
					break;
				
				case -424365493:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1084269847);
					break;
				
				case -1995737350:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1344114351);
					break;
				
				case 2052610452:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1344114351);
					break;
				
				case 745160145:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1154163217);
					break;
				
				case 238944633:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1154163217);
					break;
				
				case -1894874368:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1174984361);
					break;
				
				case -1050515545:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, -1174984361);
					break;
				
				case -1296283045:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 495811116);
					break;
				
				case -254061820:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 495811116);
					break;
				
				case -482822209:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1152130184);
					break;
				
				case -1148622755:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1152130184);
					break;
				
				case 499821790:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1987407913);
					break;
				
				case 132940066:
					PED::_SET_PED_DECORATION(iParam0, 1347816957, 1987407913);
					break;
			}
			break;
		
		case 202420620:
			switch (iParam2)
			{
				case 1495413374:
					PED::_SET_PED_DECORATION(iParam0, 202420620, -501147160);
					break;
			}
			switch (iParam2)
			{
				case -1214222467:
					PED::_SET_PED_DECORATION(iParam0, 202420620, -1739422168);
					break;
			}
			break;
		
		case -1016521996:
			switch (iParam2)
			{
				case 1321477520:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 5866095);
					break;
				
				case -670835215:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 1257645214);
					break;
				
				case -32315658:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1938877708);
					break;
				
				case -715501640:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 177616986);
					break;
				
				case 812138662:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -437640642);
					break;
				
				case -1950509905:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 460297451);
					break;
				
				case 1850969667:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -589899025);
					break;
				
				case 997671095:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 342543493);
					break;
				
				case -1526467268:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -950134188);
					break;
				
				case -881852779:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 2043701187);
					break;
				
				case -570992218:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 794519137);
					break;
				
				case -1075500139:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 90598123);
					break;
				
				case -791689054:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -151296204);
					break;
				
				case 699980662:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 386731882);
					break;
				
				case -583230088:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1129017399);
					break;
				
				case 1922201848:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1175077252);
					break;
				
				case -767702908:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1710583235);
					break;
				
				case 1979813112:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 900966291);
					break;
				
				case -2056272592:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -153754682);
					break;
			}
			switch (iParam2)
			{
				case 371389080:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 580372087);
					break;
				
				case -521204587:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -326572091);
					break;
				
				case 1685732560:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1550532305);
					break;
				
				case -1386443378:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1913405685);
					break;
				
				case -1706648281:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -956341143);
					break;
				
				case -519957866:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 2063062018);
					break;
				
				case 653935582:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 605481338);
					break;
				
				case 2111779395:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1708926987);
					break;
				
				case 428988289:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 264383347);
					break;
				
				case -1903962822:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 1101363062);
					break;
				
				case 1365770911:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1963254369);
					break;
				
				case 42029862:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 390663856);
					break;
				
				case 438631811:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 916481637);
					break;
				
				case -1478715891:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 1930151778);
					break;
				
				case -1395531229:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1731016702);
					break;
				
				case 30333135:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1915197882);
					break;
				
				case 1783341339:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -25535717);
					break;
				
				case -16077126:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 1193200233);
					break;
				
				case -833643184:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 1031663893);
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam2)
			{
				case -1318802347:
					PED::_SET_PED_DECORATION(iParam0, 1616273011, -815706791);
					break;
				
				case -1366750043:
					PED::_SET_PED_DECORATION(iParam0, 1616273011, -1066127505);
					break;
			}
			break;
		
		case -1194930348:
			switch (iParam2)
			{
				case -841238543:
					PED::_SET_PED_DECORATION(iParam0, -1194930348, -441419962);
					break;
				
				case -1405854945:
					PED::_SET_PED_DECORATION(iParam0, -1194930348, 1647997020);
					break;
			}
			break;
		
		case -777275782:
			switch (iParam2)
			{
				case 671171671:
					PED::_SET_PED_DECORATION(iParam0, -777275782, 904519720);
					break;
				
				case 1911627074:
					PED::_SET_PED_DECORATION(iParam0, -777275782, -607391498);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam2)
			{
				case 266230635:
					PED::_SET_PED_DECORATION(iParam0, 484754152, -588549683);
					PED::_SET_PED_DECORATION(iParam0, 484754152, 464027076);
					break;
				
				case -1261787835:
					PED::_SET_PED_DECORATION(iParam0, 484754152, -965491494);
					PED::_SET_PED_DECORATION(iParam0, 484754152, 939374190);
					break;
			}
			break;
	}
}

int func_682(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case -1265443416:
				case 676807987:
					if (func_703(30260, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1265443416);
					break;
				
				case 1888753218:
				case 272160153:
					if (func_703(30261, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1888753218);
					break;
				
				case -552467991:
				case 1593344440:
					if (func_703(30262, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -552467991);
					break;
				
				case -1655919948:
				case 546222390:
					if (func_703(30263, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1655919948);
					break;
				
				case -917106601:
				case 1983375900:
					if (func_703(30264, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -917106601);
					break;
				
				case 1595446967:
				case -620589387:
					if (func_703(30265, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1595446967);
					break;
				
				case -530593323:
				case 383923929:
					if (func_703(30266, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -530593323);
					break;
				
				case 561619447:
				case -1703406594:
					if (func_703(30267, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 561619447);
					break;
				
				case -1913656173:
				case -398286533:
					if (func_703(30268, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1913656173);
					break;
				
				case -1766901922:
				case -80478106:
					if (func_703(30269, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1766901922);
					break;
				
				case 2091781849:
				case 1835331655:
					if (func_703(30270, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 2091781849);
					break;
				
				case 1824588341:
				case -1650596870:
					if (func_703(30271, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1824588341);
					break;
				
				case 242597641:
				case 1231926496:
					if (func_703(30272, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 242597641);
					break;
				
				case 566785691:
				case -1506181253:
					if (func_703(30273, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 566785691);
					break;
				
				case -2091312957:
				case -1737145605:
					if (func_703(30274, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -2091312957);
					break;
				
				case -2079214831:
				case 1673851512:
					if (func_703(30275, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -2079214831);
					break;
				
				case 1359156274:
				case 1023339598:
					if (func_703(30276, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1359156274);
					break;
				
				case 1904247246:
				case -163738770:
					if (func_703(30277, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1904247246);
					break;
				
				case -1351518396:
				case 1863218823:
					if (func_703(30278, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1351518396);
					break;
				
				case -797874817:
				case 333966447:
					if (func_703(30279, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -797874817);
					break;
				
				case -385507297:
				case 1412626052:
					if (func_703(30280, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -385507297);
					break;
				
				case 2011910758:
				case -39100956:
					if (func_703(30281, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 2011910758);
					break;
				
				case -1953985443:
				case 1631533003:
					if (func_703(30282, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1953985443);
					break;
				
				case -1124222352:
				case 1493430918:
					if (func_703(30283, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1124222352);
					break;
				
				case -1806994767:
				case -196693334:
					if (func_703(30284, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1806994767);
					break;
				
				case -1445761968:
				case 553507495:
					if (func_703(30285, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1445761968);
					break;
				
				case -89186417:
				case 2003474700:
					if (func_703(30286, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -89186417);
					break;
				
				case -308083083:
				case 1121792228:
					if (func_703(30287, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -308083083);
					break;
				
				case 667714507:
				case -1424651669:
					if (func_703(30288, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 667714507);
					break;
				
				case -1610210252:
				case -1454164346:
					if (func_703(30289, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1610210252);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case -417116499:
				case -779574408:
					if (func_703(28255, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -417116499);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case 1246110729:
				case -1361908447:
					if (func_699(89, -1) || func_703(30254, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1246110729);
					break;
				
				case 461575135:
				case 1250161120:
					if (func_699(90, -1) || func_703(30255, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 461575135);
					break;
				
				case -386163163:
				case 1288201657:
					if (func_699(92, -1) || func_703(30256, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -386163163);
					break;
				
				case -1414541879:
				case 111412152:
					if ((((func_699(89, -1) && func_699(90, -1)) && func_699(92, -1)) && func_699(91, -1)) || func_703(30257, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1414541879);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -502214028:
				case -1413356029:
					if (func_699(78, -1) || func_703(28199, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1413356029);
					break;
				
				case 836015556:
				case -1849502305:
					if (((func_699(77, -1) && func_699(78, -1)) && func_698(92, -1) >= func_697(92, 5, 9)) || func_703(28200, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1849502305);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -104345338:
				case 1184426490:
				case 47527010:
				case 1505693935:
				case -1551981580:
				case 1572497951:
					if (((func_698(93, -1) >= func_697(93, 5, 9) && func_699(79, -1)) && func_699(80, -1)) || func_703(28204, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, ((iParam1 == 1505693935 || iParam1 == -1551981580) || iParam1 == 1572497951));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case 1848216712:
				case -965460704:
					if (func_699(81, -1) || func_703(28206, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -965460704);
					break;
				
				case 223413431:
				case -1917254263:
					if (func_698(94, -1) >= func_697(94, 5, 9) || func_703(28207, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1917254263);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -432155816:
				case 1777785544:
					if (((func_699(84, -1) && func_699(85, -1)) && func_698(97, -1) >= func_697(97, 5, 9)) || func_703(28212, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1777785544);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -1838365509:
				case -2062177771:
					if (func_703(28249, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -2062177771);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -73524046:
				case 1921321590:
					if (func_703(28183, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1921321590);
					break;
				
				case -1843193891:
				case -822177429:
					if (func_703(28182, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -822177429);
					break;
				
				case -1224204417:
				case -531271155:
					if (func_703(28184, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -531271155);
					break;
				
				case 921109652:
				case 412829693:
					if (func_703(28181, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 412829693);
					break;
				
				case -1009122462:
				case -1411787934:
					if (func_703(28178, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1411787934);
					break;
				
				case -2143877160:
				case 653645139:
					if (func_703(28177, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 653645139);
					break;
				
				case 985961343:
				case 1848048195:
					if (func_703(28176, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1848048195);
					break;
				
				case 906071982:
				case -781400442:
					if (func_703(28180, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -781400442);
					break;
				
				case 566663142:
				case 1507919906:
					if (func_703(28179, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1507919906);
					break;
				
				case 764251611:
				case -1381102054:
					if (((((((((func_703(28176, -1, -1) && func_703(28177, -1, -1)) && func_703(28178, -1, -1)) && func_703(28179, -1, -1)) && func_703(28180, -1, -1)) && func_703(28181, -1, -1)) && func_703(28182, -1, -1)) && func_703(28183, -1, -1)) && func_703(28184, -1, -1)) || func_703(28221, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1381102054);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -1575240476:
				case 565394453:
					if (func_703(28191, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 565394453);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -809444617:
				case -498335731:
					if (func_703(28190, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -498335731);
					break;
				
				case -1643354138:
				case -137061435:
					if (func_703(28189, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -137061435);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -547605203:
				case 2077453849:
					if (func_694(0, 1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 2077453849);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -1576036346:
				case 585832887:
					if ((((((((((((((((((func_699(77, -1) && func_699(78, -1)) && func_698(92, -1) >= func_697(92, 5, 9)) && func_698(93, -1) >= func_697(93, 5, 9)) && func_699(79, -1)) && func_699(80, -1)) && func_699(81, -1)) && func_698(94, -1) >= func_697(94, 5, 9)) && func_698(95, -1) >= func_697(95, 5, 9)) && func_699(82, -1)) && func_699(83, -1)) && func_698(96, -1) >= func_697(96, 5, 9)) && func_699(84, -1)) && func_699(85, -1)) && func_698(97, -1) >= func_697(97, 5, 9)) && func_699(86, -1)) && func_699(87, -1)) && func_699(88, -1)) || func_703(28222, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 585832887);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 1347816957:
			switch (iParam1)
			{
				case 1352224647:
				case 1896190035:
					return !func_700(iParam2, iParam1, iParam1 == 1352224647);
					break;
				
				case 1857392409:
				case -524815620:
					return !func_700(iParam2, iParam1, iParam1 == 1857392409);
					break;
				
				case 580667351:
				case -1790763503:
					if (func_703(27109, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 580667351);
					break;
				
				case -1355259635:
				case -384612940:
					if (func_703(27110, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1355259635);
					break;
				
				case 711356870:
				case 697971620:
					if (func_703(27111, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 711356870);
					break;
				
				case 588276502:
				case 70412493:
					if (func_703(27112, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 588276502);
					break;
				
				case 1184770609:
				case -496458438:
					if (func_703(27113, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1184770609);
					break;
				
				case -893208491:
				case -346765569:
					if (func_703(27114, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -893208491);
					break;
				
				case 1538832911:
				case -1550271812:
					if (func_703(27115, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1538832911);
					break;
			}
			break;
		
		case -2145114209:
			switch (iParam1)
			{
				case -1015392647:
				case 1817749559:
					if (func_703(25032, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1015392647);
					break;
				
				case 1742471685:
				case 1403640225:
					if (func_703(25033, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1742471685);
					break;
				
				case 408116861:
				case 1306937694:
					if (func_703(25034, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 408116861);
					break;
				
				case -1855327598:
				case -95533995:
					if (func_703(25035, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1855327598);
					break;
				
				case 1578402908:
				case -1871451886:
					if (func_703(25036, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1578402908);
					break;
				
				case -1423366674:
				case -1120843246:
					if (func_703(25037, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1423366674);
					break;
				
				case 1611107047:
				case 2081997561:
					if (func_703(25038, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1611107047);
					break;
				
				case 742927305:
				case -1339214923:
					if (func_703(25039, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 742927305);
					break;
				
				case -1578833665:
				case 9807447:
					if (func_703(25040, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1578833665);
					break;
				
				case 773738667:
				case -236005319:
					if (func_703(25041, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 773738667);
					break;
				
				case 213007702:
				case -1470794594:
					if (func_703(25042, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 213007702);
					break;
				
				case 432208089:
				case -2100868384:
					if (func_703(25043, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 432208089);
					break;
				
				case 35817542:
				case 805626890:
					if (func_703(25044, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 35817542);
					break;
				
				case -1786080093:
				case -438487729:
					if (func_703(25045, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1786080093);
					break;
				
				case -215923306:
				case 1258452311:
					if (func_703(25046, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -215923306);
					break;
				
				case 1275581512:
				case -1387587887:
					if (func_703(25047, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1275581512);
					break;
				
				case -1214009019:
				case 390131826:
					if (func_703(25048, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1214009019);
					break;
				
				case 1639713863:
				case -933865090:
					if (func_703(25049, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1639713863);
					break;
				
				case 529311368:
				case 42888304:
					if (func_703(25050, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 529311368);
					break;
				
				case -1033895864:
				case -1512618189:
					if (func_703(25051, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1033895864);
					break;
				
				case 924043677:
				case 1805955770:
					if (func_703(25052, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 924043677);
					break;
				
				case -574749266:
				case 2040741242:
					if (func_703(25053, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -574749266);
					break;
				
				case 519463901:
				case -1572115827:
					if (func_703(25054, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 519463901);
					break;
				
				case -643353187:
				case -2101278774:
					if (func_703(25055, -1, -1))
					{
						return 0;
					}
					if (func_703(27077, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -643353187);
					break;
				
				case 1571011017:
				case -2006216868:
					if (func_703(25056, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1571011017);
					break;
				
				case -94540936:
				case 1445470992:
					if (func_703(25057, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -94540936);
					break;
				
				case 1884218662:
				case 31459402:
					if (func_703(25058, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1884218662);
					break;
				
				case -345261869:
				case 850282323:
					if (func_703(25059, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -345261869);
					break;
				
				case -1022859058:
				case 1518409673:
					if (func_703(25060, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1022859058);
					break;
				
				case -1786322924:
				case 576453072:
					if (func_703(25061, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1786322924);
					break;
				
				case 2085269022:
				case 1343575520:
					if (func_703(25062, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 2085269022);
					break;
				
				case 1511882653:
				case -1244055789:
					if (func_703(25063, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1511882653);
					break;
				
				case -506986385:
				case 1650491806:
					if (func_703(25064, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -506986385);
					break;
				
				case -874081588:
				case 507754313:
					if (func_703(25065, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -874081588);
					break;
				
				case -2043405937:
				case -1168735793:
					if (func_703(25066, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -2043405937);
					break;
				
				case 59038842:
				case 539301314:
					if (func_703(25067, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 59038842);
					break;
				
				case 1101237057:
				case 485114319:
					if (func_703(25068, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1101237057);
					break;
				
				case -657535677:
				case 1397146165:
					if (func_703(25069, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -657535677);
					break;
				
				case -2093585025:
				case -922912500:
					if (func_703(25070, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -2093585025);
					break;
				
				case 908383468:
				case 898093918:
					if (func_703(25071, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 908383468);
					break;
				
				case -1608760399:
				case -513817029:
					if (func_703(25072, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1608760399);
					break;
				
				case 1373660540:
				case 134762953:
					if (func_703(25073, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1373660540);
					break;
				
				case 1854316713:
				case 252404144:
					if (func_703(25074, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1854316713);
					break;
				
				case -119951196:
				case 168579849:
					if (func_703(25075, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -119951196);
					break;
				
				case -1649842228:
				case 1888095634:
					if (func_703(25076, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1649842228);
					break;
				
				case -1640764925:
				case -1046236786:
					if (func_703(25077, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1640764925);
					break;
				
				case 1787927716:
				case 33901453:
					if (func_703(25078, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1787927716);
					break;
				
				case 104283481:
				case -2043232938:
					if (func_703(25079, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 104283481);
					break;
				
				case 378263500:
				case 1113927554:
					if (func_703(25080, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 378263500);
					break;
				
				case -1061215309:
				case -1602559301:
					if (func_703(25081, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1061215309);
					break;
				
				case 1034166199:
				case -1167812298:
					if (func_703(25082, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1034166199);
					break;
				
				case 1828057305:
				case 1912961832:
					if (func_703(25083, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1828057305);
					break;
				
				case -1486297381:
				case 647456058:
					if (func_703(25084, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1486297381);
					break;
				
				case -540767159:
				case -717523161:
					if (func_703(25085, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -540767159);
					break;
				
				case -1235960692:
				case -1641870267:
					if (func_703(25086, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1235960692);
					break;
				
				case -329316995:
				case 1857030685:
					if (func_703(25087, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -329316995);
					break;
				
				case -581880272:
				case -1074922646:
					if (func_703(25088, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -581880272);
					break;
				
				case -1807345434:
				case -1544308671:
					if (func_703(25089, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1807345434);
					break;
				
				case -1018409435:
				case -480375220:
					if (func_703(25090, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1018409435);
					break;
				
				case -136011898:
				case -1158306419:
					if (func_703(25091, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -136011898);
					break;
				
				case -2069494727:
				case 808115088:
					if (func_703(25092, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -2069494727);
					break;
				
				case -642887005:
				case 1544542048:
					if (func_703(25093, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -642887005);
					break;
				
				case -1810837638:
				case 212713658:
					if (func_703(25094, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1810837638);
					break;
				
				case 1034484576:
				case -537477127:
					if (func_703(25095, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1034484576);
					break;
				
				case 1979445594:
				case -2067132678:
					if (func_703(25096, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1979445594);
					break;
				
				case -1533877336:
				case 1060051174:
					if (func_703(25097, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1533877336);
					break;
				
				case -892254987:
				case 2038375002:
					if (func_703(25098, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -892254987);
					break;
				
				case -654222260:
				case -256374303:
					if (func_703(25099, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -654222260);
					break;
				
				case 450544862:
				case -964420554:
					return !func_700(iParam2, iParam1, iParam1 == 450544862);
					break;
			}
			break;
		
		case 202420620:
			switch (iParam1)
			{
				case 1495413374:
				case -1214222467:
					if (func_703(22108, -1, -1) || func_703(25006, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1495413374);
					break;
				
				case 370906922:
				case -1079776812:
					if (func_703(9481, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 370906922);
					break;
				
				case 531742637:
				case -948990166:
					if (func_703(9470, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 531742637);
					break;
				
				case -225805790:
				case 1382201813:
					if (func_703(9475, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -225805790);
					break;
				
				case -624586952:
				case 1576375706:
					if (func_703(9472, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -624586952);
					break;
				
				case 915144902:
				case -1356500517:
					if (func_703(9465, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 915144902);
					break;
				
				case -242746043:
				case 1838019927:
					if (func_703(9463, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -242746043);
					break;
				
				case 1620048835:
				case 618955885:
					if (func_703(9464, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1620048835);
					break;
				
				case -1097603268:
				case 909858453:
					if (func_703(9468, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1097603268);
					break;
				
				case -660672539:
				case 1809389163:
					if (func_703(9469, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -660672539);
					break;
				
				case -4642188:
				case -382370447:
					if (func_703(9479, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -4642188);
					break;
				
				case 1855977539:
				case -290949038:
					if (func_703(9473, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1855977539);
					break;
				
				case 1537270222:
				case 381474823:
					if (func_703(9480, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1537270222);
					break;
				
				case -1226569770:
				case 570088958:
					if (func_703(9476, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1226569770);
					break;
				
				case 1641457991:
				case 1093167087:
					if (func_703(9477, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1641457991);
					break;
				
				case 1366312361:
				case -1327397746:
					if (func_703(9471, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1366312361);
					break;
				
				case -1557113221:
				case 655777349:
					if (func_703(9474, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1557113221);
					break;
				
				case -1690570414:
				case -1496905620:
					if (func_703(9467, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1690570414);
					break;
				
				case -507204255:
				case -1043010182:
					if (func_703(9478, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -507204255);
					break;
				
				case -1804897639:
				case -1326077011:
					if (func_703(9462, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1804897639)
					{
						if (func_703(27085, -1, -1))
						{
							return 0;
						}
					}
					else if (func_703(27084, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1804897639);
					break;
				
				case -1375233423:
				case -1120323372:
					if (func_703(9466, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1375233423);
					break;
				
				case 490066935:
				case -1583620927:
					if (func_703(22126, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 490066935);
					break;
				
				case 1193725595:
				case 1407674396:
					if (func_703(22127, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1193725595);
					break;
				
				case 628493116:
				case -244079832:
					if (func_703(22128, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 628493116);
					break;
				
				case -2112155518:
				case 1055951410:
					if (func_703(22124, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -2112155518);
					break;
				
				case 1511337702:
				case 1092910333:
					if (func_703(22130, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1511337702);
					break;
				
				case -627666528:
				case -1874854660:
					if (func_703(22125, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -627666528);
					break;
				
				case 768324163:
				case -1379192256:
					if (func_703(22129, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 768324163);
					break;
				
				case -1448761813:
				case 1435106801:
					if (func_703(22131, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1448761813);
					break;
				
				case 868551738:
				case -1252683947:
					if (func_703(22132, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 868551738);
					break;
			}
			switch (iParam1)
			{
				case -1021262861:
				case -1380607703:
					if (func_703(22147, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1021262861);
					break;
				
				case -264447931:
				case 1010167914:
					if (func_703(22148, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -264447931);
					break;
				
				case -652127435:
				case 1059266367:
					if (func_703(22149, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -652127435);
					break;
				
				case -610014599:
				case 1869746711:
					if (func_703(22150, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -610014599);
					break;
				
				case 848073973:
				case 167494616:
					if (func_703(22151, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 848073973);
					break;
				
				case 1561087717:
				case 231256171:
					if (func_703(22152, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1561087717);
					break;
				
				case 2067249852:
				case -2041196288:
					if (func_703(22153, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 2067249852);
					break;
				
				case 1963924398:
				case -231795220:
					if (func_703(22154, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1963924398);
					break;
				
				case -898550276:
				case -1207463639:
					if (func_703(22155, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -898550276);
					break;
				
				case -1074178691:
				case 2023442158:
					if (func_703(22156, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1074178691);
					break;
				
				case -368616744:
				case -1293194083:
					if (func_703(22157, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -368616744);
					break;
				
				case -78566501:
				case 767365246:
					if (func_703(22158, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -78566501);
					break;
				
				case 1623651387:
				case -318042939:
					if (func_703(22159, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1623651387);
					break;
				
				case -1229980240:
				case -740608006:
					if (func_703(22160, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1229980240);
					break;
				
				case -1558321426:
				case 126660566:
					if (func_703(22161, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1558321426);
					break;
				
				case 518190097:
				case -252733393:
					if (func_703(22162, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 518190097);
					break;
				
				case -1996043294:
				case -1044136613:
					if (func_703(22163, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1996043294);
					break;
				
				case 1720844546:
				case -891762294:
					if (func_703(22164, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1720844546);
					break;
				
				case -20709979:
				case 1410738248:
					if (func_703(22165, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -20709979);
					break;
				
				case -1617383579:
				case -1978727490:
					if (func_703(22166, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1617383579);
					break;
				
				case -525135065:
				case 1684642458:
					if (func_703(22167, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -525135065);
					break;
				
				case 1796039054:
				case -147490340:
					if (func_703(22168, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1796039054);
					break;
				
				case 1250030109:
				case -1422117996:
					if (func_703(22169, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1250030109);
					break;
				
				case -1195876295:
				case -313931425:
					if (func_703(22170, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1195876295);
					break;
				
				case 672890092:
				case 211076563:
					if (func_703(22171, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 672890092);
					break;
				
				case 413298313:
				case 355035035:
					if (func_703(22172, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 413298313);
					break;
				
				case 1157302328:
				case -1447308868:
					if (func_703(22173, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1157302328);
					break;
				
				case -1564457471:
				case 1802655618:
					if (func_703(22174, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1564457471);
					break;
				
				case 1152621988:
				case -1063742156:
					if (func_703(22175, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1152621988);
					break;
				
				case -1961291349:
				case 1988028531:
					if (func_703(22176, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1961291349);
					break;
				
				case -1912591074:
				case 73898487:
					if (func_703(22177, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1912591074);
					break;
				
				case 1049766626:
				case -1041813118:
					if (func_703(22178, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1049766626);
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam1)
			{
				case -2123485438:
				case 1457900554:
					if (func_703(15426, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -2123485438);
					break;
				
				case -815706791:
				case -1066127505:
					if (func_703(15422, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -815706791);
					break;
				
				case -1318802347:
				case -1366750043:
					if (func_703(15423, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1318802347);
					break;
				
				case 306110040:
				case 1944822196:
					if (func_703(15421, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 306110040);
					break;
				
				case 1828101251:
				case -1639289459:
					if (func_703(15427, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1828101251);
					break;
				
				case -919314748:
				case 1282565442:
					if (func_703(15419, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -919314748);
					break;
				
				case 1971111649:
				case -884280700:
					if (func_703(15420, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1971111649);
					break;
			}
			switch (iParam1)
			{
				case 1029334921:
				case -322091380:
					if (func_703(15394, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1029334921);
					break;
				
				case -534855486:
				case -1168575065:
					if (func_831(209, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -534855486);
					break;
				
				case -516333262:
				case 756873456:
					if (func_703(15406, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -516333262);
					break;
				
				case 485135095:
				case -730037708:
					if (func_703(15395, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 485135095);
					break;
				
				case 1713551997:
				case -970458486:
					if (func_831(209, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1713551997);
					break;
				
				case -1490658501:
				case 975601953:
					if (func_703(15410, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1490658501);
					break;
				
				case -1735635238:
				case 1614208560:
					if (func_703(15407, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1735635238);
					break;
				
				case 1931303956:
				case -726032561:
					if (func_831(209, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1931303956);
					break;
				
				case -1931617488:
				case -1824987162:
					if (func_831(209, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1931617488);
					break;
				
				case -1726332301:
				case 417579524:
					if (func_703(15414, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1726332301);
					break;
				
				case -1382922530:
				case 734151492:
					if (func_703(15415, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1382922530);
					break;
				
				case 452778672:
				case -1766862320:
					if (func_703(15399, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 452778672);
					break;
				
				case -1776790350:
				case 579562906:
					if (func_703(15404, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1776790350);
					break;
				
				case -1988057295:
				case -619754931:
					if (func_831(209, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1988057295);
					break;
				
				case 816707921:
				case 1424441799:
					if (func_703(15392, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 816707921);
					break;
				
				case 744446190:
				case -1405036369:
					if (func_703(15390, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 744446190);
					break;
				
				case 917772807:
				case 1929056908:
					if (func_703(15402, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 917772807);
					break;
				
				case -292922355:
				case -34538790:
					if (func_703(15416, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -292922355);
					break;
				
				case -1495432685:
				case 1898518287:
					if (func_831(209, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1495432685);
					break;
			}
			break;
		
		case -240234547:
			switch (iParam1)
			{
				case 769964545:
				case 1916093085:
					if (func_703(9366, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 769964545);
					break;
				
				case 1424500982:
				case -701486200:
					if (func_703(9367, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1424500982);
					break;
				
				case -1810785185:
				case 1951718630:
					if (func_703(9369, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1810785185);
					break;
				
				case 837990279:
				case -1981978861:
					if (func_703(9368, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 837990279);
					break;
				
				case 1752551314:
				case 468661890:
					if (func_703(9365, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1752551314);
					break;
				
				case 735155845:
				case 1907925586:
					if (func_703(9364, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 735155845);
					break;
				
				case 1863251462:
				case 646243571:
					if (func_703(27078, -1, -1))
					{
						return 0;
					}
					if (func_703(9363, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1863251462);
					break;
				
				case -2142058763:
				case 1953935161:
					if (func_703(9362, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -2142058763);
					break;
				
				case -207591105:
				case 874867224:
					if (func_703(9370, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -207591105);
					break;
				
				case -932813887:
				case 1344008898:
					if (func_703(9371, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -932813887);
					break;
				
				case -313503199:
				case 1297781304:
					if (func_703(9372, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -313503199);
					break;
				
				case 718936417:
				case 1977233252:
					if (func_703(9373, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 718936417);
					break;
				
				case -1107649605:
				case -194410344:
					if (func_703(9374, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1107649605);
					break;
				
				case 39090475:
				case 392012609:
					if (func_703(9384, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 39090475);
					break;
				
				case 1628251208:
				case 705148450:
					if (func_703(9385, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1628251208);
					break;
			}
			break;
		
		case -1194930348:
			switch (iParam1)
			{
				case -621355603:
				case -46521805:
					if (func_703(7551, -1, -1) || func_430(3789, -1, 0) >= Global_262145.f_16308)
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -621355603);
					break;
				
				case -1006202521:
				case -1549217620:
					if (func_703(7467, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1006202521);
					break;
				
				case -1834049539:
				case 1674429052:
					if (func_703(7468, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1834049539)
					{
						if (func_703(27083, -1, -1))
						{
							return 0;
						}
					}
					else if (func_703(27086, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1834049539);
					break;
				
				case -2060372580:
				case -254669596:
					if (func_703(7469, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -2060372580);
					break;
				
				case 1057304170:
				case 1802602254:
					if (func_703(7470, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1057304170);
					break;
				
				case 1421572640:
				case -941072260:
					if (func_703(7471, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1421572640);
					break;
				
				case 481259621:
				case -1844749517:
					if (func_703(7472, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 481259621);
					break;
				
				case 1227497670:
				case 82745424:
					if (func_703(7473, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1227497670);
					break;
				
				case 319276780:
				case -673460083:
					if (func_703(7474, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 319276780);
					break;
				
				case 2070827921:
				case -99954496:
					if (func_703(7475, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 2070827921);
					break;
				
				case 1433629991:
				case 2078163456:
					if (func_703(7476, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1433629991);
					break;
				
				case -1712994650:
				case 1362343227:
					if (func_703(7477, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1712994650);
					break;
				
				case 2125094286:
				case 1176005743:
					if (func_703(7478, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 2125094286);
					break;
				
				case 712298404:
				case -1504557219:
					if (func_703(7479, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 712298404);
					break;
				
				case 1998072324:
				case 367912881:
					if (func_703(7480, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1998072324);
					break;
				
				case 1249206960:
				case -836343280:
					if (func_703(7481, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1249206960);
					break;
			}
			break;
		
		case -1907832850:
			switch (iParam1)
			{
				case 2062186390:
				case 283190173:
					if (func_703(4260, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 283190173);
					break;
				
				case -60867780:
				case 1528527015:
					if (func_703(4257, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1528527015);
					break;
				
				case 926967912:
				case -1690029966:
					if (func_703(4269, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1690029966);
					break;
				
				case -1886278590:
				case -1685994466:
					if (func_703(4261, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1685994466);
					break;
				
				case -1314959708:
				case 255166927:
					if (func_703(4259, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 255166927);
					break;
				
				case -1696774529:
				case -271257487:
					if (func_703(4268, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -271257487);
					break;
				
				case -356446484:
				case 1885215284:
					if (func_703(4265, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1885215284);
					break;
				
				case 857810380:
				case -1935156988:
					if (func_703(4258, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1935156988);
					break;
				
				case -629676646:
				case 1061465906:
					if (func_703(4264, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 1061465906);
					break;
				
				case -1879530481:
				case -871031729:
					if (func_703(4267, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -871031729);
					break;
				
				case -1265847311:
				case -101171485:
					if (func_703(4262, -1, -1))
					{
						return 0;
					}
					if (func_703(27079, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -101171485);
					break;
				
				case 32094424:
				case -1590298770:
					if (func_703(4263, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -1590298770);
					break;
				
				case 1969286744:
				case 303441856:
					if (func_703(4266, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == 303441856);
					break;
			}
			break;
		
		case 62137527:
			switch (iParam1)
			{
				case 386581472:
				case 1466454525:
					if (func_430(2931, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == 1466454525)
					{
						if (func_703(27068, -1, -1))
						{
							return 0;
						}
					}
					return !func_700(iParam2, iParam1, 1);
					break;
				
				case 979307144:
				case -473732439:
					if (func_430(2931, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == -473732439)
					{
						if (func_703(27068, -1, -1))
						{
							return 0;
						}
					}
					return !func_700(iParam2, iParam1, 0);
					break;
			}
			break;
		
		case -1542189594:
			switch (iParam1)
			{
				case -2049689650:
				case 560620683:
					if (func_703(113, -1, -1))
					{
						return 0;
					}
					return !func_700(iParam2, iParam1, iParam1 == -2049689650);
					break;
			}
			break;
		
		case -777275782:
			switch (iParam1)
			{
				case -627999265:
				case 1682346315:
				case 1021952654:
				case 1319396867:
				case 560794517:
				case 858697496:
				case -30981230:
				case -328032215:
				case -1451681225:
				case 267904819:
					if (iParam1 == -627999265)
					{
						if (func_703(27082, -1, -1))
						{
							return 0;
						}
						if (func_703(3770, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1682346315)
					{
						if (func_703(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1021952654)
					{
						if (func_703(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1319396867)
					{
						if (func_703(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 560794517)
					{
						if (func_703(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 858697496)
					{
						if (func_703(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -30981230)
					{
						if (func_703(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -328032215)
					{
						if (func_703(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -1451681225)
					{
						if (func_703(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 267904819)
					{
						if (func_703(3779, -1, -1) || func_703(27084, -1, -1))
						{
							return 0;
						}
					}
					return !func_700(iParam2, iParam1, 1);
					break;
				
				case -1864998224:
				case -2140814897:
				case 223468453:
				case -83970305:
				case -406843262:
				case -954740942:
				case -1675526854:
				case 2111717556:
				case -415395003:
				case 427521984:
					if (iParam1 == -1864998224)
					{
						if (func_703(3770, -1, -1))
						{
							return 0;
						}
						if (func_703(27082, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -2140814897)
					{
						if (func_703(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 223468453)
					{
						if (func_703(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -83970305)
					{
						if (func_703(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -406843262)
					{
						if (func_703(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -954740942)
					{
						if (func_703(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -1675526854)
					{
						if (func_703(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2111717556)
					{
						if (func_703(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -415395003)
					{
						if (func_703(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 427521984)
					{
						if (func_703(3779, -1, -1) || func_703(27083, -1, -1))
						{
							return 0;
						}
					}
					return !func_700(iParam2, iParam1, 0);
					break;
				
				case -863391184:
				case 671171671:
				case 1675446188:
				case 1911627074:
					if ((((func_703(3765, -1, -1) && func_703(3766, -1, -1)) && func_703(3767, -1, -1)) && func_703(3768, -1, -1)) && func_703(3769, -1, -1))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		
		case 243848076:
			switch (iParam1)
			{
				case 632918673:
				case 1525246127:
					return !func_703(3593, -1, -1);
					break;
			}
			break;
		
		case -1398869298:
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return 1;
					break;
				
				case 196632624:
				case -1644428107:
				case 1108198688:
				case 810099095:
					return 1;
					break;
				
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return 1;
					break;
				
				case 1980445908:
				case -1882429354:
				case -1235341889:
				case -1544517404:
					return 1;
					break;
				
				case -1450406320:
				case 1412653072:
					return (!func_831(152, -1) && !func_703(9440, -1, -1));
					break;
				
				case 210195800:
				case 7463306:
					return (!func_831(151, -1) && !func_703(9430, -1, -1));
					break;
				
				case 953986562:
					return (!func_685(func_691(iParam1, 3), -1) && !func_703(9426, -1, -1));
					break;
				
				case 585335312:
					return (!func_685(func_691(iParam1, 3), -1) && !func_703(9427, -1, -1));
					break;
				
				case 489617063:
					return (!func_685(func_691(iParam1, 3), -1) && !func_703(9428, -1, -1));
					break;
				
				case 1843402776:
					return (!func_685(func_691(iParam1, 3), -1) && !func_703(9431, -1, -1));
					break;
				
				case -1600520821:
					return (!func_685(func_691(iParam1, 3), -1) && !func_703(9432, -1, -1));
					break;
				
				case 1399087889:
					return (!func_685(func_691(iParam1, 3), -1) && !func_703(9433, -1, -1));
					break;
				
				case 1169344430:
					return (!func_685(func_691(iParam1, 3), -1) && !func_703(9439, -1, -1));
					break;
				
				case -2028647818:
					return (!func_685(func_691(iParam1, 3), -1) && !func_703(9434, -1, -1));
					break;
				
				case -1335845620:
					return (!func_685(func_691(iParam1, 3), -1) && !func_703(9435, -1, -1));
					break;
				
				case -1209849091:
					return (!func_685(func_691(iParam1, 3), -1) && !func_703(9436, -1, -1));
					break;
				
				case 2065609077:
					return (!func_685(func_691(iParam1, 3), -1) && !func_703(9429, -1, -1));
					break;
				
				case -664245241:
					return (!func_685(func_691(iParam1, 3), -1) && !func_703(9437, -1, -1));
					break;
				
				case 1531057961:
					return (!func_685(func_691(iParam1, 4), -1) && !func_703(9426, -1, -1));
					break;
				
				case 1986678137:
					return (!func_685(func_691(iParam1, 4), -1) && !func_703(9427, -1, -1));
					break;
				
				case 2142789653:
					return (!func_685(func_691(iParam1, 4), -1) && !func_703(9428, -1, -1));
					break;
				
				case 308053343:
					return (!func_685(func_691(iParam1, 4), -1) && !func_703(9431, -1, -1));
					break;
				
				case 753842819:
					return (!func_685(func_691(iParam1, 4), -1) && !func_703(9432, -1, -1));
					break;
				
				case 1052794406:
					return (!func_685(func_691(iParam1, 4), -1) && !func_703(9433, -1, -1));
					break;
				
				case -695726661:
					return (!func_685(func_691(iParam1, 4), -1) && !func_703(9439, -1, -1));
					break;
				
				case -1001821890:
					return (!func_685(func_691(iParam1, 4), -1) && !func_703(9434, -1, -1));
					break;
				
				case -1425459522:
					return (!func_685(func_691(iParam1, 4), -1) && !func_703(9435, -1, -1));
					break;
				
				case 1163510365:
					return (!func_685(func_691(iParam1, 4), -1) && !func_703(9436, -1, -1));
					break;
				
				case 933242602:
					return (!func_685(func_691(iParam1, 4), -1) && !func_703(9429, -1, -1));
					break;
				
				case -1347021116:
					return (!func_685(func_691(iParam1, 4), -1) && !func_703(9437, -1, -1));
					break;
				
				case 1676130538:
				case -1730534702:
				case -1767432596:
				case 1297354841:
				case -839806574:
				case -542100209:
					return !func_684();
					break;
			}
			break;
		
		case -1684351737:
			switch (iParam1)
			{
				case -190040148:
				case -11341151:
					return !func_703(3608, -1, -1);
					break;
			}
			break;
		
		case -1677471575:
			switch (iParam1)
			{
				case 42936837:
				case 516055815:
					return (!func_703(3615, -1, -1) && !func_703(9438, -1, -1));
					break;
			}
			break;
		
		case -1056335443:
			if (iParam1 == -963164512)
			{
				return 1;
			}
			switch (iParam1)
			{
				case 670952414:
				case -1544625218:
					return !func_703(3783, -1, -1);
					break;
				
				case -282875325:
				case 1185175875:
					return !func_703(3784, -1, -1);
					break;
				
				case 2079623104:
				case 155591269:
					return !func_703(3785, -1, -1);
					break;
				
				case 1088443427:
				case -1057958846:
					return !func_703(3786, -1, -1);
					break;
				
				case 200001600:
				case -1853795495:
					return !func_703(3787, -1, -1);
					break;
				
				case 1620729159:
				case -1860485560:
					return !func_703(3788, -1, -1);
					break;
				
				case -1713274238:
				case 499288642:
					if (func_703(27081, -1, -1))
					{
						return 0;
					}
					return !func_703(3789, -1, -1);
					break;
				
				case -1571590969:
				case -7887054:
					return !func_703(3790, -1, -1);
					break;
				
				case -457639374:
				case -1553041502:
					return !func_703(3791, -1, -1);
					break;
				
				case 64160805:
				case -1080591445:
					return !func_703(3792, -1, -1);
					break;
				
				case 776078819:
				case -1303573005:
					if (iParam1 == 776078819)
					{
						iVar0 = func_430(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == -1303573005)
					{
						iVar1 = func_430(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar1, 18))
						{
							return 0;
						}
					}
					return !func_703(3793, -1, -1);
					break;
				
				case -1069464482:
				case 2085207152:
					if (iParam1 == -1069464482)
					{
						iVar2 = func_430(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2085207152)
					{
						iVar3 = func_430(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar3, 19))
						{
							return 0;
						}
					}
					return !func_703(3794, -1, -1);
					break;
				
				case -1342875239:
				case 857137150:
					if (iParam1 == -1342875239)
					{
						iVar4 = func_430(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == 857137150)
					{
						iVar5 = func_430(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar5, 20))
						{
							return 0;
						}
					}
					return !func_703(3795, -1, -1);
					break;
				
				case 1967892405:
				case 535952639:
					if (iParam1 == 1967892405)
					{
						iVar6 = func_430(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == 535952639)
					{
						iVar7 = func_430(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar7, 21))
						{
							return 0;
						}
					}
					return !func_703(3796, -1, -1);
					break;
				
				case 642864781:
				case -1974657401:
					if (iParam1 == 642864781)
					{
						iVar8 = func_430(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == -1974657401)
					{
						iVar9 = func_430(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar9, 22))
						{
							return 0;
						}
					}
					return !func_703(3797, -1, -1);
					break;
				
				case 1270860039:
				case 129909013:
					if (iParam1 == 1270860039)
					{
						iVar10 = func_430(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == 129909013)
					{
						iVar11 = func_430(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar11, 23))
						{
							return 0;
						}
					}
					return !func_703(3798, -1, -1);
					break;
				
				case -1290780406:
				case -1499060170:
					if (iParam1 == -1290780406)
					{
						iVar12 = func_430(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == -1499060170)
					{
						iVar13 = func_430(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar13, 24))
						{
							return 0;
						}
					}
					return !func_703(3799, -1, -1);
					break;
				
				case 1127641545:
				case 412032123:
					if (iParam1 == 1127641545)
					{
						iVar14 = func_430(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == 412032123)
					{
						iVar15 = func_430(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar15, 25))
						{
							return 0;
						}
					}
					return !func_703(3800, -1, -1);
					break;
				
				case -1221948530:
				case 915049044:
					if (iParam1 == -1221948530)
					{
						iVar16 = func_430(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == 915049044)
					{
						iVar17 = func_430(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar17, 26))
						{
							return 0;
						}
					}
					return !func_703(3801, -1, -1);
					break;
				
				case 1954153055:
				case 456478679:
					if (iParam1 == 1954153055)
					{
						iVar18 = func_430(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == 456478679)
					{
						iVar19 = func_430(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar19, 27))
						{
							return 0;
						}
					}
					return !func_703(3802, -1, -1);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam1)
			{
				case -588549683:
				case 464027076:
					return 1;
					break;
				
				case -965491494:
				case 939374190:
					return 1;
					break;
			}
			break;
		
		case 598190139:
			switch (iParam1)
			{
				case -1458541976:
				case -606014753:
				case -613376371:
				case -446291501:
				case -1034642040:
				case 1022637316:
				case -1677156418:
				case -1130213300:
					return !func_683();
					break;
			}
			break;
	}
	return 0;
}

int func_683()
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
					iVar0 = GAMEPLAY::GET_PROFILE_SETTING(866);
					GAMEPLAY::SET_BIT(&iVar0, 0);
					STATS::_0xDAC073C7901F9E15(iVar0);
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

bool func_684()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

bool func_685(int iParam0, int iParam1)
{
	if (func_688(iParam0) == 11511)
	{
		return 0;
	}
	iVar0 = func_687(iParam0, iParam1);
	iVar1 = iParam0;
	return GAMEPLAY::IS_BIT_SET(iVar0, func_686(iVar1));
}

int func_686(int iParam0)
{
	return (iParam0 % 32);
}

int func_687(var uParam0, int iParam1)
{
	iVar0 = func_430(func_688(uParam0), iParam1, 0);
	return iVar0;
}

int func_688(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_690(iVar0);
	if ((func_217() == 0 || func_689() == 0) || (func_217() == 999 && func_689() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1038;
				break;
			
			case 1:
				return 1039;
				break;
			
			case 2:
				return 1040;
				break;
			
			case 3:
				return 1041;
				break;
			
			case 4:
				return 1042;
				break;
			
			case 5:
				return 1502;
				break;
			
			case 6:
				return 1756;
				break;
			
			case 7:
				return 1950;
				break;
			
			case 8:
				return 1951;
				break;
			
			case 9:
				return 1952;
				break;
			
			case 10:
				return 1953;
				break;
			
			case 11:
				return 1954;
				break;
			
			case 12:
				return 1955;
				break;
			
			case 13:
				return 2422;
				break;
			
			case 14:
				return 2442;
				break;
			
			case 15:
				return 2445;
				break;
			
			case 16:
				return 2448;
				break;
			
			case 17:
				return 2611;
				break;
			
			case 18:
				return 2614;
				break;
			
			case 19:
				return 2617;
				break;
			
			case 20:
				return 3783;
				break;
			
			case 21:
				return 3786;
				break;
			
			case 22:
				return 3861;
				break;
			
			case 23:
				return 3864;
				break;
			
			case 24:
				return 3867;
				break;
			
			case 25:
				return 3870;
				break;
			
			case 26:
				return 5361;
				break;
			
			case 27:
				return 5364;
				break;
			
			case 28:
				return 5466;
				break;
			
			case 29:
				return 5469;
				break;
			
			case 30:
				return 6428;
				break;
			
			case 31:
				return 6431;
				break;
			
			case 32:
				return 7252;
				break;
			
			case 33:
				return 7255;
				break;
			
			case 34:
				return 7258;
				break;
			
			case 35:
				return 7967;
				break;
			
			case 36:
				return 7970;
				break;
			
			case 37:
				return 7973;
				break;
			
			case 38:
				return 7976;
				break;
			
			case 39:
				return 8498;
				break;
			
			case 40:
				return 8501;
				break;
			
			case 41:
				return 8504;
				break;
			
			case 42:
				return 8507;
				break;
			
			case 43:
				return 8901;
				break;
			
			case 44:
				return 8904;
				break;
			
			case 45:
				return 8907;
				break;
		}
	}
	return 11511;
}

int func_689()
{
	return Global_30769;
}

int func_690(int iParam0)
{
	return (iParam0 / 32);
}

int func_691(int iParam0, int iParam1)
{
	if (iParam1 == 3)
	{
		if (func_693(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	else if (iParam1 == 4)
	{
		if (func_692(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	iVar2 = DLC1::_GET_NUM_DECORATIONS(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if (DLC1::_0xFF56381874F82086(iParam1, iVar1, &Var3))
		{
			if (iParam0 == Var3.f_3)
			{
				return (129 + iVar1);
			}
		}
		iVar1++;
	}
	return -1;
}

int func_692(int iParam0, var uParam1)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 497719213:
			iVar0 = 0;
			break;
		
		case -1575660783:
			iVar0 = 1;
			break;
		
		case -720631087:
			iVar0 = 2;
			break;
		
		case 2143620721:
			iVar0 = 3;
			break;
		
		case 2049754822:
			iVar0 = 4;
			break;
		
		case -1293749076:
			iVar0 = 5;
			break;
		
		case -1571403599:
			iVar0 = 6;
			break;
		
		case -711123906:
			iVar0 = 7;
			break;
		
		case 152801037:
			iVar0 = 8;
			break;
		
		case -1324018585:
			iVar0 = 9;
			break;
		
		case -481068829:
			iVar0 = 10;
			break;
		
		case -1486741196:
			iVar0 = 11;
			break;
		
		case 939412564:
			iVar0 = 12;
			break;
		
		case 1187637739:
			iVar0 = 13;
			break;
		
		case -1092669445:
			iVar0 = 14;
			break;
		
		case 1659530389:
			iVar0 = 15;
			break;
		
		case 996857777:
			iVar0 = 16;
			break;
		
		case 817476859:
			iVar0 = 17;
			break;
		
		case -17051268:
			iVar0 = 18;
			break;
		
		case 1293774274:
			iVar0 = 19;
			break;
		
		case 567121699:
			iVar0 = 20;
			break;
		
		case -1179302160:
			iVar0 = 21;
			break;
		
		case -949165473:
			iVar0 = 22;
			break;
		
		case 354975189:
			iVar0 = 23;
			break;
		
		case -489121482:
			iVar0 = 24;
			break;
		
		case -1636954018:
			iVar0 = 25;
			break;
		
		case -1277740240:
			iVar0 = 26;
			break;
		
		case -1047439708:
			iVar0 = 27;
			break;
		
		case -814026121:
			iVar0 = 28;
			break;
		
		case 1732157956:
			iVar0 = 29;
			break;
		
		case 1024282018:
			iVar0 = 30;
			break;
		
		case -2099685063:
			iVar0 = 31;
			break;
		
		case 1483932781:
			iVar0 = 32;
			break;
		
		case 1406925627:
			iVar0 = 33;
			break;
		
		case 698590923:
			iVar0 = 34;
			break;
		
		case 1869001296:
			iVar0 = 35;
			break;
		
		case 1169907450:
			iVar0 = 36;
			break;
		
		case 717727185:
			iVar0 = 37;
			break;
		
		case 1058197095:
			iVar0 = 38;
			break;
		
		case 434115743:
			iVar0 = 39;
			break;
		
		case 665432114:
			iVar0 = 40;
			break;
		
		case 1198780358:
			iVar0 = 41;
			break;
		
		case -2128873857:
			iVar0 = 42;
			break;
		
		case -148547780:
			iVar0 = 43;
			break;
		
		case 1819096318:
			iVar0 = 44;
			break;
		
		case 1051122042:
			iVar0 = 45;
			break;
		
		case -1350495965:
			iVar0 = 46;
			break;
		
		case -150859291:
			iVar0 = 47;
			break;
		
		case -1186193045:
			iVar0 = 48;
			break;
		
		case -1206837515:
			iVar0 = 49;
			break;
		
		case -1513653662:
			iVar0 = 50;
			break;
		
		case -543948331:
			iVar0 = 51;
			break;
		
		case -175559233:
			iVar0 = 52;
			break;
		
		case -131530830:
			iVar0 = 53;
			break;
		
		case -1816086813:
			iVar0 = 54;
			break;
		
		case -2113006722:
			iVar0 = 55;
			break;
		
		case -1101886458:
			iVar0 = 56;
			break;
		
		case -1398740829:
			iVar0 = 57;
			break;
		
		case 1939258347:
			iVar0 = 58;
			break;
		
		case -1004151544:
			iVar0 = 59;
			break;
		
		case -822873436:
			iVar0 = 60;
			break;
		
		case -1445222284:
			iVar0 = 61;
			break;
		
		case -63910623:
			iVar0 = 62;
			break;
		
		case 101834979:
			iVar0 = 63;
			break;
		
		case -673512330:
			iVar0 = 64;
			break;
		
		case -423845319:
			iVar0 = 65;
			break;
		
		case 963561372:
			iVar0 = 66;
			break;
		
		case 1384839636:
			iVar0 = 67;
			break;
		
		case -1712879828:
			iVar0 = 68;
			break;
		
		case -951688727:
			iVar0 = 69;
			break;
		
		case -1132639145:
			iVar0 = 70;
			break;
		
		case -513632731:
			iVar0 = 71;
			break;
		
		case 263680718:
			iVar0 = 72;
			break;
		
		case 36296627:
			iVar0 = 73;
			break;
		
		case 800240324:
			iVar0 = 74;
			break;
		
		case 614243480:
			iVar0 = 75;
			break;
		
		case 1408138043:
			iVar0 = 76;
			break;
		
		case 957564293:
			iVar0 = 77;
			break;
		
		case -1614279399:
			iVar0 = 78;
			break;
		
		case -1451286393:
			iVar0 = 79;
			break;
		
		case -1758069771:
			iVar0 = 80;
			break;
		
		case -1225475222:
			iVar0 = 81;
			break;
		
		case -1992892433:
			iVar0 = 82;
			break;
		
		case -1838157215:
			iVar0 = 83;
			break;
		
		case 1688803028:
			iVar0 = 84;
			break;
		
		case 1844259164:
			iVar0 = 85;
			break;
		
		case 1070943545:
			iVar0 = 86;
			break;
		
		case 1234460855:
			iVar0 = 87;
			break;
		
		case -753798460:
			iVar0 = 88;
			break;
		
		case -1453351072:
			iVar0 = 89;
			break;
		
		case -1308053326:
			iVar0 = 90;
			break;
		
		case -2083859401:
			iVar0 = 91;
			break;
		
		case 1586137527:
			iVar0 = 92;
			break;
		
		case 1884564810:
			iVar0 = 93;
			break;
		
		case 1092964089:
			iVar0 = 94;
			break;
		
		case 1264280421:
			iVar0 = 95;
			break;
		
		case 496601058:
			iVar0 = 96;
			break;
		
		case 861352797:
			iVar0 = 97;
			break;
		
		case 1418328330:
			iVar0 = 98;
			break;
		
		case 1784554566:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 2081736627:
			iVar0 = 100;
			break;
		
		case -1897271971:
			iVar0 = 101;
			break;
		
		case -1666742056:
			iVar0 = 102;
			break;
		
		case -1282165072:
			iVar0 = 103;
			break;
		
		case -1052880379:
			iVar0 = 104;
			break;
		
		case -745474390:
			iVar0 = 105;
			break;
		
		case -515796465:
			iVar0 = 106;
			break;
		
		case -811206225:
			iVar0 = 107;
			break;
		
		case -1586815686:
			iVar0 = 108;
			break;
		
		case -1423429452:
			iVar0 = 109;
			break;
		
		case -1697869815:
			iVar0 = 110;
			break;
		
		case -1470846183:
			iVar0 = 111;
			break;
		
		case 1093884035:
			iVar0 = 112;
			break;
		
		case 861256904:
			iVar0 = 113;
			break;
		
		case 603201029:
			iVar0 = 114;
			break;
		
		case 1991426949:
			iVar0 = 115;
			break;
		
		case -135838228:
			iVar0 = 116;
			break;
		
		case 121616864:
			iVar0 = 117;
			break;
		
		case -834517002:
			iVar0 = 118;
			break;
		
		case -403932342:
			iVar0 = 119;
			break;
		
		case -1179738417:
			iVar0 = 120;
			break;
		
		case -1022250603:
			iVar0 = 121;
			break;
		
		case 558694786:
			iVar0 = 122;
			break;
		
		case 569279177:
			iVar0 = 123;
			break;
		
		case 544309199:
			iVar0 = 124;
			break;
		
		case 1190448341:
			iVar0 = 125;
			break;
		
		case 885139568:
			iVar0 = 126;
			break;
		
		case -1845683606:
			iVar0 = 127;
			break;
		
		case -1555317497:
			iVar0 = 128;
			break;
		
		case 1704673699:
			iVar0 = 129;
			break;
		
		case 1993401358:
			iVar0 = 130;
			break;
		
		case 1227065524:
			iVar0 = 131;
			break;
		
		case -533227790:
			iVar0 = 132;
			break;
		
		case 309459814:
			iVar0 = 133;
			break;
		
		case 77815753:
			iVar0 = 134;
			break;
		
		case -280939203:
			iVar0 = 135;
			break;
		
		case 1246882601:
			iVar0 = 136;
			break;
		
		case 314833986:
			iVar0 = 137;
			break;
		
		case -25635924:
			iVar0 = 138;
			break;
		
		case 351567983:
			iVar0 = 139;
			break;
		
		case -2027428652:
			iVar0 = 140;
			break;
		
		case 962677064:
			iVar0 = 141;
			break;
		
		case -105475497:
			iVar0 = 142;
			break;
		
		case 766835283:
			iVar0 = 143;
			break;
		
		case 471979821:
			iVar0 = 144;
			break;
		
		case 1122542778:
			iVar0 = 145;
			break;
		
		case 815530017:
			iVar0 = 146;
			break;
		
		case 1157900525:
			iVar0 = 147;
			break;
		
		case 859243859:
			iVar0 = 148;
			break;
		
		case 2032013608:
			iVar0 = 149;
			break;
		
		case 1471663700:
			iVar0 = 150;
			break;
		
		case -1679206722:
			iVar0 = 151;
			break;
		
		case -309397848:
			iVar0 = 152;
			break;
		
		case 534666054:
			iVar0 = 153;
			break;
		
		case -769376301:
			iVar0 = 154;
			break;
		
		case 1531057961:
			iVar0 = 155;
			break;
		
		case 1986678137:
			iVar0 = 156;
			break;
		
		case 2142789653:
			iVar0 = 157;
			break;
		
		case 7463306:
			iVar0 = 158;
			break;
		
		case 308053343:
			iVar0 = 159;
			break;
		
		case 753842819:
			iVar0 = 160;
			break;
		
		case 1052794406:
			iVar0 = 161;
			break;
		
		case -695726661:
			iVar0 = 162;
			break;
		
		case -1001821890:
			iVar0 = 163;
			break;
		
		case -1425459522:
			iVar0 = 164;
			break;
		
		case 1412653072:
			iVar0 = 165;
			break;
		
		case 1163510365:
			iVar0 = 166;
			break;
		
		case 933242602:
			iVar0 = 167;
			break;
		
		case -1347021116:
			iVar0 = 168;
			break;
		
		case 1297354841:
			iVar0 = 169;
			break;
		
		case -839806574:
			iVar0 = 170;
			break;
		
		case -542100209:
			iVar0 = 171;
			break;
		
		case 1472218269:
			iVar0 = 172;
			break;
		
		case 1783196079:
			iVar0 = 173;
			break;
		
		case 1007062314:
			iVar0 = 174;
			break;
		
		case -870732522:
			iVar0 = 175;
			break;
		
		case 547542627:
			iVar0 = 176;
			break;
		
		case 863894553:
			iVar0 = 177;
			break;
		
		case -2099242332:
			iVar0 = 178;
			break;
		
		case -1860028632:
			iVar0 = 179;
			break;
		
		case -560967165:
			iVar0 = 180;
			break;
		
		case -59437904:
			iVar0 = 181;
			break;
		
		case 757067269:
			iVar0 = 182;
			break;
		
		case 455625238:
			iVar0 = 183;
			break;
		
		case -1750514914:
			iVar0 = 184;
			break;
		
		case -983982466:
			iVar0 = 185;
			break;
		
		case -232228837:
			iVar0 = 186;
			break;
		
		case 1558269323:
			iVar0 = 187;
			break;
		
		case 2070579873:
			iVar0 = 188;
			break;
		
		case -1203181916:
			iVar0 = 189;
			break;
		
		case -2112587204:
			iVar0 = 190;
			break;
		
		case 1942412705:
			iVar0 = 191;
			break;
		
		case -1846437386:
			iVar0 = 192;
			break;
		
		case 61799795:
			iVar0 = 193;
			break;
		
		case -1388490611:
			iVar0 = 194;
			break;
		
		case -1627212776:
			iVar0 = 195;
			break;
		
		case 1525246127:
			iVar0 = 196;
			break;
		
		case -11341151:
			iVar0 = 197;
			break;
		
		case 516055815:
			iVar0 = 198;
			break;
		
		case -1034642040:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1022637316:
			iVar0 = 200;
			break;
		
		case -1677156418:
			iVar0 = 201;
			break;
		
		case -1130213300:
			iVar0 = 202;
			break;
		
		case 104062694:
			iVar0 = 203;
			break;
		
		case 869579299:
			iVar0 = 204;
			break;
		
		case 1201332655:
			iVar0 = 205;
			break;
		
		case 1028967715:
			iVar0 = 206;
			break;
		
		case -1651634800:
			iVar0 = 207;
			break;
		
		case -892278763:
			iVar0 = 208;
			break;
		
		case -1032005779:
			iVar0 = 209;
			break;
		
		case -255675400:
			iVar0 = 210;
			break;
		
		case 1890137027:
			iVar0 = 211;
			break;
		
		case -406805808:
			iVar0 = 212;
			break;
		
		case -592540500:
			iVar0 = 213;
			break;
		
		case 205417419:
			iVar0 = 214;
			break;
		
		case -2127276619:
			iVar0 = 215;
			break;
		
		case -1362677538:
			iVar0 = 216;
			break;
		
		case -1549722990:
			iVar0 = 217;
			break;
		
		case 3495990:
			iVar0 = 218;
			break;
		
		case -285526590:
			iVar0 = 219;
			break;
		
		case 1907377338:
			iVar0 = 220;
			break;
		
		case 2136399879:
			iVar0 = 221;
			break;
		
		case 1568410532:
			iVar0 = 222;
			break;
		
		case 1068879892:
			iVar0 = 223;
			break;
		
		case -1592750929:
			iVar0 = 224;
			break;
		
		case 772896404:
			iVar0 = 225;
			break;
		
		case -1999229916:
			iVar0 = 226;
			break;
		
		case -744701520:
			iVar0 = 227;
			break;
		
		case -425039925:
			iVar0 = 228;
			break;
		
		case -798409911:
			iVar0 = 229;
			break;
		
		case 1379974898:
			iVar0 = 230;
			break;
		
		case -1681436154:
			iVar0 = 231;
			break;
		
		case -1486919370:
			iVar0 = 232;
			break;
		
		case 2014677667:
			iVar0 = 233;
			break;
		
		case 325697857:
			iVar0 = 234;
			break;
		
		case -1188819501:
			iVar0 = 235;
			break;
		
		case -1765193438:
			iVar0 = 236;
			break;
		
		case -1416269126:
			iVar0 = 237;
			break;
		
		case -2111365154:
			iVar0 = 238;
			break;
		
		case -1880573087:
			iVar0 = 239;
			break;
		
		case 1421296887:
			iVar0 = 240;
			break;
		
		case 1655562468:
			iVar0 = 241;
			break;
		
		case 946048080:
			iVar0 = 242;
			break;
		
		case 1188768063:
			iVar0 = 243;
			break;
		
		case 498456313:
			iVar0 = 244;
			break;
		
		case 323007907:
			iVar0 = 245;
			break;
		
		case -1325371100:
			iVar0 = 246;
			break;
		
		case -829313978:
			iVar0 = 247;
			break;
		
		case -530624543:
			iVar0 = 248;
			break;
		
		case -299046020:
			iVar0 = 249;
			break;
		
		case 1812260650:
			iVar0 = 250;
			break;
		
		case 2043511487:
			iVar0 = 251;
			break;
		
		case -1753235933:
			iVar0 = 252;
			break;
		
		case -1525589690:
			iVar0 = 253;
			break;
		
		case 31003408:
			iVar0 = 254;
			break;
		
		case -1864998224:
			iVar0 = 255;
			break;
		
		case -2140814897:
			iVar0 = 256;
			break;
		
		case 223468453:
			iVar0 = 257;
			break;
		
		case -83970305:
			iVar0 = 258;
			break;
		
		case -406843262:
			iVar0 = 259;
			break;
		
		case -954740942:
			iVar0 = 260;
			break;
		
		case -1675526854:
			iVar0 = 261;
			break;
		
		case 2111717556:
			iVar0 = 262;
			break;
		
		case -415395003:
			iVar0 = 263;
			break;
		
		case 427521984:
			iVar0 = 264;
			break;
		
		case 1570178485:
			iVar0 = 265;
			break;
		
		case -1619850916:
			iVar0 = 266;
			break;
		
		case -713067148:
			iVar0 = 267;
			break;
		
		case 946477614:
			iVar0 = 268;
			break;
		
		case -1423343701:
			iVar0 = 269;
			break;
		
		case 445931457:
			iVar0 = 270;
			break;
		
		case 678558588:
			iVar0 = 271;
			break;
		
		case -854631987:
			iVar0 = 272;
			break;
		
		case -1707871209:
			iVar0 = 273;
			break;
		
		case 1675446188:
			iVar0 = 274;
			break;
		
		case 1911627074:
			iVar0 = 275;
			break;
		
		case -607391498:
			iVar0 = 276;
			break;
		
		case -1544625218:
			iVar0 = 277;
			break;
		
		case 1185175875:
			iVar0 = 278;
			break;
		
		case 155591269:
			iVar0 = 279;
			break;
		
		case -1057958846:
			iVar0 = 280;
			break;
		
		case -1853795495:
			iVar0 = 281;
			break;
		
		case -1860485560:
			iVar0 = 282;
			break;
		
		case 499288642:
			iVar0 = 283;
			break;
		
		case -7887054:
			iVar0 = 284;
			break;
		
		case -1553041502:
			iVar0 = 285;
			break;
		
		case -1080591445:
			iVar0 = 286;
			break;
		
		case -741060436:
			iVar0 = 287;
			break;
		
		case 645634644:
			iVar0 = 288;
			break;
		
		case -1096728771:
			iVar0 = 289;
			break;
		
		case 503268386:
			iVar0 = 290;
			break;
		
		case 109804153:
			iVar0 = 291;
			break;
		
		case 1410910279:
			iVar0 = 292;
			break;
		
		case 1501700194:
			iVar0 = 293;
			break;
		
		case -1793199216:
			iVar0 = 294;
			break;
		
		case 1405944575:
			iVar0 = 295;
			break;
		
		case 1731382556:
			iVar0 = 296;
			break;
		
		case 1743809026:
			iVar0 = 297;
			break;
		
		case 1589237530:
			iVar0 = 298;
			break;
		
		case -1558441108:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case 793815980:
			iVar0 = 303;
			break;
		
		case 87277824:
			iVar0 = 304;
			break;
		
		case 1305470790:
			iVar0 = 305;
			break;
		
		case 252924758:
			iVar0 = 306;
			break;
		
		case 1043745875:
			iVar0 = 307;
			break;
		
		case 24304530:
			iVar0 = 308;
			break;
		
		case 582246031:
			iVar0 = 309;
			break;
		
		case 1840225396:
			iVar0 = 310;
			break;
		
		case -47863515:
			iVar0 = 311;
			break;
		
		case 26968202:
			iVar0 = 312;
			break;
		
		case 1720638120:
			iVar0 = 313;
			break;
		
		case 1372737856:
			iVar0 = 314;
			break;
		
		case -675719916:
			iVar0 = 315;
			break;
		
		case -610888268:
			iVar0 = 316;
			break;
		
		case -129698248:
			iVar0 = 317;
			break;
		
		case 1060644905:
			iVar0 = 318;
			break;
		
		case 776078819:
			iVar0 = 319;
			break;
		
		case -1069464482:
			iVar0 = 320;
			break;
		
		case -1342875239:
			iVar0 = 321;
			break;
		
		case 1967892405:
			iVar0 = 322;
			break;
		
		case 642864781:
			iVar0 = 323;
			break;
		
		case 1270860039:
			iVar0 = 324;
			break;
		
		case -1290780406:
			iVar0 = 325;
			break;
		
		case 1127641545:
			iVar0 = 326;
			break;
		
		case -1221948530:
			iVar0 = 327;
			break;
		
		case 1954153055:
			iVar0 = 328;
			break;
		
		case 543727307:
			iVar0 = 329;
			break;
		
		case -1806626643:
			iVar0 = 330;
			break;
		
		case 1146362323:
			iVar0 = 331;
			break;
		
		case -1918158051:
			iVar0 = 332;
			break;
		
		case -1835082731:
			iVar0 = 333;
			break;
		
		case 1935907419:
			iVar0 = 334;
			break;
		
		case 961997868:
			iVar0 = 335;
			break;
		
		case -415246024:
			iVar0 = 336;
			break;
		
		case -2003529037:
			iVar0 = 337;
			break;
		
		case -1272951326:
			iVar0 = 338;
			break;
		
		case 837851491:
			iVar0 = 339;
			break;
		
		case -64649653:
			iVar0 = 340;
			break;
		
		case 1997623301:
			iVar0 = 341;
			break;
		
		case 1177835340:
			iVar0 = 342;
			break;
		
		case -1261787835:
			iVar0 = 343;
			break;
		
		case -965491494:
			iVar0 = 344;
			break;
		
		case 939374190:
			iVar0 = 345;
			break;
		
		case 149461503:
			iVar0 = 346;
			break;
		
		case -1117498985:
			iVar0 = 347;
			break;
		
		case 1184468662:
			iVar0 = 348;
			break;
		
		case -772488648:
			iVar0 = 349;
			break;
		
		case -1399171334:
			iVar0 = 350;
			break;
		
		case -963164512:
			iVar0 = 351;
			break;
		
		case -1284517669:
			iVar0 = 352;
			break;
		
		case 1613773443:
			iVar0 = 353;
			break;
		
		case 1963092516:
			iVar0 = 354;
			break;
		
		case -878642668:
			iVar0 = 355;
			break;
		
		case -1618544925:
			iVar0 = 356;
			break;
		
		case 1185417232:
			iVar0 = 357;
			break;
		
		case -1649044153:
			iVar0 = 358;
			break;
		
		case -1293956525:
			iVar0 = 359;
			break;
		
		case -84085370:
			iVar0 = 360;
			break;
		
		case -943861479:
			iVar0 = 361;
			break;
		
		case -1355455834:
			iVar0 = 362;
			break;
		
		case 711764191:
			iVar0 = 363;
			break;
		
		case 41616632:
			iVar0 = 364;
			break;
		
		case -2053984264:
			iVar0 = 365;
			break;
		
		case -522832741:
			iVar0 = 366;
			break;
		
		case 711940316:
			iVar0 = 367;
			break;
		
		case -1512107004:
			iVar0 = 368;
			break;
		
		case -273305505:
			iVar0 = 369;
			break;
		
		case -779122930:
			iVar0 = 370;
			break;
		
		case 565678099:
			iVar0 = 371;
			break;
		
		case 2130135469:
			iVar0 = 372;
			break;
		
		case 2142072717:
			iVar0 = 373;
			break;
		
		case -636638153:
			iVar0 = 374;
			break;
		
		case 289539239:
			iVar0 = 375;
			break;
		
		case -1040822561:
			iVar0 = 376;
			break;
		
		case 217486581:
			iVar0 = 377;
			break;
		
		case -2147244302:
			iVar0 = 378;
			break;
		
		case 830186237:
			iVar0 = 379;
			break;
		
		case -1902384566:
			iVar0 = 380;
			break;
		
		case 1471583453:
			iVar0 = 381;
			break;
		
		case 2007332931:
			iVar0 = 382;
			break;
		
		case 1104156493:
			iVar0 = 383;
			break;
		
		case 616400258:
			iVar0 = 384;
			break;
		
		case 511243162:
			iVar0 = 385;
			break;
		
		case -477451680:
			iVar0 = 386;
			break;
		
		case 743616295:
			iVar0 = 387;
			break;
		
		case 712215816:
			iVar0 = 388;
			break;
		
		case 1475570942:
			iVar0 = 389;
			break;
		
		case -1768978416:
			iVar0 = 390;
			break;
		
		case -2139711822:
			iVar0 = 391;
			break;
		
		case -1509236263:
			iVar0 = 392;
			break;
		
		case -1143383459:
			iVar0 = 393;
			break;
		
		case -1690206781:
			iVar0 = 394;
			break;
		
		case 1947095236:
			iVar0 = 395;
			break;
		
		case 300333876:
			iVar0 = 396;
			break;
		
		case 37732721:
			iVar0 = 397;
			break;
		
		case 959183706:
			iVar0 = 398;
			break;
		
		case -1542393224:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 874488242:
			iVar0 = 400;
			break;
		
		case 1389335000:
			iVar0 = 401;
			break;
		
		case -366075547:
			iVar0 = 402;
			break;
		
		case -1125431584:
			iVar0 = 403;
			break;
		
		case -2000068963:
			iVar0 = 404;
			break;
		
		case 1497445248:
			iVar0 = 405;
			break;
		
		case 1989766704:
			iVar0 = 406;
			break;
		
		case -2086401979:
			iVar0 = 407;
			break;
		
		case -1846467361:
			iVar0 = 408;
			break;
		
		case -1325458477:
			iVar0 = 409;
			break;
		
		case -566725051:
			iVar0 = 410;
			break;
		
		case -787850263:
			iVar0 = 411;
			break;
		
		case -1885021085:
			iVar0 = 412;
			break;
		
		case 979307144:
			iVar0 = 413;
			break;
		
		case -473732439:
			iVar0 = 414;
			break;
		
		case 2062186390:
			iVar0 = 415;
			break;
		
		case -60867780:
			iVar0 = 416;
			break;
		
		case 926967912:
			iVar0 = 417;
			break;
		
		case -1886278590:
			iVar0 = 418;
			break;
		
		case -1314959708:
			iVar0 = 419;
			break;
		
		case -1696774529:
			iVar0 = 420;
			break;
		
		case -356446484:
			iVar0 = 421;
			break;
		
		case 857810380:
			iVar0 = 422;
			break;
		
		case -629676646:
			iVar0 = 423;
			break;
		
		case -1879530481:
			iVar0 = 424;
			break;
		
		case -1265847311:
			iVar0 = 425;
			break;
		
		case 32094424:
			iVar0 = 426;
			break;
		
		case 1969286744:
			iVar0 = 427;
			break;
		
		case 560620683:
			iVar0 = 428;
			break;
		
		case -148312642:
			iVar0 = 429;
			break;
		
		case -578277428:
			iVar0 = 430;
			break;
		
		case -718909970:
			iVar0 = 431;
			break;
		
		case -859026859:
			iVar0 = 432;
			break;
		
		case -839897805:
			iVar0 = 433;
			break;
		
		case 1676439910:
			iVar0 = 434;
			break;
		
		case -294157184:
			iVar0 = 435;
			break;
		
		case -1222200221:
			iVar0 = 436;
			break;
		
		case 874532672:
			iVar0 = 437;
			break;
		
		case -135929055:
			iVar0 = 438;
			break;
		
		case 1654917353:
			iVar0 = 439;
			break;
		
		case -13131391:
			iVar0 = 440;
			break;
		
		case 154845196:
			iVar0 = 441;
			break;
		
		case -1147884322:
			iVar0 = 442;
			break;
		
		case 291693311:
			iVar0 = 443;
			break;
		
		case -1401933531:
			iVar0 = 444;
			break;
		
		case 1820267020:
			iVar0 = 445;
			break;
		
		case 2134488961:
			iVar0 = 446;
			break;
		
		case -1861952745:
			iVar0 = 447;
			break;
		
		case 994458405:
			iVar0 = 448;
			break;
		
		case -1931715008:
			iVar0 = 449;
			break;
		
		case 1308745884:
			iVar0 = 450;
			break;
		
		case -1322955084:
			iVar0 = 451;
			break;
		
		case -816658183:
			iVar0 = 452;
			break;
		
		case -988307698:
			iVar0 = 453;
			break;
		
		case -1341411308:
			iVar0 = 454;
			break;
		
		case 1865570599:
			iVar0 = 455;
			break;
		
		case -549458010:
			iVar0 = 456;
			break;
		
		case -1328545177:
			iVar0 = 457;
			break;
		
		case -1361353619:
			iVar0 = 458;
			break;
		
		case 1103253806:
			iVar0 = 459;
			break;
		
		case -24183456:
			iVar0 = 460;
			break;
		
		case 436214104:
			iVar0 = 461;
			break;
		
		case 2072615278:
			iVar0 = 462;
			break;
		
		case -1131891426:
			iVar0 = 463;
			break;
		
		case 1392085456:
			iVar0 = 464;
			break;
		
		case 2035895234:
			iVar0 = 465;
			break;
		
		case 368784798:
			iVar0 = 466;
			break;
		
		case 1398938833:
			iVar0 = 467;
			break;
		
		case 1250040566:
			iVar0 = 468;
			break;
		
		case 2133228190:
			iVar0 = 469;
			break;
		
		case 675551540:
			iVar0 = 470;
			break;
		
		case -1826137848:
			iVar0 = 471;
			break;
		
		case -144105601:
			iVar0 = 472;
			break;
		
		case -748983650:
			iVar0 = 473;
			break;
		
		case 630291027:
			iVar0 = 474;
			break;
		
		case 293950434:
			iVar0 = 475;
			break;
		
		case 1857352111:
			iVar0 = 476;
			break;
		
		case -777671131:
			iVar0 = 477;
			break;
		
		case 221602924:
			iVar0 = 478;
			break;
		
		case 2039295216:
			iVar0 = 479;
			break;
		
		case 1800147054:
			iVar0 = 480;
			break;
		
		case -2019505897:
			iVar0 = 481;
			break;
		
		case 1647997020:
			iVar0 = 482;
			break;
		
		case -1405854945:
			iVar0 = 483;
			break;
		
		case -1171294997:
			iVar0 = 484;
			break;
		
		case -77076350:
			iVar0 = 485;
			break;
		
		case 775569873:
			iVar0 = 486;
			break;
		
		case 330569485:
			iVar0 = 487;
			break;
		
		case -1549217620:
			iVar0 = 488;
			break;
		
		case 1674429052:
			iVar0 = 489;
			break;
		
		case -254669596:
			iVar0 = 490;
			break;
		
		case 1802602254:
			iVar0 = 491;
			break;
		
		case -941072260:
			iVar0 = 492;
			break;
		
		case -1844749517:
			iVar0 = 493;
			break;
		
		case 82745424:
			iVar0 = 494;
			break;
		
		case -673460083:
			iVar0 = 495;
			break;
		
		case -99954496:
			iVar0 = 496;
			break;
		
		case 2078163456:
			iVar0 = 497;
			break;
		
		case 1362343227:
			iVar0 = 498;
			break;
		
		case 1176005743:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case -1504557219:
			iVar0 = 500;
			break;
		
		case 367912881:
			iVar0 = 501;
			break;
		
		case -836343280:
			iVar0 = 502;
			break;
		
		case -46521805:
			iVar0 = 503;
			break;
		
		case -743048780:
			iVar0 = 504;
			break;
		
		case 1294865118:
			iVar0 = 505;
			break;
		
		case -1479686374:
			iVar0 = 506;
			break;
		
		case 256017193:
			iVar0 = 507;
			break;
		
		case 1232443120:
			iVar0 = 508;
			break;
		
		case -803282271:
			iVar0 = 509;
			break;
		
		case 1788600442:
			iVar0 = 510;
			break;
		
		case 1439605343:
			iVar0 = 511;
			break;
		
		case -1094679264:
			iVar0 = 512;
			break;
		
		case 1230482241:
			iVar0 = 513;
			break;
		
		case 2054714291:
			iVar0 = 514;
			break;
		
		case 192117676:
			iVar0 = 515;
			break;
		
		case -2071204405:
			iVar0 = 516;
			break;
		
		case -1618181476:
			iVar0 = 517;
			break;
		
		case -1408253665:
			iVar0 = 518;
			break;
		
		case -134185391:
			iVar0 = 519;
			break;
		
		case -785783411:
			iVar0 = 520;
			break;
		
		case -633466710:
			iVar0 = 521;
			break;
		
		case -2072487372:
			iVar0 = 522;
			break;
		
		case 1211025296:
			iVar0 = 523;
			break;
		
		case 742659337:
			iVar0 = 524;
			break;
		
		case 1365533160:
			iVar0 = 525;
			break;
		
		case 1213205618:
			iVar0 = 526;
			break;
		
		case -164052103:
			iVar0 = 527;
			break;
		
		case -1306490297:
			iVar0 = 528;
			break;
		
		case -994802645:
			iVar0 = 529;
			break;
		
		case 637406209:
			iVar0 = 530;
			break;
		
		case -170855031:
			iVar0 = 531;
			break;
		
		case 1333098305:
			iVar0 = 532;
			break;
		
		case 119103934:
			iVar0 = 533;
			break;
		
		case -141369051:
			iVar0 = 534;
			break;
		
		case -593355218:
			iVar0 = 535;
			break;
		
		case 316832763:
			iVar0 = 536;
			break;
		
		case -393713544:
			iVar0 = 537;
			break;
		
		case -1876234625:
			iVar0 = 538;
			break;
		
		case -1453082334:
			iVar0 = 539;
			break;
		
		case -1397705983:
			iVar0 = 540;
			break;
		
		case -1278086171:
			iVar0 = 541;
			break;
		
		case -1510892268:
			iVar0 = 542;
			break;
		
		case 204876084:
			iVar0 = 543;
			break;
		
		case -988359492:
			iVar0 = 544;
			break;
		
		case 975745281:
			iVar0 = 545;
			break;
		
		case 591099372:
			iVar0 = 546;
			break;
		
		case -1014948306:
			iVar0 = 547;
			break;
		
		case -1866439788:
			iVar0 = 548;
			break;
		
		case -1265767186:
			iVar0 = 549;
			break;
		
		case 2070931859:
			iVar0 = 550;
			break;
		
		case 413611416:
			iVar0 = 551;
			break;
		
		case 765001063:
			iVar0 = 552;
			break;
		
		case -686624622:
			iVar0 = 553;
			break;
		
		case -937548349:
			iVar0 = 554;
			break;
		
		case 212584159:
			iVar0 = 555;
			break;
		
		case -328340062:
			iVar0 = 556;
			break;
		
		case 1657725123:
			iVar0 = 557;
			break;
		
		case -1517964336:
			iVar0 = 558;
			break;
		
		case -785490239:
			iVar0 = 559;
			break;
		
		case -11769229:
			iVar0 = 560;
			break;
		
		case 745912106:
			iVar0 = 561;
			break;
		
		case -2064265098:
			iVar0 = 562;
			break;
		
		case -1515892875:
			iVar0 = 563;
			break;
		
		case 1368234729:
			iVar0 = 564;
			break;
		
		case 1960230923:
			iVar0 = 565;
			break;
		
		case -860169810:
			iVar0 = 566;
			break;
		
		case -177882114:
			iVar0 = 567;
			break;
		
		case 661384509:
			iVar0 = 568;
			break;
		
		case 1221860095:
			iVar0 = 569;
			break;
		
		case 698192473:
			iVar0 = 570;
			break;
		
		case -817251083:
			iVar0 = 571;
			break;
		
		case -1108876323:
			iVar0 = 572;
			break;
		
		case 1274482696:
			iVar0 = 573;
			break;
		
		case 468009056:
			iVar0 = 574;
			break;
		
		case 2063732427:
			iVar0 = 575;
			break;
		
		case -764016411:
			iVar0 = 576;
			break;
		
		case -1530816149:
			iVar0 = 577;
			break;
		
		case 1189996018:
			iVar0 = 578;
			break;
		
		case -210110115:
			iVar0 = 579;
			break;
		
		case -207110256:
			iVar0 = 580;
			break;
		
		case 1801308144:
			iVar0 = 581;
			break;
		
		case 320631086:
			iVar0 = 582;
			break;
		
		case 1022560466:
			iVar0 = 583;
			break;
		
		case -952946041:
			iVar0 = 584;
			break;
		
		case 1321460664:
			iVar0 = 585;
			break;
		
		case -781625914:
			iVar0 = 586;
			break;
		
		case -1522247835:
			iVar0 = 587;
			break;
		
		case -1531245231:
			iVar0 = 588;
			break;
		
		case -1070472994:
			iVar0 = 589;
			break;
		
		case -2113341060:
			iVar0 = 590;
			break;
		
		case 965047293:
			iVar0 = 591;
			break;
		
		case 2114285045:
			iVar0 = 592;
			break;
		
		case -1635032213:
			iVar0 = 593;
			break;
		
		case 1310864345:
			iVar0 = 594;
			break;
		
		case -973977633:
			iVar0 = 595;
			break;
		
		case -1439643329:
			iVar0 = 596;
			break;
		
		case 434150104:
			iVar0 = 597;
			break;
		
		case 1243301688:
			iVar0 = 598;
			break;
		
		case -1233567982:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case 1262886680:
			iVar0 = 600;
			break;
		
		case 283135569:
			iVar0 = 601;
			break;
		
		case -548917969:
			iVar0 = 602;
			break;
		
		case 153465812:
			iVar0 = 603;
			break;
		
		case 1916093085:
			iVar0 = 604;
			break;
		
		case -701486200:
			iVar0 = 605;
			break;
		
		case 1951718630:
			iVar0 = 606;
			break;
		
		case -1981978861:
			iVar0 = 607;
			break;
		
		case -1998094267:
			iVar0 = 608;
			break;
		
		case -718445629:
			iVar0 = 609;
			break;
		
		case -35697399:
			iVar0 = 610;
			break;
		
		case -899081349:
			iVar0 = 611;
			break;
		
		case 1123547916:
			iVar0 = 612;
			break;
		
		case -1139893782:
			iVar0 = 613;
			break;
		
		case 1446511785:
			iVar0 = 614;
			break;
		
		case 1234256191:
			iVar0 = 615;
			break;
		
		case 413901048:
			iVar0 = 616;
			break;
		
		case 1527450164:
			iVar0 = 617;
			break;
		
		case -1786525476:
			iVar0 = 618;
			break;
		
		case 1439516635:
			iVar0 = 619;
			break;
		
		case 733800794:
			iVar0 = 620;
			break;
		
		case -399223540:
			iVar0 = 621;
			break;
		
		case -1894392230:
			iVar0 = 622;
			break;
		
		case 229993415:
			iVar0 = 623;
			break;
		
		case -620189683:
			iVar0 = 624;
			break;
		
		case 1846617794:
			iVar0 = 625;
			break;
		
		case -1142479347:
			iVar0 = 626;
			break;
		
		case -512960025:
			iVar0 = 627;
			break;
		
		case -759812557:
			iVar0 = 628;
			break;
		
		case 468661890:
			iVar0 = 629;
			break;
		
		case 1907925586:
			iVar0 = 630;
			break;
		
		case 646243571:
			iVar0 = 631;
			break;
		
		case 1953935161:
			iVar0 = 632;
			break;
		
		case 874867224:
			iVar0 = 633;
			break;
		
		case 1344008898:
			iVar0 = 634;
			break;
		
		case 1297781304:
			iVar0 = 635;
			break;
		
		case 1977233252:
			iVar0 = 636;
			break;
		
		case -194410344:
			iVar0 = 637;
			break;
		
		case 392012609:
			iVar0 = 638;
			break;
		
		case 705148450:
			iVar0 = 639;
			break;
		
		case 1677522529:
			iVar0 = 640;
			break;
		
		case -1362677538:
			iVar0 = 641;
			break;
		
		case 863458948:
			iVar0 = 642;
			break;
		
		case 9874621:
			iVar0 = 643;
			break;
		
		case 1809338990:
			iVar0 = 644;
			break;
		
		case -346939959:
			iVar0 = 645;
			break;
		
		case -934753544:
			iVar0 = 646;
			break;
		
		case 1604986209:
			iVar0 = 647;
			break;
		
		case -1514700421:
			iVar0 = 648;
			break;
		
		case 1177361060:
			iVar0 = 649;
			break;
		
		case -937529288:
			iVar0 = 650;
			break;
		
		case 547723644:
			iVar0 = 651;
			break;
		
		case 1750314531:
			iVar0 = 652;
			break;
		
		case -988332613:
			iVar0 = 653;
			break;
		
		case 80720443:
			iVar0 = 654;
			break;
		
		case -1220194634:
			iVar0 = 655;
			break;
		
		case -925735153:
			iVar0 = 656;
			break;
		
		case -1403745446:
			iVar0 = 657;
			break;
		
		case -1084626028:
			iVar0 = 658;
			break;
		
		case 2060572320:
			iVar0 = 659;
			break;
		
		case 1064377095:
			iVar0 = 660;
			break;
		
		case -1985597576:
			iVar0 = 661;
			break;
		
		case -2003189104:
			iVar0 = 662;
			break;
		
		case 1452329956:
			iVar0 = 663;
			break;
		
		case 1928573506:
			iVar0 = 664;
			break;
		
		case -185753722:
			iVar0 = 665;
			break;
		
		case -1580916109:
			iVar0 = 666;
			break;
		
		case -1077059973:
			iVar0 = 667;
			break;
		
		case 131755133:
			iVar0 = 668;
			break;
		
		case -253351038:
			iVar0 = 669;
			break;
		
		case 1332845224:
			iVar0 = 670;
			break;
		
		case -685051870:
			iVar0 = 671;
			break;
		
		case 2122847199:
			iVar0 = 672;
			break;
		
		case -149940744:
			iVar0 = 673;
			break;
		
		case -147741130:
			iVar0 = 674;
			break;
		
		case 302211868:
			iVar0 = 675;
			break;
		
		case -1361568592:
			iVar0 = 676;
			break;
		
		case -156600218:
			iVar0 = 677;
			break;
		
		case 1592739450:
			iVar0 = 678;
			break;
		
		case -633744004:
			iVar0 = 679;
			break;
		
		case -1467745952:
			iVar0 = 680;
			break;
		
		case 1129961041:
			iVar0 = 681;
			break;
		
		case -1221180772:
			iVar0 = 682;
			break;
		
		case 1957517559:
			iVar0 = 683;
			break;
		
		case -335233377:
			iVar0 = 684;
			break;
		
		case 2146762380:
			iVar0 = 685;
			break;
		
		case 427236107:
			iVar0 = 686;
			break;
		
		case -49636427:
			iVar0 = 687;
			break;
		
		case 1988133312:
			iVar0 = 688;
			break;
		
		case 40044091:
			iVar0 = 689;
			break;
		
		case -1189893809:
			iVar0 = 690;
			break;
		
		case 1182549017:
			iVar0 = 691;
			break;
		
		case 1403255481:
			iVar0 = 692;
			break;
		
		case 821579887:
			iVar0 = 693;
			break;
		
		case 1975948161:
			iVar0 = 694;
			break;
		
		case -953362234:
			iVar0 = 695;
			break;
		
		case 1521494915:
			iVar0 = 696;
			break;
		
		case 84635211:
			iVar0 = 697;
			break;
		
		case 2074655231:
			iVar0 = 698;
			break;
		
		case 1742494019:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case 1841934566:
			iVar0 = 700;
			break;
		
		case 1648222412:
			iVar0 = 701;
			break;
		
		case 1019312748:
			iVar0 = 702;
			break;
		
		case -1218730541:
			iVar0 = 703;
			break;
		
		case -88186884:
			iVar0 = 704;
			break;
		
		case 1428588096:
			iVar0 = 705;
			break;
		
		case -1788493673:
			iVar0 = 706;
			break;
		
		case -241894528:
			iVar0 = 707;
			break;
		
		case -1425414573:
			iVar0 = 708;
			break;
		
		case 1797163947:
			iVar0 = 709;
			break;
		
		case 823191231:
			iVar0 = 710;
			break;
		
		case 894133321:
			iVar0 = 711;
			break;
		
		case 1889485313:
			iVar0 = 712;
			break;
		
		case 687338866:
			iVar0 = 713;
			break;
		
		case 1827923343:
			iVar0 = 714;
			break;
		
		case -1893751733:
			iVar0 = 715;
			break;
		
		case 1739151647:
			iVar0 = 716;
			break;
		
		case 1361186211:
			iVar0 = 717;
			break;
		
		case -188624940:
			iVar0 = 718;
			break;
		
		case -1097074643:
			iVar0 = 719;
			break;
		
		case -609708185:
			iVar0 = 720;
			break;
		
		case 1295911115:
			iVar0 = 721;
			break;
		
		case -1694728829:
			iVar0 = 722;
			break;
		
		case -322091380:
			iVar0 = 723;
			break;
		
		case -1168575065:
			iVar0 = 724;
			break;
		
		case 756873456:
			iVar0 = 725;
			break;
		
		case -730037708:
			iVar0 = 726;
			break;
		
		case -970458486:
			iVar0 = 727;
			break;
		
		case 975601953:
			iVar0 = 728;
			break;
		
		case 1614208560:
			iVar0 = 729;
			break;
		
		case -726032561:
			iVar0 = 730;
			break;
		
		case -1824987162:
			iVar0 = 731;
			break;
		
		case 417579524:
			iVar0 = 732;
			break;
		
		case 734151492:
			iVar0 = 733;
			break;
		
		case -1766862320:
			iVar0 = 734;
			break;
		
		case 579562906:
			iVar0 = 735;
			break;
		
		case -619754931:
			iVar0 = 736;
			break;
		
		case 1424441799:
			iVar0 = 737;
			break;
		
		case -1405036369:
			iVar0 = 738;
			break;
		
		case 1929056908:
			iVar0 = 739;
			break;
		
		case -34538790:
			iVar0 = 740;
			break;
		
		case 1898518287:
			iVar0 = 741;
			break;
		
		case -893104650:
			iVar0 = 742;
			break;
		
		case -553814424:
			iVar0 = 743;
			break;
		
		case 201431212:
			iVar0 = 744;
			break;
		
		case 528695215:
			iVar0 = 745;
			break;
		
		case -1266435389:
			iVar0 = 746;
			break;
		
		case 980213248:
			iVar0 = 747;
			break;
		
		case 1019119277:
			iVar0 = 748;
			break;
		
		case 1187710323:
			iVar0 = 749;
			break;
		
		case 382848971:
			iVar0 = 750;
			break;
		
		case -1567832243:
			iVar0 = 751;
			break;
		
		case 2049506430:
			iVar0 = 752;
			break;
		
		case 92806870:
			iVar0 = 753;
			break;
		
		case -628203424:
			iVar0 = 754;
			break;
		
		case 2125178682:
			iVar0 = 755;
			break;
		
		case 399660858:
			iVar0 = 756;
			break;
		
		case -624842093:
			iVar0 = 757;
			break;
		
		case 282885412:
			iVar0 = 758;
			break;
		
		case 1599917585:
			iVar0 = 759;
			break;
		
		case -703540963:
			iVar0 = 760;
			break;
		
		case 904358018:
			iVar0 = 761;
			break;
		
		case 560877895:
			iVar0 = 762;
			break;
		
		case 2145953489:
			iVar0 = 763;
			break;
		
		case -87437351:
			iVar0 = 764;
			break;
		
		case -187239215:
			iVar0 = 765;
			break;
		
		case 1481255878:
			iVar0 = 766;
			break;
		
		case 1805700785:
			iVar0 = 767;
			break;
		
		case -368780168:
			iVar0 = 768;
			break;
		
		case 1457900554:
			iVar0 = 769;
			break;
		
		case -1066127505:
			iVar0 = 770;
			break;
		
		case -1366750043:
			iVar0 = 771;
			break;
		
		case 1944822196:
			iVar0 = 772;
			break;
		
		case -1639289459:
			iVar0 = 773;
			break;
		
		case 1282565442:
			iVar0 = 774;
			break;
		
		case -884280700:
			iVar0 = 775;
			break;
		
		case -1047313079:
			iVar0 = 776;
			break;
		
		case 1849315700:
			iVar0 = 777;
			break;
		
		case -2129853791:
			iVar0 = 778;
			break;
		
		case -643974508:
			iVar0 = 779;
			break;
		
		case 614424236:
			iVar0 = 780;
			break;
		
		case 2059836334:
			iVar0 = 781;
			break;
		
		case 221447729:
			iVar0 = 782;
			break;
		
		case 1965910391:
			iVar0 = 783;
			break;
		
		case 1822250244:
			iVar0 = 784;
			break;
		
		case 2144765713:
			iVar0 = 785;
			break;
		
		case 280971002:
			iVar0 = 786;
			break;
		
		case -1869294378:
			iVar0 = 787;
			break;
		
		case -869172334:
			iVar0 = 788;
			break;
		
		case -1028499109:
			iVar0 = 789;
			break;
		
		case 1076096084:
			iVar0 = 790;
			break;
		
		case -636780127:
			iVar0 = 791;
			break;
		
		case 603013184:
			iVar0 = 792;
			break;
		
		case 1351256035:
			iVar0 = 793;
			break;
		
		case 49108481:
			iVar0 = 794;
			break;
		
		case 354124980:
			iVar0 = 795;
			break;
		
		case -962894007:
			iVar0 = 796;
			break;
		
		case 1617075313:
			iVar0 = 797;
			break;
		
		case -635749278:
			iVar0 = 798;
			break;
		
		case -1208904204:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 414914435:
			iVar0 = 800;
			break;
		
		case -2100006249:
			iVar0 = 801;
			break;
		
		case 424018111:
			iVar0 = 802;
			break;
		
		case 849119336:
			iVar0 = 803;
			break;
		
		case 1807228945:
			iVar0 = 804;
			break;
		
		case -1119071247:
			iVar0 = 805;
			break;
		
		case -1146714704:
			iVar0 = 806;
			break;
		
		case -288852985:
			iVar0 = 807;
			break;
		
		case -562029507:
			iVar0 = 808;
			break;
		
		case -470534615:
			iVar0 = 809;
			break;
		
		case 371389080:
			iVar0 = 810;
			break;
		
		case -521204587:
			iVar0 = 811;
			break;
		
		case 1685732560:
			iVar0 = 812;
			break;
		
		case -1386443378:
			iVar0 = 813;
			break;
		
		case -1706648281:
			iVar0 = 814;
			break;
		
		case -519957866:
			iVar0 = 815;
			break;
		
		case 653935582:
			iVar0 = 816;
			break;
		
		case 2111779395:
			iVar0 = 817;
			break;
		
		case 428988289:
			iVar0 = 818;
			break;
		
		case -1903962822:
			iVar0 = 819;
			break;
		
		case 1365770911:
			iVar0 = 820;
			break;
		
		case 42029862:
			iVar0 = 821;
			break;
		
		case 438631811:
			iVar0 = 822;
			break;
		
		case -1478715891:
			iVar0 = 823;
			break;
		
		case -1395531229:
			iVar0 = 824;
			break;
		
		case 30333135:
			iVar0 = 825;
			break;
		
		case 1783341339:
			iVar0 = 826;
			break;
		
		case -16077126:
			iVar0 = 827;
			break;
		
		case -833643184:
			iVar0 = 828;
			break;
		
		case 163330499:
			iVar0 = 829;
			break;
		
		case 667415171:
			iVar0 = 830;
			break;
		
		case 242101919:
			iVar0 = 831;
			break;
		
		case 163238890:
			iVar0 = 832;
			break;
		
		case 1859431148:
			iVar0 = 833;
			break;
		
		case -1736964311:
			iVar0 = 834;
			break;
		
		case 843062770:
			iVar0 = 835;
			break;
		
		case -1233797068:
			iVar0 = 836;
			break;
		
		case 1480738976:
			iVar0 = 837;
			break;
		
		case -960020839:
			iVar0 = 838;
			break;
		
		case 444195464:
			iVar0 = 839;
			break;
		
		case 1370108117:
			iVar0 = 840;
			break;
		
		case -88227822:
			iVar0 = 841;
			break;
		
		case 239540513:
			iVar0 = 842;
			break;
		
		case 1420328020:
			iVar0 = 843;
			break;
		
		case 621404024:
			iVar0 = 844;
			break;
		
		case -1918622460:
			iVar0 = 845;
			break;
		
		case -947347525:
			iVar0 = 846;
			break;
		
		case 292920241:
			iVar0 = 847;
			break;
		
		case 720930282:
			iVar0 = 848;
			break;
		
		case 143213281:
			iVar0 = 849;
			break;
		
		case -164042492:
			iVar0 = 850;
			break;
		
		case -1370021995:
			iVar0 = 851;
			break;
		
		case 1397178481:
			iVar0 = 852;
			break;
		
		case -716829520:
			iVar0 = 853;
			break;
		
		case -478457952:
			iVar0 = 854;
			break;
		
		case 1825323565:
			iVar0 = 855;
			break;
		
		case -1122655717:
			iVar0 = 856;
			break;
		
		case -356634497:
			iVar0 = 857;
			break;
		
		case -1346341418:
			iVar0 = 858;
			break;
		
		case -1214222467:
			iVar0 = 859;
			break;
		
		case -1079776812:
			iVar0 = 860;
			break;
		
		case -948990166:
			iVar0 = 861;
			break;
		
		case 1382201813:
			iVar0 = 862;
			break;
		
		case 1576375706:
			iVar0 = 863;
			break;
		
		case -1356500517:
			iVar0 = 864;
			break;
		
		case 1838019927:
			iVar0 = 865;
			break;
		
		case 618955885:
			iVar0 = 866;
			break;
		
		case 909858453:
			iVar0 = 867;
			break;
		
		case 1809389163:
			iVar0 = 868;
			break;
		
		case -382370447:
			iVar0 = 869;
			break;
		
		case -290949038:
			iVar0 = 870;
			break;
		
		case 381474823:
			iVar0 = 871;
			break;
		
		case 570088958:
			iVar0 = 872;
			break;
		
		case 1093167087:
			iVar0 = 873;
			break;
		
		case -1327397746:
			iVar0 = 874;
			break;
		
		case 655777349:
			iVar0 = 875;
			break;
		
		case -1496905620:
			iVar0 = 876;
			break;
		
		case -1043010182:
			iVar0 = 877;
			break;
		
		case -1326077011:
			iVar0 = 878;
			break;
		
		case -1120323372:
			iVar0 = 879;
			break;
		
		case -1583620927:
			iVar0 = 880;
			break;
		
		case 1407674396:
			iVar0 = 881;
			break;
		
		case -244079832:
			iVar0 = 882;
			break;
		
		case 1055951410:
			iVar0 = 883;
			break;
		
		case 1092910333:
			iVar0 = 884;
			break;
		
		case -1874854660:
			iVar0 = 885;
			break;
		
		case -1379192256:
			iVar0 = 886;
			break;
		
		case 1435106801:
			iVar0 = 887;
			break;
		
		case -1252683947:
			iVar0 = 888;
			break;
		
		case -1380607703:
			iVar0 = 889;
			break;
		
		case 1010167914:
			iVar0 = 890;
			break;
		
		case 1059266367:
			iVar0 = 891;
			break;
		
		case 1869746711:
			iVar0 = 892;
			break;
		
		case 167494616:
			iVar0 = 893;
			break;
		
		case 231256171:
			iVar0 = 894;
			break;
		
		case -2041196288:
			iVar0 = 895;
			break;
		
		case -231795220:
			iVar0 = 896;
			break;
		
		case -1207463639:
			iVar0 = 897;
			break;
		
		case 2023442158:
			iVar0 = 898;
			break;
		
		case -1293194083:
			iVar0 = 899;
			break;
	}
	switch (iParam0)
	{
		case 767365246:
			iVar0 = 900;
			break;
		
		case -318042939:
			iVar0 = 901;
			break;
		
		case -740608006:
			iVar0 = 902;
			break;
		
		case 126660566:
			iVar0 = 903;
			break;
		
		case -252733393:
			iVar0 = 904;
			break;
		
		case -1044136613:
			iVar0 = 905;
			break;
		
		case -891762294:
			iVar0 = 906;
			break;
		
		case 1410738248:
			iVar0 = 907;
			break;
		
		case -1978727490:
			iVar0 = 908;
			break;
		
		case 1684642458:
			iVar0 = 909;
			break;
		
		case -147490340:
			iVar0 = 910;
			break;
		
		case -1422117996:
			iVar0 = 911;
			break;
		
		case -313931425:
			iVar0 = 912;
			break;
		
		case 211076563:
			iVar0 = 913;
			break;
		
		case 355035035:
			iVar0 = 914;
			break;
		
		case -1447308868:
			iVar0 = 915;
			break;
		
		case 1802655618:
			iVar0 = 916;
			break;
		
		case -1063742156:
			iVar0 = 917;
			break;
		
		case 1988028531:
			iVar0 = 918;
			break;
		
		case 73898487:
			iVar0 = 919;
			break;
		
		case -1041813118:
			iVar0 = 920;
			break;
		
		case -964420554:
			iVar0 = 921;
			break;
		
		case 1817749559:
			iVar0 = 922;
			break;
		
		case 1403640225:
			iVar0 = 923;
			break;
		
		case 1306937694:
			iVar0 = 924;
			break;
		
		case -95533995:
			iVar0 = 925;
			break;
		
		case -1871451886:
			iVar0 = 926;
			break;
		
		case -1120843246:
			iVar0 = 927;
			break;
		
		case 2081997561:
			iVar0 = 928;
			break;
		
		case -1339214923:
			iVar0 = 929;
			break;
		
		case 9807447:
			iVar0 = 930;
			break;
		
		case -236005319:
			iVar0 = 931;
			break;
		
		case -1470794594:
			iVar0 = 932;
			break;
		
		case -2100868384:
			iVar0 = 933;
			break;
		
		case 805626890:
			iVar0 = 934;
			break;
		
		case -438487729:
			iVar0 = 935;
			break;
		
		case 1258452311:
			iVar0 = 936;
			break;
		
		case -1387587887:
			iVar0 = 937;
			break;
		
		case 390131826:
			iVar0 = 938;
			break;
		
		case -933865090:
			iVar0 = 939;
			break;
		
		case 42888304:
			iVar0 = 940;
			break;
		
		case -1512618189:
			iVar0 = 941;
			break;
		
		case 1805955770:
			iVar0 = 942;
			break;
		
		case 2040741242:
			iVar0 = 943;
			break;
		
		case -1572115827:
			iVar0 = 944;
			break;
		
		case -2101278774:
			iVar0 = 945;
			break;
		
		case -2006216868:
			iVar0 = 946;
			break;
		
		case 1445470992:
			iVar0 = 947;
			break;
		
		case 31459402:
			iVar0 = 948;
			break;
		
		case 850282323:
			iVar0 = 949;
			break;
		
		case 1518409673:
			iVar0 = 950;
			break;
		
		case 576453072:
			iVar0 = 951;
			break;
		
		case 1343575520:
			iVar0 = 952;
			break;
		
		case -1244055789:
			iVar0 = 953;
			break;
		
		case 1650491806:
			iVar0 = 954;
			break;
		
		case 507754313:
			iVar0 = 955;
			break;
		
		case -1168735793:
			iVar0 = 956;
			break;
		
		case 539301314:
			iVar0 = 957;
			break;
		
		case 485114319:
			iVar0 = 958;
			break;
		
		case 1397146165:
			iVar0 = 959;
			break;
		
		case -922912500:
			iVar0 = 960;
			break;
		
		case 898093918:
			iVar0 = 961;
			break;
		
		case -513817029:
			iVar0 = 962;
			break;
		
		case 134762953:
			iVar0 = 963;
			break;
		
		case 252404144:
			iVar0 = 964;
			break;
		
		case 168579849:
			iVar0 = 965;
			break;
		
		case 1888095634:
			iVar0 = 966;
			break;
		
		case -1046236786:
			iVar0 = 967;
			break;
		
		case 33901453:
			iVar0 = 968;
			break;
		
		case -2043232938:
			iVar0 = 969;
			break;
		
		case 1113927554:
			iVar0 = 970;
			break;
		
		case -1602559301:
			iVar0 = 971;
			break;
		
		case -1167812298:
			iVar0 = 972;
			break;
		
		case 1912961832:
			iVar0 = 973;
			break;
		
		case 647456058:
			iVar0 = 974;
			break;
		
		case -717523161:
			iVar0 = 975;
			break;
		
		case -1641870267:
			iVar0 = 976;
			break;
		
		case 1857030685:
			iVar0 = 977;
			break;
		
		case -1074922646:
			iVar0 = 978;
			break;
		
		case -1544308671:
			iVar0 = 979;
			break;
		
		case -480375220:
			iVar0 = 980;
			break;
		
		case -1158306419:
			iVar0 = 981;
			break;
		
		case 808115088:
			iVar0 = 982;
			break;
		
		case 1544542048:
			iVar0 = 983;
			break;
		
		case 212713658:
			iVar0 = 984;
			break;
		
		case -537477127:
			iVar0 = 985;
			break;
		
		case -2067132678:
			iVar0 = 986;
			break;
		
		case 1060051174:
			iVar0 = 987;
			break;
		
		case 2038375002:
			iVar0 = 988;
			break;
		
		case -256374303:
			iVar0 = 989;
			break;
		
		case -2088960010:
			iVar0 = 990;
			break;
		
		case 53750878:
			iVar0 = 991;
			break;
		
		case -162426614:
			iVar0 = 992;
			break;
		
		case 764954331:
			iVar0 = 993;
			break;
		
		case -111852222:
			iVar0 = 994;
			break;
		
		case -2132895820:
			iVar0 = 995;
			break;
		
		case -1693221374:
			iVar0 = 996;
			break;
		
		case 1413331587:
			iVar0 = 997;
			break;
		
		case -955872734:
			iVar0 = 998;
			break;
		
		case -858057022:
			iVar0 = 999;
			break;
	}
	switch (iParam0)
	{
		case 848913252:
			iVar0 = 1000;
			break;
		
		case -437731710:
			iVar0 = 1001;
			break;
		
		case -1554819122:
			iVar0 = 1002;
			break;
		
		case 160748074:
			iVar0 = 1003;
			break;
		
		case -1994066555:
			iVar0 = 1004;
			break;
		
		case 1529932499:
			iVar0 = 1005;
			break;
		
		case -768319839:
			iVar0 = 1006;
			break;
		
		case 514923246:
			iVar0 = 1007;
			break;
		
		case 2095668450:
			iVar0 = 1008;
			break;
		
		case -1360851461:
			iVar0 = 1009;
			break;
		
		case -1204294910:
			iVar0 = 1010;
			break;
		
		case 825438363:
			iVar0 = 1011;
			break;
		
		case 1442163504:
			iVar0 = 1012;
			break;
		
		case -518038969:
			iVar0 = 1013;
			break;
		
		case -1562358717:
			iVar0 = 1014;
			break;
		
		case -1942234381:
			iVar0 = 1015;
			break;
		
		case 1848637041:
			iVar0 = 1016;
			break;
		
		case -1724314576:
			iVar0 = 1017;
			break;
		
		case 1610788609:
			iVar0 = 1018;
			break;
		
		case 438240239:
			iVar0 = 1019;
			break;
		
		case -532184873:
			iVar0 = 1020;
			break;
		
		case -176418916:
			iVar0 = 1021;
			break;
		
		case -255254961:
			iVar0 = 1022;
			break;
		
		case -1575657225:
			iVar0 = 1023;
			break;
		
		case 712387083:
			iVar0 = 1024;
			break;
		
		case 1409023355:
			iVar0 = 1025;
			break;
		
		case 1855924338:
			iVar0 = 1026;
			break;
		
		case -851809867:
			iVar0 = 1027;
			break;
		
		case -710322017:
			iVar0 = 1028;
			break;
		
		case 1830521267:
			iVar0 = 1029;
			break;
		
		case 171269136:
			iVar0 = 1030;
			break;
		
		case 13553741:
			iVar0 = 1031;
			break;
		
		case 798116039:
			iVar0 = 1032;
			break;
		
		case 899953426:
			iVar0 = 1033;
			break;
		
		case -1781084925:
			iVar0 = 1034;
			break;
		
		case -1001719981:
			iVar0 = 1035;
			break;
		
		case -849489038:
			iVar0 = 1036;
			break;
		
		case 789088101:
			iVar0 = 1037;
			break;
		
		case -899132837:
			iVar0 = 1038;
			break;
		
		case -1844999955:
			iVar0 = 1039;
			break;
		
		case 701640495:
			iVar0 = 1040;
			break;
		
		case -1582889838:
			iVar0 = 1041;
			break;
		
		case -242968503:
			iVar0 = 1042;
			break;
		
		case 914325248:
			iVar0 = 1043;
			break;
		
		case 1925867880:
			iVar0 = 1044;
			break;
		
		case 1100261909:
			iVar0 = 1045;
			break;
		
		case -689792496:
			iVar0 = 1046;
			break;
		
		case 987747946:
			iVar0 = 1047;
			break;
		
		case 65224538:
			iVar0 = 1048;
			break;
		
		case 1579550559:
			iVar0 = 1049;
			break;
		
		case -464415589:
			iVar0 = 1050;
			break;
		
		case -445972364:
			iVar0 = 1051;
			break;
		
		case -654499627:
			iVar0 = 1052;
			break;
		
		case -736721263:
			iVar0 = 1053;
			break;
		
		case -568649369:
			iVar0 = 1054;
			break;
		
		case 879556831:
			iVar0 = 1055;
			break;
		
		case -1606449893:
			iVar0 = 1056;
			break;
		
		case 552957998:
			iVar0 = 1057;
			break;
		
		case -45830165:
			iVar0 = 1058;
			break;
		
		case -1681032345:
			iVar0 = 1059;
			break;
		
		case 1852583670:
			iVar0 = 1060;
			break;
		
		case -2051866149:
			iVar0 = 1061;
			break;
		
		case -2022674987:
			iVar0 = 1062;
			break;
		
		case 1212064605:
			iVar0 = 1063;
			break;
		
		case 284091254:
			iVar0 = 1064;
			break;
		
		case 1123523612:
			iVar0 = 1065;
			break;
		
		case 209576694:
			iVar0 = 1066;
			break;
		
		case 1852311340:
			iVar0 = 1067;
			break;
		
		case -1681829257:
			iVar0 = 1068;
			break;
		
		case -1902030573:
			iVar0 = 1069;
			break;
		
		case -1172040354:
			iVar0 = 1070;
			break;
		
		case 1896190035:
			iVar0 = 1071;
			break;
		
		case 1253892786:
			iVar0 = 1072;
			break;
		
		case 1619815742:
			iVar0 = 1073;
			break;
		
		case -203379302:
			iVar0 = 1074;
			break;
		
		case -1888601473:
			iVar0 = 1075;
			break;
		
		case -145302944:
			iVar0 = 1076;
			break;
		
		case 1793368599:
			iVar0 = 1077;
			break;
		
		case -524815620:
			iVar0 = 1078;
			break;
		
		case -667753083:
			iVar0 = 1079;
			break;
		
		case 1867381326:
			iVar0 = 1080;
			break;
		
		case 1389004292:
			iVar0 = 1081;
			break;
		
		case 459577145:
			iVar0 = 1082;
			break;
		
		case 697971620:
			iVar0 = 1083;
			break;
		
		case -157037136:
			iVar0 = 1084;
			break;
		
		case 70412493:
			iVar0 = 1085;
			break;
		
		case -861963864:
			iVar0 = 1086;
			break;
		
		case -496458438:
			iVar0 = 1087;
			break;
		
		case -1356579150:
			iVar0 = 1088;
			break;
		
		case -1125721545:
			iVar0 = 1089;
			break;
		
		case -2065044930:
			iVar0 = 1090;
			break;
		
		case -346765569:
			iVar0 = 1091;
			break;
		
		case -734816067:
			iVar0 = 1092;
			break;
		
		case -961282630:
			iVar0 = 1093;
			break;
		
		case 1134491538:
			iVar0 = 1094;
			break;
		
		case 842421441:
			iVar0 = 1095;
			break;
		
		case 523316919:
			iVar0 = 1096;
			break;
		
		case 158466873:
			iVar0 = 1097;
			break;
		
		case 1789019544:
			iVar0 = 1098;
			break;
		
		case 1426332252:
			iVar0 = 1099;
			break;
	}
	switch (iParam0)
	{
		case 1178893529:
			iVar0 = 1100;
			break;
		
		case -1101107129:
			iVar0 = 1101;
			break;
		
		case -1790763503:
			iVar0 = 1102;
			break;
		
		case -1550271812:
			iVar0 = 1103;
			break;
		
		case -384612940:
			iVar0 = 1104;
			break;
		
		case -45257176:
			iVar0 = 1105;
			break;
		
		case -866087857:
			iVar0 = 1106;
			break;
		
		case -623761102:
			iVar0 = 1107;
			break;
		
		case 1075770310:
			iVar0 = 1108;
			break;
		
		case 342137938:
			iVar0 = 1109;
			break;
		
		case 599407357:
			iVar0 = 1110;
			break;
		
		case 335056082:
			iVar0 = 1111;
			break;
		
		case 1164668855:
			iVar0 = 1112;
			break;
		
		case -424365493:
			iVar0 = 1113;
			break;
		
		case -1995737350:
			iVar0 = 1114;
			break;
		
		case 2052610452:
			iVar0 = 1115;
			break;
		
		case 745160145:
			iVar0 = 1116;
			break;
		
		case 238944633:
			iVar0 = 1117;
			break;
		
		case -1894874368:
			iVar0 = 1118;
			break;
		
		case -1050515545:
			iVar0 = 1119;
			break;
		
		case -1296283045:
			iVar0 = 1120;
			break;
		
		case -254061820:
			iVar0 = 1121;
			break;
		
		case -482822209:
			iVar0 = 1122;
			break;
		
		case -1148622755:
			iVar0 = 1123;
			break;
		
		case 499821790:
			iVar0 = 1124;
			break;
		
		case 132940066:
			iVar0 = 1125;
			break;
		
		case -503061408:
			iVar0 = 1126;
			break;
		
		case -511607931:
			iVar0 = 1127;
			break;
		
		case -1252323352:
			iVar0 = 1128;
			break;
		
		case -1836767787:
			iVar0 = 1129;
			break;
		
		case 2104165007:
			iVar0 = 1130;
			break;
		
		case -1020450678:
			iVar0 = 1131;
			break;
		
		case 361610929:
			iVar0 = 1132;
			break;
		
		case -1060893559:
			iVar0 = 1133;
			break;
		
		case -1918931165:
			iVar0 = 1134;
			break;
		
		case 516389880:
			iVar0 = 1135;
			break;
		
		case 2047957618:
			iVar0 = 1136;
			break;
		
		case -1461327573:
			iVar0 = 1137;
			break;
		
		case -1710764657:
			iVar0 = 1138;
			break;
		
		case -815856869:
			iVar0 = 1139;
			break;
		
		case 1293748604:
			iVar0 = 1140;
			break;
		
		case -906850579:
			iVar0 = 1141;
			break;
		
		case -504902857:
			iVar0 = 1142;
			break;
		
		case -1891206996:
			iVar0 = 1143;
			break;
		
		case -6720974:
			iVar0 = 1144;
			break;
		
		case -2069848364:
			iVar0 = 1145;
			break;
		
		case 778786183:
			iVar0 = 1146;
			break;
		
		case -1337421708:
			iVar0 = 1147;
			break;
		
		case -1890546602:
			iVar0 = 1148;
			break;
		
		case 218123795:
			iVar0 = 1149;
			break;
		
		case -636242520:
			iVar0 = 1150;
			break;
		
		case -1180398682:
			iVar0 = 1151;
			break;
		
		case 1694157857:
			iVar0 = 1152;
			break;
		
		case -1696611500:
			iVar0 = 1153;
			break;
		
		case 1988941728:
			iVar0 = 1154;
			break;
		
		case -1693251432:
			iVar0 = 1155;
			break;
		
		case -1235260480:
			iVar0 = 1156;
			break;
		
		case -2013104967:
			iVar0 = 1157;
			break;
		
		case -1763320016:
			iVar0 = 1158;
			break;
		
		case 1141954591:
			iVar0 = 1159;
			break;
		
		case 24176579:
			iVar0 = 1160;
			break;
		
		case 501566279:
			iVar0 = 1161;
			break;
		
		case -909438267:
			iVar0 = 1162;
			break;
		
		case -1286663634:
			iVar0 = 1163;
			break;
		
		case -1840235222:
			iVar0 = 1164;
			break;
		
		case -888873465:
			iVar0 = 1165;
			break;
		
		case -1426756926:
			iVar0 = 1166;
			break;
		
		case 2130054214:
			iVar0 = 1167;
			break;
		
		case 836015556:
			iVar0 = 1168;
			break;
		
		case -502214028:
			iVar0 = 1169;
			break;
		
		case -1838365509:
			iVar0 = 1170;
			break;
		
		case -547605203:
			iVar0 = 1171;
			break;
		
		case 1848216712:
			iVar0 = 1172;
			break;
		
		case 223413431:
			iVar0 = 1173;
			break;
		
		case -432155816:
			iVar0 = 1174;
			break;
		
		case -104345338:
			iVar0 = 1175;
			break;
		
		case 1184426490:
			iVar0 = 1176;
			break;
		
		case 47527010:
			iVar0 = 1177;
			break;
		
		case -1576036346:
			iVar0 = 1178;
			break;
		
		case -809444617:
			iVar0 = 1179;
			break;
		
		case -1643354138:
			iVar0 = 1180;
			break;
		
		case -73524046:
			iVar0 = 1181;
			break;
		
		case -1843193891:
			iVar0 = 1182;
			break;
		
		case -1224204417:
			iVar0 = 1183;
			break;
		
		case 921109652:
			iVar0 = 1184;
			break;
		
		case -1009122462:
			iVar0 = 1185;
			break;
		
		case -2143877160:
			iVar0 = 1186;
			break;
		
		case 985961343:
			iVar0 = 1187;
			break;
		
		case 906071982:
			iVar0 = 1188;
			break;
		
		case 566663142:
			iVar0 = 1189;
			break;
		
		case 764251611:
			iVar0 = 1190;
			break;
		
		case -1575240476:
			iVar0 = 1191;
			break;
		
		case 676807987:
			iVar0 = 1192;
			break;
		
		case 272160153:
			iVar0 = 1193;
			break;
		
		case 1593344440:
			iVar0 = 1194;
			break;
		
		case 546222390:
			iVar0 = 1195;
			break;
		
		case 1983375900:
			iVar0 = 1196;
			break;
		
		case -620589387:
			iVar0 = 1197;
			break;
		
		case 383923929:
			iVar0 = 1198;
			break;
		
		case -1703406594:
			iVar0 = 1199;
			break;
	}
	switch (iParam0)
	{
		case -398286533:
			iVar0 = 1200;
			break;
		
		case -80478106:
			iVar0 = 1201;
			break;
		
		case 1835331655:
			iVar0 = 1202;
			break;
		
		case -1650596870:
			iVar0 = 1203;
			break;
		
		case 1231926496:
			iVar0 = 1204;
			break;
		
		case -1506181253:
			iVar0 = 1205;
			break;
		
		case -1737145605:
			iVar0 = 1206;
			break;
		
		case 1673851512:
			iVar0 = 1207;
			break;
		
		case 1023339598:
			iVar0 = 1208;
			break;
		
		case -163738770:
			iVar0 = 1209;
			break;
		
		case 1863218823:
			iVar0 = 1210;
			break;
		
		case 333966447:
			iVar0 = 1211;
			break;
		
		case 1412626052:
			iVar0 = 1212;
			break;
		
		case -39100956:
			iVar0 = 1213;
			break;
		
		case 1631533003:
			iVar0 = 1214;
			break;
		
		case 1493430918:
			iVar0 = 1215;
			break;
		
		case -196693334:
			iVar0 = 1216;
			break;
		
		case 553507495:
			iVar0 = 1217;
			break;
		
		case 2003474700:
			iVar0 = 1218;
			break;
		
		case 1121792228:
			iVar0 = 1219;
			break;
		
		case -1424651669:
			iVar0 = 1220;
			break;
		
		case -1454164346:
			iVar0 = 1221;
			break;
		
		case -779574408:
			iVar0 = 1222;
			break;
		
		case -1361908447:
			iVar0 = 1223;
			break;
		
		case 1250161120:
			iVar0 = 1224;
			break;
		
		case 1288201657:
			iVar0 = 1225;
			break;
		
		case 111412152:
			iVar0 = 1226;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_693(int iParam0, var uParam1)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case -1917324065:
			iVar0 = 0;
			break;
		
		case 1056297333:
			iVar0 = 1;
			break;
		
		case 494620709:
			iVar0 = 2;
			break;
		
		case 800453786:
			iVar0 = 3;
			break;
		
		case -1082736975:
			iVar0 = 4;
			break;
		
		case -754981437:
			iVar0 = 5;
			break;
		
		case -1801855538:
			iVar0 = 6;
			break;
		
		case 459313194:
			iVar0 = 7;
			break;
		
		case 2007087579:
			iVar0 = 8;
			break;
		
		case 1987172386:
			iVar0 = 9;
			break;
		
		case 1801787829:
			iVar0 = 10;
			break;
		
		case -221624488:
			iVar0 = 11;
			break;
		
		case 25158851:
			iVar0 = 12;
			break;
		
		case 472458130:
			iVar0 = 13;
			break;
		
		case 164352862:
			iVar0 = 14;
			break;
		
		case -904148779:
			iVar0 = 15;
			break;
		
		case -694439771:
			iVar0 = 16;
			break;
		
		case -1469590466:
			iVar0 = 17;
			break;
		
		case -1511207100:
			iVar0 = 18;
			break;
		
		case -1352670678:
			iVar0 = 19;
			break;
		
		case -1960273476:
			iVar0 = 20;
			break;
		
		case -1657389609:
			iVar0 = 21;
			break;
		
		case 1826839858:
			iVar0 = 22;
			break;
		
		case 1989701788:
			iVar0 = 23;
			break;
		
		case 1213109257:
			iVar0 = 24;
			break;
		
		case 607407061:
			iVar0 = 25;
			break;
		
		case 875031480:
			iVar0 = 26;
			break;
		
		case 1487418552:
			iVar0 = 27;
			break;
		
		case 264053475:
			iVar0 = 28;
			break;
		
		case 99094329:
			iVar0 = 29;
			break;
		
		case -244193715:
			iVar0 = 30;
			break;
		
		case -540785934:
			iVar0 = 31;
			break;
		
		case -694833003:
			iVar0 = 32;
			break;
		
		case -852058665:
			iVar0 = 33;
			break;
		
		case -1512648940:
			iVar0 = 34;
			break;
		
		case -761354077:
			iVar0 = 35;
			break;
		
		case 1560551467:
			iVar0 = 36;
			break;
		
		case 827974775:
			iVar0 = 37;
			break;
		
		case 1595162603:
			iVar0 = 38;
			break;
		
		case 709663738:
			iVar0 = 39;
			break;
		
		case 990002533:
			iVar0 = 40;
			break;
		
		case 1860213958:
			iVar0 = 41;
			break;
		
		case 2119318441:
			iVar0 = 42;
			break;
		
		case -1953737187:
			iVar0 = 43;
			break;
		
		case 193320466:
			iVar0 = 44;
			break;
		
		case 1936646403:
			iVar0 = 45;
			break;
		
		case -1126042648:
			iVar0 = 46;
			break;
		
		case -1125022512:
			iVar0 = 47;
			break;
		
		case -1304369017:
			iVar0 = 48;
			break;
		
		case -2018143375:
			iVar0 = 49;
			break;
		
		case 224730392:
			iVar0 = 50;
			break;
		
		case 439629494:
			iVar0 = 51;
			break;
		
		case 736778786:
			iVar0 = 52;
			break;
		
		case 1048444745:
			iVar0 = 53;
			break;
		
		case 1988816738:
			iVar0 = 54;
			break;
		
		case 2140603469:
			iVar0 = 55;
			break;
		
		case 214245031:
			iVar0 = 56;
			break;
		
		case 1006238992:
			iVar0 = 57;
			break;
		
		case 689952604:
			iVar0 = 58;
			break;
		
		case -681528353:
			iVar0 = 59;
			break;
		
		case 1157448359:
			iVar0 = 60;
			break;
		
		case 43105745:
			iVar0 = 61;
			break;
		
		case -270395278:
			iVar0 = 62;
			break;
		
		case 505181414:
			iVar0 = 63;
			break;
		
		case 254662409:
			iVar0 = 64;
			break;
		
		case -982924414:
			iVar0 = 65;
			break;
		
		case -1156010272:
			iVar0 = 66;
			break;
		
		case 1885313391:
			iVar0 = 67;
			break;
		
		case -694786597:
			iVar0 = 68;
			break;
		
		case -1950199756:
			iVar0 = 69;
			break;
		
		case 384168721:
			iVar0 = 70;
			break;
		
		case -369452741:
			iVar0 = 71;
			break;
		
		case -89113946:
			iVar0 = 72;
			break;
		
		case 1836261422:
			iVar0 = 73;
			break;
		
		case -1004417654:
			iVar0 = 74;
			break;
		
		case -754095263:
			iVar0 = 75;
			break;
		
		case -1210698509:
			iVar0 = 76;
			break;
		
		case 1332405298:
			iVar0 = 77;
			break;
		
		case 552929095:
			iVar0 = 78;
			break;
		
		case 861154309:
			iVar0 = 79;
			break;
		
		case -1653801207:
			iVar0 = 80;
			break;
		
		case -87213624:
			iVar0 = 81;
			break;
		
		case 1285643631:
			iVar0 = 82;
			break;
		
		case 523240077:
			iVar0 = 83;
			break;
		
		case 823174734:
			iVar0 = 84;
			break;
		
		case -1248612522:
			iVar0 = 85;
			break;
		
		case 123359970:
			iVar0 = 86;
			break;
		
		case 369684543:
			iVar0 = 87;
			break;
		
		case -337142787:
			iVar0 = 88;
			break;
		
		case 1395583642:
			iVar0 = 89;
			break;
		
		case 1782520810:
			iVar0 = 90;
			break;
		
		case -660506451:
			iVar0 = 91;
			break;
		
		case -1092860637:
			iVar0 = 92;
			break;
		
		case 524387820:
			iVar0 = 93;
			break;
		
		case -1829180023:
			iVar0 = 94;
			break;
		
		case 2091368679:
			iVar0 = 95;
			break;
		
		case 1851597906:
			iVar0 = 96;
			break;
		
		case -434629734:
			iVar0 = 97;
			break;
		
		case 1415278623:
			iVar0 = 98;
			break;
		
		case 1252285617:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 893595891:
			iVar0 = 100;
			break;
		
		case 423819507:
			iVar0 = 101;
			break;
		
		case -1433887872:
			iVar0 = 102;
			break;
		
		case -464613621:
			iVar0 = 103;
			break;
		
		case -301227387:
			iVar0 = 104;
			break;
		
		case -701762906:
			iVar0 = 105;
			break;
		
		case -890282963:
			iVar0 = 106;
			break;
		
		case -1188251480:
			iVar0 = 107;
			break;
		
		case 258827560:
			iVar0 = 108;
			break;
		
		case 965649655:
			iVar0 = 109;
			break;
		
		case 718800778:
			iVar0 = 110;
			break;
		
		case 1959959422:
			iVar0 = 111;
			break;
		
		case 1200177388:
			iVar0 = 112;
			break;
		
		case -1874439579:
			iVar0 = 113;
			break;
		
		case -1679505893:
			iVar0 = 114;
			break;
		
		case -1976229188:
			iVar0 = 115;
			break;
		
		case 2037875009:
			iVar0 = 116;
			break;
		
		case -235146664:
			iVar0 = 117;
			break;
		
		case -441853516:
			iVar0 = 118;
			break;
		
		case -664221443:
			iVar0 = 119;
			break;
		
		case -371627042:
			iVar0 = 120;
			break;
		
		case -1266220742:
			iVar0 = 121;
			break;
		
		case -968055611:
			iVar0 = 122;
			break;
		
		case 248100286:
			iVar0 = 123;
			break;
		
		case 551606764:
			iVar0 = 124;
			break;
		
		case 1805971315:
			iVar0 = 125;
			break;
		
		case -43642121:
			iVar0 = 126;
			break;
		
		case 1172251624:
			iVar0 = 127;
			break;
		
		case 1471989667:
			iVar0 = 128;
			break;
		
		case -2124702788:
			iVar0 = 129;
			break;
		
		case -1826734271:
			iVar0 = 130;
			break;
		
		case -900452940:
			iVar0 = 131;
			break;
		
		case -292194762:
			iVar0 = 132;
			break;
		
		case 637166847:
			iVar0 = 133;
			break;
		
		case -1204844181:
			iVar0 = 134;
			break;
		
		case 324779970:
			iVar0 = 135;
			break;
		
		case 329039940:
			iVar0 = 136;
			break;
		
		case 1854928425:
			iVar0 = 137;
			break;
		
		case 13179549:
			iVar0 = 138;
			break;
		
		case 1899823455:
			iVar0 = 139;
			break;
		
		case -2090490448:
			iVar0 = 140;
			break;
		
		case -1801467868:
			iVar0 = 141;
			break;
		
		case 953986562:
			iVar0 = 142;
			break;
		
		case 585335312:
			iVar0 = 143;
			break;
		
		case 489617063:
			iVar0 = 144;
			break;
		
		case 210195800:
			iVar0 = 145;
			break;
		
		case 1843402776:
			iVar0 = 146;
			break;
		
		case -1600520821:
			iVar0 = 147;
			break;
		
		case 1399087889:
			iVar0 = 148;
			break;
		
		case 1169344430:
			iVar0 = 149;
			break;
		
		case -2028647818:
			iVar0 = 150;
			break;
		
		case -1335845620:
			iVar0 = 151;
			break;
		
		case -1450406320:
			iVar0 = 152;
			break;
		
		case -1209849091:
			iVar0 = 153;
			break;
		
		case 2065609077:
			iVar0 = 154;
			break;
		
		case -664245241:
			iVar0 = 155;
			break;
		
		case 1676130538:
			iVar0 = 156;
			break;
		
		case -1730534702:
			iVar0 = 157;
			break;
		
		case -1767432596:
			iVar0 = 158;
			break;
		
		case -2016105604:
			iVar0 = 159;
			break;
		
		case 1971947238:
			iVar0 = 160;
			break;
		
		case -362811247:
			iVar0 = 161;
			break;
		
		case -668087251:
			iVar0 = 162;
			break;
		
		case -821282326:
			iVar0 = 163;
			break;
		
		case -1083467095:
			iVar0 = 164;
			break;
		
		case 550067555:
			iVar0 = 165;
			break;
		
		case 1439221609:
			iVar0 = 166;
			break;
		
		case 67412954:
			iVar0 = 167;
			break;
		
		case -1999360357:
			iVar0 = 168;
			break;
		
		case 1461537582:
			iVar0 = 169;
			break;
		
		case -1828273408:
			iVar0 = 170;
			break;
		
		case -1319239762:
			iVar0 = 171;
			break;
		
		case -1234400821:
			iVar0 = 172;
			break;
		
		case -992303449:
			iVar0 = 173;
			break;
		
		case -638398249:
			iVar0 = 174;
			break;
		
		case -41543683:
			iVar0 = 175;
			break;
		
		case -1934903018:
			iVar0 = 176;
			break;
		
		case 2132090345:
			iVar0 = 177;
			break;
		
		case 1751052413:
			iVar0 = 178;
			break;
		
		case 1519604966:
			iVar0 = 179;
			break;
		
		case -1964624525:
			iVar0 = 180;
			break;
		
		case 2006191823:
			iVar0 = 181;
			break;
		
		case 1633280603:
			iVar0 = 182;
			break;
		
		case 632918673:
			iVar0 = 183;
			break;
		
		case -190040148:
			iVar0 = 184;
			break;
		
		case 42936837:
			iVar0 = 185;
			break;
		
		case -1458541976:
			iVar0 = 186;
			break;
		
		case -606014753:
			iVar0 = 187;
			break;
		
		case -613376371:
			iVar0 = 188;
			break;
		
		case -446291501:
			iVar0 = 189;
			break;
		
		case 739308497:
			iVar0 = 190;
			break;
		
		case 495343292:
			iVar0 = 191;
			break;
		
		case -1686711653:
			iVar0 = 192;
			break;
		
		case 1187457341:
			iVar0 = 193;
			break;
		
		case 956403122:
			iVar0 = 194;
			break;
		
		case 1647042566:
			iVar0 = 195;
			break;
		
		case -461478743:
			iVar0 = 196;
			break;
		
		case -1883325653:
			iVar0 = 197;
			break;
		
		case -2114248796:
			iVar0 = 198;
			break;
		
		case 314228205:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1503775674:
			iVar0 = 200;
			break;
		
		case 1862399610:
			iVar0 = 201;
			break;
		
		case 708472048:
			iVar0 = 202;
			break;
		
		case -1207367545:
			iVar0 = 203;
			break;
		
		case 111650251:
			iVar0 = 204;
			break;
		
		case -28941494:
			iVar0 = 205;
			break;
		
		case -1827173138:
			iVar0 = 206;
			break;
		
		case -520681423:
			iVar0 = 207;
			break;
		
		case -209343154:
			iVar0 = 208;
			break;
		
		case -293579471:
			iVar0 = 209;
			break;
		
		case 20871853:
			iVar0 = 210;
			break;
		
		case -89823344:
			iVar0 = 211;
			break;
		
		case -1820191335:
			iVar0 = 212;
			break;
		
		case -1588547274:
			iVar0 = 213;
			break;
		
		case -1224287070:
			iVar0 = 214;
			break;
		
		case -994150383:
			iVar0 = 215;
			break;
		
		case -869824793:
			iVar0 = 216;
			break;
		
		case -633330920:
			iVar0 = 217;
			break;
		
		case -308131364:
			iVar0 = 218;
			break;
		
		case -38278649:
			iVar0 = 219;
			break;
		
		case 555692245:
			iVar0 = 220;
			break;
		
		case 929455459:
			iVar0 = 221;
			break;
		
		case -2092436411:
			iVar0 = 222;
			break;
		
		case 1904300216:
			iVar0 = 223;
			break;
		
		case -1599361268:
			iVar0 = 224;
			break;
		
		case -1897002095:
			iVar0 = 225;
			break;
		
		case -1011813098:
			iVar0 = 226;
			break;
		
		case -1316794181:
			iVar0 = 227;
			break;
		
		case -416105443:
			iVar0 = 228;
			break;
		
		case -47978497:
			iVar0 = 229;
			break;
		
		case -358202620:
			iVar0 = 230;
			break;
		
		case 547139312:
			iVar0 = 231;
			break;
		
		case 1124688073:
			iVar0 = 232;
			break;
		
		case 888521890:
			iVar0 = 233;
			break;
		
		case 665823766:
			iVar0 = 234;
			break;
		
		case 427888057:
			iVar0 = 235;
			break;
		
		case 1121411181:
			iVar0 = 236;
			break;
		
		case 890225886:
			iVar0 = 237;
			break;
		
		case 651012186:
			iVar0 = 238;
			break;
		
		case 422776101:
			iVar0 = 239;
			break;
		
		case 1630543134:
			iVar0 = 240;
			break;
		
		case -1945668916:
			iVar0 = 241;
			break;
		
		case -627999265:
			iVar0 = 242;
			break;
		
		case 1682346315:
			iVar0 = 243;
			break;
		
		case 1021952654:
			iVar0 = 244;
			break;
		
		case 1319396867:
			iVar0 = 245;
			break;
		
		case 560794517:
			iVar0 = 246;
			break;
		
		case 858697496:
			iVar0 = 247;
			break;
		
		case -30981230:
			iVar0 = 248;
			break;
		
		case -328032215:
			iVar0 = 249;
			break;
		
		case -1451681225:
			iVar0 = 250;
			break;
		
		case 267904819:
			iVar0 = 251;
			break;
		
		case 1570178485:
			iVar0 = 252;
			break;
		
		case -1619850916:
			iVar0 = 253;
			break;
		
		case -713067148:
			iVar0 = 254;
			break;
		
		case 946477614:
			iVar0 = 255;
			break;
		
		case -1423343701:
			iVar0 = 256;
			break;
		
		case 445931457:
			iVar0 = 257;
			break;
		
		case 678558588:
			iVar0 = 258;
			break;
		
		case -854631987:
			iVar0 = 259;
			break;
		
		case -1707871209:
			iVar0 = 260;
			break;
		
		case -863391184:
			iVar0 = 261;
			break;
		
		case 671171671:
			iVar0 = 262;
			break;
		
		case 904519720:
			iVar0 = 263;
			break;
		
		case 670952414:
			iVar0 = 264;
			break;
		
		case -282875325:
			iVar0 = 265;
			break;
		
		case 2079623104:
			iVar0 = 266;
			break;
		
		case 1088443427:
			iVar0 = 267;
			break;
		
		case 200001600:
			iVar0 = 268;
			break;
		
		case 1620729159:
			iVar0 = 269;
			break;
		
		case -1713274238:
			iVar0 = 270;
			break;
		
		case -1571590969:
			iVar0 = 271;
			break;
		
		case -457639374:
			iVar0 = 272;
			break;
		
		case 64160805:
			iVar0 = 273;
			break;
		
		case 1015325203:
			iVar0 = 274;
			break;
		
		case -1951778967:
			iVar0 = 275;
			break;
		
		case 1836042304:
			iVar0 = 276;
			break;
		
		case -421094621:
			iVar0 = 277;
			break;
		
		case 641062099:
			iVar0 = 278;
			break;
		
		case 597454468:
			iVar0 = 279;
			break;
		
		case 713758205:
			iVar0 = 280;
			break;
		
		case 1042267708:
			iVar0 = 281;
			break;
		
		case -637951661:
			iVar0 = 282;
			break;
		
		case 195911857:
			iVar0 = 283;
			break;
		
		case 903988957:
			iVar0 = 284;
			break;
		
		case 1068170761:
			iVar0 = 285;
			break;
		
		case -619065384:
			iVar0 = 286;
			break;
		
		case -497085955:
			iVar0 = 287;
			break;
		
		case 1138369002:
			iVar0 = 288;
			break;
		
		case -1957731308:
			iVar0 = 289;
			break;
		
		case -2063712125:
			iVar0 = 290;
			break;
		
		case 1773674262:
			iVar0 = 291;
			break;
		
		case 1027059614:
			iVar0 = 292;
			break;
		
		case 1366782677:
			iVar0 = 293;
			break;
		
		case 216134256:
			iVar0 = 294;
			break;
		
		case 810154442:
			iVar0 = 295;
			break;
		
		case 77285961:
			iVar0 = 296;
			break;
		
		case 1617489838:
			iVar0 = 297;
			break;
		
		case 1697138602:
			iVar0 = 298;
			break;
		
		case 711811694:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case -895106351:
			iVar0 = 300;
			break;
		
		case 875367934:
			iVar0 = 301;
			break;
		
		case -979867160:
			iVar0 = 302;
			break;
		
		case -1233816942:
			iVar0 = 303;
			break;
		
		case -866958715:
			iVar0 = 304;
			break;
		
		case -1303573005:
			iVar0 = 305;
			break;
		
		case 2085207152:
			iVar0 = 306;
			break;
		
		case 857137150:
			iVar0 = 307;
			break;
		
		case 535952639:
			iVar0 = 308;
			break;
		
		case -1974657401:
			iVar0 = 309;
			break;
		
		case 129909013:
			iVar0 = 310;
			break;
		
		case -1499060170:
			iVar0 = 311;
			break;
		
		case 412032123:
			iVar0 = 312;
			break;
		
		case 915049044:
			iVar0 = 313;
			break;
		
		case 456478679:
			iVar0 = 314;
			break;
		
		case 907364848:
			iVar0 = 315;
			break;
		
		case -1783721060:
			iVar0 = 316;
			break;
		
		case -1008363280:
			iVar0 = 317;
			break;
		
		case 1429817922:
			iVar0 = 318;
			break;
		
		case -938326281:
			iVar0 = 319;
			break;
		
		case -1073925235:
			iVar0 = 320;
			break;
		
		case 1498524677:
			iVar0 = 321;
			break;
		
		case 1525596308:
			iVar0 = 322;
			break;
		
		case 1232639216:
			iVar0 = 323;
			break;
		
		case 956061600:
			iVar0 = 324;
			break;
		
		case 816551665:
			iVar0 = 325;
			break;
		
		case 2049704410:
			iVar0 = 326;
			break;
		
		case -796818724:
			iVar0 = 327;
			break;
		
		case 1775476370:
			iVar0 = 328;
			break;
		
		case 266230635:
			iVar0 = 329;
			break;
		
		case -588549683:
			iVar0 = 330;
			break;
		
		case 464027076:
			iVar0 = 331;
			break;
		
		case 2122049260:
			iVar0 = 332;
			break;
		
		case 1049130700:
			iVar0 = 333;
			break;
		
		case -116952560:
			iVar0 = 334;
			break;
		
		case 1424723115:
			iVar0 = 335;
			break;
		
		case -1007272003:
			iVar0 = 336;
			break;
		
		case -644829701:
			iVar0 = 337;
			break;
		
		case -2103222497:
			iVar0 = 338;
			break;
		
		case -1589795073:
			iVar0 = 339;
			break;
		
		case -1689668067:
			iVar0 = 340;
			break;
		
		case -189814108:
			iVar0 = 341;
			break;
		
		case -1595292141:
			iVar0 = 342;
			break;
		
		case -1540940714:
			iVar0 = 343;
			break;
		
		case -2136471172:
			iVar0 = 344;
			break;
		
		case -666892434:
			iVar0 = 345;
			break;
		
		case -1001125323:
			iVar0 = 346;
			break;
		
		case 904104464:
			iVar0 = 347;
			break;
		
		case 690016265:
			iVar0 = 348;
			break;
		
		case 38190590:
			iVar0 = 349;
			break;
		
		case 2119761078:
			iVar0 = 350;
			break;
		
		case -1213131712:
			iVar0 = 351;
			break;
		
		case 990079224:
			iVar0 = 352;
			break;
		
		case -905045993:
			iVar0 = 353;
			break;
		
		case 2104378143:
			iVar0 = 354;
			break;
		
		case -666631800:
			iVar0 = 355;
			break;
		
		case 549954933:
			iVar0 = 356;
			break;
		
		case 1830069972:
			iVar0 = 357;
			break;
		
		case 859320876:
			iVar0 = 358;
			break;
		
		case -552358316:
			iVar0 = 359;
			break;
		
		case 1522216340:
			iVar0 = 360;
			break;
		
		case -1783296601:
			iVar0 = 361;
			break;
		
		case 283995288:
			iVar0 = 362;
			break;
		
		case -975534410:
			iVar0 = 363;
			break;
		
		case -2088194624:
			iVar0 = 364;
			break;
		
		case 1744801848:
			iVar0 = 365;
			break;
		
		case -481389646:
			iVar0 = 366;
			break;
		
		case -1781363036:
			iVar0 = 367;
			break;
		
		case 496009839:
			iVar0 = 368;
			break;
		
		case -667608820:
			iVar0 = 369;
			break;
		
		case 460475899:
			iVar0 = 370;
			break;
		
		case 1491168919:
			iVar0 = 371;
			break;
		
		case -1611478806:
			iVar0 = 372;
			break;
		
		case 523495612:
			iVar0 = 373;
			break;
		
		case -78008273:
			iVar0 = 374;
			break;
		
		case -762375847:
			iVar0 = 375;
			break;
		
		case 331482129:
			iVar0 = 376;
			break;
		
		case -2083628050:
			iVar0 = 377;
			break;
		
		case -468800117:
			iVar0 = 378;
			break;
		
		case 724819757:
			iVar0 = 379;
			break;
		
		case -1058761348:
			iVar0 = 380;
			break;
		
		case -546178212:
			iVar0 = 381;
			break;
		
		case -118052734:
			iVar0 = 382;
			break;
		
		case 1654466691:
			iVar0 = 383;
			break;
		
		case -1077553649:
			iVar0 = 384;
			break;
		
		case -886092159:
			iVar0 = 385;
			break;
		
		case -1406331536:
			iVar0 = 386;
			break;
		
		case -1968934850:
			iVar0 = 387;
			break;
		
		case 3741245:
			iVar0 = 388;
			break;
		
		case 1387838298:
			iVar0 = 389;
			break;
		
		case -1941058219:
			iVar0 = 390;
			break;
		
		case 955033120:
			iVar0 = 391;
			break;
		
		case 677119231:
			iVar0 = 392;
			break;
		
		case -1616214916:
			iVar0 = 393;
			break;
		
		case -841195297:
			iVar0 = 394;
			break;
		
		case -909289279:
			iVar0 = 395;
			break;
		
		case -239567341:
			iVar0 = 396;
			break;
		
		case -613592707:
			iVar0 = 397;
			break;
		
		case -988568374:
			iVar0 = 398;
			break;
		
		case -1090807654:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 534771589:
			iVar0 = 400;
			break;
		
		case -1340139519:
			iVar0 = 401;
			break;
		
		case -849980761:
			iVar0 = 402;
			break;
		
		case -551553478:
			iVar0 = 403;
			break;
		
		case 386581472:
			iVar0 = 404;
			break;
		
		case 1466454525:
			iVar0 = 405;
			break;
		
		case 283190173:
			iVar0 = 406;
			break;
		
		case 1528527015:
			iVar0 = 407;
			break;
		
		case -1690029966:
			iVar0 = 408;
			break;
		
		case -1685994466:
			iVar0 = 409;
			break;
		
		case 255166927:
			iVar0 = 410;
			break;
		
		case -271257487:
			iVar0 = 411;
			break;
		
		case 1885215284:
			iVar0 = 412;
			break;
		
		case -1935156988:
			iVar0 = 413;
			break;
		
		case 1061465906:
			iVar0 = 414;
			break;
		
		case -871031729:
			iVar0 = 415;
			break;
		
		case -101171485:
			iVar0 = 416;
			break;
		
		case -1590298770:
			iVar0 = 417;
			break;
		
		case 303441856:
			iVar0 = 418;
			break;
		
		case -2049689650:
			iVar0 = 419;
			break;
		
		case 788520303:
			iVar0 = 420;
			break;
		
		case -859861445:
			iVar0 = 421;
			break;
		
		case 1045897298:
			iVar0 = 422;
			break;
		
		case 116964921:
			iVar0 = 423;
			break;
		
		case -1502257606:
			iVar0 = 424;
			break;
		
		case -546150284:
			iVar0 = 425;
			break;
		
		case -357466888:
			iVar0 = 426;
			break;
		
		case 718674880:
			iVar0 = 427;
			break;
		
		case -1529401172:
			iVar0 = 428;
			break;
		
		case 2088037441:
			iVar0 = 429;
			break;
		
		case 2048866271:
			iVar0 = 430;
			break;
		
		case -1565431690:
			iVar0 = 431;
			break;
		
		case -1528465573:
			iVar0 = 432;
			break;
		
		case 401532197:
			iVar0 = 433;
			break;
		
		case 826974918:
			iVar0 = 434;
			break;
		
		case -676067408:
			iVar0 = 435;
			break;
		
		case 1877289089:
			iVar0 = 436;
			break;
		
		case 859380017:
			iVar0 = 437;
			break;
		
		case 233098354:
			iVar0 = 438;
			break;
		
		case 566101858:
			iVar0 = 439;
			break;
		
		case 529460830:
			iVar0 = 440;
			break;
		
		case -1833118141:
			iVar0 = 441;
			break;
		
		case 422823598:
			iVar0 = 442;
			break;
		
		case 1450358661:
			iVar0 = 443;
			break;
		
		case 741089893:
			iVar0 = 444;
			break;
		
		case 1289848370:
			iVar0 = 445;
			break;
		
		case 616166430:
			iVar0 = 446;
			break;
		
		case 1489225316:
			iVar0 = 447;
			break;
		
		case 753969632:
			iVar0 = 448;
			break;
		
		case -1182831168:
			iVar0 = 449;
			break;
		
		case 1545103753:
			iVar0 = 450;
			break;
		
		case 2090080808:
			iVar0 = 451;
			break;
		
		case 903606896:
			iVar0 = 452;
			break;
		
		case 26759391:
			iVar0 = 453;
			break;
		
		case 1651885364:
			iVar0 = 454;
			break;
		
		case 729529407:
			iVar0 = 455;
			break;
		
		case 528802126:
			iVar0 = 456;
			break;
		
		case -1468003071:
			iVar0 = 457;
			break;
		
		case 1683696787:
			iVar0 = 458;
			break;
		
		case -726859160:
			iVar0 = 459;
			break;
		
		case 1209899578:
			iVar0 = 460;
			break;
		
		case 930604285:
			iVar0 = 461;
			break;
		
		case -308584186:
			iVar0 = 462;
			break;
		
		case -64129874:
			iVar0 = 463;
			break;
		
		case -1431204514:
			iVar0 = 464;
			break;
		
		case -1133334304:
			iVar0 = 465;
			break;
		
		case -1809784771:
			iVar0 = 466;
			break;
		
		case -1576934998:
			iVar0 = 467;
			break;
		
		case -1570929684:
			iVar0 = 468;
			break;
		
		case 1976578151:
			iVar0 = 469;
			break;
		
		case -441419962:
			iVar0 = 470;
			break;
		
		case -841238543:
			iVar0 = 471;
			break;
		
		case 1644315794:
			iVar0 = 472;
			break;
		
		case 1964334039:
			iVar0 = 473;
			break;
		
		case -1168614925:
			iVar0 = 474;
			break;
		
		case -56760095:
			iVar0 = 475;
			break;
		
		case -1006202521:
			iVar0 = 476;
			break;
		
		case -1834049539:
			iVar0 = 477;
			break;
		
		case -2060372580:
			iVar0 = 478;
			break;
		
		case 1057304170:
			iVar0 = 479;
			break;
		
		case 1421572640:
			iVar0 = 480;
			break;
		
		case 481259621:
			iVar0 = 481;
			break;
		
		case 1227497670:
			iVar0 = 482;
			break;
		
		case 319276780:
			iVar0 = 483;
			break;
		
		case 2070827921:
			iVar0 = 484;
			break;
		
		case 1433629991:
			iVar0 = 485;
			break;
		
		case -1712994650:
			iVar0 = 486;
			break;
		
		case 2125094286:
			iVar0 = 487;
			break;
		
		case 712298404:
			iVar0 = 488;
			break;
		
		case 1998072324:
			iVar0 = 489;
			break;
		
		case 1249206960:
			iVar0 = 490;
			break;
		
		case -621355603:
			iVar0 = 491;
			break;
		
		case 1570835960:
			iVar0 = 492;
			break;
		
		case -1254202543:
			iVar0 = 493;
			break;
		
		case -956136061:
			iVar0 = 494;
			break;
		
		case -1925480683:
			iVar0 = 495;
			break;
		
		case 220143168:
			iVar0 = 496;
			break;
		
		case -1021851577:
			iVar0 = 497;
			break;
		
		case -773345516:
			iVar0 = 498;
			break;
		
		case 1091795205:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case -1159824040:
			iVar0 = 500;
			break;
		
		case 1448723789:
			iVar0 = 501;
			break;
		
		case -488127340:
			iVar0 = 502;
			break;
		
		case -1964967283:
			iVar0 = 503;
			break;
		
		case -1635180127:
			iVar0 = 504;
			break;
		
		case -10501563:
			iVar0 = 505;
			break;
		
		case 933419071:
			iVar0 = 506;
			break;
		
		case 1362374839:
			iVar0 = 507;
			break;
		
		case 488078687:
			iVar0 = 508;
			break;
		
		case -1869054624:
			iVar0 = 509;
			break;
		
		case -1817642831:
			iVar0 = 510;
			break;
		
		case 482472119:
			iVar0 = 511;
			break;
		
		case -1736839817:
			iVar0 = 512;
			break;
		
		case 415527077:
			iVar0 = 513;
			break;
		
		case -907440189:
			iVar0 = 514;
			break;
		
		case -2099454789:
			iVar0 = 515;
			break;
		
		case -1719543542:
			iVar0 = 516;
			break;
		
		case 1848661824:
			iVar0 = 517;
			break;
		
		case -2018029706:
			iVar0 = 518;
			break;
		
		case -717212544:
			iVar0 = 519;
			break;
		
		case -594210450:
			iVar0 = 520;
			break;
		
		case 1520437442:
			iVar0 = 521;
			break;
		
		case 374349467:
			iVar0 = 522;
			break;
		
		case 1533123503:
			iVar0 = 523;
			break;
		
		case -1832780872:
			iVar0 = 524;
			break;
		
		case 130721536:
			iVar0 = 525;
			break;
		
		case 195356001:
			iVar0 = 526;
			break;
		
		case -556915722:
			iVar0 = 527;
			break;
		
		case -1930562696:
			iVar0 = 528;
			break;
		
		case 941227127:
			iVar0 = 529;
			break;
		
		case -842699589:
			iVar0 = 530;
			break;
		
		case 1654019571:
			iVar0 = 531;
			break;
		
		case 224191803:
			iVar0 = 532;
			break;
		
		case -1996796255:
			iVar0 = 533;
			break;
		
		case -1850715440:
			iVar0 = 534;
			break;
		
		case 1603163718:
			iVar0 = 535;
			break;
		
		case 1567227108:
			iVar0 = 536;
			break;
		
		case -1630649997:
			iVar0 = 537;
			break;
		
		case -25727072:
			iVar0 = 538;
			break;
		
		case -1363418653:
			iVar0 = 539;
			break;
		
		case 1878229535:
			iVar0 = 540;
			break;
		
		case 1531050226:
			iVar0 = 541;
			break;
		
		case 1246243345:
			iVar0 = 542;
			break;
		
		case 463561930:
			iVar0 = 543;
			break;
		
		case 1431846777:
			iVar0 = 544;
			break;
		
		case -460168116:
			iVar0 = 545;
			break;
		
		case -2015343582:
			iVar0 = 546;
			break;
		
		case 2051301469:
			iVar0 = 547;
			break;
		
		case 1887452986:
			iVar0 = 548;
			break;
		
		case -1551331969:
			iVar0 = 549;
			break;
		
		case 682382693:
			iVar0 = 550;
			break;
		
		case 765481743:
			iVar0 = 551;
			break;
		
		case 1094179010:
			iVar0 = 552;
			break;
		
		case 1906582382:
			iVar0 = 553;
			break;
		
		case 1923135102:
			iVar0 = 554;
			break;
		
		case -964908188:
			iVar0 = 555;
			break;
		
		case -1145896773:
			iVar0 = 556;
			break;
		
		case -776248682:
			iVar0 = 557;
			break;
		
		case 872613482:
			iVar0 = 558;
			break;
		
		case 1049060638:
			iVar0 = 559;
			break;
		
		case -927135334:
			iVar0 = 560;
			break;
		
		case -445820043:
			iVar0 = 561;
			break;
		
		case 1610045630:
			iVar0 = 562;
			break;
		
		case -1070800165:
			iVar0 = 563;
			break;
		
		case -589592162:
			iVar0 = 564;
			break;
		
		case 1723966869:
			iVar0 = 565;
			break;
		
		case 402539085:
			iVar0 = 566;
			break;
		
		case 873283678:
			iVar0 = 567;
			break;
		
		case -883161109:
			iVar0 = 568;
			break;
		
		case -1764919154:
			iVar0 = 569;
			break;
		
		case -2050352513:
			iVar0 = 570;
			break;
		
		case 1114188021:
			iVar0 = 571;
			break;
		
		case 1798282399:
			iVar0 = 572;
			break;
		
		case 1944820428:
			iVar0 = 573;
			break;
		
		case 100210893:
			iVar0 = 574;
			break;
		
		case -1699022511:
			iVar0 = 575;
			break;
		
		case 466917406:
			iVar0 = 576;
			break;
		
		case -349746245:
			iVar0 = 577;
			break;
		
		case 715904570:
			iVar0 = 578;
			break;
		
		case 281777035:
			iVar0 = 579;
			break;
		
		case 1511283406:
			iVar0 = 580;
			break;
		
		case -241337647:
			iVar0 = 581;
			break;
		
		case 748393780:
			iVar0 = 582;
			break;
		
		case 709511536:
			iVar0 = 583;
			break;
		
		case -652535466:
			iVar0 = 584;
			break;
		
		case -1148900842:
			iVar0 = 585;
			break;
		
		case -271863310:
			iVar0 = 586;
			break;
		
		case 35654857:
			iVar0 = 587;
			break;
		
		case 1894813304:
			iVar0 = 588;
			break;
		
		case 1184660438:
			iVar0 = 589;
			break;
		
		case -1461750963:
			iVar0 = 590;
			break;
		
		case 769964545:
			iVar0 = 591;
			break;
		
		case 1424500982:
			iVar0 = 592;
			break;
		
		case -1810785185:
			iVar0 = 593;
			break;
		
		case 837990279:
			iVar0 = 594;
			break;
		
		case -1357788003:
			iVar0 = 595;
			break;
		
		case -8210327:
			iVar0 = 596;
			break;
		
		case 1186553524:
			iVar0 = 597;
			break;
		
		case 1174934203:
			iVar0 = 598;
			break;
		
		case -984449089:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case -49570837:
			iVar0 = 600;
			break;
		
		case -1680371785:
			iVar0 = 601;
			break;
		
		case -1850912390:
			iVar0 = 602;
			break;
		
		case -1740038087:
			iVar0 = 603;
			break;
		
		case -619541947:
			iVar0 = 604;
			break;
		
		case 294240494:
			iVar0 = 605;
			break;
		
		case -765542196:
			iVar0 = 606;
			break;
		
		case -1420662645:
			iVar0 = 607;
			break;
		
		case 331918356:
			iVar0 = 608;
			break;
		
		case 204953755:
			iVar0 = 609;
			break;
		
		case 1764172461:
			iVar0 = 610;
			break;
		
		case 1462870109:
			iVar0 = 611;
			break;
		
		case -2071014467:
			iVar0 = 612;
			break;
		
		case 478439238:
			iVar0 = 613;
			break;
		
		case 796489219:
			iVar0 = 614;
			break;
		
		case 843279688:
			iVar0 = 615;
			break;
		
		case 1752551314:
			iVar0 = 616;
			break;
		
		case 735155845:
			iVar0 = 617;
			break;
		
		case 1863251462:
			iVar0 = 618;
			break;
		
		case -2142058763:
			iVar0 = 619;
			break;
		
		case -207591105:
			iVar0 = 620;
			break;
		
		case -932813887:
			iVar0 = 621;
			break;
		
		case -313503199:
			iVar0 = 622;
			break;
		
		case 718936417:
			iVar0 = 623;
			break;
		
		case -1107649605:
			iVar0 = 624;
			break;
		
		case 39090475:
			iVar0 = 625;
			break;
		
		case 1628251208:
			iVar0 = 626;
			break;
		
		case -311245907:
			iVar0 = 627;
			break;
		
		case -942031335:
			iVar0 = 628;
			break;
		
		case -1285040537:
			iVar0 = 629;
			break;
		
		case -606706891:
			iVar0 = 630;
			break;
		
		case -1719095858:
			iVar0 = 631;
			break;
		
		case 1725502681:
			iVar0 = 632;
			break;
		
		case 609583888:
			iVar0 = 633;
			break;
		
		case -1172383155:
			iVar0 = 634;
			break;
		
		case -3492404:
			iVar0 = 635;
			break;
		
		case -1006004645:
			iVar0 = 636;
			break;
		
		case -1937311482:
			iVar0 = 637;
			break;
		
		case -2065604094:
			iVar0 = 638;
			break;
		
		case 2028818254:
			iVar0 = 639;
			break;
		
		case 1624012067:
			iVar0 = 640;
			break;
		
		case -1877817141:
			iVar0 = 641;
			break;
		
		case -911576192:
			iVar0 = 642;
			break;
		
		case -2038013276:
			iVar0 = 643;
			break;
		
		case -901986542:
			iVar0 = 644;
			break;
		
		case 1792492176:
			iVar0 = 645;
			break;
		
		case -86485329:
			iVar0 = 646;
			break;
		
		case -1083434268:
			iVar0 = 647;
			break;
		
		case 613606704:
			iVar0 = 648;
			break;
		
		case -394853815:
			iVar0 = 649;
			break;
		
		case -1103127620:
			iVar0 = 650;
			break;
		
		case -1565650506:
			iVar0 = 651;
			break;
		
		case 1845793118:
			iVar0 = 652;
			break;
		
		case 105835401:
			iVar0 = 653;
			break;
		
		case 874268443:
			iVar0 = 654;
			break;
		
		case 2088424900:
			iVar0 = 655;
			break;
		
		case -786732051:
			iVar0 = 656;
			break;
		
		case 2054090970:
			iVar0 = 657;
			break;
		
		case 1878368697:
			iVar0 = 658;
			break;
		
		case 569662133:
			iVar0 = 659;
			break;
		
		case -792802958:
			iVar0 = 660;
			break;
		
		case 2006001399:
			iVar0 = 661;
			break;
		
		case 1785762805:
			iVar0 = 662;
			break;
		
		case 737220320:
			iVar0 = 663;
			break;
		
		case 1396060544:
			iVar0 = 664;
			break;
		
		case -1964728736:
			iVar0 = 665;
			break;
		
		case 1593302778:
			iVar0 = 666;
			break;
		
		case 84849272:
			iVar0 = 667;
			break;
		
		case -402776165:
			iVar0 = 668;
			break;
		
		case -221660734:
			iVar0 = 669;
			break;
		
		case 1648112645:
			iVar0 = 670;
			break;
		
		case 2066668749:
			iVar0 = 671;
			break;
		
		case -4424163:
			iVar0 = 672;
			break;
		
		case -173288591:
			iVar0 = 673;
			break;
		
		case 253771760:
			iVar0 = 674;
			break;
		
		case -1431574022:
			iVar0 = 675;
			break;
		
		case 959314664:
			iVar0 = 676;
			break;
		
		case 1670479428:
			iVar0 = 677;
			break;
		
		case 1779534675:
			iVar0 = 678;
			break;
		
		case -1268204471:
			iVar0 = 679;
			break;
		
		case -1937668252:
			iVar0 = 680;
			break;
		
		case -192802570:
			iVar0 = 681;
			break;
		
		case 1200380295:
			iVar0 = 682;
			break;
		
		case -644503216:
			iVar0 = 683;
			break;
		
		case 496410473:
			iVar0 = 684;
			break;
		
		case 462780886:
			iVar0 = 685;
			break;
		
		case 211198653:
			iVar0 = 686;
			break;
		
		case -504012739:
			iVar0 = 687;
			break;
		
		case 34276608:
			iVar0 = 688;
			break;
		
		case -2088223199:
			iVar0 = 689;
			break;
		
		case 2056773549:
			iVar0 = 690;
			break;
		
		case 962023066:
			iVar0 = 691;
			break;
		
		case 893288510:
			iVar0 = 692;
			break;
		
		case 1963590204:
			iVar0 = 693;
			break;
		
		case 919272855:
			iVar0 = 694;
			break;
		
		case 413754974:
			iVar0 = 695;
			break;
		
		case -1862916472:
			iVar0 = 696;
			break;
		
		case -1184732039:
			iVar0 = 697;
			break;
		
		case -143503455:
			iVar0 = 698;
			break;
		
		case -1119221482:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case -1642199958:
			iVar0 = 700;
			break;
		
		case 133895676:
			iVar0 = 701;
			break;
		
		case -2040228203:
			iVar0 = 702;
			break;
		
		case -783643150:
			iVar0 = 703;
			break;
		
		case 291473683:
			iVar0 = 704;
			break;
		
		case -545474062:
			iVar0 = 705;
			break;
		
		case 1013405919:
			iVar0 = 706;
			break;
		
		case 673922718:
			iVar0 = 707;
			break;
		
		case -1707377523:
			iVar0 = 708;
			break;
		
		case 1029334921:
			iVar0 = 709;
			break;
		
		case -534855486:
			iVar0 = 710;
			break;
		
		case -516333262:
			iVar0 = 711;
			break;
		
		case 485135095:
			iVar0 = 712;
			break;
		
		case 1713551997:
			iVar0 = 713;
			break;
		
		case -1490658501:
			iVar0 = 714;
			break;
		
		case -1735635238:
			iVar0 = 715;
			break;
		
		case 1931303956:
			iVar0 = 716;
			break;
		
		case -1931617488:
			iVar0 = 717;
			break;
		
		case -1726332301:
			iVar0 = 718;
			break;
		
		case -1382922530:
			iVar0 = 719;
			break;
		
		case 452778672:
			iVar0 = 720;
			break;
		
		case -1776790350:
			iVar0 = 721;
			break;
		
		case -1988057295:
			iVar0 = 722;
			break;
		
		case 816707921:
			iVar0 = 723;
			break;
		
		case 744446190:
			iVar0 = 724;
			break;
		
		case 917772807:
			iVar0 = 725;
			break;
		
		case -292922355:
			iVar0 = 726;
			break;
		
		case -1495432685:
			iVar0 = 727;
			break;
		
		case -811147717:
			iVar0 = 728;
			break;
		
		case -851111149:
			iVar0 = 729;
			break;
		
		case 1404205290:
			iVar0 = 730;
			break;
		
		case -1365916084:
			iVar0 = 731;
			break;
		
		case -422913369:
			iVar0 = 732;
			break;
		
		case -892793487:
			iVar0 = 733;
			break;
		
		case -1795208156:
			iVar0 = 734;
			break;
		
		case 573261452:
			iVar0 = 735;
			break;
		
		case 2111374302:
			iVar0 = 736;
			break;
		
		case 1832021545:
			iVar0 = 737;
			break;
		
		case 209273925:
			iVar0 = 738;
			break;
		
		case -54254731:
			iVar0 = 739;
			break;
		
		case 112211142:
			iVar0 = 740;
			break;
		
		case 1306824915:
			iVar0 = 741;
			break;
		
		case -1841627189:
			iVar0 = 742;
			break;
		
		case -1814153457:
			iVar0 = 743;
			break;
		
		case -46260381:
			iVar0 = 744;
			break;
		
		case -303409019:
			iVar0 = 745;
			break;
		
		case -1521133289:
			iVar0 = 746;
			break;
		
		case -648193607:
			iVar0 = 747;
			break;
		
		case 820296726:
			iVar0 = 748;
			break;
		
		case 2025651359:
			iVar0 = 749;
			break;
		
		case 1082588124:
			iVar0 = 750;
			break;
		
		case -457752320:
			iVar0 = 751;
			break;
		
		case 1173525590:
			iVar0 = 752;
			break;
		
		case -2123485438:
			iVar0 = 753;
			break;
		
		case -815706791:
			iVar0 = 754;
			break;
		
		case -1318802347:
			iVar0 = 755;
			break;
		
		case 306110040:
			iVar0 = 756;
			break;
		
		case 1828101251:
			iVar0 = 757;
			break;
		
		case -919314748:
			iVar0 = 758;
			break;
		
		case 1971111649:
			iVar0 = 759;
			break;
		
		case -1477471726:
			iVar0 = 760;
			break;
		
		case -650926235:
			iVar0 = 761;
			break;
		
		case -618318124:
			iVar0 = 762;
			break;
		
		case -1820938681:
			iVar0 = 763;
			break;
		
		case -1532633409:
			iVar0 = 764;
			break;
		
		case 1605199232:
			iVar0 = 765;
			break;
		
		case 113768799:
			iVar0 = 766;
			break;
		
		case -267657422:
			iVar0 = 767;
			break;
		
		case -543540488:
			iVar0 = 768;
			break;
		
		case 146774245:
			iVar0 = 769;
			break;
		
		case -439062355:
			iVar0 = 770;
			break;
		
		case -187785912:
			iVar0 = 771;
			break;
		
		case 654127400:
			iVar0 = 772;
			break;
		
		case -2031558195:
			iVar0 = 773;
			break;
		
		case -1071879097:
			iVar0 = 774;
			break;
		
		case 2048147896:
			iVar0 = 775;
			break;
		
		case -1545551839:
			iVar0 = 776;
			break;
		
		case -1811149087:
			iVar0 = 777;
			break;
		
		case -256036523:
			iVar0 = 778;
			break;
		
		case -247186222:
			iVar0 = 779;
			break;
		
		case -355946577:
			iVar0 = 780;
			break;
		
		case 181399885:
			iVar0 = 781;
			break;
		
		case -1219430710:
			iVar0 = 782;
			break;
		
		case 928781515:
			iVar0 = 783;
			break;
		
		case -1757440846:
			iVar0 = 784;
			break;
		
		case -887356639:
			iVar0 = 785;
			break;
		
		case -162415909:
			iVar0 = 786;
			break;
		
		case -1822176783:
			iVar0 = 787;
			break;
		
		case -131581709:
			iVar0 = 788;
			break;
		
		case -969415240:
			iVar0 = 789;
			break;
		
		case 1482211094:
			iVar0 = 790;
			break;
		
		case 1942093304:
			iVar0 = 791;
			break;
		
		case 1376322385:
			iVar0 = 792;
			break;
		
		case 1678423640:
			iVar0 = 793;
			break;
		
		case 1321477520:
			iVar0 = 794;
			break;
		
		case -670835215:
			iVar0 = 795;
			break;
		
		case -32315658:
			iVar0 = 796;
			break;
		
		case -715501640:
			iVar0 = 797;
			break;
		
		case 812138662:
			iVar0 = 798;
			break;
		
		case -1950509905:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 1850969667:
			iVar0 = 800;
			break;
		
		case 997671095:
			iVar0 = 801;
			break;
		
		case -1526467268:
			iVar0 = 802;
			break;
		
		case -881852779:
			iVar0 = 803;
			break;
		
		case -570992218:
			iVar0 = 804;
			break;
		
		case -1075500139:
			iVar0 = 805;
			break;
		
		case -791689054:
			iVar0 = 806;
			break;
		
		case 699980662:
			iVar0 = 807;
			break;
		
		case -583230088:
			iVar0 = 808;
			break;
		
		case 1922201848:
			iVar0 = 809;
			break;
		
		case -767702908:
			iVar0 = 810;
			break;
		
		case 1979813112:
			iVar0 = 811;
			break;
		
		case -2056272592:
			iVar0 = 812;
			break;
		
		case 909368414:
			iVar0 = 813;
			break;
		
		case -940321245:
			iVar0 = 814;
			break;
		
		case -2018521849:
			iVar0 = 815;
			break;
		
		case 1113883376:
			iVar0 = 816;
			break;
		
		case 296940654:
			iVar0 = 817;
			break;
		
		case 388715677:
			iVar0 = 818;
			break;
		
		case 2121965551:
			iVar0 = 819;
			break;
		
		case -1233846590:
			iVar0 = 820;
			break;
		
		case -1448569917:
			iVar0 = 821;
			break;
		
		case 257911811:
			iVar0 = 822;
			break;
		
		case 1945550351:
			iVar0 = 823;
			break;
		
		case 1745422723:
			iVar0 = 824;
			break;
		
		case 1031130678:
			iVar0 = 825;
			break;
		
		case -416717212:
			iVar0 = 826;
			break;
		
		case -1228169566:
			iVar0 = 827;
			break;
		
		case 1472355612:
			iVar0 = 828;
			break;
		
		case 19369937:
			iVar0 = 829;
			break;
		
		case 662247816:
			iVar0 = 830;
			break;
		
		case -1572191963:
			iVar0 = 831;
			break;
		
		case -791841628:
			iVar0 = 832;
			break;
		
		case -1531355431:
			iVar0 = 833;
			break;
		
		case 2040691909:
			iVar0 = 834;
			break;
		
		case -2114317157:
			iVar0 = 835;
			break;
		
		case -2085191627:
			iVar0 = 836;
			break;
		
		case 946610385:
			iVar0 = 837;
			break;
		
		case 1384666834:
			iVar0 = 838;
			break;
		
		case -1850499077:
			iVar0 = 839;
			break;
		
		case 1599340952:
			iVar0 = 840;
			break;
		
		case -911004337:
			iVar0 = 841;
			break;
		
		case 1896039464:
			iVar0 = 842;
			break;
		
		case 1588676114:
			iVar0 = 843;
			break;
		
		case -861144593:
			iVar0 = 844;
			break;
		
		case -29907878:
			iVar0 = 845;
			break;
		
		case 1886796781:
			iVar0 = 846;
			break;
		
		case -862474356:
			iVar0 = 847;
			break;
		
		case 1495413374:
			iVar0 = 848;
			break;
		
		case 370906922:
			iVar0 = 849;
			break;
		
		case 531742637:
			iVar0 = 850;
			break;
		
		case -225805790:
			iVar0 = 851;
			break;
		
		case -624586952:
			iVar0 = 852;
			break;
		
		case 915144902:
			iVar0 = 853;
			break;
		
		case -242746043:
			iVar0 = 854;
			break;
		
		case 1620048835:
			iVar0 = 855;
			break;
		
		case -1097603268:
			iVar0 = 856;
			break;
		
		case -660672539:
			iVar0 = 857;
			break;
		
		case -4642188:
			iVar0 = 858;
			break;
		
		case 1855977539:
			iVar0 = 859;
			break;
		
		case 1537270222:
			iVar0 = 860;
			break;
		
		case -1226569770:
			iVar0 = 861;
			break;
		
		case 1641457991:
			iVar0 = 862;
			break;
		
		case 1366312361:
			iVar0 = 863;
			break;
		
		case -1557113221:
			iVar0 = 864;
			break;
		
		case -1690570414:
			iVar0 = 865;
			break;
		
		case -507204255:
			iVar0 = 866;
			break;
		
		case -1804897639:
			iVar0 = 867;
			break;
		
		case -1375233423:
			iVar0 = 868;
			break;
		
		case 490066935:
			iVar0 = 869;
			break;
		
		case 1193725595:
			iVar0 = 870;
			break;
		
		case 628493116:
			iVar0 = 871;
			break;
		
		case -2112155518:
			iVar0 = 872;
			break;
		
		case 1511337702:
			iVar0 = 873;
			break;
		
		case -627666528:
			iVar0 = 874;
			break;
		
		case 768324163:
			iVar0 = 875;
			break;
		
		case -1448761813:
			iVar0 = 876;
			break;
		
		case 868551738:
			iVar0 = 877;
			break;
		
		case -1021262861:
			iVar0 = 878;
			break;
		
		case -264447931:
			iVar0 = 879;
			break;
		
		case -652127435:
			iVar0 = 880;
			break;
		
		case -610014599:
			iVar0 = 881;
			break;
		
		case 848073973:
			iVar0 = 882;
			break;
		
		case 1561087717:
			iVar0 = 883;
			break;
		
		case 2067249852:
			iVar0 = 884;
			break;
		
		case 1963924398:
			iVar0 = 885;
			break;
		
		case -898550276:
			iVar0 = 886;
			break;
		
		case -1074178691:
			iVar0 = 887;
			break;
		
		case -368616744:
			iVar0 = 888;
			break;
		
		case -78566501:
			iVar0 = 889;
			break;
		
		case 1623651387:
			iVar0 = 890;
			break;
		
		case -1229980240:
			iVar0 = 891;
			break;
		
		case -1558321426:
			iVar0 = 892;
			break;
		
		case 518190097:
			iVar0 = 893;
			break;
		
		case -1996043294:
			iVar0 = 894;
			break;
		
		case 1720844546:
			iVar0 = 895;
			break;
		
		case -20709979:
			iVar0 = 896;
			break;
		
		case -1617383579:
			iVar0 = 897;
			break;
		
		case -525135065:
			iVar0 = 898;
			break;
		
		case 1796039054:
			iVar0 = 899;
			break;
	}
	switch (iParam0)
	{
		case 1250030109:
			iVar0 = 900;
			break;
		
		case -1195876295:
			iVar0 = 901;
			break;
		
		case 672890092:
			iVar0 = 902;
			break;
		
		case 413298313:
			iVar0 = 903;
			break;
		
		case 1157302328:
			iVar0 = 904;
			break;
		
		case -1564457471:
			iVar0 = 905;
			break;
		
		case 1152621988:
			iVar0 = 906;
			break;
		
		case -1961291349:
			iVar0 = 907;
			break;
		
		case -1912591074:
			iVar0 = 908;
			break;
		
		case 1049766626:
			iVar0 = 909;
			break;
		
		case 450544862:
			iVar0 = 910;
			break;
		
		case -1015392647:
			iVar0 = 911;
			break;
		
		case 1742471685:
			iVar0 = 912;
			break;
		
		case 408116861:
			iVar0 = 913;
			break;
		
		case -1855327598:
			iVar0 = 914;
			break;
		
		case 1578402908:
			iVar0 = 915;
			break;
		
		case -1423366674:
			iVar0 = 916;
			break;
		
		case 1611107047:
			iVar0 = 917;
			break;
		
		case 742927305:
			iVar0 = 918;
			break;
		
		case -1578833665:
			iVar0 = 919;
			break;
		
		case 773738667:
			iVar0 = 920;
			break;
		
		case 213007702:
			iVar0 = 921;
			break;
		
		case 432208089:
			iVar0 = 922;
			break;
		
		case 35817542:
			iVar0 = 923;
			break;
		
		case -1786080093:
			iVar0 = 924;
			break;
		
		case -215923306:
			iVar0 = 925;
			break;
		
		case 1275581512:
			iVar0 = 926;
			break;
		
		case -1214009019:
			iVar0 = 927;
			break;
		
		case 1639713863:
			iVar0 = 928;
			break;
		
		case 529311368:
			iVar0 = 929;
			break;
		
		case -1033895864:
			iVar0 = 930;
			break;
		
		case 924043677:
			iVar0 = 931;
			break;
		
		case -574749266:
			iVar0 = 932;
			break;
		
		case 519463901:
			iVar0 = 933;
			break;
		
		case -643353187:
			iVar0 = 934;
			break;
		
		case 1571011017:
			iVar0 = 935;
			break;
		
		case -94540936:
			iVar0 = 936;
			break;
		
		case 1884218662:
			iVar0 = 937;
			break;
		
		case -345261869:
			iVar0 = 938;
			break;
		
		case -1022859058:
			iVar0 = 939;
			break;
		
		case -1786322924:
			iVar0 = 940;
			break;
		
		case 2085269022:
			iVar0 = 941;
			break;
		
		case 1511882653:
			iVar0 = 942;
			break;
		
		case -506986385:
			iVar0 = 943;
			break;
		
		case -874081588:
			iVar0 = 944;
			break;
		
		case -2043405937:
			iVar0 = 945;
			break;
		
		case 59038842:
			iVar0 = 946;
			break;
		
		case 1101237057:
			iVar0 = 947;
			break;
		
		case -657535677:
			iVar0 = 948;
			break;
		
		case -2093585025:
			iVar0 = 949;
			break;
		
		case 908383468:
			iVar0 = 950;
			break;
		
		case -1608760399:
			iVar0 = 951;
			break;
		
		case 1373660540:
			iVar0 = 952;
			break;
		
		case 1854316713:
			iVar0 = 953;
			break;
		
		case -119951196:
			iVar0 = 954;
			break;
		
		case -1649842228:
			iVar0 = 955;
			break;
		
		case -1640764925:
			iVar0 = 956;
			break;
		
		case 1787927716:
			iVar0 = 957;
			break;
		
		case 104283481:
			iVar0 = 958;
			break;
		
		case 378263500:
			iVar0 = 959;
			break;
		
		case -1061215309:
			iVar0 = 960;
			break;
		
		case 1034166199:
			iVar0 = 961;
			break;
		
		case 1828057305:
			iVar0 = 962;
			break;
		
		case -1486297381:
			iVar0 = 963;
			break;
		
		case -540767159:
			iVar0 = 964;
			break;
		
		case -1235960692:
			iVar0 = 965;
			break;
		
		case -329316995:
			iVar0 = 966;
			break;
		
		case -581880272:
			iVar0 = 967;
			break;
		
		case -1807345434:
			iVar0 = 968;
			break;
		
		case -1018409435:
			iVar0 = 969;
			break;
		
		case -136011898:
			iVar0 = 970;
			break;
		
		case -2069494727:
			iVar0 = 971;
			break;
		
		case -642887005:
			iVar0 = 972;
			break;
		
		case -1810837638:
			iVar0 = 973;
			break;
		
		case 1034484576:
			iVar0 = 974;
			break;
		
		case 1979445594:
			iVar0 = 975;
			break;
		
		case -1533877336:
			iVar0 = 976;
			break;
		
		case -892254987:
			iVar0 = 977;
			break;
		
		case -654222260:
			iVar0 = 978;
			break;
		
		case -152607027:
			iVar0 = 979;
			break;
		
		case 1211414106:
			iVar0 = 980;
			break;
		
		case -1178363901:
			iVar0 = 981;
			break;
		
		case -170830010:
			iVar0 = 982;
			break;
		
		case 1571032538:
			iVar0 = 983;
			break;
		
		case -975101512:
			iVar0 = 984;
			break;
		
		case 1710494656:
			iVar0 = 985;
			break;
		
		case 1298803936:
			iVar0 = 986;
			break;
		
		case 669174749:
			iVar0 = 987;
			break;
		
		case 1344478544:
			iVar0 = 988;
			break;
		
		case -737204659:
			iVar0 = 989;
			break;
		
		case 1519364050:
			iVar0 = 990;
			break;
		
		case -1470963239:
			iVar0 = 991;
			break;
		
		case 1768755677:
			iVar0 = 992;
			break;
		
		case -428330966:
			iVar0 = 993;
			break;
		
		case -532155133:
			iVar0 = 994;
			break;
		
		case 717197242:
			iVar0 = 995;
			break;
		
		case -1103242747:
			iVar0 = 996;
			break;
		
		case 95120204:
			iVar0 = 997;
			break;
		
		case 1478647927:
			iVar0 = 998;
			break;
		
		case -1996321684:
			iVar0 = 999;
			break;
	}
	switch (iParam0)
	{
		case -1232815296:
			iVar0 = 1000;
			break;
		
		case -942600475:
			iVar0 = 1001;
			break;
		
		case -157448893:
			iVar0 = 1002;
			break;
		
		case 1273306186:
			iVar0 = 1003;
			break;
		
		case -393833589:
			iVar0 = 1004;
			break;
		
		case 1108909619:
			iVar0 = 1005;
			break;
		
		case -1547493052:
			iVar0 = 1006;
			break;
		
		case -558224274:
			iVar0 = 1007;
			break;
		
		case 2039104212:
			iVar0 = 1008;
			break;
		
		case 269443194:
			iVar0 = 1009;
			break;
		
		case -1335458450:
			iVar0 = 1010;
			break;
		
		case -538608496:
			iVar0 = 1011;
			break;
		
		case 760412020:
			iVar0 = 1012;
			break;
		
		case -1423594652:
			iVar0 = 1013;
			break;
		
		case -749306822:
			iVar0 = 1014;
			break;
		
		case -1357502125:
			iVar0 = 1015;
			break;
		
		case -1697184517:
			iVar0 = 1016;
			break;
		
		case 2069079025:
			iVar0 = 1017;
			break;
		
		case 165790469:
			iVar0 = 1018;
			break;
		
		case -1996334680:
			iVar0 = 1019;
			break;
		
		case -1718451770:
			iVar0 = 1020;
			break;
		
		case -1351890796:
			iVar0 = 1021;
			break;
		
		case -708316325:
			iVar0 = 1022;
			break;
		
		case 343427644:
			iVar0 = 1023;
			break;
		
		case 997385641:
			iVar0 = 1024;
			break;
		
		case 829594522:
			iVar0 = 1025;
			break;
		
		case -755577025:
			iVar0 = 1026;
			break;
		
		case 1130349640:
			iVar0 = 1027;
			break;
		
		case 235241707:
			iVar0 = 1028;
			break;
		
		case 177991867:
			iVar0 = 1029;
			break;
		
		case 632622256:
			iVar0 = 1030;
			break;
		
		case 1897109337:
			iVar0 = 1031;
			break;
		
		case -1277167165:
			iVar0 = 1032;
			break;
		
		case -2040688458:
			iVar0 = 1033;
			break;
		
		case 2053577657:
			iVar0 = 1034;
			break;
		
		case 1475157023:
			iVar0 = 1035;
			break;
		
		case -599666460:
			iVar0 = 1036;
			break;
		
		case 2137077332:
			iVar0 = 1037;
			break;
		
		case -563836962:
			iVar0 = 1038;
			break;
		
		case 1757650301:
			iVar0 = 1039;
			break;
		
		case -1926213636:
			iVar0 = 1040;
			break;
		
		case 636926663:
			iVar0 = 1041;
			break;
		
		case 1864088729:
			iVar0 = 1042;
			break;
		
		case 373164468:
			iVar0 = 1043;
			break;
		
		case -1181875417:
			iVar0 = 1044;
			break;
		
		case 2125316672:
			iVar0 = 1045;
			break;
		
		case 1505585597:
			iVar0 = 1046;
			break;
		
		case -1563329786:
			iVar0 = 1047;
			break;
		
		case -546372951:
			iVar0 = 1048;
			break;
		
		case -276745962:
			iVar0 = 1049;
			break;
		
		case 98665018:
			iVar0 = 1050;
			break;
		
		case 1968556432:
			iVar0 = 1051;
			break;
		
		case -1559144195:
			iVar0 = 1052;
			break;
		
		case -1332960577:
			iVar0 = 1053;
			break;
		
		case 652305392:
			iVar0 = 1054;
			break;
		
		case 1894755292:
			iVar0 = 1055;
			break;
		
		case 1126903931:
			iVar0 = 1056;
			break;
		
		case -914706967:
			iVar0 = 1057;
			break;
		
		case -214853054:
			iVar0 = 1058;
			break;
		
		case -346130454:
			iVar0 = 1059;
			break;
		
		case 1352224647:
			iVar0 = 1060;
			break;
		
		case -1388894295:
			iVar0 = 1061;
			break;
		
		case 1928040960:
			iVar0 = 1062;
			break;
		
		case -721653798:
			iVar0 = 1063;
			break;
		
		case 1424803201:
			iVar0 = 1064;
			break;
		
		case 2024824081:
			iVar0 = 1065;
			break;
		
		case -822973907:
			iVar0 = 1066;
			break;
		
		case 1857392409:
			iVar0 = 1067;
			break;
		
		case -978468741:
			iVar0 = 1068;
			break;
		
		case -811517193:
			iVar0 = 1069;
			break;
		
		case -725236090:
			iVar0 = 1070;
			break;
		
		case -485989621:
			iVar0 = 1071;
			break;
		
		case 711356870:
			iVar0 = 1072;
			break;
		
		case 111487556:
			iVar0 = 1073;
			break;
		
		case 588276502:
			iVar0 = 1074;
			break;
		
		case -3335024:
			iVar0 = 1075;
			break;
		
		case 1184770609:
			iVar0 = 1076;
			break;
		
		case 359647189:
			iVar0 = 1077;
			break;
		
		case 1545327916:
			iVar0 = 1078;
			break;
		
		case 954502846:
			iVar0 = 1079;
			break;
		
		case -893208491:
			iVar0 = 1080;
			break;
		
		case -1661674318:
			iVar0 = 1081;
			break;
		
		case -1624645348:
			iVar0 = 1082;
			break;
		
		case 620358850:
			iVar0 = 1083;
			break;
		
		case 122204512:
			iVar0 = 1084;
			break;
		
		case -645147161:
			iVar0 = 1085;
			break;
		
		case -375556598:
			iVar0 = 1086;
			break;
		
		case 1841102407:
			iVar0 = 1087;
			break;
		
		case 831620593:
			iVar0 = 1088;
			break;
		
		case 1129884031:
			iVar0 = 1089;
			break;
		
		case 2092301321:
			iVar0 = 1090;
			break;
		
		case 580667351:
			iVar0 = 1091;
			break;
		
		case 1538832911:
			iVar0 = 1092;
			break;
		
		case -1355259635:
			iVar0 = 1093;
			break;
		
		case -1583168030:
			iVar0 = 1094;
			break;
		
		case -1831032746:
			iVar0 = 1095;
			break;
		
		case -2060448515:
			iVar0 = 1096;
			break;
		
		case -50365286:
			iVar0 = 1097;
			break;
		
		case -364095692:
			iVar0 = 1098;
			break;
		
		case -606979520:
			iVar0 = 1099;
			break;
	}
	switch (iParam0)
	{
		case -1057062007:
			iVar0 = 1100;
			break;
		
		case -1253872621:
			iVar0 = 1101;
			break;
		
		case -1525625938:
			iVar0 = 1102;
			break;
		
		case 603801989:
			iVar0 = 1103;
			break;
		
		case 432289043:
			iVar0 = 1104;
			break;
		
		case 176592536:
			iVar0 = 1105;
			break;
		
		case -126291331:
			iVar0 = 1106;
			break;
		
		case 2093415191:
			iVar0 = 1107;
			break;
		
		case 1383966341:
			iVar0 = 1108;
			break;
		
		case 1061027846:
			iVar0 = 1109;
			break;
		
		case 610754913:
			iVar0 = 1110;
			break;
		
		case 1856271834:
			iVar0 = 1111;
			break;
		
		case 151235226:
			iVar0 = 1112;
			break;
		
		case 1292317344:
			iVar0 = 1113;
			break;
		
		case 1592055387:
			iVar0 = 1114;
			break;
		
		case 1048452439:
			iVar0 = 1115;
			break;
		
		case 211084:
			iVar0 = 1116;
			break;
		
		case -1009472289:
			iVar0 = 1117;
			break;
		
		case 156013410:
			iVar0 = 1118;
			break;
		
		case 2061696383:
			iVar0 = 1119;
			break;
		
		case -1462570018:
			iVar0 = 1120;
			break;
		
		case -1873628095:
			iVar0 = 1121;
			break;
		
		case -770265298:
			iVar0 = 1122;
			break;
		
		case 820753849:
			iVar0 = 1123;
			break;
		
		case -914435716:
			iVar0 = 1124;
			break;
		
		case -1170154756:
			iVar0 = 1125;
			break;
		
		case -880824798:
			iVar0 = 1126;
			break;
		
		case -249693258:
			iVar0 = 1127;
			break;
		
		case 1489278440:
			iVar0 = 1128;
			break;
		
		case -1512326404:
			iVar0 = 1129;
			break;
		
		case -1378330859:
			iVar0 = 1130;
			break;
		
		case 1459074393:
			iVar0 = 1131;
			break;
		
		case 1273491948:
			iVar0 = 1132;
			break;
		
		case -1406186689:
			iVar0 = 1133;
			break;
		
		case 2124190452:
			iVar0 = 1134;
			break;
		
		case -1740822263:
			iVar0 = 1135;
			break;
		
		case -969884576:
			iVar0 = 1136;
			break;
		
		case 335386038:
			iVar0 = 1137;
			break;
		
		case -1150178569:
			iVar0 = 1138;
			break;
		
		case 1521235675:
			iVar0 = 1139;
			break;
		
		case 1623611883:
			iVar0 = 1140;
			break;
		
		case 1329111213:
			iVar0 = 1141;
			break;
		
		case -1537321295:
			iVar0 = 1142;
			break;
		
		case -1628166034:
			iVar0 = 1143;
			break;
		
		case -132693345:
			iVar0 = 1144;
			break;
		
		case 874964805:
			iVar0 = 1145;
			break;
		
		case -1512427408:
			iVar0 = 1146;
			break;
		
		case 923836315:
			iVar0 = 1147;
			break;
		
		case -1580952699:
			iVar0 = 1148;
			break;
		
		case 1152609891:
			iVar0 = 1149;
			break;
		
		case -1637725121:
			iVar0 = 1150;
			break;
		
		case 1760547084:
			iVar0 = 1151;
			break;
		
		case -2138723176:
			iVar0 = 1152;
			break;
		
		case 1730799330:
			iVar0 = 1153;
			break;
		
		case -280222071:
			iVar0 = 1154;
			break;
		
		case 2067499855:
			iVar0 = 1155;
			break;
		
		case -1635988673:
			iVar0 = 1156;
			break;
		
		case -1849502305:
			iVar0 = 1157;
			break;
		
		case -1413356029:
			iVar0 = 1158;
			break;
		
		case -2062177771:
			iVar0 = 1159;
			break;
		
		case 2077453849:
			iVar0 = 1160;
			break;
		
		case -965460704:
			iVar0 = 1161;
			break;
		
		case -1917254263:
			iVar0 = 1162;
			break;
		
		case 1777785544:
			iVar0 = 1163;
			break;
		
		case 1505693935:
			iVar0 = 1164;
			break;
		
		case -1551981580:
			iVar0 = 1165;
			break;
		
		case 1572497951:
			iVar0 = 1166;
			break;
		
		case 585832887:
			iVar0 = 1167;
			break;
		
		case -498335731:
			iVar0 = 1168;
			break;
		
		case -137061435:
			iVar0 = 1169;
			break;
		
		case 1921321590:
			iVar0 = 1170;
			break;
		
		case -822177429:
			iVar0 = 1171;
			break;
		
		case -531271155:
			iVar0 = 1172;
			break;
		
		case 412829693:
			iVar0 = 1173;
			break;
		
		case -1411787934:
			iVar0 = 1174;
			break;
		
		case 653645139:
			iVar0 = 1175;
			break;
		
		case 1848048195:
			iVar0 = 1176;
			break;
		
		case -781400442:
			iVar0 = 1177;
			break;
		
		case 1507919906:
			iVar0 = 1178;
			break;
		
		case -1381102054:
			iVar0 = 1179;
			break;
		
		case 565394453:
			iVar0 = 1180;
			break;
		
		case -1265443416:
			iVar0 = 1181;
			break;
		
		case 1888753218:
			iVar0 = 1182;
			break;
		
		case -552467991:
			iVar0 = 1183;
			break;
		
		case -1655919948:
			iVar0 = 1184;
			break;
		
		case -917106601:
			iVar0 = 1185;
			break;
		
		case 1595446967:
			iVar0 = 1186;
			break;
		
		case -530593323:
			iVar0 = 1187;
			break;
		
		case 561619447:
			iVar0 = 1188;
			break;
		
		case -1913656173:
			iVar0 = 1189;
			break;
		
		case -1766901922:
			iVar0 = 1190;
			break;
		
		case 2091781849:
			iVar0 = 1191;
			break;
		
		case 1824588341:
			iVar0 = 1192;
			break;
		
		case 242597641:
			iVar0 = 1193;
			break;
		
		case 566785691:
			iVar0 = 1194;
			break;
		
		case -2091312957:
			iVar0 = 1195;
			break;
		
		case -2079214831:
			iVar0 = 1196;
			break;
		
		case 1359156274:
			iVar0 = 1197;
			break;
		
		case 1904247246:
			iVar0 = 1198;
			break;
		
		case -1351518396:
			iVar0 = 1199;
			break;
	}
	switch (iParam0)
	{
		case -797874817:
			iVar0 = 1200;
			break;
		
		case -385507297:
			iVar0 = 1201;
			break;
		
		case 2011910758:
			iVar0 = 1202;
			break;
		
		case -1953985443:
			iVar0 = 1203;
			break;
		
		case -1124222352:
			iVar0 = 1204;
			break;
		
		case -1806994767:
			iVar0 = 1205;
			break;
		
		case -1445761968:
			iVar0 = 1206;
			break;
		
		case -89186417:
			iVar0 = 1207;
			break;
		
		case -308083083:
			iVar0 = 1208;
			break;
		
		case 667714507:
			iVar0 = 1209;
			break;
		
		case -1610210252:
			iVar0 = 1210;
			break;
		
		case -417116499:
			iVar0 = 1211;
			break;
		
		case 1246110729:
			iVar0 = 1212;
			break;
		
		case 461575135:
			iVar0 = 1213;
			break;
		
		case -386163163:
			iVar0 = 1214;
			break;
		
		case -1414541879:
			iVar0 = 1215;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_694(int iParam0, bool bParam1)
{
	iVar0 = (19 - 1);
	if (bParam1)
	{
		iVar0 = 13;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = iVar1;
		if (!func_696(iVar2) || iParam0)
		{
			if (!func_695(PLAYER::PLAYER_ID(), iVar2))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_695(int iParam0, int iParam1)
{
	if (iParam0 != func_59())
	{
		iVar0 = iParam1;
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_399, iVar0);
	}
	return 0;
}

int func_696(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 16:
		case 18:
			return 1;
			break;
	}
	return 0;
}

int func_697(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 53:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 30;
				
				case 4:
					return 60;
				
				case 5:
					return 120;
				
				default:
			}
			break;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 30;
				
				default:
			}
			break;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 63:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 20;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000;
				
				case 3:
					return 10000;
				
				case 4:
					return 25000;
				
				case 5:
					return 50000;
				
				default:
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 3;
				
				case 3:
					return 5;
				
				case 4:
					return 7;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 54:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 55:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 250;
				
				case 4:
					return 500;
				
				case 5:
					return 1000;
				
				default:
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 104:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 106:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 107:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 108:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 98:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 99:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 100:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 101:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 102:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 103:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 109:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 110:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 111:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 112:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 113:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 114:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 115:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 116:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 117:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24738;
				
				case 3:
					return Global_262145.f_24739;
				
				case 4:
					return Global_262145.f_24740;
				
				case 5:
					return Global_262145.f_24741;
				
				default:
			}
			break;
		
		case 118:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24738;
				
				case 3:
					return Global_262145.f_24739;
				
				case 4:
					return Global_262145.f_24740;
				
				case 5:
					return Global_262145.f_24741;
				
				default:
			}
			break;
		
		case 119:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24738;
				
				case 3:
					return Global_262145.f_24739;
				
				case 4:
					return Global_262145.f_24740;
				
				case 5:
					return Global_262145.f_24741;
				
				default:
			}
			break;
		
		case 120:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24738;
				
				case 3:
					return Global_262145.f_24739;
				
				case 4:
					return Global_262145.f_24740;
				
				case 5:
					return Global_262145.f_24741;
				
				default:
			}
			break;
		
		case 121:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 70:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 71:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 72:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 73:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 74:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 75:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 77:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 79:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 80:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 81:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 82:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 20;
				
				case 4:
					return 30;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 83:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 100000;
				
				case 3:
					return 250000;
				
				case 4:
					return 500000;
				
				case 5:
					return 1000000;
				
				default:
			}
			break;
		
		case 84:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 85:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000;
				
				case 3:
					return 3000;
				
				case 4:
					return 15000;
				
				case 5:
					return 55000;
				
				default:
			}
			break;
		
		case 86:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 87:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 88:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 89:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 20;
				
				default:
			}
			break;
		
		case 90:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 25000;
				
				case 3:
					return 50000;
				
				case 4:
					return 75000;
				
				case 5:
					return 100000;
				
				default:
			}
			break;
		
		case 91:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 20;
				
				case 4:
					return 30;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 92:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_27892;
				
				case 3:
					return Global_262145.f_27893;
				
				case 4:
					return Global_262145.f_27894;
				
				case 5:
					return Global_262145.f_27895;
				
				default:
			}
			break;
		
		case 93:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28059;
				
				case 3:
					return Global_262145.f_28060;
				
				case 4:
					return Global_262145.f_28061;
				
				case 5:
					return Global_262145.f_28062;
				
				default:
			}
			break;
		
		case 94:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28093;
				
				case 3:
					return Global_262145.f_28094;
				
				case 4:
					return Global_262145.f_28095;
				
				case 5:
					return Global_262145.f_28096;
				
				default:
			}
			break;
		
		case 95:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28097;
				
				case 3:
					return Global_262145.f_28098;
				
				case 4:
					return Global_262145.f_28099;
				
				case 5:
					return Global_262145.f_28100;
				
				default:
			}
			break;
		
		case 96:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_27788;
				
				case 3:
					return Global_262145.f_27789;
				
				case 4:
					return Global_262145.f_27790;
				
				case 5:
					return Global_262145.f_27791;
				
				default:
			}
			break;
		
		case 97:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28063;
				
				case 3:
					return Global_262145.f_28064;
				
				case 4:
					return Global_262145.f_28065;
				
				case 5:
					return Global_262145.f_28066;
				
				default:
			}
			break;
	}
	return 999;
}

int func_698(int iParam0, int iParam1)
{
	iVar0 = Global_2585280[iParam0][func_431(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_699(int iParam0, int iParam1)
{
	uVar0 = Global_2585647[iParam0][func_431(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_700(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (bParam2)
		{
			iParam0 = func_691(iParam1, 3);
		}
		else
		{
			iParam0 = func_691(iParam1, 4);
		}
	}
	return (func_685(iParam0, -1) || func_701(iParam0, -1));
}

int func_701(int iParam0, int iParam1)
{
	return func_703(func_702(iParam0), iParam1, -1);
}

int func_702(int iParam0)
{
	if (iParam0 <= 480)
	{
		iVar1 = iParam0;
		iVar0 = (3112 + iVar1);
	}
	else if (iParam0 < 864)
	{
		iVar1 = (iParam0 - 480);
		iVar0 = (6029 + iVar1);
	}
	else if (iParam0 < 1248)
	{
		iVar1 = (iParam0 - 864);
		iVar0 = (15562 + iVar1);
	}
	else if (iParam0 < 1372)
	{
		iVar1 = (iParam0 - 1248);
		iVar0 = (28355 + iVar1);
	}
	else if (iParam0 < 1500)
	{
		iVar1 = (iParam0 - 1372);
		iVar0 = (30355 + iVar1);
	}
	else
	{
		iVar2 = iParam0;
	}
	return iVar0;
}

int func_703(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_58();
	}
	iVar1 = func_705(iParam0, iParam1);
	uVar2 = func_704(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_704(int iParam0)
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

int func_705(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_58();
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

int func_706(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam4 == 0)
	{
		iVar1 = func_708(iVar0, sParam1, iParam4);
		iParam4 = GAMEPLAY::GET_HASH_KEY(func_707(iVar1));
	}
	if (iParam3 == 449512698)
	{
		return 0;
	}
	switch (iParam4)
	{
		case -793495770:
		case -763917073:
		case -1409061796:
		case -2066166276:
		case 849089063:
		case 1192230427:
		case -454273031:
		case -1459967458:
		case 1548327796:
		case -1238079313:
		case 129912816:
		case -1469750959:
		case 1586504577:
		case 1753976524:
		case 1361645381:
		case -388268096:
			if (bParam5)
			{
				return 0;
			}
			if ((((iParam4 == -793495770 || (iParam4 == -1409061796 && iVar0 == -1667301416)) || iParam4 == -2066166276) || iParam4 == 849089063) || iParam4 == 1192230427)
			{
				if (!bParam6)
				{
					if (Global_4268242 == -1)
					{
						if (!Global_98796.f_1513)
						{
							if (func_716(13, -1))
							{
								return 0;
							}
							else if (func_716(14, -1))
							{
								return 0;
							}
							else if (func_716(15, -1))
							{
								return 0;
							}
							else if (func_716(16, -1))
							{
								return 0;
							}
							else if (func_716(71, -1))
							{
								return 0;
							}
							else if (func_716(72, -1))
							{
							}
						}
					}
					else if (Global_4268242 == 13)
					{
						return 0;
					}
					else if (Global_4268242 == 14)
					{
						return 0;
					}
					else if (Global_4268242 == 15)
					{
						return 0;
					}
					else if (Global_4268242 == 16)
					{
						return 0;
					}
					else if (Global_4268242 == 71)
					{
						return 0;
					}
					else if (Global_4268242 == 72)
					{
					}
				}
			}
			else if (iParam4 == -763917073)
			{
				if (!bParam6)
				{
					if (Global_4268242 == -1)
					{
						if (!Global_98796.f_1513)
						{
							if (func_716(13, -1))
							{
								return 0;
							}
							else if (func_716(14, -1))
							{
								return 0;
							}
							else if (func_716(15, -1))
							{
								return 0;
							}
							else if (func_716(16, -1))
							{
								return 0;
							}
							else if (func_716(71, -1))
							{
								return 0;
							}
							else if (func_716(72, -1))
							{
							}
						}
					}
					else if (Global_4268242 == 13)
					{
						return 0;
					}
					else if (Global_4268242 == 14)
					{
						return 0;
					}
					else if (Global_4268242 == 15)
					{
						return 0;
					}
					else if (Global_4268242 == 16)
					{
						return 0;
					}
					else if (Global_4268242 == 71)
					{
						return 0;
					}
					else if (Global_4268242 == 72)
					{
					}
				}
			}
			else if ((iParam4 == 129912816 || iParam4 == 1361645381) || iParam4 == -1469750959)
			{
				if (!bParam6)
				{
					if (Global_4268242 == -1)
					{
						if (!Global_98796.f_1513)
						{
							if (func_716(13, -1))
							{
							}
							else if (func_716(14, -1))
							{
								return 0;
							}
							else if (func_716(15, -1))
							{
								return 0;
							}
							else if (func_716(16, -1))
							{
							}
							else if (func_716(71, -1))
							{
								return 0;
							}
							else if (func_716(72, -1))
							{
							}
						}
					}
					else if (Global_4268242 == 13)
					{
					}
					else if (Global_4268242 == 14)
					{
						return 0;
					}
					else if (Global_4268242 == 15)
					{
						return 0;
					}
					else if (Global_4268242 == 16)
					{
					}
					else if (Global_4268242 == 71)
					{
						return 0;
					}
					else if (Global_4268242 == 72)
					{
					}
				}
			}
			else if (iParam4 == 1928884106)
			{
				if (!bParam6)
				{
					if (Global_4268242 == -1)
					{
						if (!Global_98796.f_1513)
						{
							if (func_716(13, -1))
							{
							}
							else if (func_716(14, -1))
							{
							}
							else if (func_716(15, -1))
							{
							}
							else if (func_716(16, -1))
							{
							}
							else if (func_716(71, -1))
							{
							}
							else if (func_716(72, -1))
							{
							}
						}
					}
					else if (Global_4268242 == 13)
					{
					}
					else if (Global_4268242 == 14)
					{
					}
					else if (Global_4268242 == 15)
					{
					}
					else if (Global_4268242 == 16)
					{
					}
					else if (Global_4268242 == 71)
					{
					}
					else if (Global_4268242 == 72)
					{
					}
				}
			}
			break;
		
		case 1484379715:
		case 711089605:
		case 1206993109:
		case 32564956:
		case 1618133209:
		case 314326195:
		case 1928884106:
		case 1565386395:
		case 2107621060:
			if (bParam8)
			{
				return 0;
			}
			if (!bParam6)
			{
				if (Global_4268242 == -1)
				{
					if (!Global_98796.f_1513)
					{
						if (func_716(13, -1))
						{
						}
						else if (func_716(14, -1))
						{
						}
						else if (func_716(15, -1))
						{
							return 0;
						}
						else if (func_716(16, -1))
						{
						}
						else if (func_716(71, -1))
						{
						}
						else if (func_716(72, -1))
						{
							return 0;
						}
					}
				}
				else if (Global_4268242 == 13)
				{
				}
				else if (Global_4268242 == 14)
				{
				}
				else if (Global_4268242 == 15)
				{
					return 0;
				}
				else if (Global_4268242 == 16)
				{
				}
				else if (Global_4268242 == 71)
				{
				}
				else if (Global_4268242 == 72)
				{
					return 0;
				}
			}
			break;
		
		case 1019352240:
			if (bParam8)
			{
				if (iVar0 == 1885233650)
				{
					if (Global_4268242 == -1)
					{
						if (!Global_98796.f_1513)
						{
							if (func_716(15, -1))
							{
								return 0;
							}
						}
					}
					else if (Global_4268242 == 15)
					{
						return 0;
					}
				}
			}
			if (bParam6)
			{
				return 0;
			}
			if (bParam5)
			{
				if (Global_4268242 == -1)
				{
					if (!Global_98796.f_1513)
					{
						if (func_716(13, -1))
						{
							return 0;
						}
						else if (func_716(14, -1))
						{
							return 0;
						}
						else if (func_716(15, -1))
						{
							if (!GAMEPLAY::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB"))
							{
								return 0;
							}
						}
						else if (func_716(16, -1))
						{
						}
						else if (func_716(71, -1))
						{
						}
						else if (func_716(72, -1))
						{
						}
					}
				}
				else if (Global_4268242 == 13)
				{
					return 0;
				}
				else if (Global_4268242 == 14)
				{
					return 0;
				}
				else if (Global_4268242 == 15)
				{
					if (!GAMEPLAY::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB"))
					{
						return 0;
					}
				}
				else if (Global_4268242 == 16)
				{
				}
				else if (Global_4268242 == 71)
				{
				}
				else if (Global_4268242 == 72)
				{
				}
			}
			break;
		
		case 0:
		case 2:
		case -518474626:
			if (bParam5)
			{
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
				{
					switch (GAMEPLAY::GET_HASH_KEY(sParam1))
					{
						case 1774176944:
						case 1363941829:
						case -328314869:
						case -1903783095:
						case -1674924399:
						case -106785870:
						case -344656041:
						case 1480281490:
						case -2097372400:
						case 118598456:
						case -1386676768:
						case 1464947154:
						case -1282504117:
						case -1877294236:
						case 736950162:
							return 0;
							break;
						}
					}
			}
			if (iVar0 == 1885233650)
			{
			}
			else if (iVar0 == -1667301416)
			{
				if (!bParam6)
				{
					if (Global_4268242 == -1)
					{
						if (!Global_98796.f_1513)
						{
							if (func_716(13, -1))
							{
							}
							else if (func_716(14, -1))
							{
							}
							else if (func_716(15, -1))
							{
							}
							else if (func_716(16, -1))
							{
							}
							else if (func_716(71, -1))
							{
							}
							else if (func_716(72, -1))
							{
							}
						}
					}
					else if (Global_4268242 == 13)
					{
						return 0;
					}
					else if (Global_4268242 == 14)
					{
					}
					else if (Global_4268242 == 15)
					{
						return 0;
					}
					else if (Global_4268242 == 16)
					{
					}
					else if (Global_4268242 == 71)
					{
					}
					else if (Global_4268242 == 72)
					{
					}
				}
			}
			break;
		
		case 277073536:
			if (bParam7)
			{
				return 0;
			}
			break;
	}
	return 1;
}

char* func_707(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ARM_LEFT_FULL_SLEEVE";
			break;
		
		case 1:
			return "ARM_LEFT_SHORT_SLEEVE";
			break;
		
		case 2:
			return "ARM_LEFT_LOWER_SLEEVE";
			break;
		
		case 3:
			return "ARM_LEFT_LOWER_INNER";
			break;
		
		case 4:
			return "ARM_LEFT_LOWER_OUTER";
			break;
		
		case 5:
			return "ARM_LEFT_WRIST";
			break;
		
		case 6:
			return "ARM_LEFT_UPPER_SLEEVE";
			break;
		
		case 7:
			return "ARM_LEFT_UPPER_TRICEP";
			break;
		
		case 8:
			return "ARM_LEFT_UPPER_SIDE";
			break;
		
		case 9:
			return "ARM_LEFT_UPPER_BICEP";
			break;
		
		case 10:
			return "ARM_LEFT_SHOULDER";
			break;
		
		case 11:
			return "ARM_LEFT_ELBOW";
			break;
		
		case 12:
			return "ARM_RIGHT_FULL_SLEEVE";
			break;
		
		case 13:
			return "ARM_RIGHT_SHORT_SLEEVE";
			break;
		
		case 14:
			return "ARM_RIGHT_LOWER_SLEEVE";
			break;
		
		case 15:
			return "ARM_RIGHT_LOWER_INNER";
			break;
		
		case 16:
			return "ARM_RIGHT_LOWER_OUTER";
			break;
		
		case 17:
			return "ARM_RIGHT_WRIST";
			break;
		
		case 18:
			return "ARM_RIGHT_UPPER_SLEEVE";
			break;
		
		case 19:
			return "ARM_RIGHT_UPPER_TRICEP";
			break;
		
		case 20:
			return "ARM_RIGHT_UPPER_SIDE";
			break;
		
		case 21:
			break;
		
		case 22:
		
}