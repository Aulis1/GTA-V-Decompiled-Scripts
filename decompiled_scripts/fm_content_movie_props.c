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
	fLocal_87 = 0f;
	fLocal_94 = 0f;
	fLocal_95 = 0f;
	fLocal_96 = 0f;
	fLocal_159 = 0.62f;
	fLocal_160 = 0.51f;
	fLocal_161 = 0.55f;
	fLocal_162 = 25f;
	iLocal_1225 = -1;
	iLocal_1226 = -1;
	iLocal_1232 = -1;
	iLocal_1233 = -1;
	iLocal_1234 = -1;
	fLocal_1239 = -1f;
	fLocal_1240 = 99999f;
	fLocal_1241 = 99999f;
	Local_1243 = { 5000f, 8500f, 0f };
	StringCopy(&Local_1254, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	Local_1254 = { Local_1254 };
	Local_701 = { Local_701 };
	func_1766(0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bLocal_1212)
		{
			if (!func_1758(ScriptParam_0))
			{
				func_1627(0, 1);
				func_1600();
			}
		}
		else
		{
			func_1600();
		}
	}
	else
	{
		func_1627(0, 1);
		func_1600();
	}
	func_1598(&(Local_1270.f_164));
	func_1540();
	while (true)
	{
		func_1539();
		if (func_1531())
		{
			func_1627(0, 1);
			func_1600();
		}
		if (func_1530())
		{
			func_1627(0, 1);
			func_1600();
		}
		func_1766(1);
		switch (func_1529())
		{
			case 0:
				if (func_1528() == 1)
				{
					if (func_1362())
					{
						func_1361(1);
					}
				}
				else if (func_1528() == 3)
				{
					func_1361(3);
				}
				break;
			
			case 1:
				func_1319();
				func_696();
				func_695();
				if (func_1528() != 1)
				{
					func_1361(func_1528());
				}
				break;
			
			case 2:
				func_1319();
				func_695();
				func_540();
				if (func_1528() > 2)
				{
					func_1627(func_534(), 0);
					func_1361(3);
				}
				break;
			
			case 3:
				func_1600();
				break;
		}
		if (bLocal_1214)
		{
			switch (func_1528())
			{
				case 0:
					if (func_410())
					{
						func_409(1);
					}
					break;
				
				case 1:
					if (func_408() == 0)
					{
						func_8();
					}
					else
					{
						func_409(2);
					}
					break;
				
				case 2:
					if (func_2())
					{
						func_409(3);
					}
					break;
				
				case 3:
					func_1600();
					break;
				}
		}
		func_1();
	}
}

void func_1()
{
	Local_930.f_231++;
	if (Local_930.f_231 >= Local_218.f_28)
	{
		Local_930.f_231 = 0;
	}
}

int func_2()
{
	if (!func_5())
	{
		return 0;
	}
	if (!func_3(0))
	{
		return 0;
	}
	return 1;
}

bool func_3(int iParam0)
{
	return func_4(&(Local_1270.f_132), iParam0);
}

bool func_4(var uParam0, var uParam1)
{
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return GAMEPLAY::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_5()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 18))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_6(int iParam0, int iParam1)
{
	return func_4(&(Local_1270.f_2.f_5[iParam0]), iParam1);
}

int func_7()
{
	return Local_218.f_10;
}

void func_8()
{
	if (Local_433.f_3 != 0)
	{
		Call_Loc(Local_433.f_3);
	}
	func_377();
	func_130();
	func_115();
	func_38();
	func_32();
	func_21();
	func_18();
	func_9();
}

void func_9()
{
	if (func_17() == -1)
	{
		return;
	}
	if (Local_433.f_38 == 0)
	{
		return;
	}
	Call_Loc(Local_433.f_38);
	if (!StackVal)
	{
		return;
	}
	if (!func_3(6) && Local_433.f_38.f_1 != 0)
	{
		Call_Loc(Local_433.f_38.f_1);
		if (StackVal)
		{
			func_16(&(Local_1270.f_151), 0, 0);
			func_14(6);
		}
	}
	if (!func_13(&(Local_1270.f_151)))
	{
		func_12(&(Local_1270.f_151), 0, 0);
	}
	else if (func_13(&(Local_1270.f_151)))
	{
		if (func_11(&(Local_1270.f_151), func_17(), 0))
		{
			func_10(1);
		}
	}
}

void func_10(int iParam0)
{
	if (!bLocal_1214)
	{
		return;
	}
	Local_1270.f_123 = iParam0;
}

int func_11(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_12(uParam0, bParam2, 0);
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

void func_12(var uParam0, bool bParam1, bool bParam2)
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

bool func_13(var uParam0)
{
	return uParam0->f_1;
}

void func_14(int iParam0)
{
	if (func_15(&(Local_1270.f_132), iParam0))
	{
	}
}

int func_15(var uParam0, var uParam1)
{
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (!GAMEPLAY::IS_BIT_SET((*uParam0)[iVar1], iVar2))
	{
		GAMEPLAY::SET_BIT(uParam0[iVar1], iVar2);
		return 1;
	}
	return 0;
}

void func_16(var uParam0, bool bParam1, bool bParam2)
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

int func_17()
{
	if (Local_218.f_128 != -1)
	{
		return Local_218.f_128 * 60 * 1000;
	}
	return Local_218.f_128;
}

void func_18()
{
	if (func_20() != -1)
	{
		while ((func_20() < iLocal_1227 && iVar0 < Local_711[func_20()].f_14) && Local_711[func_20()].f_1[iVar0] != -1)
		{
			Call_Loc(Local_711[func_20()].f_1[iVar0].f_1);
			if (StackVal)
			{
				Call_Loc(Local_711[func_20()].f_13);
				Local_1270.f_131 = func_20();
				func_19(Local_711[func_20()].f_1[iVar0]);
				Call_Loc(Local_711[func_20()].f_12);
				return;
			}
			iVar0++;
		}
	}
}

void func_19(var uParam0)
{
	if (!bLocal_1214)
	{
		return;
	}
	Local_1270.f_130 = uParam0;
}

int func_20()
{
	return Local_1270.f_130;
}

void func_21()
{
	if (Local_433.f_37 == 0)
	{
		return;
	}
	Call_Loc(Local_433.f_37);
	Var0 = { StackVal, StackVal, StackVal };
	if (func_31(Var0))
	{
		return;
	}
	if (func_11(&(Local_1270.f_153), func_30(), 0))
	{
		if (!func_29(Local_1270.f_158, Var0, 1056964608, 0))
		{
			func_23(func_24(1, 1), NETWORK::_0x638A3A81733086DB(), Var0);
			func_22(&(Local_1270.f_153));
		}
		Local_1270.f_158 = { Var0 };
	}
}

void func_22(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_23(int iParam0, int iParam1, struct<3> Param2)
{
	Var0 = -1370208168;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = { Param2 };
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

int func_24(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_28(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_25(iVar2, 0))
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_25(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1312745;
}

int func_28(int iParam0, bool bParam1, bool bParam2)
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

int func_29(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

int func_30()
{
	return 5000;
}

int func_31(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_32()
{
	if (!func_37())
	{
		return;
	}
	if (!func_3(2))
	{
		if (func_33(&(Local_1270.f_105), &(Local_1270.f_105.f_3)))
		{
			func_14(2);
		}
	}
}

int func_33(var uParam0, var uParam1)
{
	iVar3 = 0;
	while (iVar3 < 1)
	{
		if (func_36(iVar3))
		{
			iVar0[iVar2] = iVar3;
			iVar2++;
		}
		iVar3++;
	}
	if (iVar2 < func_7())
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < func_7())
	{
		if (func_35())
		{
			if (iVar3 > 0)
			{
				(*uParam0)[iVar3] = (*uParam0)[(iVar3 - 1)];
			}
			else
			{
				iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar2);
				(*uParam0)[iVar3] = iVar0[iVar4];
				if (iVar0[iVar4] < 32)
				{
					GAMEPLAY::SET_BIT(uParam1, iVar0[iVar4]);
				}
				if (iVar3 < (func_7() - 1))
				{
					func_34(&(iVar0[iVar4]), &(iVar0[(iVar2 - 1)]));
					iVar2 = (iVar2 - 1);
				}
			}
			iVar3++;
			return 1;
		}

void func_34(var uParam0, var uParam1)
{
	uVar0 = *uParam0;
	*uParam0 = *uParam1;
	*uParam1 = uVar0;
}

int func_35()
{
	return 0;
}

int func_36(int iParam0)
{
	return 0;
}

int func_37()
{
	return 0;
}

void func_38()
{
	iVar5 = 0;
	while (iVar5 < Local_218.f_28)
	{
		func_113(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
		if (bVar2)
		{
			if (Local_433.f_73.f_109 != 0)
			{
				Stack.Push(iVar5);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_433.f_73.f_109);
			}
		}
		if (iVar4 > 2)
		{
			if (iVar4 != 6)
			{
				if (!bVar2)
				{
					func_112(iVar5, 6);
				}
				else if (bVar3)
				{
					func_112(iVar5, 6);
				}
				else if (func_111(iVar5, iVar0))
				{
					func_112(iVar5, 6);
				}
			}
		}
		switch (iVar4)
		{
			case 0:
				if (func_110(iVar5))
				{
					func_112(iVar5, 2);
				}
				break;
			
			case 1:
				if (!bVar2)
				{
					if (func_109(iVar5))
					{
						func_112(iVar5, 2);
					}
				}
				else
				{
					func_108(&(Local_1270.f_24[iVar5]));
				}
				break;
			
			case 2:
				if (!bVar1)
				{
					if (func_99(iVar5))
					{
						if (func_57(iVar5))
						{
							func_112(iVar5, 3);
							func_56(iVar5);
							bVar1 = true;
						}
					}
				}
				break;
			
			case 3:
				if (bVar2)
				{
					if (!bVar3)
					{
						func_53(iVar5);
						func_49(iVar5, iVar0, 1);
						if (func_48(iVar5))
						{
							func_112(iVar5, 4);
						}
					}
				}
				break;
			
			case 6:
				func_47(iVar5, 16);
				if (!func_46(7))
				{
					func_41(iVar5, 1);
				}
				if (func_40(iVar5))
				{
					func_108(&(Local_1270.f_24[iVar5]));
					func_112(iVar5, 1);
				}
				if (func_408() == 0)
				{
					if (func_39(iVar5, 0))
					{
						func_10(9);
					}
				}
				break;
			
			case 4:
				if (!func_39(iVar5, 21) && !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0))
				{
					func_112(iVar5, 5);
				}
				break;
			
			case 5:
				break;
		}
		iVar5++;
	}
	iVar5 = Local_930.f_231;
	func_113(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
	switch (iVar4)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_49(iVar5, iVar0, 0);
				}
			}
			break;
	}
}

bool func_39(int iParam0, int iParam1)
{
	return func_4(&(Local_218.f_28.f_1[iParam0]), iParam1);
}

int func_40(int iParam0)
{
	if (func_408() != 0)
	{
		return 0;
	}
	if (func_39(iParam0, 18))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_99);
		return StackVal;
	}
	return 0;
}

void func_41(int iParam0, int iParam1)
{
	if (iParam1 != func_45())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_10)
	{
		if (func_44(iVar0))
		{
			if (iParam0 == func_43(iVar0) && !func_6(iVar0, 4))
			{
				func_42(iVar0, 3);
				func_42(iVar0, 19);
			}
		}
		iVar0++;
	}
}

void func_42(int iParam0, int iParam1)
{
	if (func_15(&(Local_1270.f_2.f_5[iParam0]), iParam1))
	{
	}
}

int func_43(int iParam0)
{
	return Local_1270.f_2.f_11[iParam0];
}

bool func_44(int iParam0)
{
	return Local_1270.f_2.f_11[iParam0] != -1;
}

int func_45()
{
	return Local_218.f_10.f_5[0].f_11;
}

bool func_46(int iParam0)
{
	return func_4(&(Local_218.f_8), iParam0);
}

void func_47(int iParam0, int iParam1)
{
	if (func_15(&(Local_1270.f_24[iParam0].f_3), iParam1))
	{
	}
}

int func_48(int iParam0)
{
	if (Local_433.f_73.f_98 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_98);
		return StackVal;
	}
	return 0;
}

void func_49(int iParam0, int iParam1, int iParam2)
{
	if (func_52(iParam0) == -1)
	{
		return;
	}
	if (func_51(Local_930[iParam0].f_1[func_52(iParam0)]) != iParam2)
	{
		return;
	}
	if (Local_930[iParam0].f_1[func_52(iParam0)].f_9 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_930[iParam0].f_1[func_52(iParam0)].f_9);
	}
	while ((func_52(iParam0) < Local_930[iParam0] && iVar0 < Local_930[iParam0].f_1[func_52(iParam0)].f_10) && Local_930[iParam0].f_1[func_52(iParam0)].f_1[iVar0] != -1)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_930[iParam0].f_1[func_52(iParam0)].f_1[iVar0].f_1);
		if (StackVal)
		{
			if (Local_930[iParam0].f_1[func_52(iParam0)].f_7 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_930[iParam0].f_1[func_52(iParam0)].f_7);
			}
			func_50(iParam0, Local_930[iParam0].f_1[func_52(iParam0)].f_1[iVar0]);
			if (Local_930[iParam0].f_1[func_52(iParam0)].f_6 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_930[iParam0].f_1[func_52(iParam0)].f_6);
			}
			return;
		}
		iVar0++;
	}
}

void func_50(int iParam0, var uParam1)
{
	if (!bLocal_1214)
	{
		return;
	}
	Local_1270.f_24[iParam0].f_2 = uParam1;
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

int func_52(int iParam0)
{
	return Local_1270.f_24[iParam0].f_2;
}

void func_53(int iParam0)
{
	if (func_54(iParam0))
	{
		return;
	}
	iVar0 = Local_218.f_28.f_1[iParam0].f_14;
	iVar1 = 0;
	while (iVar1 < Local_930[iParam0].f_73)
	{
		if (Local_930[iParam0].f_67[iVar1] != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_930[iParam0].f_67[iVar1]);
			if (StackVal)
			{
				GAMEPLAY::SET_BIT(&(Local_1270.f_104), iVar0);
			}
		}
		iVar1++;
	}
}

bool func_54(int iParam0)
{
	return func_55(Local_218.f_28.f_1[iParam0].f_14);
}

bool func_55(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Local_1270.f_104, iParam0);
}

void func_56(int iParam0)
{
}

int func_57(int iParam0)
{
	func_98(0, iParam0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_103);
	iVar0 = StackVal;
	if (func_97(iVar0))
	{
		iVar1 = Local_218.f_28.f_1[iParam0].f_8;
		if (iVar1 != -1)
		{
			if (func_96(Local_1270.f_91[iVar1]))
			{
				if (func_95(&(Local_1270.f_24[iParam0]), Local_1270.f_91[iVar1], 26, iVar0, Local_218.f_28.f_1[iParam0].f_9, 1, 1, 1))
				{
					func_75(iParam0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					func_74();
					return 1;
				}
			}
		}
		else
		{
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_104);
			Var2 = { StackVal, StackVal, StackVal };
			if (!func_31(Var2))
			{
				if (!func_72(iParam0) || func_59(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Stack.Push(&(Local_1270.f_24[iParam0]));
					Stack.Push(26);
					Stack.Push(iVar0);
					Stack.Push(Var2);
					Stack.Push(iParam0);
					Call_Loc(Local_433.f_73.f_105);
					if (func_58(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1, 1, 1))
					{
						func_75(iParam0);
						func_74();
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_58(var uParam0, var uParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(uParam1, uParam2, Param3, uParam6, iParam8, bParam7);
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

int func_59(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
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
		if (func_65(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_60(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_60(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	if (iParam4 && !bParam7)
	{
		if (func_28(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_62(PLAYER::PLAYER_ID()), Param0, 1) <= (fVar2 + fParam3))
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
		if (func_28(iVar1, 1, 1))
		{
			if (!func_25(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_61(iVar1) || !bParam10) && !Global_2425662[iVar1].f_259)
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
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_62(iVar1), Param0, 1) <= (fVar2 + fParam3))
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
							if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_62(iVar1), Param0, 1) <= (fVar2 + fParam3))
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

int func_61(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2425662[iParam0].f_245)
	{
		return 1;
	}
	return 0;
}

Vector3 func_62(int iParam0)
{
	iVar0 = iParam0;
	if ((func_64() && Global_1590535[iVar0].f_847) && !func_31(Global_1590535[iVar0].f_848))
	{
		return Global_1590535[iVar0].f_848;
	}
	return func_63(iParam0);
}

Vector3 func_63(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

bool func_64()
{
	return Global_2450632.f_17;
}

int func_65(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_28(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_61(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_66(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_63(iVar1), Param0, 1) < fParam3)
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

int func_66(int iParam0)
{
	if (func_71(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_70(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2513218))
	{
		return 1;
	}
	if (func_67(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0, int iParam1)
{
	iVar0 = func_69(iParam0);
	if (!iVar0 == func_68())
	{
		if (iVar0 == func_69(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_68()
{
	return -1;
}

int func_69(int iParam0)
{
	if (iParam0 != func_68())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_68();
}

struct<13> func_70(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_71(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2513218 = { func_70(iParam0) };
		Global_2513231 = { func_70(iParam1) };
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

int func_72(int iParam0)
{
	if (func_39(iParam0, 18) && func_73(iParam0, 16))
	{
		return 1;
	}
	return 0;
}

bool func_73(int iParam0, int iParam1)
{
	return func_4(&(Local_1270.f_24[iParam0].f_3), iParam1);
}

void func_74()
{
	if (Local_1270.f_145 != -1)
	{
		Local_1270.f_155 = { 0f, 0f, 0f };
		Local_1270.f_161 = 0f;
		Local_1270.f_148 = 0;
		Local_1270.f_128 = -1;
		Local_1270.f_145 = -1;
	}
}

void func_75(int iParam0)
{
	iVar0 = NETWORK::NET_TO_PED(Local_1270.f_24[iParam0]);
	bVar1 = func_39(iParam0, 14);
	func_90(iParam0, iVar0);
	if (bVar1)
	{
		func_88(iParam0, iVar0);
	}
	else
	{
		func_81(iParam0, iVar0);
	}
	if (Local_433.f_73.f_107 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Stack.Push(bVar1);
		Call_Loc(Local_433.f_73.f_107);
	}
	if (func_39(iParam0, 4))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		func_76(iVar0, iParam0, 1, 0, 1, 1);
	}
}

void func_76(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (Local_218.f_28.f_1[iParam1].f_8 != -1)
		{
			if (bParam5)
			{
				Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, -5f, 0f) };
				Var3 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
				GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var0, Var3, 25, 1, 205991906, 0, 1, 1, -1082130432);
				GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, Var0, 25, 1, -494615257, 0, 1, 1, -1082130432);
			}
			if (bParam3)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
		}
		else
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
			func_79(Var6, &Var9, &Var12, 0);
			GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var9, Var12, 300, 1, 205991906, 0, 0, 0, 80f);
			if (bParam3)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
		}
		if (bParam4)
		{
			func_77(iParam0, -1, 0);
		}
	}
}

void func_77(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 11);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			func_78(iVar1, iParam0);
			iVar1++;
		}
	}
	else
	{
		func_78(iVar0, iParam0);
	}
}

void func_78(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 0, 0.727f, 0.625f, "ShotgunLargeMonolithic");
			break;
		
		case 1:
			PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 0, 0.727f, 0.518f, "ShotgunLargeMonolithic");
			break;
		
		case 2:
			PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 0, 0.727f, 0.399f, "ShotgunLargeMonolithic");
			break;
		
		case 3:
			PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 0, 0.806f, 0.399f, "ShotgunLargeMonolithic");
			break;
		
		case 4:
			PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 1, 0.379f, 0.324f, "ShotgunLargeMonolithic");
			break;
		
		case 5:
			PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 1, 0.379f, 0.534f, "ShotgunLargeMonolithic");
			break;
		
		case 6:
			PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 2, 0.628f, 0.277f, "ShotgunLargeMonolithic");
			break;
		
		case 7:
			PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 2, 0.609f, 0.344f, "ShotgunLargeMonolithic");
			break;
		
		case 8:
			PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 4, 0.719f, 0.802f, "ShotgunLargeMonolithic");
			break;
		
		case 9:
			PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 4, 0.775f, 0.68f, "ShotgunLargeMonolithic");
			break;
		
		case 10:
			PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 4, 0.775f, 0.561f, "ShotgunLargeMonolithic");
			break;
	}
}

void func_79(struct<3> Param0, var uParam3, var uParam4, bool bParam5)
{
	fVar0 = 0.1f;
	iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6);
	fVar2 = 0.5f;
	fVar3 = 0.1f;
	fVar4 = 0.4f;
	if (bParam5)
	{
		iVar5 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 5);
		fVar2 = (SYSTEM::TO_FLOAT(iVar5) / 10f);
		if (func_80())
		{
			fVar2 = (fVar2 * -1f);
		}
		iVar5 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 2);
		fVar3 = (SYSTEM::TO_FLOAT(iVar5) / 15f);
		if (func_80())
		{
			fVar3 = (fVar3 * -1f);
		}
		iVar5 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6);
		fVar4 = (SYSTEM::TO_FLOAT(iVar5) / 10f);
		if (func_80())
		{
			fVar4 = (fVar4 * -1f);
		}
	}
	switch (iVar1)
	{
		case 0:
			*uParam3 = { (Param0.x + fVar0), (Param0.y + fVar3), (Param0.z + fVar4) };
			*uParam4 = { (Param0.x - fVar2), (Param0.y - fVar3), (Param0.z + fVar4) };
			break;
		
		case 1:
			*uParam3 = { (Param0.x + fVar0), (Param0.y + fVar3), (Param0.z + fVar4) };
			*uParam4 = { (Param0.x - fVar2), (Param0.y - fVar3), (Param0.z + fVar4) };
			break;
		
		case 2:
			*uParam3 = { (Param0.x - fVar0), (Param0.y + fVar3), (Param0.z + fVar4) };
			*uParam4 = { (Param0.x + fVar2), (Param0.y - fVar3), (Param0.z + fVar4) };
			break;
		
		case 3:
			*uParam3 = { (Param0.x - fVar0), (Param0.y - fVar3), (Param0.z + fVar4) };
			*uParam4 = { (Param0.x + fVar2), (Param0.y + fVar3), (Param0.z + fVar4) };
			break;
		
		case 4:
			*uParam3 = { (Param0.x - fVar0), (Param0.y - fVar3), (Param0.z + fVar4) };
			*uParam4 = { (Param0.x + fVar2), (Param0.y + fVar3), (Param0.z + fVar4) };
			break;
		
		case 5:
			*uParam3 = { (Param0.x + fVar0), (Param0.y + fVar3), (Param0.z + fVar4) };
			*uParam4 = { (Param0.x - fVar2), (Param0.y - fVar3), (Param0.z + fVar4) };
			break;
	}
}

int func_80()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_81(int iParam0, int iParam1)
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, 1);
	PED::SET_PED_KEEP_TASK(iParam1, 1);
	AI::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam1, 0);
	if (func_39(iParam0, 11))
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 146, false);
		AI::SET_PED_PATH_CAN_USE_LADDERS(iParam1, 1);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 146, true);
		AI::SET_PED_PATH_CAN_USE_LADDERS(iParam1, 0);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 43, 1);
	PED::SET_PED_COMBAT_MOVEMENT(iParam1, Local_218.f_28.f_1[iParam0].f_15);
	PED::SET_PED_COMBAT_ABILITY(iParam1, func_87());
	PED::SET_PED_ACCURACY(iParam1, func_86(iParam0));
	PED::SET_PED_SHOOT_RATE(iParam1, func_85());
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 24, 0);
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_84());
	ENTITY::SET_ENTITY_HEALTH(iParam1, func_84(), 0);
	PED::SET_PED_DIES_WHEN_INJURED(iParam1, 1);
	func_82(iParam0, iParam1);
}

void func_82(int iParam0, int iParam1)
{
	iVar1 = Local_218.f_28.f_1[iParam0].f_14;
	iVar2 = 0;
	while (iVar2 < 1)
	{
		iVar3 = Local_218.f_28.f_62[iVar1].f_1[iVar2];
		if (iVar3 != -1)
		{
			if (func_83(iVar3, 4))
			{
				PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam1, Local_218.f_164[iVar3].f_2, Local_218.f_164[iVar3].f_5, Local_218.f_164[iVar3].f_8, 0, 0);
				bVar0 = true;
			}
		}
		iVar2++;
	}
	if (!bVar0 && Local_218.f_28.f_1[iParam0].f_19 != -1f)
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, 0), Local_218.f_28.f_1[iParam0].f_19, 0, 0);
	}
}

bool func_83(int iParam0, int iParam1)
{
	return func_4(&(Local_218.f_164[iParam0]), iParam1);
}

int func_84()
{
	switch (Local_1270.f_127)
	{
		case 2:
			return 200;
		
		case 3:
			return 300;
		
		default:
	}
	return 200;
}

int func_85()
{
	switch (Local_1270.f_127)
	{
		case 2:
			return 60;
		
		case 3:
			return 80;
		
		default:
	}
	return 60;
}

int func_86(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_106);
	Stack.Push(StackVal == -1312131151);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_106);
	if (StackVal || StackVal == 1834241177)
	{
		return 2;
	}
	switch (Local_1270.f_127)
	{
		case 2:
			return 10;
		
		case 3:
			return 25;
		
		default:
	}
	return 10;
}

int func_87()
{
	switch (Local_1270.f_127)
	{
		case 2:
			return 1;
		
		case 3:
			return 2;
		
		default:
	}
	return 1;
}

void func_88(int iParam0, int iParam1)
{
	PED::SET_DRIVER_AGGRESSIVENESS(iParam1, 1f);
	PED::_0xDED5AF5A0EA4B297(iParam1, 1f);
	PED::SET_COMBAT_FLOAT(iParam1, 17, 5f);
	PED::SET_PED_KEEP_TASK(iParam1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 2, 1);
	PED::SET_PED_CONFIG_FLAG(iParam1, 272, true);
	PED::SET_PED_DIES_INSTANTLY_IN_WATER(iParam1, 1);
	PED::SET_PED_CONFIG_FLAG(iParam1, 42, true);
	PED::SET_COMBAT_FLOAT(iParam1, 27, 0f);
	PED::SET_PED_ACCURACY(iParam1, 5);
	if (func_89(iParam0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 52, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 53, 1);
	}
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 200);
	ENTITY::SET_ENTITY_HEALTH(iParam1, 200, 0);
}

int func_89(int iParam0)
{
	if (func_39(iParam0, 23))
	{
		return 1;
	}
	return 0;
}

void func_90(int iParam0, int iParam1)
{
	if (Local_218.f_28.f_1[iParam0].f_12 != -1)
	{
		NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(Local_1270.f_24[iParam0]), true);
	}
	if (!func_94(iParam1))
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 324, true);
	}
	if (func_39(iParam0, 10))
	{
		NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, 1, 1);
	}
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_106);
	iVar0 = StackVal;
	if (iVar0 != 0)
	{
		if (iVar0 == -1569615261)
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(iParam1, 1);
		}
		else
		{
			WEAPON::GIVE_WEAPON_TO_PED(iParam1, iVar0, 9999999, func_92(iParam0), 1);
		}
	}
	PED::_0x52D59AB61DDC05DD(iParam1, 1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
	iVar1 = func_91(iParam0);
	if (iVar1 != -1533126372)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, iVar1);
	}
}

var func_91(int iParam0)
{
	return Local_218.f_28.f_62[Local_218.f_28.f_1[iParam0].f_14];
}

int func_92(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_1);
	Stack.Push(!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(StackVal));
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_1);
	if (StackVal && GAMEPLAY::ARE_STRINGS_EQUAL(StackVal, "CODE_HUMAN_PATROL_2H"))
	{
		return 1;
	}
	if (func_93(iParam0) == 22)
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0)
{
	return Local_930[iParam0].f_1[Local_1270.f_24[iParam0].f_2];
}

int func_94(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((PED::GET_PED_TYPE(iParam0) == 6 || PED::GET_PED_TYPE(iParam0) == 29) || PED::GET_PED_TYPE(iParam0) == 27)
		{
			return 1;
		}
	}
	return 0;
}

int func_95(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7)
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
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, iParam3, uParam4, iParam6, bParam5));
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

int func_96(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_97(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_98(int iParam0, var uParam1)
{
	if (Local_1270.f_145 == -1)
	{
		Local_1270.f_128 = iParam0;
		Local_1270.f_145 = uParam1;
	}
}

int func_99(int iParam0)
{
	if (!func_107(0, iParam0))
	{
		return 0;
	}
	if (Local_218.f_28.f_1[iParam0].f_8 != -1)
	{
		if (!func_105(Local_1270.f_91[Local_218.f_28.f_1[iParam0].f_8]))
		{
			return 0;
		}
	}
	if (Local_218.f_28.f_1[iParam0].f_12 != -1)
	{
		if (!func_100(Local_218.f_28.f_1[iParam0].f_12) || !func_11(&(Local_1270.f_149), 2000, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_100(int iParam0)
{
	if (iParam0 == 28)
	{
		return func_104(&(Global_1680879.f_54), iParam0);
	}
	if (iParam0 != -1)
	{
		func_101(iParam0);
		return (func_104(&(Global_1680879.f_54), iParam0) && INTERIOR::IS_INTERIOR_READY(Global_1680879[iParam0]));
	}
	return 0;
}

void func_101(int iParam0)
{
	iVar0 = iParam0;
	if (Global_1680879[iVar0] == 0)
	{
		Global_1680879[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_103(iParam0), func_102(iParam0));
	}
}

char* func_102(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		case 32:
			return "v_office_lobby";
		
		case 33:
			return "v_lab";
		
		case 34:
			return "v_foundry";
		
		case 35:
			return "v_refit";
		
		case 36:
			return "hei_int_mph_carrierhang3";
		
		case 37:
			return "hei_int_mph_carrierhang2";
		
		case 38:
			return "hei_int_mph_carrierhang1";
		
		case 39:
			return "hei_int_mph_carrierupper";
		
		case 40:
			return "hei_int_mph_carriercontrol1";
		
		case 41:
			return "hei_int_mph_carriercontrol2";
		
		case 42:
			return "ch3_01_trlr_int";
		
		default:
	}
	return "";
}

Vector3 func_103(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 984.1552f, -95.3662f, 75.9326f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		
		case 15:
			return -1426.362f, 6754.506f, 11.7821f;
		
		case 16:
			return -583.2097f, -1599.302f, 26.3052f;
		
		case 17:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853.625f, 3687.826f, 33.2671f;
		
		case 22:
			return -447.5651f, 6013.988f, 30.7164f;
		
		case 23:
			return -28.1023f, -688.8687f, 34.4437f;
		
		case 24:
			return -40.2938f, -1097.321f, 25.4223f;
		
		case 27:
			return -1074.853f, -250.3996f, 36.7388f;
		
		case 25:
			return 982.233f, -2160.382f, 28.4761f;
		
		case 26:
			return -630.4205f, -236.7843f, 37.057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078.561f, -1678.615f, 3.5752f;
		
		case 30:
			return 479.88f, -1318.57f, 28.2f;
		
		case 31:
			return 1392.512f, 3603.185f, 38.5f;
		
		case 32:
			return 105.4557f, -745.4835f, 44.7548f;
		
		case 33:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 34:
			return 1087.195f, -1988.445f, 28.649f;
		
		case 35:
			return -583.1606f, -282.3967f, 35.394f;
		
		case 36:
			return 3053.565f, -4653.67f, 5.0773f;
		
		case 37:
			return 3058.002f, -4700.8f, 5.0773f;
		
		case 38:
			return 3080.619f, -4772.69f, 5.0773f;
		
		case 39:
			return 3088.469f, -4708.33f, 20.567f;
		
		case 40:
			return 3085.222f, -4690.66f, 26.2522f;
		
		case 41:
			return 3092.459f, -4711.389f, 26.2657f;
		
		case 42:
			return 2329.242f, 2571.494f, 45.6772f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_104(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return GAMEPLAY::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_105(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_106(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_106(int iParam0)
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

int func_107(int iParam0, int iParam1)
{
	if (Local_1270.f_128 == -1)
	{
		return 1;
	}
	if (Local_1270.f_128 == iParam0)
	{
		if (Local_1270.f_145 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_108(var uParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
	}
}

int func_109(int iParam0)
{
	return 1;
}

int func_110(int iParam0)
{
	if (Local_433.f_73.f_102 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_102);
		return StackVal;
	}
	return 1;
}

int func_111(int iParam0, int iParam1)
{
	return 0;
}

void func_112(int iParam0, int iParam1)
{
	if (!bLocal_1214)
	{
		return;
	}
	Local_1270.f_24[iParam0].f_1 = iParam1;
}

void func_113(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	*iParam4 = func_114(iParam0);
	*bParam1 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_24[iParam0]);
	if (*bParam1)
	{
		*iParam3 = NETWORK::NET_TO_PED(Local_1270.f_24[iParam0]);
		*bParam2 = PED::IS_PED_INJURED(*iParam3);
	}
}

int func_114(int iParam0)
{
	return Local_1270.f_24[iParam0].f_1;
}

void func_115()
{
	iVar4 = 0;
	while (iVar4 < Local_218.f_112)
	{
		bVar3 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_98[iVar4]);
		if (bVar3)
		{
			iVar0 = NETWORK::NET_TO_ENT(Local_1270.f_98[iVar4]);
			bVar2 = ENTITY::IS_ENTITY_DEAD(iVar0, 0);
		}
		if (func_129(iVar4) > 1 && func_129(iVar4) != 3)
		{
			if (bVar3)
			{
				if (bVar2)
				{
					func_128(iVar4, 3);
				}
				else if (func_127(iVar4))
				{
					func_128(iVar4, 3);
				}
			}
			else
			{
				func_128(iVar4, 3);
			}
		}
		switch (func_129(iVar4))
		{
			case 0:
				if (func_126(iVar4))
				{
					func_128(iVar4, 1);
				}
				break;
			
			case 1:
				if ((!bVar1 && func_125(iVar4)) && func_116(iVar4))
				{
					func_128(iVar4, 2);
					bVar1 = true;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				break;
		}
		iVar4++;
	}
}

int func_116(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_98[iParam0]))
	{
		if (func_31(Local_218.f_112.f_1[iParam0].f_3))
		{
			return 0;
		}
		iVar1 = Local_218.f_112.f_1[iParam0].f_2;
		if (!func_97(iVar1))
		{
			return 0;
		}
		if (func_123(&(Local_1270.f_98[iParam0]), iVar1, Local_218.f_112.f_1[iParam0].f_3, 1, 1, 0, func_124(iParam0, 22), 1, 0, 0))
		{
			iVar0 = NETWORK::NET_TO_OBJ(Local_1270.f_98[iParam0]);
			ENTITY::SET_ENTITY_ROTATION(iVar0, Local_218.f_112.f_1[iParam0].f_7, 2, 1);
			func_120(iParam0, iVar0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_98[iParam0]))
	{
		if (func_119(iParam0))
		{
			iVar0 = NETWORK::NET_TO_OBJ(Local_1270.f_98[iParam0]);
			return func_117(iParam0, iVar0);
		}
		return 1;
	}
	return 0;
}

int func_117(int iParam0, int iParam1)
{
	Stack.Push(Local_433.f_216.f_13 != 0);
	Stack.Push(iParam0);
	Stack.Push(&uVar0);
	Stack.Push(&Var1);
	Stack.Push(&Var4);
	Stack.Push(&iVar7);
	Stack.Push(&cVar8);
	Call_Loc(Local_433.f_216.f_13);
	if (StackVal && StackVal)
	{
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cVar8))
		{
			StringCopy(&cVar8, "chassis_dummy", 24);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar0))
		{
			if (func_118(uVar0))
			{
				iVar14 = NETWORK::NET_TO_ENT(uVar0);
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam1, iVar14))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam1, iVar14, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar14, &cVar8), Var1, Var4, iVar7, 1, 1, 0, 2, 1);
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
			}
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar0))
			{
			}
		}
		return 0;
	}
	return 1;
}

int func_118(var uParam0)
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0) || (!NETWORK::_0xA1607996431332DF(uParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
	{
		if (func_96(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_119(int iParam0)
{
	return func_124(iParam0, 25);
}

void func_120(int iParam0, int iParam1)
{
	unk_0xBA7F0B77D80A4EB7(NETWORK::NET_TO_OBJ(Local_1270.f_98[iParam0]), 300);
	ENTITY::SET_ENTITY_PROOFS(iParam1, func_124(iParam0, 17), func_124(iParam0, 18), func_124(iParam0, 19), func_124(iParam0, 20), func_124(iParam0, 21), 0, 0, 0);
	func_121(iParam0, 0);
	if (!func_124(iParam0, 1))
	{
		unk_0xD76EEEF746057FD6(NETWORK::NET_TO_OBJ(Local_1270.f_98[iParam0]));
	}
	if (func_124(iParam0, 2))
	{
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_1270.f_98[iParam0], 1, 1);
	}
	if (func_124(iParam0, 3))
	{
		ENTITY::SET_ENTITY_COLLISION(iParam1, false, 0);
	}
	if (func_124(iParam0, 4))
	{
		ENTITY::SET_ENTITY_LIGHTS(iParam1, 1);
	}
	if (func_124(iParam0, 5))
	{
		ENTITY::_0xA80AE305E0A3044F(iParam1, 0);
	}
	if (func_124(iParam0, 6))
	{
		ENTITY::SET_ENTITY_DYNAMIC(iParam1, 1);
	}
	if (func_124(iParam0, 7))
	{
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, 0, 0, 0, 0, 1);
	}
	if (func_124(iParam0, 15))
	{
		ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_1270.f_98[iParam0]), 1200);
	}
	if (func_124(iParam0, 8))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
	}
	if (func_124(iParam0, 9))
	{
		unk_0x352E2B5CF420BF3B(NETWORK::NET_TO_OBJ(Local_1270.f_98[iParam0]), 1);
	}
	if (func_124(iParam0, 16))
	{
		ENTITY::SET_ENTITY_COORDS(iParam1, Local_218.f_112.f_1[iParam0].f_3, 1, 0, 0, 1);
	}
	if (func_124(iParam0, 10))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
	}
	if (func_124(iParam0, 11))
	{
		unk_0xD7B80E7C3BEFC396(iParam1, 1);
	}
	if (func_124(iParam0, 12))
	{
		NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(iParam1, true);
	}
	if (func_124(iParam0, 13))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, false, 0);
	}
	if (func_124(iParam0, 14))
	{
		Stack.Push(Local_433.f_216.f_12 != 0);
		Stack.Push(iParam0);
		Stack.Push(&uVar0);
		Stack.Push(&uVar6);
		Call_Loc(Local_433.f_216.f_12);
		if (StackVal && StackVal)
		{
			unk_0x651D3228960D08AF(&uVar0, iParam1);
			AUDIO::SET_STATIC_EMITTER_ENABLED(&uVar0, 1);
			AUDIO::SET_EMITTER_RADIO_STATION(&uVar0, &uVar6);
		}
	}
	if (Local_433.f_216.f_17 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_433.f_216.f_17);
	}
}

void func_121(int iParam0, int iParam1)
{
	if (func_122(&(Local_1270.f_98[iParam0].f_2), iParam1))
	{
	}
}

int func_122(var uParam0, var uParam1)
{
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (GAMEPLAY::IS_BIT_SET((*uParam0)[iVar1], iVar2))
	{
		GAMEPLAY::CLEAR_BIT(uParam0[iVar1], iVar2);
		return 1;
	}
	return 0;
}

int func_123(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
		ENTITY::_SET_ENTITY_REGISTER(NETWORK::NET_TO_OBJ(*uParam0), bParam8);
		if (bParam10)
		{
			NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_OBJ(*uParam0), true);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, 0);
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

bool func_124(int iParam0, int iParam1)
{
	return func_4(&(Local_218.f_112.f_1[iParam0]), iParam1);
}

int func_125(int iParam0)
{
	return 1;
}

int func_126(int iParam0)
{
	if (Local_433.f_216.f_11 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_216.f_11);
		return StackVal;
	}
	return 1;
}

int func_127(int iParam0)
{
	Stack.Push(Local_433.f_216.f_14 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_216.f_14);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

void func_128(int iParam0, int iParam1)
{
	Local_1270.f_98[iParam0].f_1 = iParam1;
}

int func_129(int iParam0)
{
	return Local_1270.f_98[iParam0].f_1;
}

void func_130()
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Local_218.f_95)
	{
		bVar5 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[iVar0]);
		if (bVar5)
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_1270.f_91[iVar0]);
			bVar4 = func_105(Local_1270.f_91[iVar0]);
			bVar6 = func_375(iVar2, 1, 1, 0, 0, 0, 1, 0, 0);
			if (bVar4)
			{
				iVar1 = func_374(iVar0, 2);
			}
		}
		if (func_373(iVar0) > 2)
		{
			if (func_373(iVar0) != 5 && func_373(iVar0) != 3)
			{
				if (!bVar5)
				{
					func_372(iVar0, 5);
				}
				else if (!bVar4)
				{
					func_372(iVar0, 5);
				}
				else if (func_371(iVar0, iVar2))
				{
					func_372(iVar0, 5);
				}
			}
		}
		if (Local_433.f_188.f_25 != 0)
		{
			Stack.Push(iVar0);
			Stack.Push(iVar2);
			Stack.Push(bVar4);
			Stack.Push(iVar1);
			Call_Loc(Local_433.f_188.f_25);
		}
		func_366(iVar0);
		switch (func_373(iVar0))
		{
			case 0:
				if (func_365(iVar0))
				{
					func_372(iVar0, 2);
				}
				break;
			
			case 1:
				if (!bVar5)
				{
					if (func_364(iVar0))
					{
						func_372(iVar0, 2);
					}
				}
				else
				{
					func_108(&(Local_1270.f_91[iVar0]));
				}
				break;
			
			case 2:
				if (!bVar3)
				{
					if (func_363(iVar0))
					{
						if (func_136(iVar0))
						{
							func_372(iVar0, 4);
							bVar3 = true;
						}
					}
				}
				break;
			
			case 4:
				if (bVar4)
				{
				}
				break;
			
			case 5:
				if (!func_46(7))
				{
					func_41(iVar0, 2);
				}
				if (func_135(iVar0, 11))
				{
					func_10(10);
				}
				if (func_135(iVar0, 27))
				{
					if (bVar5)
					{
						func_108(&(Local_1270.f_91[iVar0]));
					}
				}
				if (func_134(iVar0))
				{
					func_108(&(Local_1270.f_91[iVar0]));
					func_372(iVar0, 1);
				}
				break;
			
			case 3:
				break;
			
			case 6:
				if (bVar5 && func_133(iVar0, iVar2))
				{
					func_108(&(Local_1270.f_91[iVar0]));
				}
				break;
			
			case 7:
				break;
		}
		if (bVar6)
		{
			func_132(iVar0, 17);
		}
		else
		{
			func_131(iVar0, 17);
		}
		iVar0++;
	}
}

void func_131(int iParam0, int iParam1)
{
	if (func_122(&(Local_1270.f_91[iParam0].f_2), iParam1))
	{
	}
}

void func_132(int iParam0, int iParam1)
{
	if (func_15(&(Local_1270.f_91[iParam0].f_2), iParam1))
	{
	}
}

int func_133(int iParam0, int iParam1)
{
	if (func_135(iParam0, 27) || func_135(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_134(int iParam0)
{
	if (func_408() != 0)
	{
		return 0;
	}
	if (func_135(iParam0, 1))
	{
		if (Local_433.f_188.f_18 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_188.f_18);
			return StackVal;
		}
		return 1;
	}
	return 0;
}

bool func_135(int iParam0, int iParam1)
{
	return func_4(&(Local_218.f_95.f_1[iParam0]), iParam1);
}

int func_136(int iParam0)
{
	func_98(1, iParam0);
	iVar0 = Local_218.f_95.f_1[iParam0].f_3;
	if (!func_97(iVar0))
	{
		return 0;
	}
	bVar1 = true;
	if (func_31(Local_1270.f_155))
	{
		if (func_135(iParam0, 0))
		{
		}
		else if (func_135(iParam0, 23))
		{
			if (!func_241(iParam0, &(Local_1270.f_155), &(Local_1270.f_161)))
			{
				bVar1 = false;
			}
		}
		else if (func_135(iParam0, 22))
		{
			Stack.Push(iParam0);
			Stack.Push(&(Local_1270.f_155));
			Stack.Push(&(Local_1270.f_161));
			Call_Loc(Local_433.f_188.f_20);
			if (!StackVal)
			{
				bVar1 = false;
			}
		}
		else if (func_135(iParam0, 28))
		{
			if (!func_237(iParam0))
			{
				bVar1 = false;
			}
		}
		else if (func_135(iParam0, 33))
		{
			if (!func_231(iParam0))
			{
				bVar1 = false;
			}
		}
		else
		{
			Local_1270.f_155 = { Local_218.f_95.f_1[iParam0].f_4 };
			Local_1270.f_161 = Local_218.f_95.f_1[iParam0].f_7;
		}
	}
	if (bVar1)
	{
		func_210(Local_1270.f_155, 30f, 0);
		GAMEPLAY::CLEAR_AREA(Local_1270.f_155, 30f, 0, 0, 0, 1);
		if (func_207(&(Local_1270.f_91[iParam0]), iVar0, Local_1270.f_155, Local_1270.f_161, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_1270.f_91[iParam0]);
			func_137(iParam0, iVar2);
			func_74();
			return 1;
		}
	}
	return 0;
}

void func_137(int iParam0, int iParam1)
{
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (Local_433.f_188.f_23 != 0)
	{
		Var1.f_9 = 49;
		Var1.f_59 = 2;
		Var1.f_78 = -1;
		Var1.f_79 = -1;
		Var1.f_96 = -1;
		Var1.f_97 = 1;
		Var1.f_99 = 132;
		Var1.f_100 = -1;
		Stack.Push(iParam0);
		Stack.Push(&Var1);
		Call_Loc(Local_433.f_188.f_23);
		if (StackVal)
		{
			func_146(iParam1, &Var1, 0, 1, func_135(iParam0, 0));
		}
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam1, func_135(iParam0, 21));
	NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(iParam1, func_135(iParam0, 13));
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, func_135(iParam0, 17));
	VEHICLE::_0x2B6747FAA9DB9D6B(iParam1, func_135(iParam0, 17));
	VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(iParam1, func_135(iParam0, 25));
	if (func_135(iParam0, 18))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 7);
	}
	if (func_135(iParam0, 22))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Local_1270.f_155, 0, 0, 1);
	}
	if (func_135(iParam0, 26))
	{
		VEHICLE::SET_PED_TARGETTABLE_VEHICLE_DESTROY(iParam1, 2, 2);
		VEHICLE::SET_PED_TARGETTABLE_VEHICLE_DESTROY(iParam1, 3, 2);
		unk_0x1B212B26DD3C04DF(iParam1, 0);
	}
	if (func_135(iParam0, 7))
	{
		ENTITY::SET_ENTITY_HEALTH(iParam1, 1000, 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, false);
		VEHICLE::SET_VEHICLE_STRONG(iParam1, 1);
		unk_0xBB2333BB87DDD87F(iParam1, 0);
		if (func_145(iVar0))
		{
			VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, 0);
			unk_0x4E20D2A627011E8E(iParam1, func_144(iVar0));
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		{
			VEHICLE::SET_VEHICLE_CAN_BREAK(iParam1, 0);
			VEHICLE::_0xAD2D28A1AFDFF131(iParam1, 0f);
		}
		func_142(iParam1, iVar0);
		func_141(iParam1, 1);
		VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iParam1, 0);
		unk_0x1DDA078D12879EEE(iParam1, func_135(iParam0, 24), 0);
		func_140(iParam0, iParam1);
	}
	if (func_135(iParam0, 30))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
	}
	if (func_135(iParam0, 0))
	{
	}
	else
	{
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		{
			VEHICLE::CONTROL_LANDING_GEAR(iParam1, 2);
		}
		if (VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0))
		{
			VEHICLE::SET_BOAT_ANCHOR(iParam1, 1);
		}
	}
	if (func_135(iParam0, 0) || func_135(iParam0, 33))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, 1, 1, 0);
			ROPE::ACTIVATE_PHYSICS(iParam1);
			ENTITY::SET_ENTITY_DYNAMIC(iParam1, 1);
		}
	}
	VEHICLE::_0xDBC631F109350B8C(iParam1, 1);
	VEHICLE::_0x2311DD7159F00582(iParam1, 1);
	VEHICLE::_0x9737A37136F07E75(iParam1, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iParam1, 1200);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	NETWORK::_0x267C78C60E806B9A(iParam1, 1);
	func_138(iParam1);
	NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_1270.f_91[iParam0], 1);
	if (Local_433.f_188.f_22 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_433.f_188.f_22);
	}
}

void func_138(int iParam0)
{
	func_139(iParam0);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		GAMEPLAY::SET_BIT(&iVar0, 10);
		GAMEPLAY::SET_BIT(&iVar0, 11);
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

void func_139(int iParam0)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, "Not_Allow_As_Saved_Veh"))
		{
			DECORATOR::DECOR_SET_INT(iParam0, "Not_Allow_As_Saved_Veh", 1);
		}
	}
}

void func_140(int iParam0, int iParam1)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMCVehicle", 2))
	{
		DECORATOR::DECOR_SET_BOOL(iParam1, "FMCVehicle", 1);
	}
}

void func_141(int iParam0, bool bParam1)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			GAMEPLAY::SET_BIT(&iVar0, 13);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&iVar0, 13);
		}
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

void func_142(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -1649536104:
		case -312295511:
			unk_0x28D034A93FE31BF5(iParam0, 0);
			break;
	}
	func_143(iParam0);
}

void func_143(var uParam0)
{
	if (!Global_262145.f_4683)
	{
		unk_0x80E3357FDEF45C21(uParam0, 0);
	}
}

float func_144(int iParam0)
{
	switch (iParam0)
	{
		case -1924433270:
			return 1f;
		
		default:
	}
	return 0.2f;
}

bool func_145(int iParam0)
{
	return func_144(iParam0) != 1f;
}

void func_146(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::PLAYER_ID() != func_68())
			{
				uParam1->f_100 = PLAYER::PLAYER_ID();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_194(iParam0, uParam1, bParam2, bParam3);
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				AUDIO::OVERRIDE_VEH_HORN(iParam0, 1, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				unk_0x0350E7E17BA767D0(iParam0, uParam1->f_79);
			}
			if (func_193(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
			{
				uParam1->f_80 = fVar0;
			}
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
			unk_0xF40DD601A65F7F19(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				unk_0x6089CDF6A57F326C(iParam0, uParam1->f_99);
			}
			if (func_192(iParam0))
			{
				func_186(iParam0, func_189(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (unk_0x5ECB40269053C0D4(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				unk_0xA6D3A8750DC73270(iParam0, uParam1->f_98);
			}
			if (GAMEPLAY::IS_BIT_SET(uParam1->f_95, 0))
			{
				func_160(iParam0, &(uParam1->f_81));
			}
			if ((!func_151(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_149(iParam0);
			}
			if (func_148(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						break;
					
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, -1146969353) || VEHICLE::IS_VEHICLE_MODEL(iParam0, 1542143200)) || VEHICLE::IS_VEHICLE_MODEL(iParam0, -579747861))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 0, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						break;
					
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, -1146969353) || VEHICLE::IS_VEHICLE_MODEL(iParam0, 1542143200)) || VEHICLE::IS_VEHICLE_MODEL(iParam0, -579747861))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 1, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 3, false);
						}
						break;
					
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, -1146969353) || VEHICLE::IS_VEHICLE_MODEL(iParam0, 1542143200)) || VEHICLE::IS_VEHICLE_MODEL(iParam0, -579747861))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
						}
						break;
					
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
							if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, -1146969353) || VEHICLE::IS_VEHICLE_MODEL(iParam0, 1542143200)) || VEHICLE::IS_VEHICLE_MODEL(iParam0, -579747861))
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
							}
							else
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				
				case 1:
					if (GAMEPLAY::IS_BIT_SET(uParam1->f_95, 1) && GAMEPLAY::IS_BIT_SET(uParam1->f_95, 2))
					{
						if (GAMEPLAY::IS_BIT_SET(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
					{
						DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (GAMEPLAY::IS_BIT_SET(uParam1->f_95, 1) && GAMEPLAY::IS_BIT_SET(uParam1->f_95, 2))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::_NETWORK_GET_PLAYER_VEHICLE_NETWORK_ID(PLAYER::PLAYER_ID()));
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
					{
						if (func_147(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::_NETWORK_GET_PLAYER_VEHICLE_NETWORK_ID(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						}
						else
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_147(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 1653666139:
		case 1945374990:
		case 219613597:
		case 444994115:
		case -27326686:
		case -801550069:
		case 668439077:
		case -688189648:
		case 540101442:
		case 628003514:
		case 1637620610:
		case -1812949672:
		case 679453769:
		case -1694081890:
		case -1375060657:
		case -1106120762:
		case 1537277726:
		case -755532233:
		case -1374500452:
		case 1909700336:
		case -2042350822:
		case -1293924613:
		case -1478704292:
		case 1239571361:
		case 1009171724:
		case -1924800695:
		case -1744505657:
		case -2061049099:
		case 373261600:
		case 1742022738:
		case 1721676810:
		case 840387324:
		case -715746948:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case 2139203625:
		case -1890996696:
		case 2038858402:
			return 1;
			break;
	}
	return 0;
}

void func_149(int iParam0)
{
	if (Global_262145.f_19684)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
			{
				Var0.x = ENTITY::GET_ENTITY_MODEL(iParam0);
				Var0.y = GAMEPLAY::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0));
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", 3))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iParam0, "RandomID"))
					{
						Var0.z = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535);
						DECORATOR::DECOR_SET_INT(iParam0, "RandomID", Var0.z);
					}
					else
					{
						Var0.z = DECORATOR::DECOR_GET_INT(iParam0, "RandomID");
					}
				}
				func_150(Var0);
			}
		}
	}
}

void func_150(struct<3> Param0)
{
	Var0.x = -582258758;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.z = Param0.x;
	Var0.f_2.f_1 = Param0.y;
	Var0.f_2.f_2 = Param0.z;
	SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 5, func_24(1, 1));
}

int func_151(int iParam0)
{
	if (func_159())
	{
		iVar0 = 0;
		while (iVar0 < 53)
		{
			if (func_158(iVar0) == iParam0)
			{
				if (func_152(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_152(int iParam0)
{
	return func_153(iParam0, 6, 1);
}

int func_153(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_98796.f_1357[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_157() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_154(func_156(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_154(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_155(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_155(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9977;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 11511;
}

int func_157()
{
	return Global_30768;
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

bool func_159()
{
	return Global_98796.f_346 > 0;
}

int func_160(int iParam0, var uParam1)
{
	if (!func_170(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = GRAPHICS::_0xFE26117A5841B2FF(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_168(iParam0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
			if (func_163(&iParam0, iVar1))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_161(iParam0))
	{
	}
	return 0;
}

int func_161(int iParam0)
{
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = GRAPHICS::_0xFE26117A5841B2FF(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar1 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iVar1 = GAMEPLAY::GET_GAME_TIMER();
			}
			iVar2 = GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1315731));
			iVar3 = 20000;
			if (Global_1574410)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				unk_0x82ACC484FFA3B05F(iParam0);
				func_162(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_162(int iParam0)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(iVar0, 16))
	{
		GAMEPLAY::SET_BIT(&iVar0, 16);
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

int func_163(int iParam0, int iParam1)
{
	func_167();
	if (Global_1312467.f_18 != 0 || unk_0x8533CAFDE1F0F336(*iParam0))
	{
		Global_1676268.f_11 = VEHICLE::_GET_VEHICLE_SUSPENSION_HEIGHT(*iParam0);
		if (Global_1676268.f_11 < 0f)
		{
			Global_1676268.f_11 = 0f;
		}
	}
	func_165(*iParam0, &Global_1676268, &(Global_1676268.f_1), &(Global_1676268.f_4), &(Global_1676268.f_7), &(Global_1676268.f_10));
	Global_1676268.f_1.f_2 = (Global_1676268.f_1.f_2 - Global_1676268.f_11);
	if (Global_1676268.f_4.f_2 < 0f)
	{
		Global_1676268.f_12 = 1;
	}
	Global_1676268.f_13 = 200;
	if (ENTITY::GET_ENTITY_MODEL(*iParam0) == 1581459400 || ENTITY::GET_ENTITY_MODEL(*iParam0) == 1561920505)
	{
		Global_1676268.f_13 = 255;
	}
	if (Global_1676268.f_12)
	{
		if (func_164(iParam0, iParam1, Global_1676268, Global_1676268.f_1, Global_1676268.f_4, Global_1676268.f_7, Global_1676268.f_10, 0, Global_1676268.f_13))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1315731 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1315731 = GAMEPLAY::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	else
	{
		Global_1676268.f_14 = { Global_1676268.f_1 };
		Global_1676268.f_14 = (Global_1676268.f_14 * -1f);
		Global_1676268.f_17 = { Global_1676268.f_4 };
		Global_1676268.f_17 = (Global_1676268.f_17 * -1f);
		Global_1676268.f_20 = { Global_1676268.f_7 };
		Global_1676268.f_20.f_1 = (Global_1676268.f_20.f_1 * -1f);
		Global_1676268.f_20.f_2 = (Global_1676268.f_20.f_2 * -1f);
		if (!GRAPHICS::_DOES_VEHICLE_HAVE_DECAL(*iParam0, 0))
		{
			Global_1676268.f_23 = GRAPHICS::_0xFE26117A5841B2FF(*iParam0, 0);
		}
		else
		{
			Global_1676268.f_23 = 3;
		}
		Global_1676268.f_24 = GRAPHICS::_0xFE26117A5841B2FF(*iParam0, 1);
		if (!GRAPHICS::_DOES_VEHICLE_HAVE_DECAL(*iParam0, 1))
		{
			Global_1676268.f_24 = GRAPHICS::_0xFE26117A5841B2FF(*iParam0, 1);
		}
		else
		{
			Global_1676268.f_24 = 3;
		}
		if (((Global_1676268.f_23 == 0 && func_164(iParam0, iParam1, Global_1676268, Global_1676268.f_1, Global_1676268.f_4, Global_1676268.f_7, Global_1676268.f_10, 0, Global_1676268.f_13)) || Global_1676268.f_23 != 0) && ((Global_1676268.f_24 == 0 && func_164(iParam0, iParam1, Global_1676268, Global_1676268.f_14, Global_1676268.f_17, Global_1676268.f_20, Global_1676268.f_10, 1, Global_1676268.f_13)) || Global_1676268.f_24 != 0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1315731 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1315731 = GAMEPLAY::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	return 0;
}

bool func_164(var uParam0, int iParam1, var uParam2, struct<3> Param3, struct<3> Param6, struct<3> Param9, var uParam12, int iParam13, var uParam14)
{
	return GRAPHICS::_ADD_CLAN_DECAL_TO_VEHICLE(*uParam0, PLAYER::GET_PLAYER_PED(iParam1), uParam2, Param3, Param6, Param9, uParam12, iParam13, uParam14);
}

int func_165(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
	if (((!func_166(Global_1676294, 0f, 0f, 0f, 0) && !func_166(Global_1676297, 0f, 0f, 0f, 0)) && !func_166(Global_1676300, 0f, 0f, 0f, 0)) && !Global_1676303 == 0f)
	{
		*uParam2 = { Global_1676294 };
		*uParam3 = { Global_1676297 };
		*uParam4 = { Global_1676300 };
		*uParam5 = Global_1676303;
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case 80636076:
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1995326987:
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1216765807:
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1672195559:
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case -1809822327:
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1903012613:
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -2140431165:
			*uParam2 = { -1f, 0.16f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case -808831384:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 142944341:
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1041692462:
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -114291515:
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case -891462355:
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case 1126868326:
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -16948145:
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 850565707:
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -344943009:
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case 1069929536:
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.65f;
			break;
		
		case -1435919434:
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -682211828:
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case -304802106:
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 736902334:
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case -1696146015:
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 11251904:
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case 2072687711:
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 2006918058:
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case -789894171:
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1311154784:
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 330661258:
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1045541610:
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 108773431:
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case 2006142190:
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case -1130810103:
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1770332643:
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1670998136:
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case 1177543287:
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -394074634:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.75f;
			break;
		
		case -566387422:
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -685276541:
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1883002148:
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1291952903:
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case -5153954:
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -591610296:
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 55628203:
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case -391594584:
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -89291282:
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1137532101:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1909141499:
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 499169875:
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case 2016857647:
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -1800170043:
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case -1775728740:
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1543762099:
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 884422927:
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 301427732:
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.14f;
			break;
		
		case 37348240:
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 418536135:
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.25f;
			break;
		
		case -1289722222:
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 886934177:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1177863319:
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case -624529134:
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1051415893:
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case 544021352:
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.475f;
			break;
		
		case 1269098716:
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -2124201592:
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case 914654722:
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -2064372143:
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -310465116:
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -433375717:
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case -634879114:
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case 1032823388:
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1461482751:
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1348744438:
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -511601230:
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -808457413:
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -909201658:
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case -377465520:
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1830407356:
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -2095439403:
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.44f;
			break;
		
		case 1507916787:
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.515f;
			break;
		
		case -1450650718:
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case -1883869285:
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1150599089:
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1651067813:
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1645267888:
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1934452204:
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1737773231:
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -667151410:
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -1207771834:
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -2045594037:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -14495224:
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 2136773105:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 627094268:
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -893578776:
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case -227741703:
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1685021548:
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case -599568815:
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1189015600:
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 989381445:
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1255452397:
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case -746882698:
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case 1221512915:
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1349725314:
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 873639469:
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1337041428:
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.49f;
			break;
		
		case -1477580979:
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1545842587:
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -2098947590:
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1723137093:
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 970598228:
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case 1123216662:
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 384071873:
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 699456151:
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case -1311240698:
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case -1894894188:
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1008861746:
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 464687292:
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1531094468:
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1762279763:
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 338562499:
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -140902153:
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case -825837129:
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -1622444098:
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case 523724515:
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1777363799:
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 65402552:
			*uParam2 = { 0f, 2.352f, 1.003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case -1122289213:
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -1193103848:
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 758895617:
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0.5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case 92612664:
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1488164764:
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 767087018:
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 486987393:
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -1403128555:
			*uParam2 = { -1.24f, 0.42f, -0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.035f };
			*uParam5 = 0.3f;
			break;
		
		case -1297672541:
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*uParam5 = 0.33f;
			break;
		
		case -142942670:
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case 408192225:
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1836027715:
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case 117401876:
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7125f;
			break;
		
		case 841808271:
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2625f;
			break;
		
		case 75131841:
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case 1373123368:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case -1205801634:
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.325f;
			break;
		
		case -431692672:
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1237253773:
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1078682497:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1011753235:
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -159126838:
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case 1265391242:
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.16f;
			break;
		
		case -1089039904:
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -589178377:
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 729783779:
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -326143852:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case 723973206:
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3875f;
			break;
		
		case 1923400478:
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4375f;
			break;
		
		case 1039032026:
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2875f;
			break;
		
		case 941800958:
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1753414259:
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case 296357396:
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -2107990196:
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1372848492:
		case 410882957:
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.435f;
			break;
		
		case 640818791:
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case -1566741232:
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1987142870:
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case -498054846:
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 1581459400:
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case -1479664699:
			*uParam2 = { -1f, -0.21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 349605904:
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 784565758:
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1663218586:
			*uParam2 = { -1f, 0.4f, -0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case -1353081087:
			*uParam2 = { -1f, 0.21f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case -2119578145:
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1790546981:
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1013450936:
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case -1361687965:
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 525509695:
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1896491931:
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -2040426790:
			*uParam2 = { -1f, 0.42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 2006667053:
			*uParam2 = { -1.12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -2039755226:
			*uParam2 = { -1f, 0f, 0.5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 223258115:
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case -1797613329:
			*uParam2 = { -1f, 0.15f, -0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -899509638:
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case 16646064:
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case -1126264336:
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1119641113:
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -831834716:
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 2068293287:
			*uParam2 = { -1f, 0f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 1878062887:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 634118882:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 470404958:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 666166960:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 906642318:
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 704435172:
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -2030171296:
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -604842630:
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -1660945322:
			*uParam2 = { -1f, -0.18f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1943285540:
			*uParam2 = { -1f, -0.2f, 0.17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -1485523546:
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case 1489967196:
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case -888242983:
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case 1922255844:
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case 1102544804:
			*uParam2 = { -1f, -0.21f, 0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 972671128:
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 633712403:
			*uParam2 = { -1f, -0.4f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -295689028:
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case -602287871:
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1274868363:
			*uParam2 = { -1f, -0.06f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -1757836725:
			*uParam2 = { -1f, -0.21f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1426219628:
			*uParam2 = { -1f, -0.06f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case -1829802492:
			*uParam2 = { -1f, 0.06f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 2123327359:
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 234062309:
			*uParam2 = { -1f, 0.48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1475773103:
			*uParam2 = { 0f, 2.103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1930048799:
			*uParam2 = { -1.2f, 0.03f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case 1203490606:
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -432008408:
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 1549126457:
			*uParam2 = { -1f, -0.06f, 0.565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 683047626:
			*uParam2 = { 0f, 2.33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1232836011:
			*uParam2 = { -1f, -0.12f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case -777172681:
			*uParam2 = { -1f, 0.03f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 1887331236:
			*uParam2 = { -1f, 0f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -2115793025:
			*uParam2 = { -1f, 0.27f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case -1404136503:
			*uParam2 = { -1f, 0.27f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case 822018448:
			*uParam2 = { -1f, 0f, 0.34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case 2035069708:
			*uParam2 = { -1f, 0.335f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case -255678177:
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case -1606187161:
			*uParam2 = { 0f, -0.133f, 0.61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case 1873600305:
			*uParam2 = { -1f, 0.31f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case -405626514:
			*uParam2 = { -1f, 0.06f, 0.325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case -1009268949:
			*uParam2 = { -1f, 0.3f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case -570033273:
			*uParam2 = { -1f, 0.2f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case -609625092:
			*uParam2 = { -1f, 0.18f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.095f;
			break;
		
		case -1558399629:
			*uParam2 = { -1f, -0.03f, -0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1026149675:
			*uParam2 = { 0f, 2.352f, 0.253f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case -618617997:
			*uParam2 = { -1f, 0.33f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case -1289178744:
			*uParam2 = { -1f, -0.54f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case -1842748181:
			*uParam2 = { -0.9875f, -0.0175f, -0.01f };
			*uParam3 = { 0.8975f, -0.26f, -0.0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case -2022483795:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -239841468:
			*uParam2 = { -1f, 0.006f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case 1790834270:
			*uParam2 = { -1f, 0.225f, 0.541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case 196747873:
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 627535535:
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case -757735410:
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case -2048333973:
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -482719877:
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 1034187331:
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 1093792632:
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -1758137366:
			*uParam2 = { -1f, 0.153f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 941494461:
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 777714999:
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1886268224:
			*uParam2 = { -1f, -0.273f, -0.02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case 1074745671:
			*uParam2 = { -1f, -0.273f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case 1180875963:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 272929391:
			*uParam2 = { -1f, 0f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 989294410:
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case -1405937764:
			*uParam2 = { -1f, 0.33f, 0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.2f;
			break;
		
		case 719660200:
			*uParam2 = { -1f, -0.273f, 0.084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case -982130927:
			*uParam2 = { -1f, 0.159f, -0.193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 159274291:
			*uParam2 = { -1f, 0.309f, 0.276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case 223240013:
			*uParam2 = { -1f, 0.159f, -0.127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -32236122:
			*uParam2 = { -1f, 0.501f, 0.531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 433954513:
			*uParam2 = { -1.5f, 0.42f, 0.584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 884483972:
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case -1210451983:
			*uParam2 = { 0f, 1.515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case 1356124575:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case 1504306544:
			*uParam2 = { -1f, 0.201f, 0.114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1939284556:
			*uParam2 = { -1.5f, 0.906f, 0.071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case 917809321:
			*uParam2 = { -1f, 0.441f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 177270108:
			*uParam2 = { -1.3f, 2.045f, 0.802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 387748548:
			*uParam2 = { -1.627f, 2.456f, 0.745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 1392481335:
			*uParam2 = { -1f, 0.186f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case -998177792:
			*uParam2 = { -1f, 0.432f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case -1242608589:
			*uParam2 = { -1f, 0.232f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case 1841130506:
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 2049897956:
			*uParam2 = { 0f, 1.972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case -2118308144:
			*uParam2 = { -2.02f, 6.45f, -0.716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1483171323:
			*uParam2 = { -1f, -0.291f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case 886810209:
			*uParam2 = { -1f, 0.23f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case -1693015116:
			*uParam2 = { -1.891f, 2.144f, 0.657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -692292317:
			*uParam2 = { -2.127f, 5.413f, 1.132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.34f;
			break;
		
		case -1435527158:
			*uParam2 = { -0.897f, 1.391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -212993243:
			*uParam2 = { -1.51f, 0.71f, 0.451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 1561920505:
			*uParam2 = { -1f, 0.298f, 0.257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.36f;
			break;
		
		case -1848994066:
			*uParam2 = { -1f, 0.181f, -0.066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1741861769:
			*uParam2 = { -1f, 0.301f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1104234922:
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1871995513:
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1352136073:
			*uParam2 = { -1f, 0.616f, -0.131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -313185164:
			*uParam2 = { -1f, 0f, 0.116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -2079788230:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 600450546:
			*uParam2 = { -1f, -0.228f, 0.321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -410205223:
			*uParam2 = { -1f, 0.203f, 0.126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 867799010:
			*uParam2 = { -1f, -0.126f, 0.208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1529242755:
			*uParam2 = { -1f, 0.252f, -0.095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 903794909:
			*uParam2 = { -1f, 0f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1532697517:
			*uParam2 = { -1.3f, 0.18f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 15219735:
			*uParam2 = { -1f, -0.134f, 0.158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 661493923:
			*uParam2 = { -1f, 0.002f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 838982985:
			*uParam2 = { -1f, -0.175f, 0.242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -391595372:
			*uParam2 = { -1f, 0f, 0.244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case -121446169:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case 1909189272:
			*uParam2 = { -1f, 0f, 0.407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.225f;
			break;
		
		case 1617472902:
			*uParam2 = { -1f, 0f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -1267543371:
			*uParam2 = { -1f, 0.441f, -0.128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 931280609:
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1046206681:
			*uParam2 = { -1f, 0f, 0.0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1259134696:
			*uParam2 = { 0f, 1.592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 1115909093:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1031562256:
			*uParam2 = { -1f, 0.679f, 0.514f };
			*uParam3 = { 1f, 0f, -0.75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case -376434238:
			*uParam2 = { -1.588f, 0.315f, 0.337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case -986944621:
			*uParam2 = { -1f, 0f, 0.221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1134706562:
			*uParam2 = { -1f, 0f, 0.219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -2120700196:
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case -214906006:
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -988501280:
			*uParam2 = { -1f, 0.393f, 0.162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case 1254014755:
			*uParam2 = { -1f, 1.266f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 219613597:
			*uParam2 = { -1.5f, 0.833f, 0.391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case 1945374990:
			*uParam2 = { -1.125f, 2.691f, 0.318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1653666139:
			*uParam2 = { -1.5f, 1.853f, 0.779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.38f;
			break;
		
		case 500482303:
			*uParam2 = { -1f, 0.195f, 0.105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 2044532910:
			*uParam2 = { -1.73f, 0.159f, 0.61f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -638562243:
			*uParam2 = { -1f, -0.188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -420911112:
			*uParam2 = { -1.213f, 1.546f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 321186144:
			*uParam2 = { -1f, 0.036f, 0.096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -54332285:
			*uParam2 = { -1f, 0.249f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 2069146067:
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case -1988428699:
			*uParam2 = { -1.73f, 3.397f, 0.724f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 668439077:
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case -1694081890:
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case -2042350822:
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case 2139203625:
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -1890996696:
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 2038858402:
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -801550069:
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 679453769:
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1909700336:
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1566607184:
			*uParam2 = { -1f, 0.167f, 0.159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1591739866:
			*uParam2 = { -1.5f, 1.066f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case 1279262537:
			*uParam2 = { -1f, 0.111f, 0.123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -688189648:
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -1375060657:
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -1293924613:
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -2096690334:
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1009171724:
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1924800695:
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1744505657:
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 444994115:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1637620610:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -755532233:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 628003514:
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1537277726:
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1239571361:
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -331467772:
			*uParam2 = { -1f, -0.091f, 0.207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 1721676810:
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 840387324:
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -715746948:
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -507495760:
			*uParam2 = { -1f, -0.105f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -2061049099:
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 373261600:
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1742022738:
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1168952148:
			*uParam2 = { -1f, 0.415f, 0.394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1456744817:
			*uParam2 = { -1f, 0.171f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -49115651:
			*uParam2 = { -1f, 0f, 0.163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 540101442:
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -1106120762:
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -1478704292:
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -1349095620:
			*uParam2 = { -1f, 0.687f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 686471183:
			*uParam2 = { -1.045f, 0.15f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 310284501:
			*uParam2 = { -1f, 0.12f, 0.334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1323778901:
			*uParam2 = { -1f, 0.372f, 0.439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case 722226637:
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case 1934384720:
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case -362150785:
			*uParam2 = { -1f, 0.27f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1854776567:
			*uParam2 = { -1f, 0.195f, -0.063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -208911803:
			*uParam2 = { -1f, 0.213f, 0.213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -664141241:
			*uParam2 = { -1f, 0.576f, -0.123f };
			*uParam3 = { 0.997f, -0.105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -941272559:
			*uParam2 = { -1f, -0.207f, 0.042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case -882629065:
			*uParam2 = { -1f, 0.012f, 0.147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1620126302:
			*uParam2 = { -1f, 0.216f, 0.216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case -1829436850:
			*uParam2 = { -1f, 0.24f, 0.255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -447711397:
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 1416466158:
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -1804415708:
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -324618589:
			*uParam2 = { -1f, 0.357f, 0.256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case 1044193113:
			*uParam2 = { -1f, 0.426f, 0.339f };
			*uParam3 = { 1f, 0.06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1862507111:
			*uParam2 = { -1f, 0.108f, 0.234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -682108547:
			*uParam2 = { -1f, 0.273f, -0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 833469436:
			*uParam2 = { -1f, 0.35f, 0.456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 83136452:
			*uParam2 = { 0f, 1.9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1118611807:
			*uParam2 = { -1f, 0.104f, 0.339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 987469656:
			*uParam2 = { -1f, 0.104f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -834353991:
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1456336509:
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 872704284:
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 409049982:
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 394110044:
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case 1693751655:
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 2031587082:
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 960812448:
			*uParam2 = { -1f, 0.0965f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1756021720:
			*uParam2 = { 0f, 2.019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1132721664:
			*uParam2 = { -1.5f, 0.42f, -0.2f };
			*uParam3 = { 1f, -0.0997f, 0.0415f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 1284356689:
			*uParam2 = { -1.202f, 0.034f, 0.6635f };
			*uParam3 = { 1f, -0.002f, 0f };
			*uParam4 = { 0f, -0.7398f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -2122646867:
			*uParam2 = { -1.5f, 0.379f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.24f;
			break;
		
		case 2134119907:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case 1717532765:
			*uParam2 = { -1.76f, 0.105f, 0.009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case -2098954619:
			*uParam2 = { 0f, 1.252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case -913589546:
			*uParam2 = { 0f, 2.135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.205f;
			break;
		
		case 1802742206:
			*uParam2 = { 0f, 2.352f, 0.3f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.135f;
			break;
		
		case 67753863:
			*uParam2 = { -1f, 0.252f, 0.203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.21f;
			break;
		
		case -1810806490:
			*uParam2 = { 0f, 1.654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -631322662:
			*uParam2 = { -1.08f, 0.28f, -0.093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -838099166:
			*uParam2 = { -1.64f, 0.7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1728685474:
			*uParam2 = { -1f, -0.021f, 0.273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -1358197432:
			*uParam2 = { -1f, 0.156f, 0.099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1107404867:
			*uParam2 = { -1.5f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	}
	return 1;
}

bool func_166(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

void func_167()
{
	Global_1676268 = 0;
	Global_1676268.f_1 = { 0f, 0f, 0f };
	Global_1676268.f_4 = { 0f, 0f, 0f };
	Global_1676268.f_7 = { 0f, 0f, 0f };
	Global_1676268.f_10 = 0f;
	Global_1676268.f_11 = 0f;
	Global_1676268.f_12 = 0;
	Global_1676268.f_13 = 0;
	Global_1676268.f_14 = { 0f, 0f, 0f };
	Global_1676268.f_17 = { 0f, 0f, 0f };
	Global_1676268.f_20 = { 0f, 0f, 0f };
	Global_1676268.f_23 = 0;
	Global_1676268.f_24 = 0;
}

int func_168(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (GRAPHICS::_DOES_VEHICLE_HAVE_DECAL(iParam0, 0) || func_169(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_169(int iParam0)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				return GAMEPLAY::IS_BIT_SET(iVar0, 16);
			}
		}
	}
	return 0;
}

int func_170(int iParam0, var uParam1)
{
	if (NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	}
	else
	{
		iVar0 = func_68();
	}
	bVar1 = false;
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		if (func_181(15, 0))
		{
			bVar1 = true;
		}
		else if (func_177(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::_0x595F028698072DD9(0, -1, 1)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::_NETWORK_PLAYER_IS_IN_CLAN()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || iVar0 == func_68()) || !func_28(iVar0, 0, 0)) || !bVar1) || func_171(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_171(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (func_173(PLAYER::PLAYER_ID()) == 3)
	{
		if (func_172(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1676293)
	{
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case 788045382:
		case -1453280962:
		case -2128233223:
		case -1269889662:
		case 699456151:
		case -1311240698:
		case -349601129:
		case 743478836:
		case 301427732:
		case -1661854193:
		case 534258863:
		case -827162039:
		case -312295511:
		case -1860900134:
		case 2071877360:
		case -591651781:
		case -401643538:
		case 349315417:
		case -915704871:
		case 237764926:
		case -631760477:
		case -1106353882:
		case -777172681:
		case 86520421:
		case 1887331236:
		case 1549126457:
		case 101905590:
		case -663299102:
		case 390201602:
		case -1071380347:
		case 741090084:
		case -27326686:
		case -1812949672:
		case -1374500452:
		case -1232836011:
		case 2067820283:
		case 482197771:
		case 819197656:
		case 6774487:
		case 1491277511:
		case -440768424:
		case -1523428744:
		case -674927303:
		case -1590337689:
		case 301304410:
		case 340154634:
		case -1960756985:
		case -1254331310:
		case 408825843:
		case 740289177:
		case 1492612435:
		case 1181339704:
			return 1;
			break;
		
		case 65402552:
		case 1026149675:
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 7) != -1)
			{
				return 1;
			}
			break;
		
		case 384071873:
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) == 1)
			{
				return 1;
			}
			break;
		
		case 1234311532:
			return 1;
			break;
		
		case 562680400:
		case 1897744184:
		case -1924433270:
		case 1502869817:
		case -1881846085:
		case 177270108:
		case 387748548:
			return 1;
			break;
		
		case 1489874736:
			return 1;
			break;
		
		case -1988428699:
			return 1;
			break;
		
		case -286046740:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case 916547552:
		case -48031959:
		case -907477130:
			return 1;
			break;
		
		case -2098954619:
			if ((VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 0 || VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 1) || VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 7)
			{
				return 1;
			}
			break;
		
		case 67753863:
			if ((VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 4 || VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 5) || VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_172(int iParam0)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_173(int iParam0)
{
	if (func_176(iParam0) == 233)
	{
		return func_174(iParam0);
	}
	return -1;
}

int func_174(int iParam0)
{
	if (func_175(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_175(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_176(int iParam0)
{
	if (func_175(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

bool func_177(bool bParam0)
{
	return func_178(PLAYER::PLAYER_ID(), bParam0);
}

int func_178(int iParam0, bool bParam1)
{
	return func_179(iParam0, bParam1, 1);
}

int func_179(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_180(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_68() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_180(int iParam0, int iParam1)
{
	if (iParam0 != func_68())
	{
		if (Global_1628237[iParam0].f_11 != func_68())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	iVar0 = func_183(iParam0);
	iVar1 = iParam0;
	return GAMEPLAY::IS_BIT_SET(iVar0, func_182(iVar1));
}

int func_182(int iParam0)
{
	return (iParam0 % 32);
}

int func_183(int iParam0)
{
	iVar0 = func_154(func_184(iParam0), -1, 0);
	return iVar0;
}

int func_184(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_185(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1290;
			break;
	}
	return 1290;
}

int func_185(int iParam0)
{
	return (iParam0 / 32);
}

void func_186(int iParam0, int iParam1)
{
	iVar1 = func_188(iParam1);
	func_187(iVar1, &uVar0);
	unk_0x6089CDF6A57F326C(iParam0, uVar0);
}

bool func_187(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
		
		case 1:
			*uParam1 = 5;
			break;
		
		case 2:
			*uParam1 = 6;
			break;
		
		case 3:
			*uParam1 = 7;
			break;
		
		case 4:
			*uParam1 = 111;
			break;
		
		case 5:
			*uParam1 = 112;
			break;
		
		case 6:
			*uParam1 = 107;
			break;
		
		case 7:
			*uParam1 = 104;
			break;
		
		case 8:
			*uParam1 = 98;
			break;
		
		case 9:
			*uParam1 = 100;
			break;
		
		case 10:
			*uParam1 = 102;
			break;
		
		case 11:
			*uParam1 = 99;
			break;
		
		case 12:
			*uParam1 = 105;
			break;
		
		case 13:
			*uParam1 = 106;
			break;
		
		case 14:
			*uParam1 = 37;
			break;
		
		case 15:
			*uParam1 = 90;
			break;
		
		case 16:
			*uParam1 = 88;
			break;
		
		case 17:
			*uParam1 = 89;
			break;
		
		case 18:
			*uParam1 = 91;
			break;
		
		case 19:
			*uParam1 = 38;
			break;
		
		case 20:
			*uParam1 = 138;
			break;
		
		case 21:
			*uParam1 = 36;
			break;
		
		case 22:
			*uParam1 = 27;
			break;
		
		case 23:
			*uParam1 = 28;
			break;
		
		case 24:
			*uParam1 = 29;
			break;
		
		case 25:
			*uParam1 = 150;
			break;
		
		case 26:
			*uParam1 = 30;
			break;
		
		case 27:
			*uParam1 = 31;
			break;
		
		case 28:
			*uParam1 = 32;
			break;
		
		case 29:
			*uParam1 = 35;
			break;
		
		case 30:
			*uParam1 = 135;
			break;
		
		case 31:
			*uParam1 = 137;
			break;
		
		case 32:
			*uParam1 = 136;
			break;
		
		case 33:
			*uParam1 = 71;
			break;
		
		case 34:
			*uParam1 = 145;
			break;
		
		case 35:
			*uParam1 = 63;
			break;
		
		case 36:
			*uParam1 = 64;
			break;
		
		case 37:
			*uParam1 = 65;
			break;
		
		case 38:
			*uParam1 = 66;
			break;
		
		case 39:
			*uParam1 = 67;
			break;
		
		case 40:
			*uParam1 = 68;
			break;
		
		case 41:
			*uParam1 = 69;
			break;
		
		case 42:
			*uParam1 = 73;
			break;
		
		case 43:
			*uParam1 = 70;
			break;
		
		case 44:
			*uParam1 = 74;
			break;
		
		case 45:
			*uParam1 = 51;
			break;
		
		case 46:
			*uParam1 = 53;
			break;
		
		case 47:
			*uParam1 = 54;
			break;
		
		case 48:
			*uParam1 = 92;
			break;
	}
	return *uParam1 != -1;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_189(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_190()) && Global_1314033)
	{
		if ((iParam0 == Global_1314034 && iParam1 == Global_1314035) && iParam2 == Global_1314036)
		{
			return 13;
		}
	}
	return 0;
}

int func_190()
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::_0x67A5589628E0CFF6())
		{
			Var0 = { func_191() };
			if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_191()
{
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_192(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case -1812949672:
			return 1;
			break;
	}
	return 0;
}

bool func_193(int iParam0, var uParam1)
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case -312295511:
			*uParam1 = 1f;
			break;
		
		case 682434785:
			*uParam1 = 1f;
			break;
		
		case -1912017790:
			*uParam1 = 1f;
			break;
		
		case -1523619738:
			*uParam1 = 0.2f;
			break;
		
		case -32878452:
			*uParam1 = 0.15f;
			break;
		
		case -1007528109:
			*uParam1 = 0.3f;
			break;
		
		case -42959138:
			*uParam1 = 0.5f;
			break;
		
		case -1763555241:
			*uParam1 = 0.3f;
			break;
		
		case -749299473:
			*uParam1 = 0.4f;
			break;
		
		case 1565978651:
			*uParam1 = 0.3f;
			break;
		
		case 1036591958:
			*uParam1 = 0.4f;
			break;
		
		case -1386191424:
			*uParam1 = 0.4f;
			break;
		
		case -975345305:
			*uParam1 = 0.4f;
			break;
		
		case -392675425:
			*uParam1 = 0.3f;
			break;
		
		case -1700874274:
			*uParam1 = 0.5f;
			break;
		
		case 1043222410:
			*uParam1 = 0.15f;
			break;
		
		case -1435527158:
			*uParam1 = 0.6f;
			break;
		
		case 668439077:
			*uParam1 = 1f;
			break;
		
		case -1694081890:
			*uParam1 = 1f;
			break;
		
		case -2042350822:
			*uParam1 = 1f;
			break;
		
		case 2139203625:
			*uParam1 = 1f;
			break;
		
		case -1890996696:
			*uParam1 = 1f;
			break;
		
		case 2038858402:
			*uParam1 = 1f;
			break;
		
		case -801550069:
			*uParam1 = 1f;
			break;
		
		case 679453769:
			*uParam1 = 1f;
			break;
		
		case 1909700336:
			*uParam1 = 1f;
			break;
		
		case -27326686:
			*uParam1 = 1f;
			break;
		
		case -1812949672:
			*uParam1 = 1f;
			break;
		
		case -1374500452:
			*uParam1 = 1f;
			break;
		
		case -688189648:
			*uParam1 = 1f;
			break;
		
		case -1375060657:
			*uParam1 = 1f;
			break;
		
		case -1293924613:
			*uParam1 = 1f;
			break;
		
		case 1009171724:
			*uParam1 = 1f;
			break;
		
		case -1924800695:
			*uParam1 = 1f;
			break;
		
		case -1744505657:
			*uParam1 = 1f;
			break;
		
		case 444994115:
			*uParam1 = 1f;
			break;
		
		case 1637620610:
			*uParam1 = 1f;
			break;
		
		case -755532233:
			*uParam1 = 1f;
			break;
		
		case 628003514:
			*uParam1 = 1f;
			break;
		
		case 1537277726:
			*uParam1 = 1f;
			break;
		
		case 1239571361:
			*uParam1 = 1f;
			break;
		
		case 1721676810:
			*uParam1 = 1f;
			break;
		
		case 840387324:
			*uParam1 = 1f;
			break;
		
		case -715746948:
			*uParam1 = 1f;
			break;
		
		case -1146969353:
			*uParam1 = 1f;
			break;
		
		case 1542143200:
			*uParam1 = 1f;
			break;
		
		case -579747861:
			*uParam1 = 1f;
			break;
		
		case -2061049099:
			*uParam1 = 1f;
			break;
		
		case 373261600:
			*uParam1 = 1f;
			break;
		
		case 1742022738:
			*uParam1 = 1f;
			break;
		
		case 540101442:
			*uParam1 = 1f;
			break;
		
		case -1106120762:
			*uParam1 = 1f;
			break;
		
		case -1478704292:
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

void func_194(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (!func_205(iParam0))
		{
			if (GAMEPLAY::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == 743478836)
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == 941800958)
		{
			iVar0 = 1;
			if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, func_204(iVar0 + 1)))
			{
			}
			else
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_77), func_204(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == -1189015600 || uParam1->f_66 == 989381445)
		{
			iVar1 = 1;
			if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, func_204(iVar1 + 1)))
			{
			}
			else
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_77), func_204(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, func_204(iVar2)))
				{
				}
				else
				{
					GAMEPLAY::SET_BIT(&(uParam1->f_77), func_204(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, func_204(iVar3)))
				{
				}
				else
				{
					GAMEPLAY::SET_BIT(&(uParam1->f_77), func_204(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == 1181339704)
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, func_204(iVar4)))
					{
					}
					else
					{
						GAMEPLAY::SET_BIT(&(uParam1->f_77), func_204(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == -1728685474)
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_77), 0);
			}
		}
		if (uParam1->f_66 == 433954513)
		{
			unk_0x1087BC8EC540DAEB(iParam0, 0);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				unk_0x1087BC8EC540DAEB(iParam0, 1);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((GAMEPLAY::IS_BIT_SET(uParam1->f_77, 15) || func_203(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_202())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_201(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, !GAMEPLAY::IS_BIT_SET(uParam1->f_77, 9));
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, GAMEPLAY::IS_BIT_SET(uParam1->f_77, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, GAMEPLAY::IS_BIT_SET(uParam1->f_77, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, GAMEPLAY::IS_BIT_SET(uParam1->f_77, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, GAMEPLAY::IS_BIT_SET(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, GAMEPLAY::IS_BIT_SET(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_200(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_200(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_195(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, func_204(iVar5 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar5 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar5 + 1, 0);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar5 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar5 + 1, 1);
				}
				iVar5++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == 819197656 || ENTITY::GET_ENTITY_MODEL(iParam0) == -777172681) || ENTITY::GET_ENTITY_MODEL(iParam0) == -1232836011)
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, 0);
			}
		}
		if (((VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && unk_0xE43701C36CAFF1A4(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, -2118308144)) && !((((Global_4456448.f_75705 == 6 || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 18) || Global_4456448.f_75705 == 19) && Global_4456448.f_2 == 20))
		{
			if (!GAMEPLAY::IS_BIT_SET(uParam1->f_77, 23))
			{
				if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_195(int iParam0, var uParam1, var uParam2)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xE41033B25D003A07(*iParam0, 255);
				}
				else
				{
					unk_0xE41033B25D003A07(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_199(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_198(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_198(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_197(iParam0);
	if (func_196(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
	}
	return 1;
}

int func_196(int iParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
				iVar2 = GAMEPLAY::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == GAMEPLAY::GET_HASH_KEY("MNU_CAGE") || iVar2 == GAMEPLAY::GET_HASH_KEY("SABRE_CAG"))
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

void func_197(var uParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case -1700874274:
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
	}
}

int func_198(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case -1797613329:
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case -2039755226:
				return 3;
				break;
		}
		iVar0 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 38);
		iVar1 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_199(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1790546981:
		case -1013450936:
		case -1361687965:
		case 1896491931:
		case -2040426790:
		case 2006667053:
			return 1;
			break;
		
		case 223258115:
			if (!Global_262145.f_14219)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1797613329:
			if (!Global_262145.f_14220)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -899509638:
			if (!Global_262145.f_14218)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1126264336:
			if (!Global_262145.f_14221)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1119641113:
			if (!Global_262145.f_14223)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -2039755226:
			if (!Global_262145.f_14222)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -295689028:
		case 633712403:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -2022483795:
			if (Global_262145.f_18669)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1790834270:
			if (Global_262145.f_18671)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -757735410:
			if (Global_262145.f_18675)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 196747873:
			if (Global_262145.f_18672)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1093792632:
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -482719877:
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1074745671:
			if (Global_262145.f_18682)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20625)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20626)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1717532765:
		case 1107404867:
		case -913589546:
			return 1;
			break;
	}
	return 0;
}

void func_200(int iParam0, var uParam1)
{
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		iVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == -1558399629 || ENTITY::GET_ENTITY_MODEL(iParam0) == -1804415708)
		{
			return;
		}
		if (iVar0 == -1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case -1775728740:
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

bool func_202()
{
	return DLC2::IS_DLC_PRESENT(-1691188696);
}

int func_203(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return GAMEPLAY::IS_BIT_SET(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_205(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!func_206(PLAYER::PLAYER_ID(), -1))
		{
			iParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (func_173(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (func_172(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_206(int iParam0, int iParam1)
{
	if (func_28(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_207(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
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
				NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(iVar1, true);
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
			func_208(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_208(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_209(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
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

int func_209(int iParam0, struct<3> Param1, int iParam4)
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

void func_210(struct<3> Param0, float fParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_227(&(Global_75441.f_555[0]), iVar0))
		{
			if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_75441.f_555[0], iParam4) <= fParam3)
			{
				func_211(iVar0);
			}
		}
		iVar0++;
	}
}

void func_211(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_227(&(Global_75441.f_555[0]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_75441.f_139[iParam0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_75441.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_75441.f_139[iParam0], 1, 1);
				VEHICLE::DELETE_VEHICLE(&(Global_75441.f_139[iParam0]));
			}
		}
		Global_75441[iParam0] = 1;
		if (GAMEPLAY::IS_BIT_SET(Global_75441.f_555[0].f_9, 13))
		{
			if (((((iParam0 == 24 && func_226(iParam0, 0)) && Global_76350.f_66 == 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] != 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] > 3) && (!func_215(0, Global_75441.f_555[0].f_12) || !func_215(1, Global_75441.f_555[0].f_12)))
			{
				func_214(&(Global_111638.f_32744.f_69[Global_75441.f_555[0].f_14]), &Global_76350);
				Global_76428 = Global_111638.f_32744.f_5591;
			}
			func_212(iParam0, 0);
		}
	}
}

void func_212(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_226(iParam0, 0))
		{
			func_213(iParam0, 1, 0);
			func_213(iParam0, 2, 0);
			func_213(iParam0, 3, 0);
			func_213(iParam0, 4, 0);
			func_213(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_213(iParam0, 0, 0);
	}
}

void func_213(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_111638.f_32744[iParam0]), iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_111638.f_32744[iParam0]), iParam1);
	}
}

void func_214(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_215(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_225(&(Global_111638.f_32744.f_5038[iVar0])))
	{
		return 0;
	}
	return func_216(Global_111638.f_32744.f_5038[iVar0][iParam0].f_66, 0);
}

int func_216(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == -915704871 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == 237764926 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 349315417 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == -613725916) || (iParam0 == -401643538 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_224())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < DLC1::GET_NUM_DLC_VEHICLES())
		{
			if (DLC1::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (DLC1::_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == -150975354)
	{
		if ((((!func_223() && !func_222()) && !func_221()) && !func_220()) && !func_224())
		{
			return 0;
		}
	}
	if ((iParam0 == 37348240 || iParam0 == 11251904) || iParam0 == 544021352)
	{
		if ((GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_PC_VERSION()) || GAMEPLAY::IS_ORBIS_VERSION())
		{
		}
		else if (!func_221())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_219(iParam0))
		{
			return 0;
		}
	}
	if (!func_217(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_217(int iParam0)
{
	if (!func_218())
	{
		return 1;
	}
	UNK3::_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case -827162039:
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case 989294410:
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case 941494461:
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case -1649536104:
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case 1180875963:
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case 682434785:
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case -1912017790:
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case -1590337689:
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!MOBILE::_NETWORK_SHOP_IS_ITEM_UNLOCKED(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_218()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_219(int iParam0)
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

int func_220()
{
	return 0;
}

int func_221()
{
	return 1;
}

int func_222()
{
	return 1;
}

int func_223()
{
	if (DLC2::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_224()
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

int func_225(var uParam0)
{
	return *uParam0;
}

bool func_226(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_111638.f_32744[iParam0], iParam1);
}

int func_227(var uParam0, int iParam1)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_228(0, 1);
			uParam0->f_12 = 0;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_228(0, 1);
			uParam0->f_12 = 0;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_228(1, 1);
			uParam0->f_12 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_228(1, 2);
			uParam0->f_12 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 19);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_228(1, 1);
			uParam0->f_12 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_228(1, 2);
			uParam0->f_12 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 19);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_228(2, 1);
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_228(2, 1);
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_228(2, 1);
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = -186537451;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = -1030275036;
			iVar0 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = 970356638;
			iVar0 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 27);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 27);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 27);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 11);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = -1008861746;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 11);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = 356391690;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = 850565707;
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 9);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = -1673356438;
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 9);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = 1394036463;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = 771711535;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = -1323100960;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = 1917016601;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = -823509173;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = 338562499;
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = 384071873;
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = 1531094468;
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = 1123216662;
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = 771711535;
			uParam0->f_13 = 308;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 30);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = 1033245328;
			uParam0->f_13 = 404;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = 1126868326;
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_224())
			{
				uParam0->f_4 = -613725916;
			}
			else
			{
				uParam0->f_4 = -150975354;
			}
			uParam0->f_13 = 401;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_224())
			{
				uParam0->f_4 = -613725916;
			}
			else
			{
				uParam0->f_4 = -150975354;
			}
			uParam0->f_13 = 401;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = -1269889662;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = -1066334226;
			uParam0->f_13 = 308;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = -326143852;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = -326143852;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = -901163259;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 30);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = -901163259;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 30);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == 165154707 || uParam0->f_4 == 1824333165) || uParam0->f_4 == 621481054) || uParam0->f_4 == -1214505995) || uParam0->f_4 == 1981688531) || uParam0->f_4 == -1214293858)
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_166(Global_111638.f_32744.f_1864[uParam0->f_14], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_166(Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1][uParam0->f_12];
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_166(Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_228(int iParam0, int iParam1)
{
	if (func_230(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_229(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_229(int iParam0, var uParam1, int iParam2)
{
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1008861746;
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = -1883869285;
			}
			switch (iVar0)
			{
				case -1008861746:
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case -1883869285:
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = -1435919434;
			switch (iVar0)
			{
				case -1435919434:
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = 736902334;
			}
			else if (iParam2 == 2)
			{
				iVar0 = -2140431165;
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = -2140431165;
			}
			else
			{
				iVar0 = 736902334;
			}
			switch (iVar0)
			{
				case -2140431165:
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case 736902334:
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_230(int iParam0)
{
	return iParam0 < 3;
}

int func_231(int iParam0)
{
	if (func_234(iParam0, &Var4, &Var1, &uVar0))
	{
		if (func_233(iParam0, Var4, Var1, uVar0))
		{
			Local_1270.f_155 = { Var4 };
			Local_1270.f_161 = func_232(Var4, Var1);
			return 1;
		}
	}
	return 0;
}

var func_232(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return GAMEPLAY::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

int func_233(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (!func_59(Param1, 20f, 1f, 1f, 15f, 1, 1, 1, 200f, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar0, 1, 0))
	{
		if (Param1.z < fVar0)
		{
			return 0;
		}
	}
	else
	{
		fVar0 = PATHFIND::_0x336511A34F2E5185(Param1.x, Param1.y);
		if (Param1.z < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_234(int iParam0, var uParam1, var uParam2, var uParam3)
{
	fVar0 = 200f;
	if (func_135(iParam0, 0))
	{
	}
	else
	{
		*uParam2 = { Local_218.f_95.f_1[iParam0].f_4 };
	}
	*uParam1 = { func_236(*uParam2, 0f, ((-1f * fVar0) * SYSTEM::SIN((SYSTEM::TO_FLOAT(Local_1270.f_148) * 30f))), (fVar0 * SYSTEM::COS((SYSTEM::TO_FLOAT(Local_1270.f_148) * 30f))), 0f) };
	uParam1->f_2 = (uParam1->f_2 + func_235());
	Local_1270.f_148++;
	if (Local_1270.f_148 >= 12)
	{
		Local_1270.f_148 = 0;
	}
	return 1;
}

float func_235()
{
	return 60f;
}

Vector3 func_236(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
{
	fVar3 = fParam3;
	fVar4 = SYSTEM::COS(fVar3);
	fVar5 = SYSTEM::SIN(fVar3);
	Var0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	Var0.y = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

int func_237(int iParam0)
{
	if (func_239(iParam0, &Var1, &Var4, &uVar10, &uVar0))
	{
		if (GAMEPLAY::FIND_SPAWN_POINT_IN_DIRECTION(Var4, Var1, uVar10, &Var7))
		{
			if (func_238(iParam0, Var7, Var4, uVar0))
			{
				Local_1270.f_155 = { Var7 };
				Local_1270.f_161 = func_232(Var7, Var4);
				return 1;
			}
		}
	}
	return 0;
}

int func_238(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (!func_59(Param1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_239(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (func_135(iParam0, 0))
	{
	}
	else
	{
		*uParam1 = { Local_218.f_95.f_1[iParam0].f_4 };
		*uParam2 = { Local_218.f_95.f_1[iParam0].f_4 };
	}
	if (Local_1270.f_148 > 0)
	{
		func_240(uParam1);
	}
	if ((uParam1->f_2 >= 0f && uParam1->f_2 < 90f) || (uParam1->f_2 >= 270f && uParam1->f_2 < 360f))
	{
		*uParam3 = 160f;
	}
	else
	{
		*uParam3 = 80f;
	}
	return 1;
}

void func_240(var uParam0)
{
	if (Local_1270.f_148 < 5)
	{
		switch (Local_1270.f_148)
		{
			case 1:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			
			case 2:
				*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
				break;
			
			case 3:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
			
			case 4:
				*uParam0 = { *uParam0 - Vector(20f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		Local_1270.f_148 = 0;
	}
	Local_1270.f_148++;
}

bool func_241(int iParam0, var uParam1, var uParam2)
{
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_188.f_21);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	return func_242(Local_218.f_95.f_1[iParam0].f_4, Local_218.f_95.f_1[iParam0].f_4, Local_218.f_95.f_1[iParam0].f_3, 0, uParam1, uParam2, &Var0);
}

int func_242(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)
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
	if (!func_362(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!Global_2405072.f_600 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_605) < func_361(0))
	{
		if (!Global_2405072.f_670 == 0)
		{
			Global_2405072.f_670 = 0;
			func_360();
			func_359();
		}
		return 0;
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_669)
	{
		if (!Global_2405072.f_670 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_673) < func_361(0))
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
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_673) > func_361(1))
			{
				Global_2405072.f_670 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_353(Param0))
		{
			if (func_352(&Param0, 1))
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
		func_351();
		func_360();
		if (!uParam10->f_27 || (((((func_350(Param0, 1, 1133903872) && !uParam10->f_28) && !Global_2537071.f_883) && !Global_2537071.f_872) && !Global_2537071.f_880) && !Global_2537071.f_884))
		{
			func_331(Param0, iParam6);
		}
		if (func_316(Param0))
		{
			func_331(Param0, iParam6);
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
				if (((uParam10->f_3 && func_59(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_314(Param0, *uParam9, iParam6, PLAYER::PLAYER_ID(), 0))
				{
					Global_2405072.f_676 = { Param0 };
					Global_2405072.f_679 = *uParam9;
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
					func_262(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var5);
				}
				func_260(Global_2405072.f_676, Global_2405072.f_679, iParam6, &(Global_2405072.f_667));
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
							if (func_259(Global_2405072.f_676, Global_2405072.f_679, iParam6, 1, 1036831949))
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
						func_257(Global_2405072.f_676, 0);
						func_256(-1);
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
				func_256(-1);
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
								if (func_255(Global_2405072.f_676, Global_2405072.f_679, iParam6, PLAYER::PLAYER_ID(), 0) || func_244(Global_2405072.f_676, Global_2405072.f_679, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_257(Global_2405072.f_676, 0);
									func_256(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_257(Global_2405072.f_676, 0);
								func_256(-1);
							}
						}
					}
					else
					{
						func_256(-1);
					}
				}
				else
				{
					func_256(1);
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
			func_262(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var64);
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
		*uParam9 = Global_2405072.f_679;
		func_243(1);
		return 1;
	}
	return 0;
}

void func_243(bool bParam0)
{
	Global_2405072.f_670 = 0;
	func_351();
	func_360();
	if (bParam0)
	{
		func_359();
	}
}

int func_244(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam9 == 0)
		{
			if (func_28(iVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_61(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_66(iVar1))
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
										if (func_254(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_245(func_63(iVar1), Param0, fParam3, iParam4, fVar2))
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

int func_245(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	if (SYSTEM::VDIST(Param0, Param3) < func_253(iParam7, 1008981770))
	{
		func_246(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_246(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	Var0 = { 0f, 1f, 0f };
	func_252(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_247(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.y + fParam8)) };
	Var9.z = (Var9.z - ((0.5f * GAMEPLAY::ABSF((Var6.z - Var3.z))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.y * -1f) + fParam8)) };
	Var12.z = (Var12.z + ((0.5f * GAMEPLAY::ABSF((Var6.z - Var3.z))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = GAMEPLAY::ABSF((Var6.x - Var3.x));
}

void func_247(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		GAMEPLAY::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_250(iParam0);
		if (iVar0 != 0)
		{
			func_248(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_248(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	func_249(iParam0, &Global_1315812);
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

void func_249(int iParam0, var uParam1)
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

int func_250(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_251(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_251(int iParam0)
{
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_252(var uParam0, struct<3> Param1)
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

float func_253(int iParam0, float fParam1)
{
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_247(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (SYSTEM::SQRT(((((Var6.x * 0.5f) * (Var6.x * 0.5f)) + ((Var6.y * 0.5f) * (Var6.y * 0.5f))) + ((Var6.z * 0.5f) * (Var6.z * 0.5f)))) + fParam1);
	return fVar9;
}

int func_254(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	if (func_245(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_247(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	Var20 = { 0f, Var17.y, 0f };
	func_252(&Var20, 0f, 0f, fParam3);
	Var23 = { 0f, Var14.y, 0f };
	func_252(&Var23, 0f, 0f, fParam3);
	Var26 = { (GAMEPLAY::ABSF((Var17.x - Var14.x)) * 0.5f), 0f, 0f };
	func_252(&Var26, 0f, 0f, fParam3);
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
		if (func_245(Var1[iVar0], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_254(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_255(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_28(iVar1, 0, 1) && func_28(iParam5, 0, 1))
			{
				if (Global_2417897.f_261[iVar0])
				{
					if (func_245(Global_2417897.f_131[iVar0], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_245(func_63(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417897.f_261[iVar0])
			{
				if (func_245(Global_2417897.f_131[iVar0], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_28(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_245(func_63(iVar1), Param0, fParam3, iParam4, 1036831949))
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

void func_256(int iParam0)
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

void func_257(struct<3> Param0, int iParam3)
{
	if (iParam3 == 0 && func_258(Param0, 0.01f))
	{
		return;
	}
	if (iParam3 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2405072.f_2728[iParam3] };
		Global_2405072.f_2728[iParam3] = { Param0 };
		func_257(Var0, iParam3 + 1);
	}
}

int func_258(struct<3> Param0, float fParam3)
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

int func_259(struct<3> Param0, float fParam3, int iParam4, bool bParam5, float fParam6)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	else
	{
		func_360();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2405072.f_680[iVar7] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_246(Param0, fParam3, iParam4, &Var0, &Var3, &uVar6, fParam6);
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

void func_260(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	*uParam5 = func_261(&Param0, &uParam3, &iParam4);
	Var0 = -1768581418;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = *uParam5;
	SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_24(1, 1));
}

int func_261(var uParam0, var uParam1, var uParam2)
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

void func_262(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		while (func_311(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_263(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_263(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_307(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_302(uParam0, 1))
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
	if (func_250(uParam2->f_34) != 0)
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
					if (!func_295(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_292(Var1))
									{
										Var1 = { func_287(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_286(Var1, 5f))
											{
												if (Var1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_282(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_302(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_281(Var1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_307(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_280(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_59(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_59(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_244(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar24 = func_272(Var1, uParam2->f_54, &fVar25);
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
																													func_271(Var1, fVar4, iVar16);
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
																									if (func_282(Var1, uParam2))
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
							func_269(0, uParam2);
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
						func_268(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
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
						if (func_307(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_302(&Var31, bVar35))
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
				func_264(&Global_1312061, uParam0, uParam1, *uParam0);
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

void func_264(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*uParam0[iVar2], Param3);
		if (fVar1 < fVar0)
		{
			if (!func_265(*uParam0[iVar2], 5f, PLAYER::PLAYER_ID(), 0, 0))
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

int func_265(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_267(Param0, fParam3, iParam4, iParam5, 0) || func_266(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_266(struct<3> Param0, int iParam3, int iParam4)
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
					if (func_245(Param0, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_3, Global_2417897.f_461[iVar0][iVar1].f_4, 1036831949))
					{
						if (func_28(iVar2, 0, 1) && func_28(iParam3, 0, 1))
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

int func_267(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
				if (func_28(iVar1, 0, 1) && func_28(iParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_28(iVar1, 0, 1) && func_28(iParam4, 0, 1))
				{
					if (Global_2417897.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417897.f_131[iVar0], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_63(iVar1), Param0) < 1f)
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
				else if (func_28(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_63(iVar1), Param0) < 1f)
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

void func_268(int iParam0, struct<3> Param1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12);
		*uParam5 = { func_287(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51) };
		if (!func_292(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_269(int iParam0, var uParam1)
{
	if (!func_282(Global_2412474[iParam0], uParam1))
	{
		Global_2412474.f_162 = (Global_2412474.f_162 - 1);
		func_270(iParam0);
		if (Global_2412474.f_162 > Global_2412474.f_163)
		{
			func_269(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_269(iParam0 + 1, uParam1);
	}
}

void func_270(int iParam0)
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

void func_271(struct<3> Param0, float fParam3, int iParam4)
{
	Var0 = { Global_2412474[iParam4] };
	uVar3 = Global_2412474.f_121[iParam4];
	Global_2412474[iParam4] = { Param0 };
	Global_2412474.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412474.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_271(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_272(struct<3> Param0, float fParam3, float fParam4)
{
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_273(iVar5))
		{
			Var1 = { func_63(iVar5) };
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

int func_273(int iParam0)
{
	if (func_28(iParam0, 0, 1))
	{
		if (!func_278(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_275(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_274(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
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
					if (!func_275(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_66(iParam0))
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

int func_274(int iParam0, int iParam1, int iParam2)
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

int func_275(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_276(iParam0))
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

bool func_276(int iParam0)
{
	return func_277(iParam0);
}

bool func_277(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_13.f_1, 0);
}

int func_278(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_279())
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

bool func_279()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_280(struct<3> Param0, float fParam3, int iParam4)
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
		if (func_254(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
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
		if (func_254(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_281(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_255(Param0, fParam3, iParam4, iParam5, iParam6) || func_314(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_282(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_285(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_283(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
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

int func_283(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_284(&Param3, &Param6);
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

void func_284(var uParam0, var uParam1)
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

bool func_285(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

int func_286(struct<3> Param0, float fParam3)
{
	if (func_275(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4456448.f_91960 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_91960)
			{
				if (Global_4456448.f_91961[iVar0].f_7 != 0)
				{
					if (func_245(Param0, Global_4456448.f_91961[iVar0], Global_4456448.f_91961[iVar0].f_6, Global_4456448.f_91961[iVar0].f_7, fParam3))
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
					if (func_245(Param0, Global_4456448.f_78242[iVar0], Global_4456448.f_78242[iVar0].f_3, Global_4456448.f_78242[iVar0].f_15, 0.5f))
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
					if (func_245(Param0, Global_4456448.f_124065[iVar0], Global_4456448.f_124065[iVar0].f_3, Global_4456448.f_124065[iVar0].f_12, 0.5f))
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
					if (func_245(Param0, ENTITY::GET_ENTITY_COORDS(Global_969031.f_233[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_969031.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969031.f_233[iVar0]), 0.5f))
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
					if (func_245(Param0, ENTITY::GET_ENTITY_COORDS(Global_969031.f_119[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_969031.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969031.f_119[iVar0]), 0.5f))
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

Vector3 func_287(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)
{
	if (bParam15)
	{
		if (SYSTEM::VMAG(Param6) > 0f)
		{
			if (!func_290(Param0, *uParam3, Param6))
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
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_289(Param0))
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
					fVar14 = func_288(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_288(iParam11, 1.5f);
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
		if (!func_290(Param0, *uParam3, Param6))
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
					fVar14 = func_288(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_288(iParam11, 1.5f);
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

float func_288(int iParam0, float fParam1)
{
	func_247(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_289(struct<3> Param0)
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

int func_290(struct<3> Param0, float fParam3, struct<3> Param4)
{
	Var0 = { 0f, 1f, 0f };
	func_252(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_291(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_291(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.y * Param3.y)) + (Param0.z * Param3.z));
}

int func_292(struct<3> Param0)
{
	iVar1 = func_294(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2412181[iVar1])
	{
		if (func_293(Param0, &(Global_2411478[iVar1][iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412181[8])
	{
		if (func_293(Param0, &(Global_2411478[8][iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_293(struct<3> Param0, var uParam3)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_294(struct<2> Param0, var uParam2)
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

int func_295(var uParam0, bool bParam1)
{
	if (func_301(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_300(&Var1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 0, fVar4);
			if (func_296(Var1, &uVar0) || func_301(Var1))
			{
				Var1 = { *uParam0 };
				func_300(&Var1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_296(struct<3> Param0, var uParam3)
{
	if (func_299())
	{
		return 0;
	}
	iVar1 = func_298();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405072.f_365[iVar0].f_9 == 1)
		{
			if (func_297(Param0, &(Global_2405072.f_365[iVar0]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_297(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_285(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405072.f_2726) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_283(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
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

int func_298()
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

bool func_299()
{
	return Global_1676377.f_474;
}

void func_300(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_252(&Var0, 0f, 0f, GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_252(&Var0, 0f, 0f, fParam7);
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

int func_301(struct<3> Param0)
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

bool func_302(var uParam0, bool bParam1)
{
	bVar0 = false;
	if (Global_2405072.f_26.f_18)
	{
		switch (Global_2405072.f_26.f_17)
		{
			case 0:
				if (func_285(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_283(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, 0, 0))
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
				*uParam0 = { func_303(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, Global_2405072.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_303(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	switch (iParam10)
	{
		case 0:
			func_300(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_306(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_304(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_285(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_283(Var1, Param3, Param6, 0, 0))
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

void func_304(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	Var0 = { Param4 - Param1 };
	Var0.z = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.z = 0f;
	Var6 = { func_305(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.y, Var3.x, Var3.y)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_291(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_291(Var6, Var3) >= 0f)
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
		Var6 = { func_305(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.z = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.z = 0f;
		Var6 = { func_305(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(Var26.x, Var26.y, Var29.x, Var29.y)));
		if (!bParam9)
		{
			if (func_291(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_291(Var6, Var29) >= 0f)
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

Vector3 func_305(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.y * Param3.z) - (Param0.z * Param3.y)), ((Param0.z * Param3.x) - (Param0.x * Param3.z)), ((Param0.x * Param3.y) - (Param0.y * Param3.x));
}

void func_306(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

int func_307(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	if (func_353(Param0))
	{
		if (func_310(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_308(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_258(*uParam3, 1056964608))
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
				func_300(uParam3, *uParam4[iVar0], (*uParam5)[iVar0], 1036831949, 0, 0);
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

int func_308(var uParam0, bool bParam1, bool bParam2)
{
	if (func_296(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_309(&Var2, &(Global_2405072.f_365[iVar0]), 1036831949, 0, bParam2);
			if (func_296(Var2, &uVar1) || func_301(Var2))
			{
				Var2 = { *uParam0 };
				func_309(&Var2, &(Global_2405072.f_365[iVar0]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_309(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_303(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_303(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_303(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_300(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_306(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_304(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_310(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409984[iVar0].f_16))
			{
				if (func_297(*uParam0, &(Global_2409984[iVar0]), 1008981770, bParam4, 0))
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
							func_309(&Var1, &(Global_2409984[iVar0]), 1036831949, 0, bParam3);
							if (func_310(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_309(&Var1, &(Global_2409984[iVar0]), 1036831949, 1, 0);
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

int func_311(var uParam0, var uParam1, var uParam2)
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
			if (func_307(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_302(uParam0, 1))
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
		func_312(*uParam0);
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
							if ((uParam2->f_12 && !func_281(Var2, fVar5, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_307(uParam2->f_35, &Var2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_280(Var2, fVar5, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_59(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_59(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_244(Var2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar12 = func_272(Var2, uParam2->f_54, &fVar13);
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
																		func_271(Var2, fVar5, iVar6);
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
					func_269(0, uParam2);
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

void func_312(struct<3> Param0)
{
	fVar0 = -1f;
	while (iVar2 < Global_2405072.f_1746)
	{
		uVar1 = func_313(Param0, fVar0, &fVar0);
		Global_2405072.f_2152[iVar2] = uVar1;
		iVar2++;
	}
}

int func_313(struct<3> Param0, float fParam3, float fParam4)
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

int func_314(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
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
				if (func_315(Param0, iParam4, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_4))
				{
					if (func_254(Param0, fParam3, iParam4, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_3, Global_2417897.f_461[iVar0][iVar1].f_4, 0))
					{
						if (func_28(iVar2, 0, 1) && func_28(iParam5, 0, 1))
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

int func_315(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	fVar0 = func_253(iParam3, 1008981770);
	fVar1 = func_253(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_316(struct<3> Param0)
{
	if (Global_2537071.f_883 && func_317(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_317(struct<3> Param0, var uParam3)
{
	*uParam3 = -1;
	iVar2 = func_330(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_318(iVar1))
			{
				if (func_330(Global_1676377.f_488[iVar0], 0) == iVar2)
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

int func_318(int iParam0)
{
	iVar0 = func_329(iParam0);
	if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_264 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1628237[PLAYER::PLAYER_ID()].f_11;
	if (iVar1 != func_68())
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
	if (func_328(PLAYER::PLAYER_ID(), 0) || (func_325(PLAYER::PLAYER_ID()) && func_323(func_324(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (func_322(PLAYER::PLAYER_ID()) || (func_325(PLAYER::PLAYER_ID()) && func_323(func_324(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (func_321(PLAYER::PLAYER_ID()) || (func_325(PLAYER::PLAYER_ID()) && func_323(func_324(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (func_320(PLAYER::PLAYER_ID()) || (func_325(PLAYER::PLAYER_ID()) && func_323(func_324(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (func_319(PLAYER::PLAYER_ID()) || (func_325(PLAYER::PLAYER_ID()) && func_323(func_324(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_319(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_320(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_321(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_68())
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_322(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_68())
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_323(int iParam0)
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

int func_324(int iParam0)
{
	if (iParam0 != func_68() && func_28(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_14;
	}
	return -1;
}

int func_325(int iParam0)
{
	if (iParam0 != func_68() && func_28(iParam0, 1, 1))
	{
		if (func_327(iParam0) && !func_326(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_326(int iParam0)
{
	if (iParam0 != func_68() && func_28(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310, 4);
	}
	return 0;
}

int func_327(int iParam0)
{
	if (iParam0 != func_68() && func_28(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_328(int iParam0, bool bParam1)
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
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_68())
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_329(int iParam0)
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

int func_330(struct<3> Param0, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0].f_9 == 1 || iParam3 == 0)
		{
			if (func_297(Param0, &(Global_2409984[iVar0]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_331(struct<3> Param0, int iParam3)
{
	if (Global_2405072.f_45.f_316)
	{
		return;
	}
	if (!func_349())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_348(Param0);
		if (iVar1 > -1)
		{
			func_359();
			switch (iVar1)
			{
				case 0:
					func_347(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_347(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_347(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_347(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_347(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_347(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_347(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_347(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_347(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_347(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_347(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_347(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_347(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_347(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_347(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_347(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_347(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_347(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_347(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_347(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_347(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_347(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_347(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_347(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_347(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_347(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_347(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_347(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_347(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_347(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_347(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_347(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_347(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_347(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_347(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_347(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_347(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_347(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_347(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_347(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_347(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_347(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_347(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_347(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_347(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_347(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_347(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_347(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_347(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_347(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_347(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_347(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_347(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_345(78);
					break;
				
				case 11:
					func_345(79);
					break;
				
				case 12:
					func_345(82);
					break;
				
				case 13:
					func_345(81);
					break;
				
				case 14:
					func_345(73);
					break;
				
				case 15:
					func_347(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_347(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_347(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_347(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_345(75);
					break;
				
				case 17:
					func_345(76);
					break;
				
				case 18:
					func_345(77);
					break;
				
				case 19:
					func_347(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_347(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_347(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_347(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_345(80);
					break;
				
				case 21:
				case 25:
					func_345(87);
					break;
				
				case 22:
				case 26:
					func_345(88);
					break;
				
				case 23:
				case 27:
					func_345(89);
					break;
				
				case 24:
				case 28:
					func_345(90);
					break;
				
				case 29:
				case 30:
					if (func_344(iParam3))
					{
						func_345(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_28);
					}
					break;
				
				case 31:
					func_347(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_347(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_347(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_347(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_347(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_347(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_347(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_347(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_347(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_347(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_347(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_347(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_347(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_347(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_347(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_347(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_347(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_347(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_347(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_347(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_347(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_347(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_347(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_347(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_347(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_347(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_347(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_347(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_347(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_347(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_347(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_347(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_347(-194.254f, -2018.756f, 26.62f, 75f);
					func_347(-186.956f, -2031.369f, 26.62f, 338f);
					func_347(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_347(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_347(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_347(-233.372f, -2089.601f, 26.62f, 304f);
					func_347(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_347(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_347(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_347(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_347(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_347(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_347(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_347(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_347(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_347(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_347(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_347(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_347(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_347(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_347(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_347(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_341(Param0, &iVar2, &iVar6) || (func_317(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))))
		{
			func_359();
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
				if (!iVar6[iVar0] && func_340(iVar2[iVar0], -1))
				{
					if (func_344(iParam3))
					{
						func_345(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_339(PLAYER::PLAYER_PED_ID()) || func_338(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))
					{
						if (func_337(iParam3))
						{
							func_336(iVar2[iVar0]);
						}
						else if (func_335(iParam3))
						{
							func_334(iVar2[iVar0]);
							func_336(iVar2[iVar0]);
						}
						else
						{
							func_334(iVar2[iVar0]);
							func_336(iVar2[iVar0]);
						}
					}
					else
					{
						func_332(iVar2[iVar0], iParam3);
					}
				}
				else
				{
					func_345(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_332(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_347(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_347(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_347(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_347(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_347(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_347(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_347(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_347(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_347(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_347(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_347(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_347(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_347(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_347(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_347(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_347(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_347(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_347(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_347(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_347(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_347(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_347(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_347(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_347(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_347(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_347(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_347(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_347(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_347(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_347(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_347(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_347(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_347(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_347(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_347(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_347(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_347(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_347(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_347(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_347(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_347(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_347(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_347(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_347(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_347(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_347(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_347(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_347(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_347(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_347(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_347(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_347(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_347(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_347(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_347(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_347(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_347(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_347(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_347(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_347(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_347(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_347(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_347(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_347(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_347(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_347(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_347(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_347(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_347(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_347(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_347(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_347(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_347(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_347(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_347(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_347(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_347(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_347(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_347(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_347(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_347(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_347(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_347(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_347(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_347(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_347(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_347(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_347(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_347(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_347(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_347(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_347(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_347(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_347(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_347(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_347(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_347(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_347(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_347(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_347(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_347(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_347(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_347(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_347(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_347(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_347(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_347(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_347(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_347(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_347(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_347(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_347(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_347(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_347(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_347(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_347(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_347(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_347(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_347(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_347(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_347(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_347(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_347(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_347(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_347(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_347(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_347(142.7427f, -2536.147f, 5f, 205.0002f);
			func_347(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_347(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_347(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_347(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_347(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_347(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_347(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_347(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_347(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_347(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_347(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_347(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_347(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_347(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_347(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_347(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_347(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_347(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_347(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_347(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_347(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_347(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_347(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_347(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_347(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_347(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_347(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_347(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_347(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_347(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_347(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_347(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_347(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_347(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_347(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_347(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_347(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_347(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_347(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_347(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_347(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_347(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_347(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_347(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_347(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_347(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_347(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_347(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_347(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_347(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_347(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_347(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_347(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_347(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_347(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_347(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_347(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_347(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_347(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_347(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_347(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_347(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_347(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_347(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_347(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_347(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_347(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_347(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_347(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_347(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_347(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_347(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_347(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_347(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_347(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_347(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_347(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_347(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_347(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_347(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_347(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_347(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_347(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_347(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_347(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_347(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_347(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_347(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_347(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_347(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_347(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_347(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_347(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_347(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_347(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_347(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_347(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_347(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_347(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_347(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_347(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_347(-1823.414f, 3092.762f, 31.843f, 330f);
			func_347(-1819.045f, 3100.435f, 31.845f, 330f);
			func_347(-1833.313f, 3075.722f, 31.838f, 330f);
			func_347(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_347(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_347(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_347(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_347(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_347(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_347(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_347(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_347(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_347(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_347(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_347(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_347(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_347(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_347(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_347(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_347(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_347(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_347(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_347(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_347(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_347(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_347(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_347(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_347(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_347(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_347(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_347(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_347(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_347(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_347(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_347(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_347(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_347(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_347(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_347(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_347(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_347(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_347(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_347(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_347(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_347(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_347(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_347(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_347(1231.279f, 2910.881f, 43.3085f, 12f);
				func_347(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_347(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_347(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_347(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_347(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_347(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_347(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_347(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_347(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_347(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_347(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_347(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_347(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_347(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_347(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_347(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_347(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_347(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_347(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_347(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_347(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_347(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_347(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_347(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_347(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_347(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_347(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_347(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_347(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_347(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_347(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_347(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_347(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_347(3.855f, 2672.388f, 78.437f, 319.2f);
				func_347(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_347(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_347(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_347(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_347(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_347(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_347(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_347(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_347(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_347(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_347(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_347(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_347(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_347(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_347(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_347(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_347(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_347(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_347(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_347(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_347(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_347(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_347(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_347(102.851f, 2688.009f, 51.732f, 224f);
				func_347(109.815f, 2681.012f, 51.112f, 224f);
				func_347(116.355f, 2674.26f, 50.529f, 224f);
				func_347(125.138f, 2665.98f, 49.8f, 224f);
				func_347(132.228f, 2659.865f, 49.26f, 228.4f);
				func_347(139.354f, 2653.536f, 48.737f, 228.4f);
				func_347(88.512f, 2702.995f, 53.042f, 224.199f);
				func_347(81.565f, 2710.357f, 53.67f, 224.199f);
				func_347(75.156f, 2716.981f, 54.223f, 224.199f);
				func_347(68.442f, 2723.806f, 54.775f, 226.199f);
				func_347(61.449f, 2730.606f, 55.308f, 226.199f);
				func_347(53.702f, 2738.167f, 55.855f, 226.199f);
				func_347(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_347(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_347(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_347(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_347(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_347(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_347(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_347(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_347(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_347(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_347(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_347(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_347(2714.633f, 3918.283f, 42.938f, 16f);
				func_347(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_347(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_347(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_347(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_347(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_347(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_347(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_347(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_347(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_347(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_347(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_347(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_347(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_347(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_347(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_347(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_347(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_347(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_347(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_347(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_347(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_347(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_347(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_347(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_347(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_347(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_347(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_347(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_347(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_347(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_347(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_347(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_347(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_347(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_347(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_347(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_347(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_347(3374.923f, 5520.177f, 20.3207f, 86f);
				func_347(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_347(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_347(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_347(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_347(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_347(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_347(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_347(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_347(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_347(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_347(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_347(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_347(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_347(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_347(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_347(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_347(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_347(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_347(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_347(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_347(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_347(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_347(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_347(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_347(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_347(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_347(43.848f, 6845.657f, 13.379f, 247.2f);
				func_347(50.379f, 6861.146f, 15.105f, 247.2f);
				func_347(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_347(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_347(55.806f, 6875.081f, 14.824f, 247.2f);
				func_347(11.616f, 6877.079f, 11.466f, 247.2f);
				func_347(18.954f, 6891.633f, 11.37f, 247.2f);
				func_347(26.68f, 6907.587f, 11.869f, 247.2f);
				func_347(7.479f, 6907.895f, 12.024f, 247.2f);
				func_347(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_347(35.591f, 6836.608f, 13.288f, 274.4f);
				func_347(36.028f, 6830.135f, 13.801f, 270.8f);
				func_347(35.114f, 6823.884f, 14.527f, 260.8f);
				func_347(48.779f, 6838.693f, 14.337f, 273.6f);
				func_347(56.738f, 6821.8f, 15.244f, 244.8f);
				func_347(48.377f, 6825.895f, 14.656f, 249.8f);
				func_347(49.11f, 6831.439f, 13.991f, 274.8f);
				func_347(53.544f, 6818.275f, 16.342f, 243f);
				func_347(46.162f, 6821.945f, 15.483f, 249.8f);
				func_347(60.129f, 6836.8f, 15.605f, 269.6f);
				func_347(40.88f, 6802.952f, 20.113f, 242.6f);
				func_347(48.203f, 6799.134f, 20.897f, 244.4f);
				func_347(70.449f, 6809.271f, 16.846f, 243f);
				func_347(61.436f, 6814.266f, 16.71f, 244.2f);
				func_347(56.142f, 6793.458f, 19.806f, 242.6f);
				func_347(65.759f, 6791.12f, 18.433f, 276.4f);
				func_347(77.305f, 6805.391f, 18.558f, 245.6f);
				func_347(85.893f, 6800.243f, 18.535f, 249.8f);
				func_347(56.85f, 6780.582f, 18.822f, 297.999f);
				func_347(65.636f, 6784.669f, 18.789f, 293.799f);
				func_347(74.121f, 6788.498f, 18.739f, 293.799f);
				func_347(97.779f, 6796.32f, 19.02f, 276.799f);
				func_347(106.76f, 6796.983f, 18.914f, 272.599f);
				func_347(112.387f, 6802.858f, 18.994f, 210.599f);
				func_347(117.58f, 6802.644f, 18.663f, 209.399f);
				func_347(122.481f, 6802.693f, 18.468f, 209.399f);
				func_347(127.182f, 6802.686f, 18.218f, 209.399f);
				func_347(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_347(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_347(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_347(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_347(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_347(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_347(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_347(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_347(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_347(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_347(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_347(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_347(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_347(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_347(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_347(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_347(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_347(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_347(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_347(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_347(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_347(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_347(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_347(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_347(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_347(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_347(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_347(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_347(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_347(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_347(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_347(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_347(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_347(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_347(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_347(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_347(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_347(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_347(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_347(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_347(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_347(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_347(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_347(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_347(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_347(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_347(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_347(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_347(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_347(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_347(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_347(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_347(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_347(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_347(30.027f, 3292.351f, 38.604f, 140.199f);
				func_347(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_347(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_347(23.897f, 3283.152f, 39.381f, 145.399f);
				func_347(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_347(18.723f, 3274.025f, 40.054f, 155.799f);
				func_347(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_347(36.958f, 3298.847f, 38.001f, 127.799f);
				func_347(54.165f, 3311.582f, 36.517f, 303.799f);
				func_347(61.607f, 3317.105f, 35.916f, 306.999f);
				func_347(68.994f, 3323.129f, 35.364f, 308.199f);
				func_347(76.266f, 3329.467f, 34.805f, 311.399f);
				func_347(82.757f, 3335.915f, 34.344f, 316.598f);
				func_347(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_347(14.664f, 3263.688f, 40.931f, 160.398f);
				func_347(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_347(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_347(89.575f, 3343.311f, 33.932f, 318.398f);
				func_347(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_347(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_347(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_347(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_347(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_347(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_347(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_347(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_347(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_347(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_347(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_347(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_347(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_347(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_347(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_347(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_347(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_347(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_347(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_347(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_347(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_347(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_347(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_347(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_347(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_347(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_347(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_347(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_347(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_347(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_347(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_347(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_347(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_347(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_347(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_347(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_347(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_347(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_347(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_347(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_347(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_347(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_347(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_58 == 0)
			{
				func_347(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_347(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_347(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_347(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_347(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_347(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_347(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_347(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_347(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_347(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_347(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_347(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_347(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_347(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_347(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_347(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_347(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_347(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_347(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_347(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_347(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_347(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_347(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_347(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_347(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_347(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_347(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_347(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_347(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_347(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_347(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_347(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_347(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_347(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_347(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_347(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_347(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_347(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_333(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_333(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_333(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_333(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_333(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_333(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_333(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_333(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_333(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_333(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_333(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_333(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_333(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_333(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_333(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_333(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_333(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_333(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_333(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_333(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_333(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_333(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_333(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_333(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_333(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_333(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_333(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_333(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_333(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_333(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_333(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_333(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_333(struct<3> Param0, float fParam3, int iParam4, bool bParam5)
{
	if (!iParam4 == 0)
	{
		func_247(iParam4, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0.5f);
		Var7 = { 0f, fVar6, 0f };
		Var10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam3, Var7) };
		func_347(Var10, fParam3);
	}
	else
	{
		func_347(Param0, fParam3);
	}
}

void func_334(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_347(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_347(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_347(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_347(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_347(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_347(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_347(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_347(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_347(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_347(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_347(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_347(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_347(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_347(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_347(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_347(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_347(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_347(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_347(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_347(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_347(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_347(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_347(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_347(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_347(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_347(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_347(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_347(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_347(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_347(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_347(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_347(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_347(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_347(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_347(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_347(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_347(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_347(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_347(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_347(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_347(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_347(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_347(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_347(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_347(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_347(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_347(-1356.991f, -3242.228f, 12.945f, 330f);
			func_347(-1369.313f, -3234.758f, 12.945f, 330f);
			func_347(-1381.751f, -3227.408f, 12.945f, 330f);
			func_347(-1394.302f, -3220.021f, 12.945f, 330f);
			func_347(-1354.339f, -3223.129f, 12.945f, 330f);
			func_347(-1366.302f, -3215.809f, 12.945f, 330f);
			func_347(-1378.492f, -3208.645f, 12.945f, 330f);
			func_347(-1350.322f, -3203.405f, 12.945f, 330f);
			func_347(-1362.684f, -3196.451f, 12.945f, 330f);
			func_347(-1347.089f, -3182.69f, 12.945f, 330f);
			func_347(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_347(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_347(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_347(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_347(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_347(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_347(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_347(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_347(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_347(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_347(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_347(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_347(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_347(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_347(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_347(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_347(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_347(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_347(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_347(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_347(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_347(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_347(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_347(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_347(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_347(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_347(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_347(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_347(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_347(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_347(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_347(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_347(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_347(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_347(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_347(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_347(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_347(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_347(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_347(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_347(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_347(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_347(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_347(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_347(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_347(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_347(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_347(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_347(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_347(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_347(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_347(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_347(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_347(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_347(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_347(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_347(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_347(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_347(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_347(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_347(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_347(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_347(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_347(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_347(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_347(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_347(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_347(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_347(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_347(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_347(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_347(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_347(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_347(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_347(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_347(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_347(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_347(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_347(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_347(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_347(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_347(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_347(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_347(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_347(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_347(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_347(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_347(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_347(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_347(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_347(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_347(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_347(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_347(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_347(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_347(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_347(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_347(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_347(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_347(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_347(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_347(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_347(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_347(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_347(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_347(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_347(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_347(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_347(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_347(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_347(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_347(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_347(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_347(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_347(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_347(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_347(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_347(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_347(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_347(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_347(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_347(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_347(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_347(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_347(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_347(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_347(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_347(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_347(-2484.323f, 3249.294f, 31.828f, 151f);
			func_347(-2495.313f, 3255.746f, 31.828f, 151f);
			func_347(-2472.644f, 3242.684f, 31.828f, 151f);
			func_347(-2506.313f, 3262.27f, 31.823f, 151f);
			func_347(-2461.494f, 3235.93f, 31.828f, 151f);
			func_347(-2505.602f, 3238.049f, 31.828f, 151f);
			func_347(-2481.937f, 3224.8f, 31.828f, 151f);
			func_347(-2516.813f, 3244.266f, 31.823f, 151f);
			func_347(-2470.03f, 3217.899f, 31.828f, 151f);
			func_347(-2493.933f, 3231.308f, 31.828f, 151f);
			func_347(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_347(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_347(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_347(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_347(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_347(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_347(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_347(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_347(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_347(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_347(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_347(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_347(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_347(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_347(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_347(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_347(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_347(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_347(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_347(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_347(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_347(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_347(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_347(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_347(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_347(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_347(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_347(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_347(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_347(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_347(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_347(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_347(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_347(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_347(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_347(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_335(int iParam0)
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

void func_336(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_347(-947.712f, -3367.704f, 12.944f, 60f);
			func_347(-904.692f, -3293.072f, 12.944f, 60f);
			func_347(-863.71f, -3221.978f, 12.944f, 60f);
			func_347(-966.418f, -3162.773f, 12.944f, 60f);
			func_347(-1007.435f, -3233.93f, 12.944f, 60f);
			func_347(-1050.455f, -3308.559f, 12.944f, 60f);
			func_347(-1145.673f, -3253.456f, 12.944f, 60f);
			func_347(-1098.386f, -3181.428f, 12.944f, 60f);
			func_347(-1060.474f, -3108.903f, 12.944f, 60f);
			func_347(-1155.391f, -3053.632f, 12.944f, 60f);
			func_347(-1196.114f, -3125.146f, 12.948f, 60f);
			func_347(-1235.552f, -3201.86f, 12.944f, 60f);
			func_347(-1344.446f, -3139.177f, 12.944f, 60f);
			func_347(-1301.308f, -3064.341f, 12.944f, 60f);
			func_347(-1260.135f, -2992.912f, 12.944f, 60f);
			func_347(-1364.244f, -2932.9f, 12.98f, 60f);
			func_347(-1405.284f, -3004.108f, 12.96f, 60f);
			func_347(-1448.29f, -3078.72f, 12.95f, 60f);
			func_347(-1535.732f, -3028.318f, 12.945f, 60f);
			func_347(-1492.639f, -2953.558f, 12.945f, 60f);
			func_347(-1451.506f, -2882.2f, 12.944f, 60f);
			func_347(-1553.927f, -2823.12f, 13.002f, 60f);
			func_347(-1595.097f, -2894.571f, 12.944f, 60f);
			func_347(-1637.836f, -2968.714f, 12.945f, 60f);
			func_347(-1740.971f, -2911.484f, 12.944f, 330f);
			func_347(-1696.293f, -2833.978f, 12.944f, 330f);
			func_347(-1651.502f, -2756.273f, 12.945f, 330f);
			func_347(-1588.258f, -2647.575f, 12.944f, 330f);
			func_347(-1536.862f, -2681.378f, 12.945f, 330f);
			func_347(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_347(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_347(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_347(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_347(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_347(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_347(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_347(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_347(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_347(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_347(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_347(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_347(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_347(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_347(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_347(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_347(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_347(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_347(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_347(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_347(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_347(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_347(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_347(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_347(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_347(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_347(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_347(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_347(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_347(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_347(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_337(int iParam0)
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

int func_338(int iParam0)
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

int func_339(int iParam0)
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

int func_340(int iParam0, int iParam1)
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

int func_341(struct<2> Param0, var uParam2, var uParam3, var uParam4)
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
			if (func_318(iVar0))
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
			if (func_342(iVar0))
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

int func_342(int iParam0)
{
	iVar0 = func_343(iParam0);
	if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_271 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1628237[PLAYER::PLAYER_ID()].f_11;
	if (iVar1 != func_68())
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

int func_343(int iParam0)
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

int func_344(int iParam0)
{
	if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_345(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_347(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_347(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_347(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_347(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case 79:
			func_347(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_347(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_347(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_347(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_347(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_347(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_347(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_347(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_347(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_347(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_347(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_347(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_347(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_347(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_347(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_347(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_347(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_347(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_347(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_347(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_347(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_347(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_347(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_347(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_347(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_347(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_347(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_347(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_347(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_347(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_347(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_347(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_346())
			{
				func_347(-1608.297f, -556.875f, 33.406f, 310f);
				func_347(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_347(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_347(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_347(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_347(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_347(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_347(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_347(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_347(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_347(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_347(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_346())
			{
				func_347(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_347(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_347(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_347(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_347(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_347(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_347(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_347(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_347(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_347(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_347(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_347(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_346())
			{
				func_347(-102.737f, -597.379f, 35.053f, 160.999f);
				func_347(-97.793f, -589.568f, 35.082f, 134.799f);
				func_347(-110.357f, -619.402f, 35.055f, 160.599f);
				func_347(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_347(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_347(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_347(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_347(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_347(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_347(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_347(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_347(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_346())
			{
				func_347(-59.349f, -779.238f, 43.134f, 228.398f);
				func_347(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_347(-65.212f, -772.66f, 43.151f, 219.398f);
				func_347(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_347(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_347(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_347(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_347(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_347(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_347(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_347(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_347(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_347(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_347(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_347(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_347(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_347(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_347(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_347(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_347(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_347(-1464.5f, -927.9f, 9f, 296.7991f);
			func_347(-1466f, -926.1f, 9f, 296.7991f);
			func_347(-1467.9f, -924.7f, 9f, 296.7991f);
			func_347(-1469.7f, -923.7f, 9f, 296.7991f);
			func_347(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_347(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_347(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_347(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_347(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_347(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_347(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_347(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_347(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_347(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_347(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_347(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_347(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_347(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_347(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_347(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_347(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_347(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_347(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_347(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_347(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_347(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_347(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_347(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_347(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_347(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_347(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_347(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_347(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_347(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_347(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_347(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_347(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_347(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_347(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_347(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_347(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_347(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_347(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_347(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_347(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_347(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_347(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_347(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_347(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_347(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_347(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_347(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_347(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_347(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_347(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_347(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_347(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_347(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_347(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_347(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_347(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_347(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_347(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_347(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_347(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_347(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_347(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_347(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_347(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_347(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_347(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_347(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_347(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_347(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_347(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_347(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_347(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_347(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_347(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_347(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_347(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_347(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_347(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_347(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_347(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_347(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_347(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_347(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_346()
{
	return Global_2450632.f_15;
}

void func_347(struct<3> Param0, float fParam3)
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

int func_348(struct<3> Param0)
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
		if (func_293(Param0, &(Global_2412235[iVar0])))
		{
			Global_2405072.f_2898 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405072.f_2898 = -1;
	return -1;
}

int func_349()
{
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_13, 0) && !Global_2451426.f_6285)
	{
		return 0;
	}
	return 0;
}

int func_350(struct<2> Param0, var uParam2, bool bParam3, float fParam4)
{
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam3)
		{
			if (func_318(iVar0))
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

void func_351()
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405072.f_2728[iVar0] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_352(var uParam0, bool bParam1)
{
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.z <= 0f)
		{
			Var1.z = ((Global_2412191[iVar0].f_2 + Global_2412191[iVar0].f_3.f_2) * 0.5f);
		}
		if (func_293(Var1, &(Global_2412191[iVar0])))
		{
			if (bParam1)
			{
				func_304(&Var1, Global_2412191[iVar0], Global_2412191[iVar0].f_3, Global_2412191[iVar0].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_353(struct<3> Param0)
{
	if (!Global_2405072.f_512 && !Global_2405072.f_513)
	{
		if (!Global_2405072.f_45.f_314)
		{
			if (!func_357(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_356(Param0, 1008981770))
			{
				if (!func_310(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_310(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_355(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_354(&(Global_2405072.f_45[iVar0])) };
					if (!func_310(&Var1, 0, 0, 0, 1))
					{
						if (!func_310(&Param0, 0, 0, 0, 1))
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

Vector3 func_354(var uParam0)
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

int func_355(struct<3> Param0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0].f_9)
		{
			if (func_297(Param0, &(Global_2405072.f_45[iVar0]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_356(struct<3> Param0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0].f_9)
		{
			if (func_297(Param0, &(Global_2405072.f_45[iVar0]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_357(int iParam0, bool bParam1)
{
	if (func_157() != 0)
	{
		return func_358(iParam0) != 0;
	}
	return func_275(iParam0, bParam1, 0);
}

int func_358(int iParam0)
{
	if (func_28(iParam0, 0, 1))
	{
		return Global_2425662[iParam0].f_1;
	}
	return 0;
}

void func_359()
{
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405072.f_1747[iVar0] = { Var1 };
		iVar0++;
	}
	Global_2405072.f_1746 = 0;
}

void func_360()
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

int func_361(bool bParam0)
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

int func_362(int iParam0)
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

int func_363(int iParam0)
{
	if (!func_107(1, iParam0))
	{
		return 0;
	}
	if (Local_218.f_95.f_1[iParam0].f_9 != -1)
	{
		if (!func_100(Local_218.f_95.f_1[iParam0].f_9) || !func_11(&(Local_1270.f_149), 2000, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_364(int iParam0)
{
	return 1;
}

int func_365(int iParam0)
{
	if (Local_433.f_188.f_11 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_188.f_11);
		return StackVal;
	}
	return 1;
}

void func_366(int iParam0)
{
	if (!func_135(iParam0, 13))
	{
		return;
	}
	if (func_373(iParam0) > 2 && func_373(iParam0) < 5)
	{
		if (func_367(iParam0))
		{
			func_132(iParam0, 2);
		}
		else
		{
			func_131(iParam0, 2);
		}
	}
}

bool func_367(int iParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[iParam0]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_1270.f_91[iParam0]);
		iVar1 = func_370(iVar0);
		if (iVar1 != func_68() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			return func_369(iVar2, 2);
		}
	}
	return func_368(iParam0, 2);
}

bool func_368(int iParam0, int iParam1)
{
	return func_4(&(Local_1270.f_91[iParam0].f_2), iParam1);
}

bool func_369(int iParam0, int iParam1)
{
	return func_4(&(Local_1436[iParam0].f_1), iParam1);
}

int func_370(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			iVar1 = NETWORK::_NETWORK_GET_PED_PLAYER(iVar0);
			if (iVar1 != func_68() && func_28(iVar1, 0, 1))
			{
				return iVar1;
			}
		}
	}
	return func_68();
}

int func_371(int iParam0, int iParam1)
{
	return 0;
}

void func_372(int iParam0, int iParam1)
{
	Local_1270.f_91[iParam0].f_1 = iParam1;
}

int func_373(int iParam0)
{
	return Local_1270.f_91[iParam0].f_1;
}

int func_374(int iParam0, int iParam1)
{
	if (iParam1 != func_45())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_10)
	{
		if (iParam0 == func_43(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_375(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_376(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::_NETWORK_GET_PED_PLAYER(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_68()) && func_28(iVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::_NETWORK_GET_PED_PLAYER(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_376(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, iParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || AI::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, 0), ENTITY::GET_ENTITY_COORDS(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_377()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		func_387(iVar0);
		func_383(iVar0);
		iVar0++;
	}
	func_378();
}

void func_378()
{
	if (Local_218.f_10 <= 0)
	{
		return;
	}
	if (!func_382())
	{
		return;
	}
	if (func_381())
	{
		if (func_380())
		{
			func_10(4);
		}
	}
	else if (func_379())
	{
		func_10(4);
	}
}

int func_379()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_380()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 3))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_381()
{
	return func_46(0);
}

int func_382()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 6))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_383(int iParam0)
{
	if (func_6(iParam0, 29) && func_386(iParam0))
	{
		if (func_385(iParam0))
		{
			func_384(iParam0, 29);
		}
	}
}

void func_384(int iParam0, int iParam1)
{
	if (func_122(&(Local_1270.f_2.f_5[iParam0]), iParam1))
	{
	}
}

int func_385(int iParam0)
{
	if (func_386(iParam0))
	{
		iVar0 = func_43(iParam0);
		return (Local_1270.f_91[iVar0].f_1 == 5 || func_6(iParam0, 49));
	}
	return 1;
}

bool func_386(int iParam0)
{
	return (func_44(iParam0) && func_45() == 2);
}

void func_387(int iParam0)
{
	if (Local_218.f_10.f_5[iParam0].f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_54.f_11);
		if (StackVal)
		{
			if (!func_6(iParam0, 6))
			{
				if (func_97(Local_218.f_10.f_5[iParam0].f_2))
				{
					if (unk_0x0A49D1CB6E34AF72(1))
					{
						if (func_388(iParam0))
						{
							func_42(iParam0, 6);
						}
					}
				}
			}
		}
	}
}

int func_388(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1270.f_2[iParam0]))
	{
		Var0 = { func_406(iParam0) };
		uVar3 = Local_218.f_10.f_5[iParam0].f_6;
		Var4 = { Local_218.f_10.f_5[iParam0].f_7 };
		if (func_31(Var0))
		{
			return 0;
		}
		Local_1270.f_2[iParam0] = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(-1863327941, Var0, !func_405(iParam0, 0), Local_218.f_10.f_5[iParam0].f_2));
		ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), uVar3);
		if (!func_31(Var4))
		{
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), Var4, 2, 1);
		}
		func_400(iParam0, Var0);
		if (Local_433.f_54.f_14 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_54.f_14);
		}
	}
	if (Local_1270.f_2.f_20 != func_399())
	{
		Local_1270.f_2.f_20 = func_399();
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1270.f_2[iParam0]))
	{
		if (func_389(&(Local_1270.f_2.f_15[iParam0]), func_398(iParam0), iParam0, Local_1270.f_2.f_20, Local_1270.f_164, func_397(iParam0), func_396(iParam0)))
		{
			Local_1270.f_2.f_13[iParam0] = NETWORK::_GET_POSIX_TIME();
			return 1;
		}
	}
	return 0;
}

int func_389(var uParam0, int iParam1, int iParam2, var uParam3, struct<2> Param4, var uParam6, var uParam7)
{
	if (iParam1 == func_68())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1681961.f_4713, 31))
	{
		iVar1 = (Global_1681961.f_4714 - 1);
		if (GAMEPLAY::GET_FRAME_COUNT() == iVar1)
		{
			return 0;
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1681961.f_4713), 31);
		}
	}
	if (Global_1681961.f_4714 == 0)
	{
		Global_1681961.f_4714 = GAMEPLAY::GET_FRAME_COUNT();
		iVar0 = 0;
		while (iVar0 < 20)
		{
			Global_1681961.f_4715[iVar0] = -1;
			iVar0++;
		}
	}
	uVar2 = func_395(iParam1, iParam2);
	*uParam0 = iParam1;
	uParam0->f_1 = uVar2;
	if (func_393(*uParam0))
	{
		if (Global_1681961.f_4714 == GAMEPLAY::GET_FRAME_COUNT())
		{
			GAMEPLAY::SET_BIT(&(Global_1681961.f_4713), iParam2);
			GAMEPLAY::SET_BIT(&(Global_1681961.f_4713), 31);
			Global_1681961.f_4714++;
			return 0;
		}
		else
		{
			func_392(*uParam0, "FREEMODE_DELIVERY_CREATE_DELIVERABLE");
			return 1;
		}
	}
	if (Global_1681961.f_4715[iParam2] == -1)
	{
		Global_1681961.f_4715[iParam2] = uVar2;
	}
	if (!func_13(&(Global_1681961.f_4540)) || func_11(&(Global_1681961.f_4540), 1500, 0))
	{
		bVar3 = true;
		func_16(&(Global_1681961.f_4540), 0, 0);
	}
	if (!bVar3)
	{
		if (GAMEPLAY::GET_FRAME_COUNT() == Global_1681961.f_4542)
		{
			bVar3 = true;
		}
	}
	if (bVar3)
	{
		func_390(*uParam0, uParam3, uParam6, Param4, uParam7);
		Global_1681961.f_4542 = GAMEPLAY::GET_FRAME_COUNT();
	}
	return 0;
}

void func_390(struct<2> Param0, var uParam2, var uParam3, struct<2> Param4, var uParam6)
{
	if (!func_391(Param4))
	{
		return;
	}
	Var0.f_2.f_1 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1000;
	Var0 = 26071989;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_4 = uParam2;
	Var0.f_8 = uParam3;
	Var0.f_5 = uParam6;
	Var0.f_6 = { Param4 };
	iVar9 = func_24(1, 1);
	if (!iVar9 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 9, iVar9);
	}
}

int func_391(struct<2> Param0)
{
	if (Param0 == -1 || Param0.f_1 == -1000)
	{
		return 0;
	}
	return 1;
}

void func_392(var uParam0, var uParam1, char* sParam2)
{
}

int func_393(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419327.f_199.f_1[iVar0].f_1.f_1 != -1 && func_394(Global_2419327.f_199.f_1[iVar0].f_1, Param0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_394(struct<2> Param0, struct<2> Param2)
{
	if (Param0.f_1 != -1 && Param2.f_1 != -1)
	{
		return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
	}
	return 0;
}

int func_395(int iParam0, int iParam1)
{
	iVar0 = GAMEPLAY::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iParam0));
	if (Global_1681961.f_4715[iParam1] != -1)
	{
		return Global_1681961.f_4715[iParam1];
	}
	iVar1 = 0;
	while (iVar1 < 31)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1681961.f_4713, iVar1))
		{
			GAMEPLAY::SET_BIT(&(Global_1681961.f_4713), iVar1);
			return (iVar0 + iVar1);
		}
		iVar1++;
	}
	return -1;
}

int func_396(int iParam0)
{
	return 0;
}

int func_397(int iParam0)
{
	return 1;
}

int func_398(int iParam0)
{
	return iLocal_1216;
}

int func_399()
{
	return 24;
}

void func_400(int iParam0, struct<3> Param1)
{
	func_404(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), Local_1270.f_2.f_15[iParam0].f_1);
	if (func_44(iParam0))
	{
		func_42(iParam0, 29);
		if (iParam0 != func_403(func_43(iParam0)))
		{
			func_42(iParam0, 50);
		}
	}
	else
	{
		func_42(iParam0, 39);
	}
	NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_1270.f_2[iParam0], 1);
	ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), 1200);
	ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), 50, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), true);
	ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), true, true, false, true, true, 1, 1, 0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), 1, 1);
	ENTITY::_SET_ENTITY_REGISTER(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), true);
	unk_0x641F272B52E2F0F8(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), 1);
	OBJECT::_0x77F33F2CCF64B3AA(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), 1);
	if (func_402(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), true);
	}
	else
	{
		func_42(iParam0, 28);
	}
	if (!func_405(iParam0, 1))
	{
		unk_0xD76EEEF746057FD6(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]));
	}
	if (func_405(iParam0, 2))
	{
		ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), Param1, 1, 0, 0, 1);
	}
	if (func_405(iParam0, 3))
	{
		ROPE::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]));
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), 1);
	}
	if (func_405(iParam0, 4))
	{
		ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), 1);
	}
	if ((func_405(iParam0, 6) || func_405(iParam0, 7)) || func_44(iParam0))
	{
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), false, 0);
	}
	if (func_405(iParam0, 8))
	{
		NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), true);
		func_42(iParam0, 23);
	}
	else
	{
		func_42(iParam0, 40);
	}
	if (func_405(iParam0, 9))
	{
		func_401(iParam0, 1, 0);
	}
}

void func_401(int iParam0, int iParam1, int iParam2)
{
	OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), iParam1, iParam2);
}

bool func_402(int iParam0)
{
	if (func_6(iParam0, 29))
	{
		return 0;
	}
	return !func_405(iParam0, 5);
}

int func_403(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_218.f_10)
	{
		if (Local_1270.f_2.f_11[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_404(int iParam0, int iParam1)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "FMDeliverableID", uParam1);
	}
}

bool func_405(int iParam0, int iParam1)
{
	return func_4(&(Local_218.f_10.f_5[iParam0]), iParam1);
}

Vector3 func_406(int iParam0)
{
	if (func_386(iParam0))
	{
		return Local_218.f_95.f_1[func_43(iParam0)].f_4 + func_407(iParam0, Local_218.f_95.f_1[func_43(iParam0)].f_3);
	}
	else if (!func_31(Local_218.f_10.f_5[iParam0].f_3))
	{
		return Local_218.f_10.f_5[iParam0].f_3;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_54.f_12);
	return StackVal, StackVal, StackVal;
}

Vector3 func_407(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -1924433270:
		case -114627507:
			switch (iParam0)
			{
				case 0:
					return 1f, -2f, -0.1f;
				
				case 1:
					return -1f, -2f, -0.1f;
				
				case 2:
					return 1f, -2f, -0.1f;
				
				case 3:
					return -1f, -2f, -0.1f;
				
				default:
			}
			break;
		
		case 931280609:
		case -431692672:
		case -674927303:
			switch (iParam0)
			{
				case 0:
					return 0.5f, 0f, -0.1f;
				
				case 1:
					return -0.5f, 0f, -0.1f;
				
				case 2:
					return 0.5f, 0f, -0.1f;
				
				case 3:
					return -0.5f, 0f, -0.1f;
				
				default:
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			return 1f, 0f, -0.1f;
		
		case 1:
			return -1f, 0f, -0.1f;
		
		case 2:
			return 1f, 0f, -0.1f;
		
		case 3:
			return -1f, 0f, -0.1f;
		
		default:
	}
	return 0f, -1f, -0.1f;
}

int func_408()
{
	return Local_1270.f_123;
}

void func_409(int iParam0)
{
	Local_1270.f_122 = iParam0;
}

int func_410()
{
	if (!func_531(func_533(), func_532()))
	{
		return 0;
	}
	if (!func_421())
	{
		return 0;
	}
	func_420();
	func_419();
	Local_1270.f_140 = NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(func_418(), -1, 0);
	func_416();
	func_415();
	func_413();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_1270.f_105[iVar0] = -1;
		iVar0++;
	}
	Local_1270.f_143 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 99999999);
	Local_1270.f_129 = func_412();
	STATS::_0x6DEE77AFF8C21BD1(&(Local_1270.f_137), &(Local_1270.f_138));
	Global_1628237[iLocal_1216].f_549 = Local_1270.f_137;
	Global_1628237[iLocal_1216].f_550 = Local_1270.f_138;
	Local_1270.f_144 = NETWORK::_GET_POSIX_TIME();
	if (!func_411())
	{
		return 0;
	}
	Call_Loc(Local_433.f_1);
	return StackVal;
}

int func_411()
{
	return 1;
}

int func_412()
{
	return -1;
}

void func_413()
{
	iVar0 = 0;
	while (iVar0 < Local_218.f_28)
	{
		Local_1270.f_24[iVar0].f_15 = func_414(iVar0);
		iVar0++;
	}
}

int func_414(int iParam0)
{
	if (Local_218.f_28.f_1[iParam0].f_16 == -1)
	{
		Local_218.f_28.f_1[iParam0].f_16 = 1500;
	}
	return GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Local_218.f_28.f_1[iParam0].f_16);
}

void func_415()
{
	Local_1270.f_127 = 2;
}

void func_416()
{
	if (func_417())
	{
		if (func_33(&(Local_1270.f_2.f_11), &(Local_1270.f_105.f_3)))
		{
			func_14(2);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_218.f_10)
		{
			Local_1270.f_2.f_11[iVar0] = Local_218.f_10.f_5[iVar0].f_10;
			iVar0++;
		}
	}
}

int func_417()
{
	return 0;
}

char* func_418()
{
	switch (Global_2463024)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_419()
{
}

void func_420()
{
}

int func_421()
{
	func_530();
	func_435();
	if (!func_422())
	{
		return 0;
	}
	Stack.Push(Local_433 != 0);
	Call_Loc(Local_433);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_422()
{
	if (func_434(12))
	{
		return 1;
	}
	if (!func_433())
	{
		return 0;
	}
	func_432();
	func_424();
	if (Local_433.f_8 != 0)
	{
		Call_Loc(Local_433.f_8);
	}
	func_423(12);
	return 1;
}

void func_423(int iParam0)
{
	if (func_15(&uLocal_1229, iParam0))
	{
	}
}

void func_424()
{
	Local_218.f_136[0] = { Local_218.f_95.f_1[0].f_4 };
	Local_218.f_136[0].f_3 = 200f;
	Local_218.f_136[0].f_6 = 0;
	Local_218.f_183 = 1;
	Local_218.f_183.f_1[0] = { Local_218.f_136[0] };
	Local_218.f_183.f_1[0].f_3 = 50f;
	Local_218.f_28.f_62[0].f_1[0] = 0;
	Local_218.f_112 = 1;
	Local_218.f_112.f_1[0].f_2 = func_431();
	Local_218.f_112.f_1[0].f_3 = { Local_218.f_95.f_1[0].f_4 + Vector(2f, 0f, 0f) };
	func_430(0, 25);
	func_430(0, 10);
	func_429(0, 16);
	func_429(0, 34);
	Local_218.f_134 = 1;
	Local_218.f_134.f_1 = 1;
	Local_218.f_128 = Global_262145.f_28850;
	Local_218.f_128.f_1 = 2;
	switch (func_428())
	{
		case 0:
			switch (func_427())
			{
				case 0:
					Local_218.f_164[0].f_2 = { -286.5353f, 6309.744f, 28.49337f };
					Local_218.f_164[0].f_5 = { -297.6026f, 6298.312f, 35.49236f };
					Local_218.f_164[0].f_8 = 12.5f;
					func_426(0, 0);
					Local_218.f_164[1].f_2 = { -286.5353f, 6309.744f, 28.49337f };
					Local_218.f_164[1].f_5 = { -297.6026f, 6298.312f, 35.49236f };
					Local_218.f_164[1].f_8 = 12.5f;
					func_426(1, 4);
					Local_218.f_149[1] = 1;
					Local_218.f_149[1].f_1 = { -291.9085f, 6310.448f, 29.49225f };
					Local_218.f_149[1].f_4 = { -283.1549f, 6298.624f, 34.17293f };
					break;
				
				case 1:
					Local_218.f_164[0].f_2 = { -78.97802f, 6532.613f, 28.54681f };
					Local_218.f_164[0].f_5 = { -67.70448f, 6543.824f, 35.4908f };
					Local_218.f_164[0].f_8 = 15f;
					func_426(0, 0);
					Local_218.f_164[1].f_2 = { -78.97802f, 6532.613f, 28.54681f };
					Local_218.f_164[1].f_5 = { -67.70448f, 6543.824f, 35.4908f };
					Local_218.f_164[1].f_8 = 15f;
					func_426(1, 4);
					Local_218.f_149[0] = 0;
					Local_218.f_149[0].f_1 = { func_425(-75.4234f, 6541.845f, 30.4908f, 10f, 0) };
					Local_218.f_149[0].f_4 = { func_425(-75.4234f, 6541.845f, 30.4908f, 10f, 1) };
					Local_218.f_149[1] = 1;
					Local_218.f_149[1].f_1 = { -77.00486f, 6535.086f, 29.49014f };
					Local_218.f_149[1].f_4 = { -85.27054f, 6545.833f, 33.4908f };
					break;
				
				case 2:
					Local_218.f_28.f_1[0].f_8 = 0;
					Local_218.f_28.f_1[0].f_9 = -1;
					Local_218.f_28.f_1[1].f_8 = 0;
					Local_218.f_28.f_1[1].f_9 = 0;
					break;
			}
			break;
		
		case 1:
			switch (func_427())
			{
				case 3:
					Local_218.f_164[0].f_2 = { -674.6777f, 79.99255f, 48.34937f };
					Local_218.f_164[0].f_5 = { -662.3475f, 80.28144f, 54.94165f };
					Local_218.f_164[0].f_8 = 13.5f;
					func_426(0, 0);
					Local_218.f_164[1].f_2 = { -674.6777f, 79.99255f, 48.34937f };
					Local_218.f_164[1].f_5 = { -662.3475f, 80.28144f, 54.94165f };
					Local_218.f_164[1].f_8 = 13.5f;
					func_426(1, 4);
					Local_218.f_149[0] = 0;
					Local_218.f_149[0].f_1 = { func_425(-670.9532f, 82.5052f, 50.7471f, 10f, 0) };
					Local_218.f_149[0].f_4 = { func_425(-670.9532f, 82.5052f, 50.7471f, 10f, 1) };
					break;
				
				case 4:
					Local_218.f_164[0].f_2 = { -2312.438f, 266.2307f, 166.6021f };
					Local_218.f_164[0].f_5 = { -2319.812f, 282.64f, 173.4671f };
					Local_218.f_164[0].f_8 = 15f;
					func_426(0, 0);
					Local_218.f_164[1].f_2 = { -2312.438f, 266.2307f, 166.6021f };
					Local_218.f_164[1].f_5 = { -2319.812f, 282.64f, 173.4671f };
					Local_218.f_164[1].f_8 = 15f;
					func_426(1, 4);
					Local_218.f_149[0] = 0;
					Local_218.f_149[0].f_1 = { func_425(-2314.728f, 276.2633f, 168.6021f, 10f, 0) };
					Local_218.f_149[0].f_4 = { func_425(-2314.728f, 276.2633f, 168.6021f, 10f, 1) };
					break;
				
				case 5:
					Local_218.f_28.f_1[0].f_8 = 0;
					Local_218.f_28.f_1[0].f_9 = -1;
					Local_218.f_28.f_1[1].f_8 = 0;
					Local_218.f_28.f_1[1].f_9 = 0;
					break;
			}
			break;
		
		case 2:
			switch (func_427())
			{
				case 6:
					Local_218.f_164[0].f_2 = { 739.0746f, -969.018f, 21.52275f };
					Local_218.f_164[0].f_5 = { 752.2088f, -968.995f, 28.8791f };
					Local_218.f_164[0].f_8 = 13.5f;
					func_426(0, 0);
					Local_218.f_164[1].f_2 = { 739.0746f, -969.018f, 21.52275f };
					Local_218.f_164[1].f_5 = { 752.2088f, -968.995f, 28.8791f };
					Local_218.f_164[1].f_8 = 13.5f;
					func_426(1, 4);
					break;
				
				case 7:
					Local_218.f_164[0].f_2 = { 471.2332f, -732.4796f, 24.45348f };
					Local_218.f_164[0].f_5 = { 458.8213f, -732.6755f, 31.35762f };
					Local_218.f_164[0].f_8 = 13.5f;
					func_426(0, 0);
					Local_218.f_164[1].f_2 = { 471.2332f, -732.4796f, 24.45348f };
					Local_218.f_164[1].f_5 = { 458.8213f, -732.6755f, 31.35762f };
					Local_218.f_164[1].f_8 = 13.5f;
					func_426(1, 4);
					Local_218.f_149[0] = 0;
					Local_218.f_149[0].f_1 = { func_425(462.2993f, -730.7943f, 26.3576f, 10f, 0) };
					Local_218.f_149[0].f_4 = { func_425(462.2993f, -730.7943f, 26.3576f, 10f, 1) };
					break;
				
				case 8:
					Local_218.f_28.f_1[0].f_8 = 0;
					Local_218.f_28.f_1[0].f_9 = -1;
					Local_218.f_28.f_1[1].f_8 = 0;
					Local_218.f_28.f_1[1].f_9 = 0;
					break;
			}
			break;
	}
}

Vector3 func_425(struct<3> Param0, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		return Param0 + Vector(fParam3, fParam3, fParam3);
	}
	return Param0 - Vector(fParam3, fParam3, fParam3);
}

void func_426(int iParam0, int iParam1)
{
	if (func_15(&(Local_218.f_164[iParam0]), iParam1))
	{
	}
}

int func_427()
{
	return Local_1270.f_162.f_1;
}

int func_428()
{
	return Local_1270.f_162;
}

void func_429(int iParam0, int iParam1)
{
	if (func_15(&(Local_218.f_95.f_1[iParam0]), iParam1))
	{
	}
}

void func_430(int iParam0, int iParam1)
{
	if (func_15(&(Local_218.f_112.f_1[iParam0]), iParam1))
	{
	}
}

int func_431()
{
	switch (func_428())
	{
		case 0:
			return -237334631;
		
		case 1:
			return -1711408708;
		
		case 2:
			return 1475614842;
		
		default:
	}
	return 0;
}

void func_432()
{
	iVar0 = 0;
	while (iVar0 < Local_218.f_10)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar1++;
		}
		if (-1 != Local_218.f_10.f_5[iVar0].f_10)
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_28)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar1++;
		}
		if (Local_218.f_28.f_1[iVar0].f_10 != -1)
		{
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Local_218.f_190[Local_218.f_28.f_1[iVar0].f_10])))
			{
			}
		}
		if (-1 != Local_218.f_28.f_1[iVar0].f_8)
		{
		}
		if (-1 != Local_218.f_28.f_1[iVar0].f_8)
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_95)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_112)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_136)
	{
		iVar0++;
	}
}

int func_433()
{
	switch (func_428())
	{
		case 0:
			switch (func_427())
			{
				case 0:
					Local_218.f_28.f_1[0].f_2 = 1328415626;
					Local_218.f_28.f_1[0].f_3 = { -288.499f, 6299.241f, 30.492f };
					Local_218.f_28.f_1[0].f_6 = 42.6f;
					Local_218.f_28.f_1[0].f_7 = -1074790547;
					Local_218.f_28.f_1[0].f_10 = 0;
					StringCopy(&(Local_218.f_190[0]), "WORLD_HUMAN_GUARD_STAND", 32);
					Local_218.f_28.f_1[1].f_2 = 1328415626;
					Local_218.f_28.f_1[1].f_3 = { -286.484f, 6304.44f, 30.492f };
					Local_218.f_28.f_1[1].f_6 = 28.199f;
					Local_218.f_28.f_1[1].f_7 = 453432689;
					Local_218.f_28.f_1[1].f_10 = 1;
					StringCopy(&(Local_218.f_190[1]), "WORLD_HUMAN_SMOKING_POT", 32);
					Local_218.f_28.f_1[2].f_2 = 1328415626;
					Local_218.f_28.f_1[2].f_3 = { -286.935f, 6305.677f, 30.492f };
					Local_218.f_28.f_1[2].f_6 = 206.799f;
					Local_218.f_28.f_1[2].f_7 = -494615257;
					Local_218.f_28.f_1[2].f_10 = 2;
					StringCopy(&(Local_218.f_190[2]), "WORLD_HUMAN_DRINKING", 32);
					Local_218.f_95.f_1[0].f_3 = -1207771834;
					Local_218.f_95.f_1[0].f_4 = { -290.654f, 6303.431f, 30.492f };
					Local_218.f_95.f_1[0].f_7 = 115f;
					func_429(0, 7);
					Local_218.f_10.f_5[0].f_10 = 0;
					Local_218.f_10.f_5[0].f_2 = -1964997422;
					Local_218.f_10 = 1;
					Local_218.f_28 = 3;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					break;
				
				case 1:
					Local_218.f_28.f_1[0].f_2 = 1328415626;
					Local_218.f_28.f_1[0].f_3 = { -79.668f, 6535.546f, 30.491f };
					Local_218.f_28.f_1[0].f_6 = 315.6f;
					Local_218.f_28.f_1[0].f_7 = -1074790547;
					Local_218.f_28.f_1[0].f_10 = 0;
					StringCopy(&(Local_218.f_190[0]), "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 32);
					Local_218.f_28.f_1[1].f_2 = 1328415626;
					Local_218.f_28.f_1[1].f_3 = { -72.927f, 6538.502f, 30.491f };
					Local_218.f_28.f_1[1].f_6 = 14.6f;
					Local_218.f_28.f_1[1].f_7 = 453432689;
					Local_218.f_28.f_1[1].f_10 = 1;
					StringCopy(&(Local_218.f_190[1]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
					Local_218.f_28.f_1[2].f_2 = 1328415626;
					Local_218.f_28.f_1[2].f_3 = { -73.187f, 6539.921f, 30.491f };
					Local_218.f_28.f_1[2].f_6 = 193.799f;
					Local_218.f_28.f_1[2].f_7 = -494615257;
					Local_218.f_28.f_1[2].f_10 = 2;
					StringCopy(&(Local_218.f_190[2]), "WORLD_HUMAN_DRINKING", 32);
					Local_218.f_95.f_1[0].f_3 = -1207771834;
					Local_218.f_95.f_1[0].f_4 = { -77.11f, 6537.942f, 30.491f };
					Local_218.f_95.f_1[0].f_7 = 315.6f;
					func_429(0, 7);
					Local_218.f_10.f_5[0].f_10 = 0;
					Local_218.f_10.f_5[0].f_2 = -1964997422;
					Local_218.f_10 = 1;
					Local_218.f_28 = 3;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					break;
				
				case 2:
					Local_218.f_28.f_1[0].f_2 = 1328415626;
					Local_218.f_28.f_1[0].f_3 = { 1253.8f, 6483.887f, 21.376f };
					Local_218.f_28.f_1[0].f_6 = 269.2f;
					Local_218.f_28.f_1[0].f_7 = 453432689;
					Local_218.f_28.f_1[1].f_2 = 1328415626;
					Local_218.f_28.f_1[1].f_3 = { 1254.129f, 6483.602f, 21.44f };
					Local_218.f_28.f_1[1].f_6 = 269.2f;
					Local_218.f_28.f_1[1].f_7 = 324215364;
					Local_218.f_95.f_1[0].f_3 = -1207771834;
					Local_218.f_95.f_1[0].f_4 = { 1254.091f, 6483.862f, 19.618f };
					Local_218.f_95.f_1[0].f_7 = 269.2f;
					func_429(0, 7);
					Local_218.f_10.f_5[0].f_10 = 0;
					Local_218.f_10.f_5[0].f_2 = -1964997422;
					Local_218.f_10 = 1;
					Local_218.f_28 = 2;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					break;
			}
			break;
		
		case 1:
			switch (func_427())
			{
				case 3:
					Local_218.f_28.f_1[0].f_2 = 2010389054;
					Local_218.f_28.f_1[0].f_3 = { -670.294f, 80.811f, 50.435f };
					Local_218.f_28.f_1[0].f_6 = 247.6f;
					Local_218.f_28.f_1[0].f_7 = -1716189206;
					Local_218.f_28.f_1[0].f_10 = 0;
					StringCopy(&(Local_218.f_190[0]), "WORLD_HUMAN_CLIPBOARD", 32);
					Local_218.f_28.f_1[1].f_2 = 2010389054;
					Local_218.f_28.f_1[1].f_3 = { -671.64f, 80.162f, 50.35f };
					Local_218.f_28.f_1[1].f_6 = 267.399f;
					Local_218.f_28.f_1[1].f_7 = -1569615261;
					Local_218.f_28.f_1[1].f_10 = 1;
					StringCopy(&(Local_218.f_190[1]), "WORLD_HUMAN_STAND_IMPATIENT", 32);
					Local_218.f_28.f_1[2].f_2 = 2010389054;
					Local_218.f_28.f_1[2].f_3 = { -667.864f, 84.508f, 50.928f };
					Local_218.f_28.f_1[2].f_6 = 172.199f;
					Local_218.f_28.f_1[2].f_7 = 453432689;
					Local_218.f_28.f_1[2].f_10 = 2;
					StringCopy(&(Local_218.f_190[2]), "WORLD_HUMAN_GUARD_STAND", 32);
					Local_218.f_95.f_1[0].f_3 = -119658072;
					Local_218.f_95.f_1[0].f_4 = { -667.25f, 80.216f, 50.139f };
					Local_218.f_95.f_1[0].f_7 = 260.8f;
					func_429(0, 7);
					Local_218.f_10.f_5[0].f_10 = 0;
					Local_218.f_10.f_5[0].f_2 = -1964997422;
					Local_218.f_10 = 1;
					Local_218.f_28 = 3;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					break;
				
				case 4:
					Local_218.f_28.f_1[0].f_2 = -1589423867;
					Local_218.f_28.f_1[0].f_3 = { -2314.76f, 277.063f, 168.591f };
					Local_218.f_28.f_1[0].f_6 = 22f;
					Local_218.f_28.f_1[0].f_7 = -2067956739;
					Local_218.f_28.f_1[0].f_10 = 0;
					StringCopy(&(Local_218.f_190[0]), "WORLD_HUMAN_CLIPBOARD", 32);
					Local_218.f_28.f_1[1].f_2 = -1589423867;
					Local_218.f_28.f_1[1].f_3 = { -2315.667f, 273.35f, 168.602f };
					Local_218.f_28.f_1[1].f_6 = 68.2f;
					Local_218.f_28.f_1[1].f_7 = -1569615261;
					Local_218.f_28.f_1[1].f_10 = 1;
					StringCopy(&(Local_218.f_190[1]), "WORLD_HUMAN_STAND_MOBILE", 32);
					Local_218.f_28.f_1[2].f_2 = -1589423867;
					Local_218.f_28.f_1[2].f_3 = { -2316.671f, 273.687f, 168.602f };
					Local_218.f_28.f_1[2].f_6 = 229.4f;
					Local_218.f_28.f_1[2].f_7 = 453432689;
					Local_218.f_28.f_1[2].f_10 = 2;
					StringCopy(&(Local_218.f_190[2]), "WORLD_HUMAN_SMOKING", 32);
					Local_218.f_95.f_1[0].f_3 = -119658072;
					Local_218.f_95.f_1[0].f_4 = { -2316.255f, 280.381f, 168.467f };
					Local_218.f_95.f_1[0].f_7 = 24.4f;
					func_429(0, 7);
					Local_218.f_10.f_5[0].f_10 = 0;
					Local_218.f_10.f_5[0].f_2 = -1964997422;
					Local_218.f_10 = 1;
					Local_218.f_28 = 3;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					break;
				
				case 5:
					Local_218.f_28.f_1[0].f_2 = -48477765;
					Local_218.f_28.f_1[0].f_3 = { -1861.437f, 150.461f, 81.193f };
					Local_218.f_28.f_1[0].f_6 = 49.071f;
					Local_218.f_28.f_1[0].f_7 = 453432689;
					Local_218.f_28.f_1[1].f_2 = -48477765;
					Local_218.f_28.f_1[1].f_3 = { -1861.171f, 150.879f, 81.158f };
					Local_218.f_28.f_1[1].f_6 = 49.071f;
					Local_218.f_28.f_1[1].f_7 = 324215364;
					Local_218.f_95.f_1[0].f_3 = -119658072;
					Local_218.f_95.f_1[0].f_4 = { -1861.402f, 150.232f, 79.223f };
					Local_218.f_95.f_1[0].f_7 = 49.6f;
					func_429(0, 7);
					Local_218.f_10.f_5[0].f_10 = 0;
					Local_218.f_10.f_5[0].f_2 = -1964997422;
					Local_218.f_10 = 1;
					Local_218.f_28 = 2;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					break;
			}
			break;
		
		case 2:
			switch (func_427())
			{
				case 6:
					Local_218.f_28.f_1[0].f_2 = 1752208920;
					Local_218.f_28.f_1[0].f_3 = { 747.134f, -970.125f, 23.698f };
					Local_218.f_28.f_1[0].f_6 = 104.799f;
					Local_218.f_28.f_1[0].f_7 = 453432689;
					Local_218.f_28.f_1[0].f_10 = 0;
					StringCopy(&(Local_218.f_190[0]), "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 32);
					Local_218.f_28.f_1[1].f_2 = 1752208920;
					Local_218.f_28.f_1[1].f_3 = { 741.774f, -967.47f, 23.504f };
					Local_218.f_28.f_1[1].f_6 = 355.799f;
					Local_218.f_28.f_1[1].f_7 = -1074790547;
					Local_218.f_28.f_1[1].f_10 = 1;
					StringCopy(&(Local_218.f_190[1]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
					Local_218.f_28.f_1[2].f_2 = 1752208920;
					Local_218.f_28.f_1[2].f_3 = { 741.807f, -965.949f, 23.505f };
					Local_218.f_28.f_1[2].f_6 = 181.398f;
					Local_218.f_28.f_1[2].f_7 = 487013001;
					Local_218.f_28.f_1[2].f_10 = 2;
					StringCopy(&(Local_218.f_190[2]), "WORLD_HUMAN_DRINKING", 32);
					Local_218.f_95.f_1[0].f_3 = 1162065741;
					Local_218.f_95.f_1[0].f_4 = { 744.011f, -971.328f, 23.585f };
					Local_218.f_95.f_1[0].f_7 = 109.2f;
					func_429(0, 7);
					Local_218.f_10.f_5[0].f_10 = 0;
					Local_218.f_10.f_5[0].f_2 = -1964997422;
					Local_218.f_10 = 1;
					Local_218.f_28 = 3;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					break;
				
				case 7:
					Local_218.f_28.f_1[0].f_2 = 1752208920;
					Local_218.f_28.f_1[0].f_3 = { 463.783f, -733.993f, 26.361f };
					Local_218.f_28.f_1[0].f_6 = 176.4f;
					Local_218.f_28.f_1[0].f_7 = 453432689;
					Local_218.f_28.f_1[0].f_10 = 0;
					StringCopy(&(Local_218.f_190[0]), "WORLD_HUMAN_CLIPBOARD", 32);
					Local_218.f_28.f_1[1].f_2 = 1752208920;
					Local_218.f_28.f_1[1].f_3 = { 466.928f, -730.751f, 26.363f };
					Local_218.f_28.f_1[1].f_6 = 56.199f;
					Local_218.f_28.f_1[1].f_7 = -1074790547;
					Local_218.f_28.f_1[1].f_10 = 1;
					StringCopy(&(Local_218.f_190[1]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
					Local_218.f_28.f_1[2].f_2 = 1752208920;
					Local_218.f_28.f_1[2].f_3 = { 465.587f, -730.108f, 26.36f };
					Local_218.f_28.f_1[2].f_6 = 243.199f;
					Local_218.f_28.f_1[2].f_7 = 487013001;
					Local_218.f_28.f_1[2].f_10 = 2;
					StringCopy(&(Local_218.f_190[2]), "WORLD_HUMAN_DRINKING", 32);
					Local_218.f_95.f_1[0].f_3 = 1162065741;
					Local_218.f_95.f_1[0].f_4 = { 463.492f, -737.44f, 26.362f };
					Local_218.f_95.f_1[0].f_7 = 176.4f;
					func_429(0, 7);
					Local_218.f_10.f_5[0].f_10 = 0;
					Local_218.f_10.f_5[0].f_2 = -1964997422;
					Local_218.f_10 = 1;
					Local_218.f_28 = 3;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					break;
				
				case 8:
					Local_218.f_28.f_1[0].f_2 = 1752208920;
					Local_218.f_28.f_1[0].f_3 = { 514.941f, -859.401f, 40.852f };
					Local_218.f_28.f_1[0].f_6 = 271.354f;
					Local_218.f_28.f_1[0].f_7 = 453432689;
					Local_218.f_28.f_1[1].f_2 = 1752208920;
					Local_218.f_28.f_1[1].f_3 = { 515.098f, -860.411f, 40.771f };
					Local_218.f_28.f_1[1].f_6 = 271.354f;
					Local_218.f_28.f_1[1].f_7 = 324215364;
					Local_218.f_95.f_1[0].f_3 = 1162065741;
					Local_218.f_95.f_1[0].f_4 = { 514.737f, -859.692f, 38.819f };
					Local_218.f_95.f_1[0].f_7 = 270.754f;
					func_429(0, 7);
					Local_218.f_10.f_5[0].f_10 = 0;
					Local_218.f_10.f_5[0].f_2 = -1964997422;
					Local_218.f_10 = 1;
					Local_218.f_28 = 2;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					break;
			}
			break;
	}
	return 1;
}

bool func_434(int iParam0)
{
	return func_4(&uLocal_1229, iParam0);
}

void func_435()
{
	if (func_434(21))
	{
		return;
	}
	func_436();
	func_423(21);
}

void func_436()
{
	Local_433.f_6 = 137796;
	Local_433.f_6.f_1 = 135918;
	Local_433.f_1 = 135909;
	Local_433.f_2 = 135882;
	Local_433.f_8 = 135847;
	Local_433.f_3.f_1 = 134957;
	Local_433.f_18 = 134942;
	Local_433.f_18.f_1 = 134927;
	Local_433.f_73 = 134482;
	Local_433.f_73.f_13.f_2 = 134380;
	Local_433.f_73.f_62 = 134330;
	Local_433.f_73.f_76 = 133911;
	Local_433.f_188.f_23 = 133539;
	Local_433.f_188.f_22 = 133411;
	Local_433.f_188.f_13 = 133398;
	Local_433.f_188.f_27 = 132929;
	Local_433.f_37 = 132873;
	Local_433.f_38 = 132864;
	Local_433.f_38.f_1 = 132850;
	Local_433.f_252.f_3 = 132838;
	Local_433.f_252.f_1 = 132829;
	Local_433.f_252.f_4 = 132813;
	Local_433.f_54 = 132768;
	Local_433.f_54.f_1 = 132746;
	Local_433.f_54.f_2 = 132724;
	Local_433.f_54.f_7 = 132712;
	Local_433.f_54.f_3 = 132687;
	Local_433.f_54.f_4 = 132687;
	Local_433.f_54.f_15 = 132500;
	Local_433.f_263 = 132472;
	Local_433.f_216.f_13 = 132256;
	Local_433.f_216.f_14 = 132206;
	Local_433.f_257.f_1 = 132168;
	Local_433.f_257 = 132136;
}

char* func_437(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HLP_MPROP_0";
		
		default:
	}
	return "";
}

int func_438(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_1164[0].f_4 == PLAYER::PLAYER_ID();
		
		default:
	}
	return 0;
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_6(0, 4) || func_6(0, 3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_440(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = Local_1270.f_91[0];
			*uParam2 = { func_442() };
			*uParam3 = { func_441() };
			*uParam4 = 1;
			StringCopy(sParam5, "chassis_dummy", 24);
			return 1;
			break;
	}
	return 0;
}

Vector3 func_441()
{
	switch (func_428())
	{
		case 0:
			break;
		
		case 1:
			return -90f, 0f, 0f;
			break;
		
		case 2:
			return 0f, 0f, 90f;
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_442()
{
	switch (func_428())
	{
		case 0:
			return 0f, -1f, 0.3f;
			break;
		
		case 1:
			return 0f, -2.4f, 0.38f;
			break;
		
		case 2:
			return 0f, -1f, -0.5f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 755;
		
		default:
	}
	return 0;
}

void func_444(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_423(11);
		func_445(0, func_447(), 1, 0, 1);
	}
}

void func_445(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	Var0 = 224793881;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam3;
	iVar7 = func_446(Var0.f_1);
	if (iVar7 != 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 7, iVar7);
	}
}

int func_446(int iParam0)
{
	if (iParam0 != -1)
	{
		GAMEPLAY::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_447()
{
	switch (func_428())
	{
		case 0:
			return 9;
		
		case 1:
			return 8;
		
		case 2:
			return 7;
		
		default:
	}
	return -1;
}

float func_448(var uParam0)
{
	return func_449();
}

float func_449()
{
	return 0.5f;
}

char* func_450(var uParam0)
{
	return "RE_BLIP_MPROP";
}

int func_451(var uParam0)
{
	return func_452();
}

int func_452()
{
	return 9;
}

int func_453(var uParam0)
{
	return func_454();
}

int func_454()
{
	return 143;
}

int func_455(int iParam0)
{
	if (UI::DOES_BLIP_EXIST(uLocal_216[0]))
	{
		return 0;
	}
	if (Local_1164[iParam0].f_4 == PLAYER::PLAYER_ID())
	{
		return 0;
	}
	return 1;
}

var func_456(var uParam0)
{
	return Local_1270.f_91[0];
}

int func_457(var uParam0)
{
	return 0;
}

char* func_458(var uParam0)
{
	return "RE_BLIP_MPROP";
}

bool func_459()
{
	return func_6(0, 1);
}

int func_460()
{
	return 1;
}

Vector3 func_461()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[0]))
	{
		return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_1270.f_91[0]), 0);
	}
	return Local_218.f_95.f_1[0].f_4;
}

void func_462(var uParam0, int iParam1)
{
	switch (func_427())
	{
		case 3:
		case 4:
		case 6:
		case 7:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				if (!func_6(0, 1))
				{
					if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam1, 2) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam1, 2) < 0.8f)
					{
						func_465(iParam1, 2, 0, 1, 5, 1065353216);
					}
					if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam1, 3) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam1, 3) < 0.8f)
					{
						func_465(iParam1, 3, 0, 1, 5, 1065353216);
					}
				}
				else if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam1, 2) && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam1, 3))
				{
					if (!func_13(&uLocal_212))
					{
						if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam1, 2) > 0.1f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam1, 3) > 0.1f)
						{
							func_12(&uLocal_212, 0, 0);
						}
					}
					else if (func_11(&uLocal_212, 2000, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, 0))
						{
							if (func_463(iParam1, 2, 0, 1065353216) && func_463(iParam1, 3, 0, 1065353216))
							{
								VEHICLE::SET_PED_TARGETTABLE_VEHICLE_DESTROY(iParam1, 2, 2);
								VEHICLE::SET_PED_TARGETTABLE_VEHICLE_DESTROY(iParam1, 3, 2);
								func_22(&uLocal_212);
							}
						}
					}
				}
			}
			break;
	}
}

int func_463(int iParam0, int iParam1, int iParam2, float fParam3)
{
	if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam0, iParam1) > 0.01f)
	{
		fVar0 = VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam0, iParam1);
		fVar1 = (GAMEPLAY::GET_FRAME_TIME() / (fParam3 * (1f - fVar0)));
		VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, iParam1, iParam2, func_464(0f, (fVar0 - fVar1)));
	}
	else
	{
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0, iParam1, 1);
		VEHICLE::SET_VEHICLE_DOOR_LATCHED(iParam0, iParam1, 1, 1, 0);
		return 1;
	}
	return 0;
}

float func_464(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_465(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam0, iParam1, iParam2, iParam3);
	VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, iParam1, iParam4, fParam5);
}

float func_466(var uParam0)
{
	return 50f;
}

void func_467(var uParam0, int iParam1)
{
	VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iParam1, 0);
	switch (func_427())
	{
		case 3:
		case 4:
		case 6:
		case 7:
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iParam1, 2, 0);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iParam1, 3, 0);
			func_465(iParam1, 2, 0, 1, 0, 1065353216);
			func_465(iParam1, 3, 0, 1, 0, 1065353216);
			break;
		
		case 5:
		case 8:
			VEHICLE::SET_PED_TARGETTABLE_VEHICLE_DESTROY(iParam1, 2, 2);
			VEHICLE::SET_PED_TARGETTABLE_VEHICLE_DESTROY(iParam1, 3, 2);
			break;
	}
}

int func_468(int iParam0, var uParam1)
{
	switch (func_428())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					StringCopy(&(uParam1->f_1), "69GUO730", 16);
					*uParam1 = 2;
					uParam1->f_5 = 129;
					uParam1->f_8 = 156;
					uParam1->f_97 = 1;
					uParam1->f_99 = 132;
					uParam1->f_98 = 0;
					uParam1->f_69 = 4;
					uParam1->f_62 = 255;
					uParam1->f_63 = 255;
					uParam1->f_64 = 255;
					uParam1->f_74 = 255;
					uParam1->f_76 = 255;
					GAMEPLAY::SET_BIT(&(uParam1->f_77), 0);
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					StringCopy(&(uParam1->f_1), "01ZTR149", 16);
					uParam1->f_5 = 110;
					uParam1->f_6 = 110;
					uParam1->f_7 = 110;
					uParam1->f_8 = 156;
					uParam1->f_97 = 1;
					uParam1->f_99 = 132;
					uParam1->f_98 = 0;
					uParam1->f_67 = 0;
					uParam1->f_69 = 1;
					uParam1->f_62 = 255;
					uParam1->f_63 = 255;
					uParam1->f_64 = 255;
					uParam1->f_74 = 255;
					uParam1->f_76 = 255;
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					StringCopy(&(uParam1->f_1), "81HGQ634", 16);
					*uParam1 = 3;
					uParam1->f_5 = 3;
					uParam1->f_6 = 0;
					uParam1->f_7 = 5;
					uParam1->f_8 = 156;
					uParam1->f_97 = 1;
					uParam1->f_99 = 132;
					uParam1->f_98 = 0;
					uParam1->f_67 = 1;
					uParam1->f_69 = 1;
					uParam1->f_62 = 255;
					uParam1->f_63 = 255;
					uParam1->f_64 = 255;
					uParam1->f_74 = 255;
					uParam1->f_76 = 255;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_469(int iParam0)
{
	switch (func_427())
	{
		case 0:
		case 1:
		case 3:
		case 4:
		case 6:
		case 7:
			func_475(iParam0, 134233);
			func_475(iParam0, 134151);
			break;
		
		case 2:
		case 5:
		case 8:
			func_475(iParam0, 134127);
			break;
	}
	func_475(iParam0, 134096);
	func_475(iParam0, 134072);
	func_475(iParam0, 134048);
}

int func_470(int iParam0)
{
	if (func_73(iParam0, 23))
	{
		return 1;
	}
	return 0;
}

int func_471(int iParam0)
{
	if (func_73(iParam0, 21))
	{
		return 1;
	}
	return 0;
}

int func_472(int iParam0)
{
	func_47(iParam0, 27);
	if (func_73(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_473(int iParam0)
{
	if (func_73(iParam0, 24))
	{
		return 1;
	}
	return 0;
}

int func_474(int iParam0)
{
	func_47(iParam0, 26);
	if (func_73(iParam0, 25))
	{
		return 1;
	}
	return 0;
}

void func_475(int iParam0, int iParam1)
{
	Local_930[iParam0].f_67[Local_930[iParam0].f_73] = iParam1;
	Local_930[iParam0].f_73++;
}

int func_476(int iParam0)
{
	iVar1 = Local_218.f_28.f_1[iParam0].f_14;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar2 = Local_218.f_28.f_62[iVar1].f_1[iVar0];
		if (iVar2 != -1)
		{
			if (func_477(iVar2))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_477(int iParam0)
{
	return func_104(&(Local_1270.f_109), iParam0);
}

int func_478(var uParam0)
{
	switch (func_427())
	{
		case 2:
		case 5:
		case 8:
			return Local_1270.f_91[0];
			break;
	}
	return -1;
}

void func_479(var uParam0, int iParam1)
{
	switch (func_427())
	{
		case 0:
		case 1:
		case 3:
		case 4:
		case 6:
		case 7:
			PED::_0xF1C03A5352243A30(iParam1);
			break;
	}
	PED::SET_PED_DIES_WHEN_INJURED(iParam1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 5, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 17, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, 1);
}

void func_480(int iParam0)
{
	switch (func_427())
	{
		case 0:
		case 1:
		case 3:
		case 4:
		case 6:
		case 7:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					func_485(iParam0, 0, 9);
					func_483(iParam0, 0, 1, 134874);
					func_485(iParam0, 1, 7);
					break;
			}
			break;
		
		case 2:
		case 5:
		case 8:
			switch (iParam0)
			{
				case 0:
					func_485(iParam0, 0, 1);
					func_483(iParam0, 0, 1, 134743);
					func_483(iParam0, 0, 2, 134717);
					func_485(iParam0, 1, 7);
					func_485(iParam0, 2, 2);
					break;
				
				case 1:
					func_485(iParam0, 0, 0);
					func_483(iParam0, 0, 1, 134874);
					func_485(iParam0, 1, 7);
					break;
			}
			break;
	}
}

bool func_481(int iParam0, var uParam1)
{
	return (func_54(iParam0) && Local_1270.f_141 == 1);
}

bool func_482(int iParam0, var uParam1)
{
	return (func_54(iParam0) && Local_1270.f_141 == 0);
}

void func_483(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Local_930[iParam0].f_1[iParam1].f_10;
	uVar1 = iParam2;
	Local_930[iParam0].f_1[iParam1].f_1[iVar0] = uVar1;
	Local_930[iParam0].f_1[iParam1].f_1[iVar0].f_1 = iParam3;
	Local_930[iParam0].f_1[iParam1].f_10++;
}

bool func_484(int iParam0, var uParam1)
{
	return func_54(iParam0);
}

void func_485(int iParam0, int iParam1, int iParam2)
{
	Local_930[iParam0].f_1[iParam1] = iParam2;
	Local_930[iParam0]++;
}

var func_486()
{
	return Global_262145.f_28849;
}

var func_487()
{
	return Global_262145.f_28848;
}

void func_488()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[0]) && func_496(NETWORK::NET_TO_VEH(Local_1270.f_91[0])))
	{
		if (func_492())
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_1270.f_91[0]), 0))
			{
				if (!VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_1270.f_91[0]), PLAYER::PLAYER_ID()))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_1270.f_91[0]), PLAYER::PLAYER_ID(), 1);
				}
			}
			else if (func_490(NETWORK::NET_TO_VEH(Local_1270.f_91[0]), 1093140480, 1, 1056964608, 0, 1, 0))
			{
				if (!func_489(PLAYER::PLAYER_PED_ID(), 451360105, 1))
				{
					AI::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_1270.f_91[0]), 0);
				}
			}
		}
		else if (VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_1270.f_91[0]), PLAYER::PLAYER_ID()))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_1270.f_91[0]), PLAYER::PLAYER_ID(), 0);
		}
	}
}

int func_489(int iParam0, int iParam1, int iParam2)
{
	if (AI::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || (AI::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0 && iParam2))
	{
		return 1;
	}
	return 0;
}

int func_490(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 71, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 76, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 73, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 138, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 136, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 107, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 110, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 87, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 88, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 113, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 115, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 116, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 117, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 118, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 119, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 352, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 131, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 132, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 123, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 126, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 129, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 130, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 133, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	func_491(iParam0);
	if ((GAMEPLAY::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::_SET_VEHICLE_HALT(iParam0, iParam1, iParam2, iParam4);
	}
	Global_29 = GAMEPLAY::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (GAMEPLAY::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_491(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (unk_0x36D782F68B309BDA(iParam0))
		{
			if (unk_0x3D34E80EED4AE3BE(iParam0))
			{
				unk_0x81E1552E35DC3839(iParam0, 0);
			}
		}
	}
}

int func_492()
{
	if (((func_495() && !func_494()) || func_493(PLAYER::PLAYER_ID(), 21)) || func_493(PLAYER::PLAYER_ID(), 25))
	{
		return 1;
	}
	return 0;
}

bool func_493(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_208, iParam1);
}

bool func_494()
{
	return Global_1312418.f_1;
}

var func_495()
{
	return Global_1312418;
}

int func_496(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_497()
{
	func_498(21);
}

void func_498(int iParam0)
{
	if (func_15(&(Local_218.f_8), iParam0))
	{
	}
}

int func_499()
{
	Global_1703580.f_5 = 0;
	Local_1196.f_1[0].f_2 = 1;
	return 1;
}

int func_500()
{
	return 1;
}

void func_501()
{
	func_520(0, 5, 137688);
	func_517(0, 1, 137594);
	func_502(1, 2, 3, 4, 5, 137688, 136265, 137688, 137688, 1);
	func_520(5, 44, 137688);
}

void func_502(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	iVar0 = iParam0;
	iVar1 = iParam1;
	iVar2 = iParam2;
	iVar3 = iParam3;
	if (bParam9)
	{
		iVar4 = iVar3;
		iVar5 = iVar0;
	}
	else
	{
		iVar4 = iVar0;
		iVar5 = iVar3;
	}
	func_520(iVar0, 25, iParam5);
	func_503(iVar0, iParam4);
	func_503(iVar0, iVar1);
	func_503(iVar0, iVar4);
	func_503(iVar0, iVar5);
	func_503(iVar0, iVar2);
	func_520(iVar1, 27, iParam6);
	func_503(iVar1, iParam4);
	func_503(iVar1, iVar4);
	func_503(iVar1, iVar5);
	func_503(iVar1, iVar2);
	func_520(iVar2, 28, iParam7);
	func_503(iVar2, iParam4);
	func_503(iVar2, iVar4);
	func_503(iVar2, iVar5);
	func_520(iVar3, 26, iParam8);
	func_503(iVar3, iParam4);
	func_503(iVar3, iVar1);
	func_503(iVar3, iVar4);
	func_503(iVar3, iVar5);
	func_503(iVar3, iVar2);
}

void func_503(int iParam0, int iParam1)
{
	iVar0 = Local_817[iParam0].f_14;
	uVar1 = iParam1;
	Local_817[iParam0].f_1[iVar0] = uVar1;
	Local_817[iParam0].f_14++;
}

void func_504()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		func_505("BBOT_LOSECOPS", 0);
		return;
	}
	func_505("RD_DELIVER_SOL", 0);
}

void func_505(char* sParam0, bool bParam1)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (UI::_0x43E4111189E54F0E(sParam0) > 23)
	{
		return;
	}
	if (func_515(sParam0))
	{
		return;
	}
	func_509();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_508();
	func_507(bParam1);
	func_506();
}

void func_506()
{
	GAMEPLAY::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_507(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_508()
{
	Global_1312585.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_509()
{
	func_511();
	func_510(0);
}

void func_510(bool bParam0)
{
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_511()
{
	if (!func_514())
	{
	}
	if (func_513())
	{
		UI::_BEGIN_TEXT_COMMAND_UNK(&(Global_1312585.f_12));
		func_512();
		UI::_END_TEXT_COMMAND_UNK();
	}
}

void func_512()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			return;
		
		case 2:
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_53);
			return;
		
		case 3:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 4:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 5:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 6:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 7:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 8:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 9:
			UI::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312585.f_16));
			return;
		
		case 10:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		case 12:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 13:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_57);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 11:
			UI::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312585.f_16));
			return;
		
		case 14:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 15:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_57);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 17:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			return;
		
		case 16:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 19:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 18:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_513()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_514()
{
	if (!func_513())
	{
		return 0;
	}
	UI::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_512();
	return UI::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_515(char* sParam0)
{
	if (!func_513())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_516(sParam0);
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_516(char* sParam0)
{
	if (!func_513())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_517(int iParam0, int iParam1, int iParam2)
{
	iVar0 = Local_817[iParam0].f_14;
	uVar1 = iParam1;
	Local_817[iParam0].f_1[iVar0] = uVar1;
	Local_817[iParam0].f_1[iVar0].f_1 = iParam2;
	Local_817[iParam0].f_14++;
}

int func_518()
{
	if (func_519(0, NETWORK::PARTICIPANT_ID(), 5))
	{
		return 1;
	}
	return func_6(0, 1);
}

bool func_519(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_1436[iParam1].f_19[iParam0]), iParam2);
}

void func_520(int iParam0, int iParam1, int iParam2)
{
	Local_817[iParam0] = iParam1;
	Local_817[iParam0].f_15 = iParam2;
	iLocal_1228++;
}

void func_521()
{
	if (func_523())
	{
		func_522();
	}
}

void func_522()
{
	if (!func_513())
	{
		return;
	}
	if (!GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_509();
}

int func_523()
{
	if (!func_513())
	{
		return 0;
	}
	if (!GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return 0;
	}
	return 1;
}

void func_524()
{
	func_529(0, 5);
	func_527(0, 1, 138065);
	func_529(1, 25);
	func_526(1, 2);
	func_527(1, 3, 137867);
	func_529(2, 27);
	func_527(2, 3, 137867);
	func_529(3, 44);
}

int func_525()
{
	switch (func_408())
	{
		case 3:
		case 4:
		case 1:
			return 1;
		
		default:
	}
	if (func_6(0, 4) || func_6(0, 3))
	{
		return 1;
	}
	return 0;
}

void func_526(int iParam0, int iParam1)
{
	iVar0 = Local_711[iParam0].f_14;
	uVar1 = iParam1;
	Local_711[iParam0].f_1[iVar0] = uVar1;
	Local_711[iParam0].f_14++;
}

void func_527(int iParam0, int iParam1, int iParam2)
{
	iVar0 = Local_711[iParam0].f_14;
	uVar1 = iParam1;
	Local_711[iParam0].f_1[iVar0] = uVar1;
	Local_711[iParam0].f_1[iVar0].f_1 = iParam2;
	Local_711[iParam0].f_14++;
}

bool func_528()
{
	return func_368(0, 6);
}

void func_529(int iParam0, int iParam1)
{
	Local_711[iParam0] = iParam1;
	iLocal_1227++;
}

void func_530()
{
}

int func_531(var uParam0, var uParam1)
{
	Local_1270.f_162 = uParam0;
	Local_1270.f_162.f_1 = uParam1;
	Local_1270.f_141 = 1;
	return 1;
}

int func_532()
{
	iVar0 = NETWORK::_0x638A3A81733086DB();
	if (iVar0 != -1)
	{
		return Global_1703118.f_1[iVar0].f_6;
	}
	return -1;
}

int func_533()
{
	iVar0 = NETWORK::_0x638A3A81733086DB();
	if (iVar0 != -1)
	{
		return Global_1703118.f_1[iVar0].f_5;
	}
	return -1;
}

int func_534()
{
	if (func_434(11))
	{
		return 1;
	}
	if (func_381())
	{
		return func_539(iLocal_1216);
	}
	return func_535(iLocal_1216);
}

int func_535(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 4) || !func_536(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_536(int iParam0, int iParam1)
{
	if (func_537(iParam0, 1))
	{
		return Local_1270.f_2.f_9[iParam1] == NETWORK::_NETWORK_GET_PLAYER_VEHICLE_NETWORK_ID(func_69(iParam0));
	}
	return Local_1270.f_2.f_9[iParam1] == NETWORK::_NETWORK_GET_PLAYER_VEHICLE_NETWORK_ID(iParam0);
}

bool func_537(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_538(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_68();
}

int func_538(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (Global_1628237[iParam0].f_11 != func_68())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_539(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 4) && func_536(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_540()
{
	func_688();
	func_607();
	func_544();
	func_541();
}

void func_541()
{
	if (!func_434(30))
	{
		if (Local_433.f_45 != 0)
		{
			Call_Loc(Local_433.f_45);
			func_542(StackVal);
		}
		func_423(30);
	}
}

void func_542(int iParam0)
{
	if (iParam0 == -1 || iParam0 == 0)
	{
		return;
	}
	func_543(iParam0);
}

void func_543(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::SET_BIT(&(Global_2537071.f_5124.f_35[iVar0]), iVar1);
}

void func_544()
{
	if (func_369(iLocal_1219, 0))
	{
		return;
	}
	if (func_434(11))
	{
		if (Local_433.f_18 != 0)
		{
			Stack.Push(iVar0);
			Call_Loc(Local_433.f_18);
			iVar0 = (StackVal + StackVal);
		}
		if (Local_433.f_18.f_1 != 0)
		{
			Stack.Push(iVar1);
			Call_Loc(Local_433.f_18.f_1);
			iVar1 = (StackVal + StackVal);
		}
	}
	if (Local_433.f_18.f_5 != 0)
	{
		Stack.Push(IntToFloat(iVar0));
		Call_Loc(Local_433.f_18.f_5);
		iVar0 = SYSTEM::ROUND((StackVal * StackVal));
		Stack.Push(IntToFloat(iVar1));
		Call_Loc(Local_433.f_18.f_5);
		iVar1 = SYSTEM::ROUND((StackVal * StackVal));
	}
	if (iVar0 > 0)
	{
		func_595(iVar0);
		if (Local_218.f_134)
		{
			Global_2462880 = iVar0;
			func_16(&Global_2461144, 0, 0);
		}
	}
	if (iVar1 > 0)
	{
		if (Local_218.f_134.f_1)
		{
			func_594();
		}
		func_546(0, iLocal_1217, "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	Local_1189.f_4 = (Local_1189.f_4 + iVar0);
	Local_1189.f_5 = (Local_1189.f_5 + iVar1);
	func_545(0);
}

void func_545(int iParam0)
{
	if (func_15(&(Local_1436[iLocal_1218].f_1), iParam0))
	{
	}
}

int func_546(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_547(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_547(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	iVar0 = func_557(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_553(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_548(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_548(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	Var0 = { func_551(iParam0, 1) };
	if (iParam0 == func_550(PLAYER::PLAYER_PED_ID()))
	{
		func_549(1);
	}
	func_553(Var0, iParam1, 0, sParam2, uParam3);
}

void func_549(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_550(int iParam0)
{
	return iParam0;
}

Vector3 func_551(int iParam0, bool bParam1)
{
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_552(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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

int func_552(int iParam0)
{
	return iParam0;
}

void func_553(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
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
			Global_2439138.f_1290[iVar1].f_4 = func_556(Global_2439138.f_1290[iVar1], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2439138.f_1290[iVar1].f_3 = iParam3;
			Global_2439138.f_1290[iVar1].f_8 = iParam4;
			Global_2439138.f_1290[iVar1].f_9 = func_555();
			Global_2439138.f_1290[iVar1].f_10 = func_554();
			StringCopy(&(Global_2439138.f_1290[iVar1].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), uParam6);
		}
	}
}

int func_554()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_555()
{
	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_556(struct<3> Param0, var uParam3, var uParam4)
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

var func_557(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_558(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_558(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_593(PLAYER::PLAYER_ID()) || func_592(PLAYER::PLAYER_ID()))
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
	else if (func_590() || func_588(PLAYER::PLAYER_ID()))
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
	if (func_587(uParam2))
	{
	}
	if (func_586())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_584(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_583(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_581(0, &iVar1);
					break;
				
				case 3:
					func_581(1, &iVar1);
					break;
				
				case 1:
					func_579(&iVar1);
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
			func_577(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_568((func_576(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590535[PLAYER::PLAYER_ID()].f_39.f_2 != -1)
				{
					func_577(1165, iVar1, -1);
				}
				func_563(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_559((func_561(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_559((func_561(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_559(int iParam0)
{
	if (func_586())
	{
		Global_1590535[PLAYER::PLAYER_ID()].f_211.f_5 = iParam0;
		func_560(-1804740956, iParam0);
	}
}

void func_560(int iParam0, var uParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_561(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_28(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_562(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_562(-1804740956);
		}
	}
	return 0;
}

int func_562(int iParam0)
{
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_563(int iParam0)
{
	Var0 = { func_70(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_566(func_567(&Var0));
			if (iVar13 == 0)
			{
				func_565(&Global_1387915, iParam0);
				func_564(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_565(&Global_1387916, iParam0);
				func_564(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_565(&Global_1387917, iParam0);
				func_564(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_565(&Global_1387918, iParam0);
				func_564(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_565(&Global_1387919, iParam0);
				func_564(1894078811, Global_1387919);
			}
		}
	}
}

void func_564(int iParam0, var uParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case 406381289:
			Global_1387910 = uParam1;
			break;
		
		case 1669900865:
			Global_1387912 = uParam1;
			break;
		
		case 54164875:
			Global_1387912 = uParam1;
			break;
		
		case -842450336:
			Global_1387913 = uParam1;
			break;
		
		case -1576871964:
			Global_1387914 = uParam1;
			break;
		
		case -1446982891:
			Global_1387915 = uParam1;
			break;
		
		case -1676857426:
			Global_1387916 = uParam1;
			break;
		
		case 1280806976:
			Global_1387917 = uParam1;
			break;
		
		case -1096682281:
			Global_1387918 = uParam1;
			break;
		
		case 1894078811:
			Global_1387919 = uParam1;
			break;
		
		case -1566025259:
			Global_1387920 = uParam1;
			break;
		
		case -621080327:
			Global_1387921 = uParam1;
			break;
		
		case 1021002722:
			Global_1387922 = uParam1;
			break;
		
		case -1670771646:
			Global_1387923 = uParam1;
			break;
		
		case -1992420464:
			Global_1387924 = uParam1;
			break;
		
		case -386175531:
			Global_1387925 = uParam1;
			break;
		
		case -203536263:
			Global_1387926 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_565(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_566(int iParam0)
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

int func_567(var uParam0)
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

void func_568(int iParam0, int iParam1, int iParam2)
{
	if (func_586())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_155(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_155(-1)])
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
		if (func_362(PLAYER::PLAYER_ID()))
		{
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_1 = iParam0;
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_6 = func_574(iParam0, 1);
		}
		func_573(639, iParam0, -1, 1);
		func_572(640, func_574(iParam0, 1), -1, 1, 0);
		Global_1388060[func_155(-1)] = iParam0;
		func_569(-1109644434, 7, 0);
	}
}

void func_569(int iParam0, int iParam1, int iParam2)
{
	if (func_571(iParam1, iParam2))
	{
		iVar0 = func_570();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_570()
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

int func_571(int iParam0, var uParam1)
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

void func_572(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_155(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_573(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_155(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_155(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_155(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_155(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_155(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_155(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_155(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_155(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_155(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_155(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_155(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_155(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_155(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_155(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_155(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_155(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_155(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_155(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_155(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_155(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_155(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_155(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_155(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_155(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_155(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_155(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_155(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_155(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_155(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_155(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_155(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_155(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_155(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_155(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_155(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_155(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_155(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_155(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_155(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_155(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_155(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_155(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_155(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_155(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_155(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_155(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_155(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_155(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_155(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_155(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_155(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_155(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_155(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_155(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_155(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_155(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_155(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_155(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_155(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_155(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_155(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_155(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_155(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_155(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_155(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_155(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_155(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_155(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_155(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_155(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_155(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_155(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_155(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_155(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_155(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_155(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_155(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_155(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_155(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_155(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_155(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_155(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_155(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_155(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_155(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_155(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_155(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_155(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_155(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_155(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_155(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_155(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_155(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_155(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_155(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_155(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_155(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_155(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_155(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_155(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_155(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_155(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_155(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_155(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_155(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_155(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_574(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_575(iParam0, 0);
}

int func_575(int iParam0, int iParam1)
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

int func_576(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388060[func_155(-1)];
			}
			else if (func_362(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_155(-1)];
	}
	return 0;
}

void func_577(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_154(iParam0, func_155(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_578(iParam0))
	{
		func_572(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_573(iParam0, iVar0, iParam2, 1);
	}
}

int func_578(int iParam0)
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

void func_579(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_274(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_71(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_580(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_580(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_580(int iParam0, int iParam1)
{
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_581(bool bParam0, int iParam1)
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
				if (func_28(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_71(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_28(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_582(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_71(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_580(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_580(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_582(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_63(iParam0), func_63(iParam1));
	return 0f;
}

int func_583(int iParam0)
{
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_580(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_584(int iParam0)
{
	if (iParam0 < 0)
	{
		if (GAMEPLAY::ABSI(iParam0) > func_576(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_576(PLAYER::PLAYER_ID());
		}
	}
	if (func_585(8000, 0, 0) > 0)
	{
		if (func_585(8000, 0, 0) < (iParam0 + func_576(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_585(8000, 0, 0) - func_576(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_585(int iParam0, bool bParam1, int iParam2)
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

int func_586()
{
	return 1;
}

int func_587(var uParam0)
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

int func_588(int iParam0)
{
	return func_589(func_176(iParam0));
}

int func_589(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_590()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_64();
	}
	return func_591(Global_4456448.f_194990);
}

int func_591(int iParam0)
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

bool func_592(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_593(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

void func_594()
{
	Global_2462221 = 1;
}

void func_595(int iParam0)
{
	if (func_218())
	{
		func_596(-1027218631, iParam0, &uVar0, 0, 1, 0);
	}
	else
	{
		NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iParam0, "FM Event Completion", &uVar1);
	}
}

void func_596(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_218())
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
				func_597(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_597(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_597(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_597(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_597(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!UNK3::_0xB24F0944DA203D9E(func_27()) || UNK3::_0x810E8431C0614BF9())
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
			*uParam0 = func_604(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_603(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_598(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_598(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_599(iParam0);
	}
}

void func_599(int iParam0)
{
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_602(iParam0))
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
		func_600(&(Global_4263954[iParam0]));
	}
}

void func_600(var uParam0)
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
	func_601(&(uParam0->f_14));
	func_601(&(uParam0->f_14.f_13));
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

void func_601(var uParam0)
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

int func_602(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_603(int iParam0, var uParam1)
{
	Global_2463019 = uParam1;
	Global_2463018 = iParam0;
}

int func_604(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_218())
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
				func_605(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_605(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_446(Var0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_606();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_606()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

void func_607()
{
	if (!func_434(8))
	{
		if (func_660(0, 1, 1) && func_659())
		{
			func_608();
			func_423(8);
		}
	}
}

void func_608()
{
	if (func_434(11))
	{
		iVar0 = Global_1703580.f_3;
		if (!Global_1703580.f_5)
		{
			iVar0++;
		}
		else
		{
			Global_1703580.f_5 = 0;
		}
		if (iVar0 > 10)
		{
			iVar0 = 10;
		}
		func_614(25, iVar0, "RE_SHRD_SMPDEL", "RE_SHRD_TMPDEL", 1, 15000, -1082130432, 2);
		func_609("RE_SHRD_MPTICK", iVar0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "movie_prop", "DLC_SUM20_HIDDEN_COLLECTIBLES", 0);
	}
}

int func_609(char* sParam0, int iParam1)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_610(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_610(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_613() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_25(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_611(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0] = iParam0;
		Global_1670846.f_5[iVar0].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0].f_2[0] = iParam4;
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

int func_611(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_612(iVar0);
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

void func_612(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_613()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

int func_614(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_658(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_615(&Var0);
}

int func_615(var uParam0)
{
	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_631(uParam0, uParam0->f_17);
	func_628(uParam0);
	if (func_64())
	{
		func_628(uParam0);
	}
	if (func_627(uParam0->f_1))
	{
		func_620();
		if (Global_2439138.f_2723[0].f_2 == 0)
		{
			Global_2439138.f_2723[0] = { *uParam0 };
			return 1;
		}
		if (((Global_2439138.f_2723[0].f_1 == 13 || Global_2439138.f_2723[0].f_1 == 53) || Global_2439138.f_2723[0].f_1 == 54) || Global_2439138.f_2723[0].f_1 == 58)
		{
			Global_2439138.f_2723[0].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2439138.f_2723[iVar0 + 1] = { Global_2439138.f_2723[iVar0] };
			iVar0 = (iVar0 + -1);
		}
		Global_2439138.f_2723[1] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2439138.f_2723[iVar0].f_2 == 0)
		{
			Global_2439138.f_2723[iVar0] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_620();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_618(&(Global_2439138.f_2723[iVar0].f_69), 2);
				Global_2439138.f_2723[iVar0].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_617(uParam0->f_69, 128))
			{
				if (func_616(Global_2439138.f_2723[iVar0].f_1))
				{
					Global_2439138.f_2723[iVar0].f_2 = 5;
					func_618(&(Global_2439138.f_2723[iVar0].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_616(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_617(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_618(var uParam0, int iParam1)
{
	func_619(uParam0, iParam1);
}

void func_619(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_620()
{
	if (Global_2439138.f_3046)
	{
		return;
	}
	if (!Global_76890)
	{
		Global_76890 = 1;
		bVar0 = true;
	}
	func_621();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_621()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_625(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_622(&(Global_2439138.f_3047.f_1));
}

void func_622(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (GAMEPLAY::IS_PC_VERSION())
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(0);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_76891)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_624(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_623(0);
}

void func_623(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_624(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
}

void func_625(var uParam0)
{
	func_626(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_626(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_627(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_628(var uParam0)
{
	if (func_630(uParam0->f_1))
	{
		uParam0->f_72 = func_629();
	}
}

int func_629()
{
	return 21;
}

int func_630(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_631(var uParam0, int iParam1)
{
	if (func_630(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_68() || !func_28(iParam1, 0, 1))
	{
		return;
	}
	if (func_616(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_632(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_632(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_278(iParam0) && !bParam4)
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
	if (((func_278(PLAYER::PLAYER_ID()) || (func_657() && func_656())) && !GAMEPLAY::IS_BIT_SET(Global_2537071.f_4591, 31)) && !bParam4)
	{
		uVar1 = func_655();
		if (ENTITY::DOES_ENTITY_EXIST(uVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::_NETWORK_GET_PED_PLAYER(iVar1) != -1)
				{
					if (func_28(NETWORK::_NETWORK_GET_PED_PLAYER(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_653(iParam1, iParam0, 0);
							}
							else
							{
								return func_644(iParam0, NETWORK::_NETWORK_GET_PED_PLAYER(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_644(iParam0, NETWORK::_NETWORK_GET_PED_PLAYER(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_653(iParam1, iParam0, 0);
				}
				else
				{
					return func_633(0, -1, 0);
				}
			}
			else
			{
				return func_633(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_653(iParam1, iParam0, 0);
		}
		else
		{
			return func_644(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_644(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_633(bool bParam0, int iParam1, bool bParam2)
{
	return func_634(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_634(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_643() || (func_642() && func_640())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_639(iParam2, iVar0);
		}
		else
		{
			return func_639(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_274(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_638(1);
				}
				else
				{
					return func_638(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_635(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_635(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_638(1);
	}
	return func_638(0);
}

int func_635(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_637(iParam0, iParam1, iParam3);
	if (func_636(Global_4456448.f_194990, 1))
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

int func_636(int iParam0, bool bParam1)
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

int func_637(int iParam0, int iParam1, int iParam2)
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
			if (!func_274(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_638(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_639(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_637(iParam1, iParam0, 4);
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

bool func_640()
{
	if (func_641())
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_237025, 4);
}

bool func_641()
{
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_226020, 12);
}

bool func_642()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return GAMEPLAY::IS_BIT_SET(Global_4456448.f_237025, 0);
	}
	return ((GAMEPLAY::IS_BIT_SET(Global_4456448.f_237025, 0) || Global_1653478) && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1518439287) > 0);
}

int func_643()
{
	if (func_641() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_644(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_650())
			{
				iVar3 = func_649(iParam0);
				if (!iVar3 == -1)
				{
					return func_647(iVar3);
				}
			}
			if ((func_646(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_274(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_638(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_645(1);
			}
			else
			{
				return func_634(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_638(1);
			}
			else
			{
				return func_634(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_649(iParam0);
	if (!iVar4 == -1)
	{
		return func_647(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_645(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_646(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_647(int iParam0)
{
	if (iParam0 > -1)
	{
		iVar0 = func_648(iParam0);
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

var func_648(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0].f_1;
}

int func_649(int iParam0)
{
	if (!iParam0 == func_68())
	{
		if (func_537(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_69(iParam0)];
		}
	}
	return -1;
}

int func_650()
{
	if (((func_346() || func_652()) || func_64()) || func_651())
	{
		return 1;
	}
	return 0;
}

var func_651()
{
	return Global_2450632.f_19;
}

var func_652()
{
	return Global_2450632.f_16;
}

int func_653(int iParam0, int iParam1, bool bParam2)
{
	iVar1 = Global_969031.f_14[iParam0];
	if (func_650())
	{
		iVar2 = func_649(iParam1);
		if (!iVar2 == -1)
		{
			return func_647(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_271[iParam0].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_68())
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
			iVar0 = func_634(iParam1, !bParam2, iParam0, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_654(iParam0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26) && !func_274(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_645(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_654(int iParam0)
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

var func_655()
{
	return Global_2359302.f_2;
}

bool func_656()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 4);
}

bool func_657()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

void func_658(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_68();
	uParam1->f_18 = func_68();
	uParam1->f_19 = func_68();
	uParam1->f_20 = func_68();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = uParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_659()
{
	return 1;
}

bool func_660(bool bParam0, int iParam1, bool bParam2)
{
	return (!func_492() && func_661(iParam1, bParam0, bParam2));
}

int func_661(var uParam0, bool bParam1, bool bParam2)
{
	if (func_687(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_493(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_493(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_686(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_685())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_684(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_683())
	{
		return 0;
	}
	if (func_679(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_678(PLAYER::PLAYER_ID()) != func_68() && func_678(PLAYER::PLAYER_ID()) == func_69(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_676(func_677()) && !func_674(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_673())
	{
		return 0;
	}
	if (func_672())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_276(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_670())
	{
		return 0;
	}
	if (func_493(PLAYER::PLAYER_ID(), 0) || func_493(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_493(PLAYER::PLAYER_ID(), 12) || func_493(PLAYER::PLAYER_ID(), 14)) || func_493(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_669(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_668() && !Global_2513487)
		{
			return 0;
		}
	}
	if (func_667(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_159())
	{
		return 0;
	}
	if (Global_1662006)
	{
		return 0;
	}
	if (func_666(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_665())
	{
		return 0;
	}
	if (func_663(PLAYER::PLAYER_ID()) && Global_1590184.f_171)
	{
		return 0;
	}
	if (func_299())
	{
		return 0;
	}
	if (func_662(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_2536130)
	{
		return 0;
	}
	if (Global_1694139)
	{
		return 0;
	}
	return 1;
}

int func_662(int iParam0)
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
		uVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
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

int func_663(int iParam0)
{
	if (func_664(Global_1590535[iParam0].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

int func_664(int iParam0)
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

int func_665()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_666(int iParam0)
{
	if (!func_28(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590535[iParam0].f_35;
}

bool func_667(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 11);
}

bool func_668()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

int func_669(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_68())
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

int func_670()
{
	if (func_671() == 0)
	{
		return 1;
	}
	return 0;
}

int func_671()
{
	return Global_1312467.f_18;
}

bool func_672()
{
	return Global_1590535[PLAYER::PLAYER_ID()].f_196 != 0;
}

bool func_673()
{
	return Global_1312877;
}

int func_674(int iParam0)
{
	if (func_675(iParam0) == 236 || func_675(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_675(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0];
	}
	return -1;
}

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_677()
{
	return Global_2439138.f_2723[0].f_1;
}

int func_678(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_35;
}

int func_679(int iParam0)
{
	if (func_682(iParam0))
	{
		return 1;
	}
	if (func_680(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_680(int iParam0)
{
	return func_681(iParam0, 20);
}

bool func_681(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_682(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1628237[iVar0].f_1, 7);
	}
	return 0;
}

bool func_683()
{
	return Global_1590535[PLAYER::PLAYER_ID()] == 5;
}

int func_684(int iParam0)
{
	if (Global_2425662[iParam0].f_261.f_4 != 0 || Global_2425662[iParam0].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_685()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 0);
}

int func_686(int iParam0)
{
	if (func_275(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_687(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_5, iParam1);
}

void func_688()
{
	if (func_692())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_691(iVar0, iLocal_1219, 16))
		{
			if (Local_1270.f_2.f_15[iVar0].f_1 != -1)
			{
				func_690(Local_1270.f_2.f_15[iVar0]);
			}
			func_689(iVar0, 16);
		}
		iVar0++;
	}
}

void func_689(int iParam0, int iParam1)
{
	if (func_15(&(Local_1436[iLocal_1218].f_3[iParam0]), iParam1))
	{
	}
}

void func_690(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1681961.f_4558[iVar0].f_1 == -1)
		{
			Global_1681961.f_4558[iVar0] = { Param0 };
			GAMEPLAY::SET_BIT(&Global_1681961, 1);
			return;
		}
		iVar0++;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_1681961, 1))
	{
		GAMEPLAY::SET_BIT(&Global_1681961, 1);
	}
}

bool func_691(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_1436[iParam1].f_3[iParam0]), iParam2);
}

bool func_692()
{
	return func_693(PLAYER::PLAYER_ID());
}

int func_693(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_694(Global_1628237[iParam0].f_579.f_12) || GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_579, 4))
		{
			return 1;
		}
	}
	return 0;
}

bool func_694(struct<2> Param0)
{
	return (Param0.f_1 != -1 && Param0 != func_68());
}

void func_695()
{
}

void func_696()
{
	func_1317();
	func_1313();
	func_1311();
	func_1281();
	if (Local_433.f_3.f_1 != 0)
	{
		Call_Loc(Local_433.f_3.f_1);
	}
	func_1194();
	func_1149();
	func_1132();
	func_1031();
	func_1026();
	func_1008();
	func_977();
	func_948();
	func_913();
	func_912();
	func_892();
	func_888();
	func_755();
	func_752();
	func_733();
	func_708();
	func_701();
	func_697();
}

void func_697()
{
	if (func_700() != -1)
	{
		while ((func_700() < iLocal_1228 && iVar0 < Local_817[func_700()].f_14) && Local_817[func_700()].f_1[iVar0] != -1)
		{
			if (func_699(func_700(), iVar0))
			{
				Call_Loc(Local_817[func_700()].f_13);
				func_698(Local_817[func_700()].f_1[iVar0]);
				Call_Loc(Local_817[func_700()].f_12);
				return;
			}
			iVar0++;
		}
	}
}

void func_698(var uParam0)
{
	Local_1436[iLocal_1218] = uParam0;
}

bool func_699(int iParam0, int iParam1)
{
	if (Local_817[iParam0].f_1[iParam1].f_1 != 0)
	{
		Call_Loc(Local_817[iParam0].f_1[iParam1].f_1);
		return StackVal;
	}
	return (Local_817[iParam0].f_1[iParam1] == func_20() || Local_817[iParam0].f_1[iParam1] == Local_1270.f_131);
}

int func_700()
{
	return Local_1436[iLocal_1218];
}

void func_701()
{
	if (!func_707())
	{
		return;
	}
	if (!func_706())
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 22, 1);
		PED::SET_PED_RESET_FLAG(iLocal_1217, 102, 1);
		PED::SET_PED_RESET_FLAG(iLocal_1217, 362, 1);
	}
	fVar0 = func_705();
	if (fVar0 != -1f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1217, fVar0);
	}
	fVar0 = func_704();
	if (fVar0 != -1f)
	{
		PED::SET_PED_CAPSULE(iLocal_1217, fVar0);
	}
	if (func_703())
	{
		ENTITY::SET_ENTITY_VELOCITY(iLocal_1217, func_702());
	}
}

Vector3 func_702()
{
	if (Local_433.f_10.f_5 != 0)
	{
		Call_Loc(Local_433.f_10.f_5);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_703()
{
	if (Local_433.f_10.f_4 != 0)
	{
		Call_Loc(Local_433.f_10.f_4);
		return StackVal;
	}
	return 0;
}

float func_704()
{
	if (Local_433.f_10.f_3 != 0)
	{
		Call_Loc(Local_433.f_10.f_3);
		return StackVal;
	}
	return 0.3f;
}

float func_705()
{
	if (Local_433.f_10.f_2 != 0)
	{
		Call_Loc(Local_433.f_10.f_2);
		return StackVal;
	}
	if (AI::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_1217) > 1f)
	{
		return 1.85f;
	}
	return -1f;
}

int func_706()
{
	if (Local_433.f_10.f_1 != 0)
	{
		Call_Loc(Local_433.f_10.f_1);
		return StackVal;
	}
	return 0;
}

int func_707()
{
	if (Local_433.f_10 != 0)
	{
		Call_Loc(Local_433.f_10);
		return StackVal;
	}
	return 0;
}

void func_708()
{
	if (!func_46(19) || !func_732(iLocal_1216))
	{
		return;
	}
	switch (func_731())
	{
		case 0:
			if (!func_434(33))
			{
				func_423(33);
			}
			break;
		
		case 9:
			if (func_434(33))
			{
				if ((iLocal_1195 == -1569615261 || WEAPON::GET_WEAPONTYPE_GROUP(iLocal_1195) == -728555052) && WEAPON::HAS_PED_GOT_WEAPON(iLocal_1217, iLocal_1195, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_1217, iLocal_1195, 1);
				}
				else
				{
					func_710(2);
				}
				func_709(33);
			}
			break;
		
		case 99:
			WEAPON::GET_CURRENT_PED_WEAPON(iLocal_1217, &iVar0, 0);
			if (iLocal_1195 != iVar0)
			{
				iLocal_1195 = iVar0;
			}
			break;
	}
}

void func_709(int iParam0)
{
	if (func_122(&uLocal_1229, iParam0))
	{
	}
}

void func_710(int iParam0)
{
	if (func_672())
	{
		iParam0 = 5;
	}
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			func_729();
			break;
		
		case 2:
			if ((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_728(), 0) && func_728() != -1569615261) && func_728() != -72657034)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_728(), 1);
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_728()) == 0 && func_728() != 940833800)
				{
					func_713(func_728());
				}
				if (Global_1312416 == 0 || func_728() == 0)
				{
					if (func_728() == 940833800)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_728(), 1);
						Global_1312416 = func_728();
					}
					else
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 1), 0);
						Global_1312416 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
					}
				}
				if ((!func_712(func_728()) && !func_711(func_728())) && func_728() != 0)
				{
					WEAPON::_IS_PED_RELOADING(PLAYER::PLAYER_PED_ID());
				}
			}
			else
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
				if (iVar0 != 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, 1);
				}
			}
			break;
		
		case 3:
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_728(), 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_728(), 1);
				Global_1312416 = func_728();
			}
			break;
		
		case 4:
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_728(), 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_728(), 1);
				Global_1312416 = func_728();
			}
			break;
		
		case 5:
			if (!Global_1662006)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
				Global_1312416 = -1569615261;
			}
			break;
		
		case 6:
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0), 1);
			Global_1312416 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
			break;
	}
}

int func_711(int iParam0)
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

int func_712(int iParam0)
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

void func_713(int iParam0)
{
	if (func_727(Global_4456448.f_232883))
	{
		if (func_712(iParam0))
		{
			return;
		}
	}
	iVar0 = func_726(iParam0);
	if (((iVar0 == 0 || iVar0 == 29) || iVar0 == 33) || iVar0 == 31)
	{
		return;
	}
	iVar1 = iVar0;
	while (iVar1 >= 0)
	{
		iVar2 = func_725(iVar1, 0);
		if (func_714(iVar2, -1))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar2, 0))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar2) > 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar2, 1);
					return;
				}
			}
		}
		iVar1 = (iVar1 + -1);
	}
	iVar1 = iVar0;
	while (iVar1 <= 85)
	{
		iVar3 = func_725(iVar1, 0);
		if (func_714(iVar3, -1))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar3, 0))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar3) > 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar3, 1);
					return;
				}
			}
		}
		iVar1++;
	}
}

bool func_714(int iParam0, int iParam1)
{
	if (func_722() == 0)
	{
		return 0;
	}
	if (func_721())
	{
		return 0;
	}
	iVar0 = func_720(iParam0);
	if (iVar0 != 414 && func_719(iVar0, -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	iVar1 = func_716(iParam0, iParam1);
	iVar2 = func_715(iParam0);
	return GAMEPLAY::IS_BIT_SET(iVar1, func_182(iVar2));
}

int func_715(int iParam0)
{
	return func_726(iParam0);
}

int func_716(int iParam0, int iParam1)
{
	iVar0 = func_154(func_717(iParam0), iParam1, 0);
	return iVar0;
}

int func_717(int iParam0)
{
	iVar0 = func_715(iParam0);
	iVar1 = func_185(iVar0);
	if ((func_157() == 0 || func_718() == 0) || (func_157() == 999 && func_718() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 685;
				break;
			
			case 1:
				return 686;
				break;
			
			case 2:
				return 2419;
				break;
		}
	}
	return 11511;
}

int func_718()
{
	return Global_30769;
}

int func_719(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_155(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_720(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
			return 17;
			break;
		
		case 1593441988:
			return 19;
			break;
		
		case 584646201:
			return 23;
			break;
		
		case -1716589765:
			return 21;
			break;
		
		case 736523883:
			return 27;
			break;
		
		case 324215364:
			return 25;
			break;
		
		case -1074790547:
			return 31;
			break;
		
		case -2084633992:
			return 33;
			break;
		
		case -1357824103:
			return 35;
			break;
		
		case -1660422300:
			return 37;
			break;
		
		case 2144741730:
			return 39;
			break;
		
		case 487013001:
			return 43;
			break;
		
		case 2017895192:
			return 45;
			break;
		
		case -494615257:
			return 49;
			break;
		
		case 205991906:
			return 55;
			break;
		
		case 100416529:
			return 53;
			break;
		
		case -1568386805:
			return 59;
			break;
		
		case -1312131151:
			return 61;
			break;
		
		case 1119849093:
			return 63;
			break;
		
		case -1813897027:
			return 65;
			break;
		
		case -37975472:
			return 67;
			break;
		
		case 741814745:
			return 69;
			break;
		
		case 615608432:
			return 71;
			break;
		
		case 883325847:
			return 74;
			break;
		
		case -72657034:
			return 73;
			break;
		
		case -1716189206:
			return 1;
			break;
		
		case 1737195953:
			return 3;
			break;
		
		case 1317494643:
			return 11;
			break;
		
		case -1786099057:
			return 13;
			break;
		
		case -2067956739:
			return 5;
			break;
		
		case 1141786504:
			return 15;
			break;
		
		case -572349828:
			return 41;
			break;
		
		case -270015777:
			return 29;
			break;
		
		case 392730790:
			return 57;
			break;
		
		case -1654528753:
			return 47;
			break;
		
		case -102323637:
			return 142;
			break;
		
		case -1063057011:
			return 282;
			break;
		
		case -1076751822:
			return 144;
			break;
		
		case -771403250:
			return 280;
			break;
		
		case 2132975508:
			return 284;
			break;
		
		case 1627465347:
			return 286;
			break;
		
		case 137902532:
			return 309;
			break;
		
		case -1834847097:
			return 307;
			break;
		
		case -1466123874:
			return 313;
			break;
		
		case 2138347493:
			return 311;
			break;
		
		case 1198879012:
			return 301;
			break;
		
		case 984333226:
			return 325;
			break;
		
		case -952879014:
			return 327;
			break;
		
		case -1420407917:
			return 331;
			break;
		
		case 1672152130:
			return 333;
			break;
		
		case -102973651:
			return 329;
			break;
		
		case 171789620:
			return 335;
			break;
		
		case -656458692:
			return 337;
			break;
		
		case -598887786:
			return 339;
			break;
		
		case -581044007:
			return 341;
			break;
		
		case -619010992:
			return 343;
			break;
		
		case -275439685:
			return 348;
			break;
		
		case 1649403952:
			return 346;
			break;
		
		case -1951375401:
			return 350;
			break;
		
		case -1045183535:
			return 353;
			break;
		
		case -538741184:
			return 355;
			break;
		
		case 317205821:
			return 360;
			break;
		
		case -1121678507:
			return 366;
			break;
		
		case 125959754:
			return 364;
			break;
		
		case -853065399:
			return 362;
			break;
		
		case -1169823560:
			return 368;
			break;
		
		case -1810795771:
			return 370;
			break;
		
		case 419712736:
			return 9;
			break;
		
		case 961495388:
			return 31;
			break;
		
		case -86904375:
			return 33;
			break;
		
		case -608341376:
			return 39;
			break;
		
		case 177293209:
			return 55;
			break;
		
		case -1075685676:
			return 17;
			break;
		
		case 2024373456:
			return 27;
			break;
		
		case -2066285827:
			return 47;
			break;
		
		case 1785463520:
			return 327;
			break;
		
		case 1432025498:
			return 43;
			break;
		
		case -879347409:
			return 353;
			break;
		
		case -2009644972:
			return 144;
			break;
		
		case -1768145561:
			return 282;
			break;
		
		case -1746263880:
			return 394;
			break;
		
		case -1355376991:
			return 402;
			break;
		
		case 1198256469:
			return 404;
			break;
		
		case -1238556825:
			return 406;
			break;
		
		case 940833800:
			return 400;
			break;
		
		case -1853920116:
			return 410;
			break;
		
		case 727643628:
			return 408;
			break;
	}
	return 414;
}

bool func_721()
{
	return Global_1312856;
}

int func_722()
{
	if (func_724() && func_723(0))
	{
		return 1;
	}
	return 0;
}

var func_723(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_724()
{
	return func_723(func_27() + 1);
}

int func_725(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return -1075685676;
			
			case 5:
				return 2024373456;
			
			case 8:
				return 961495388;
			
			case 9:
				return -86904375;
			
			case 13:
				return -608341376;
			
			case 21:
				return 177293209;
			
			default:
		}
		switch (iParam0)
		{
			case 22:
				return 1432025498;
			
			case 46:
				return -1768145561;
			
			case 47:
				return -2009644972;
			
			case 56:
				return 1785463520;
			
			case 70:
				return -879347409;
			
			case 48:
				return -2066285827;
			}
		
		default:
	}
	switch (iParam0)
	{
		case 34:
			return -1716189206;
			break;
		
		case 1:
			return 453432689;
			break;
		
		case 2:
			return 1593441988;
			break;
		
		case 3:
			return 584646201;
			break;
		
		case 5:
			return 736523883;
			break;
		
		case 7:
			return 324215364;
			break;
		
		case 8:
			return -1074790547;
			break;
		
		case 9:
			return -2084633992;
			break;
		
		case 11:
			return -1357824103;
			break;
		
		case 12:
			return -1660422300;
			break;
		
		case 13:
			return 2144741730;
			break;
		
		case 15:
			return 741814745;
			break;
		
		case 16:
			return -1813897027;
			break;
		
		case 17:
			return -37975472;
			break;
		
		case 60:
			return -1420407917;
			break;
		
		case 18:
			return 856002082;
			break;
		
		case 20:
			return 100416529;
			break;
		
		case 21:
			return 205991906;
			break;
		
		case 56:
			return -952879014;
			break;
		
		case 22:
			return 487013001;
			break;
		
		case 24:
			return -494615257;
			break;
		
		case 25:
			return 2017895192;
			break;
		
		case 55:
			return 984333226;
			break;
		
		case 26:
			return -1568386805;
			break;
		
		case 27:
			return -1312131151;
			break;
		
		case 28:
			return 1119849093;
			break;
		
		case 61:
			return 1672152130;
			break;
		
		case 31:
			return 911657153;
			break;
		
		case 33:
			return -72657034;
			break;
		
		case 35:
			return 1737195953;
			break;
		
		case 43:
			return 883325847;
			break;
		
		case 45:
			return -102323637;
			break;
		
		case 46:
			return -1063057011;
			break;
		
		case 47:
			return -1076751822;
			break;
		
		case 48:
			return 2132975508;
			break;
		
		case 49:
			return -771403250;
			break;
		
		case 23:
			return -1654528753;
			break;
		
		case 50:
			return 1627465347;
			break;
		
		case 51:
			return -1834847097;
			break;
		
		case 52:
			return 137902532;
			break;
		
		case 57:
			return 1198879012;
			break;
		
		case 53:
			return -1466123874;
			break;
		
		case 54:
			return 2138347493;
			break;
		
		case 58:
			return -102973651;
			break;
		
		case 59:
			return 1834241177;
			break;
		
		case 64:
			return 171789620;
			break;
		
		case 62:
			return -656458692;
			break;
		
		case 63:
			return -598887786;
			break;
		
		case 65:
			return -581044007;
			break;
		
		case 68:
			return -619010992;
			break;
		
		case 66:
			return -275439685;
			break;
		
		case 67:
			return 1649403952;
			break;
		
		case 69:
			return -1951375401;
			break;
		
		case 70:
			return -1045183535;
			break;
		
		case 71:
			return -538741184;
			break;
		
		case 36:
			return 1317494643;
			break;
		
		case 4:
			return -1716589765;
			break;
		
		case 6:
			return -270015777;
			break;
		
		case 41:
			return 615608432;
			break;
		
		case 39:
			return 1141786504;
			break;
		
		case 38:
			return -2067956739;
			break;
		
		case 37:
			return -1786099057;
			break;
		
		case 72:
			return 317205821;
			break;
		
		case 73:
			return -1121678507;
			break;
		
		case 74:
			return 125959754;
			break;
		
		case 75:
			return -853065399;
			break;
		
		case 76:
			return -1169823560;
			break;
		
		case 77:
			return -1810795771;
			break;
		
		case 78:
			return 419712736;
			break;
		
		case 79:
			return -1746263880;
			break;
		
		case 80:
			return 940833800;
			break;
		
		case 81:
			return -1355376991;
			break;
		
		case 82:
			return 1198256469;
			break;
		
		case 83:
			return -1238556825;
			break;
		
		case 84:
			return -1853920116;
			break;
		
		case 85:
			return 727643628;
			break;
	}
	return -1569615261;
}

int func_726(int iParam0)
{
	switch (iParam0)
	{
		case -1569615261:
			return 0;
			break;
		
		case 453432689:
			return 1;
			break;
		
		case 1593441988:
			return 2;
			break;
		
		case 584646201:
			return 3;
			break;
		
		case -1716589765:
			return 4;
			break;
		
		case 736523883:
			return 5;
			break;
		
		case -270015777:
			return 6;
			break;
		
		case 324215364:
			return 7;
			break;
		
		case -1074790547:
			return 8;
			break;
		
		case -2084633992:
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case -1357824103:
			return 11;
			break;
		
		case -1660422300:
			return 12;
			break;
		
		case 2144741730:
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case 741814745:
			return 15;
			break;
		
		case -1813897027:
			return 16;
			break;
		
		case -37975472:
			return 17;
			break;
		
		case 856002082:
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case 100416529:
			return 20;
			break;
		
		case 205991906:
			return 21;
			break;
		
		case 487013001:
			return 22;
			break;
		
		case -1654528753:
			return 23;
			break;
		
		case -494615257:
			return 24;
			break;
		
		case 2017895192:
			return 25;
			break;
		
		case -1568386805:
			return 26;
			break;
		
		case -1312131151:
			return 27;
			break;
		
		case 1119849093:
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case 911657153:
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case -72657034:
			return 33;
			break;
		
		case -1716189206:
			return 34;
			break;
		
		case 1737195953:
			return 35;
			break;
		
		case 1317494643:
			return 36;
			break;
		
		case -1786099057:
			return 37;
			break;
		
		case -2067956739:
			return 38;
			break;
		
		case 1141786504:
			return 39;
			break;
		
		case 1305664598:
			return 40;
			break;
		
		case 615608432:
			return 41;
			break;
		
		case 101631238:
			return 42;
			break;
		
		case 883325847:
			return 43;
			break;
		
		case -38085395:
			return 44;
			break;
		
		case -102323637:
			return 45;
			break;
		
		case -1063057011:
			return 46;
			break;
		
		case -1076751822:
			return 47;
			break;
		
		case -771403250:
			return 49;
			break;
		
		case 2132975508:
			return 48;
			break;
		
		case 1627465347:
			return 50;
			break;
		
		case -1834847097:
			return 51;
			break;
		
		case 137902532:
			return 52;
			break;
		
		case 1198879012:
			return 57;
			break;
		
		case -1466123874:
			return 53;
			break;
		
		case 2138347493:
			return 54;
			break;
		
		case -952879014:
			return 56;
			break;
		
		case 984333226:
			return 55;
			break;
		
		case -1420407917:
			return 60;
			break;
		
		case 1672152130:
			return 61;
			break;
		
		case -102973651:
			return 58;
			break;
		
		case 1834241177:
			return 59;
			break;
		
		case 171789620:
			return 64;
			break;
		
		case -656458692:
			return 62;
			break;
		
		case -598887786:
			return 63;
			break;
		
		case -581044007:
			return 65;
			break;
		
		case -619010992:
			return 68;
			break;
		
		case -275439685:
			return 66;
			break;
		
		case 1649403952:
			return 67;
			break;
		
		case -1951375401:
			return 69;
			break;
		
		case -1045183535:
			return 70;
			break;
		
		case -538741184:
			return 71;
			break;
		
		case 317205821:
			return 72;
			break;
		
		case -1121678507:
			return 73;
			break;
		
		case 125959754:
			return 74;
			break;
		
		case -853065399:
			return 75;
			break;
		
		case -1169823560:
			return 76;
			break;
		
		case -1810795771:
			return 77;
			break;
		
		case 419712736:
			return 78;
			break;
		
		case 961495388:
			return 8;
			break;
		
		case -86904375:
			return 9;
			break;
		
		case -608341376:
			return 13;
			break;
		
		case 177293209:
			return 21;
			break;
		
		case -1075685676:
			return 1;
			break;
		
		case 2024373456:
			return 5;
			break;
		
		case 1432025498:
			return 22;
			break;
		
		case -1768145561:
			return 46;
			break;
		
		case -2009644972:
			return 47;
			break;
		
		case 1785463520:
			return 56;
			break;
		
		case -879347409:
			return 70;
			break;
		
		case -2066285827:
			return 48;
			break;
		
		case -1746263880:
			return 79;
			break;
		
		case 940833800:
			return 80;
			break;
		
		case -1355376991:
			return 81;
			break;
		
		case 1198256469:
			return 82;
			break;
		
		case -1238556825:
			return 83;
			break;
		
		case -1853920116:
			return 84;
			break;
		
		case 727643628:
			return 85;
			break;
	}
	return 0;
}

bool func_727(int iParam0)
{
	return iParam0 == 47;
}

int func_728()
{
	return Global_1312416;
}

void func_729()
{
	iVar0 = func_730();
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, 1);
	}
}

int func_730()
{
	iVar0 = -1569615261;
	iVar1 = 0;
	if (func_154(255, -1, 0) > iVar1)
	{
		iVar0 = 453432689;
		iVar1 = func_154(255, -1, 0);
	}
	if (func_154(285, -1, 0) > iVar1)
	{
		iVar0 = 584646201;
		iVar1 = func_154(285, -1, 0);
	}
	if (func_154(265, -1, 0) > iVar1)
	{
		iVar0 = 1593441988;
		iVar1 = func_154(265, -1, 0);
	}
	if (func_154(295, -1, 0) > iVar1)
	{
		iVar0 = 324215364;
		iVar1 = func_154(295, -1, 0);
	}
	if (func_154(305, -1, 0) > iVar1)
	{
		iVar0 = 736523883;
		iVar1 = func_154(305, -1, 0);
	}
	if (func_154(388, -1, 0) > iVar1)
	{
		iVar0 = 2017895192;
		iVar1 = func_154(388, -1, 0);
	}
	if (func_154(416, -1, 0) > iVar1)
	{
		iVar0 = 911657153;
		iVar1 = func_154(416, -1, 0);
	}
	if (func_154(467, -1, 0) > iVar1)
	{
		iVar0 = -1813897027;
		iVar1 = func_154(467, -1, 0);
	}
	if (func_154(476, -1, 0) > iVar1)
	{
		iVar0 = -37975472;
		iVar1 = func_154(476, -1, 0);
	}
	if (func_154(484, -1, 0) > iVar1)
	{
		iVar0 = 741814745;
		iVar1 = func_154(484, -1, 0);
	}
	if (func_154(493, -1, 0) > iVar1)
	{
		iVar0 = 615608432;
		iVar1 = func_154(493, -1, 0);
	}
	if (func_154(197, -1, 0) > iVar1)
	{
		iVar0 = -1716189206;
		iVar1 = func_154(197, -1, 0);
	}
	if (func_154(205, -1, 0) > iVar1)
	{
		iVar0 = 1737195953;
		iVar1 = func_154(205, -1, 0);
	}
	if (func_154(212, -1, 0) > iVar1)
	{
		iVar0 = -2067956739;
		iVar1 = func_154(212, -1, 0);
	}
	if (func_154(233, -1, 0) > iVar1)
	{
		iVar0 = 1317494643;
		iVar1 = func_154(233, -1, 0);
	}
	if (func_154(240, -1, 0) > iVar1)
	{
		iVar0 = -1786099057;
		iVar1 = func_154(240, -1, 0);
	}
	if (func_154(247, -1, 0) > iVar1)
	{
		iVar0 = 1141786504;
		iVar1 = func_154(247, -1, 0);
	}
	if (func_154(1734, -1, 0) > iVar1)
	{
		iVar0 = -102323637;
		iVar1 = func_154(1734, -1, 0);
	}
	if (func_154(275, -1, 0) > iVar1)
	{
		iVar0 = -1716589765;
		iVar1 = func_154(275, -1, 0);
	}
	if (func_154(315, -1, 0) > iVar1)
	{
		iVar0 = -270015777;
		iVar1 = func_154(315, -1, 0);
	}
	if (func_154(325, -1, 0) > iVar1)
	{
		iVar0 = -1074790547;
		iVar1 = func_154(325, -1, 0);
	}
	if (func_154(334, -1, 0) > iVar1)
	{
		iVar0 = -2084633992;
		iVar1 = func_154(334, -1, 0);
	}
	if (func_154(9492, -1, 0) > iVar1)
	{
		iVar0 = -1063057011;
		iVar1 = func_154(9492, -1, 0);
	}
	if (func_154(1744, -1, 0) > iVar1)
	{
		iVar0 = -1076751822;
		iVar1 = func_154(1744, -1, 0);
	}
	if (func_154(9503, -1, 0) > iVar1)
	{
		iVar0 = 2132975508;
		iVar1 = func_154(9503, -1, 0);
	}
	if (func_154(9483, -1, 0) > iVar1)
	{
		iVar0 = -771403250;
		iVar1 = func_154(9483, -1, 0);
	}
	if (func_154(343, -1, 0) > iVar1)
	{
		iVar0 = -1357824103;
		iVar1 = func_154(343, -1, 0);
	}
	if (func_154(352, -1, 0) > iVar1)
	{
		iVar0 = -1660422300;
		iVar1 = func_154(352, -1, 0);
	}
	if (func_154(361, -1, 0) > iVar1)
	{
		iVar0 = 2144741730;
		iVar1 = func_154(361, -1, 0);
	}
	if (func_154(370, -1, 0) > iVar1)
	{
		iVar0 = -572349828;
		iVar1 = func_154(370, -1, 0);
	}
	if (func_154(379, -1, 0) > iVar1)
	{
		iVar0 = 487013001;
		iVar1 = func_154(379, -1, 0);
	}
	if (func_154(398, -1, 0) > iVar1)
	{
		iVar0 = -1654528753;
		iVar1 = func_154(398, -1, 0);
	}
	if (func_154(407, -1, 0) > iVar1)
	{
		iVar0 = -494615257;
		iVar1 = func_154(407, -1, 0);
	}
	if (func_154(426, -1, 0) > iVar1)
	{
		iVar0 = 100416529;
		iVar1 = func_154(426, -1, 0);
	}
	if (func_154(435, -1, 0) > iVar1)
	{
		iVar0 = 205991906;
		iVar1 = func_154(435, -1, 0);
	}
	if (func_154(444, -1, 0) > iVar1)
	{
		iVar0 = -1568386805;
		iVar1 = func_154(444, -1, 0);
	}
	if (func_154(451, -1, 0) > iVar1)
	{
		iVar0 = -1312131151;
		iVar1 = func_154(451, -1, 0);
	}
	if (func_154(460, -1, 0) > iVar1)
	{
		iVar0 = 1119849093;
		iVar1 = func_154(460, -1, 0);
	}
	if (func_154(9795, -1, 0) > iVar1)
	{
		iVar0 = 137902532;
		iVar1 = func_154(9795, -1, 0);
	}
	if (func_154(9785, -1, 0) > iVar1)
	{
		iVar0 = -1834847097;
		iVar1 = func_154(9785, -1, 0);
	}
	if (func_154(9805, -1, 0) > iVar1)
	{
		iVar0 = 2138347493;
		iVar1 = func_154(9805, -1, 0);
	}
	if (func_154(9815, -1, 0) > iVar1)
	{
		iVar0 = -1466123874;
		iVar1 = func_154(9815, -1, 0);
	}
	if (func_154(9919, -1, 0) > iVar1)
	{
		iVar0 = -1420407917;
		iVar1 = func_154(9919, -1, 0);
	}
	if (func_154(9911, -1, 0) > iVar1)
	{
		iVar0 = -102973651;
		iVar1 = func_154(9911, -1, 0);
	}
	if (func_154(9927, -1, 0) > iVar1)
	{
		iVar0 = 1672152130;
		iVar1 = func_154(9927, -1, 0);
	}
	if (func_154(9492, -1, 0) > iVar1)
	{
		iVar0 = -1063057011;
		iVar1 = func_154(9492, -1, 0);
	}
	if (func_154(9512, -1, 0) > iVar1)
	{
		iVar0 = 1627465347;
		iVar1 = func_154(9512, -1, 0);
	}
	if (func_154(9893, -1, 0) > iVar1)
	{
		iVar0 = 984333226;
		iVar1 = func_154(9893, -1, 0);
	}
	if (func_154(9903, -1, 0) > iVar1)
	{
		iVar0 = -952879014;
		iVar1 = func_154(9903, -1, 0);
	}
	if (func_154(9937, -1, 0) > iVar1)
	{
		iVar0 = 171789620;
		iVar1 = func_154(9937, -1, 0);
	}
	if (func_154(9954, -1, 0) > iVar1)
	{
		iVar0 = -598887786;
		iVar1 = func_154(9954, -1, 0);
	}
	if (func_154(9945, -1, 0) > iVar1)
	{
		iVar0 = -656458692;
		iVar1 = func_154(9945, -1, 0);
	}
	if (func_154(9962, -1, 0) > iVar1)
	{
		iVar0 = -581044007;
		iVar1 = func_154(9962, -1, 0);
	}
	if (func_154(9972, -1, 0) > iVar1)
	{
		iVar0 = -619010992;
		iVar1 = func_154(9972, -1, 0);
	}
	if (func_154(10008, -1, 0) > iVar1)
	{
		iVar0 = -1951375401;
		iVar1 = func_154(10008, -1, 0);
	}
	if (func_154(10036, -1, 0) > iVar1)
	{
		iVar0 = -538741184;
		iVar1 = func_154(10036, -1, 0);
	}
	if (func_154(10028, -1, 0) > iVar1)
	{
		iVar0 = -1045183535;
		iVar1 = func_154(10028, -1, 0);
	}
	if (func_154(10000, -1, 0) > iVar1)
	{
		iVar0 = -275439685;
		iVar1 = func_154(10000, -1, 0);
	}
	if (func_154(9990, -1, 0) > iVar1)
	{
		iVar0 = 1649403952;
		iVar1 = func_154(9990, -1, 0);
	}
	if (func_154(10079, -1, 0) > iVar1)
	{
		iVar0 = 317205821;
		iVar1 = func_154(10079, -1, 0);
	}
	if (func_154(10087, -1, 0) > iVar1)
	{
		iVar0 = -853065399;
		iVar1 = func_154(10087, -1, 0);
	}
	if (func_154(10095, -1, 0) > iVar1)
	{
		iVar0 = 125959754;
		iVar1 = func_154(10095, -1, 0);
	}
	if (func_154(10105, -1, 0) > iVar1)
	{
		iVar0 = -1121678507;
		iVar1 = func_154(10105, -1, 0);
	}
	if (func_154(10113, -1, 0) > iVar1)
	{
		iVar0 = -1169823560;
		iVar1 = func_154(10113, -1, 0);
	}
	if (func_154(10121, -1, 0) > iVar1)
	{
		iVar0 = -1810795771;
		iVar1 = func_154(10121, -1, 0);
	}
	if (func_154(226, -1, 0) > iVar1)
	{
		iVar0 = 419712736;
		iVar1 = func_154(226, -1, 0);
	}
	if (func_154(10567, -1, 0) > iVar1)
	{
		iVar0 = -1075685676;
		iVar1 = func_154(10567, -1, 0);
	}
	if (func_154(10577, -1, 0) > iVar1)
	{
		iVar0 = 2024373456;
		iVar1 = func_154(10577, -1, 0);
	}
	if (func_154(10557, -1, 0) > iVar1)
	{
		iVar0 = 177293209;
		iVar1 = func_154(10557, -1, 0);
	}
	if (func_154(10547, -1, 0) > iVar1)
	{
		iVar0 = -608341376;
		iVar1 = func_154(10547, -1, 0);
	}
	if (func_154(10527, -1, 0) > iVar1)
	{
		iVar0 = 961495388;
		iVar1 = func_154(10527, -1, 0);
	}
	if (func_154(10537, -1, 0) > iVar1)
	{
		iVar0 = -86904375;
		iVar1 = func_154(10537, -1, 0);
	}
	if (func_154(10587, -1, 0) > iVar1)
	{
		iVar0 = -2066285827;
		iVar1 = func_154(10587, -1, 0);
	}
	if (func_154(10607, -1, 0) > iVar1)
	{
		iVar0 = 1785463520;
		iVar1 = func_154(10607, -1, 0);
	}
	if (func_154(10597, -1, 0) > iVar1)
	{
		iVar0 = 1432025498;
		iVar1 = func_154(10597, -1, 0);
	}
	if (func_154(10617, -1, 0) > iVar1)
	{
		iVar0 = -879347409;
		iVar1 = func_154(10617, -1, 0);
	}
	if (func_154(10637, -1, 0) > iVar1)
	{
		iVar0 = -2009644972;
		iVar1 = func_154(10637, -1, 0);
	}
	if (func_154(10647, -1, 0) > iVar1)
	{
		iVar0 = -1768145561;
		iVar1 = func_154(10647, -1, 0);
	}
	if (func_154(10627, -1, 0) > iVar1)
	{
		iVar0 = -1746263880;
		iVar1 = func_154(10627, -1, 0);
	}
	if (func_154(11459, -1, 0) > iVar1)
	{
		iVar0 = -1853920116;
		iVar1 = func_154(11459, -1, 0);
	}
	if (func_154(11449, -1, 0) > iVar1)
	{
		iVar0 = 727643628;
		iVar1 = func_154(11449, -1, 0);
	}
	return iVar0;
}

int func_731()
{
	return Global_2425662[PLAYER::PLAYER_ID()].f_222;
}

int func_732(int iParam0)
{
	return 0;
}

void func_733()
{
	if (func_679(iLocal_1216))
	{
		return;
	}
	if (func_408() != 0)
	{
		return;
	}
	if (!bLocal_1213)
	{
		return;
	}
	if (func_434(25))
	{
		func_751();
	}
	if (func_750(0))
	{
		func_751();
		if (func_732(iLocal_1216))
		{
			return;
		}
	}
	if (func_749(iLocal_1216, 0, 1, 0))
	{
		func_751();
		if (func_732(iLocal_1216))
		{
			return;
		}
	}
	iVar0 = 0;
	if (func_747(func_748()))
	{
		func_545(3);
	}
	else if (!func_747(func_746()))
	{
		if (func_369(iLocal_1219, 3))
		{
			func_745(3);
			iVar0 = 1;
		}
	}
	func_734(iVar0);
}

void func_734(int iParam0)
{
	if (func_744(iParam0))
	{
		func_737();
	}
	if (func_735(func_736()))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 357, 1);
		if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 51) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 51))
		{
			func_751();
			UI::CLEAR_HELP(1);
		}
	}
}

bool func_735(var uParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_736()
{
	return "FMH_LEFTRANGE";
}

void func_737()
{
	if (!bLocal_1223)
	{
		func_743();
		return;
	}
	if (!func_739())
	{
		return;
	}
	if (!func_369(iLocal_1219, 8))
	{
		func_738(func_736(), -1);
		func_545(8);
	}
}

void func_738(var uParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_739()
{
	if ((((((((((!func_742() && !func_741()) && !UI::IS_PAUSE_MENU_ACTIVE()) && !UI::IS_RADAR_HIDDEN()) && bLocal_1213) && !func_740()) && func_434(9)) && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
	{
		return 1;
	}
	return 0;
}

bool func_740()
{
	return Global_2439138.f_2723[0].f_1 != 0;
}

bool func_741()
{
	return Global_73825;
}

bool func_742()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

void func_743()
{
	if (func_735(func_736()))
	{
		UI::CLEAR_HELP(1);
	}
}

int func_744(var uParam0)
{
	return 0;
}

void func_745(int iParam0)
{
	if (func_122(&(Local_1436[iLocal_1218].f_1), iParam0))
	{
	}
}

float func_746()
{
	return 250f;
}

bool func_747(float fParam0)
{
	Call_Loc(Local_433.f_37);
	Var0 = { StackVal, StackVal, StackVal };
	if (func_31(Var0))
	{
		return 0;
	}
	return SYSTEM::VDIST2(Local_1220, Var0) <= (fParam0 * fParam0);
}

float func_748()
{
	return 200f;
}

int func_749(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if ((((iParam1 || !func_6(iVar0, 4)) && (iParam2 || !func_691(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0), 1))) && (iParam3 || !func_691(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0), 12))) && func_691(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0), 14))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_750(bool bParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1217, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_1217, 0);
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) + 1;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = func_376(iVar0, (iVar2 - 1), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && PED::IS_PED_A_PLAYER(iVar3))
			{
				iVar4 = NETWORK::_NETWORK_GET_PED_PLAYER(iVar3);
				if (func_732(iVar4))
				{
					if (!bParam0)
					{
						if (iVar3 != iLocal_1217)
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
			iVar2++;
		}
	}
	return 0;
}

void func_751()
{
}

void func_752()
{
	if (func_732(iLocal_1216))
	{
		if (!func_754())
		{
			func_753(1);
		}
	}
}

void func_753(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_1734, 9))
		{
			GAMEPLAY::SET_BIT(&(Global_2537071.f_1734), 9);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1734, 9))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1734), 9);
	}
}

bool func_754()
{
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_1734, 9);
}

void func_755()
{
	if (func_434(10) && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Local_218.f_130)))
	{
		func_756(&(Global_1366905.f_534), &Global_1366905, 28, &(Global_1366905.f_1), &(Global_1366905.f_117), -1, 0, &(Local_218.f_130));
	}
}

void func_756(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, var uParam7)
{
	if (func_878(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_876() || iParam2 == 28)
	{
		if (func_829(uParam1, iParam2, uParam3, Global_1574185, 0, func_874(), uParam7))
		{
			func_828(1);
			if ((!func_827() && !func_826()) || GAMEPLAY::IS_BIT_SET(Global_2537071.f_4588, 1))
			{
				if (func_825())
				{
					func_823();
				}
				else
				{
					GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_822(1);
						Global_1574185 = 0;
						iVar54 = -1;
						if (Global_1574406 != 1)
						{
							func_821(uParam1, 0, 0);
							if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
							{
								GAMEPLAY::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_28(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_25(iVar35, 0))
									{
										if ((func_820(iVar35) || Global_2425662[iVar35].f_236 != -1) || func_819(iVar35))
										{
											iVar44 = iVar35;
											if (func_538(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_816(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_813(PLAYER::PLAYER_ID(), 0) && func_176(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_812())
							{
								if (func_28(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_68();
								}
							}
							else
							{
								iVar35 = uParam0[iVar52]->f_1;
							}
							if ((func_811(iVar35) && func_806(iVar35, iParam2)) && func_28(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590535[iVar44].f_211.f_6;
								Var38 = { func_801(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*uParam4[iVar52] = { func_70(iVar35) };
								iVar37 = func_795(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1574185++;
								if (uParam0[iVar52]->f_22 != -1f)
								{
									fVar45 = uParam0[iVar52]->f_22;
								}
								if (uParam0[iVar52]->f_31 != -1)
								{
									iVar46 = uParam0[iVar52]->f_31;
								}
								if (uParam0[iVar52]->f_41 != -1)
								{
									iVar47 = uParam0[iVar52]->f_41;
								}
								iVar43 = uParam0[iVar52]->f_9;
								if ((uParam0[iVar52]->f_9 != -1 || uParam0[iVar52]->f_22 != -1f) || uParam0[iVar52]->f_31 != -1)
								{
									if (!func_812())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_790(&iVar43, &fVar45, uParam0[iVar52]->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_789(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = uParam0[iVar52]->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_788(iVar35, 0);
								if (bVar34)
								{
									if (func_537(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44].f_1 = iVar53;
								if (uParam0[iVar52]->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, uParam0[iVar52]->f_39, 16);
								}
								if (func_787(iParam5))
								{
									func_786(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, uParam0[iVar52]->f_40, iVar48, bParam6);
								}
								else
								{
									func_786(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, uParam0[iVar52]->f_40, iVar48, bParam6);
								}
								GAMEPLAY::SET_BIT(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							if (func_28(iVar35, 0, 1) && !GAMEPLAY::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_68();
							}
							if (func_811(iVar35))
							{
								if (func_28(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590535[iVar44].f_211.f_6;
									Var38 = { func_801(iVar35) };
									*uParam4[iVar52] = { func_70(iVar35) };
									iVar37 = func_795(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574185++;
									iVar51 = func_788(iVar35, 1);
									if (bVar34)
									{
										if (func_537(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44].f_1 = iVar53;
									func_768(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_765(uParam3, uParam1, iParam2);
						}
						func_22(&(uParam3->f_21));
						func_764();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_763(uParam3, uParam1);
							func_762(uParam1, 0, 1);
							GAMEPLAY::SET_BIT(&(uParam3->f_33), 7);
						}
						func_763(uParam3, uParam1);
						if (!GAMEPLAY::IS_BIT_SET(uParam3->f_33, 11))
						{
							GAMEPLAY::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_759(uParam3))
						{
							Global_1574406 = 1;
						}
						func_757(uParam3);
						if (Global_1574406 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574406 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
					{
						GRAPHICS::_SET_2D_LAYER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::_SET_2D_LAYER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_764();
			func_822(0);
			if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 10))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

void func_757(var uParam0)
{
	if (!func_13(&(uParam0->f_21)))
	{
		func_12(&(uParam0->f_21), 0, 0);
	}
	else if (func_11(&(uParam0->f_21), 250, 0))
	{
		func_22(&(uParam0->f_21));
		func_758(0);
	}
}

void func_758(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574406 != 2)
		{
			Global_1574406 = 2;
		}
	}
	else
	{
		switch (Global_1574406)
		{
			case 0:
				Global_1574406 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_759(var uParam0)
{
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_68() && func_28(iVar15, 0, 1))
	{
		Var2 = { func_70(iVar15) };
		iVar1 = func_761(uParam0, uParam0->f_37);
		if (func_147(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_760(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_760(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_760(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_760(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_760(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_760(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_760(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1] = iParam2;
}

var func_761(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1];
}

void func_762(var uParam0, int iParam1, int iParam2)
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

void func_763(var uParam0, var uParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam1, "SET_HIGHLIGHT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_35);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GAMEPLAY::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_764()
{
	if (Global_1574406 != 0)
	{
		Global_1574406 = 0;
	}
}

void func_765(var uParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_68())
		{
			if (func_28(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0].f_1 != -1)
				{
					iVar1 = func_767(uParam0->f_38[iVar0], 0, iParam2);
					func_766(uParam1, uParam0->f_38[iVar0].f_1, iVar1, Global_1590535[iVar0].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_766(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_ICON"))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

int func_767(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_768(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	if (iParam4 >= func_785() && iParam4 < func_784())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam2, sVar1))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
			if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_783("");
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam10);
			}
			func_783(sParam1);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_783("");
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(65);
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
			func_783("");
			if (uParam3->f_108 == 6)
			{
				func_783("");
			}
			else
			{
				func_783(&sParam5);
			}
			func_773(uParam3, iParam0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam9);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam9);
			if (func_772(uParam3))
			{
				func_771("DPAD_FRIEND");
			}
			else if (func_770(uParam3))
			{
				func_771("DPAD_FRIEND");
			}
			else if (func_769(uParam3))
			{
				func_771("DPAD_CREW");
			}
			else
			{
				func_771("");
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

bool func_769(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_770(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_33, 5);
}

void func_771(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

int func_772(var uParam0)
{
	if (func_770(uParam0) && func_769(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_773(var uParam0, int iParam1)
{
	if (func_782(iParam1))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(121);
	}
	else if (func_777(iParam1))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(122);
	}
	else if (((GAMEPLAY::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && GAMEPLAY::IS_BIT_SET(Global_2425662[iParam1].f_413, 0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(123);
	}
	else
	{
		if (func_774())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(uParam0->f_36);
	}
}

int func_774()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_775() || func_346())
		{
			return 1;
		}
	}
	return 0;
}

bool func_775()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_346();
	}
	return func_776(Global_4456448.f_194990);
}

int func_776(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_777(int iParam0)
{
	if ((func_28(iParam0, 0, 1) && func_778()) && func_178(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_778()
{
	if (func_781(PLAYER::PLAYER_ID()) || func_780())
	{
		if (!func_779(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_779(int iParam0)
{
	if (func_675(iParam0) == 236 || func_675(iParam0) == 150)
	{
		return func_682(iParam0);
	}
	return 0;
}

int func_780()
{
	switch (func_176(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_781(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0] != -1;
	}
	return 0;
}

int func_782(int iParam0)
{
	if (func_774())
	{
		if (func_28(iParam0, 0, 1))
		{
			return func_538(iParam0);
		}
	}
	if ((func_28(iParam0, 0, 1) && func_778()) && func_180(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_783(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

int func_784()
{
	if (Global_1574187)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_785()
{
	iVar0 = 0;
	if (Global_1574187)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_786(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	if (iParam3 >= func_785() && iParam3 < func_784())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
		{
			if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam1, sVar1))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
				if (GAMEPLAY::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_783("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_771(sParam16);
				}
				else
				{
					func_783(&(uParam2->f_1));
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_783("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
				}
				if (func_812())
				{
					func_783("");
				}
				else if (uParam2->f_108 == 6 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_ONE_INT");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					UI::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (uParam2->f_108 == 5 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_ONE_INT");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					UI::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (uParam2->f_108 == 7 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_TWO_INT");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					UI::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (uParam2->f_108 == 8 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_CASH");
					UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH(iParam10, 1);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_CASH");
						UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH(iParam10, 1);
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
					else
					{
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_NG_CASH");
						UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH(iParam10, 1);
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_771(&(uParam2->f_104));
					}
					else
					{
						func_783("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("NUMBER");
					UI::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam10);
				}
				else
				{
					func_783("");
				}
				if (uParam2->f_108 == 6)
				{
					func_783("");
				}
				else
				{
					func_783(&sParam4);
				}
				func_773(uParam2, iParam0);
				if (iParam12 == 1 || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_783("");
					func_783("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam8);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam8);
				}
				if (func_772(uParam2))
				{
					func_771("DPAD_FRIEND");
				}
				else if (func_770(uParam2))
				{
					func_771("DPAD_FRIEND");
				}
				else if (func_769(uParam2))
				{
					func_771("DPAD_CREW");
				}
				else
				{
					func_771("");
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
	}
}

int func_787(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_788(int iParam0, bool bParam1)
{
	iVar0 = 116;
	if ((!bParam1 && func_781(iParam0)) && !func_680(iParam0))
	{
		iVar0 = func_629();
	}
	iVar1 = func_649(iParam0);
	if (!iVar1 == -1)
	{
		return func_647(iVar1);
	}
	return iVar0;
}

char* func_789(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_790(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_794(iParam3))
	{
		*fParam1 = (func_791(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_787(iParam3))
	{
		*fParam1 = (func_791(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_791(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_793(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_792(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_792(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_793(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_794(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_795(int iParam0)
{
	iVar0 = func_798(iParam0);
	if (iVar0 == -1)
	{
		func_796(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0].f_4 = 1;
	return Global_1389078[iVar0].f_2;
}

void func_796(int iParam0, bool bParam1)
{
	if (!func_28(iParam0, 0, 1))
	{
		return;
	}
	if (func_798(iParam0) != -1)
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
	if (func_797(iParam0))
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

int func_797(int iParam0)
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

int func_798(int iParam0)
{
	if (!func_28(iParam0, 0, 1))
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
			func_799(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_799(int iParam0)
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
	func_800(&(Global_1389078[iVar32]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_800(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_68();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_801(int iParam0)
{
	if (func_28(iParam0, 0, 1))
	{
		Global_2513218 = { func_70(iParam0) };
		if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (func_147(Global_2513218))
			{
				if (!NETWORK::_0xB57A49545BA53CE7(&Global_2513218))
				{
					return Var0;
				}
			}
		}
		else if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			return Var0;
		}
		if (func_805(&Global_2513218))
		{
			Global_2513148 = { func_803(iParam0) };
			func_802(&Global_2513148, &Var0);
		}
	}
	return Var0;
}

void func_802(var uParam0, var uParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, uParam1);
}

struct<35> func_803(int iParam0)
{
	if (func_804(iParam0))
	{
		return Global_1312909[PLAYER::PLAYER_ID()];
	}
	Var0 = { func_70(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_804(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_805(var uParam0)
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

int func_806(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_810(iParam0) || func_809(iParam0)) || func_808(iParam0))
		{
			return 0;
		}
	}
	if (!func_807(iParam0))
	{
		return 0;
	}
	if ((!func_820(iParam0) && Global_2425662[iParam0].f_236 == -1) && !func_819(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_807(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_142, 22);
}

bool func_808(int iParam0)
{
	if (func_810(iParam0))
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 8);
}

int func_809(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 10) || GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 9));
	}
	return 0;
}

bool func_810(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 2);
}

int func_811(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	if (func_25(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1590535[iVar0].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_812()
{
	switch (func_176(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_675(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_680(PLAYER::PLAYER_ID()))
	{
		switch (func_176(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_779(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_813(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 && func_814(Global_1628237[iParam0].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1)
	{
		if (func_814(Global_1628237[iParam0].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_814(int iParam0)
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
	return func_815(iParam0, 0);
	return 0;
}

int func_815(int iParam0, int iParam1)
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

void func_816(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_28(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_25(iVar1, 0))
			{
				if ((func_820(iVar1) || Global_2425662[iVar1].f_236 != -1) || func_819(iVar1))
				{
					if (func_817(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_817(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_68())
	{
		if (!bParam2)
		{
			if (func_818(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_68())
		{
			return iParam1 == Global_1628237[iParam0].f_11;
		}
	}
	return 0;
}

int func_818(int iParam0, int iParam1)
{
	if (iParam1 != func_68())
	{
		if (iParam0 != func_68())
		{
			if (Global_1628237[iParam0].f_11 != func_68())
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

bool func_819(int iParam0)
{
	return Global_1590535[iParam0].f_196 != 0;
}

int func_820(int iParam0)
{
	if (func_28(iParam0, 0, 1))
	{
		if (func_28(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_176(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_821(var uParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

void func_822(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377167.f_2 == 0)
		{
			Global_1377167.f_2 = 1;
		}
	}
	else if (Global_1377167.f_2 == 1)
	{
		Global_1377167.f_2 = 0;
	}
}

void func_823()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4588, 1))
	{
		if (func_740())
		{
			func_824();
		}
	}
}

void func_824()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0].f_2 = 5;
			func_618(&(Global_2439138.f_2723[iVar0].f_69), 1);
		}
		iVar0++;
	}
}

int func_825()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4588, 0) && func_740())
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4588, 1) && func_740())
	{
		return 1;
	}
	return 0;
}

int func_826()
{
	if (func_740())
	{
		if (func_616(Global_2439138.f_2723[0].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_827()
{
	if (func_740())
	{
		if (func_630(Global_2439138.f_2723[0].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_828(int iParam0)
{
	if (Global_1377167.f_1 != Global_1377167)
	{
		Global_1377167.f_1 = Global_1377167;
	}
	if (Global_1377167 != iParam0)
	{
		Global_1377167 = iParam0;
	}
}

int func_829(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_873(iParam1);
	fVar7 = func_872();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_871())
		{
			if (func_870() > 0 && Global_1574187)
			{
				UI::_0x25F87B30C382FCA7();
				UI::_0x55598D21339CB998(fVar7);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					UI::HIDE_HELP_TEXT_THIS_FRAME();
				}
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_860())
		{
			func_859(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4591, 26))
	{
		func_859(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_13(&(uParam2->f_19)))
	{
		if (func_870() == 1)
		{
			func_858(bVar6, uParam0, 0);
			func_12(&(uParam2->f_19), 0, 0);
			func_859(uParam0, uParam2, 0);
			GAMEPLAY::SET_BIT(&(Global_2537071.f_4592), 5);
		}
	}
	if (func_13(&(uParam2->f_19)) || bParam5)
	{
		if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			UI::HIDE_HELP_TEXT_THIS_FRAME();
		}
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_11(&(uParam2->f_19), 10000, 0) || (func_870() == 0 && !bParam5))
		{
			func_859(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_857();
				if (iParam1 == 27 || iParam1 == 28)
				{
					UI::_0x25F87B30C382FCA7();
				}
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!GAMEPLAY::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_857();
					if (iParam1 == 27 || iParam1 == 28)
					{
						UI::_0x25F87B30C382FCA7();
					}
					UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				UI::_0x55598D21339CB998(fVar7);
				if (func_858(bVar6, uParam0, 0))
				{
					func_821(uParam0, 0, 0);
					uVar4 = func_855(iParam1, &(Global_4456448.f_194997), bParam4);
					Var0 = { func_853(iParam1) };
					if (bParam4)
					{
						func_850(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_843(uParam0, func_847(uParam2), func_844(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_837(uParam2);
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam6))
						{
							sVar9 = sParam6;
						}
						func_835(uParam0, sVar9, func_836(), -1);
					}
					else if (func_774())
					{
						uParam2->f_34 = Global_1574186;
						func_850(uParam0, uVar4, &Var0, 1, -1, Global_1574186, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_830(iParam1);
						uParam2->f_34 = Global_1574186;
						func_850(uParam0, uVar4, "", 0, iVar8, Global_1574186, 1);
					}
					else
					{
						iVar8 = func_830(iParam1);
						func_850(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					GAMEPLAY::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (GAMEPLAY::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574185 = uParam3;
				Global_1574184 = 1;
				UI::_0x55598D21339CB998(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574186)
					{
						GAMEPLAY::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_830(int iParam0)
{
	iVar0 = -1;
	if (func_834())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_833(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_832(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_831(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_590())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_831(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 4;
}

bool func_832(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

bool func_833(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_834()
{
	return Global_4456448.f_1 == 0;
}

void func_835(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_TITLE");
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_771(sParam1);
		}
		else
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_BRACKT");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
		func_771("");
		if (iParam3 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

char* func_836()
{
	switch (func_176(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_837(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_176(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_839())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_177(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_177(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_838(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_838(int iParam0)
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

bool func_839()
{
	return (func_842() && func_840(func_841()));
}

int func_840(int iParam0)
{
	return func_180(iParam0, 1);
}

int func_841()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11.f_35;
}

bool func_842()
{
	return Global_1590535[PLAYER::PLAYER_ID()] == 148;
}

void func_843(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_TITLE");
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam2))
		{
			func_771(uParam1);
		}
		else if (func_675(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_BRACKT_C");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
		else
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_BRACKT");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
		func_771("");
		if (iParam3 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

char* func_844(var uParam0)
{
	iVar0 = func_675(PLAYER::PLAYER_ID());
	if (func_846())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_845())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_845()
{
	if (func_675(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

bool func_846()
{
	return Global_1590408;
}

char* func_847(var uParam0)
{
	iVar0 = func_675(PLAYER::PLAYER_ID());
	if (func_846())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_849() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_849() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_845())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_848() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_848()
{
	return Global_2537071.f_5048;
}

int func_849()
{
	if (func_675(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2537071.f_5043;
	}
	return -1;
}

void func_850(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_783(uParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(uParam1);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
		else
		{
			func_771(sParam1);
		}
		if (func_871() && iParam6)
		{
			if (func_852())
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
			func_771(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
			if (func_851(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(166);
			}
			else if (func_64())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(220);
			}
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

int func_851(int iParam0)
{
	if (func_833(iParam0) || func_832(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_852()
{
	return Global_1574187;
}

struct<4> func_853(int iParam0)
{
	StringCopy(&Var0, "", 16);
	if (func_854(PLAYER::PLAYER_ID()) || func_831(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_204, 16);
			break;
	}
	if (func_774() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_204, 16);
	}
	return Var0;
}

bool func_854(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 5;
}

char* func_855(int iParam0, char* sParam1, bool bParam2)
{
	if (iParam0 == 20 && (!func_774() || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam1)))
	{
		uVar0 = func_856();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574425 == 1)
		{
			Global_1574425 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_856()
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_857()
{
	Global_42351 = 1;
}

bool func_858(bool bParam0, var uParam1, bool bParam2)
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

void func_859(var uParam0, var uParam1, bool bParam2)
{
	GAMEPLAY::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574185 = 0;
	func_764();
	Global_1574184 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_13(&(uParam1->f_19)))
		{
			func_22(&(uParam1->f_19));
			GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4592), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
	}
	if (GAMEPLAY::IS_BIT_SET(uParam1->f_33, 0))
	{
		GAMEPLAY::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	UI::_0x55598D21339CB998(0f);
}

int func_860()
{
	if (func_742())
	{
		return 0;
	}
	if (func_683())
	{
		return 0;
	}
	if (!func_868())
	{
		return 0;
	}
	if (!func_670())
	{
		return 0;
	}
	if (func_867(8, -1))
	{
		return 0;
	}
	if (func_870() == 2)
	{
		return 0;
	}
	if (Global_2537071.f_4543)
	{
		return 0;
	}
	if (func_672())
	{
		return 0;
	}
	else if (!func_275(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0] > 0)
	{
		return 0;
	}
	if (((func_866(1) || func_864(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_863() && Global_1695468 == 2)
	{
		return 0;
	}
	if (func_278(PLAYER::PLAYER_ID()) && !func_863())
	{
		return 0;
	}
	if (Global_1662006)
	{
		return 0;
	}
	if (Global_1662011)
	{
		return 0;
	}
	if (func_862(0))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 4))
	{
		return 0;
	}
	if (Global_1370230)
	{
		return 0;
	}
	if ((Global_1688696.f_718.f_5 || Global_1691522.f_718.f_5) || Global_1687724.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1696433.f_724.f_5 || Global_1696433.f_744.f_724.f_5) || Global_1696433.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (func_861(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1370265 || Global_1370266) || Global_1370267)
	{
		return 0;
	}
	return 1;
}

bool func_861(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 6);
}

bool func_862(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_5124.f_45, iParam0);
}

bool func_863()
{
	return (GAMEPLAY::IS_BIT_SET(Global_4456448.f_30, 12) && GAMEPLAY::IS_BIT_SET(Global_1695469, 0));
}

int func_864(bool bParam0)
{
	if (CONTROLS::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_865(PLAYER::PLAYER_PED_ID()))
			{
				if (CONTROLS::IS_CONTROL_PRESSED(0, 25) || CONTROLS::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return 0;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (((CONTROLS::IS_CONTROL_PRESSED(0, 166) || CONTROLS::IS_CONTROL_PRESSED(0, 167)) || CONTROLS::IS_CONTROL_PRESSED(0, 168)) || CONTROLS::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 166) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 167)) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 168)) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_865(int iParam0)
{
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == 100416529 || iVar0 == 205991906) || iVar0 == -952879014) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_866(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_867(int iParam0, int iParam1)
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

int func_868()
{
	if (func_869())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (GAMEPLAY::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_869()
{
	return Global_1312440;
}

int func_870()
{
	return Global_1377170.f_68;
}

int func_871()
{
	if (Global_1574186 > 16)
	{
		return 1;
	}
	return 0;
}

float func_872()
{
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_873(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_874()
{
	if (func_875(PLAYER::PLAYER_ID()))
	{
		return Global_1319101;
	}
	return 0;
}

int func_875(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_25(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_876()
{
	if (func_874())
	{
		return 1;
	}
	if (func_808(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_846())
	{
		return 1;
	}
	if (func_781(PLAYER::PLAYER_ID()))
	{
		switch (func_675(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_877(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_877(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_877(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_877(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 4);
}

int func_878(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_781(PLAYER::PLAYER_ID()) && !func_680(PLAYER::PLAYER_ID())) && !func_779(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_175(PLAYER::PLAYER_ID(), 0) && func_680(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_879(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_879(int iParam0)
{
	iVar0 = 2;
	bVar1 = ((func_781(iParam0) && !func_810(iParam0)) && !GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 8));
	bVar2 = func_680(iParam0);
	uVar3 = func_495();
	uVar4 = func_883();
	if ((bVar1 && (func_682(iParam0) || func_882(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_881(iParam0)) && !func_880(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2537071.f_5124.f_216 != iVar0)
	{
		Global_2537071.f_5124.f_216 = iVar0;
	}
	return iVar0;
}

bool func_880(int iParam0)
{
	return func_681(iParam0, 19);
}

int func_881(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_681(iParam0, 9);
	}
	return 0;
}

int func_882(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_883()
{
	if ((func_681(PLAYER::PLAYER_ID(), 21) || func_681(PLAYER::PLAYER_ID(), 22)) || func_887())
	{
		return 1;
	}
	if (func_885())
	{
		func_884(22);
		return 1;
	}
	return 0;
}

void func_884(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_4), iParam0);
}

int func_885()
{
	if (func_175(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_495() && !func_494()) || func_493(PLAYER::PLAYER_ID(), 21)) || func_493(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_886(27);
		}
	}
	return 0;
}

void func_886(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_4), iParam0);
}

int func_887()
{
	return func_719(358, -1);
}

void func_888()
{
	if (Local_433.f_252 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_183)
	{
		Stack.Push(iVar0);
		Call_Loc(Local_433.f_252);
		if (StackVal)
		{
			if (func_891(iVar0))
			{
				if (!UI::DOES_BLIP_EXIST(uLocal_214[iVar0]))
				{
					uLocal_214[iVar0] = UI::ADD_BLIP_FOR_RADIUS(Local_218.f_183.f_1[iVar0], Local_218.f_183.f_1[iVar0].f_3);
					func_890(&(uLocal_214[iVar0]), Local_218.f_183.f_1[iVar0].f_4);
					UI::SET_BLIP_ALPHA(uLocal_214[iVar0], 85);
				}
			}
			if (!UI::DOES_BLIP_EXIST(uLocal_216[iVar0]))
			{
				Stack.Push(Local_433.f_252.f_4 != 0);
				Stack.Push(iVar0);
				Call_Loc(Local_433.f_252.f_4);
				if (StackVal && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(StackVal))
				{
					Stack.Push(iVar0);
					Call_Loc(Local_433.f_252.f_4);
					uLocal_216[iVar0] = UI::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(StackVal));
				}
				else
				{
					uLocal_216[iVar0] = UI::ADD_BLIP_FOR_COORD(Local_218.f_183.f_1[iVar0]);
				}
				UI::SET_BLIP_SPRITE(uLocal_216[iVar0], func_454());
				func_890(&(uLocal_216[iVar0]), func_452());
				UI::SET_BLIP_SCALE(uLocal_216[iVar0], func_449());
				if (Local_433.f_252.f_3 != 0)
				{
					Stack.Push(uLocal_216[iVar0]);
					Stack.Push(iVar0);
					Call_Loc(Local_433.f_252.f_3);
					UI::SET_BLIP_NAME_FROM_TEXT_FILE(StackVal, StackVal);
				}
				if (!func_434(29))
				{
					UI::FLASH_MINIMAP_DISPLAY();
					func_423(29);
				}
			}
			else if (UI::GET_BLIP_COLOUR(uLocal_216[iVar0]) != func_889(func_452()))
			{
				func_890(&(uLocal_216[iVar0]), func_452());
			}
			if (Local_433.f_252.f_2 != 0)
			{
				Stack.Push(iVar0);
				Call_Loc(Local_433.f_252.f_2);
			}
		}
		else
		{
			if (UI::DOES_BLIP_EXIST(uLocal_214[iVar0]))
			{
				UI::REMOVE_BLIP(&(uLocal_214[iVar0]));
			}
			if (UI::DOES_BLIP_EXIST(uLocal_216[iVar0]))
			{
				UI::REMOVE_BLIP(&(uLocal_216[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_889(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	UI::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_890(var uParam0, int iParam1)
{
	if (UI::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_889(iParam1);
		UI::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_891(int iParam0)
{
	if (Local_433.f_252.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_252.f_1);
		return StackVal;
	}
	return 1;
}

void func_892()
{
	iVar0 = iLocal_1217;
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	uVar3 = (PED::IS_PED_IN_FLYING_VEHICLE(iVar0) || func_911(iVar0));
	iVar1 = 0;
	while (iVar1 < Local_218.f_164)
	{
		bVar2 = false;
		if ((func_31(Local_218.f_164[iVar1].f_2) || func_31(Local_218.f_164[iVar1].f_5)) || Local_218.f_164[iVar1].f_8 == 0f)
		{
			Jump @606; //curOff = 116
		}
		else
		{
			Var4 = { Local_218.f_164[iVar1].f_2 };
			Var7 = { Local_218.f_164[iVar1].f_5 };
			uVar10 = Local_218.f_164[iVar1].f_8;
		}
		if (((((func_83(iVar1, 0) || func_83(iVar1, 1)) || func_83(iVar1, 2)) || func_83(iVar1, 6)) || func_83(iVar1, 7)) || func_83(iVar1, 8))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Var4, Var7, uVar10, 0, 1, 0))
			{
				Stack.Push(func_83(iVar1, 7));
				Stack.Push(iVar1);
				Stack.Push(7);
				Stack.Push(uVar3);
				Call_Loc(Local_433.f_250.f_1);
				if (StackVal && StackVal)
				{
					func_545(1);
				}
				Stack.Push(func_83(iVar1, 0));
				Stack.Push(iVar1);
				Stack.Push(0);
				Stack.Push(uVar3);
				Call_Loc(Local_433.f_250.f_1);
				if (StackVal && StackVal)
				{
					func_910(iVar1, 1);
					func_907(iVar1, 1);
					bVar2 = true;
					if (!func_46(14))
					{
						func_751();
					}
				}
				Stack.Push(func_83(iVar1, 1));
				Stack.Push(iVar1);
				Stack.Push(1);
				Stack.Push(uVar3);
				Call_Loc(Local_433.f_250.f_1);
				Stack.Push((StackVal && StackVal));
				Stack.Push((func_83(iVar1, 2) && uVar3));
				Stack.Push(iVar1);
				Stack.Push(2);
				Stack.Push(uVar3);
				Call_Loc(Local_433.f_250.f_1);
				if (StackVal || (StackVal && StackVal))
				{
					func_910(iVar1, 1);
					bVar2 = true;
					if (!func_46(14))
					{
						func_751();
					}
				}
				Stack.Push(func_83(iVar1, 6));
				Stack.Push(iVar1);
				Stack.Push(6);
				Stack.Push(uVar3);
				Call_Loc(Local_433.f_250.f_1);
				if (StackVal && StackVal)
				{
					func_910(iVar1, 1);
					bVar2 = true;
					func_903(iVar1);
				}
				Stack.Push(func_83(iVar1, 8));
				Stack.Push(iVar1);
				Stack.Push(8);
				Stack.Push(uVar3);
				Call_Loc(Local_433.f_250.f_1);
				if (StackVal && StackVal)
				{
					func_910(iVar1, 1);
					bVar2 = true;
					func_900(iVar1);
				}
			}
			if (!bVar2)
			{
				func_910(iVar1, 0);
			}
			if (func_83(iVar1, 1) || func_83(iVar1, 2))
			{
				if (func_899(iVar1))
				{
					func_893(iVar1, bVar2);
				}
			}
		}
		if (func_83(iVar1, 3))
		{
			func_907(iVar1, 1);
		}
		iVar1++;
	}
}

void func_893(int iParam0, bool bParam1)
{
	if (func_477(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_83(iParam0, 5))
		{
			func_894();
		}
		if (!func_13(&(Local_1270.f_109.f_4[iParam0])))
		{
			func_12(&(Local_1270.f_109.f_4[iParam0]), 0, 0);
		}
		else
		{
			Stack.Push(&(Local_1270.f_109.f_4[iParam0]));
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_250);
			if (func_11(StackVal, StackVal, 0))
			{
				func_907(iParam0, 1);
			}
		}
	}
	else
	{
		func_22(&(Local_1270.f_109.f_4[iParam0]));
	}
}

int func_894()
{
	iVar0 = func_898();
	if (iVar0 != -1)
	{
		func_895(NETWORK::NET_TO_PED(Local_1270.f_24[iVar0]), func_897(iVar0), 35);
		return 1;
	}
	return 0;
}

void func_895(int iParam0, var uParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, uParam1, func_896(iParam2), 1);
}

int func_896(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

char* func_897(int iParam0)
{
	return "PROVOKE_TRESPASS";
}

int func_898()
{
	iVar1 = -1;
	fVar6 = 999999.9f;
	Var2 = { Local_1220 };
	iVar0 = 0;
	while (iVar0 < Local_218.f_28)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_24[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1270.f_24[iVar0]))
			{
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(func_897(iVar0)))
				{
					if (!PED::IS_PED_DEAD_OR_DYING(NETWORK::NET_TO_PED(Local_1270.f_24[iVar0]), 1))
					{
						fVar5 = SYSTEM::VDIST(Var2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_1270.f_24[iVar0]), 0));
						if (fVar5 < fVar6)
						{
							fVar6 = fVar5;
							iVar1 = iVar0;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_899(int iParam0)
{
	return 1;
}

void func_900(int iParam0)
{
	if (func_901())
	{
	}
}

int func_901()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1217, 0))
	{
		return func_902();
	}
	else if (bLocal_1213)
	{
		FIRE::ADD_EXPLOSION(Local_1220, 72, 1f, 1, 0, 1065353216, 0);
		ENTITY::SET_ENTITY_HEALTH(iLocal_1217, 0, 0);
		return 1;
	}
	return 0;
}

int func_902()
{
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(iLocal_1217);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
		{
			unk_0x2A5E0621DD815A9A(iVar0, 1, 0, 0);
			return 1;
		}
		else
		{
			NETWORK::NETWORK_EXPLODE_VEHICLE(iVar0, 1, 0, -1);
			return 1;
		}
	}
	return 0;
}

void func_903(int iParam0)
{
	Stack.Push(&(Local_1436[iLocal_1218].f_24.f_4[iParam0].f_2));
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_250);
	if (!func_11(StackVal, StackVal, 0))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_250);
		iVar0 = (StackVal - func_906(&(Local_1436[iLocal_1218].f_24.f_4[iParam0].f_2), 0, 0));
		if (iVar0 <= 1000)
		{
			func_905(&(uLocal_1209[iParam0]));
			if (func_904(&(uLocal_1209[iParam0]), "VULKAN_LOCK_ON_RED", 0, 1))
			{
			}
		}
		else if (func_904(&(uLocal_1209[iParam0]), "VULKAN_LOCK_ON_AMBER", 0, 1))
		{
		}
	}
	else if (func_901())
	{
	}
}

int func_904(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(*uParam0, sParam1, sParam2, iParam3);
		return 1;
	}
	return 0;
}

void func_905(var uParam0)
{
	if (*uParam0 != -1)
	{
		AUDIO::STOP_SOUND(*uParam0);
		AUDIO::RELEASE_SOUND_ID(*uParam0);
		*uParam0 = -1;
	}
}

int func_906(var uParam0, bool bParam1, bool bParam2)
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

void func_907(int iParam0, bool bParam1)
{
	if (!func_899(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_104(&(Local_1436[iLocal_1218].f_24), iParam0))
		{
			func_909(&(Local_1436[iLocal_1218].f_24), iParam0);
		}
	}
	else if (func_104(&(Local_1436[iLocal_1218].f_24), iParam0))
	{
		func_908(&(Local_1436[iLocal_1218].f_24), iParam0);
	}
}

void func_908(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	GAMEPLAY::CLEAR_BIT(uParam0[iVar0], iVar1);
}

void func_909(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	GAMEPLAY::SET_BIT(uParam0[iVar0], iVar1);
}

void func_910(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_104(&(Local_1436[iLocal_1218].f_24.f_2), iParam0))
		{
			func_909(&(Local_1436[iLocal_1218].f_24.f_2), iParam0);
		}
	}
	else
	{
		if (func_104(&(Local_1436[iLocal_1218].f_24.f_2), iParam0))
		{
			func_908(&(Local_1436[iLocal_1218].f_24.f_2), iParam0);
		}
		if (func_83(iParam0, 6))
		{
			if (uLocal_1209[iParam0] != -1)
			{
				func_905(&(uLocal_1209[iParam0]));
			}
			if (func_13(&(Local_1436[iLocal_1218].f_24.f_4[iParam0].f_2)))
			{
				func_22(&(Local_1436[iLocal_1218].f_24.f_4[iParam0].f_2));
			}
		}
	}
}

int func_911(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == 2069146067)
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_AIR(iVar0) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0) > 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_912()
{
}

void func_913()
{
	if (!func_946())
	{
		func_914();
		return;
	}
	if (!func_659())
	{
		func_522();
		return;
	}
	Call_Loc(Local_817[func_700()].f_15);
}

void func_914()
{
	func_522();
	func_915(1, 1, 1);
}

void func_915(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_944();
	}
	func_942();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < func_7())
		{
			if (uLocal_1248[iVar0] != func_412())
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uLocal_1248[iVar0]))
					{
						func_916(NETWORK::NETWORK_GET_PLAYER_INDEX(uLocal_1248[iVar0]), 0);
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam1)
	{
	}
}

void func_916(int iParam0, int iParam1)
{
	uVar0 = func_941(iParam0);
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_1164.f_6, iParam0) || iParam1)
			{
				if (func_940(iParam0))
				{
					func_939(iParam0, func_889(func_632(iLocal_1216, -2, 0, 0, 0)), 0, 0);
				}
				if (func_938(iParam0))
				{
					func_937(iParam0, 0);
				}
				if (func_936(iParam0))
				{
					func_935(iParam0, 0, 1, 0);
				}
				if (func_934(iParam0))
				{
					if (func_932(iParam0))
					{
						func_931(iParam0, 0, 1);
					}
				}
				if (func_930(iParam0))
				{
					func_926(iParam0, func_928(uVar0), 0, 0);
				}
				if (func_925(iParam0))
				{
					func_924(iParam0, 1f, 0, 0);
				}
				if (func_940(iParam0))
				{
					func_939(iParam0, 1, 0, 0);
				}
				if (func_922(iParam0))
				{
					func_917(iParam0, 0, 0);
				}
				GAMEPLAY::CLEAR_BIT(&(Local_1164.f_6), iParam0);
			}
		}
	}
}

void func_917(int iParam0, bool bParam1, bool bParam2)
{
	if (func_919(iParam0))
	{
		return;
	}
	func_918(&(Global_2416079.f_720[iParam0]), &(Global_2416079.f_1083[iParam0]), &(Global_2416079.f_393), bParam1, iParam0, bParam2, &uVar0);
}

int func_918(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!GAMEPLAY::IS_BIT_SET(*uParam2, iParam4))
			{
				*uParam6 = 1;
				GAMEPLAY::SET_BIT(uParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (GAMEPLAY::IS_BIT_SET(*uParam2, iParam4))
			{
				*uParam6 = 1;
				GAMEPLAY::CLEAR_BIT(uParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_919(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 1;
	}
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_920())
	{
		return 1;
	}
	return 0;
}

int func_920()
{
	switch (func_157())
	{
		case 0:
			return func_921();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_921()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

bool func_922(int iParam0)
{
	return func_923(&(Global_2416079.f_720[iParam0]));
}

int func_923(var uParam0)
{
	if (SCRIPT::IS_THREAD_ACTIVE(*uParam0))
	{
		if (!*uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return 0;
		}
	}
	return 1;
}

void func_924(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_919(iParam0))
	{
		return;
	}
	if (func_918(&(Global_2416079.f_753[iParam0]), &(Global_2416079.f_1116[iParam0]), &(Global_2416079.f_392), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_555[iParam0] = fParam1;
		}
	}
}

bool func_925(int iParam0)
{
	return func_923(&(Global_2416079.f_753[iParam0]));
}

void func_926(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_919(iParam0))
	{
		return;
	}
	if (func_918(&(Global_2416079.f_588[iParam0]), &(Global_2416079.f_951[iParam0]), &(Global_2416079.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_423[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_927();
		}
	}
}

void func_927()
{
	Global_2416079.f_1614 = 1;
}

int func_928(int iParam0)
{
	if (Local_433.f_54.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_54.f_1);
		return StackVal;
	}
	if (Local_218.f_10.f_1 != -1)
	{
		return Local_218.f_10.f_1;
	}
	return func_929();
}

int func_929()
{
	return 478;
}

bool func_930(int iParam0)
{
	return func_923(&(Global_2416079.f_588[iParam0]));
}

void func_931(int iParam0, bool bParam1, bool bParam2)
{
	if (func_919(iParam0))
	{
		return;
	}
	func_918(&(Global_2416079.f_918[iParam0]), &(Global_2416079.f_1281[iParam0]), &(Global_2416079.f_398), bParam1, iParam0, bParam2, &uVar0);
}

bool func_932(int iParam0)
{
	return func_933(Global_2416079.f_918[iParam0], &(Global_2416079.f_398), iParam0);
}

int func_933(var uParam0, var uParam1, int iParam2)
{
	if (GAMEPLAY::IS_BIT_SET(*uParam1, iParam2))
	{
		if (SCRIPT::IS_THREAD_ACTIVE(uParam0))
		{
			return 1;
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(uParam1, iParam2);
		}
	}
	return 0;
}

bool func_934(int iParam0)
{
	return func_923(&(Global_2416079.f_918[iParam0]));
}

void func_935(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_919(iParam0))
	{
		return;
	}
	if (func_918(&(Global_2416079.f_819[iParam0]), &(Global_2416079.f_1182[iParam0]), &(Global_2416079.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_937(iParam0, bParam2);
	}
}

bool func_936(int iParam0)
{
	return func_923(&(Global_2416079.f_819[iParam0]));
}

void func_937(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_2416079.f_368), iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2416079.f_368), iParam0);
	}
	if (UI::DOES_BLIP_EXIST(Global_2416079[iParam0]))
	{
		if (bParam1)
		{
			UI::SET_BLIP_AS_SHORT_RANGE(Global_2416079[iParam0], 0);
		}
		else
		{
			UI::SET_BLIP_AS_SHORT_RANGE(Global_2416079[iParam0], 1);
		}
	}
}

bool func_938(int iParam0)
{
	return func_923(&(Global_2416079.f_885[iParam0]));
}

void func_939(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_919(iParam0))
	{
		return;
	}
	if (func_918(&(Global_2416079.f_621[iParam0]), &(Global_2416079.f_984[iParam0]), &(Global_2416079.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_456[iParam0] = iParam1;
		}
	}
}

bool func_940(int iParam0)
{
	return func_923(&(Global_2416079.f_621[iParam0]));
}

int func_941(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (Local_1164[iVar0].f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_942()
{
	func_943();
}

void func_943()
{
	if (UI::DOES_BLIP_EXIST(uLocal_1253))
	{
		UI::REMOVE_BLIP(&uLocal_1253);
	}
}

void func_944()
{
	iVar0 = 0;
	while (iVar0 < Local_1164)
	{
		func_945(iVar0);
		iVar0++;
	}
}

void func_945(int iParam0)
{
	if (UI::DOES_BLIP_EXIST(Local_1164[iParam0]))
	{
		UI::REMOVE_BLIP(&(Local_1164[iParam0]));
	}
}

int func_946()
{
	if (((((bLocal_1223 && func_434(7)) && !func_434(8)) && func_434(31)) && func_408() == 0) && !func_947())
	{
		return 1;
	}
	return 0;
}

bool func_947()
{
	Call_Loc(Local_433.f_17);
	return StackVal;
}

void func_948()
{
	func_970();
	func_964();
	if (bLocal_1224)
	{
		func_958();
		func_953();
		func_949();
	}
}

void func_949()
{
	if (!func_739())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!func_952(iVar0))
		{
			Stack.Push(Local_433.f_257.f_1 != 0);
			Stack.Push(iVar0);
			Call_Loc(Local_433.f_257.f_1);
			if (StackVal && StackVal)
			{
				if (func_951(iVar0))
				{
					if (Local_433.f_257.f_3 != 0)
					{
						Stack.Push(iVar0);
						Call_Loc(Local_433.f_257.f_3);
					}
					Stack.Push(iVar0);
					Call_Loc(Local_433.f_257.f_5);
					if (StackVal)
					{
						func_950(iVar0);
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_950(int iParam0)
{
	if (!func_104(&uLocal_1207, iParam0))
	{
		func_909(&uLocal_1207, iParam0);
	}
}

int func_951(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_257.f_2);
	switch (StackVal)
	{
		case 0:
			if (Local_433.f_257 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_257);
				func_738(StackVal, -1);
				return 1;
			}
			break;
		
		case 3:
			if (Local_433.f_257.f_4 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_257.f_4);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_952(int iParam0)
{
	return func_104(&uLocal_1207, iParam0);
}

void func_953()
{
	iVar0 = 0;
	while (iVar0 < Local_218.f_10)
	{
		if (Local_1164.f_9 != -1)
		{
			if (Local_1164.f_9 == iVar0 && Local_1164[iVar0].f_4 != iLocal_1216)
			{
				Local_1164.f_9 = func_941(iLocal_1216);
				if (!func_691(iVar0, iLocal_1219, 6) && !func_6(iVar0, 29))
				{
				}
			}
		}
		else if (Local_1164[iVar0].f_4 == iLocal_1216)
		{
			if (!func_691(iVar0, iLocal_1219, 6) && !func_6(iVar0, 4))
			{
				if (!func_46(16))
				{
					Local_1164.f_9 = iVar0;
					func_954(iLocal_1225, iLocal_1216, func_957(), 0, func_46(20), -1, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_954(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	Var0.f_2 = 590034952;
	Var0.f_10 = iParam1;
	Var0.f_11 = iParam2;
	Var0.f_3 = iParam0;
	Var0.f_12 = iParam5;
	Var0.f_13 = iParam6;
	Var0.f_4 = func_956(bParam3);
	Var0.f_5 = SYSTEM::TO_FLOAT(NETWORK::_GET_POSIX_TIME());
	if (bParam4)
	{
	}
	iVar14 = 0;
	while (iVar14 < 32)
	{
		iVar16 = iVar14;
		if (func_28(iVar16, 0, 1))
		{
			if (bParam4)
			{
				GAMEPLAY::SET_BIT(&iVar15, iVar14);
			}
			else if (func_67(iParam2, iVar16))
			{
				GAMEPLAY::SET_BIT(&iVar15, iVar14);
			}
			else if (iParam1 == iVar16)
			{
				GAMEPLAY::SET_BIT(&iVar15, iVar14);
			}
		}
		iVar14++;
	}
	if (iVar15 != 0)
	{
		func_955(Var0, iVar15);
	}
}

void func_955(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_956(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_957()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

void func_958()
{
	if (!func_659())
	{
		return;
	}
	func_959();
}

void func_959()
{
	if (Local_218.f_128 == -1 || Local_218.f_128.f_1 == 1)
	{
		return;
	}
	if (!func_13(&(Local_1270.f_151)))
	{
		return;
	}
	iVar0 = (func_17() - func_906(&(Local_1270.f_151), 0, 0));
	if (Local_218.f_128.f_1 == 2 && iVar0 > 300000)
	{
		return;
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 30000)
	{
		iVar1 = 1;
	}
	else
	{
		iVar1 = 6;
	}
	func_961(iVar0, "SMHUD_TIMEREM", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, iVar1, 0, 0, 0, 0, -1);
	if (func_960(Local_1270.f_151, (func_17() - 5000), 0) && !func_960(Local_1270.f_151, (func_17() - 4000), 0))
	{
		if (!func_434(22))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
			func_423(22);
		}
	}
	else if (func_434(22))
	{
		func_709(22);
	}
}

int func_960(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_961(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_963(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_962(7, iVar0);
		Global_1378678.f_4562[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_4562.f_172[iVar0] = iParam2;
		Global_1378678.f_4562.f_216[iVar0] = iParam3;
		Global_1378678.f_4562.f_183[iVar0] = iParam4;
		Global_1378678.f_4562.f_194[iVar0] = iParam5;
		Global_1378678.f_4562.f_249[iVar0] = iParam6;
		Global_1378678.f_4562.f_260[iVar0] = iParam7;
		Global_1378678.f_4562.f_205[iVar0] = iParam8;
		Global_1378678.f_4562.f_314[iVar0] = iParam9;
		Global_1378678.f_4562.f_325[iVar0] = iParam10;
		Global_1378678.f_4562.f_357[iVar0] = iParam11;
		Global_1378678.f_4562.f_238[iVar0] = iParam12;
		Global_1378678.f_4562.f_271[iVar0] = iParam13;
		Global_1378678.f_4562.f_368[iVar0] = iParam14;
		Global_1378678.f_4562.f_379[iVar0] = iParam15;
		Global_1378678.f_4562.f_390[iVar0] = iParam16;
		Global_1378678.f_4562.f_227[iVar0] = iParam17;
	}
}

void func_962(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_963(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

void func_964()
{
	if (func_968())
	{
		func_965(1);
	}
	else
	{
		func_965(0);
	}
}

void func_965(bool bParam0)
{
	if (bParam0)
	{
		if (!func_434(32))
		{
			func_967(0, 13, 1, 1, 0, 1, 1, 0, 0);
			func_423(32);
		}
	}
	else if (func_434(32))
	{
		func_966(0);
		func_709(32);
	}
}

void func_966(int iParam0)
{
	if (func_362(PLAYER::PLAYER_ID()))
	{
		iVar0 = PLAYER::PLAYER_ID();
		GAMEPLAY::CLEAR_BIT(&(Global_2425662[iVar0].f_229), Global_1373155[iParam0]);
		GAMEPLAY::CLEAR_BIT(&(Global_2425662[iVar0].f_229), 17);
		GAMEPLAY::CLEAR_BIT(&(Global_2425662[iVar0].f_229), 18);
		GAMEPLAY::CLEAR_BIT(&(Global_2425662[iVar0].f_229), 19);
		GAMEPLAY::CLEAR_BIT(&(Global_2425662[iVar0].f_229), 20);
		if (Global_2425662[iVar0].f_229 == 0)
		{
			Global_2425662[iVar0].f_228 = 0;
		}
	}
	Global_1373132[iParam0] = 0;
	Global_1373171[iParam0] = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_232 = 0;
}

void func_967(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	Global_1373155[iParam0] = iParam1;
	Global_1373179[iParam0] = iParam4;
	Global_1373187[iParam0] = iParam5;
	if (bParam6)
	{
		Global_2425662[PLAYER::PLAYER_ID()].f_232 = 1;
	}
	else
	{
		Global_2425662[PLAYER::PLAYER_ID()].f_232 = 0;
	}
	if (bParam7)
	{
	}
	if (func_362(PLAYER::PLAYER_ID()))
	{
		iVar0 = PLAYER::PLAYER_ID();
		GAMEPLAY::SET_BIT(&(Global_2425662[iVar0].f_229), iParam1);
		Global_2425662[iVar0].f_228 = 1;
	}
	if (iParam2 == 1)
	{
		Global_1373163[iParam0] = 1;
	}
	else
	{
		Global_1373163[iParam0] = 0;
	}
	Global_1373132[iParam0] = 1;
	Global_1373171[iParam0] = iParam3;
	if (bParam8)
	{
		if (iParam1 == 12)
		{
			Global_2425662[PLAYER::PLAYER_ID()].f_233 = 1;
		}
	}
}

int func_968()
{
	if ((((bLocal_1224 && func_46(18)) && func_969(iLocal_1216, 1)) && func_385(func_941(iLocal_1216))) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_1217, 0))
	{
		return 1;
	}
	return 0;
}

int func_969(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (Local_1164[iVar0].f_4 == iParam0)
		{
			if (bParam1)
			{
				if (func_691(iVar0, iLocal_1219, 6) || func_6(iVar0, 4))
				{
					return 0;
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_970()
{
	func_971();
}

void func_971()
{
	if (func_1529() > 0)
	{
		if (!func_434(9))
		{
			if (func_975())
			{
				if (func_11(&uLocal_1251, 1350, 0) && !func_974())
				{
					func_973();
					func_423(9);
				}
			}
		}
		else if (!func_434(10))
		{
			if (func_972(86))
			{
				func_423(10);
			}
		}
	}
}

bool func_972(int iParam0)
{
	return Global_2439138.f_2723[0].f_1 == iParam0;
}

void func_973()
{
}

bool func_974()
{
	return Global_1681929;
}

int func_975()
{
	if ((((bLocal_1213 && !UI::IS_PAUSE_MENU_ACTIVE()) && !func_742()) && bLocal_1223) && func_976())
	{
		return 1;
	}
	return 0;
}

int func_976()
{
	if ((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT())
	{
		return 1;
	}
	return 0;
}

void func_977()
{
	func_988();
	func_985();
	func_979();
	func_978();
}

void func_978()
{
}

void func_979()
{
	if (func_984())
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_1216) < func_983())
		{
			func_981(iLocal_1216, func_983(), 0, 0);
		}
		PLAYER::_0x4669B3ED80F24B4E(iLocal_1216);
		PLAYER::_0xBC9490CA15AEA8FB(iLocal_1216);
		func_423(17);
	}
	else if (func_434(17))
	{
		if (func_980())
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_1216) > 0)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(iLocal_1216, 0, 0);
			}
		}
		func_709(17);
	}
}

int func_980()
{
	if (Local_433.f_26.f_8 != 0)
	{
		Call_Loc(Local_433.f_26.f_8);
		return StackVal;
	}
	return 0;
}

void func_981(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 != func_68() && func_28(iParam0, 1, 1))
	{
		func_982(iLocal_1225, func_446(iParam0), iParam1, iParam2, iParam3);
	}
}

void func_982(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	Var0 = 1059615374;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = NETWORK::_GET_POSIX_TIME();
	Var0.f_6 = uParam3;
	Var0.f_5 = uParam4;
	if (!iParam1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 7, iParam1);
	}
}

int func_983()
{
	Call_Loc(Local_433.f_26);
	return StackVal;
}

int func_984()
{
	if (Local_433.f_26.f_7 != 0)
	{
		Call_Loc(Local_433.f_26.f_7);
		return StackVal;
	}
	return 0;
}

void func_985()
{
	if (func_987())
	{
		if (PLAYER::_0x56105E599CAB0EFA(iLocal_1216) < func_986())
		{
			GAMEPLAY::SET_FAKE_WANTED_LEVEL(func_986());
			func_423(18);
		}
	}
	else if (func_434(18))
	{
		if (PLAYER::_0x56105E599CAB0EFA(iLocal_1216) > 0)
		{
			GAMEPLAY::SET_FAKE_WANTED_LEVEL(0);
		}
		func_709(18);
	}
}

int func_986()
{
	if (Local_433.f_26.f_1 != 0)
	{
		Call_Loc(Local_433.f_26.f_1);
		return StackVal;
	}
	return Local_218.f_125.f_1;
}

int func_987()
{
	if (Local_433.f_26.f_6 != 0)
	{
		Call_Loc(Local_433.f_26.f_6);
		return StackVal;
	}
	return 0;
}

void func_988()
{
	if (func_434(15))
	{
		if (!func_1007(Local_1183.f_2))
		{
			if (func_991(Local_1183, Local_1183.f_1))
			{
				if (Local_1183 > func_983())
				{
					PLAYER::SET_MAX_WANTED_LEVEL(Local_1183);
				}
				else if (PLAYER::GET_MAX_WANTED_LEVEL() != func_983())
				{
					PLAYER::SET_MAX_WANTED_LEVEL(func_983());
					func_709(13);
				}
				if (Global_1590535[iLocal_1216].f_751)
				{
					func_990();
				}
				PLAYER::SET_PLAYER_WANTED_LEVEL(iLocal_1216, Local_1183, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iLocal_1216, 0);
				Stack.Push(Local_433.f_26.f_9 != 0);
				Call_Loc(Local_433.f_26.f_9);
				if (StackVal && StackVal)
				{
					DECISIONEVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(104, iLocal_1217, -1082130432);
					unk_0xAD27D957598E49E9(iLocal_1217, Local_1220, 20f, -472287501);
				}
				func_989();
				func_709(15);
			}
			else
			{
				func_989();
				func_709(15);
			}
		}
	}
}

void func_989()
{
	Local_1183 = 0;
	Local_1183.f_2 = 0;
	Local_1183.f_1 = 0;
	func_22(&(Local_1183.f_3));
}

void func_990()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4555, 1))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4555), 1);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4555, 4))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4555), 4);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4555, 6))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4555), 6);
	}
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4555), 0);
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4555), 2);
	Global_1590535[PLAYER::PLAYER_ID()].f_751 = 0;
	if (Global_2537071.f_4557 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2537071.f_4557);
	}
	Global_2537071.f_4556 = 0;
}

int func_991(int iParam0, bool bParam1)
{
	if (func_983() <= 0)
	{
		return 0;
	}
	if (func_993(iLocal_1216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_1216) == iParam0)
	{
		return 0;
	}
	if (func_992() && !bParam1)
	{
		return 0;
	}
	Stack.Push(Local_433.f_26.f_3 != 0);
	Stack.Push(bParam1);
	Call_Loc(Local_433.f_26.f_3);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_992()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4555, 4))
	{
		if (func_537(PLAYER::PLAYER_ID(), 1))
		{
			iVar0 = func_69(PLAYER::PLAYER_ID());
			if (iVar0 != func_68())
			{
				if (Global_1590535[iVar0].f_751)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_993(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_1006(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_1005(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_1004(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_1003(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_1002(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_1001(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_322(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_1000(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_999(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_328(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_998(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_997(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_996(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_995(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_994(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_994(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_995(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_996(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_997(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_998(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_999(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_1000(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_1001(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_1002(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_1003(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_1004(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_1005(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_1006(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[iParam0].f_310.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_1007(var uParam0)
{
	Stack.Push(Local_433.f_26.f_10 != 0);
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_26.f_10);
	if (StackVal && StackVal)
	{
		return 1;
	}
	if (Local_1183.f_2 == 0 || func_11(&(Local_1183.f_3), Local_1183.f_2, 0))
	{
		return 0;
	}
	return 1;
}

void func_1008()
{
	func_1025();
	func_1009();
}

void func_1009()
{
	if ((bLocal_1224 && (func_1024() == 27 || func_1024() == 28)) && Local_1196.f_9 == func_1023())
	{
		if (func_1018())
		{
			func_1012();
		}
	}
	else
	{
		func_1010();
	}
	Local_1196.f_9 = func_1023();
}

void func_1010()
{
	if (UI::DOES_BLIP_EXIST(Local_1196.f_1[func_1011()].f_1))
	{
		UI::REMOVE_BLIP(&(Local_1196.f_1[func_1011()].f_1));
	}
}

int func_1011()
{
	return Local_1436[iLocal_1218].f_18;
}

void func_1012()
{
	fVar0 = 0.5f;
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1217, 0))
	{
		fVar0 = 1.5f;
	}
	func_1013(func_1014(), (fVar0 * 1.8f), (fVar0 * 1.8f), 2.5f, 12, 0.7f);
}

void func_1013(struct<3> Param0, struct<3> Param3, int iParam6, float fParam7)
{
	UI::GET_HUD_COLOUR(iParam6, &uVar0, &uVar1, &uVar2, &uVar3);
	Param0.z = (Param0.z - fParam7);
	GRAPHICS::DRAW_MARKER(1, Param0, 0f, 0f, 0f, 0f, 0f, 0f, Param3, uVar0, uVar1, uVar2, 150, 0, 0, 2, 0, 0, 0, 0);
}

Vector3 func_1014()
{
	return func_1015(func_1023());
}

Vector3 func_1015(int iParam0)
{
	if (bLocal_1213 && PED::IS_PED_IN_ANY_VEHICLE(iLocal_1217, 0))
	{
		return func_1017(iParam0);
	}
	return func_1016(iParam0);
}

Vector3 func_1016(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1681961.f_1[iParam0];
	}
	return 0f, 0f, 0f;
}

Vector3 func_1017(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1681961.f_1[iParam0].f_3;
	}
	return 0f, 0f, 0f;
}

int func_1018()
{
	if (!UI::DOES_BLIP_EXIST(Local_1196.f_1[func_1011()].f_1))
	{
		Local_1196.f_1[func_1011()].f_1 = UI::ADD_BLIP_FOR_COORD(func_1014());
		unk_0xB552929B85FC27EC(Local_1196.f_1[func_1011()].f_1, 1);
		UI::SET_BLIP_PRIORITY(Local_1196.f_1[func_1011()].f_1, 12);
		UI::SET_BLIP_ROUTE(Local_1196.f_1[func_1011()].f_1, func_1020());
		if (Local_1196.f_1[func_1011()].f_2 && !Local_1196.f_1[func_1011()].f_3)
		{
			func_1019(&(Local_1196.f_1[func_1011()].f_1), 0);
			Local_1196.f_1[func_1011()].f_3 = 1;
		}
		return 0;
	}
	return 1;
}

void func_1019(var uParam0, bool bParam1)
{
	UI::SET_BLIP_FLASHES(*uParam0, 1);
	UI::SET_BLIP_FLASH_INTERVAL(*uParam0, 250);
	UI::SET_BLIP_FLASH_TIMER(*uParam0, 7000);
	if (bParam1)
	{
		UI::FLASH_MINIMAP_DISPLAY();
	}
}

int func_1020()
{
	if (func_1024() == 27)
	{
		return 1;
	}
	else if (func_1024() == 28 && func_1021(iLocal_1216))
	{
		return 1;
	}
	return 0;
}

int func_1021(int iParam0)
{
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (func_1022(iVar0, 0) != -1)
	{
		return 0;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, 0);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar1))
	{
		if (iVar3 == -1)
		{
		}
		else if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar1, iVar3, 0))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, iVar3, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (func_969(NETWORK::_NETWORK_GET_PED_PLAYER(iVar2), 1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar3++;
	}
	return 0;
}

int func_1022(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_1023()
{
	if (Local_433.f_263.f_1 != 0)
	{
		Call_Loc(Local_433.f_263.f_1);
		return StackVal;
	}
	if (iLocal_1218 != -1)
	{
		return Local_1196.f_1[Local_1436[iLocal_1218].f_18];
	}
	return 0;
}

int func_1024()
{
	return Local_817[func_700()];
}

void func_1025()
{
	if (!bLocal_1213 || func_31(func_1014()))
	{
		return;
	}
	Local_1196.f_10 = SYSTEM::VDIST(Local_1220, func_1014());
}

void func_1026()
{
	fLocal_1239 = SYSTEM::VDIST(Local_1220, Local_218.f_136[Local_1270.f_146]);
	if (func_1024() == 4)
	{
		func_1030();
		if (func_1028())
		{
			func_545(1);
		}
	}
	else if (func_1027())
	{
		func_745(1);
	}
}

int func_1027()
{
	return 0;
}

int func_1028()
{
	if (func_369(iLocal_1219, 1))
	{
		return 1;
	}
	if (Local_218.f_136[Local_1270.f_146].f_3 == -1f)
	{
		return 1;
	}
	if (func_1029())
	{
		if (fLocal_1239 != -1f)
		{
			if (fLocal_1239 <= Local_218.f_136[Local_1270.f_146].f_3)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1029()
{
	return 1;
}

void func_1030()
{
}

void func_1031()
{
	iVar5 = 0;
	while (iVar5 < Local_218.f_28)
	{
		bVar2 = false;
		bVar3 = false;
		func_113(iVar5, &bVar2, &bVar3, &iVar0, &iVar1);
		if (bVar2)
		{
			if (!bVar3)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1))
				{
					func_1131(iVar5, 1);
				}
				else
				{
					func_1130(iVar5, 1);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
				{
					func_1131(iVar5, 0);
				}
				else
				{
					func_1130(iVar5, 0);
				}
			}
			if (Local_433.f_73.f_108 != 0)
			{
				Stack.Push(iVar5);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_433.f_73.f_108);
			}
			func_1068(iVar5, iVar0, bVar3);
			if (!bVar3)
			{
			}
		}
		switch (iVar1)
		{
			case 3:
				if (bVar2)
				{
					if (!bVar3)
					{
						func_1064(iVar5, iVar0);
						func_1061(iVar5, iVar0);
						func_1060(iVar5, iVar0, 1);
						if (!func_54(iVar5))
						{
							func_1054(iVar5, iVar0);
							func_1049(iVar5, iVar0, &bVar4);
							func_1045(iVar5, iVar0);
							func_1043(iVar5, iVar0);
							func_1034(iVar5, iVar0);
						}
					}
				}
				break;
			
			case 4:
				func_1033(iVar5, iVar0);
				break;
			
			case 6:
				if (bVar2)
				{
					if (!bVar3)
					{
					}
				}
				break;
			
			case 5:
				if (bVar2)
				{
					if (func_39(iVar5, 20) && func_118(Local_1270.f_24[iVar5]))
					{
						func_1032(&(Local_1270.f_24[iVar5]));
					}
				}
				break;
		}
		iVar5++;
	}
	if (!bVar4)
	{
		if (func_13(&(Local_930.f_229)))
		{
			func_22(&(Local_930.f_229));
		}
	}
	iVar5 = Local_930.f_231;
	func_113(iVar5, &bVar2, &bVar3, &iVar0, &iVar1);
	switch (iVar1)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_1060(iVar5, iVar0, 0);
				}
			}
			break;
	}
}

void func_1032(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&uVar0);
	}
}

void func_1033(int iParam0, int iParam1)
{
	if ((ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iParam1) && !NETWORK::_0x422F32CC7E56ABAD(iParam1)) && func_118(Local_1270.f_24[iParam0]))
	{
		if (func_39(iParam0, 19))
		{
			AI::CLEAR_PED_TASKS_IMMEDIATELY(iParam1);
			PED::SET_PED_KEEP_TASK(iParam1, 0);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
		NETWORK::NETWORK_FADE_OUT_ENTITY(iParam1, 1, 1);
	}
}

void func_1034(int iParam0, int iParam1)
{
	if (!func_1042(iParam0))
	{
		return;
	}
	if (!func_73(iParam0, 3))
	{
		if (func_1039(iParam1, func_1041(iParam0), func_1040(iParam0)))
		{
			if (func_11(&(Local_930[iParam0].f_74), func_1038(iParam0), 0))
			{
				func_1037(iParam0, 1);
				if (Local_433.f_73.f_76.f_1.f_5 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(1);
					Call_Loc(Local_433.f_73.f_76.f_1.f_5);
				}
			}
		}
		else if (func_13(&(Local_930[iParam0].f_74)))
		{
			func_22(&(Local_930[iParam0].f_74));
		}
	}
	else if (func_1036(iParam0))
	{
		if (!func_1039(iParam1, func_1041(iParam0), func_1040(iParam0)))
		{
			func_1035(iParam0, 1);
			if (Local_433.f_73.f_76.f_1.f_5 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(0);
				Call_Loc(Local_433.f_73.f_76.f_1.f_5);
			}
		}
	}
}

void func_1035(int iParam0, int iParam1)
{
	if (func_122(&(Local_1436[iLocal_1219].f_7[iParam0]), iParam1))
	{
	}
}

int func_1036(int iParam0)
{
	if (Local_433.f_73.f_76.f_1.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_76.f_1.f_4);
		return StackVal;
	}
	return 0;
}

void func_1037(int iParam0, int iParam1)
{
	if (func_15(&(Local_1436[iLocal_1219].f_7[iParam0]), iParam1))
	{
	}
}

int func_1038(int iParam0)
{
	if (Local_433.f_73.f_76.f_1.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_76.f_1.f_3);
		return StackVal;
	}
	return 0;
}

int func_1039(int iParam0, float fParam1, bool bParam2)
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 0), Local_1220) <= (fParam1 * fParam1))
	{
		if (bParam2)
		{
			return ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_1217, iParam0, 287);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_1040(int iParam0)
{
	if (Local_433.f_73.f_76.f_1.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_76.f_1.f_2);
		return StackVal;
	}
	return 0;
}

float func_1041(int iParam0)
{
	if (Local_433.f_73.f_76.f_1.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_76.f_1.f_1);
		return StackVal;
	}
	return 50f;
}

bool func_1042(int iParam0)
{
	if (Local_433.f_73.f_76.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_76.f_1);
		return StackVal;
	}
	return func_73(iParam0, 28);
}

void func_1043(int iParam0, int iParam1)
{
	if (!func_1044(iParam0))
	{
		return;
	}
	if (!bLocal_1213)
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(iParam1) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam1, iLocal_1217))
	{
		func_1037(iParam0, 23);
	}
}

bool func_1044(int iParam0)
{
	return func_73(iParam0, 26);
}

void func_1045(int iParam0, int iParam1)
{
	if (!func_1048(iParam0))
	{
		return;
	}
	if (!bLocal_1213)
	{
		return;
	}
	if (func_1046(iParam1, func_1047(), 1))
	{
		func_1037(iParam0, 0);
	}
}

int func_1046(int iParam0, float fParam1, int iParam2)
{
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && iParam2))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
		if (SYSTEM::VDIST2(Var0, Var3) < (fParam1 * fParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_1047()
{
	return 20f;
}

bool func_1048(int iParam0)
{
	return (func_73(iParam0, 27) && !func_73(iParam0, 0));
}

void func_1049(int iParam0, int iParam1, var uParam2)
{
	if (!func_1053(iParam0))
	{
		return;
	}
	if (func_1052(iParam1))
	{
		*uParam2 = 1;
		if (!func_13(&(Local_930.f_229)))
		{
			func_12(&(Local_930.f_229), 0, 0);
			if (Local_433.f_73.f_111 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_433.f_73.f_111);
			}
		}
		else if (func_11(&(Local_930.f_229), func_1050(iParam0), 0))
		{
			func_1037(iParam0, 20);
			if (Local_433.f_73.f_112 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_433.f_73.f_112);
			}
		}
	}
}

int func_1050(int iParam0)
{
	if (Local_433.f_73.f_110 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(func_1051());
		Call_Loc(Local_433.f_73.f_110);
	}
	return 1000;
}

bool func_1051()
{
	return (WEAPON::GET_CURRENT_PED_WEAPON(iLocal_1217, &iVar0, 0) && iVar0 != -1569615261);
}

int func_1052(int iParam0)
{
	if (bLocal_1213)
	{
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(iLocal_1217))
		{
			if (PED::_0x06087579E7AA85A9(iParam0, iLocal_1217, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iLocal_1217, 287))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1053(int iParam0)
{
	Stack.Push(Local_433.f_73.f_83.f_6 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_83.f_6);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return func_39(iParam0, 12);
}

void func_1054(int iParam0, int iParam1)
{
	if (!func_1059(Local_1270.f_151, 2000, 0) || func_39(iParam0, 15))
	{
		return;
	}
	bVar0 = false;
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 125))
	{
		bVar0 = true;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 126))
	{
		bVar0 = true;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 84))
	{
		bVar0 = true;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 97))
	{
		bVar0 = true;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 116))
	{
		bVar0 = true;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 94))
	{
		bVar0 = true;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 124))
	{
		bVar0 = true;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 23))
	{
		bVar0 = true;
	}
	if (func_1059(Local_1179[Local_218.f_28.f_1[iParam0].f_14], func_1058(iParam0), 0) && !func_1056(func_1057(iParam0)))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_1055(iParam0))
		{
			func_1037(iParam0, 19);
		}
	}
}

int func_1055(int iParam0)
{
	if (func_1058(iParam0) > 0)
	{
		if (func_11(&(Local_1179[func_1057(iParam0)]), func_1058(iParam0), 0))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1056(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_218.f_28)
	{
		if (Local_218.f_28.f_1[iVar0].f_14 == iParam0)
		{
			if (func_114(iVar0) < 6)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1057(int iParam0)
{
	return Local_218.f_28.f_1[iParam0].f_14;
}

int func_1058(int iParam0)
{
	return Local_218.f_28.f_62[Local_218.f_28.f_1[iParam0].f_14].f_3;
}

int func_1059(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_13(&uParam0))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_1060(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_52(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_51(Local_930[iParam0].f_1[iVar0]) != iParam2)
	{
		return;
	}
	if (Local_930[iParam0].f_1[iVar0].f_8 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_930[iParam0].f_1[iVar0].f_8);
	}
}

void func_1061(int iParam0, int iParam1)
{
	func_1062(iParam0, iParam1);
}

void func_1062(int iParam0, var uParam1)
{
	if (!func_1063(iParam0, iLocal_1219, 24))
	{
		if (Local_218.f_28.f_62[Local_218.f_28.f_1[iParam0].f_14] == Global_1575000)
		{
			unk_0x0F62619393661D6E(uParam1, 1, 1);
			func_1037(iParam0, 24);
		}
	}
}

bool func_1063(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_1436[iParam1].f_7[iParam0]), iParam2);
}

void func_1064(int iParam0, int iParam1)
{
	if (func_39(iParam0, 2))
	{
		if (func_1024() == 8)
		{
			func_1066(0, iParam0, iParam1);
		}
		func_1065();
	}
}

void func_1065()
{
	iLocal_1182++;
}

void func_1066(int iParam0, int iParam1, int iParam2)
{
	UI::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
	switch (iParam0)
	{
		case 0:
			if (func_46(8))
			{
				func_1067(iParam2, uVar0, uVar1, uVar2, 0.5f, 0, 0);
			}
			break;
		
		case 1:
			if (func_46(10))
			{
				func_1067(iParam2, uVar0, uVar1, uVar2, 0.5f, 0, 0);
			}
			break;
		
		case 2:
			if (func_46(9))
			{
				func_1067(iParam2, uVar0, uVar1, uVar2, 0.5f, 0, (Local_218.f_112.f_1[iParam1].f_7.f_1 > 170f && Local_218.f_112.f_1[iParam1].f_7.f_1 < 190f));
			}
			break;
	}
}

void func_1067(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4, float fParam5, bool bParam6)
{
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (!PED::IS_PED_INJURED(iVar11))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar11, 0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(iVar11, 0))))
			{
				iParam0 = PED::GET_VEHICLE_PED_IS_IN(iVar11, 0);
			}
		}
	}
	fVar9 = 0.5f;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GAMEPLAY::GET_MODEL_DIMENSIONS(iVar10, &Var0, &Var3);
	fVar12 = ((Var3.z - Var0.z) / 2f);
	fVar13 = (Var3.z - fVar12);
	if (fVar9 <= (fVar13 + 0.1f))
	{
		fVar9 = ((fVar13 + fParam4) - 0.1f);
	}
	switch (iVar10)
	{
		case -1757836725:
		case -674927303:
		case 931280609:
		case -2022483795:
		case 1074745671:
		case 15219735:
		case -986944621:
			fVar9 = (fVar9 + 0.25f);
			break;
		
		case 2071877360:
			fVar9 = (fVar9 + 0.75f);
			break;
	}
	fVar9 = (fVar9 + fParam5);
	fVar14 = 0f;
	if (bParam6)
	{
		Var6 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) - Vector((((Var3.z - Var0.z) / 2f) + fVar9), 0f, 0f) };
		fVar14 = 180f;
	}
	else
	{
		Var6 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) + Vector((((Var3.z - Var0.z) / 2f) + fVar9), 0f, 0f) };
	}
	if (iVar10 == 1475688080)
	{
		Var6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_HEADING(iParam0), -1.45f, 0.5f, 0f) + Vector((((Var3.z - Var0.z) / 2f) + fVar9), 0f, 0f) };
	}
	GRAPHICS::DRAW_MARKER(2, Var6, 0f, 0f, 0f, 180f, fVar14, 0f, fParam4, fParam4, fParam4, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_1068(int iParam0, int iParam1, bool bParam2)
{
	if (func_1128(iParam0, bParam2))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_930[iParam0].f_59.f_6, 2) && UI::DOES_BLIP_EXIST(Local_930[iParam0].f_59))
		{
			UI::REMOVE_BLIP(&(Local_930[iParam0].f_59));
		}
		func_1123(Local_1270.f_24[iParam0], &(Local_930[iParam0].f_59), func_1127(iParam0), 0, 0, 0, func_1126(iParam0), 1, -1, 0);
	}
	else if ((bLocal_1223 && func_1121(iParam0, bParam2)) && !GAMEPLAY::IS_BIT_SET(Local_930[iParam0].f_59.f_6, 2))
	{
		iVar0 = func_1120(iParam0);
		iVar1 = func_1118(iParam0);
		fVar2 = func_1117(iParam0);
		if (!UI::DOES_BLIP_EXIST(Local_930[iParam0].f_59))
		{
			if (UI::DOES_PED_HAVE_AI_BLIP(iParam1))
			{
				func_1116(&(Local_930[iParam0].f_59));
			}
			Stack.Push(Local_433.f_73.f_83.f_8 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_83.f_8);
			bVar3 = (StackVal && StackVal);
			func_1115(&(Local_930[iParam0].f_59), iParam1, iVar1, iVar0, func_1126(iParam0), fVar2, 0, 0, 0, bVar3);
			UI::SET_BLIP_PRIORITY(Local_930[iParam0].f_59, 11);
		}
		else
		{
			if (func_1114(iParam0))
			{
				UI::SET_BLIP_ROTATION(Local_930[iParam0].f_59, SYSTEM::ROUND(ENTITY::_GET_ENTITY_PHYSICS_HEADING(iParam1)));
			}
			if (func_1053(iParam0))
			{
				UI::SET_BLIP_SHOW_CONE(Local_930[iParam0].f_59, 1);
			}
			if (iVar1 != -1 && iVar1 != UI::GET_BLIP_SPRITE(Local_930[iParam0].f_59))
			{
				UI::SET_BLIP_SPRITE(Local_930[iParam0].f_59, iVar1);
				UI::SET_BLIP_SCALE(Local_930[iParam0].f_59, fVar2);
			}
			if (func_889(iVar0) != UI::GET_BLIP_COLOUR(Local_930[iParam0].f_59))
			{
				func_890(&(Local_930[iParam0].f_59), iVar0);
			}
			if (func_39(iParam0, 13))
			{
				if (func_1113(iParam0, &iVar4, &fVar5, &fVar6))
				{
					func_1069(Local_930[iParam0].f_59, iVar4, fVar5, fVar6);
				}
			}
			Stack.Push(Local_433.f_73.f_83.f_5 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_83.f_5);
			if (StackVal && StackVal)
			{
				if (!UI::IS_BLIP_FLASHING(Local_930[iParam0].f_59))
				{
					func_1019(&(Local_930[iParam0].f_59), 0);
				}
			}
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_930[iParam0].f_59.f_6, 2))
	{
		func_1116(&(Local_930[iParam0].f_59));
	}
	else if (UI::DOES_BLIP_EXIST(Local_930[iParam0].f_59))
	{
		UI::REMOVE_BLIP(&(Local_930[iParam0].f_59));
	}
}

void func_1069(var uParam0, int iParam1, float fParam2, float fParam3)
{
	UI::SET_BLIP_ALPHA(uParam0, func_1070(uParam0, iParam1, fParam2, fParam3));
}

int func_1070(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (!func_1112(Global_2439138) && !func_643())
	{
		fVar0 = func_1072(uParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_1071();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_1071()
{
	if (func_357(Global_2439138, 1))
	{
		return 50;
	}
	return 0;
}

float func_1072(var uParam0, float fParam1, float fParam2)
{
	iVar0 = Global_2439138;
	Var2 = { func_1111(uParam0) };
	Var2.z = 0f;
	if (Global_1319111 || func_1108())
	{
		if (func_1107(iVar0))
		{
			Var5 = { func_1075(iVar0) };
		}
		else if (func_1074(iVar0))
		{
			Var5 = { func_1073(iVar0) };
		}
	}
	else
	{
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), 0) };
	}
	Var5.z = 0f;
	fVar1 = SYSTEM::VMAG(Var5 - Var2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_1073(int iParam0)
{
	if (func_1074(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_1074(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_1075(int iParam0)
{
	if (iParam0 == func_68())
	{
	}
	if (func_321(iParam0))
	{
		iVar0 = func_1106(iParam0);
		if (iVar0 != func_68())
		{
			if (!func_1105(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2439138.f_661[iVar0][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2439138.f_661[iVar0][1], 0);
				}
				else
				{
					return Global_2425662[func_1106(iParam0)].f_310.f_9;
				}
			}
			else
			{
				iVar1 = func_1101(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1676377.f_488[iVar1];
				}
			}
		}
	}
	else if (func_319(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2537071.f_305))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2537071.f_305, 0);
		}
	}
	else if (func_1003(iParam0) && !func_1100(iParam0))
	{
		iVar2 = Global_2425662[iParam0].f_310.f_8;
		if (iVar2 != func_68())
		{
			iVar3 = func_1101(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1676377.f_488[iVar3];
			}
		}
	}
	else if (func_1001(iParam0) && !func_1099(iParam0))
	{
		if (func_1107(iParam0) && func_1098())
		{
			return Global_1676377.f_488[Global_2425662[iParam0].f_310.f_5];
		}
		iVar4 = Global_2425662[iParam0].f_310.f_8;
		if (iVar4 != func_68())
		{
			if (func_1097(iVar4))
			{
				iVar5 = func_1094(iVar4);
				if (iVar5 != -1)
				{
					return Global_1676377.f_488[iVar5];
				}
			}
		}
	}
	else if (func_322(iParam0))
	{
		iVar6 = func_1093(iParam0);
		if (iVar6 != func_68())
		{
			if (!func_1092(iVar6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2439138.f_758[iVar6]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2439138.f_758[iVar6], 0);
				}
				else
				{
					return Global_2425662[func_1093(iParam0)].f_310.f_16;
				}
			}
			else
			{
				iVar7 = func_1094(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1676377.f_488[iVar7];
				}
			}
		}
	}
	else if (func_320(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2537071.f_307))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2537071.f_307, 0);
		}
	}
	else if (func_1000(iParam0) && !func_1091(iParam0))
	{
		iVar8 = Global_2425662[iParam0].f_310.f_8;
		if (iVar8 != func_68())
		{
			if (func_1090(iVar8))
			{
				iVar9 = func_1086(iVar8);
				if (iVar9 != -1)
				{
					return func_1085(iVar9);
				}
			}
		}
	}
	else if (func_999(iParam0) && !func_1084(iParam0))
	{
		iVar10 = Global_2425662[iParam0].f_310.f_8;
		if (iVar10 != func_68())
		{
			if (func_1083(iVar10))
			{
				iVar11 = func_1079(iVar10);
				if (iVar11 != -1)
				{
					return Global_1676377.f_488[iVar11];
				}
			}
		}
	}
	else if (func_328(iParam0, 0))
	{
		iVar12 = func_1078(iParam0);
		if (iVar12 != func_68())
		{
			if (!func_1077(iVar12))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2439138.f_791[iVar12]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2439138.f_791[iVar12], 0);
				}
				else
				{
					return Global_1628237[func_1078(iParam0)].f_600;
				}
			}
			else
			{
				iVar13 = func_1079(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1676377.f_488[iVar13];
				}
			}
		}
	}
	else if (func_998(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	if (func_1000(iParam0))
	{
		return func_1085(Global_2425662[iParam0].f_310.f_5);
	}
	if (func_1076(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1676377.f_488[Global_2425662[iParam0].f_310.f_5];
}

int func_1076(int iParam0)
{
	if ((func_997(iParam0) || func_995(iParam0)) || func_996(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1077(int iParam0)
{
	if (iParam0 != func_68())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310.f_3, 4);
	}
	return 0;
}

int func_1078(int iParam0)
{
	if (iParam0 == func_68())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_1079(int iParam0)
{
	if (iParam0 != func_68())
	{
		iVar0 = func_1082(iParam0);
		if (iVar0 != 0)
		{
			return func_1080(iVar0);
		}
	}
	return -1;
}

int func_1080(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_323(iVar0) == 11)
		{
			if (func_1081(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1081(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_1082(int iParam0)
{
	if (iParam0 != func_68())
	{
		return Global_1590535[iParam0].f_274.f_281;
	}
	return 0;
}

int func_1083(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (Global_1590535[iParam0].f_274.f_281 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1084(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_999(iParam0) && Global_2425662[iParam0].f_310.f_8 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1085(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 103:
			return 331.9f, -974.9f, 30f;
		
		case 104:
			return -146f, -1270f, 28.3088f;
		
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 107:
			return -668f, -2431.5f, 12.9444f;
		
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 109:
			return 366.6f, 237.6f, 104.9f;
		
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_1676377.f_488[iParam0];
}

int func_1086(int iParam0)
{
	if (iParam0 != func_68())
	{
		iVar0 = func_1089(iParam0);
		if (iVar0 != 0)
		{
			return func_1087(iVar0);
		}
	}
	return -1;
}

int func_1087(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_323(iVar0) == 11)
		{
			if (func_1088(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1088(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_1089(int iParam0)
{
	if (iParam0 != func_68())
	{
		return Global_1590535[iParam0].f_274.f_322;
	}
	return 0;
}

int func_1090(int iParam0)
{
	if (iParam0 != func_68())
	{
		return Global_1590535[iParam0].f_274.f_322 != 0;
	}
	return 0;
}

int func_1091(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_1000(iParam0) && Global_2425662[iParam0].f_310.f_8 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1092(int iParam0)
{
	if (iParam0 != func_68())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310.f_2, 6);
	}
	return 0;
}

int func_1093(int iParam0)
{
	if (iParam0 == func_68())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_1094(int iParam0)
{
	if (iParam0 == func_68())
	{
		return -1;
	}
	iVar0 = func_1096(iParam0);
	if (!iVar0 == 0)
	{
		return func_1095(iVar0);
	}
	return -1;
}

int func_1095(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_323(iVar0) == 9)
		{
			if (func_343(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1096(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_271;
}

int func_1097(int iParam0)
{
	if (iParam0 != func_68())
	{
		return Global_1590535[iParam0].f_274.f_271 != 0;
	}
	return 0;
}

int func_1098()
{
	if (GAMEPLAY::IS_BIT_SET(Global_1676377.f_2, 13) || Global_1676377.f_3015)
	{
		return 1;
	}
	return 0;
}

int func_1099(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	if (func_1001(iParam0) && Global_2425662[iParam0].f_310.f_8 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_1100(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	if (func_1003(iParam0) && Global_2425662[iParam0].f_310.f_8 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_1101(int iParam0)
{
	if (iParam0 == func_68())
	{
		return -1;
	}
	iVar0 = func_1104(iParam0);
	if (!iVar0 == 0)
	{
		return func_1102(iVar0);
	}
	return -1;
}

int func_1102(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_1103(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1103(int iParam0)
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

int func_1104(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_183[5];
}

int func_1105(int iParam0)
{
	if (iParam0 != func_68())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310, 6);
	}
	return 0;
}

int func_1106(int iParam0)
{
	if (iParam0 == func_68())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_1107(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_28(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == PLAYER::PLAYER_ID()) && func_28(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_1108()
{
	if ((func_668() || func_1110()) || func_1109(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_1109(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1627020[iParam0].f_29, 20);
}

bool func_1110()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687686, 1);
}

Vector3 func_1111(var uParam0)
{
	switch (UI::GET_BLIP_INFO_ID_TYPE(uParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = UI::GET_BLIP_INFO_ID_ENTITY_INDEX(uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return ENTITY::GET_ENTITY_COORDS(iVar0, 0);
			}
			break;
	}
	return UI::GET_BLIP_COORDS(uParam0);
}

int func_1112(int iParam0)
{
	if ((GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_68.f_2, 9) && !(GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_68.f_2, 6) && GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_68.f_2, 7))) || ((GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_68.f_2, 6) && !GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_68.f_2, 7)) && !GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_68.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

int func_1113(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (Local_433.f_73.f_83.f_10 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(uParam3);
		Call_Loc(Local_433.f_73.f_83.f_10);
		return StackVal;
	}
	*uParam1 = 100;
	*uParam2 = 5000f;
	*uParam3 = 400f;
	return 1;
}

int func_1114(int iParam0)
{
	return 0;
}

void func_1115(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9)
{
	*uParam0 = UI::ADD_BLIP_FOR_ENTITY(iParam1);
	if (iParam2 != -1)
	{
		UI::SET_BLIP_SPRITE(*uParam0, iParam2);
	}
	func_890(uParam0, iParam3);
	UI::SET_BLIP_ROUTE(*uParam0, iParam6);
	UI::SET_BLIP_AS_SHORT_RANGE(*uParam0, iParam7);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam4))
	{
		UI::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sParam4);
	}
	if (bParam9)
	{
		UI::_0x75A16C3DA34F1245(*uParam0, 1);
		unk_0x2C9F302398E13141(*uParam0, 0);
	}
	if (bParam8)
	{
		func_1019(uParam0, 0);
	}
	if (fParam5 != 1f)
	{
		UI::SET_BLIP_SCALE(*uParam0, fParam5);
	}
}

void func_1116(var uParam0)
{
	if (UI::DOES_BLIP_EXIST(*uParam0))
	{
		UI::REMOVE_BLIP(uParam0);
		bVar0 = true;
	}
	if (UI::DOES_BLIP_EXIST(uParam0->f_1))
	{
		UI::REMOVE_BLIP(&(uParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7, 0))
		{
			if (UI::DOES_PED_HAVE_AI_BLIP(uParam0->f_7))
			{
				UI::_0xD30C50DF888D58B5(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

float func_1117(int iParam0)
{
	if (Local_433.f_73.f_83.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_83.f_3);
		return StackVal;
	}
	switch (func_1024())
	{
		case 8:
			if (func_39(iParam0, 2))
			{
				return 1f;
			}
			break;
	}
	return 1f;
}

int func_1118(int iParam0)
{
	if (Local_433.f_73.f_83.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_83.f_1);
		return StackVal;
	}
	switch (func_1024())
	{
		case 8:
			if (func_39(iParam0, 2))
			{
				return 432;
			}
			break;
		
		case 33:
		case 34:
		case 35:
			if (func_1119(iParam0) != -1)
			{
				return 280;
			}
			break;
	}
	return -1;
}

int func_1119(int iParam0)
{
	return -1;
}

int func_1120(int iParam0)
{
	if (Local_433.f_73.f_83.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_83.f_2);
		return StackVal;
	}
	switch (func_1024())
	{
		case 8:
			if (func_39(iParam0, 2))
			{
				return 6;
			}
			break;
		
		case 33:
		case 34:
		case 35:
			if (func_1119(iParam0) != -1)
			{
				return 9;
			}
			break;
	}
	return 6;
}

int func_1121(int iParam0, bool bParam1)
{
	Stack.Push(Local_433.f_73.f_83 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_83);
	if (StackVal && StackVal)
	{
		return 1;
	}
	if (!bParam1)
	{
		switch (func_1024())
		{
			case 8:
				if (func_39(iParam0, 2))
				{
					return 1;
				}
				break;
			
			case 33:
			case 34:
			case 35:
				if (func_1119(iParam0) == func_1122())
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_1122()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (Local_1164[iVar0].f_4 == iLocal_1216 || func_691(iVar0, iLocal_1219, 14))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1123(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, var uParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		if (func_1125())
		{
			Global_2439138 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_1124(NETWORK::NET_TO_PED(uParam0), uParam1, 1, Global_2439138, iParam4, iParam5, fParam2, uParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_1124(NETWORK::NET_TO_PED(uParam0), uParam1, -1, Global_2439138, iParam4, iParam5, fParam2, uParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (UI::DOES_BLIP_EXIST(*uParam1))
	{
		func_1116(uParam1);
	}
}

int func_1124(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!UI::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			if (iParam8 == -1)
			{
				UI::_0xD30C50DF888D58B5(iParam0, 1);
			}
			else
			{
				unk_0xB13DCB4C6FAAD238(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			UI::_0xE52B8E7F85D39A08(iParam0, iParam2);
			UI::_0x97C65887D4B37FA9(iParam0, fParam6);
			if (UI::DOES_BLIP_EXIST(*uParam1))
			{
				UI::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFCFACD0DB9D7A57D(iParam0, iParam9);
		}
		UI::_0x0C4BBF625CA98C4E(iParam0, uParam4);
		UI::HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(iParam0, uParam5);
		*uParam1 = UI::_0x7CD934010E115C2C(iParam0);
		if (!iParam9 == -1)
		{
			if (UI::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					UI::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam7))
				{
					UI::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					UI::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				UI::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (UI::DOES_BLIP_EXIST(*uParam1))
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = UI::_0x56176892826A4FE8(iParam0);
			if (!GAMEPLAY::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (UI::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						UI::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						UI::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						UI::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					UI::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					GAMEPLAY::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!UI::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (UI::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_1125()
{
	return Global_1312854;
}

char* func_1126(int iParam0)
{
	if (Local_433.f_73.f_83.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_83.f_7);
		return StackVal;
	}
	if (func_39(iParam0, 9))
	{
		return "PB_COP";
	}
	if (func_39(iParam0, 3))
	{
		return "PB_CIV";
	}
	switch (func_1024())
	{
		case 8:
			if (func_39(iParam0, 2))
			{
				return "PB_TARGET";
			}
			break;
	}
	return "PB_ENEMY";
}

float func_1127(int iParam0)
{
	if (func_39(iParam0, 14))
	{
		return 300f;
	}
	return -1f;
}

int func_1128(int iParam0, bool bParam1)
{
	if (!func_369(iLocal_1219, 2) && func_1129())
	{
		return 0;
	}
	if (func_369(iLocal_1219, 2) && func_1112(iLocal_1216))
	{
		return 0;
	}
	if (func_39(iParam0, 3) || func_1063(iParam0, iLocal_1219, 24))
	{
		return 0;
	}
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (func_1121(iParam0, bParam1))
	{
		return 0;
	}
	return 1;
}

bool func_1129()
{
	return Global_1676377.f_460 != -1;
}

void func_1130(int iParam0, int iParam1)
{
	if (func_122(&(Local_930[iParam0].f_57), iParam1))
	{
	}
}

void func_1131(int iParam0, int iParam1)
{
	if (func_15(&(Local_930[iParam0].f_57), iParam1))
	{
	}
}

void func_1132()
{
	iVar3 = 0;
	while (iVar3 < Local_218.f_112)
	{
		bVar1 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_98[iVar3]);
		if (bVar1)
		{
			iVar0 = NETWORK::NET_TO_VEH(Local_1270.f_98[iVar3]);
			bVar2 = ENTITY::IS_ENTITY_DEAD(iVar0, 0);
			func_1146(iVar3, iVar0);
			func_1140(iVar3, iVar0, bVar2);
			switch (func_129(iVar3))
			{
				case 2:
					func_1136(iVar3, iVar0);
					if (!bVar2)
					{
						func_1135(iVar3, iVar0);
					}
					break;
				
				case 3:
					if (func_1134(iVar3))
					{
						if (func_118(Local_1270.f_98[iVar3]))
						{
							func_1032(&(Local_1270.f_98[iVar3]));
						}
					}
					else if (func_1133(iVar3))
					{
						if (func_118(Local_1270.f_98[iVar3]))
						{
							func_108(&(Local_1270.f_98[iVar3]));
						}
					}
					break;
				}
		}
		iVar3++;
	}
}

int func_1133(int iParam0)
{
	return 0;
}

int func_1134(int iParam0)
{
	if (func_119(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_1135(int iParam0, int iParam1)
{
	if (func_124(iParam0, 0))
	{
		if (func_1024() == 8)
		{
			func_1066(2, iParam0, iParam1);
		}
		func_1065();
	}
}

void func_1136(int iParam0, int iParam1)
{
	if (!func_1138(iParam0))
	{
		return;
	}
	if (func_118(Local_1270.f_98[iParam0]))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
		func_1137(iParam0, 10);
	}
}

void func_1137(int iParam0, int iParam1)
{
	if (func_15(&(Local_1436[iLocal_1219].f_14[iParam0]), iParam1))
	{
	}
}

int func_1138(int iParam0)
{
	if (func_1139(iParam0, iLocal_1219, 10))
	{
		return 0;
	}
	Stack.Push(Local_433.f_216.f_15 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_216.f_15);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

bool func_1139(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_1436[iParam1].f_14[iParam0]), iParam2);
}

void func_1140(int iParam0, int iParam1, bool bParam2)
{
	if (bLocal_1223 && func_1145(iParam0, bParam2))
	{
		iVar0 = func_1144(iParam0);
		iVar1 = func_1143(iParam0);
		fVar2 = func_1142(iParam0);
		if (!UI::DOES_BLIP_EXIST(uLocal_1177[iParam0]))
		{
			Stack.Push(Local_433.f_216.f_8 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_216.f_8);
			bVar3 = (StackVal && StackVal);
			func_1115(&(uLocal_1177[iParam0]), iParam1, iVar1, iVar0, func_1141(iParam0), fVar2, 0, 0, 0, bVar3);
			UI::SET_BLIP_PRIORITY(uLocal_1177[iParam0], 12);
		}
		else
		{
			if (iVar1 != UI::GET_BLIP_SPRITE(uLocal_1177[iParam0]))
			{
				UI::SET_BLIP_SPRITE(uLocal_1177[iParam0], iVar1);
				UI::SET_BLIP_SCALE(uLocal_1177[iParam0], fVar2);
			}
			if (func_889(iVar0) != UI::GET_BLIP_COLOUR(uLocal_1177[iParam0]))
			{
				func_890(&(uLocal_1177[iParam0]), iVar0);
			}
			if (func_124(iParam0, 23))
			{
				func_1069(uLocal_1177[iParam0], 100, 5000f, 1137180672);
			}
			Stack.Push(Local_433.f_216.f_5 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_216.f_5);
			if (StackVal && StackVal)
			{
				if (!UI::IS_BLIP_FLASHING(uLocal_1177[iParam0]))
				{
					func_1019(&(uLocal_1177[iParam0]), 0);
				}
			}
		}
	}
	else if (UI::DOES_BLIP_EXIST(uLocal_1177[iParam0]))
	{
		UI::REMOVE_BLIP(&(uLocal_1177[iParam0]));
	}
}

char* func_1141(int iParam0)
{
	if (Local_433.f_216.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_216.f_7);
		return StackVal;
	}
	if (func_1024() == 8 && func_124(iParam0, 0))
	{
		return "PB_TARGET";
	}
	return "BLIP_OBJ";
}

float func_1142(int iParam0)
{
	if (Local_433.f_216.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_216.f_3);
		return StackVal;
	}
	if (func_1024() == 8 && func_124(iParam0, 0))
	{
		return 1f;
	}
	return 1f;
}

int func_1143(int iParam0)
{
	if (Local_433.f_216.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_216.f_1);
		return StackVal;
	}
	if (func_1024() == 8 && func_124(iParam0, 0))
	{
		return 432;
	}
	return 32;
}

int func_1144(int iParam0)
{
	if (Local_433.f_216.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_83.f_2);
		return StackVal;
	}
	if (func_1024() == 8 && func_124(iParam0, 0))
	{
		return 6;
	}
	return 6;
}

int func_1145(int iParam0, bool bParam1)
{
	Stack.Push(Local_433.f_216 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_216);
	if (StackVal && StackVal)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_1024() == 8 && func_124(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_1146(int iParam0, int iParam1)
{
	if (!func_1147(iParam0))
	{
		return;
	}
	if (func_118(Local_1270.f_98[iParam0]))
	{
		ENTITY::SET_ENTITY_PROOFS(iParam1, false, false, false, false, false, 0, 0, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam1, 1);
		ENTITY::SET_ENTITY_HEALTH(iParam1, 0, 0);
		FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iParam1, 1), 6, 1f, 1, 0, 1065353216, 0);
		func_1137(iParam0, 11);
	}
}

int func_1147(int iParam0)
{
	if (func_1139(iParam0, iLocal_1219, 11) || func_1148(iParam0, 9))
	{
		return 0;
	}
	Stack.Push(Local_433.f_216.f_16 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_216.f_16);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

bool func_1148(int iParam0, int iParam1)
{
	return func_4(&(Local_1270.f_98[iParam0].f_2), iParam1);
}

void func_1149()
{
	iVar1 = -1;
	fLocal_1240 = 99999f;
	iVar0 = 0;
	while (iVar0 < Local_218.f_95)
	{
		func_1192(iVar0);
		bVar5 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[iVar0]);
		if (bVar5)
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_1270.f_91[iVar0]);
			bVar3 = func_105(Local_1270.f_91[iVar0]);
			bVar4 = func_1191(iLocal_1217, iVar2);
			if (bVar3)
			{
				iVar1 = func_374(iVar0, 2);
			}
			if (bVar4)
			{
				func_1190(iVar0, 4);
			}
			if (Local_433.f_188.f_24 != 0)
			{
				Stack.Push(iVar0);
				Stack.Push(iVar2);
				Stack.Push(bVar3);
				Stack.Push(bVar4);
				Stack.Push(iVar1);
				Call_Loc(Local_433.f_188.f_24);
			}
		}
		else
		{
			iVar2 = -1;
			bVar3 = false;
			bVar4 = false;
			iVar1 = -1;
		}
		func_1179(iVar0, iVar2, bVar3);
		if (bVar5)
		{
			func_1178(iVar0, iVar2);
			func_1176(iVar0, iVar2);
			func_1175(iVar0, iVar2);
			switch (func_373(iVar0))
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 4:
					if (bVar5)
					{
						func_1174(iVar0, iVar2);
						func_1172(iVar0, iVar2);
						func_1171(iVar0, iVar2, iVar1);
						func_1170(iVar0, iVar2);
						func_1168(iVar0, iVar2, iVar1, bVar4);
						if (bVar3)
						{
							func_1167(iVar0, iVar2);
							func_1166(iVar0, iVar2);
							func_1159(iVar0, iVar2);
							func_1157(iVar0, iVar2);
							func_1155(iVar0, iVar2);
							func_1154(iVar0, iVar2);
							func_1153(iVar0, iVar2);
						}
					}
					break;
				
				case 5:
					break;
				
				case 3:
					func_1150(iVar0, iVar2);
					break;
				
				case 6:
					break;
				
				case 7:
					break;
				}
		}
		iVar0++;
	}
	fLocal_1241 = fLocal_1240;
	fLocal_1240 = fLocal_1241;
}

void func_1150(int iParam0, int iParam1)
{
	if (func_118(Local_1270.f_91[iParam0]))
	{
		Var4.f_4 = 1125515264;
		Var4.f_5 = 1;
		Var4.f_6 = 1;
		Var4.f_8 = 1082130432;
		Var4.f_9 = 1176255488;
		Var4.f_10 = 1;
		Var4.f_13 = 1;
		Var4.f_15 = 2;
		Var4.f_22 = 2;
		Var4.f_25 = 1;
		Var4.f_26 = 1;
		Var4.f_29 = 1123024896;
		Var4 = 20f;
		Var4.f_4 = 100f;
		Var4.f_1 = 1;
		Var4.f_12 = 1;
		Var4.f_13 = 0;
		Var4.f_5 = 0;
		if (func_242(ENTITY::GET_ENTITY_COORDS(iParam1, 1), 0f, 0f, 0f, ENTITY::GET_ENTITY_MODEL(iParam1), 1, &Var0, &uVar3, &Var4))
		{
			NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, 1, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Var0, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iParam1, uVar3);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam1, 1084227584);
			func_1151(iParam0, 1, Local_1270.f_144);
		}
	}
}

void func_1151(int iParam0, int iParam1, var uParam2)
{
	Var0 = 982668033;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_4 = iParam1;
	Var0.f_3 = uParam2;
	iVar5 = func_1152(1);
	if (iVar5 != 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 5, iVar5);
	}
}

var func_1152(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_28(iVar2, 0, 0))
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

void func_1153(int iParam0, int iParam1)
{
	if (!func_519(iParam0, iLocal_1219, 15))
	{
		if (func_135(iParam0, 34))
		{
			PED::_0x952F06BEECD775CC(iLocal_1217, iParam1, 0, 1);
		}
		func_1190(iParam0, 15);
	}
}

void func_1154(int iParam0, int iParam1)
{
	if (Local_433.f_188.f_27 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_433.f_188.f_27);
	}
}

void func_1155(int iParam0, int iParam1)
{
	if (func_135(iParam0, 10) && func_1024() == 8)
	{
		func_1066(1, iParam0, iParam1);
	}
	else if (func_135(iParam0, 7) && func_46(17))
	{
		if (func_368(iParam0, 17))
		{
			func_1156(iParam1);
		}
	}
}

void func_1156(int iParam0)
{
	UI::GET_HUD_COLOUR(18, &uVar0, &uVar1, &uVar2, &uVar3);
	func_1067(iParam0, uVar0, uVar1, uVar2, 0.5f, 0, 0);
}

void func_1157(int iParam0, int iParam1)
{
	Stack.Push(!func_135(iParam0, 17));
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_433.f_188.f_16);
	if (StackVal || !StackVal)
	{
		return;
	}
	if (func_118(Local_1270.f_91[iParam0]))
	{
		func_1158(iParam0, iParam1);
	}
}

void func_1158(int iParam0, int iParam1)
{
	if (func_135(iParam0, 18))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam1, 7);
	}
	else
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 1);
	}
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iParam1, iLocal_1216, 0);
	VEHICLE::_0x9737A37136F07E75(iParam1, 1);
	if (!func_135(iParam0, 20))
	{
		VEHICLE::_0x2B6747FAA9DB9D6B(iParam1, false);
	}
}

void func_1159(int iParam0, int iParam1)
{
	if (!func_135(iParam0, 2) || !func_1162(iParam0, iParam1))
	{
		return;
	}
	if (func_118(Local_1270.f_91[iParam0]))
	{
		Var4.f_4 = 1125515264;
		Var4.f_5 = 1;
		Var4.f_6 = 1;
		Var4.f_8 = 1082130432;
		Var4.f_9 = 1176255488;
		Var4.f_10 = 1;
		Var4.f_13 = 1;
		Var4.f_15 = 2;
		Var4.f_22 = 2;
		Var4.f_25 = 1;
		Var4.f_26 = 1;
		Var4.f_29 = 1123024896;
		Var4 = func_1161();
		Var4.f_4 = func_1160();
		Var4.f_1 = 1;
		Var4.f_12 = 1;
		Var4.f_13 = 0;
		Var4.f_5 = 1;
		if (func_242(ENTITY::GET_ENTITY_COORDS(iParam1, 1), 0f, 0f, 0f, ENTITY::GET_ENTITY_MODEL(iParam1), 1, &Var0, &uVar3, &Var4))
		{
			NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, 1, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Var0, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iParam1, uVar3);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam1, 1084227584);
			if (Local_433.f_188.f_19 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_188.f_19);
			}
		}
	}
}

float func_1160()
{
	return 150f;
}

float func_1161()
{
	return 20f;
}

int func_1162(int iParam0, var uParam1)
{
	Stack.Push(Local_433.f_188.f_17 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_188.f_17);
	if (StackVal && StackVal)
	{
		return 1;
	}
	if (func_1163(uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_1163(var uParam0)
{
	return (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0, 0, func_1165()) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0, 1, func_1165())) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0, 3, func_1164())) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0, 2, func_1165()));
}

int func_1164()
{
	return 15000;
}

int func_1165()
{
	return 10000;
}

void func_1166(int iParam0, int iParam1)
{
	Stack.Push(Local_433.f_188.f_15 == 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_188.f_15);
	if (StackVal || !StackVal)
	{
		return;
	}
	fVar0 = SYSTEM::VDIST(Local_1220, ENTITY::GET_ENTITY_COORDS(iParam1, 0));
	if (fVar0 < fLocal_1240)
	{
		fLocal_1240 = fVar0;
		iLocal_1234 = iLocal_1234;
		iLocal_1234 = iParam0;
	}
}

void func_1167(int iParam0, int iParam1)
{
	if (func_135(iParam0, 10))
	{
		func_1065();
	}
}

void func_1168(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_1169(iParam0, iParam2, bParam3))
	{
		return;
	}
	if (func_118(Local_1270.f_91[iParam0]))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
		func_1190(iParam0, 1);
	}
}

int func_1169(int iParam0, int iParam1, var uParam2)
{
	if (func_519(iParam0, iLocal_1219, 1))
	{
		return 0;
	}
	if ((func_135(iParam0, 7) && uParam2) || ((iParam1 != -1 && func_6(iParam1, 7)) && func_6(iParam1, 1)))
	{
		return 1;
	}
	Stack.Push(Local_433.f_188.f_14 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_188.f_14);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

void func_1170(int iParam0, int iParam1)
{
	if ((!func_135(iParam0, 19) || func_368(iParam0, 13)) || func_519(iParam0, iLocal_1219, 11))
	{
		return;
	}
	if (VEHICLE::_IS_CARGOBOB_HOOK_ACTIVE(iParam1))
	{
		if (func_118(Local_1270.f_91[iParam0]))
		{
			VEHICLE::_SET_CARGOBOB_HOOK_POSITION(iParam1, 5f, 5f, 0);
			func_1190(iParam0, 11);
		}
	}
}

void func_1171(int iParam0, int iParam1, int iParam2)
{
	if ((!func_135(iParam0, 14) && !func_135(iParam0, 15)) || func_408() == 0)
	{
		return;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (func_135(iParam0, 7))
		{
			if ((iParam2 != -1 && !func_6(iParam2, 4)) && !func_6(iParam2, 3))
			{
				bVar0 = true;
			}
		}
		else
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (func_118(Local_1270.f_91[iParam0]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
				if (func_135(iParam0, 14))
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam1, -1000f);
				}
				if (func_135(iParam0, 15))
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_218.f_95.f_1[iParam0].f_3))
					{
						NETWORK::NETWORK_EXPLODE_VEHICLE(iParam1, 1, 0, -1);
					}
					else
					{
						unk_0x2A5E0621DD815A9A(iParam1, 1, 0, 0);
					}
				}
			}
		}
	}
}

void func_1172(int iParam0, int iParam1)
{
	if ((!func_135(iParam0, 8) || func_368(iParam0, 3)) || func_519(iParam0, iLocal_1219, 3))
	{
		return;
	}
	iVar0 = -1;
	if (iVar0 == -1)
	{
		return;
	}
	uVar1 = Local_1270.f_91[iVar0];
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar1) && func_105(uVar1))
	{
		iVar2 = NETWORK::NET_TO_VEH(uVar1);
		if (func_1173(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iParam1))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iParam1, iVar2, 1f);
			}
			else
			{
				func_1190(iParam0, 3);
			}
		}
		else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iParam1))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam1, iVar2, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar2, "chassis_dummy"), 0f, -5.5f, 0.7f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		}
		else
		{
			func_1190(iParam0, 3);
		}
	}
}

int func_1173(int iParam0)
{
	if ((((iParam0 == 1518533038 || iParam0 == 387748548) || iParam0 == -2137348917) || iParam0 == -1649536104) || iParam0 == 177270108)
	{
		return 1;
	}
	return 0;
}

void func_1174(int iParam0, int iParam1)
{
	if (iParam0 != Local_218.f_95.f_16 || func_841() != iLocal_1216)
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	fVar3 = 500f;
	if (SYSTEM::VDIST2(Var0, Local_1243) > (550f * 550f))
	{
		if (iLocal_1233 != -1)
		{
			GAMEPLAY::_0xE6869BECDD8F2403(iLocal_1233, 0);
		}
		Local_1243 = { Var0 };
		iLocal_1233 = GAMEPLAY::_0x32C7A7E8C43A1F80(Local_1243, fVar3, 1f, 0.02f, 0, 1);
	}
}

void func_1175(int iParam0, int iParam1)
{
	if (bLocal_1213 && Local_1196.f_10 <= 10f)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1217, 0))
		{
			if (iParam1 == PED::GET_VEHICLE_PED_IS_IN(iLocal_1217, 0) && iLocal_1232 != iParam0)
			{
				iLocal_1232 = iParam0;
			}
		}
	}
	else if ((iLocal_1232 != -1 && !Global_1681961.f_4551) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		iLocal_1232 = -1;
	}
	if (iParam0 == iLocal_1232)
	{
		if (Global_1681961.f_4551 && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			func_1151(iParam0, 0, Local_1270.f_144);
			iLocal_1232 = -1;
		}
	}
}

void func_1176(int iParam0, int iParam1)
{
	if (!func_135(iParam0, 16))
	{
		return;
	}
	if (!func_368(iParam0, 6) && !func_519(iParam0, iLocal_1219, 5))
	{
		if (Local_433.f_188.f_13 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_188.f_13);
			fVar0 = StackVal;
			Stack.Push(fVar0 != -1f);
			Stack.Push(iParam1);
			Stack.Push(fVar0);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_188.f_12);
			if (StackVal && func_1177(StackVal, StackVal, StackVal))
			{
				func_1190(iParam0, 5);
			}
		}
	}
}

int func_1177(int iParam0, float fParam1, bool bParam2)
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 0), Local_1220) <= (fParam1 * fParam1))
	{
		if (bParam2)
		{
			return ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_1217, iParam0, 287);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_1178(int iParam0, int iParam1)
{
	if (!func_135(iParam0, 13))
	{
		return;
	}
	if (!func_368(iParam0, 2))
	{
		if (!func_368(iParam0, 0) && !func_519(iParam0, iLocal_1219, 0))
		{
			if (func_118(Local_1270.f_91[iParam0]))
			{
				NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(iParam1, false);
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_1270.f_91[iParam0], 1);
				func_1190(iParam0, 0);
			}
		}
	}
}

void func_1179(int iParam0, int iParam1, bool bParam2)
{
	if (bLocal_1223 && func_1186(iParam0, bParam2))
	{
		iVar0 = func_1185(iParam0);
		iVar1 = func_1184(iParam0);
		fVar2 = func_1183(iParam0);
		if (!UI::DOES_BLIP_EXIST(uLocal_1162[iParam0]))
		{
			Stack.Push(Local_433.f_188.f_8 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_188.f_8);
			bVar3 = (StackVal && StackVal);
			iVar4 = func_1182(iParam0);
			func_1115(&(uLocal_1162[iParam0]), iParam1, iVar1, iVar0, func_1181(iParam0), fVar2, 0, iVar4, 0, bVar3);
		}
		else
		{
			if (func_1180(iParam0))
			{
				UI::SET_BLIP_ROTATION(uLocal_1162[iParam0], SYSTEM::ROUND(ENTITY::_GET_ENTITY_PHYSICS_HEADING(iParam1)));
			}
			if (iVar1 != UI::GET_BLIP_SPRITE(uLocal_1162[iParam0]))
			{
				UI::SET_BLIP_SPRITE(uLocal_1162[iParam0], iVar1);
				UI::SET_BLIP_SCALE(uLocal_1162[iParam0], fVar2);
			}
			if (func_889(iVar0) != UI::GET_BLIP_COLOUR(uLocal_1162[iParam0]))
			{
				func_890(&(uLocal_1162[iParam0]), iVar0);
			}
			if (func_135(iParam0, 12))
			{
				func_1069(uLocal_1162[iParam0], 100, 5000f, 1137180672);
			}
			Stack.Push(Local_433.f_188.f_5 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_188.f_5);
			if (StackVal && StackVal)
			{
				if (!UI::IS_BLIP_FLASHING(uLocal_1162[iParam0]))
				{
					func_1019(&(uLocal_1162[iParam0]), 0);
				}
			}
		}
	}
	else if (UI::DOES_BLIP_EXIST(uLocal_1162[iParam0]))
	{
		UI::REMOVE_BLIP(&(uLocal_1162[iParam0]));
	}
}

int func_1180(int iParam0)
{
	switch (func_1184(iParam0))
	{
		case 460:
			return 1;
		
		default:
	}
	return 0;
}

char* func_1181(int iParam0)
{
	if (Local_433.f_188.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_188.f_7);
		return StackVal;
	}
	if (func_1024() == 8 && func_135(iParam0, 10))
	{
		return "PB_TARGET";
	}
	return "BLIP_VEH";
}

int func_1182(int iParam0)
{
	if (Local_433.f_188.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_188.f_9);
		return StackVal;
	}
	return 0;
}

float func_1183(int iParam0)
{
	if (Local_433.f_188.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_188.f_3);
		return StackVal;
	}
	if (func_1024() == 8 && func_135(iParam0, 10))
	{
		return 1f;
	}
	return 1f;
}

int func_1184(int iParam0)
{
	if (Local_433.f_188.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_188.f_1);
		return StackVal;
	}
	switch (func_1024())
	{
		case 8:
			if (func_135(iParam0, 10))
			{
				return 432;
			}
			break;
	}
	return 225;
}

int func_1185(int iParam0)
{
	if (Local_433.f_188.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_188.f_2);
		return StackVal;
	}
	if (func_1024() == 8 && func_135(iParam0, 10))
	{
		return 6;
	}
	return 9;
}

int func_1186(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Stack.Push(Local_433.f_188 != 0);
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_188);
		if (StackVal && StackVal)
		{
			return 1;
		}
		switch (func_1024())
		{
			case 8:
				if (func_135(iParam0, 10))
				{
					return 1;
				}
				break;
			
			case 32:
				if ((func_1189(func_374(iParam0, 2)) != -1 && !func_1188(func_374(iParam0, 2))) && !func_1187(func_374(iParam0, 2), 1))
				{
					return 1;
				}
				break;
			
			case 36:
				if (func_1189(func_374(iParam0, 2)) != -1 && !func_1187(func_374(iParam0, 2), 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_1187(int iParam0, int iParam1)
{
	if ((func_6(iParam0, 4) || func_6(iParam0, 3)) || (iParam1 && func_691(iParam0, iLocal_1219, 6)))
	{
		return 1;
	}
	return 0;
}

bool func_1188(int iParam0)
{
	return Local_1164[iParam0].f_4 != func_68();
}

int func_1189(int iParam0)
{
	return -1;
}

void func_1190(int iParam0, int iParam1)
{
	if (func_15(&(Local_1436[iLocal_1219].f_19[iParam0]), iParam1))
	{
	}
}

int func_1191(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1192(int iParam0)
{
	func_1193(iParam0, 4);
}

void func_1193(int iParam0, int iParam1)
{
	if (func_122(&(Local_1436[iLocal_1219].f_19[iParam0]), iParam1))
	{
	}
}

void func_1194()
{
	iVar0 = func_1280(iLocal_1216);
	iVar5 = 0;
	while (iVar5 < Local_218.f_10)
	{
		func_1278(iVar5);
		bVar1 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2[iVar5]);
		if (bVar1)
		{
			iVar4 = NETWORK::NET_TO_ENT(Local_1270.f_2[iVar5]);
			bVar2 = ENTITY::IS_ENTITY_DEAD(iVar4, 0);
			if (Local_433.f_54.f_18 != 0)
			{
				Stack.Push(iVar5);
				Stack.Push(iVar4);
				Stack.Push(bVar2);
				Call_Loc(Local_433.f_54.f_18);
			}
			if (!bVar2)
			{
				func_1273(iVar5, iVar4);
				func_1264(iVar5, iVar4, &bVar3);
				func_1261(iVar5, iVar4);
			}
			func_1260(iVar5);
			func_1255(iVar5, iVar0);
			func_1246(iVar5);
		}
		else
		{
			Local_1164[iVar5].f_1 = 99999f;
			Local_1164[iVar5].f_2 = 99999f;
			Local_1164[iVar5].f_3 = 99999f;
		}
		func_1238(iVar5, bVar1);
		iVar5++;
	}
	if (bVar3)
	{
		if (!func_1237())
		{
			if (Local_433.f_54.f_16 != 0)
			{
				Stack.Push(iVar5);
				Call_Loc(Local_433.f_54.f_16);
			}
		}
		func_1234(1, func_1236(iLocal_1225));
		func_1229(1);
	}
	else
	{
		func_1234(0, func_1236(iLocal_1225));
		func_1229(0);
	}
	if (func_1280(iLocal_1216) > 0)
	{
		func_1222(1);
	}
	else
	{
		func_1222(0);
	}
	if (iVar0 > 0)
	{
		func_1221();
	}
	func_1218();
	func_1196();
	iLocal_1242++;
	if (iLocal_1242 >= func_7())
	{
		iLocal_1242 = 0;
		func_1195();
	}
}

void func_1195()
{
	if (func_11(&(Local_1164.f_10), 5000, 0) && Local_1164.f_12)
	{
		func_22(&(Local_1164.f_10));
		Local_1164.f_12 = 0;
	}
}

void func_1196()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2[iLocal_1242]))
	{
		iVar4 = NETWORK::NET_TO_ENT(Local_1270.f_2[iLocal_1242]);
		bVar3 = ENTITY::IS_ENTITY_DEAD(iVar4, 0);
		Var0 = { ENTITY::GET_ENTITY_COORDS(iVar4, 0) };
		if (!bVar3)
		{
			func_1216(iLocal_1242, Var0);
			if (func_11(&(Local_1164.f_10), 5000, 0))
			{
				if (iLocal_1242 == 0)
				{
					Local_1164.f_12 = 1;
				}
				func_1197(iLocal_1242, iVar4, Var0);
			}
		}
	}
}

void func_1197(int iParam0, int iParam1, struct<3> Param2)
{
	iVar0 = func_1214(Param2, 6, -1, 0, 1, -1);
	Var1 = { func_1203(iVar0, 0) };
	iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, func_1199(iVar0));
	iVar5 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam1);
	if (iVar4 != 0 && iVar4 == iVar5)
	{
		if (func_1198(iVar0, &Var1, &uVar6))
		{
			ENTITY::SET_ENTITY_COORDS(iParam1, Var1, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iParam1, uVar6);
		}
	}
}

bool func_1198(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_166(*uParam1, 0f, 0f, 0f, 0);
}

char* func_1199(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_1200(Global_100839);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
			break;
		
		case 48:
			return "ba_dlc_int_03_ba";
			break;
		
		case 49:
			return "xs_x18_int_mod";
			break;
		
		case 52:
			return "ch_dlc_plan";
			break;
		
		case 50:
			return "vw_dlc_casino_apart";
			break;
		
		case 51:
			return "vw_dlc_casino_main";
			break;
	}
	return "";
}

char* func_1200(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return "xm_x17dlc_int_01";
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_1201() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

int func_1201()
{
	return func_1202(PLAYER::PLAYER_ID());
}

var func_1202(int iParam0)
{
	return GAMEPLAY::GET_BITS_IN_RANGE(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

Vector3 func_1203(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_1213(Global_100839);
			break;
		
		case 46:
			if (Global_1590374 != func_68())
			{
				if (func_1212(Global_1590374))
				{
					return func_1205(2, 2);
				}
				else if (func_1204(Global_1590374))
				{
					return func_1205(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1696048;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_1204(int iParam0)
{
	if (iParam0 != func_68())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 1)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1205(int iParam0, int iParam1)
{
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_68())
	{
		if (iParam1 == 3)
		{
			if (func_1206(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[Global_1590374].f_274.f_259, 4))
			{
				if (func_1206(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[Global_1590374].f_274.f_259, 5))
			{
				if (func_1206(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_1206(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!func_1211(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_1211(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_1209(iParam0) };
	}
	else
	{
		Var12 = { func_1208(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_1207(Var18, -Var0.f_3.f_2) };
	Var18 = { func_1207(Var18, Var6.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_1207(struct<3> Param0, float fParam3)
{
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.y * fVar3));
	Var0.y = ((Param0.x * fVar3) + (Param0.y * fVar4));
	Var0.z = Param0.z;
	return Var0;
}

struct<6> func_1208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_1209(int iParam0)
{
	return func_1210(iParam0);
}

struct<6> func_1210(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_1211(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_1212(int iParam0)
{
	if (iParam0 != func_68())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 3) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 4)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1213(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_1201() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_1214(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_158(iVar0))
		{
			if (!bParam5 || func_1215(iVar0))
			{
				fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Param0, func_1203(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_1215(int iParam0)
{
	return func_153(iParam0, 0, 0);
}

void func_1216(int iParam0, struct<3> Param1)
{
	Local_1164[iParam0].f_1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Param1, Local_1220, func_1217(iParam0));
	Local_1164[iParam0].f_2 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Param1, func_1014(), func_1217(iParam0));
	Local_1164[iParam0].f_3 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Param1, Local_218.f_10.f_5[iParam0].f_3, func_1217(iParam0));
}

int func_1217(int iParam0)
{
	if (Local_433.f_54.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_54.f_13);
	}
	return 1;
}

void func_1218()
{
	if (func_969(iLocal_1216, 1) && func_1220())
	{
		if (func_739())
		{
			if (!func_434(35))
			{
				func_738(func_1219(), -1);
				func_423(35);
			}
		}
	}
	else
	{
		if (func_434(35))
		{
			func_709(35);
		}
		if (func_735(func_1219()))
		{
			UI::CLEAR_HELP(1);
		}
	}
}

char* func_1219()
{
	return "BHH_HELD";
}

int func_1220()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2[iVar0]))
		{
			if (iLocal_1246[iVar0] != iLocal_1219)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(Local_1270.f_2[iVar0])))
				{
					if (Local_1164[iVar0].f_1 < 2f)
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

void func_1221()
{
}

void func_1222(bool bParam0)
{
	if (bParam0)
	{
		if (func_1228() == 0)
		{
			func_1226(func_1023(), Local_1270.f_164);
		}
	}
	else
	{
		func_1223();
	}
}

void func_1223()
{
	if (Global_1681961.f_4706.f_2 != 0)
	{
	}
	else
	{
		return;
	}
	func_1225();
	func_1224();
}

void func_1224()
{
	Global_1681961.f_4706.f_2 = 0;
	Global_1681961.f_4706 = -1;
	Global_1681961.f_4706.f_1 = -1000;
}

void func_1225()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1628237[PLAYER::PLAYER_ID()].f_579.f_1[iVar0].f_1 = -1;
		iVar0++;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_579), 0);
	func_1224();
}

void func_1226(int iParam0, struct<2> Param1)
{
	func_1227(iParam0, Param1);
}

void func_1227(int iParam0, struct<2> Param1)
{
	if (iParam0 == 0 || !func_391(Param1))
	{
		return;
	}
	if (Global_1681961.f_4706.f_2 != iParam0)
	{
		Global_1681961.f_4706.f_2 = iParam0;
		Global_1681961.f_4706 = { Param1 };
	}
}

int func_1228()
{
	return Global_1681961.f_4706.f_2;
}

void func_1229(bool bParam0)
{
	if (bParam0 != func_1233(iLocal_1216))
	{
		func_1230(iLocal_1226, bParam0);
	}
}

void func_1230(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1231(PLAYER::PLAYER_ID(), iParam0))
		{
			GAMEPLAY::SET_BIT(&(Global_1703159[PLAYER::PLAYER_ID()].f_12), iParam0);
		}
	}
	else if (func_1231(PLAYER::PLAYER_ID(), iParam0))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1703159[PLAYER::PLAYER_ID()].f_12), iParam0);
	}
}

bool func_1231(int iParam0, int iParam1)
{
	if (!func_1232(iParam0))
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1703159[iParam0].f_12, iParam1);
}

int func_1232(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0].f_12 != 0;
	}
	return 0;
}

int func_1233(int iParam0)
{
	return func_1231(iParam0, iLocal_1226);
}

void func_1234(bool bParam0, int iParam1)
{
	iVar0 = func_1235(iParam1);
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1573343, iVar0))
		{
			GAMEPLAY::SET_BIT(&Global_1573343, iVar0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1573343, iVar0))
	{
		GAMEPLAY::CLEAR_BIT(&Global_1573343, iVar0);
	}
}

int func_1235(int iParam0)
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
	return 0;
}

int func_1236(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		default:
	}
	return -1;
}

bool func_1237()
{
	return Global_1573342;
}

void func_1238(int iParam0, bool bParam1)
{
	if (!func_1245(iParam0))
	{
		return;
	}
	if (bParam1 && func_118(Local_1270.f_2[iParam0]))
	{
		func_1032(&(Local_1270.f_2[iParam0]));
	}
	func_1240(iParam0);
	func_1239(iParam0);
}

void func_1239(int iParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2.f_18[iParam0]) && func_118(Local_1270.f_2.f_18[iParam0]))
	{
		func_1032(&(Local_1270.f_2.f_18[iParam0]));
		func_108(&(Local_1270.f_2.f_18[iParam0]));
	}
}

void func_1240(int iParam0)
{
	if (!func_6(iParam0, 4) || !func_1242(iParam0))
	{
		return;
	}
	uVar0 = func_1241(iParam0);
	if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(func_1241(iParam0))))
	{
		ENTITY::DETACH_ENTITY(NETWORK::NET_TO_ENT(func_1241(iParam0)), 1, 1);
	}
	if (func_46(11))
	{
		if (!NETWORK::_0x422F32CC7E56ABAD(NETWORK::NET_TO_ENT(func_1241(iParam0))))
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(func_1241(iParam0)), 1, 1);
		}
		if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(func_1241(iParam0))))
		{
			func_1032(&uVar0);
		}
	}
	else if (func_46(12))
	{
		func_108(&uVar0);
	}
	else
	{
		func_1032(&uVar0);
	}
}

var func_1241(int iParam0)
{
	if (!func_44(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_43(iParam0);
	switch (func_45())
	{
		case 2:
			return Local_1270.f_91[iVar1];
		
		case 1:
			return Local_1270.f_24[iVar1];
		
		default:
	}
	return uVar0;
}

int func_1242(int iParam0)
{
	if (!func_44(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_1241(iParam0)))
	{
		return 0;
	}
	if ((func_6(iParam0, 35) || func_6(iParam0, 36)) || func_6(iParam0, 37))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(func_1241(iParam0)), 0))
	{
		return 0;
	}
	switch (func_45())
	{
		case 2:
			if (func_1243(func_1244(iParam0), 0, 1))
			{
				return 0;
			}
			break;
	}
	if (!func_118(func_1241(iParam0)))
	{
		return 0;
	}
	return 1;
}

int func_1243(int iParam0, bool bParam1, bool bParam2)
{
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), 0))
			{
				uVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar2))
					{
						if (PED::IS_PED_A_PLAYER(iVar2))
						{
							if (!bParam2 && func_67(NETWORK::_NETWORK_GET_PED_PLAYER(iVar2), PLAYER::PLAYER_ID()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (!bParam2 && func_67(NETWORK::_NETWORK_GET_PED_PLAYER(iVar2), PLAYER::PLAYER_ID()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1244(int iParam0)
{
	uVar1 = func_1241(iParam0);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar1))
	{
		return NETWORK::NET_TO_VEH(uVar1);
	}
	return uVar0;
}

int func_1245(int iParam0)
{
	if ((((func_6(iParam0, 19) || (func_6(iParam0, 3) && func_11(&(Local_1270.f_2.f_2[iParam0]), 6000, 0))) || func_6(iParam0, 4)) || func_6(iParam0, 25)) || func_6(iParam0, 33))
	{
		return (func_6(iParam0, 4) || func_6(iParam0, 3));
	}
	return 0;
}

void func_1246(int iParam0)
{
	if (func_1254(iParam0))
	{
		func_1247(iParam0);
	}
	else
	{
		func_945(iParam0);
	}
}

void func_1247(int iParam0)
{
	if (!UI::DOES_BLIP_EXIST(Local_1164[iParam0]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2[iParam0]))
		{
			Local_1164[iParam0] = UI::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]));
			if (func_1253(func_928(iParam0)))
			{
				UI::SET_BLIP_SPRITE(Local_1164[iParam0], func_928(iParam0));
			}
			UI::SET_BLIP_SCALE(Local_1164[iParam0], func_1252(iParam0));
			UI::SET_BLIP_COLOUR(Local_1164[iParam0], func_1250(iParam0, 0));
			UI::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1164[iParam0], func_1249(iParam0));
			UI::SET_BLIP_PRIORITY(Local_1164[iParam0], 12);
			if (func_1248(iParam0))
			{
				UI::_0x75A16C3DA34F1245(Local_1164[iParam0], 1);
			}
			if (!func_691(iParam0, iLocal_1219, 46))
			{
				func_1019(&(Local_1164[iParam0]), 1);
				func_689(iParam0, 46);
			}
		}
	}
	else
	{
		UI::SET_BLIP_COLOUR(Local_1164[iParam0], func_1250(iParam0, 0));
		if (UI::GET_BLIP_SPRITE(Local_1164[iParam0]) != func_928(iParam0) && func_1253(func_928(iParam0)))
		{
			UI::SET_BLIP_SPRITE(Local_1164[iParam0], func_928(iParam0));
			UI::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1164[iParam0], func_1249(iParam0));
		}
		if (UI::GET_BLIP_COLOUR(Local_1164[iParam0]) != func_1250(iParam0, 0))
		{
			UI::SET_BLIP_COLOUR(Local_1164[iParam0], func_1250(iParam0, 0));
		}
	}
}

bool func_1248(int iParam0)
{
	if (Local_433.f_54.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_54.f_8);
		return StackVal;
	}
	return Local_218.f_10.f_1.f_3;
}

char* func_1249(int iParam0)
{
	if (Local_433.f_54.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_54.f_7);
		return StackVal;
	}
	return "FMC_BLIP_ME";
}

int func_1250(int iParam0, bool bParam1)
{
	if (Local_433.f_54.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_54.f_2);
		return func_889(StackVal);
	}
	if (!bParam1)
	{
		if (func_691(iParam0, iLocal_1219, 12))
		{
			return 1;
		}
	}
	else if (func_1024() == 26 && func_691(iParam0, iLocal_1219, 12))
	{
		return 1;
	}
	if (!bParam1 && Local_1164[iParam0].f_4 != func_68())
	{
		return func_889(func_1251(Local_1164[iParam0].f_4));
	}
	if (func_386(iParam0))
	{
		if (!func_46(7))
		{
			return 57;
		}
	}
	return 2;
}

int func_1251(int iParam0)
{
	iVar0 = func_649(iParam0);
	if (iVar0 != -1)
	{
		return func_647(iVar0);
	}
	return 1;
}

var func_1252(int iParam0)
{
	if (Local_433.f_54.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_54.f_3);
		return StackVal;
	}
	return Local_218.f_10.f_1.f_2;
}

int func_1253(int iParam0)
{
	switch (iParam0)
	{
		case -1:
		case 32:
			return 0;
		
		default:
	}
	return 1;
}

int func_1254(int iParam0)
{
	if (!bLocal_1224)
	{
		return 0;
	}
	if (func_1187(iParam0, 0))
	{
		return 0;
	}
	if (Local_1164[iParam0].f_4 != func_68() && func_45() != 1)
	{
		return 0;
	}
	if (func_405(iParam0, 10) && !func_6(iParam0, 7))
	{
		return 0;
	}
	if (func_691(iParam0, iLocal_1219, 14))
	{
		return 0;
	}
	if (func_6(iParam0, 23) && func_1112(iLocal_1216))
	{
		return 0;
	}
	if (func_6(iParam0, 29) && func_6(iParam0, 50))
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_54);
	return StackVal;
}

void func_1255(int iParam0, int iParam1)
{
	if (Local_1164[iParam0].f_4 == iLocal_1216)
	{
		if (iParam1 != 5)
		{
			if (!func_1259(Local_1270.f_2.f_15[iParam0]))
			{
				func_1258(Local_1270.f_2.f_15[iParam0]);
			}
		}
	}
	else if (iParam1 != 0)
	{
		if ((!Global_1681961.f_4551 && !func_1257(iLocal_1216)) && !func_692())
		{
			if (func_1259(Local_1270.f_2.f_15[iParam0]))
			{
				func_1256(Local_1270.f_2.f_15[iParam0]);
			}
		}
	}
}

void func_1256(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_694(Global_1628237[PLAYER::PLAYER_ID()].f_579.f_1[iVar0]) && func_394(Param0, Global_1628237[PLAYER::PLAYER_ID()].f_579.f_1[iVar0]))
		{
			Global_1628237[PLAYER::PLAYER_ID()].f_579.f_1[iVar0].f_1 = -1;
		}
		else
		{
			iVar0++;
		}
	}
	if (func_1280(PLAYER::PLAYER_ID()) <= 0)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_579), 0);
		func_1224();
	}
}

int func_1257(int iParam0)
{
	if (iParam0 != func_68() && (func_28(iParam0, 1, 1) || Global_2405072.f_2671))
	{
		bVar0 = GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310, 1);
		return bVar0;
	}
	return 0;
}

void func_1258(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_694(Global_1628237[PLAYER::PLAYER_ID()].f_579.f_1[iVar0]))
		{
			Global_1628237[PLAYER::PLAYER_ID()].f_579.f_1[iVar0] = { Param0 };
		}
		else
		{
			iVar0++;
		}
	}
	GAMEPLAY::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_579), 0);
	func_392(Param0, "FREEMODE_DELIVERY_SET_LOCAL_PLAYER_IN_POSSESSION_OF_DELIVERABLE");
}

int func_1259(struct<2> Param0)
{
	if (!func_694(Param0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_694(Global_1628237[PLAYER::PLAYER_ID()].f_579.f_1[iVar0]) && func_394(Param0, Global_1628237[PLAYER::PLAYER_ID()].f_579.f_1[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1260(int iParam0)
{
	if (iLocal_1246[iParam0] != func_412())
	{
		if (uLocal_1248[iParam0] != iLocal_1246[iParam0])
		{
			uLocal_1248[iParam0] = iLocal_1246[iParam0];
		}
	}
}

void func_1261(int iParam0, int iParam1)
{
	if (func_6(iParam0, 29) || !func_1263(iParam0))
	{
		return;
	}
	func_1262(iParam1);
}

void func_1262(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		fVar0 = 0.3f;
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			fVar1 = 0.5f;
			fVar0 = 1f;
		}
		UI::GET_HUD_COLOUR(18, &uVar2, &uVar3, &uVar4, &uVar5);
		func_1067(iParam0, uVar2, uVar3, uVar4, fVar0, fVar1, 0);
	}
}

int func_1263(int iParam0)
{
	return 0;
}

void func_1264(int iParam0, int iParam1, var uParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		iVar0 = ENTITY::GET_ENTITY_ATTACHED_TO(iParam1);
		if (iVar0 != -1)
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iVar2 = NETWORK::_NETWORK_GET_PED_PLAYER(iVar1);
					if (iVar2 == iLocal_1216)
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1270.f_2[iParam0]))
						{
							unk_0x867458251D47CCB2(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), 0);
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), true);
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), false);
							func_689(iParam0, 1);
							if (func_1272(iParam0))
							{
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), true, 0);
							}
							if (!func_6(iParam0, 1))
							{
								func_689(iParam0, 18);
							}
							*uParam2 = 1;
							func_751();
						}
					}
					else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
					{
						func_689(iParam0, 12);
					}
				}
				else if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_IN_GROUP(iVar1))
					{
						if (PED::IS_PED_GROUP_MEMBER(iVar1, uLocal_1188))
						{
							func_689(iParam0, 1);
							if (!func_6(iParam0, 1))
							{
								func_689(iParam0, 18);
							}
							*uParam2 = 1;
							func_751();
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(iVar1, 0) == iLocal_1250)
					{
						func_689(iParam0, 14);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, 0) && !func_1271())
				{
					func_689(iParam0, 21);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1217, 0))
					{
						if (PED::GET_VEHICLE_PED_IS_IN(iLocal_1217, 0) == iVar3)
						{
							if (func_1022(iLocal_1217, 0) == -1)
							{
								func_689(iParam0, 1);
								if (!func_6(iParam0, 1))
								{
									func_689(iParam0, 18);
									func_751();
								}
								*uParam2 = 1;
								func_751();
							}
							func_689(iParam0, 14);
						}
						else
						{
							func_1268(iLocal_1250, iVar3, iParam0);
						}
					}
				}
				else if (func_408() == 0)
				{
					func_1265(iParam0);
				}
			}
		}
	}
}

void func_1265(int iParam0)
{
	if (func_118(Local_1270.f_2[iParam0]))
	{
		ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), 1, 1);
		ENTITY::_0x9EBC85ED0FFFE51C(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), 1, 0);
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), true, 0);
		func_1267(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]));
		func_689(iParam0, 45);
		Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), 1) };
		Var3 = { OBJECT::GET_SAFE_PICKUP_COORDS(Var0, 1067030938, 1069547520) };
		if (Var3.x == Var0.x && Var3.y == Var0.y)
		{
			iVar6 = func_43(iParam0);
			if (iVar6 != -1)
			{
				uVar7 = Local_1270.f_91[iVar6];
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar7))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(uVar7), 0) };
				}
			}
		}
		fVar8 = func_1266(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0])));
		Var3.z = (Var3.z + (fVar8 * 0.5f));
		ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), Var3, 1, 0, 0, 1);
	}
}

float func_1266(int iParam0)
{
	func_247(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	return GAMEPLAY::ABSF((Var0.z - Var3.z));
}

void func_1267(int iParam0)
{
	OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam0, 1);
	ROPE::ACTIVATE_PHYSICS(iParam0);
	unk_0x4C134B4DF76025D0(iParam0, 1);
}

void func_1268(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar1 = func_1022(iLocal_1217, 0);
		if (func_1270(iVar0))
		{
			if (iVar1 == -1)
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam1, iParam0))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, -1, 0) || ENTITY::GET_ENTITY_MODEL(iParam1) == func_1269())
						{
							func_689(iParam2, 1);
							if (!func_6(iParam2, 1))
							{
								func_689(iParam2, 18);
								func_751();
							}
						}
					}
				}
			}
		}
	}
}

int func_1269()
{
	return -877478386;
	return -1100548694;
}

int func_1270(int iParam0)
{
	if (iParam0 == -50547061)
	{
		return 1;
	}
	if (iParam0 == 1621617168)
	{
		return 1;
	}
	if (iParam0 == 1394036463)
	{
		return 1;
	}
	if (iParam0 == 2025593404)
	{
		return 1;
	}
	return 0;
}

int func_1271()
{
	return 0;
}

int func_1272(int iParam0)
{
	return 0;
}

void func_1273(int iParam0, int iParam1)
{
	if ((!func_44(iParam0) || func_6(iParam0, 39)) || func_691(iParam0, iLocal_1219, 36))
	{
		return;
	}
	uVar0 = func_1277(iParam0);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar0) && func_118(uVar0))
	{
		iVar1 = NETWORK::NET_TO_ENT(uVar0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			if (func_1275(iParam1, iVar1, func_1276(iParam0, ENTITY::GET_ENTITY_MODEL(iVar1)), 0f, 0f, 90f, 0, 0))
			{
				func_1274(iVar1);
				func_689(iParam0, 36);
			}
		}
	}
}

void func_1274(int iParam0)
{
	switch (func_45())
	{
		case 2:
			uVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0);
			VEHICLE::_0xB088E9A47AE6EDD5(uVar0, 1);
			break;
	}
}

int func_1275(int iParam0, int iParam1, struct<3> Param2, struct<3> Param5, int iParam8, int iParam9)
{
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0, iParam1))
	{
		switch (func_45())
		{
			case 2:
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam1, "chassis_dummy"), Param2, Param5, iParam8, 0, iParam9, 0, 2, 1);
				break;
			
			case 1:
				OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_1276(int iParam0, int iParam1)
{
	switch (func_45())
	{
		case 2:
			switch (iParam1)
			{
				case -1924433270:
				case -114627507:
					switch (iParam0)
					{
						case 0:
							return 1f, -2f, -0.1f;
						
						case 1:
							return -1f, -2f, -0.1f;
						
						case 2:
							return 1f, -2f, -0.1f;
						
						case 3:
							return -1f, -2f, -0.1f;
						
						default:
					}
					break;
				
				case 931280609:
				case -431692672:
				case -674927303:
					switch (iParam0)
					{
						case 0:
							return 0.5f, 0f, -0.1f;
						
						case 1:
							return -0.5f, 0f, -0.1f;
						
						case 2:
							return 0.5f, 0f, -0.1f;
						
						case 3:
							return -0.5f, 0f, -0.1f;
						
						default:
					}
					break;
			}
			switch (iParam0)
			{
				case 0:
					return 1f, 0f, -0.1f;
				
				case 1:
					return -1f, 0f, -0.1f;
				
				case 2:
					return 1f, 0f, -0.1f;
				
				case 3:
					return -1f, 0f, -0.1f;
				
				default:
			}
			return 0f, -1f, -0.1f;
		
		default:
	}
	return 0f, 0f, 0f;
}

var func_1277(int iParam0)
{
	switch (func_45())
	{
		case 2:
			return Local_1270.f_91[func_43(iParam0)];
		
		case 1:
			return Local_1270.f_24[func_43(iParam0)];
		
		default:
	}
	return uVar0;
}

void func_1278(int iParam0)
{
	func_1279(iParam0, 1);
	func_1279(iParam0, 21);
	func_1279(iParam0, 14);
}

void func_1279(int iParam0, int iParam1)
{
	if (func_122(&(Local_1436[iLocal_1218].f_3[iParam0]), iParam1))
	{
	}
}

int func_1280(int iParam0)
{
	if (iParam0 != func_68())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_694(Global_1628237[iParam0].f_579.f_1[iVar0]))
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	return iVar1;
}

void func_1281()
{
	iVar3 = 0;
	while (iVar3 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar3);
		switch (iVar0)
		{
			case 174:
				if (!SCRIPT::GET_EVENT_DATA(1, iVar3, &iVar1, 2))
				{
					return;
				}
				switch (iVar1)
				{
					case -1872730803:
						func_1310(iVar3);
						break;
					
					case -1717006654:
						func_1301(iVar3);
						break;
					
					case 1059615374:
						func_1300(iVar3);
						break;
					
					case -251935260:
						func_1299(iVar3);
						break;
					
					case 24120320:
						func_1293(iVar3);
						break;
				}
				break;
			
			case 185:
				func_1282(iVar3);
				break;
		}
		iVar3++;
	}
}

void func_1282(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var1, 13))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var1))
		{
			if (ENTITY::IS_ENTITY_A_PED(Var1))
			{
				iVar15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1);
				iVar16 = func_983();
				if (PLAYER::GET_MAX_WANTED_LEVEL() < iVar16)
				{
					if (func_94(iVar15))
					{
						if (func_1288(iVar15))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && iLocal_1217 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1))
							{
								func_981(iLocal_1216, iVar16, 1, 0);
							}
						}
					}
				}
				iVar17 = 0;
				while (iVar17 < Local_218.f_28.f_1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_24[iVar17]))
					{
						if (Var1 == NETWORK::NET_TO_ENT(Local_1270.f_24[iVar17]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
							{
								iVar18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
								if (PED::IS_PED_A_PLAYER(iVar18))
								{
									func_1037(iVar17, 21);
									iVar14 = NETWORK::_NETWORK_GET_PED_PLAYER(iVar18);
									if (Local_433.f_73.f_113 != 0)
									{
										Stack.Push(iVar17);
										Stack.Push(Var1);
										Stack.Push(iVar14);
										Call_Loc(Local_433.f_73.f_113);
									}
									if (iVar14 == iLocal_1216)
									{
										func_751();
										if (Var1.f_5 && func_1287(iVar17))
										{
											Local_1189.f_3++;
										}
									}
									if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar14))
									{
									}
								}
							}
						}
					}
					iVar17++;
				}
				func_1286(Var1, iVar15, iVar14);
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(Var1))
			{
				iVar19 = func_983();
				if (PLAYER::GET_MAX_WANTED_LEVEL() < iVar19)
				{
					iVar20 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1), -1, 0);
					iVar21 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1), 0, 0);
					if (func_1284(Var1, iVar20, iVar21))
					{
						if (func_1288(iVar20))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && iLocal_1217 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1))
							{
								func_981(iLocal_1216, iVar19, 1, 0);
							}
						}
					}
				}
				iVar22 = 0;
				while (iVar22 < Local_218.f_95.f_1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[iVar22]))
					{
						if (Var1 == NETWORK::NET_TO_ENT(Local_1270.f_91[iVar22]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
							{
								if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1)))
								{
									iVar14 = NETWORK::_NETWORK_GET_PED_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1));
									if (Local_433.f_188.f_26 != 0)
									{
										Stack.Push(iVar22);
										Stack.Push(Var1);
										Stack.Push(iVar14);
										Call_Loc(Local_433.f_188.f_26);
									}
									if (iVar14 == iLocal_1216)
									{
										func_751();
									}
									iVar23 = func_1283(iVar22);
									if (iVar23 != -1)
									{
										func_1037(iVar23, 22);
										if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar14))
										{
										}
									}
								}
							}
						}
					}
					iVar22++;
				}
				iVar24 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1), -1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar24))
				{
					func_1286(Var1, iVar24, iVar14);
				}
			}
			else if (ENTITY::IS_ENTITY_AN_OBJECT(Var1))
			{
				iVar0 = 0;
				while (iVar0 < Local_218.f_10.f_5)
				{
					if (!func_6(iVar0, 4) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2[iVar0]))
					{
						if (Var1 == NETWORK::NET_TO_ENT(Local_1270.f_2[iVar0]))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1)))
							{
								iVar14 = NETWORK::_NETWORK_GET_PED_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1));
								if (Var1.f_5)
								{
								}
							}
							if (Var1.f_5)
							{
								if (bLocal_1214)
								{
									func_42(iVar0, 3);
									func_42(iVar0, 19);
								}
								else
								{
									func_689(iVar0, 9);
									if (Local_433.f_54.f_17 != 0)
									{
										Stack.Push(iVar0);
										Call_Loc(Local_433.f_54.f_17);
									}
								}
							}
						}
					}
					iVar0++;
				}
				iVar25 = 0;
				while (iVar25 < Local_218.f_112.f_1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_98[iVar25]))
					{
						if (Var1 == NETWORK::NET_TO_ENT(Local_1270.f_98[iVar25]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
							{
								if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1)))
								{
									iVar14 = NETWORK::_NETWORK_GET_PED_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1));
									if (iVar14 == iLocal_1216)
									{
										func_751();
									}
									if (Local_433.f_216.f_18 != 0)
									{
										Stack.Push(iVar25);
										Stack.Push(Var1);
										Stack.Push(iVar14);
										Call_Loc(Local_433.f_216.f_18);
									}
								}
							}
						}
					}
					iVar25++;
				}
			}
		}
	}
}

int func_1283(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_1270.f_91[iParam0]), -1, 0))
	{
		return -1;
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_1270.f_91[iParam0]), -1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < Local_218.f_28.f_1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_24[iVar1]) && iVar0 == NETWORK::NET_TO_PED(Local_1270.f_24[iVar1]))
			{
				return iVar1;
			}
			iVar1++;
		}
	}
	return -1;
}

int func_1284(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && PED::IS_PED_A_PLAYER(iParam1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && PED::IS_PED_A_PLAYER(iParam2))
	{
		return 0;
	}
	if (func_1285(ENTITY::GET_ENTITY_MODEL(uParam0)) && ENTITY::_GET_ENTITY_POPULATION_TYPE(iParam0) != 7)
	{
		return 1;
	}
	if (func_94(iParam1))
	{
		return 1;
	}
	if (func_94(iParam2))
	{
		return 1;
	}
	return 0;
}

int func_1285(int iParam0)
{
	if (((((((((((((((iParam0 == 2046537925 || iParam0 == -1627000575) || iParam0 == 1912215274) || iParam0 == -1973172295) || iParam0 == 456714581) || iParam0 == 353883353) || iParam0 == -1205689942) || iParam0 == 1127131465) || iParam0 == -1647941228) || iParam0 == -1683328900) || iParam0 == 1922257928) || iParam0 == -823509173) || iParam0 == 1074326203) || iParam0 == 630371791) || iParam0 == 321739290) || iParam0 == 67388999)
	{
		return 1;
	}
	return 0;
}

void func_1286(struct<13> Param0, int iParam13, int iParam14)
{
	if (PED::IS_PED_A_PLAYER(iParam13))
	{
		iVar0 = NETWORK::_NETWORK_GET_PED_PLAYER(iParam13);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_1) && ENTITY::IS_ENTITY_A_PED(Param0.f_1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1);
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iParam14 = NETWORK::_NETWORK_GET_PED_PLAYER(iVar1);
					if (Local_433.f_10.f_6 != 0)
					{
						Stack.Push(iVar0);
						Stack.Push(Param0);
						Stack.Push(iParam14);
						Call_Loc(Local_433.f_10.f_6);
					}
					if (iParam14 == iLocal_1216)
					{
						if (func_46(15))
						{
							if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
							{
								if (func_732(iVar0))
								{
									func_751();
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_1287(int iParam0)
{
	if (Local_433.f_46 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_46);
		return StackVal;
	}
	return 1;
}

int func_1288(int iParam0)
{
	if (!func_1289() || !func_660(0, 0, 1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_1289()
{
	if (func_369(iLocal_1219, 3))
	{
		func_1290(iLocal_1226, 1);
		iVar0 = 1;
	}
	else
	{
		func_1290(iLocal_1226, 0);
		iVar0 = 0;
	}
	return iVar0;
}

void func_1290(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1291(PLAYER::PLAYER_ID(), iParam0))
		{
			GAMEPLAY::SET_BIT(&(Global_1703159[PLAYER::PLAYER_ID()].f_11), iParam0);
		}
	}
	else if (func_1291(PLAYER::PLAYER_ID(), iParam0))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1703159[PLAYER::PLAYER_ID()].f_11), iParam0);
	}
}

bool func_1291(int iParam0, int iParam1)
{
	if (!func_1292(iParam0))
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1703159[iParam0].f_11, iParam1);
}

int func_1292(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0].f_11 != 0;
	}
	return 0;
}

void func_1293(int iParam0)
{
	if (Global_1391799.f_791 || !SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		return;
	}
	if (!func_1289())
	{
		return;
	}
	switch (Var0.z)
	{
		case 0:
			if (Var0.y == iLocal_1216)
			{
				func_1298("FMC_TIC_HAXSPu");
			}
			else
			{
				func_1294("FMC_TIC_HAXSPr", Var0.y, 0, 0, 0, 1, 0);
			}
			break;
		
		case 1:
			if (Var0.y == iLocal_1216)
			{
				func_1298("FMC_TIC_HAXLAPu");
			}
			else
			{
				func_1294("FMC_TIC_HAXLAPr", Var0.y, 0, 0, 0, 1, 0);
			}
			break;
	}
}

int func_1294(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_4456448.f_190067[iVar1] != -1)
			{
				UI::_SET_NOTIFACTION_COLOR_NEXT(func_653(iVar1, iParam1, 0));
			}
			else
			{
				UI::_SET_NOTIFACTION_COLOR_NEXT(func_632(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			UI::_SET_NOTIFACTION_COLOR_NEXT(func_632(iParam1, -2, 1, 0, 0));
		}
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_1296(&Var2));
		if (!bParam4)
		{
			iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		}
		else
		{
			Global_2513218 = { func_70(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218))
			{
				iVar18 = 0;
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2513148.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_1295(&Var2) };
					}
					iVar0 = UI::_NOTIFICATION_SEND_CLAN_INVITE(iVar19, NETWORK::_0x7543BB439F63792B(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar18, 0, Global_2513148, &Var2, Global_1314034, Global_1314035, Global_1314036);
				}
				else
				{
					iVar0 = UI::_NOTIFICATION_SEND_APARTMENT_INVITE(iVar19, NETWORK::_0x7543BB439F63792B(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar18, 0, Global_2513148, Global_1314034, Global_1314035, Global_1314036);
				}
			}
			else
			{
				iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
			}
		}
		func_610(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_1295(char* sParam0)
{
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_1296(char* sParam0)
{
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_1297(&cVar0);
}

var func_1297(char[4] cParam0)
{
	return cParam0;
}

int func_1298(char* sParam0)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_610(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_1299(int iParam0)
{
	if (!bLocal_1214)
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		if (Var0.f_5 != iLocal_1225 || Var0.f_6 != NETWORK::_0x638A3A81733086DB())
		{
			return;
		}
		Local_1270.f_24[Var0.f_3].f_6 = Var0.f_2;
	}
}

void func_1300(int iParam0)
{
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7) || iLocal_1225 != Var0.f_2)
	{
		return;
	}
	Local_1183 = Var0.f_3;
	Local_1183.f_2 = Var0.f_5;
	Local_1183.f_1 = Var0.f_6;
	func_423(15);
}

void func_1301(int iParam0)
{
	Var0.f_2 = 5;
	Var0.f_2.f_1.f_1 = -1;
	Var0.f_2.f_1.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_14 = 5;
	Var0.f_20 = 5;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 26))
	{
		iVar26 = 0;
		while (iVar26 < 5)
		{
			if (Var0.f_20[iVar26] > 0)
			{
			}
			else
			{
				iVar27 = (iVar27 + func_1307(Var0.f_14[iVar26], Var0.f_2[iVar26].f_1, Var0.f_1));
			}
			iVar26++;
		}
		if (iVar27 > 0)
		{
			func_1305(Var0.f_1);
			func_1302(iVar27, Var0.f_1);
		}
	}
}

void func_1302(int iParam0, int iParam1)
{
	if (func_1303(iParam1))
	{
		Local_1436[iLocal_1218].f_17 = (Local_1436[iLocal_1218].f_17 + iParam0);
	}
}

bool func_1303(int iParam0)
{
	return ((iParam0 == iLocal_1216 && !func_1304(1)) || func_69(iParam0) == iLocal_1216);
}

bool func_1304(bool bParam0)
{
	return func_537(PLAYER::PLAYER_ID(), bParam0);
}

void func_1305(int iParam0)
{
	if (!func_862(26))
	{
		if (!func_1306())
		{
		}
	}
	if (func_28(iParam0, 0, 1))
	{
		GAMEPLAY::SET_BIT(&(Global_2537071.f_1749), iParam0);
		Global_2537071.f_1750[iParam0] = iLocal_1225;
	}
}

int func_1306()
{
	iVar0 = 0;
	while (iVar0 < Local_218.f_10)
	{
		if (func_6(iVar0, 4))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1307(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_10)
	{
		if (iParam0 == Local_1270.f_2.f_20)
		{
			if (iParam1 == Local_1270.f_2.f_15[iVar0].f_1)
			{
				iVar1++;
				if (bLocal_1214)
				{
					if (func_537(iParam2, 1))
					{
						Local_1270.f_2.f_9[iVar0] = NETWORK::_NETWORK_GET_PLAYER_VEHICLE_NETWORK_ID(func_69(iParam2));
					}
					else
					{
						Local_1270.f_2.f_9[iVar0] = NETWORK::_NETWORK_GET_PLAYER_VEHICLE_NETWORK_ID(iParam2);
					}
				}
				if (iParam2 == iLocal_1216)
				{
					func_689(iVar0, 6);
				}
				if (Local_433.f_54.f_15 != 0)
				{
					Stack.Push(iVar0);
					Stack.Push(iParam2 == iLocal_1216);
					Call_Loc(Local_433.f_54.f_15);
				}
				if (Local_433.f_18.f_6 != 0)
				{
					Stack.Push(iParam2 == iLocal_1216);
					Call_Loc(Local_433.f_18.f_6);
					func_1309(StackVal);
				}
				if (Local_433.f_18.f_7 != 0)
				{
					Stack.Push(iParam2 == iLocal_1216);
					Call_Loc(Local_433.f_18.f_7);
					func_1308(StackVal);
				}
				Jump @241; //curOff = 223
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_1308(var uParam0)
{
}

void func_1309(var uParam0)
{
}

void func_1310(int iParam0)
{
	Var0.f_2.f_1 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 10))
	{
		if (Var0.f_6 > 0)
		{
			return;
		}
		iVar10 = func_1307(Var0.f_5, Var0.f_2.f_1, Var0.f_1);
		if (iVar10 > 0)
		{
			func_1305(Var0.f_1);
			func_1302(iVar10, Var0.f_1);
		}
	}
}

void func_1311()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2[iVar0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_1270.f_2[iVar0]), 0))
		{
			if (func_660(0, 0, 1) && !func_691(iVar0, iLocal_1219, 47))
			{
				OBJECT::_0x0BF3B3BD47D79C08(Local_218.f_10.f_5[0].f_2, func_1312());
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_1270.f_2[iVar0]), 0, 1);
				OBJECT::_0x88EAEC617CD26926(Local_218.f_10.f_5[0].f_2, 1);
				func_423(6);
			}
			else
			{
				if (func_434(6))
				{
					OBJECT::_0x0BF3B3BD47D79C08(Local_218.f_10.f_5[0].f_2, -1);
					func_709(6);
				}
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_1270.f_2[iVar0]), 1, 1);
				if (func_691(iVar0, iLocal_1219, 1) && func_385(iVar0))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1270.f_2[iVar0]))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_1270.f_2[iVar0]), 1, 1);
					}
				}
			}
		}
		iVar0++;
	}
}

int func_1312()
{
	return 1;
}

void func_1313()
{
	if ((!func_434(31) && bLocal_1223) && func_408() == 0)
	{
		func_1314();
		func_423(31);
	}
}

void func_1314()
{
	func_1316();
	Local_1189.f_1 = NETWORK::_GET_POSIX_TIME();
	func_1315();
}

void func_1315()
{
}

void func_1316()
{
}

void func_1317()
{
	func_1318();
}

void func_1318()
{
	iLocal_1182 = 0;
}

void func_1319()
{
	Var3 = 1;
	Var3.f_1 = 1;
	Var6 = 3;
	Var6.f_1 = 1;
	Var6.f_1.f_2 = 1;
	Var6.f_1.f_2.f_2 = 1;
	uVar13 = 1;
	bVar15 = true;
	iVar1 = iVar1;
	iLocal_1250 = func_1360();
	iVar2 = 0;
	while (iVar2 < Local_218.f_10)
	{
		iLocal_1246[iVar2] = func_412();
		Local_1164[iVar2].f_4 = func_68();
		func_1279(iVar2, 33);
		func_1279(iVar2, 12);
		iVar2++;
	}
	if (bLocal_1214)
	{
		func_14(4);
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (bLocal_1214)
		{
		}
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar17 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			iVar16 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar17);
			iVar1 = iVar16;
			if (func_28(iVar16, 0, 1))
			{
				iVar18 = 0;
				iVar2 = 0;
				while (iVar2 < Local_218.f_10)
				{
					if (func_691(iVar2, iVar17, 1))
					{
						iLocal_1246[iVar2] = iVar17;
						iLocal_1246[iVar2] = iLocal_1246[iVar2];
						Local_1164[iVar2].f_4 = iVar16;
						if (iLocal_1216 != iVar16)
						{
							if (func_67(iLocal_1216, iVar16) && !func_46(21))
							{
								func_689(iVar2, 33);
							}
							else
							{
								func_689(iVar2, 12);
							}
						}
						if (!func_691(iVar2, iLocal_1219, 14))
						{
							iVar18 = 1;
						}
					}
					iVar2++;
				}
				func_1352(iVar16, iVar18);
				if (bLocal_1214)
				{
					iVar2 = 0;
					while (iVar2 < Local_218.f_10)
					{
						func_1349(iVar2, iVar0, iVar17);
						func_1347(&Var3, iVar2, iVar17);
						iVar2++;
					}
					func_1344(iVar0, iVar17);
					iVar2 = 0;
					while (iVar2 < Local_218.f_95)
					{
						func_1341(iVar2, iVar0, iVar17);
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_218.f_28)
					{
						func_1338(iVar2, iVar0, iVar17);
						func_1336(&Var6, iVar2, iVar17);
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_218.f_112)
					{
						func_1332(iVar2, iVar0, iVar17);
						iVar2++;
					}
					if (!func_369(iVar17, 0))
					{
						bVar15 = false;
					}
					if (!func_369(iVar17, 4))
					{
						func_1331(4);
					}
					iVar19 = 0;
					while (iVar19 < Local_218.f_164)
					{
						if (func_1330(iVar0, iVar19))
						{
							func_1329(&uVar13, iVar19);
						}
						iVar19++;
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_1164.f_7 != iLocal_1216)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_1164.f_7))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_1164.f_8, Local_1164.f_7))
			{
				GAMEPLAY::SET_BIT(&(Local_1164.f_8), Local_1164.f_7);
				func_916(Local_1164.f_7, 1);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_1164.f_8, Local_1164.f_7))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_1164.f_8), Local_1164.f_7);
		}
	}
	Local_1164.f_7++;
	if (Local_1164.f_7 >= 31)
	{
		Local_1164.f_7 = 0;
	}
	if (bLocal_1214)
	{
		func_1327(&Var3);
		func_1324(&Var6);
		func_1320(&uVar13);
		if (bVar15)
		{
			if (!func_3(0))
			{
				func_14(0);
			}
		}
		else if (func_3(0))
		{
			func_1331(0);
		}
	}
}

void func_1320(var uParam0)
{
	if (!func_1323(&(Local_1270.f_109), uParam0))
	{
		func_1321(uParam0, &(Local_1270.f_109));
	}
}

void func_1321(var uParam0, var uParam1)
{
	iVar0 = func_1322(*uParam0, *uParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		(*uParam1)[iVar1] = (*uParam0)[iVar1];
		iVar1++;
	}
}

int func_1322(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1323(var uParam0, var uParam1)
{
	if (*uParam0 != *uParam1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != (*uParam1)[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_1324(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_218.f_28)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (func_104(uParam0[iVar0], iVar1))
			{
				func_47(iVar0, func_1326(iVar1));
			}
			else
			{
				func_1325(iVar0, func_1326(iVar1));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_1325(int iParam0, var uParam1)
{
	if (func_122(&(Local_1270.f_24[iParam0].f_3), uParam1))
	{
	}
}

int func_1326(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		
		case 1:
			return 7;
		
		case 2:
			return 13;
		
		default:
	}
	return 29;
}

void func_1327(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (func_104(uParam0[iVar0], iVar1))
			{
				func_42(iVar0, func_1328(iVar1));
			}
			else
			{
				func_384(iVar0, func_1328(iVar1));
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_1328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 44;
		
		default:
	}
	return 51;
}

void func_1329(var uParam0, int iParam1)
{
	if (!func_104(uParam0, iParam1))
	{
		func_909(uParam0, iParam1);
	}
}

bool func_1330(int iParam0, int iParam1)
{
	return func_104(&(Local_1436[iParam0].f_24), iParam1);
}

void func_1331(int iParam0)
{
	if (func_122(&(Local_1270.f_132), iParam0))
	{
	}
}

void func_1332(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar1 = iVar0;
		iVar2 = func_1335(iVar1);
		if (iVar2 != 11)
		{
			if (func_1139(iParam0, iParam2, iVar1))
			{
				func_1333(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_1333(int iParam0, int iParam1, var uParam2)
{
	if (!func_1148(iParam1, iParam0))
	{
		func_1334(iParam1, iParam0);
	}
}

void func_1334(int iParam0, var uParam1)
{
	if (func_15(&(Local_1270.f_98[iParam0].f_2), uParam1))
	{
	}
}

int func_1335(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 11:
			return 9;
		
		default:
	}
	return 11;
}

void func_1336(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		iVar2 = func_1337(iVar1);
		if (iVar2 != 25)
		{
			if (!func_104(uParam0[iParam1], iVar0) && func_1063(iParam1, iParam2, iVar2))
			{
				func_909(uParam0[iParam1], iVar0);
			}
		}
		iVar0++;
	}
}

int func_1337(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		
		case 1:
			return 7;
		
		case 2:
			return 13;
		
		default:
	}
	return 25;
}

void func_1338(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iVar1 = iVar0;
		iVar2 = func_1340(iVar1);
		if (iVar2 != 29)
		{
			if (func_1063(iParam0, iParam2, iVar1))
			{
				func_1339(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_1339(int iParam0, int iParam1, var uParam2)
{
	if (!func_73(iParam1, iParam0))
	{
		func_47(iParam1, iParam0);
	}
}

int func_1340(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 3:
			return 2;
		
		case 2:
			return 4;
		
		case 12:
			return 10;
		
		case 14:
			return 14;
		
		case 16:
			return 15;
		
		case 17:
			return 17;
		
		case 19:
			return 21;
		
		case 20:
			return 22;
		
		case 21:
			return 23;
		
		case 22:
			return 24;
		
		case 23:
			return 25;
		
		case 1:
			return 3;
		
		default:
	}
	return 29;
}

void func_1341(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = iVar0;
		iVar2 = func_1343(iVar1);
		if (iVar2 != 18)
		{
			if (func_519(iParam0, iParam2, iVar1))
			{
				func_1342(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_1342(int iParam0, int iParam1, var uParam2)
{
	if (!func_368(iParam1, iParam0))
	{
		func_132(iParam1, iParam0);
	}
}

int func_1343(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 5;
		
		case 3:
			return 3;
		
		case 5:
			return 6;
		
		case 6:
			return 8;
		
		case 11:
			return 13;
		
		case 12:
			return 14;
		
		case 13:
			return 15;
		
		default:
	}
	return 18;
}

void func_1344(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = iVar0;
		if (func_369(iParam1, iVar1))
		{
			iVar2 = func_1346(iVar1);
			if (iVar2 != 7)
			{
				func_1345(iVar2, iParam0);
			}
		}
		iVar0++;
	}
}

void func_1345(int iParam0, var uParam1)
{
	if (!func_3(iParam0))
	{
		func_14(iParam0);
	}
}

int func_1346(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 7:
			return 5;
		
		default:
	}
	return 7;
}

void func_1347(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		iVar2 = func_1348(iVar1);
		if (iVar2 != 48)
		{
			if (!func_104(uParam0[iParam1], iVar0) && func_691(iParam1, iParam2, iVar2))
			{
				func_909(uParam0[iParam1], iVar0);
			}
		}
		iVar0++;
	}
}

int func_1348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 38;
		
		default:
	}
	return 48;
}

void func_1349(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 48)
	{
		iVar1 = iVar0;
		iVar2 = func_1351(iVar1);
		if (iVar2 != 51)
		{
			if (func_691(iParam0, iParam2, iVar1))
			{
				func_1350(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_1350(int iParam0, int iParam1, var uParam2)
{
	if (!func_6(iParam1, iParam0))
	{
		func_42(iParam1, iParam0);
	}
}

int func_1351(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 10;
		
		case 16:
			return 18;
		
		case 29:
			return 37;
		
		case 31:
			return 40;
		
		case 11:
			return 14;
		
		case 18:
			return 1;
		
		case 22:
			return 31;
		
		case 7:
			return 30;
		
		case 23:
			return 28;
		
		case 24:
			return 32;
		
		case 17:
			return 25;
		
		case 25:
			return 33;
		
		case 5:
			return 13;
		
		case 13:
			return 15;
		
		case 15:
			return 17;
		
		case 42:
			return 46;
		
		case 19:
			return 26;
		
		case 20:
			return 27;
		
		case 26:
			return 34;
		
		case 30:
			return 38;
		
		case 34:
			return 42;
		
		case 37:
			return 43;
		
		case 40:
			return 45;
		
		case 43:
			return 47;
		
		case 44:
			return 48;
		
		case 4:
			return 12;
		
		case 10:
			return 11;
		
		case 36:
			return 39;
		
		case 45:
			return 49;
		
		case 6:
			return 4;
		
		case 9:
			return 3;
		
		default:
	}
	return 51;
}

void func_1352(int iParam0, int iParam1)
{
	if (iParam1 && func_1358(iParam0))
	{
		func_1353(iParam0, !func_67(iLocal_1216, iParam0));
	}
	else
	{
		func_916(iParam0, 0);
	}
}

void func_1353(int iParam0, bool bParam1)
{
	iVar0 = func_941(iParam0);
	if (!GAMEPLAY::IS_BIT_SET(Local_1164.f_6, iParam0))
	{
		if (iParam0 != func_68())
		{
			if (func_28(iParam0, 1, 1))
			{
				func_1357(iParam0, 0, 1);
				func_937(iParam0, 1);
				if (!func_1356(iParam0))
				{
					func_935(iParam0, 1, 1, 1);
				}
				func_926(iParam0, func_928(iVar0), 1, 1);
				func_924(iParam0, func_1355(iVar0), 1, 1);
				func_939(iParam0, func_1250(iVar0, 0), 1, 0);
				if (func_934(iParam0))
				{
					if (!func_932(iParam0))
					{
						func_931(iParam0, 1, 1);
					}
				}
				func_917(iParam0, 0, 1);
				GAMEPLAY::SET_BIT(&(Local_1164.f_6), iParam0);
			}
		}
	}
	else if (func_1354(iParam0) != func_928(iVar0))
	{
		func_926(iParam0, func_928(iVar0), 1, 1);
		func_924(iParam0, func_1355(iVar0), 1, 1);
		func_939(iParam0, func_1250(iVar0, 0), 1, 0);
	}
}

int func_1354(int iParam0)
{
	return Global_2416079.f_423[iParam0];
}

float func_1355(int iParam0)
{
	if (Local_433.f_54.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_54.f_4);
		return StackVal;
	}
	return 1.1f;
}

bool func_1356(int iParam0)
{
	return func_933(Global_2416079.f_819[iParam0], &(Global_2416079.f_367), iParam0);
}

void func_1357(int iParam0, bool bParam1, bool bParam2)
{
	if (func_919(iParam0))
	{
		return;
	}
	func_918(&(Global_2416079.f_786[iParam0]), &(Global_2416079.f_1149[iParam0]), &(Global_2416079.f_394), bParam1, iParam0, bParam2, &uVar0);
}

int func_1358(int iParam0)
{
	if (!func_1359())
	{
		return 0;
	}
	if (!func_434(7))
	{
		return 0;
	}
	if (func_1529() > 2)
	{
		return 0;
	}
	if (func_45() == 1)
	{
		return 0;
	}
	if (iParam0 == iLocal_1216)
	{
		return 0;
	}
	if (!func_28(iParam0, 1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_1359()
{
	return Global_2416079.f_1607;
}

var func_1360()
{
	if (bLocal_1213)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1217, 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_1217, 0);
		}
	}
	return uVar0;
}

void func_1361(int iParam0)
{
	Local_1436[iLocal_1218].f_22 = iParam0;
}

int func_1362()
{
	if (!func_421())
	{
		return 0;
	}
	func_1503();
	func_1476();
	func_1383();
	func_1382();
	func_1381();
	func_1380();
	func_1365(1);
	func_1364();
	if (!func_1363())
	{
		return 0;
	}
	Call_Loc(Local_433.f_2);
	return StackVal;
}

int func_1363()
{
	return 1;
}

void func_1364()
{
	func_423(7);
}

void func_1365(bool bParam0)
{
	func_1378(bParam0);
	if (func_46(1))
	{
		if (bParam0)
		{
			func_1377(8);
		}
		else
		{
			func_1376(8);
		}
	}
	if (func_46(2))
	{
		if (bParam0)
		{
			func_1375();
		}
		else
		{
			func_1374();
		}
	}
	if (func_46(3))
	{
		func_1373(bParam0);
	}
	if (func_46(4))
	{
		func_1371(bParam0);
		func_1370(bParam0);
	}
	if (func_46(5))
	{
		if (bParam0)
		{
			func_1369(2);
		}
		else
		{
			func_1368(2);
		}
	}
	if (func_46(6))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_1217, 432, bParam0);
	}
	func_1367(!bParam0);
	func_1366(bParam0);
	if (Local_433.f_9 != 0)
	{
		Stack.Push(bParam0);
		Call_Loc(Local_433.f_9);
	}
}

void func_1366(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2[iVar0]))
		{
			if (bParam0)
			{
				if (!NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_1270.f_2[iVar0]))
				{
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_1270.f_2[iVar0], 1);
				}
			}
			else if (NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_1270.f_2[iVar0]))
			{
				NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_1270.f_2[iVar0], 0);
			}
		}
		iVar0++;
	}
}

void func_1367(bool bParam0)
{
	Global_2461974 = bParam0;
}

void func_1368(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&Global_1573979, iParam0);
}

void func_1369(int iParam0)
{
	GAMEPLAY::SET_BIT(&Global_1573979, iParam0);
}

void func_1370(bool bParam0)
{
	if (Global_2537071.f_6565 != bParam0)
	{
		Global_2537071.f_6565 = bParam0;
	}
}

void func_1371(bool bParam0)
{
	Global_30775 = bParam0;
	if (bParam0)
	{
		func_1372(7, iLocal_1217, 0);
		func_1372(8, iLocal_1217, 0);
		func_1372(20, iLocal_1217, 0);
		func_1372(21, iLocal_1217, 0);
	}
}

void func_1372(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			return;
		}
	}
	if (Global_40554[iParam0].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_40554[iParam0].f_24)
	{
		if (bVar1)
		{
			Global_40554[iParam0].f_25[(iVar0 - 1)] = Global_40554[iParam0].f_25[iVar0];
			Global_40554[iParam0].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_40554[iParam0].f_25[iVar0])
		{
			Global_40554[iParam0].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_40554[iParam0].f_24 = (Global_40554[iParam0].f_24 - 1);
	}
}

void func_1373(bool bParam0)
{
	if (!bParam0 == Global_2405072.f_45.f_314)
	{
		Global_2405072.f_45.f_314 = bParam0;
	}
}

void func_1374()
{
	if (Global_1671757)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1671758, 0))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2546092, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1671758, 1))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2546092, 1);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1671758, 5))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2546092, 5);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-355737150))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-355737150, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-580979506))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-580979506, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1426452475))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1426452475, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(745417724))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(745417724, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1305304906))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1305304906, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1543175077))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1543175077, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-811770997))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-811770997, 1, 0, 0);
		}
		Global_1671758 = 0;
	}
	Global_1671757 = 0;
}

void func_1375()
{
	Global_1671757 = 1;
	if (!GAMEPLAY::IS_BIT_SET(Global_2546092, 0))
	{
		GAMEPLAY::SET_BIT(&Global_2546092, 0);
		GAMEPLAY::SET_BIT(&Global_1671758, 0);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2546092, 1))
	{
		GAMEPLAY::SET_BIT(&Global_2546092, 1);
		GAMEPLAY::SET_BIT(&Global_1671758, 1);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2546092, 5))
	{
		GAMEPLAY::SET_BIT(&Global_2546092, 5);
		GAMEPLAY::SET_BIT(&Global_1671758, 5);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-355737150))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-355737150, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-580979506))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-580979506, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-1426452475))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1426452475, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(745417724))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(745417724, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-1305304906))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1305304906, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-1543175077))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1543175077, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-811770997))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-811770997, 0, 0, 0);
	}
}

void func_1376(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_1377(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_1378(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < Local_218.f_149)
		{
			func_1379(bParam0, iVar0);
			iVar0++;
		}
	}
	else
	{
		iVar0 = (Local_218.f_149 - 1);
		while (iVar0 >= 0)
		{
			func_1379(bParam0, iVar0);
			iVar0 = (iVar0 + -1);
		}
	}
}

void func_1379(bool bParam0, int iParam1)
{
	if (!func_31(Local_218.f_149[iParam1].f_1) && !func_31(Local_218.f_149[iParam1].f_4))
	{
		if (iParam1 >= 10)
		{
			return;
		}
		switch (Local_218.f_149[iParam1])
		{
			case 0:
				if (bParam0)
				{
					if (iLocal_1238 < 2)
					{
						iLocal_1235[iLocal_1238] = PED::ADD_SCENARIO_BLOCKING_AREA(Local_218.f_149[iParam1].f_1, Local_218.f_149[iParam1].f_4, 0, 1, 1, 1);
						iLocal_1238++;
					}
				}
				else if (iLocal_1238 < 2)
				{
					if (iLocal_1235[iLocal_1238] != -1)
					{
						PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1235[iLocal_1238], 0);
						iLocal_1235[iLocal_1238] = -1;
						iLocal_1238 = (iLocal_1238 - 1);
					}
				}
				break;
			
			case 1:
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_218.f_149[iParam1].f_1, Local_218.f_149[iParam1].f_4, !bParam0, 0);
				break;
			
			case 2:
				if (bParam0)
				{
					if (iLocal_1238 < 2)
					{
						iLocal_1235[iLocal_1238] = GAMEPLAY::_0x67F6413D3220E18D(Local_218.f_149[iParam1].f_1, Local_218.f_149[iParam1].f_4, 1f, 0.25f, 1, 1);
						iLocal_1238++;
					}
				}
				else if (iLocal_1235[iLocal_1238] != -1)
				{
					if (GAMEPLAY::_0x1327E2FE9746BAEE(iLocal_1235[iLocal_1238]))
					{
						GAMEPLAY::_0xB129E447A2EDA4BF(iLocal_1235[iLocal_1238], 1);
						iLocal_1235[iLocal_1238] = -1;
						iLocal_1238 = (iLocal_1238 - 1);
					}
				}
				break;
			}
	}
}

void func_1380()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_218.f_28);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_218.f_95);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_218.f_112);
}

void func_1381()
{
}

void func_1382()
{
	if (Local_433.f_263 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_1196.f_1)
	{
		Stack.Push(iVar0);
		Call_Loc(Local_433.f_263);
		Local_1196.f_1[iVar0] = StackVal;
		iVar0++;
	}
	Local_1196 = iVar0;
}

void func_1383()
{
	if (Local_218.f_28 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_28)
	{
		if (func_39(iVar0, 14))
		{
			func_1470(iVar0);
		}
		else
		{
			Stack.Push(iVar0);
			Call_Loc(Local_433.f_73);
		}
		func_1384(iVar0);
		Stack.Push(iVar0);
		Call_Loc(Local_433.f_73.f_76);
		iVar0++;
	}
}

void func_1384(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_930[iParam0])
	{
		iVar3 = Local_930[iParam0].f_1[iVar0];
		if (iVar3 != -1)
		{
			if (Local_930[iParam0].f_1[iVar0].f_8 == 0)
			{
				func_1386(iParam0, iVar0, iVar3);
			}
			iVar1 = 0;
			while (iVar1 < Local_930[iParam0].f_1[iVar0].f_10)
			{
				if (Local_930[iParam0].f_1[iVar0].f_1[iVar1].f_1 == 0)
				{
					iVar2 = Local_930[iParam0].f_1[iVar0].f_1[iVar1];
					func_1385(iParam0, iVar3, Local_930[iParam0].f_1[iVar2], &(Local_930[iParam0].f_1[iVar0].f_1[iVar1].f_1));
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_1385(int iParam0, int iParam1, var uParam2, var uParam3)
{
}

void func_1386(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 9:
			iVar0 = 241222;
			break;
		
		case 11:
			iVar0 = 241122;
			break;
		
		case 12:
			iVar0 = 241075;
			break;
		
		case 16:
			iVar0 = 240824;
			break;
		
		case 14:
			iVar0 = 240740;
			break;
		
		case 10:
			iVar0 = 240614;
			break;
		
		case 7:
			iVar0 = 240523;
			break;
		
		case 19:
			iVar0 = 240444;
			break;
		
		case 20:
			iVar0 = 240332;
			break;
		
		case 21:
			iVar0 = 240220;
			break;
		
		case 13:
			iVar0 = 238472;
			iVar1 = 237879;
			break;
		
		case 6:
			iVar0 = 237599;
			break;
		
		case 27:
			iVar0 = 237394;
			break;
		
		case 29:
			iVar0 = 236991;
			break;
		
		case 40:
			iVar0 = 236894;
			break;
		
		case 22:
			iVar0 = 236886;
			break;
		
		case 42:
			iVar0 = 236656;
			break;
		
		case 24:
			iVar0 = 236361;
			break;
		
		case 1:
			iVar0 = 236065;
			break;
		
		case 2:
			iVar0 = 235569;
			break;
		
		case 41:
			iVar0 = 235098;
			break;
		
		case 17:
			iVar0 = 234673;
			break;
	}
	if (iVar0 != 0)
	{
		func_1387(iParam0, iParam1, iVar0, iVar1);
	}
}

void func_1387(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Local_930[iParam0].f_1[iParam1].f_8 = iParam2;
	Local_930[iParam0].f_1[iParam1].f_9 = iParam3;
}

void func_1388(int iParam0, int iParam1)
{
	if (!func_1393(iParam1, 1306903184, 1) && func_118(Local_1270.f_24[iParam0]))
	{
		Var0 = { func_1392(iParam0) };
		AI::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(iParam1, Var0, 2f, func_1391(iParam0), 1, func_1390(iParam0), 50f, 0, 10f, func_1389(iParam0), 100f, 10f);
	}
}

int func_1389(int iParam0)
{
	if (Local_433.f_73.f_72.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_72.f_3);
		return StackVal;
	}
	return 25;
}

int func_1390(int iParam0)
{
	if (Local_433.f_73.f_72.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_72.f_2);
		return StackVal;
	}
	return 1076642364;
}

int func_1391(int iParam0)
{
	if (Local_433.f_73.f_72.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_72.f_1);
		return StackVal;
	}
	if (Local_218.f_28.f_1[iParam0].f_8 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[Local_218.f_28.f_1[iParam0].f_8]) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_1270.f_91[Local_218.f_28.f_1[iParam0].f_8]), 0))
		{
			return NETWORK::NET_TO_VEH(Local_1270.f_91[Local_218.f_28.f_1[iParam0].f_8]);
		}
	}
	return 0;
}

Vector3 func_1392(int iParam0)
{
	if (Local_433.f_73.f_72 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_72);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_1393(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = AI::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_1394(int iParam0, int iParam1)
{
	if (!PED::IS_PED_IN_GROUP(iParam1))
	{
		if (func_1397(iParam0, iParam1))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam1);
			}
			else
			{
				PED::_0xF1C03A5352243A30(iParam1);
				AI::CLEAR_PED_TASKS(iParam1);
				PED::SET_PED_CONFIG_FLAG(iParam1, 268, true);
				PED::SET_PED_AS_GROUP_MEMBER(iParam1, uLocal_1188);
				PED::SET_GROUP_FORMATION_SPACING(uLocal_1188, 2f, 0f, 0f);
				PED::SET_GROUP_SEPARATION_RANGE(uLocal_1188, 36f);
			}
		}
		else if (Local_433.f_73.f_70.f_1 != 0)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_73.f_70.f_1);
				switch (StackVal)
				{
					case 1:
						func_1468(iParam0, iParam1);
						break;
					
					case 2:
						func_1462(iParam0, iParam1);
						break;
					}
				}
		}
	}
	else if (PED::IS_PED_GROUP_MEMBER(iParam1, uLocal_1188))
	{
		Stack.Push((func_1396(iLocal_1217, iParam1, 1) > func_1395(iParam0) || !bLocal_1213));
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_70);
		if (StackVal || !StackVal)
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam1);
			}
			else
			{
				PED::REMOVE_PED_FROM_GROUP(iParam1);
			}
		}
	}
}

float func_1395(int iParam0)
{
	return 35f;
}

float func_1396(int iParam0, int iParam1, int iParam2)
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

int func_1397(var uParam0, int iParam1)
{
	if (!bLocal_1213)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_70);
	if (!StackVal)
	{
		return 0;
	}
	PED::GET_GROUP_SIZE(uLocal_1188, &uVar0, &iVar1);
	if (iVar1 > 0)
	{
		return 0;
	}
	if (func_1396(iLocal_1217, iParam1, 1) > func_1398(uParam0))
	{
		return 0;
	}
	return 1;
}

float func_1398(var uParam0)
{
	return 7.5f;
}

void func_1399(int iParam0, int iParam1)
{
	if (func_118(Local_1270.f_24[iParam0]))
	{
		if (Local_433.f_73.f_65 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_65);
			iVar0 = StackVal;
			iVar1 = 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam1);
			iVar1 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam1, iVar0, 0))
				{
					if (AI::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 8)
					{
						iVar2 = iLocal_1217;
						if (Local_433.f_73.f_65.f_1 != 0)
						{
							Stack.Push(iParam0);
							Call_Loc(Local_433.f_73.f_65.f_1);
							iVar2 = StackVal;
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							AI::TASK_HELI_MISSION(iParam1, iVar0, 0, iVar2, 0f, 0f, 0f, 8, func_1402(iParam0, 0), 10f, -1f, SYSTEM::ROUND(func_1401(iParam0)), func_1400(iParam0), -1082130432, 0);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							VEHICLE::SET_BOAT_ANCHOR(iVar0, 0);
							AI::TASK_BOAT_MISSION(iParam1, iVar0, 0, iVar2, 0f, 0f, 0f, 8, func_1402(iParam0, 1), 786469, -1f, 7);
						}
						else
						{
							AI::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iVar0, iVar2, 8, func_1402(iParam0, 0), 786468, 1000f, 1000f, 1);
						}
					}
				}
				else if ((iVar1 && AI::GET_SCRIPT_TASK_STATUS(iParam1, -1794415470) != 1) && AI::GET_SCRIPT_TASK_STATUS(iParam1, -1794415470) != 0)
				{
					AI::TASK_ENTER_VEHICLE(iParam1, iVar0, -1, -1, 1073741824, 9, 0);
				}
			}
		}
	}
}

int func_1400(int iParam0)
{
	if (Local_433.f_73.f_65.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_65.f_4);
		return StackVal;
	}
	return 80;
}

float func_1401(int iParam0)
{
	if (Local_433.f_73.f_65.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_65.f_3);
		return StackVal;
	}
	return 80f;
}

float func_1402(int iParam0, bool bParam1)
{
	if (Local_433.f_73.f_65.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_65.f_2);
		return StackVal;
	}
	if (bParam1)
	{
		return 20f;
	}
	return 30f;
}

void func_1403(int iParam0, int iParam1)
{
	if (func_118(Local_1270.f_24[iParam0]))
	{
		if (func_1406(iParam0, &iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam1, iVar0, 0))
				{
					if (AI::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 1)
					{
						AI::TASK_VEHICLE_MISSION(iParam1, iVar0, 0, 1, func_1405(iParam0), func_1404(iParam0), -1f, -1f, 0);
					}
				}
				else if (AI::GET_SCRIPT_TASK_STATUS(iParam1, -1794415470) != 1 && AI::GET_SCRIPT_TASK_STATUS(iParam1, -1794415470) != 0)
				{
					AI::TASK_ENTER_VEHICLE(iParam1, iVar0, -1, -1, 1073741824, 9, 0);
				}
			}
		}
	}
}

int func_1404(int iParam0)
{
	if (Local_433.f_73.f_62.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_62.f_2);
		return StackVal;
	}
	return 22713;
}

float func_1405(int iParam0)
{
	if (Local_433.f_73.f_62.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_62.f_1);
		return StackVal;
	}
	return 10f;
}

int func_1406(int iParam0, var uParam1)
{
	if (Local_433.f_73.f_62 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_62);
		uVar0 = StackVal;
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar0) && ENTITY::IS_ENTITY_A_VEHICLE(NETWORK::NET_TO_ENT(uVar0)))
		{
			*uParam1 = NETWORK::NET_TO_VEH(uVar0);
			return 1;
		}
	}
	return 0;
}

void func_1407(int iParam0, int iParam1)
{
	if (!func_1393(iParam1, -251125078, 1) && func_118(Local_1270.f_24[iParam0]))
	{
		func_1411(iParam0, iParam1);
		Var0 = { func_1410(iParam0) };
		AI::TASK_SMART_FLEE_COORD(iParam1, Var0, func_1409(iParam0), func_1408(iParam0), 0, 0);
	}
}

int func_1408(int iParam0)
{
	if (Local_433.f_73.f_58.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_58.f_2);
		return StackVal;
	}
	return -1;
}

float func_1409(int iParam0)
{
	if (Local_433.f_73.f_58.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_58.f_1);
		return StackVal;
	}
	return 10000f;
}

Vector3 func_1410(int iParam0)
{
	if (Local_433.f_73.f_58 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_58);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_1270.f_24[iParam0]), 0);
}

void func_1411(int iParam0, int iParam1)
{
	if (Local_433.f_73.f_58.f_3 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_433.f_73.f_58.f_3);
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 5, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 17, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 1024, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 32768, 0);
}

void func_1412(int iParam0, int iParam1)
{
	if (!func_1393(iParam1, -1519143300, 1) && func_118(Local_1270.f_24[iParam0]))
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_433.f_73.f_53.f_4);
		AI::TASK_HANDS_UP(iParam1, func_1416(iParam0), func_1415(iParam0), func_1414(iParam0), func_1413(iParam0));
	}
}

int func_1413(int iParam0)
{
	if (Local_433.f_73.f_53.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_53.f_3);
		return StackVal;
	}
	return 0;
}

int func_1414(int iParam0)
{
	if (Local_433.f_73.f_53.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_53.f_2);
		return StackVal;
	}
	return -1;
}

int func_1415(int iParam0)
{
	if (Local_433.f_73.f_53.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_53.f_1);
		return StackVal;
	}
	return 0;
}

int func_1416(int iParam0)
{
	if (Local_433.f_73.f_53 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_53);
		return StackVal;
	}
	return -1;
}

void func_1417(var uParam0, var uParam1)
{
}

void func_1418(int iParam0, int iParam1)
{
	if (!func_1393(iParam1, 1920390111, 1) && func_118(Local_1270.f_24[iParam0]))
	{
		AI::TASK_ACHIEVE_HEADING(iParam1, func_1419(iParam0), 0);
	}
}

var func_1419(int iParam0)
{
	if (Local_433.f_73.f_49 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_49);
		return StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_105);
	return StackVal;
}

void func_1420(int iParam0, int iParam1)
{
	if (func_118(Local_1270.f_24[iParam0]))
	{
		if (Local_218.f_28.f_1[iParam0].f_8 != -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[Local_218.f_28.f_1[iParam0].f_8]))
			{
				iVar0 = NETWORK::NET_TO_VEH(Local_1270.f_91[Local_218.f_28.f_1[iParam0].f_8]);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (!func_1393(iParam1, -1794415470, 1) || PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(iParam1) != iVar0)
					{
						AI::CLEAR_PED_TASKS(iParam1);
						AI::TASK_ENTER_VEHICLE(iParam1, iVar0, -1, Local_218.f_28.f_1[iParam0].f_9, func_1424(iParam0), 1, 0);
					}
				}
			}
		}
		else if (!func_1393(iParam1, 713668775, 1))
		{
			Var1 = { func_1423(iParam0) };
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, 1);
			AI::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var1, func_1424(iParam0), func_1422(), 1048576000, 4096, func_1421(iParam0));
		}
	}
}

float func_1421(int iParam0)
{
	if (Local_433.f_73.f_44.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_44.f_4);
		return StackVal;
	}
	return 0f;
}

int func_1422()
{
	if (Local_433.f_73.f_44.f_3 != 0)
	{
		Call_Loc(Local_433.f_73.f_44.f_3);
		return StackVal;
	}
	return 20000;
}

Vector3 func_1423(int iParam0)
{
	if (Local_433.f_73.f_44.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_44.f_1);
		return StackVal, StackVal, StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_104);
	return StackVal, StackVal, StackVal;
}

float func_1424(int iParam0)
{
	if (Local_433.f_73.f_44.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_44.f_2);
		return StackVal;
	}
	return 1f;
}

void func_1425(int iParam0, int iParam1)
{
	if (func_118(Local_1270.f_24[iParam0]))
	{
		iVar0 = -1824940423;
		if (func_1426(iParam0))
		{
			iVar0 = 713668775;
		}
		if (!func_1393(iParam1, iVar0, 1))
		{
			Var1 = { func_1423(iParam0) };
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, 1);
			switch (iVar0)
			{
				case 713668775:
					AI::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var1, func_1424(iParam0), func_1422(), 1048576000, 4096, func_1421(iParam0));
					break;
				
				case -1824940423:
					AI::TASK_GO_TO_COORD_ANY_MEANS(iParam1, Var1, func_1424(iParam0), 0, 0, 786603, -1082130432);
					break;
				}
			}
	}
}

int func_1426(int iParam0)
{
	if (Local_433.f_73.f_44 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_44);
		return StackVal;
	}
	return 0;
}

void func_1427(int iParam0, int iParam1)
{
	if (!func_1393(iParam1, 780511057, 1))
	{
		if (func_1430(iParam0, &iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (func_118(Local_1270.f_24[iParam0]))
				{
					func_1429(iParam0, iParam1);
					AI::TASK_COMBAT_PED(iParam1, iVar0, func_1428(iParam0), 16);
				}
			}
		}
	}
}

int func_1428(int iParam0)
{
	if (func_39(iParam0, 14))
	{
		return 67108864;
	}
	if (Local_433.f_73.f_42.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_42.f_1);
	}
	return 0;
}

void func_1429(int iParam0, int iParam1)
{
	if (func_39(iParam0, 23))
	{
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iParam1, 1186503822))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 52, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 53, 1);
			PED::SET_PED_FIRING_PATTERN(iParam1, -1857128337);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 89, 1);
		}
	}
}

int func_1430(var uParam0, var uParam1)
{
	if (Local_433.f_73.f_42 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_433.f_73.f_42);
		uVar0 = StackVal;
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar0) && ENTITY::IS_ENTITY_A_PED(NETWORK::NET_TO_ENT(uVar0)))
		{
			*uParam1 = NETWORK::NET_TO_PED(uVar0);
			return 1;
		}
	}
	return 0;
}

void func_1431(int iParam0, int iParam1)
{
	Var0 = { func_1437(iParam0, -1) };
	fVar3 = func_1436(iParam1, Var0, 0);
	if (Local_433.f_73.f_20.f_19 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Stack.Push(fVar3);
		Call_Loc(Local_433.f_73.f_20.f_19);
	}
	if (func_39(iParam0, 16))
	{
		if (!func_13(&(Local_1270.f_24[iParam0].f_20)))
		{
			func_12(&(Local_1270.f_24[iParam0].f_20), 0, 0);
		}
		if (func_11(&(Local_1270.f_24[iParam0].f_20), 60000, 0))
		{
			if (Local_433.f_73.f_20.f_21 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_433.f_73.f_20.f_21);
			}
		}
	}
	if (fVar3 <= func_1435(iParam0) || func_1433(iParam0))
	{
		if (Local_433.f_73.f_20.f_20 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_433.f_73.f_20.f_20);
		}
		if (func_39(iParam0, 16))
		{
			func_22(&(Local_1270.f_24[iParam0].f_20));
		}
		Local_1270.f_24[iParam0].f_5++;
		if (Local_1270.f_24[iParam0].f_5 >= func_1432(iParam0))
		{
			Local_1270.f_24[iParam0].f_5 = 0;
			func_47(iParam0, 9);
			func_14(3);
		}
	}
}

int func_1432(int iParam0)
{
	if (Local_433.f_73.f_20.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_1);
		return StackVal;
	}
	return 0;
}

int func_1433(int iParam0)
{
	iVar0 = NETWORK::NET_TO_PED(Local_1270.f_24[iParam0]);
	Var1 = { func_1437(iParam0, -1) };
	if (func_1434(iVar0, Var1, func_1435(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_1434(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

float func_1435(int iParam0)
{
	if (Local_433.f_73.f_20.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_4);
		return StackVal;
	}
	return 10f;
}

float func_1436(int iParam0, struct<3> Param1, int iParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam4);
}

Vector3 func_1437(int iParam0, int iParam1)
{
	iVar0 = Local_1270.f_24[iParam0].f_5;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (Local_433.f_73.f_20.f_2 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Call_Loc(Local_433.f_73.f_20.f_2);
		Var1 = { StackVal, StackVal, StackVal };
	}
	return Var1;
}

void func_1438(int iParam0, int iParam1)
{
	bVar0 = func_1457(iParam0);
	uVar1 = func_1456(iParam0);
	if (bVar0 || NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar1))
	{
		if (bVar0)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, 1);
		}
		else
		{
			iVar2 = NETWORK::NET_TO_VEH(uVar1);
		}
		if (bVar0 || !ENTITY::IS_ENTITY_DEAD(iVar2, 0))
		{
			if ((func_1455() && !bVar0) && !PED::IS_PED_IN_VEHICLE(iParam1, iVar2, 0))
			{
				if (func_118(Local_1270.f_24[iParam0]))
				{
					if (!func_1393(iParam1, -1794415470, 1) || PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(iParam1) != iVar2)
					{
						Stack.Push(iParam1);
						Call_Loc(Local_433.f_73.f_4.f_5);
						Stack.Push(iParam1);
						Stack.Push(iVar2);
						Stack.Push(iParam0);
						Call_Loc(Local_433.f_73.f_4.f_1);
						Stack.Push(iParam0);
						Call_Loc(Local_433.f_73.f_4.f_2);
						Stack.Push(iParam0);
						Call_Loc(Local_433.f_73.f_4.f_3);
						Stack.Push(iParam0);
						Call_Loc(Local_433.f_73.f_4.f_4);
						AI::TASK_ENTER_VEHICLE(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0);
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(iParam1))
			{
				if (!func_1393(iParam1, -1273030092, 1))
				{
					if (func_118(Local_1270.f_24[iParam0]))
					{
						Var3 = { func_1437(iParam0, -1) };
						AI::TASK_HELI_MISSION(iParam1, iVar2, 0, 0, Var3, 4, func_1454(iParam0), 10f, -1f, SYSTEM::ROUND(func_1453()), func_1452(), -1f, 128);
						if (Local_1270.f_24[iParam0].f_6 != Local_1270.f_24[iParam0].f_5)
						{
							func_1451(Local_1270.f_24[iParam0].f_5, iParam0);
						}
					}
				}
				else if (Local_1270.f_24[iParam0].f_6 != Local_1270.f_24[iParam0].f_5)
				{
					if (func_118(Local_1270.f_24[iParam0]))
					{
						AI::CLEAR_PED_TASKS(iParam1);
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_BOAT(iParam1))
			{
				if (AI::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(uVar1)) != 4)
				{
					if (func_118(Local_1270.f_24[iParam0]))
					{
						fVar6 = 20f;
						Var7 = { func_1437(iParam0, -1) };
						VEHICLE::SET_BOAT_ANCHOR(iVar2, 0);
						AI::TASK_BOAT_MISSION(iParam1, iVar2, 0, 0, Var7, 4, fVar6, 786469, -1f, 7);
					}
				}
			}
			else if (!func_1393(iParam1, func_1450(iParam0), 1))
			{
				if (func_118(Local_1270.f_24[iParam0]) && (bVar0 || func_118(uVar1)))
				{
					Var10 = { func_1437(iParam0, -1) };
					fVar13 = func_1449(iParam0);
					fVar14 = func_1448(iParam0);
					if (!bVar0)
					{
						func_1447(iVar2);
					}
					if (func_1446(iParam0))
					{
						AI::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(iParam1, Var10, func_1445(iParam0), iVar2, 1, func_1444(iParam0), -1f, 0, fVar14, func_1443(iParam0), fVar13, func_1442(iParam0));
					}
					else
					{
						AI::TASK_VEHICLE_DRIVE_TO_COORD(iParam1, iVar2, Var10, fVar13, func_1441(iParam0), ENTITY::GET_ENTITY_MODEL(iVar2), func_1444(iParam0), func_1442(iParam0), fVar14);
					}
					if (Local_1270.f_24[iParam0].f_6 != Local_1270.f_24[iParam0].f_5)
					{
						func_1451(Local_1270.f_24[iParam0].f_5, iParam0);
					}
					if (func_1440(iParam0) != -1f)
					{
						if (!func_73(iParam0, 14) && !func_1063(iParam0, iLocal_1219, 14))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar2, func_1440(iParam0));
							func_1037(iParam0, 14);
						}
					}
				}
			}
			else if (Local_1270.f_24[iParam0].f_6 != Local_1270.f_24[iParam0].f_5)
			{
				if (func_118(Local_1270.f_24[iParam0]))
				{
					AI::CLEAR_PED_TASKS(iParam1);
				}
			}
			if ((!func_73(iParam0, 10) && !func_1063(iParam0, iLocal_1219, 12)) && func_1439(iParam0))
			{
				if (func_118(Local_1270.f_24[iParam0]))
				{
					AI::CLEAR_PED_TASKS(iParam1);
					func_1037(iParam0, 12);
				}
			}
		}
	}
}

int func_1439(int iParam0)
{
	if (Local_433.f_73.f_20.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_18);
		return StackVal;
	}
	return 0;
}

float func_1440(int iParam0)
{
	if (Local_433.f_73.f_20.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_14);
		return StackVal;
	}
	return -1f;
}

int func_1441(int iParam0)
{
	if (Local_433.f_73.f_20.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_7);
		return StackVal;
	}
	return 0;
}

float func_1442(int iParam0)
{
	if (Local_433.f_73.f_20.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_5);
		return StackVal;
	}
	return 5f;
}

int func_1443(int iParam0)
{
	if (Local_433.f_73.f_20.f_11 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_11);
		return StackVal;
	}
	return 24;
}

int func_1444(int iParam0)
{
	if (Local_433.f_73.f_20.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_8);
		return StackVal;
	}
	return 2359332;
}

float func_1445(int iParam0)
{
	if (Local_433.f_73.f_20.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_10);
		return StackVal;
	}
	return 0f;
}

int func_1446(int iParam0)
{
	if (Local_433.f_73.f_20.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_6);
		return StackVal;
	}
	return 0;
}

void func_1447(int iParam0)
{
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		VEHICLE::SET_BOAT_ANCHOR(iParam0, 0);
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iParam0))
		{
			VEHICLE::CONTROL_LANDING_GEAR(iParam0, 1);
		}
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1, 0);
}

float func_1448(int iParam0)
{
	if (Local_433.f_73.f_20.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_9);
		return StackVal;
	}
	return 0f;
}

float func_1449(int iParam0)
{
	if (Local_433.f_73.f_20.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_3);
		return StackVal;
	}
	return 35f;
}

int func_1450(int iParam0)
{
	if (func_1446(iParam0))
	{
		return 1306903184;
	}
	return -1817882002;
}

void func_1451(var uParam0, int iParam1)
{
	Var0 = -251935260;
	Var0.f_1 = iLocal_1216;
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = GAMEPLAY::GET_FRAME_COUNT();
	Var0.f_5 = iLocal_1225;
	Var0.f_6 = NETWORK::_0x638A3A81733086DB();
	iVar7 = func_1152(1);
	if (iVar7 != 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 7, iVar7);
	}
}

int func_1452()
{
	if (Local_433.f_73.f_20.f_17 != 0)
	{
		Call_Loc(Local_433.f_73.f_20.f_17);
		return StackVal;
	}
	return 80;
}

float func_1453()
{
	if (Local_433.f_73.f_20.f_16 != 0)
	{
		Call_Loc(Local_433.f_73.f_20.f_16);
		return StackVal;
	}
	return 80f;
}

float func_1454(int iParam0)
{
	if (Local_433.f_73.f_20.f_15 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_15);
		return StackVal;
	}
	return 30f;
}

int func_1455()
{
	if (Local_433.f_73.f_20.f_13 != 0)
	{
		Call_Loc(Local_433.f_73.f_20.f_13);
		return StackVal;
	}
	return 0;
}

int func_1456(int iParam0)
{
	if (Local_433.f_73.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20);
		return StackVal;
	}
	if (Local_218.f_28.f_1[iParam0].f_8 != -1)
	{
		return Local_1270.f_91[Local_218.f_28.f_1[iParam0].f_8];
	}
	return 0;
}

int func_1457(var uParam0)
{
	if (Local_433.f_73.f_20.f_12 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_433.f_73.f_20.f_12);
		return StackVal;
	}
	return 0;
}

void func_1458(int iParam0, int iParam1)
{
	if (Local_433.f_73.f_18 != 0)
	{
		if (!func_1393(iParam1, 167901368, 1))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_18);
			uVar0 = StackVal;
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar0) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(uVar0), 0))
			{
				if (func_118(Local_1270.f_24[iParam0]))
				{
					Stack.Push(iParam1);
					Stack.Push(NETWORK::NET_TO_ENT(uVar0));
					Stack.Push(-1);
					Call_Loc(Local_433.f_73.f_18.f_1);
					AI::TASK_SHOOT_AT_ENTITY(StackVal, StackVal, StackVal, StackVal);
				}
			}
		}
	}
}

void func_1459(int iParam0, int iParam1)
{
	if (Local_433.f_73.f_17 != 0)
	{
		if (!func_1393(iParam1, 1630799643, 1))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_17);
			uVar0 = StackVal;
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar0) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(uVar0), 0))
			{
				if (func_118(Local_1270.f_24[iParam0]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, 1);
					AI::TASK_AIM_GUN_AT_ENTITY(iParam1, NETWORK::NET_TO_ENT(uVar0), -1, 0);
				}
			}
		}
	}
}

void func_1460(int iParam0, int iParam1)
{
	if (Local_433.f_73.f_16 != 0)
	{
		if (!func_1393(iParam1, 1237250926, 1))
		{
			if (func_118(Local_1270.f_24[iParam0]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, 1);
				Stack.Push(iParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_73.f_16);
				AI::TASK_AIM_GUN_AT_COORD(StackVal, StackVal, StackVal, StackVal, -1, 0, 0);
			}
		}
	}
}

void func_1461(int iParam0, int iParam1)
{
	if (!func_1393(iParam1, 1120685857, 1))
	{
		if (func_118(Local_1270.f_24[iParam0]))
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_433.f_73.f_13.f_2);
			func_1429(iParam0, iParam1);
			Stack.Push(iParam1);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_13);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_13.f_1);
			AI::TASK_COMBAT_HATED_TARGETS_IN_AREA(StackVal, StackVal, StackVal, StackVal, StackVal, 0);
		}
	}
}

void func_1462(int iParam0, int iParam1)
{
	if (!func_1393(iParam1, -2017877118, 1))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_10);
		STREAMING::REQUEST_ANIM_DICT(StackVal);
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_10);
		if (STREAMING::HAS_ANIM_DICT_LOADED(StackVal))
		{
			if (func_118(Local_1270.f_24[iParam0]))
			{
				Stack.Push(iParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_73.f_10);
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_73.f_10.f_1);
				Stack.Push(1090519040);
				Stack.Push(-1056964608);
				Stack.Push(-1);
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_73.f_10.f_2);
				AI::TASK_PLAY_ANIM(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, 0, 0, 0);
			}
		}
	}
}

void func_1463(int iParam0, int iParam1)
{
	if (func_1464(iParam0, 0))
	{
		if (func_118(Local_1270.f_24[iParam0]))
		{
			if (!func_1393(iParam1, -828834893, 1))
			{
				AI::TASK_LEAVE_ANY_VEHICLE(iParam1, 0, 0);
			}
		}
	}
}

bool func_1464(int iParam0, int iParam1)
{
	return func_4(&(Local_930[iParam0].f_57), iParam1);
}

void func_1465(int iParam0, int iParam1)
{
	if (!func_1464(iParam0, 0))
	{
		if (func_118(Local_1270.f_24[iParam0]))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_4);
			iVar0 = StackVal;
			if (func_39(iParam0, 14))
			{
				iVar0 = Local_218.f_28.f_1[iParam0].f_8;
			}
			if (iVar0 != -1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[iVar0]))
				{
					iVar1 = NETWORK::NET_TO_VEH(Local_1270.f_91[iVar0]);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
					{
						if (!func_1393(iParam1, -1794415470, 1) || PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(iParam1) != iVar1)
						{
							Stack.Push(iParam0);
							Call_Loc(Local_433.f_73.f_4.f_2);
							uVar2 = StackVal;
							if (func_39(iParam0, 14))
							{
								uVar2 = Local_218.f_28.f_1[iParam0].f_9;
							}
							else
							{
								Stack.Push(iParam1);
								Call_Loc(Local_433.f_73.f_4.f_5);
							}
							Stack.Push(iParam1);
							Stack.Push(iVar1);
							Stack.Push(iParam0);
							Call_Loc(Local_433.f_73.f_4.f_1);
							Stack.Push(uVar2);
							Stack.Push(iParam0);
							Call_Loc(Local_433.f_73.f_4.f_3);
							Stack.Push(iParam0);
							Call_Loc(Local_433.f_73.f_4.f_4);
							AI::TASK_ENTER_VEHICLE(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0);
						}
					}
				}
			}
		}
	}
}

void func_1466(int iParam0, int iParam1)
{
	if (func_118(Local_1270.f_24[iParam0]))
	{
		if (!func_1393(iParam1, 474215631, 1))
		{
			AI::TASK_COWER(iParam1, -1);
		}
	}
}

void func_1467(int iParam0, int iParam1)
{
	if (!func_1393(iParam1, -251125078, 1))
	{
		if (func_118(Local_1270.f_24[iParam0]))
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam1, 0);
			AI::TASK_SMART_FLEE_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, 0), 10000f, 999999, 0, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 256, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 2, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 65536, 1);
		}
	}
}

void func_1468(int iParam0, int iParam1)
{
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_1);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(StackVal))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_1);
		if (func_1469(StackVal))
		{
			if (!func_1393(iParam1, -1098463898, 1) && func_118(Local_1270.f_24[iParam0]))
			{
				Stack.Push(iParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_73.f_1);
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_73.f_1.f_1);
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_73.f_1.f_2);
				AI::TASK_START_SCENARIO_AT_POSITION(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, 0, 1);
			}
		}
		else if (!func_1393(iParam1, 993674639, 1) && func_118(Local_1270.f_24[iParam0]))
		{
			Stack.Push(iParam1);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_1);
			AI::TASK_START_SCENARIO_IN_PLACE(StackVal, StackVal, 0, 0);
		}
	}
}

bool func_1469(var uParam0)
{
	return (((((GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "PROP_HUMAN_SEAT_SUNLOUNGER") || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "WORLD_HUMAN_SEAT_LEDGE")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "WORLD_HUMAN_SEAT_LEDGE_EATING")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "WORLD_HUMAN_SEAT_STEPS")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "WORLD_HUMAN_SEAT_WALL")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "WORLD_HUMAN_SEAT_WALL_EATING"));
}

void func_1470(int iParam0)
{
	bVar0 = (VEHICLE::IS_THIS_MODEL_A_HELI(Local_218.f_95.f_1[Local_218.f_28.f_1[iParam0].f_8].f_3) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_218.f_95.f_1[Local_218.f_28.f_1[iParam0].f_8].f_3));
	if (Local_218.f_28.f_1[iParam0].f_9 == -1)
	{
		if (bVar0)
		{
			func_1475(iParam0);
		}
		else
		{
			func_1474(iParam0);
		}
	}
	else if (bVar0)
	{
		func_1473(iParam0);
	}
	else
	{
		func_1471(iParam0);
	}
}

void func_1471(int iParam0)
{
	func_485(iParam0, 0, 6);
	func_1472(iParam0, 0, 1);
	func_1472(iParam0, 0, 2);
	func_1472(iParam0, 0, 3);
	func_485(iParam0, 1, 7);
	func_1472(iParam0, 1, 0);
	func_1472(iParam0, 1, 2);
	func_1472(iParam0, 1, 3);
	func_485(iParam0, 2, 14);
	func_1472(iParam0, 2, 0);
	func_1472(iParam0, 2, 1);
	func_1472(iParam0, 2, 3);
	func_485(iParam0, 3, 16);
	func_1472(iParam0, 3, 0);
	func_1472(iParam0, 3, 1);
	func_1472(iParam0, 3, 2);
}

void func_1472(int iParam0, int iParam1, int iParam2)
{
	iVar0 = Local_930[iParam0].f_1[iParam1].f_10;
	uVar1 = iParam2;
	Local_930[iParam0].f_1[iParam1].f_1[iVar0] = uVar1;
	Local_930[iParam0].f_1[iParam1].f_10++;
}

void func_1473(int iParam0)
{
	func_485(iParam0, 0, 6);
	func_1472(iParam0, 0, 1);
	func_485(iParam0, 1, 7);
	func_1472(iParam0, 1, 0);
}

void func_1474(int iParam0)
{
	func_485(iParam0, 0, 6);
	func_1472(iParam0, 0, 2);
	func_1472(iParam0, 0, 1);
	func_1472(iParam0, 0, 3);
	func_1472(iParam0, 0, 4);
	func_485(iParam0, 2, 7);
	func_1472(iParam0, 2, 0);
	func_1472(iParam0, 2, 1);
	func_1472(iParam0, 2, 3);
	func_1472(iParam0, 2, 4);
	func_485(iParam0, 1, 17);
	func_1472(iParam0, 1, 0);
	func_1472(iParam0, 1, 2);
	func_1472(iParam0, 1, 3);
	func_1472(iParam0, 1, 4);
	func_485(iParam0, 3, 14);
	func_1472(iParam0, 3, 0);
	func_1472(iParam0, 3, 2);
	func_1472(iParam0, 3, 1);
	func_1472(iParam0, 3, 4);
	func_485(iParam0, 4, 16);
	func_1472(iParam0, 4, 0);
	func_1472(iParam0, 4, 2);
	func_1472(iParam0, 4, 1);
	func_1472(iParam0, 4, 3);
}

void func_1475(int iParam0)
{
	func_485(iParam0, 0, 6);
	func_1472(iParam0, 0, 2);
	func_1472(iParam0, 0, 1);
	func_485(iParam0, 2, 7);
	func_1472(iParam0, 2, 0);
	func_1472(iParam0, 2, 1);
	func_485(iParam0, 1, 17);
	func_1472(iParam0, 1, 0);
	func_1472(iParam0, 1, 2);
}

void func_1476()
{
	Call_Loc(Local_433.f_6.f_1);
	func_1477();
}

void func_1477()
{
	iVar0 = 0;
	while (iVar0 < iLocal_1228)
	{
		iVar1 = Local_817[iVar0];
		if (iVar1 != -1)
		{
			if (Local_817[iVar0].f_1[0].f_1 == 0)
			{
				iVar2 = 0;
				while (iVar2 < Local_817[iVar0].f_14)
				{
					iVar3 = Local_817[iVar0].f_1[iVar2];
					func_1487(iVar1, Local_817[iVar3], &(Local_817[iVar0].f_1[iVar2].f_1));
					iVar2++;
				}
			}
			if (Local_817[iVar0].f_13 == 0)
			{
				func_1483(iVar0, iVar1);
			}
			if (Local_817[iVar0].f_12 == 0)
			{
				func_1479(iVar0, iVar1);
			}
			if (Local_817[iVar0].f_15 == 0)
			{
				Local_817[iVar0].f_15 = 242395;
			}
		}
		iVar0++;
	}
}

void func_1478()
{
}

void func_1479(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			iVar0 = 242510;
			break;
		
		case 30:
			iVar0 = 242497;
			break;
	}
	if (iVar0 != 0)
	{
		func_1480(iParam0, iVar0);
	}
	else
	{
		Local_817[iParam0].f_12 = 242395;
	}
}

void func_1480(int iParam0, int iParam1)
{
	Local_817[iParam0].f_12 = iParam1;
}

void func_1481()
{
	func_745(4);
}

void func_1482()
{
	func_745(1);
}

void func_1483(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			iVar0 = 242630;
			break;
		
		case 30:
			iVar0 = 242617;
			break;
	}
	if (iVar0 != 0)
	{
		func_1484(iParam0, iVar0);
	}
	else
	{
		Local_817[iParam0].f_13 = 242395;
	}
}

void func_1484(int iParam0, int iParam1)
{
	Local_817[iParam0].f_13 = iParam1;
}

void func_1485()
{
	func_745(4);
}

void func_1486()
{
	func_943();
}

void func_1487(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 25:
		case 27:
		case 28:
		case 26:
			switch (iParam1)
			{
				case 25:
					*uParam2 = 243437;
					break;
				
				case 27:
					*uParam2 = 243413;
					break;
				
				case 28:
					*uParam2 = 243393;
					break;
				
				case 26:
					*uParam2 = 243296;
					break;
			}
			break;
		
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
		case 36:
			switch (iParam1)
			{
				case 32:
					*uParam2 = 243174;
					break;
				
				case 33:
					*uParam2 = 243165;
					break;
				
				case 34:
					*uParam2 = 243156;
					break;
				
				case 35:
					*uParam2 = 243147;
					break;
				
				case 37:
					*uParam2 = 243138;
					break;
				
				case 36:
					*uParam2 = 242929;
					break;
			}
			break;
		
		case 42:
			*uParam2 = 242913;
			break;
	}
}

bool func_1488()
{
	return func_369(iLocal_1219, 7);
}

int func_1489()
{
	if ((!func_969(iLocal_1216, 1) && !func_749(iLocal_1216, 0, 1, 0)) && func_1490(0))
	{
		return 1;
	}
	return 0;
}

int func_1490(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 6))
		{
			if (!func_6(iVar0, 3))
			{
				if (!func_6(iVar0, 4) || iParam0)
				{
					if (func_1491(iVar0))
					{
						iVar1++;
					}
				}
				else
				{
					iVar2++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	if (iVar1 > 0 && iVar1 == (func_7() - iVar2))
	{
		return 1;
	}
	return 0;
}

bool func_1491(int iParam0)
{
	return Local_1164[iParam0].f_4 != func_68();
}

int func_1492()
{
	return 0;
}

int func_1493()
{
	return 0;
}

int func_1494()
{
	return 0;
}

int func_1495()
{
	return 0;
}

int func_1496()
{
	if ((!func_969(iLocal_1216, 1) && !func_749(iLocal_1216, 0, 1, 0)) || func_1187(func_1122(), 1))
	{
		if (!func_1490(0) && !func_1497(0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1497(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_1187(iVar0, iParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_1498()
{
	if (func_1501())
	{
		return 0;
	}
	if (!func_1499())
	{
		return 0;
	}
	if (func_749(iLocal_1216, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1499()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_691(iVar0, iLocal_1219, 12))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1500()
{
	if (func_1501())
	{
		return 0;
	}
	return 1;
}

int func_1501()
{
	if (func_969(iLocal_1216, 1))
	{
		return 1;
	}
	return 0;
}

int func_1502()
{
	if (func_1501())
	{
		return 0;
	}
	if (func_1490(0))
	{
		return 0;
	}
	if (func_749(iLocal_1216, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1503()
{
	Call_Loc(Local_433.f_6);
	func_1504();
}

void func_1504()
{
	iVar0 = 0;
	while (iVar0 < iLocal_1227)
	{
		iVar1 = Local_711[iVar0];
		if (iVar1 != -1)
		{
			if (Local_711[iVar0].f_1[0].f_1 == 0)
			{
				func_1513(iVar1, &(Local_711[iVar0].f_1[0].f_1));
			}
			if (Local_711[iVar0].f_13 == 0)
			{
				func_1509(iVar0, iVar1);
			}
			if (Local_711[iVar0].f_12 == 0)
			{
				func_1505(iVar0, iVar1);
			}
		}
		iVar0++;
	}
}

void func_1505(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			break;
		
		case 44:
			iVar0 = 243738;
			break;
		
		case 30:
			iVar0 = 243730;
			break;
	}
	if (iVar0 != 0)
	{
		func_1506(iParam0, iVar0);
	}
	else
	{
		Local_711[iParam0].f_12 = 242395;
	}
}

void func_1506(int iParam0, int iParam1)
{
	Local_711[iParam0].f_12 = iParam1;
}

void func_1507()
{
}

void func_1508()
{
	if (func_534())
	{
		func_423(11);
		func_10(3);
	}
	else
	{
		func_10(4);
	}
}

void func_1509(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			iVar0 = 243879;
			break;
		
		case 30:
			iVar0 = 243866;
			break;
	}
	if (iVar0 != 0)
	{
		func_1510(iParam0, iVar0);
	}
	else
	{
		Local_711[iParam0].f_13 = 242395;
	}
}

void func_1510(int iParam0, int iParam1)
{
	Local_711[iParam0].f_13 = iParam1;
}

void func_1511()
{
	func_1331(4);
}

void func_1512()
{
	func_1331(1);
}

void func_1513(int iParam0, var uParam1)
{
	*uParam1 = 244331;
	switch (iParam0)
	{
		case 4:
			*uParam1 = 244212;
			break;
		
		case 25:
			*uParam1 = 244148;
			break;
		
		case 27:
			*uParam1 = 244127;
			break;
		
		case 8:
			*uParam1 = 244102;
			break;
		
		case 32:
			*uParam1 = 244023;
			break;
		
		case 30:
			*uParam1 = 244010;
			break;
	}
}

bool func_1514()
{
	return func_3(4);
}

int func_1515()
{
	if (func_379())
	{
		return 1;
	}
	else if (func_1516())
	{
		return 1;
	}
	return 0;
}

int func_1516()
{
	iVar0 = 0;
	while (iVar0 < Local_218.f_10)
	{
		if (!func_6(iVar0, 4))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_1517()
{
	return func_1518();
}

bool func_1518()
{
	return iLocal_1182 == 0;
}

int func_1519()
{
	if (func_1497(0))
	{
		return 1;
	}
	return 0;
}

int func_1520()
{
	if (func_1521())
	{
		return 1;
	}
	return 0;
}

int func_1521()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1522()
{
	if (func_1526())
	{
		return 1;
	}
	if (func_1524())
	{
		return 1;
	}
	if (func_1523())
	{
		return 1;
	}
	return 0;
}

int func_1523()
{
	return 0;
}

int func_1524()
{
	iVar0 = Local_218.f_136[func_1525()].f_6;
	if (iVar0 != -1)
	{
		if (func_55(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1525()
{
	return Local_1270.f_146;
}

bool func_1526()
{
	return func_3(1);
}

int func_1527()
{
	return 0;
}

int func_1528()
{
	return Local_1270.f_122;
}

int func_1529()
{
	return Local_1436[iLocal_1218].f_22;
}

int func_1530()
{
	return 0;
}

int func_1531()
{
	func_1536(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_1535())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_1534())
	{
		return 1;
	}
	if (func_1533(159))
	{
		if (!func_1532())
		{
			return 1;
		}
	}
	if (func_1533(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_920() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_920()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1532()
{
	return Global_2450632.f_598;
}

int func_1533(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1534()
{
	return Global_2460680;
}

bool func_1535()
{
	return Global_2450632.f_593;
}

void func_1536(var uParam0)
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
					func_1537(iVar0);
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

void func_1537(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_28(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_1538(uVar4, &bVar5))
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

int func_1538(int iParam0, var uParam1)
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

void func_1539()
{
	SYSTEM::WAIT(0);
}

void func_1540()
{
	Local_433.f_6 = 246968;
	Local_433.f_6.f_1 = 246907;
	Local_433.f_2 = 246898;
	Local_433.f_1 = 246889;
	Local_433.f_17 = 244331;
	Local_433.f_26.f_2 = 246880;
	Local_433.f_26 = 246868;
	Local_433.f_18 = 246859;
	Local_433.f_18.f_1 = 246850;
	Local_433.f_18.f_2 = 246841;
	Local_433.f_18.f_3 = 246832;
	Local_433.f_18.f_4 = 246820;
	Local_433.f_18.f_5 = 246811;
	Local_433.f_38 = 246802;
	Local_433.f_37 = 246779;
	Local_433.f_54.f_11 = 246770;
	Local_433.f_54.f_12 = 246759;
	Local_433.f_54 = 246713;
	Local_433.f_73.f_103 = 246693;
	Local_433.f_73.f_104 = 246630;
	Local_433.f_73.f_105 = 246569;
	Local_433.f_73.f_106 = 246549;
	Local_433.f_73.f_99 = 246540;
	Local_433.f_73.f_99.f_1 = 246518;
	Local_433.f_73.f_99.f_2 = 246498;
	Local_433.f_73 = 246490;
	Local_433.f_73.f_76 = 246432;
	Local_433.f_73.f_1 = 246369;
	Local_433.f_73.f_1.f_1 = 246351;
	Local_433.f_73.f_1.f_2 = 246333;
	Local_433.f_73.f_4 = 246313;
	Local_433.f_73.f_4.f_1 = 246304;
	Local_433.f_73.f_4.f_2 = 246295;
	Local_433.f_73.f_4.f_3 = 246286;
	Local_433.f_73.f_4.f_4 = 246261;
	Local_433.f_73.f_4.f_5 = 246247;
	Local_433.f_73.f_10 = 246235;
	Local_433.f_73.f_10.f_1 = 246223;
	Local_433.f_73.f_10.f_2 = 246214;
	Local_433.f_73.f_13 = 246144;
	Local_433.f_73.f_13.f_1 = 246131;
	Local_433.f_73.f_13.f_2 = 245929;
	Local_433.f_73.f_18.f_1 = 245916;
	Local_433.f_73.f_53.f_4 = 245896;
	Local_433.f_73.f_70 = 245887;
	Local_433.f_188.f_12 = 245878;
	Local_433.f_188.f_20 = 245869;
	Local_433.f_188.f_21 = 245722;
	Local_433.f_188.f_16 = 245713;
	Local_433.f_235.f_11 = 245704;
	Local_433.f_235.f_12 = 245689;
	Local_433.f_235 = 245680;
	Local_433.f_249 = 194198;
	Local_433.f_250 = 245637;
	Local_433.f_250.f_1 = 245628;
	Local_433.f_252 = 245603;
	Local_433.f_257.f_2 = 245594;
	Local_433.f_257.f_5 = 245585;
}

int func_1541(var uParam0)
{
	return 1;
}

int func_1542(var uParam0)
{
	return 0;
}

int func_1543(var uParam0)
{
	if (func_6(0, 1))
	{
		return 0;
	}
	return func_1289();
}

int func_1544(var uParam0, var uParam1, var uParam2)
{
	return 1;
}

int func_1545(int iParam0)
{
	if (func_83(iParam0, 2))
	{
		return 3000;
	}
	if (func_83(iParam0, 6))
	{
		return 6500;
	}
	return 10000;
}

int func_1546(var uParam0)
{
	return 1;
}

bool func_1547(var uParam0)
{
	return func_1024() == 42;
}

int func_1548()
{
	return 1;
}

int func_1549(var uParam0, var uParam1)
{
	return 0;
}

struct<30> func_1550(var uParam0)
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
	Var0.f_1 = 1;
	Var0.f_5 = 0;
	Var0.f_6 = 1;
	Var0.f_10 = 0;
	Var0.f_12 = 1;
	Var0.f_4 = 150f;
	Var0 = 0f;
	Var0.f_27 = 0;
	return Var0;
}

int func_1551(var uParam0, var uParam1, var uParam2)
{
	return 0;
}

int func_1552(var uParam0)
{
	return 0;
}

int func_1553(var uParam0)
{
	return 1;
}

void func_1554(var uParam0, int iParam1)
{
	WEAPON::SET_CURRENT_PED_WEAPON(iParam1, -1569615261, 1);
}

int func_1555()
{
	return -957453492;
}

void func_1556(var uParam0, int iParam1)
{
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_1);
	Stack.Push(GAMEPLAY::IS_STRING_NULL_OR_EMPTY(StackVal));
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_1);
	Stack.Push((StackVal || GAMEPLAY::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_PUSH_UPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_1);
	Stack.Push((StackVal || GAMEPLAY::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_BUM_SLUMPED")));
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_1);
	Stack.Push((StackVal || GAMEPLAY::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SUNBATHE_BACK")));
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_1);
	Stack.Push((StackVal || GAMEPLAY::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_LEDGE_EATING")));
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_1);
	Stack.Push((StackVal || GAMEPLAY::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_STEPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_1);
	Stack.Push((StackVal || GAMEPLAY::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_WALL")));
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_1);
	if (StackVal || GAMEPLAY::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_LEDGE"))
	{
		return;
	}
	PED::_0xF1C03A5352243A30(iParam1);
}

float func_1557(var uParam0)
{
	return 299.9f;
}

Vector3 func_1558(int iParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_24[iParam0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_1270.f_24[iParam0]), 0))
		{
			return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_1270.f_24[iParam0]), 1);
		}
	}
	return 0f, 0f, 0f;
}

int func_1559(var uParam0)
{
	return 1;
}

char* func_1560(var uParam0)
{
	return "";
}

char* func_1561(var uParam0)
{
	return "";
}

void func_1562(int iParam0)
{
	AI::CLEAR_PED_TASKS(iParam0);
}

int func_1563(int iParam0)
{
	if (func_39(iParam0, 14))
	{
		return 9;
	}
	return 1;
}

float func_1564(var uParam0)
{
	return 3f;
}

int func_1565(var uParam0)
{
	return -1;
}

int func_1566(var uParam0)
{
	return -1;
}

var func_1567(int iParam0)
{
	return Local_218.f_28.f_1[iParam0].f_8;
}

var func_1568(var uParam0)
{
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_105);
	return StackVal;
}

Vector3 func_1569(var uParam0)
{
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_104);
	return StackVal, StackVal, StackVal;
}

char* func_1570(int iParam0)
{
	if (Local_218.f_28.f_1[iParam0].f_10 != -1)
	{
		return func_1571(&(Local_218.f_190[Local_218.f_28.f_1[iParam0].f_10]));
	}
	return "";
}

var func_1571(var uParam0)
{
	return uParam0;
}

void func_1572(int iParam0)
{
	func_475(iParam0, 134096);
	func_475(iParam0, 134233);
	func_475(iParam0, 134048);
	func_475(iParam0, 134127);
	func_475(iParam0, 134072);
}

void func_1573(var uParam0)
{
}

var func_1574(int iParam0)
{
	return Local_218.f_28.f_1[iParam0].f_6;
}

Vector3 func_1575(int iParam0)
{
	return Local_218.f_28.f_1[iParam0].f_3;
}

int func_1576(var uParam0)
{
	return 1;
}

var func_1577(int iParam0)
{
	return Local_218.f_28.f_1[iParam0].f_7;
}

var func_1578(int iParam0)
{
	Stack.Push(func_73(iParam0, 16));
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_99);
	if (StackVal && StackVal)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_99.f_2);
		return StackVal;
	}
	return Local_218.f_28.f_1[iParam0].f_6;
}

Vector3 func_1579(int iParam0)
{
	Stack.Push(func_73(iParam0, 16));
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_99);
	if (StackVal && StackVal)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_99.f_1);
		return StackVal, StackVal, StackVal;
	}
	return Local_218.f_28.f_1[iParam0].f_3;
}

var func_1580(int iParam0)
{
	return Local_218.f_28.f_1[iParam0].f_2;
}

int func_1581(var uParam0)
{
	switch (func_1024())
	{
		case 25:
		case 27:
		case 28:
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

Vector3 func_1582(var uParam0)
{
	return 0f, 0f, 0f;
}

int func_1583(var uParam0)
{
	return 1;
}

Vector3 func_1584()
{
	return Local_218.f_136[0];
	return 0f, 0f, 0f;
}

int func_1585()
{
	return 1;
}

float func_1586()
{
	return 1f;
}

int func_1587()
{
	return 600000;
}

int func_1588()
{
	return 0;
}

int func_1589()
{
	return 0;
}

int func_1590()
{
	return 0;
}

int func_1591()
{
	return 0;
}

var func_1592()
{
	return Local_218.f_125;
}

int func_1593()
{
	return 1;
}

int func_1594()
{
	return 1;
}

int func_1595()
{
	return 1;
}

void func_1596()
{
	func_520(0, 4, 242395);
	func_503(0, 1);
	func_502(1, 2, 4, 5, 3, 242395, 242395, 242395, 242395, 1);
	func_520(3, 44, 242395);
}

void func_1597()
{
	func_529(0, 4);
	func_527(0, 1, 244212);
	func_529(1, 25);
	func_527(1, 2, 244148);
	func_529(2, 27);
	func_527(2, 3, 244127);
	func_529(3, 44);
	func_1506(3, 243738);
}

void func_1598(var uParam0)
{
	Global_1681961.f_4713 = 0;
	Global_1681961.f_4714 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		*uParam0 = { func_1599() };
	}
}

struct<2> func_1599()
{
	Var0 = -1;
	Var0.f_1 = -1000;
	Var0 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
	Var0.f_1 = NETWORK::_0x638A3A81733086DB();
	return Var0;
}

void func_1600()
{
	bVar0 = func_408() != false;
	bVar1 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	if (func_1626())
	{
		func_1616(0, 0, 0);
	}
	func_965(0);
	OBJECT::_0x0BF3B3BD47D79C08(Local_218.f_10.f_5[0].f_2, -1);
	func_1234(0, func_1236(iLocal_1225));
	func_1614(bVar0);
	if (bVar1)
	{
		func_1610(Local_1270.f_164);
		func_1609();
		if (func_732(iLocal_1216))
		{
			func_753(0);
		}
	}
	func_915(1, 1, 1);
	func_522();
	func_1608();
	func_1365(0);
	if (bVar0)
	{
		func_1607();
		func_1606();
		func_1604();
		func_1602();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_688();
		}
	}
	if (Local_433.f_5 != 0)
	{
		Call_Loc(Local_433.f_5);
	}
	func_1601();
	func_1229(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1601()
{
}

void func_1602()
{
	iVar0 = 0;
	while (iVar0 < Local_218.f_112)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_98[iVar0]))
		{
			if (func_124(iVar0, 26))
			{
				NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_1270.f_98[iVar0]), 0, 1);
			}
			if (func_1603(iVar0))
			{
				if (func_118(Local_1270.f_98[iVar0]))
				{
					func_1032(&(Local_1270.f_98[iVar0]));
				}
			}
			else
			{
				func_108(&(Local_1270.f_98[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_1603(int iParam0)
{
	return 0;
}

void func_1604()
{
	iVar0 = 0;
	while (iVar0 < Local_218.f_95)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[iVar0]))
		{
			if (func_135(iVar0, 32) && !func_1243(NETWORK::NET_TO_VEH(Local_1270.f_91[iVar0]), 0, 1))
			{
				NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_1270.f_91[iVar0]), 0, 1);
			}
			if (NETWORK::NET_TO_VEH(Local_1270.f_91[iVar0]) == VEHICLE::GET_LAST_DRIVEN_VEHICLE())
			{
				VEHICLE::_0xE01903C47C7AC89E();
			}
			if (func_1605(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1270.f_91[iVar0]))
				{
					func_1032(&(Local_1270.f_91[iVar0]));
				}
			}
			else
			{
				func_108(&(Local_1270.f_91[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_1605(int iParam0)
{
	bVar0 = !func_1243(NETWORK::NET_TO_VEH(Local_1270.f_91[iParam0]), 0, 1);
	if (func_368(iParam0, 2) && bVar0)
	{
		return 1;
	}
	return 0;
}

void func_1606()
{
	iVar0 = 0;
	while (iVar0 < Local_218.f_28)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_24[iVar0]))
		{
			uVar1 = NETWORK::NET_TO_PED(Local_1270.f_24[iVar0]);
			if (!ENTITY::IS_ENTITY_DEAD(uVar1, 0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1270.f_24[iVar0]))
				{
					if (PED::GET_PED_TYPE(iVar1) == 6)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, 0);
						if (PED::IS_PED_USING_ANY_SCENARIO(iVar1))
						{
							PED::_0xF1C03A5352243A30(iVar1);
						}
						AI::CLEAR_PED_TASKS(iVar1);
						PED::SET_PED_KEEP_TASK(iVar1, 0);
					}
				}
				PED::REMOVE_PED_FROM_GROUP(iVar1);
			}
			if (Local_433.f_73.f_114 != 0)
			{
				Stack.Push(iVar0);
				Call_Loc(Local_433.f_73.f_114);
			}
			func_108(&(Local_1270.f_24[iVar0]));
		}
		iVar0++;
	}
}

void func_1607()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1270.f_2[iVar0]))
			{
				func_1032(&(Local_1270.f_2[iVar0]));
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2.f_18[iVar0]))
		{
			if (func_118(Local_1270.f_2.f_18[iVar0]))
			{
				func_1032(&(Local_1270.f_2.f_18[iVar0]));
			}
			func_108(&(Local_1270.f_2.f_18[iVar0]));
		}
		iVar0++;
	}
}

void func_1608()
{
	iVar0 = 0;
	while (iVar0 < Local_218.f_164)
	{
		func_905(&(uLocal_1209[iVar0]));
		iVar0++;
	}
}

void func_1609()
{
	Var0 = { func_1014() };
	GAMEPLAY::CLEAR_AREA_OF_VEHICLES(Var0, 80f, 0, 0, 1, 1, 1, 0);
}

void func_1610(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_694(Global_1628237[PLAYER::PLAYER_ID()].f_579.f_1[iVar0]))
		{
			if (func_393(Global_1628237[PLAYER::PLAYER_ID()].f_579.f_1[iVar0]))
			{
				Var1 = { func_1612(Global_1628237[PLAYER::PLAYER_ID()].f_579.f_1[iVar0]) };
				if (func_1611(Var1, Param0))
				{
					Global_1628237[PLAYER::PLAYER_ID()].f_579.f_1[iVar0].f_1 = -1;
				}
			}
			else
			{
				Global_1628237[PLAYER::PLAYER_ID()].f_579.f_1[iVar0].f_1 = -1;
			}
		}
		iVar0++;
	}
	if (func_1280(PLAYER::PLAYER_ID()) <= 0)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_579), 0);
		func_1224();
	}
}

int func_1611(struct<2> Param0, struct<2> Param2)
{
	if (!func_391(Param0))
	{
		return 0;
	}
	if (Param0 == Param2 && Param0.f_1 == Param2.f_1)
	{
		return 1;
	}
	return 0;
}

struct<2> func_1612(struct<2> Param0)
{
	iVar0 = func_1613(Param0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		Var1 = -1;
		Var1.f_1 = -1000;
		return Var1;
	}
	return Global_2419327.f_199.f_1[iVar0].f_11;
}

int func_1613(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_394(Param0, Global_2419327.f_199.f_1[iVar0].f_1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1614(bool bParam0)
{
	if (bParam0)
	{
	}
	else
	{
		func_1615();
	}
}

void func_1615()
{
}

void func_1616(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_1617(iLocal_1216, 0, iParam1, iParam2);
		func_423(26);
	}
	else
	{
		func_1617(iLocal_1216, 1, iParam1, iParam2);
		func_709(26);
	}
}

void func_1617(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_1625())
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
		uVar0 = uParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = uParam2 & 2 != false;
		bVar3 = uParam2 & 4 != false;
		bVar4 = uParam2 & 8 != false;
		bVar5 = uParam2 & 16 != false;
		bVar6 = uParam2 & 32 != false;
		bVar7 = uParam2 & 64 != false;
		bVar8 = uParam2 & 128 != false;
		bVar9 = uParam2 & 256 != false;
		bVar10 = uParam2 & 512 != false;
		bVar11 = uParam2 & 1024 != false;
		bVar12 = uParam2 & 2048 != false;
		bVar13 = uParam2 & 4096 != false;
		bVar14 = uParam2 & 8192 != false;
		bVar15 = uParam2 & 16384 != false;
		bVar16 = uParam2 & 32768 != false;
		bVar17 = uParam2 & 65536 != false;
		bVar18 = uParam2 & 131072 != false;
		bVar19 = uParam2 & 262144 != false;
		bVar20 = uParam2 & 524288 != false;
		bVar21 = uParam2 & 1048576 != false;
		bVar22 = uParam2 & 2097152 != false;
		bVar23 = uParam2 & 4194304 != false;
		bVar24 = uParam2 & 8388608 != false;
		bVar25 = uParam2 & 16777216 != false;
		if (uParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_670())
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
				else if (bVar14 || (!func_25(PLAYER::PLAYER_ID(), 0) && !func_279()))
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
					func_1622(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_1621(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_REGISTER(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				unk_0x6BC97F4F4BB3C04B(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::_0x7350823473013C02(iVar27))
				{
					PED::_0x4668D80430D6C299(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_1620();
					func_1619();
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
				if (!func_1621(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_REGISTER(iVar27, true);
						}
					}
					if (func_1618(Global_4456448.f_232883))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
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
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, 0))
					{
						AI::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
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

bool func_1618(int iParam0)
{
	return iParam0 == 17;
}

void func_1619()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_1620()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_1621(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = AI::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_1622(int iParam0, int iParam1, int iParam2)
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
				func_1624();
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
		if (func_25(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::_0x419594E137637120(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		UI::KEY_HUD_COLOUR(iParam0, iParam1);
		func_1623(-2008016205, iParam0);
	}
}

void func_1623(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_1624()
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

int func_1625()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_1626()
{
	return func_434(26);
}

void func_1627(bool bParam0, bool bParam1)
{
	if (!func_434(31))
	{
		return;
	}
	if (!func_434(0))
	{
		func_1629(bParam0, bParam1);
		Local_1189.f_2 = (NETWORK::_GET_POSIX_TIME() - Local_1189.f_1);
		func_1628();
		func_423(0);
	}
}

void func_1628()
{
}

void func_1629(bool bParam0, bool bParam1)
{
	Global_1674356.f_2 = Local_1270.f_137;
	Global_1674356.f_3 = Local_1270.f_138;
	uVar0 = func_1753(func_408(), bParam0, bParam1);
	Local_1189 = uVar0;
	func_1630(bParam0, uVar0, 0, 0, -1, -1, -1, -1, -1, 0);
}

void func_1630(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_675(PLAYER::PLAYER_ID());
		Global_1674635.f_4 = func_1752();
		Global_1674635.f_5 = func_1751();
		if (func_882(PLAYER::PLAYER_ID()) || func_682(PLAYER::PLAYER_ID()))
		{
			Global_1674635.f_6 = 1;
		}
		else
		{
			Global_1674635.f_6 = 0;
		}
		Global_1674635.f_1 = func_1745(bParam9);
		Global_1674635.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_1674635.f_9 = func_956(bParam0);
		Global_1674635.f_10 = uParam1;
		Global_1674635.f_17 = Global_1674635.f_2;
		Global_1674635.f_18 = Global_1674635.f_2;
		Global_1674635.f_19 = func_1742();
		Global_1674635.f_21 = (Global_1674635.f_8 - Global_1674635.f_7);
		if (func_537(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674635.f_23 = func_956(func_177(1));
		}
		Global_1674635.f_24 = func_1741(PLAYER::PLAYER_ID());
		Global_1674635.f_28 = func_1090(PLAYER::PLAYER_ID());
		if (Global_1674635.f_24 > 2)
		{
			Global_1674635.f_24 = 2;
		}
		func_1739(iVar0);
	}
	else
	{
		iVar0 = func_176(PLAYER::PLAYER_ID());
	}
	if (func_1738(iVar0))
	{
		Global_1674374.f_2 = func_1752();
		Global_1674374.f_3 = func_1751();
		Global_1674374.f_50 = iParam4;
		Global_1674374.f_51 = iParam5;
		Global_1674374.f_10 = NETWORK::_GET_POSIX_TIME();
		Global_1674374.f_20 = (Global_1674374.f_10 - Global_1674374.f_9);
		Global_1674374.f_12 = uParam1;
		Global_1674374.f_19 = func_1732(iVar0, bParam0, func_1737(bParam3));
		if (bParam0)
		{
			Global_1674374.f_11 = 1;
		}
		else
		{
			Global_1674374.f_11 = 0;
		}
		if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
		{
			Global_1674374.f_8 = 1;
		}
		else
		{
			Global_1674374.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1674374.f_43 = 0;
			Global_1674374.f_45 = func_1731(func_957(), iParam2);
			Global_1674374.f_47 = iParam7;
			Global_1674374.f_46 = iParam6;
			Global_1674374.f_52 = func_1730(func_957(), iParam2);
		}
		func_1728(iVar0);
	}
	else if (func_1727(iVar0))
	{
		Global_1674428.f_2 = func_1752();
		Global_1674428.f_3 = func_1751();
		Global_1674428.f_10 = NETWORK::_GET_POSIX_TIME();
		Global_1674428.f_19 = (Global_1674428.f_10 - Global_1674428.f_9);
		Global_1674428.f_12 = uParam1;
		if (bParam0)
		{
			Global_1674428.f_11 = 1;
		}
		else
		{
			Global_1674428.f_11 = 0;
		}
		if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
		{
			Global_1674428.f_8 = 1;
		}
		else
		{
			Global_1674428.f_8 = 0;
		}
		func_1725(iVar0);
	}
	else if (func_1724(iVar0))
	{
		Global_1674491.f_2 = func_1752();
		Global_1674491.f_3 = func_1751();
		Global_1674491.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1674491.f_18 = (Global_1674491.f_9 - Global_1674491.f_8);
		Global_1674491.f_11 = uParam1;
		Global_1674491.f_7 = func_1742();
		Global_1674491.f_42 = func_1722(func_27(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_1104(iVar1);
		Global_1674491.f_28 = iVar2;
		Global_1674491.f_29 = func_956((func_1721(iVar1) || func_1720(iVar1)));
		Global_1674491.f_30 = func_956(func_1719(iVar1));
		Global_1674491.f_32 = func_956(func_1718(iVar1));
		Global_1674491.f_33 = func_956(func_1717(iVar1));
		Global_1674491.f_34 = func_956(func_1716(iVar1));
		Global_1674491.f_35 = func_956(func_1715(0, iVar1) == 1);
		Global_1674491.f_36 = func_956(func_1714(iVar1));
		Global_1674491.f_37 = func_956(func_1204(iVar1));
		Global_1674491.f_38 = func_956(func_1713(iVar1));
		Global_1674491.f_39 = func_956(func_1709(iVar1, iVar2, 0));
		Global_1674491.f_40 = func_956(func_1709(iVar1, iVar2, 2));
		Global_1674491.f_41 = func_956(func_1709(iVar1, iVar2, 1));
		if (func_1708(iVar1))
		{
			Global_1674491.f_31 = 2;
		}
		else if (func_1707(iVar1))
		{
			Global_1674491.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1674491.f_10 = 1;
		}
		else
		{
			Global_1674491.f_10 = 0;
		}
		if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_6 = 1;
		}
		else
		{
			Global_1674491.f_6 = 0;
		}
		Global_1674491.f_21 = -2;
		Global_1674491.f_22 = -2;
		func_1705(iVar0);
	}
	else if (func_1704(iVar0))
	{
		Global_1674535.f_2 = func_1752();
		Global_1674535.f_3 = func_1751();
		if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
		{
			Global_1674535.f_6 = 1;
		}
		else
		{
			Global_1674535.f_6 = 0;
		}
		Global_1674535.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1674535.f_10 = func_956(bParam0);
		Global_1674535.f_11 = uParam1;
		Global_1674535.f_17 = func_1703(func_841());
		Global_1674535.f_18 = (Global_1674535.f_9 - Global_1674535.f_8);
		Global_1674535.f_20 = iParam8;
		Global_1674535.f_21 = -2;
		Global_1674535.f_22 = -2;
		Global_1674535.f_27 = func_1702();
		Global_1674535.f_29 = func_154(6107, -1, 0);
		Global_1674535.f_30 = func_154(6103, -1, 0);
		Global_1674535.f_31 = func_154(6104, -1, 0);
		Global_1674535.f_32 = func_154(6106, -1, 0);
		Global_1674535.f_33 = func_154(6105, -1, 0);
		Global_1674535.f_34 = func_154(6108, -1, 0);
		Global_1674535.f_36 = func_956(func_177(1));
		Global_1674535.f_37 = func_1699();
		func_1689();
		func_1687(iVar0);
	}
	else if (func_589(iVar0))
	{
		Global_1674589.f_2 = func_1752();
		Global_1674589.f_3 = func_1751();
		if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
		{
			Global_1674589.f_6 = 1;
		}
		else
		{
			Global_1674589.f_6 = 0;
		}
		Global_1674589.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1674589.f_10 = func_956(bParam0);
		Global_1674589.f_11 = uParam1;
		Global_1674589.f_18 = (Global_1674589.f_9 - Global_1674589.f_8);
		Global_1674589.f_20 = iParam8;
		Global_1674589.f_23 = Global_786547;
		Global_1674589.f_36 = Global_786547.f_1;
		Global_1674589.f_24 = func_154(6157, -1, 0);
		Global_1674589.f_25 = func_154(6162, -1, 0);
		Global_1674589.f_26 = func_154(6163, -1, 0);
		Global_1674589.f_27 = func_956((((func_1686() || func_1685()) || func_1684()) || func_1097(PLAYER::PLAYER_ID())));
		Global_1674589.f_28 = func_154(6164, -1, 0);
		Global_1674589.f_29 = func_956(func_1683());
		Global_1674589.f_35 = -1;
		Global_1674589.f_38 = -1;
		Global_1674589.f_39 = Global_1674589.f_4;
		Global_1674589.f_40 = Global_1674589.f_5;
		Global_1674589.f_41 = func_1752();
		Global_1674589.f_42 = func_956(func_177(1));
		Global_1674589.f_44 = Global_1674589.f_18;
		func_1681(iVar0);
	}
	else if (func_1678(iVar0))
	{
		if (Global_1674725.f_2 == -1)
		{
			Global_1674725.f_2 = func_1752();
		}
		if (Global_1674725.f_3 == -1)
		{
			Global_1674725.f_3 = func_1751();
		}
		if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
		{
			Global_1674725.f_6 = 1;
		}
		else
		{
			Global_1674725.f_6 = 0;
		}
		Global_1674725.f_1 = func_1745(0);
		Global_1674725.f_7 = func_1742();
		Global_1674725.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1674725.f_10 = func_956(bParam0);
		Global_1674725.f_11 = uParam1;
		if (func_957() != -1)
		{
			Global_1674725.f_17 = func_1677(func_957());
		}
		Global_1674725.f_18 = (Global_1674725.f_9 - Global_1674725.f_8);
		Global_1674725.f_19 = Global_2537071.f_6579;
		Global_1674725.f_28 = func_1090(PLAYER::PLAYER_ID());
		Global_1674725.f_29 = func_956(func_1676(PLAYER::PLAYER_ID()));
		Global_1674725.f_30 = func_956(func_1675(PLAYER::PLAYER_ID()));
		Global_1674725.f_31 = func_1674(PLAYER::PLAYER_ID());
		if (func_537(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674725.f_33 = func_956(func_177(1));
		}
		if (Global_1674725.f_34 > 2)
		{
			Global_1674725.f_34 = 2;
		}
		func_1672(iVar0);
	}
	else if (func_1671(iVar0))
	{
		Global_1674671.f_2 = func_1752();
		Global_1674671.f_3 = func_1751();
		if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
		{
			Global_1674671.f_6 = 1;
		}
		else
		{
			Global_1674671.f_6 = 0;
		}
		Global_1674671.f_1 = func_1745(0);
		Global_1674671.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1674671.f_10 = func_956(bParam0);
		Global_1674671.f_11 = uParam1;
		Global_1674671.f_18 = (Global_1674671.f_9 - Global_1674671.f_8);
		Global_1674671.f_28 = func_1090(PLAYER::PLAYER_ID());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_1670(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_1654(PLAYER::PLAYER_ID(), 4, -1);
		Global_1674671.f_31 = func_1674(PLAYER::PLAYER_ID());
		Global_1674671.f_32 = func_956(func_1653(PLAYER::PLAYER_ID()));
		Global_1674671.f_33 = func_956(func_1652(PLAYER::PLAYER_ID()));
		Global_1674671.f_34 = func_956(func_1651(PLAYER::PLAYER_ID()));
		Global_1674671.f_35 = func_956(func_1650(PLAYER::PLAYER_ID()));
		Global_1674671.f_36 = func_1649(PLAYER::PLAYER_ID());
		Global_1674671.f_37 = func_1648(PLAYER::PLAYER_ID());
		Global_1674671.f_39 = func_1647(PLAYER::PLAYER_ID());
		if (func_537(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674671.f_41 = func_956(func_177(1));
		}
		if (Global_1674671.f_42 > 2)
		{
			Global_1674671.f_42 = 2;
		}
		func_1645(iVar0);
	}
	else if (func_1644(iVar0))
	{
		Global_1674809.f_2 = func_1752();
		Global_1674809.f_3 = func_1751();
		Global_1674809.f_4 = func_1643(func_957());
		Global_1674809.f_5 = func_1642(func_957());
		if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
		{
			Global_1674809.f_6 = 1;
		}
		else
		{
			Global_1674809.f_6 = 0;
		}
		Global_1674809.f_7 = func_1742();
		Global_1674809.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1674809.f_10 = func_956(bParam0);
		Global_1674809.f_11 = uParam1;
		if (func_841() != -1)
		{
			Global_1674809.f_17 = func_1677(func_841());
		}
		Global_1674809.f_18 = (Global_1674809.f_9 - Global_1674809.f_8);
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = func_1641(PLAYER::PLAYER_ID());
		Global_1674809.f_27 = func_956(func_1640(PLAYER::PLAYER_ID()));
		Global_1674809.f_28 = func_1637(21, -1);
		Global_1674809.f_29 = func_956(func_1636(PLAYER::PLAYER_ID()));
		func_1634(iVar0);
	}
	else if (func_1633(iVar0))
	{
		Global_1674884.f_6 = func_1643(func_957());
		Global_1674884.f_7 = func_1642(func_957());
		if (func_537(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674884.f_8 = func_956(func_177(1));
		}
		Global_1674884.f_10 = func_1742();
		Global_1674884.f_11 = 1;
		Global_1674884.f_13 = (NETWORK::_GET_POSIX_TIME() - Global_1702973);
		Global_1674884.f_14 = uParam1;
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		func_1631(iVar0);
	}
	else
	{
		Global_1674356.f_6 = NETWORK::_GET_POSIX_TIME();
		if (bParam0)
		{
			Global_1674356.f_7 = 1;
		}
		else
		{
			Global_1674356.f_7 = 0;
		}
		Global_1674356.f_8 = uParam1;
		if (Global_1674356.f_4 == 0)
		{
			if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
			{
				Global_1674356.f_4 = 1;
			}
		}
	}
}

void func_1631(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x1A0D4A6C336B7BC5(&Global_1674884);
	func_1632();
}

void func_1632()
{
	Global_1674884 = { Var0 };
	Global_1674884.f_23 = 0;
	Global_1674884.f_22 = 0;
	Global_1674884.f_21 = 0;
}

int func_1633(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

void func_1634(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x62CC3DEF90BBBB82(&Global_1674809);
	func_1635();
}

void func_1635()
{
	Global_1674809 = { Var0 };
}

int func_1636(int iParam0)
{
	if (iParam0 != func_68())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_369.f_2, 6);
	}
	return 0;
}

int func_1637(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_27();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_1639(iParam0);
		if (iVar1 == 0 && func_154(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_1638(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_1090(PLAYER::PLAYER_ID()) && iVar1 == 1)
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

bool func_1638(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return 0;
	}
	return func_154(7207, iParam0, 0) != 0;
}

int func_1639(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_1640(int iParam0)
{
	if (iParam0 != func_68())
	{
		return Global_1590535[iParam0].f_274.f_369 != 0;
	}
	return 0;
}

int func_1641(int iParam0)
{
	if (func_176(iParam0) == 243)
	{
		return func_174(iParam0);
	}
	return -1;
}

int func_1642(int iParam0)
{
	if (iParam0 == func_68())
	{
		return -1;
	}
	return Global_1628237[iParam0].f_11.f_8[1];
}

int func_1643(int iParam0)
{
	if (iParam0 == func_68())
	{
		return -1;
	}
	return Global_1628237[iParam0].f_11.f_8[0];
}

int func_1644(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

void func_1645(int iParam0)
{
	unk_0x2D7A9B577E72385E(&Global_1674671);
	func_1646();
}

void func_1646()
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1674671 = { Var0 };
}

int func_1647(int iParam0)
{
	if (iParam0 != func_68())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_334, 12);
	}
	return 0;
}

int func_1648(int iParam0)
{
	if (iParam0 != func_68())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_334, 10);
	}
	return 0;
}

int func_1649(int iParam0)
{
	if (iParam0 != func_68())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_334, 11);
	}
	return 0;
}

bool func_1650(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 4);
}

bool func_1651(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 3);
}

bool func_1652(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 2);
}

bool func_1653(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 1);
}

int func_1654(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_68() || !func_1669(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_1664(iParam0, iParam2);
		
		case 1:
			return func_1662(iParam0, iParam2);
		
		case 3:
			return func_1661(iParam0);
		
		case 2:
			return func_1656(iParam0, iParam2);
		
		case 4:
			return func_1655(iParam0);
		
		default:
	}
	return 0;
}

bool func_1655(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 6);
}

int func_1656(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_1660(iParam0);
		
		case 11:
			return func_1659(iParam0);
		
		case 12:
			return func_1658(iParam0);
		
		case 13:
			return func_1657(iParam0);
		
		default:
	}
	return 0;
}

bool func_1657(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 15);
}

bool func_1658(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 14);
}

bool func_1659(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 13);
}

bool func_1660(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 12);
}

bool func_1661(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 5);
}

int func_1662(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_1663(iParam0);
		
		case 6:
			return func_1653(iParam0);
		
		case 7:
			return func_1652(iParam0);
		
		case 8:
			return func_1651(iParam0);
		
		case 9:
			return func_1650(iParam0);
		
		default:
	}
	return 0;
}

bool func_1663(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 0);
}

int func_1664(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1668(iParam0);
		
		case 1:
			return func_1667(iParam0);
		
		case 2:
			return func_1666(iParam0);
		
		case 3:
			return func_1665(iParam0);
		
		case 4:
			return func_1674(iParam0);
		
		default:
	}
	return 0;
}

bool func_1665(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 10);
}

bool func_1666(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 9);
}

bool func_1667(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 8);
}

bool func_1668(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 7);
}

bool func_1669(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_1670(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_1654(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_1654(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_1654(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_1654(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_1671(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_1672(int iParam0)
{
	unk_0x830C3A44EB3F2CF9(&Global_1674725);
	func_1673();
}

void func_1673()
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1674725 = { Var0 };
}

bool func_1674(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 31);
}

bool func_1675(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 0);
}

bool func_1676(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 19);
}

var func_1677(int iParam0)
{
	return Global_1590535[iParam0].f_211.f_6;
}

int func_1678(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_1679(func_1680(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_1679(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_1680(int iParam0)
{
	if (func_176(iParam0) == 237 || func_176(iParam0) == 250)
	{
		return func_174(iParam0);
	}
	return -1;
}

void func_1681(int iParam0)
{
	unk_0xD8AFB345A9C5CCBB(&Global_1674589);
	func_1682();
}

void func_1682()
{
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1674589 = { Var0 };
	Global_1674589.f_16 = 0;
}

bool func_1683()
{
	return func_154(6156, -1, 0) != 0;
}

bool func_1684()
{
	return func_154(6164, -1, 0) == 3;
}

bool func_1685()
{
	return func_154(6164, -1, 0) == 2;
}

bool func_1686()
{
	return func_154(6164, -1, 0) == 1;
}

void func_1687(int iParam0)
{
	unk_0x320C35147D5B5DDD(&Global_1674535);
	func_1688();
}

void func_1688()
{
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674535 = { Var0 };
	Global_1674535.f_23 = 0;
	Global_1674535.f_24 = 0;
	Global_1674535.f_16 = 0;
}

void func_1689()
{
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_1692(12));
		func_1691(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323615[iVar1].f_66 != 0 && func_216(Global_1323615[iVar1].f_66, 1))
			{
				if (Global_2537071.f_896 != iVar1)
				{
					if (func_1690(Global_1323615[iVar1].f_66))
					{
						if (Global_1323615[iVar1].f_66 != 0)
						{
							iVar3 = Global_1323615[iVar1].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1674535.f_38 = iVar3;
								break;
							
							case 1:
								Global_1674535.f_39 = iVar3;
								break;
							
							case 2:
								Global_1674535.f_40 = iVar3;
								break;
							
							case 3:
								Global_1674535.f_41 = iVar3;
								break;
							
							case 4:
								Global_1674535.f_42 = iVar3;
								break;
							
							case 5:
								Global_1674535.f_43 = iVar3;
								break;
							
							case 6:
								Global_1674535.f_44 = iVar3;
								break;
							
							case 7:
								Global_1674535.f_45 = iVar3;
								break;
							
							case 8:
								Global_1674535.f_46 = iVar3;
								break;
							
							case 9:
								Global_1674535.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_1690(int iParam0)
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

void func_1691(int iParam0, var uParam1, bool bParam2)
{
	if (Global_262145.f_10163)
	{
		*uParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*uParam1 = (Global_1671199[iParam0] - 1);
		if (bParam2)
		{
			if ((GAMEPLAY::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*uParam1 = -1;
	}
}

int func_1692(int iParam0)
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
		iVar0 = func_1639(iParam0);
		return func_1698(iVar0);
	}
	return (func_1693(iParam0, -1) * iParam0);
}

int func_1693(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_1694(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_664(iParam1))
			{
				return 0;
			}
			else if (func_340(iParam1, -1))
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

int func_1694(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_1695(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_1695(PLAYER::PLAYER_ID(), 0))
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

bool func_1695(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_68())
	{
		if (!func_1697(Global_1590373))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590373)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2425662[Global_1590373].f_195, 24) || func_1696(Global_1590373))
				{
					return 1;
				}
			}
		}
	}
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 24);
}

int func_1696(int iParam0)
{
	if (iParam0 != func_68())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 9);
	}
	return 0;
}

int func_1697(int iParam0)
{
	if (iParam0 != func_68())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 2);
	}
	return 0;
}

int func_1698(int iParam0)
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

var func_1699()
{
	uVar0 = func_1701();
	if (!func_1700())
	{
		if (func_957() != func_68())
		{
			uVar0 = func_1741(func_957()) + 1;
		}
	}
	return uVar0;
}

bool func_1700()
{
	return func_538(PLAYER::PLAYER_ID());
}

int func_1701()
{
	return func_1741(PLAYER::PLAYER_ID()) + 1;
}

int func_1702()
{
	return func_154(6113, -1, 0);
}

int func_1703(int iParam0)
{
	if (func_537(iParam0, 1))
	{
		return Global_1628237[iParam0].f_11.f_451;
	}
	return -1;
}

int func_1704(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

void func_1705(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x0EACDF8487D5155A(&Global_1674491);
	func_1706();
}

void func_1706()
{
	Global_1674491 = { Var0 };
	Global_1674491.f_23 = 0;
	Global_1674491.f_24 = 0;
	Global_1674491.f_16 = 0;
}

bool func_1707(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 12);
}

bool func_1708(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 13);
}

int func_1709(int iParam0, int iParam1, int iParam2)
{
	if (func_1712(iParam0, iParam1))
	{
		iVar0 = func_1710(iParam0, iParam1);
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_183[iVar0].f_5, iParam2);
	}
	return 0;
}

int func_1710(int iParam0, int iParam1)
{
	if (func_1711(iParam1) && iParam0 != func_68())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1711(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1712(int iParam0, int iParam1)
{
	if (func_1711(iParam1) && iParam0 != func_68())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1713(int iParam0)
{
	if (iParam0 != func_68())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 12) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 13)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_1714(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (((((GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 3) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 4)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 5)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 0)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 1)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1715(int iParam0, int iParam1)
{
	if (iParam1 == func_68())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 0))
			{
				return 3;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 3))
			{
				return 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 6))
			{
				return 4;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 9))
			{
				return 1;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 12))
			{
				return 7;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 15))
			{
				return 5;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 18))
			{
				return 6;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 21))
			{
				return 0;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 1))
			{
				return 3;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 4))
			{
				return 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 7))
			{
				return 4;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 10))
			{
				return 1;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 13))
			{
				return 7;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 16))
			{
				return 5;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 19))
			{
				return 6;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 22))
			{
				return 0;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 2))
			{
				return 3;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 5))
			{
				return 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 8))
			{
				return 4;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 11))
			{
				return 1;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 14))
			{
				return 7;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 17))
			{
				return 5;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 20))
			{
				return 6;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 23))
			{
				return 0;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_1716(int iParam0)
{
	if (iParam0 != func_68())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 6) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 7)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1717(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 8);
}

bool func_1718(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 7);
}

bool func_1719(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 9);
}

bool func_1720(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 11);
}

bool func_1721(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 10);
}

int func_1722(int iParam0, int iParam1)
{
	return func_154(func_1723(iParam1), iParam0, 0);
}

int func_1723(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

int func_1724(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_1725(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x7D8BA05688AD64C7(&Global_1674428);
	func_1726();
}

void func_1726()
{
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1674428 = { Var0 };
	Global_1674428.f_24 = 0;
	Global_1674428.f_25 = 0;
	Global_1674428.f_17 = 0;
}

int func_1727(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

void func_1728(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xBF371CD2B64212FD(&Global_1674374);
	func_1729();
}

void func_1729()
{
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674374 = { Var0 };
	Global_1674374.f_29 = 0;
	Global_1674374.f_30 = 0;
	Global_1674374.f_17 = 0;
}

int func_1730(int iParam0, int iParam1)
{
	bVar0 = func_1709(iParam0, iParam1, 2);
	bVar1 = func_1709(iParam0, iParam1, 1);
	bVar2 = func_1709(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_1731(int iParam0, int iParam1)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	if (func_1711(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_183[iVar0].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1732(int iParam0, bool bParam1, bool bParam2)
{
	if (func_1736(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17699;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17698;
		}
		else
		{
			iVar0 = Global_262145.f_17680;
		}
		iVar1 = 19;
	}
	else if (func_1735(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_815(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17679;
			iVar1 = 20;
		}
	}
	else if (func_1738(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17699;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17698;
		}
		else
		{
			iVar0 = Global_262145.f_17680;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x501478855A6074CE(func_1643(func_957()), func_1642(func_957()), func_1752(), func_1751(), iVar1, iVar0);
	}
	func_1734(iVar0);
	func_1733(iVar0);
	return iVar0;
}

void func_1733(int iParam0)
{
	iVar0 = func_154(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_490 = iVar0;
	func_572(3968, iVar0, -1, 1, 0);
}

void func_1734(int iParam0)
{
	iVar0 = PLAYER::PLAYER_ID();
	Global_1628237[iVar0].f_11.f_489 = (Global_1628237[iVar0].f_11.f_489 + iParam0);
	if (Global_1628237[iVar0].f_11.f_489 < -9999)
	{
		Global_1628237[iVar0].f_11.f_489 = 9999;
	}
	else if (Global_1628237[iVar0].f_11.f_489 > 9999)
	{
		Global_1628237[iVar0].f_11.f_489 = 9999;
	}
}

int func_1735(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_1736(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_1737(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_881(PLAYER::PLAYER_ID()) || func_680(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_1738(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590535[PLAYER::PLAYER_ID()] == 148 && func_180(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_1739(int iParam0)
{
	unk_0x316DB59CD14C1774(&Global_1674635);
	func_1740();
}

void func_1740()
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1674635 = { Var0 };
}

int func_1741(int iParam0)
{
	if (func_69(iParam0) == func_68())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

int func_1742()
{
	if (func_1744())
	{
		return 4;
	}
	else if (func_1700())
	{
		if (func_1743(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_177(1))
	{
		iVar0 = func_1703(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_1304(1))
	{
		if (func_1743(func_957()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

bool func_1743(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 26);
}

bool func_1744()
{
	return func_840(PLAYER::PLAYER_ID());
}

int func_1745(bool bParam0)
{
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_675(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_176(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_1750(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_1748(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_1747(PLAYER::PLAYER_ID());
			if (func_1679(func_1680(PLAYER::PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_1747(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_1746(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_1746(PLAYER::PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_1746(int iParam0)
{
	if (func_176(PLAYER::PLAYER_ID()) == 238 || func_176(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1628237[iParam0].f_11.f_499;
	}
	return -1;
}

int func_1747(int iParam0)
{
	if (func_176(PLAYER::PLAYER_ID()) == 237 || func_176(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1628237[iParam0].f_11.f_498;
	}
	return -1;
}

int func_1748(int iParam0)
{
	return func_1749(iParam0, 150);
}

int func_1749(int iParam0, int iParam1)
{
	if (func_675(iParam0) == iParam1)
	{
		return Global_1628237[iParam0].f_11.f_496;
	}
	return -1;
}

int func_1750(int iParam0)
{
	return func_1749(iParam0, 236);
}

int func_1751()
{
	if (Global_1674356.f_3 != 0)
	{
		return Global_1674356.f_3;
	}
	return -1;
}

int func_1752()
{
	if (Global_1674356.f_2 != 0)
	{
		return Global_1674356.f_2;
	}
	return -1;
}

int func_1753(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 14:
			return 0;
		
		case 2:
			return 8;
		
		case 1:
			return 7;
		
		case 12:
			return 6;
		
		case 0:
			return 4;
		
		default:
	}
	if (func_1757() && func_1756())
	{
		return 13;
	}
	if (bParam1)
	{
		if (func_1754())
		{
			return 11;
		}
		else
		{
			return 1;
		}
	}
	return 2;
}

bool func_1754()
{
	if (!func_381())
	{
		return 0;
	}
	if (func_1516() && func_1755(iLocal_1216) < func_7())
	{
		return 1;
	}
	return (func_539(iLocal_1216) && !func_1516());
}

int func_1755(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 4) && func_536(iParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1756()
{
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 33))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_1757()
{
	return func_7() > 0;
}

int func_1758(struct<21> Param0)
{
	func_1764(func_1765(Param0), Param0);
	func_1762(0, -1, 0);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_1270.f_2.f_13[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_1270.f_134[iVar0] = -1;
		Local_1270.f_124[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_1246[iVar0] = func_412();
		uLocal_1248[iVar0] = func_412();
		Local_1164[iVar0].f_4 = func_68();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iLocal_164[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_88[iVar0] = -1;
		iVar0++;
	}
	Global_2535833.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < iLocal_1235)
	{
		iLocal_1235[iVar0] = -1;
		iVar0++;
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_1270, 166);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1436, 1185);
	GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	iLocal_1225 = func_1761(Param0);
	iLocal_1226 = NETWORK::_0x638A3A81733086DB();
	iLocal_1226 = iLocal_1226;
	func_1760();
	func_1759();
	uLocal_1188 = PLAYER::GET_PLAYER_GROUP(iLocal_1216);
	return 1;
}

void func_1759()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574967[iVar0], -347613984);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -347613984, Global_1574967[iVar0]);
		iVar0++;
	}
}

void func_1760()
{
}

int func_1761(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 15;
		
		case 155:
			return 8;
		
		case 149:
			return 14;
		
		case 153:
			return 122;
		
		case 156:
			return 1;
		
		case 154:
			return 5;
		
		case 157:
			return 6;
		
		case 150:
			return 11;
		
		case 158:
			return 0;
		
		case 159:
			return 2;
		
		case 151:
			return 13;
		
		case 160:
			return 3;
		
		case 152:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		default:
	}
	return 256;
}

int func_1762(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1763();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1125())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_1763();
					}
					else
					{
						return 0;
					}
				}
				if (func_1535())
				{
					if (!bParam2)
					{
						func_1763();
					}
					else
					{
						return 0;
					}
				}
				if (func_1533(157))
				{
					if (!bParam2)
					{
						func_1763();
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
					func_1763();
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
				func_1763();
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
			func_1763();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1763()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1764(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_1763();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_1765(int iParam0)
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

void func_1766(bool bParam0)
{
	iLocal_1216 = PLAYER::PLAYER_ID();
	iLocal_1217 = PLAYER::PLAYER_PED_ID();
	Local_1220 = { ENTITY::GET_ENTITY_COORDS(iLocal_1217, 0) };
	bLocal_1212 = func_28(iLocal_1216, 0, 1);
	if (bParam0)
	{
		bLocal_1214 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		iLocal_1218 = NETWORK::PARTICIPANT_ID_TO_INT();
		iLocal_1219 = NETWORK::PARTICIPANT_ID();
		uLocal_1215 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iLocal_1219);
	}
	if (bLocal_1212)
	{
		bLocal_1213 = PLAYER::IS_PLAYER_PLAYING(iLocal_1216);
	}
	else
	{
		bLocal_1213 = false;
	}
	bLocal_1214 = bLocal_1214;
	iLocal_1218 = iLocal_1218;
	iLocal_1219 = iLocal_1219;
	Local_1220 = { Local_1220 };
	uLocal_1215 = uLocal_1215;
	bLocal_1223 = func_660(1, 0, 1);
	bLocal_1224 = func_946();
}
