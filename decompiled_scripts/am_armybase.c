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
	fLocal_64 = ((0.05f + 0.275f) - 0.01f);
	Local_82 = { -2357.12f, 3250.68f, 106.04f };
	iLocal_561 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_187(ScriptParam_0);
	}
	else
	{
		func_184();
	}
	while (true)
	{
		func_183();
		func_175();
		if (func_164() || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_184();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((func_158() && !Global_262145.f_21467) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_151();
			}
			if (func_40())
			{
				func_184();
			}
			if (func_37(PLAYER::PLAYER_ID()))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_369.f_182, 3))
				{
					GAMEPLAY::SET_BIT(&(Local_369.f_182), 3);
				}
			}
			if ((((((((((!Global_1573980 && !func_36(2)) && !func_33(PLAYER::PLAYER_ID(), 0)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_31(PLAYER::PLAYER_ID())) && !func_29(func_30(PLAYER::PLAYER_ID()))) && !func_27(PLAYER::PLAYER_ID(), 146)) && !func_23(PLAYER::PLAYER_ID())) && !func_22(PLAYER::PLAYER_ID())) && !func_21())
			{
				if (func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 1000, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1000))
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_4555, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!func_158())
							{
								func_18();
								if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
								{
									if (func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 0, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 0))
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
										}
									}
									else if (!func_17(&(Local_369.f_3)))
									{
										func_14(&(Local_369.f_3));
									}
									else if (func_11(&(Local_369.f_3)) > 20f || Local_369.f_177)
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
										}
									}
								}
								else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
								}
								else
								{
									PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
								}
							}
							else
							{
								if (Global_2537071.f_6564)
								{
									bLocal_554 = false;
									Global_2537071.f_6564 = 0;
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !iLocal_558)
								{
									iLocal_558 = 1;
								}
								if (Global_262145.f_21456 && !func_9(PLAYER::PLAYER_ID()))
								{
									if ((!bLocal_554 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0) && iLocal_558)
									{
										PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
										PLAYER::SET_MAX_WANTED_LEVEL(0);
										iLocal_557 = 1;
									}
									if (func_2() && !bLocal_554)
									{
										bLocal_554 = true;
										PLAYER::SET_MAX_WANTED_LEVEL(5);
									}
								}
								if (func_2() && !bLocal_554)
								{
									bLocal_554 = true;
								}
								if (bLocal_554)
								{
									if (bLocal_555)
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(2) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
										}
									}
									else if (bLocal_556)
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(3) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
										}
									}
									else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < Global_262145.f_21393)
									{
										PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_21393) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
									}
									else
									{
										PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
									}
								}
							}
						}
						else
						{
							if (func_17(&(Local_369.f_3)))
							{
								func_1(&(Local_369.f_3));
							}
							if (Local_369.f_177)
							{
								Local_369.f_177 = 0;
							}
							func_18();
						}
					}
					else
					{
						if (!Local_369.f_177)
						{
							Local_369.f_177 = 1;
						}
						func_18();
					}
				}
				else
				{
					if (Local_369.f_177)
					{
						Local_369.f_177 = 0;
					}
					func_18();
				}
			}
			else
			{
				func_18();
			}
		}
		else
		{
			func_184();
		}
	}
}

void func_1(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()
{
	if (((func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 1000, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1000)) && !func_8()) && !func_22(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_21387)
		{
			return 0;
		}
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2346.975f, 3259.757f, 31.81074f, -2349.507f, 3261.232f, 33.81074f, 9.5625f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2054.865f, 3240.977f, 30.51001f, -2056.552f, 3237.846f, 32.50156f, 4.0625f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1792.908f, 3091.104f, 31.81257f, -1812.707f, 3102.736f, 39.46682f, 18.187f, 0, 1, 0)) || func_7(PLAYER::PLAYER_ID()))
		{
			bLocal_555 = false;
			bLocal_556 = false;
			return 1;
		}
		if (Global_262145.f_21394)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (VEHICLE::IS_VEHICLE_STOLEN(iVar0))
				{
					if (func_6(iVar0))
					{
						if ((!func_5(iVar0, 1) && !func_4(iVar0)) && !func_3(iVar0))
						{
							bLocal_555 = true;
							bLocal_556 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_STOLEN(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				if ((!func_5(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1) && !func_4(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && !func_3(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					bLocal_555 = true;
					bLocal_556 = false;
					return 1;
				}
			}
		}
		if (Global_2537071.f_6562 || Global_2537071.f_6563)
		{
			if (Global_2537071.f_6563)
			{
				bLocal_555 = false;
				bLocal_556 = true;
			}
			else
			{
				bLocal_555 = true;
				bLocal_556 = false;
			}
			Global_2537071.f_6562 = 0;
			Global_2537071.f_6563 = 0;
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3) && DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			uVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (GAMEPLAY::IS_BIT_SET(uVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if ((DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("CreatedByPegasus", 2) && DECORATOR::DECOR_EXIST_ON(iParam0, "CreatedByPegasus")) && DECORATOR::DECOR_GET_BOOL(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6(int iParam0)
{
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case -823509173:
		case 1074326203:
		case 630371791:
		case 1824333165:
		case 788747387:
		case 745926877:
		case -50547061:
		case 321739290:
		case 1938952078:
		case -1281684762:
		case 782665360:
		case 1981688531:
			return 1;
		
		default:
	}
	return 0;
}

int func_7(int iParam0)
{
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(iParam0));
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2346.975f, 3259.757f, 31.81074f, "v_tower");
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_VALID_INTERIOR(iVar1))
	{
		if ((iVar0 == iVar1 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_8()
{
	return Global_4456448 == 3;
}

int func_9(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_10(iParam0, 9);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

float func_11(var uParam0)
{
	if (func_17(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_12(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()) / 1000f);
}

bool func_13(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

void func_14(var uParam0)
{
	if (!func_17(uParam0))
	{
		func_15(uParam0);
	}
}

void func_15(var uParam0)
{
	func_16(uParam0, 0f);
}

void func_16(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_12(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - fParam1);
	GAMEPLAY::SET_BIT(uParam0, 1);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_17(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 1);
}

void func_18()
{
	if (iLocal_557)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	Global_2537071.f_6562 = 0;
	Global_2537071.f_6563 = 0;
	iLocal_557 = 0;
	bLocal_554 = false;
	bLocal_555 = false;
	iLocal_558 = 0;
}

int func_19(struct<3> Param0, int iParam3)
{
	iVar110 = 0;
	Var0[0] = { -1877.436f, 2783.151f, 31.80618f };
	Var46[0] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam3)) };
	fVar92[0] = 88f;
	Var0[1] = { -1761.116f, 2834.651f, 31.80622f };
	Var46[1] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam3)) };
	fVar92[1] = 88f;
	Var0[2] = { -1761.493f, 2817.68f, 32.37125f };
	Var46[2] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam3)) };
	fVar92[2] = 88f;
	Var0[3] = { -1879.297f, 2772.653f, 29.57795f };
	Var46[3] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam3)) };
	fVar92[3] = 88f;
	Var0[4] = { -2676.74f, 3366.988f, 29.92394f };
	Var46[4] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam3)) };
	fVar92[4] = 9f;
	Var0[5] = { -2676.74f, 3366.988f, 29.92394f };
	Var46[5] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam3)) };
	fVar92[5] = 9.5f;
	Var0[6] = { -2807.397f, 3264.226f, 29.92764f };
	Var46[6] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam3)) };
	fVar92[6] = 9.5f;
	Var0[7] = { -2808.236f, 3264.634f, 29.92764f };
	Var46[7] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam3)) };
	fVar92[7] = 9.5f;
	Var0[8] = { -2530.996f, 3064.151f, 29.71081f };
	Var46[8] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam3)) };
	fVar92[8] = 9.5f;
	Var0[9] = { -2533.902f, 3062.491f, 29.70715f };
	Var46[9] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam3)) };
	fVar92[9] = 9.5f;
	Var0[10] = { -2500.716f, 2927.103f, 29.45663f };
	Var46[10] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam3)) };
	fVar92[10] = 9.5f;
	Var0[11] = { -2020.543f, 2810.747f, 29.45658f };
	Var46[11] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam3)) };
	fVar92[11] = 9.5f;
	Var0[12] = { -2261.899f, 3376.549f, 29.77859f };
	Var46[12] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam3)) };
	fVar92[12] = 9.5f;
	iVar108 = 13;
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

int func_20(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
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

bool func_21()
{
	return Global_2537071.f_6565;
}

int func_22(int iParam0)
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

bool func_23(int iParam0)
{
	return func_24(func_25(iParam0));
}

int func_24(int iParam0)
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

int func_25(int iParam0)
{
	if (func_26(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_26(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0] == iParam1)
	{
		return func_28(iParam0);
	}
	return 0;
}

int func_28(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_28(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0];
	}
	return -1;
}

int func_31(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return 1;
	}
	if (func_32())
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

bool func_32()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

bool func_33(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_34(-1, 0) == 8;
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

int func_34(int iParam0, bool bParam1)
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

int func_35()
{
	return Global_1312745;
}

bool func_36(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1573979, iParam0);
}

int func_37(int iParam0)
{
	if (iParam0 != func_39() && func_38(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_38(int iParam0, bool bParam1, bool bParam2)
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

int func_39()
{
	return -1;
}

int func_40()
{
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_128())
		{
			iVar0 = 1;
		}
	}
	if (func_41())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_41()
{
	switch (Local_369.f_6)
	{
		case 0:
			func_127();
			if ((((((((func_124(PLAYER::PLAYER_ID(), 1, 0) && func_123()) || func_25(PLAYER::PLAYER_ID()) == 159) || func_25(PLAYER::PLAYER_ID()) == 225) || func_25(PLAYER::PLAYER_ID()) == 233) || func_122(PLAYER::PLAYER_ID())) || func_21()) || Global_1574410) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(782665360, 1);
			}
			func_120(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()]), 1);
			Local_369.f_176 = 1;
			Local_369.f_6 = 1;
			break;
		
		case 1:
			if (func_119())
			{
				func_120(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()]), 2);
				Local_369.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_118(Local_85.f_20, 1))
			{
				Local_369.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_124(PLAYER::PLAYER_ID(), 1, 0) && !func_123()) && !func_158())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_112(iVar0);
					iVar0++;
				}
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if ((((func_110() && !func_124(PLAYER::PLAYER_ID(), 1, 0)) && !func_123()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && func_108(PLAYER::PLAYER_ID()) != 6)
				{
					func_49();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_42(iVar0);
				iVar0++;
			}
			if (((((func_25(PLAYER::PLAYER_ID()) == 225 || func_25(PLAYER::PLAYER_ID()) == 233) || func_122(PLAYER::PLAYER_ID())) || Global_1574410) || func_21()) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(782665360, 1);
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_369.f_6 = 4;
			}
			break;
		
		case 4:
			if ((((((((func_124(PLAYER::PLAYER_ID(), 1, 0) && func_123()) || func_25(PLAYER::PLAYER_ID()) == 159) || func_25(PLAYER::PLAYER_ID()) == 225) || func_25(PLAYER::PLAYER_ID()) == 233) || func_122(PLAYER::PLAYER_ID())) || Global_1574410) || func_21()) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(782665360, 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_42(int iParam0)
{
	if (Local_85.f_3[iParam0].f_2 > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85.f_3[iParam0]))
	{
		if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_85.f_3[iParam0]), 0))
		{
			if (UI::DOES_BLIP_EXIST(Local_369.f_172[iParam0]))
			{
				UI::REMOVE_BLIP(&(Local_369.f_172[iParam0]));
			}
		}
		else if (!UI::DOES_BLIP_EXIST(Local_369.f_172[iParam0]) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 2)
		{
			Local_369.f_172[iParam0] = UI::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_85.f_3[iParam0]));
			UI::SET_BLIP_COLOUR(Local_369.f_172[iParam0], 1);
		}
	}
	else if (UI::DOES_BLIP_EXIST(Local_369.f_172[iParam0]))
	{
		UI::REMOVE_BLIP(&(Local_369.f_172[iParam0]));
	}
	switch (Local_85.f_3[iParam0].f_2)
	{
		case 0:
			if (!func_48(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iParam0], 16))
			{
				Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iParam0] = 0;
				func_47(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_48(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 4)
						{
							if (func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 500, 0))
							{
								func_47(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_48(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iParam0], 2))
			{
				if (func_46(iParam0))
				{
					iVar2 = PLAYER::GET_PLAYER_PED(Local_85.f_3[iParam0].f_4);
					iVar0 = NETWORK::NET_TO_PED(Local_85.f_3[iParam0].f_1);
					iVar1 = NETWORK::NET_TO_VEH(Local_85.f_3[iParam0]);
					if (!ENTITY::IS_ENTITY_DEAD(iVar2, 0))
					{
						if (PED::IS_PED_IN_ANY_PLANE(iVar2))
						{
							iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar2, 0);
							if ((!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0))
							{
								AI::TASK_PLANE_MISSION(iVar0, iVar1, iVar3, iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, 1), 6, 70f, -1f, 30f, 500, 50, 1);
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, -123497569);
								PED::SET_PED_CAN_SWITCH_WEAPON(iVar0, 0);
							}
						}
					}
				}
				if (func_45(iParam0))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_85.f_3[iParam0].f_1);
					iVar2 = PLAYER::GET_PLAYER_PED(Local_85.f_3[iParam0].f_4);
					if (!ENTITY::IS_ENTITY_DEAD(iVar2, 0))
					{
						if (PED::IS_PED_IN_ANY_PLANE(iVar2))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(iVar0, iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, 1));
						}
					}
				}
				if (func_44(iParam0, 6))
				{
					func_47(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_48(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iParam0], 8))
			{
				if (func_46(iParam0))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_85.f_3[iParam0].f_1);
					iVar1 = NETWORK::NET_TO_VEH(Local_85.f_3[iParam0]);
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
					{
						AI::TASK_PLANE_MISSION(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50, 1);
					}
				}
				if (func_44(iParam0, 9))
				{
					func_47(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_3[iParam0]) || NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_3[iParam0].f_1))
			{
				if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_85.f_3[iParam0]), 0), 10f) && !NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_85.f_3[iParam0]), 0), 10f))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85.f_3[iParam0].f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_85.f_3[iParam0].f_1))
					{
						uVar4 = NETWORK::NET_TO_ENT(Local_85.f_3[iParam0].f_1);
						ENTITY::DELETE_ENTITY(&uVar4);
					}
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85.f_3[iParam0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_85.f_3[iParam0]))
					{
						uVar5 = NETWORK::NET_TO_ENT(Local_85.f_3[iParam0]);
						ENTITY::DELETE_ENTITY(&uVar5);
					}
				}
			}
			else if (func_48(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iParam0], 16))
			{
				func_43(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_44(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85.f_3[iParam0]))
	{
		return 1;
	}
	iVar0 = NETWORK::NET_TO_VEH(Local_85.f_3[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 1;
	}
	if (AI::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85.f_3[iParam0].f_1))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_85.f_3[iParam0].f_1);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85.f_3[iParam0]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_VEH(Local_85.f_3[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_48(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_49()
{
	func_107();
	func_102();
	Var2 = { Local_82 };
	if (((func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 1000, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1000)) || func_100(PLAYER::PLAYER_PED_ID())) && func_99(PLAYER::PLAYER_PED_ID()))
	{
		bVar0 = true;
	}
	else
	{
		Local_369.f_178 = 0;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_369.f_179 = 0;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
	{
		Var2 = { -1592.1f, 2797.2f, 17.1f };
		Local_369.f_181 = 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		Var2 = { -2303.9f, 3388f, 31.3f };
		Local_369.f_181 = 2;
	}
	if (func_97(bVar0, bVar1))
	{
		func_95();
		if (!func_94())
		{
			Global_1573348 = 1;
			func_93(&(Local_369.f_7), 2);
			func_92(&(Local_369.f_7), 2);
			func_91(&(Local_369.f_7), 2, 0, "AIRMECH", 0, 1);
			func_90(&(Local_369.f_7), 2, Var2);
			Global_20094.f_162 = { Var2 };
			Var5 = { func_89() };
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Var5))
			{
				if (func_68(&(Local_369.f_7), "SMGFZAU", &Var5, 7, 0, 0, 0))
				{
					func_50(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_94())
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_369.f_182, 2))
		{
			Global_1573348 = 0;
			func_93(&(Local_369.f_7), 2);
			func_92(&(Local_369.f_7), 2);
			GAMEPLAY::SET_BIT(&(Local_369.f_182), 2);
		}
	}
}

void func_50(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_65(16000, -1, -1))
		{
			func_64(16000, 1, -1, 1);
			if (Global_2537071.f_6570)
			{
				if (func_58())
				{
					func_56("AB_ENTRY_HT");
					Local_369.f_180 = 1;
				}
			}
			else if (func_58())
			{
				func_55("AB_ENTRY_HT", -1);
			}
		}
		else if (!func_65(16001, -1, -1))
		{
			func_64(16001, 1, -1, 1);
			if (Global_2537071.f_6570)
			{
				if (func_58())
				{
					func_56("AB_ENTRY_HT");
					Local_369.f_180 = 1;
				}
			}
			else if (func_58())
			{
				func_55("AB_ENTRY_HT", -1);
			}
		}
		Local_369.f_178 = 1;
	}
	else if (bParam1)
	{
		if (!func_65(15999, -1, -1))
		{
			func_64(15999, 1, -1, 1);
			if (Global_2537071.f_6570)
			{
				if (func_58())
				{
					func_56("AB_ENTRY_HT");
					Local_369.f_180 = 1;
				}
			}
			else if (func_58())
			{
				func_55("AB_ENTRY_HT", -1);
			}
		}
		else if (Local_369.f_181 == 1)
		{
			if (!func_65(16002, -1, -1))
			{
				func_64(16002, 1, -1, 1);
				if (Global_2537071.f_6570)
				{
					if (func_58())
					{
						func_56("AB_ENTRY_HT");
						Local_369.f_180 = 1;
					}
				}
				else if (func_58())
				{
					func_55("AB_ENTRY_HT", -1);
				}
			}
		}
		else if (Local_369.f_181 == 2)
		{
			if (func_52(18097, -1, -1) == 0)
			{
				func_51(18097, 1, -1, 1);
				if (Global_2537071.f_6570)
				{
					if (func_58())
					{
						func_56("AB_ENTRY_HT");
						Local_369.f_180 = 1;
					}
				}
				else if (func_58())
				{
					func_55("AB_ENTRY_HT", -1);
				}
			}
		}
		Local_369.f_179 = 1;
		Local_369.f_181 = 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_369.f_182, 2))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_369.f_182), 2);
	}
}

var func_51(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_52(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	iVar0 = 0;
	iVar1 = func_54(iParam0, iParam1);
	uVar2 = func_53(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_53(int iParam0)
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

int func_54(int iParam0, int iParam1)
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

void func_55(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_56(char* sParam0)
{
	if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		UI::CLEAR_HELP(1);
	}
	if (!func_57(sParam0))
	{
		func_55(sParam0, -1);
	}
}

bool func_57(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_58()
{
	if (func_61(PLAYER::PLAYER_ID()) && !func_59(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	return 0;
}

bool func_59(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_60(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_39();
}

int func_60(int iParam0)
{
	if (iParam0 != func_39())
	{
		if (Global_1628237[iParam0].f_11 != func_39())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	if (func_63(iParam0))
	{
		iVar0 = func_62(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_1590535[iParam0].f_274.f_264;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_1590535[iParam0].f_274.f_264 != 0;
	}
	return 0;
}

int func_64(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_35();
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

int func_65(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	iVar1 = func_67(iParam0, iParam1);
	uVar2 = func_66(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_66(int iParam0)
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

int func_67(int iParam0, int iParam1)
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

bool func_68(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_69(sParam2, iParam3, 0);
}

int func_69(char* sParam0, int iParam1, bool bParam2)
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
					func_87();
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
		if (func_86(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_85();
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
				func_77();
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
				if (func_76())
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
			if (func_75())
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
			func_74();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_73();
		func_70();
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
		func_87();
	}
	return 0;
}

void func_70()
{
	if (!func_71())
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

int func_71()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_39())
	{
		return 0;
	}
	if (func_72(PLAYER::PLAYER_ID()))
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

bool func_72(int iParam0)
{
	return func_10(iParam0, 20);
}

void func_73()
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

void func_74()
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

int func_75()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_76()
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

void func_77()
{
	if (func_84(14))
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
		Global_19486 = func_78();
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

var func_78()
{
	func_79();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_79()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_82(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_81(PLAYER::PLAYER_PED_ID());
			if (func_80(iVar0) && (!func_84(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_80(Global_111638.f_2358.f_539.f_4321))
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

bool func_80(int iParam0)
{
	return iParam0 < 3;
}

int func_81(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_82(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_82(int iParam0)
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_83(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_84(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_85()
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

bool func_86(int iParam0, int iParam1)
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

void func_87()
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

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

struct<6> func_89()
{
	StringCopy(&Var0, "", 24);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		if (!func_65(15999, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_65(16002, -1, -1) || func_52(18097, -1, -1) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 1000, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1000)) || func_100(PLAYER::PLAYER_PED_ID())) && func_99(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_65(16000, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_65(16001, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_90(var uParam0, int iParam1, struct<3> Param2)
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { Param2 };
}

void func_91(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_92(var uParam0, int iParam1)
{
	uParam0->f_161 = -99;
	uParam0->f_162 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_93(var uParam0, int iParam1)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
		uParam0[iParam1]->f_7 = 0;
	}
}

int func_94()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_95()
{
	Global_19671 = 0;
	func_96();
}

void func_96()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_21816 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_20805 = 6;
		return;
	}
}

int func_97(bool bParam0, bool bParam1)
{
	if (func_22(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (!Local_369.f_178)
		{
			if (GAMEPLAY::IS_BIT_SET(Local_369.f_182, 1))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (!func_65(16000, -1, -1) || !func_65(16001, -1, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_369.f_179)
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || func_98())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
					{
						if (!func_65(15999, -1, -1) || !func_65(16002, -1, -1))
						{
							if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) >= -25f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
					{
						if (!func_65(15999, -1, -1) || func_52(18097, -1, -1) == 0)
						{
							if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) >= 160f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) <= 290f)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_98()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_STOLEN(iVar0))
		{
			if (func_6(iVar0))
			{
				if (!func_5(iVar0, 1) && !func_4(iVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_99(int iParam0)
{
	if (PED::IS_PED_IN_ANY_PLANE(iParam0) || PED::IS_PED_IN_ANY_HELI(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && func_101(iParam0))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_101(int iParam0)
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

void func_102()
{
	if (Local_369.f_180)
	{
		if (!func_106(&(Local_369.f_183)))
		{
			func_105(&(Local_369.f_183), 0, 0);
		}
		else if (!func_104(&(Local_369.f_183), 17000, 0))
		{
			if (!func_57("AB_ENTRY_HT"))
			{
				func_55("AB_ENTRY_HT", -1);
			}
		}
		else if (func_104(&(Local_369.f_183), 17000, 0))
		{
			if (func_57("AB_ENTRY_HT"))
			{
				UI::CLEAR_HELP(1);
			}
			func_103(&(Local_369.f_183));
			Local_369.f_180 = 0;
		}
	}
}

void func_103(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_104(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_105(uParam0, bParam2, 0);
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

void func_105(var uParam0, bool bParam1, bool bParam2)
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

bool func_106(var uParam0)
{
	return uParam0->f_1;
}

void func_107()
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if ((func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 1000, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1000)) || func_100(PLAYER::PLAYER_PED_ID()))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_369.f_182, 0))
			{
				if ((((func_99(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0) && func_98()) && !Global_1687623)
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_369.f_182, 1) && !GAMEPLAY::IS_BIT_SET(Local_369.f_182, 3))
					{
						GAMEPLAY::SET_BIT(&(Local_369.f_182), 1);
					}
				}
				GAMEPLAY::SET_BIT(&(Local_369.f_182), 0);
			}
		}
		else
		{
			if (GAMEPLAY::IS_BIT_SET(Local_369.f_182, 0))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_369.f_182), 0);
			}
			if (GAMEPLAY::IS_BIT_SET(Local_369.f_182, 1))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_369.f_182), 1);
			}
			if (GAMEPLAY::IS_BIT_SET(Local_369.f_182, 3))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_369.f_182), 3);
			}
			if (Global_1687623)
			{
				Global_1687623 = 0;
			}
		}
	}
}

int func_108(int iParam0)
{
	if (func_25(iParam0) == 233)
	{
		return func_109(iParam0);
	}
	return -1;
}

int func_109(int iParam0)
{
	if (func_26(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_110()
{
	if (func_61(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_38(iVar1, 0, 1))
		{
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				if (func_111(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), PLAYER::GET_PLAYER_PED(iVar1)))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, 0) == PLAYER::GET_PLAYER_PED(iVar1))
					{
						if (func_61(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_111(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0) || !PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
	{
		return 0;
	}
	return PED::GET_VEHICLE_PED_IS_IN(iParam0, 0) == PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
}

void func_112(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85[iParam0]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_85[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return;
	}
	switch (Local_85.f_21[iParam0])
	{
		case 0:
			if (!func_48(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0], 64))
			{
				Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0] = 0;
				func_47(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_48(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 900f)
					{
						func_47(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if ((!func_48(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0], 2) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 900f) && !func_22(PLAYER::PLAYER_ID()))
			{
				func_91(&(Local_369.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_117(&(Local_369.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_47(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_48(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0], 4))
			{
				if (func_116(iParam0))
				{
					AI::TASK_AIM_GUN_AT_ENTITY(iVar0, func_115(iParam0), -1, 0);
				}
				if (func_114(iParam0, 1630799643))
				{
					func_47(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_48(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0], 8) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 900f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				if (!func_17(&Local_369))
				{
					func_14(&Local_369);
				}
				if (func_11(&Local_369) >= 7f && !func_22(PLAYER::PLAYER_ID()))
				{
					func_47(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0]), 8);
					func_117(&(Local_369.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_17(&Local_369))
			{
				func_1(&Local_369);
			}
			if (!func_48(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0], 16))
			{
				if (func_113(iParam0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 900f)
				{
					func_47(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0]), 16);
					if (!func_158())
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, PLAYER::GET_WANTED_LEVEL_THRESHOLD(4));
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_21393));
					}
				}
			}
			if (func_48(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) > 900f)
					{
						func_43(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_48(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0], 16))
			{
				if (func_113(iParam0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 900f)
				{
					func_47(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0]), 16);
					if (!func_158())
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_21393) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
					}
				}
			}
			if (func_48(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) > 900f)
					{
						func_43(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_114(iParam0, 1630799643))
			{
				if (func_116(iParam0))
				{
					AI::TASK_AIM_GUN_AT_ENTITY(iVar0, func_115(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_48(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0], 4))
			{
				if (func_116(iParam0))
				{
					AI::CLEAR_PED_TASKS(iVar0);
				}
				if (!func_114(iParam0, 1435919172))
				{
					func_43(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0]), 4);
					func_43(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_113(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85[iParam0]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_85[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iVar0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iVar0))
	{
		return 1;
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85[iParam0]))
	{
		return 1;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_85[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 1;
	}
	if (AI::GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 1 && AI::GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_115(int iParam0)
{
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!ENTITY::IS_ENTITY_DEAD(iVar2, 0))
			{
				fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar2, 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_85[iParam0]), 1));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_116(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85[iParam0]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_85[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_117(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_69(sParam2, iParam3, 0);
}

bool func_118(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_119()
{
	if (!STREAMING::HAS_MODEL_LOADED(1702441027))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-1281684762))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-1422914553))
	{
		return 0;
	}
	return 1;
}

void func_120(var uParam0, int iParam1)
{
	func_121(uParam0, iParam1);
}

void func_121(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_122(int iParam0)
{
	if (func_30(iParam0) == 236 || func_30(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

bool func_123()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 0);
}

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_125(iParam0))
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

bool func_125(int iParam0)
{
	return func_126(iParam0);
}

bool func_126(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_13.f_1, 0);
}

void func_127()
{
	STREAMING::REQUEST_MODEL(1702441027);
	STREAMING::REQUEST_MODEL(-1281684762);
	STREAMING::REQUEST_MODEL(-1422914553);
}

int func_128()
{
	switch (Local_85.f_19)
	{
		case 0:
			if (func_150())
			{
				Local_85.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_149())
			{
				Local_85.f_19 = 2;
			}
			break;
		
		case 2:
			if (((((((func_124(PLAYER::PLAYER_ID(), 1, 0) || func_123()) || func_25(PLAYER::PLAYER_ID()) == 225) || func_25(PLAYER::PLAYER_ID()) == 233) || func_122(PLAYER::PLAYER_ID())) || func_21()) || Global_1574410) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				func_120(&(Local_85.f_20), 1);
				Local_85.f_19 = 3;
			}
			else if (func_147())
			{
				func_120(&(Local_85.f_20), 1);
				Local_85.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_124(PLAYER::PLAYER_ID(), 1, 0) && !func_123())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_144(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_131(iVar0);
					iVar0++;
				}
			}
			if (((((func_25(PLAYER::PLAYER_ID()) == 225 || func_25(PLAYER::PLAYER_ID()) == 233) || func_122(PLAYER::PLAYER_ID())) || Global_1574410) || func_21()) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				func_130();
			}
			if (func_129())
			{
				Local_85.f_19 = 4;
			}
			break;
		
		case 4:
			func_130();
			return 1;
			break;
	}
	return 0;
}

int func_129()
{
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_130()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85[iVar0]))
		{
			uVar1 = NETWORK::NET_TO_PED(Local_85[iVar0]);
			if (!ENTITY::IS_ENTITY_DEAD(uVar1, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85.f_3[iVar0].f_1))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_85.f_3[iVar0].f_1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85.f_3[iVar0]))
		{
			uVar2 = NETWORK::NET_TO_VEH(Local_85.f_3[iVar0]);
			if (!ENTITY::IS_ENTITY_DEAD(uVar2, 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_131(int iParam0)
{
	if (Local_85.f_3[iParam0].f_2 > 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85.f_3[iParam0].f_1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_85.f_3[iParam0].f_1), 0))
			{
				uVar0 = NETWORK::NET_TO_PED(Local_85.f_3[iParam0].f_1);
				Var1 = { ENTITY::GET_ENTITY_COORDS(uVar0, 1) };
				if (Var1.z <= -150f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85.f_3[iParam0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_85.f_3[iParam0]), 0))
						{
							uVar4 = NETWORK::NET_TO_VEH(Local_85.f_3[iParam0]);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
	switch (Local_85.f_3[iParam0].f_2)
	{
		case 0:
			if (func_143(iParam0, 16))
			{
				Local_85.f_3[iParam0].f_4 = -1;
				Local_85.f_3[iParam0].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_141(iParam0))
			{
				Local_85.f_3[iParam0].f_2 = 2;
			}
			break;
		
		case 2:
			Var5 = { func_140(iParam0) };
			if (!func_139(Var5))
			{
				if (!NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(Var5, 20f) && !CAM::IS_SPHERE_VISIBLE(Var5, 20f))
				{
					if (func_134(Var5, ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(Local_85.f_3[iParam0].f_4)), iParam0))
					{
						Local_85.f_3[iParam0].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_143(iParam0, 2))
			{
				Local_85.f_3[iParam0].f_2 = 4;
			}
			break;
		
		case 4:
			iVar8 = PLAYER::GET_PLAYER_PED(Local_85.f_3[iParam0].f_4);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
			{
				Local_85.f_3[iParam0].f_2 = 5;
			}
			else if (ENTITY::IS_ENTITY_DEAD(iVar8, 0))
			{
				Local_85.f_3[iParam0].f_2 = 5;
			}
			else if (PED::IS_PED_IN_ANY_PLANE(iVar8) || PED::IS_PED_IN_ANY_HELI(iVar8))
			{
				if (func_133(PED::GET_VEHICLE_PED_IS_IN(iVar8, 0)))
				{
					Local_85.f_3[iParam0].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_143(iParam0, 8))
			{
				Local_85.f_3[iParam0].f_2 = 6;
				Local_85.f_3[iParam0].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_132(iParam0, 16))
			{
				Local_85.f_3[iParam0].f_2 = 0;
			}
			if (func_141(iParam0))
			{
				Local_85.f_3[iParam0].f_2 = 3;
			}
			break;
	}
}

int func_132(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_48(Local_112[iVar0].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
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

int func_134(struct<3> Param0, var uParam3, int iParam4)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85.f_3[iParam4]))
	{
		if (!func_136(&(Local_85.f_3[iParam4]), -1281684762, Param0, uParam3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_85.f_3[iParam4]), 3);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85.f_3[iParam4]))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85.f_3[iParam4].f_1))
		{
			if (!func_135(&(Local_85.f_3[iParam4].f_1), Local_85.f_3[iParam4], 29, -1422914553, -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(NETWORK::NET_TO_PED(Local_85.f_3[iParam4].f_1), -123497569);
				PED::SET_PED_CAN_SWITCH_WEAPON(NETWORK::NET_TO_PED(Local_85.f_3[iParam4].f_1), 0);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_135(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_136(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
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
			func_137(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_137(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_138(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
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

int func_138(int iParam0, struct<3> Param1, int iParam4)
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

int func_139(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_140(int iParam0)
{
	iVar0 = PLAYER::GET_PLAYER_PED(Local_85.f_3[iParam0].f_4);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -250f, (40f * SYSTEM::TO_FLOAT(iParam0))) };
	if (Var1.z < 100f)
	{
		Var1.z = 100f;
	}
	return Var1;
}

int func_141(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!func_142(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))))
			{
				if (PED::IS_PED_IN_ANY_PLANE(iVar1) || PED::IS_PED_IN_ANY_HELI(iVar1))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))) >= 4)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, 0) };
						if (func_20(Var2, 3, 1000, 0) && Var2.z > 90f)
						{
							Local_85.f_3[iParam0].f_4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_142(int iParam0)
{
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = PLAYER::GET_PLAYER_PED(Local_85.f_3[iVar1].f_4);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iParam0 == Local_85.f_3[iVar1].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_143(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_48(Local_112[iVar0].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_144(int iParam0)
{
	switch (Local_85.f_21[iParam0])
	{
		case 0:
			if (func_146(iParam0, 64))
			{
				Local_85.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_145(iParam0, 1))
			{
				Local_85.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_145(iParam0, 2))
			{
				Local_85.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_146(iParam0, 4))
			{
				Local_85.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_145(iParam0, 8))
			{
				Local_85.f_21[iParam0] = 5;
			}
			if (!func_145(iParam0, 1))
			{
				Local_85.f_21[iParam0] = 7;
			}
			if (func_145(iParam0, 16))
			{
				Local_85.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_145(iParam0, 16))
			{
				Local_85.f_21[iParam0] = 6;
			}
			if (!func_145(iParam0, 1))
			{
				Local_85.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_145(iParam0, 4))
			{
				Local_85.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_145(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_48(Local_112[iVar0].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_146(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_48(Local_112[iVar0].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_147()
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_148(&(Local_85[0]), 29, 1702441027, -2308.4f, 3391f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85[0]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_85[0]), -1074790547, 200, 1, 1);
	}
	if (!func_148(&(Local_85[1]), 29, 1702441027, -1588.9f, 2792.9f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85[1]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_85[1]), -1074790547, 200, 1, 1);
	}
	return iVar0;
}

int func_148(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, int iParam8, int iParam9)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	uVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, iParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(uVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_REGISTER(uVar0, iParam9);
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

int func_149()
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!func_118(Local_112[iVar1], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_150()
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!func_118(Local_112[iVar1], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_151()
{
	if (!func_156())
	{
		return;
	}
	if (func_106(&uLocal_564) && func_104(&uLocal_564, Global_262145.f_21468, 0))
	{
		func_103(&uLocal_564);
	}
	if (func_106(&uLocal_562) && func_104(&uLocal_562, Global_262145.f_21469, 0))
	{
		func_103(&uLocal_562);
		iLocal_559 = 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
	{
		if (func_152())
		{
			if (!Global_2537071.f_6571)
			{
				Global_2537071.f_6571 = 1;
				func_55("BASE_EXP_WARN", -1);
			}
			if (!iLocal_559)
			{
				iLocal_559 = 1;
				func_105(&uLocal_564, 0, 0);
				func_105(&uLocal_562, 0, 0);
			}
			else if (!func_106(&uLocal_564))
			{
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				bLocal_554 = true;
				bLocal_555 = true;
				iLocal_559 = 0;
				func_103(&uLocal_564);
				func_103(&uLocal_562);
			}
		}
	}
}

int func_152()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_155(&uLocal_560, iVar1);
		iLocal_561 = func_154();
		if (iLocal_561 >= 0)
		{
			uVar0 = func_153(iLocal_561);
			if (ENTITY::DOES_ENTITY_EXIST(uVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

var func_153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f);
			break;
		
		case 1:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f);
			break;
		
		case 2:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f);
			break;
		
		case 3:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f);
			break;
		
		case 4:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f);
			break;
		
		case 5:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f);
			break;
		
		case 6:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f);
			break;
		
		case 7:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f);
			break;
		
		case 8:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f);
			break;
		
		case 9:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f);
			break;
		
		case 10:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f);
			break;
		
		case 11:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f);
			break;
		
		case 12:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f);
			break;
		
		case 13:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f);
			break;
		
		case 14:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f);
			break;
		
		case 15:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f);
			break;
		
		case 16:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f);
			break;
		
		case 17:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f);
			break;
		
		case 18:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f);
			break;
		
		case 19:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 20:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 21:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f);
			break;
		
		case 22:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f);
			break;
		
		case 23:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f);
			break;
		
		case 24:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f);
			break;
		
		case 25:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f);
			break;
		
		case 26:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_560, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f);
			break;
	}
	return uVar0;
}

int func_154()
{
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f))
	{
		return 0;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f))
	{
		return 1;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f))
	{
		return 2;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f))
	{
		return 3;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f))
	{
		return 4;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f))
	{
		return 5;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f))
	{
		return 6;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f))
	{
		return 7;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f))
	{
		return 8;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f))
	{
		return 9;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f))
	{
		return 10;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f))
	{
		return 11;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f))
	{
		return 12;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f))
	{
		return 13;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f))
	{
		return 14;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f))
	{
		return 15;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f))
	{
		return 16;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f))
	{
		return 17;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f))
	{
		return 18;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 19;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 20;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f))
	{
		return 21;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f))
	{
		return 22;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f))
	{
		return 23;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f))
	{
		return 24;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f))
	{
		return 25;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_560, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f))
	{
		return 26;
	}
	return -1;
}

void func_155(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			break;
		
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			break;
		
		case 6:
			*uParam0 = 19;
			break;
		
		case 7:
			*uParam0 = 20;
			break;
		
		case 8:
			*uParam0 = 21;
			break;
		
		case 9:
			*uParam0 = 32;
			break;
		
		case 10:
			*uParam0 = 36;
			break;
		
		case 11:
			*uParam0 = 40;
			break;
		
		case 12:
			*uParam0 = 41;
			break;
		
		case 13:
			*uParam0 = 43;
			break;
		
		case 14:
			*uParam0 = 44;
			break;
		
		case 15:
			*uParam0 = 45;
			break;
		
		case 16:
			*uParam0 = 46;
			break;
		
		case 17:
			*uParam0 = 47;
			break;
		
		case 18:
			*uParam0 = 48;
			break;
		
		case 19:
			*uParam0 = 49;
			break;
		
		case 20:
			*uParam0 = 50;
			break;
		
		case 21:
			*uParam0 = 53;
			break;
		
		case 22:
			*uParam0 = 54;
			break;
		
		case 23:
			*uParam0 = 55;
			break;
		
		case 24:
			*uParam0 = 56;
			break;
		
		case 25:
			*uParam0 = 57;
			break;
	}
}

int func_156()
{
	if (func_157(PLAYER::PLAYER_ID(), 150) == 2)
	{
		return 0;
	}
	return 1;
}

int func_157(int iParam0, int iParam1)
{
	if (func_30(iParam0) == iParam1)
	{
		return Global_1628237[iParam0].f_11.f_496;
	}
	return -1;
}

int func_158()
{
	if (func_157(PLAYER::PLAYER_ID(), 150) == 2)
	{
		return 1;
	}
	if (func_61(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_163(1))
	{
		iVar0 = func_162();
		if (iVar0 != func_39())
		{
			if (func_61(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_38(iVar2, 0, 1))
		{
			if (iVar2 != PLAYER::PLAYER_ID())
			{
				if (func_163(1))
				{
					if (func_160(PLAYER::PLAYER_ID(), iVar2))
					{
						if (func_61(iVar2))
						{
							return 1;
						}
					}
				}
				if (func_159(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), PLAYER::GET_PLAYER_PED(iVar2)))
				{
					uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), 0);
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar3, -1, 0) == PLAYER::GET_PLAYER_PED(iVar2))
					{
						if (func_61(iVar2))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_159(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0) && ENTITY::DOES_ENTITY_EXIST(uParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0) && PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_160(int iParam0, int iParam1)
{
	iVar0 = func_161(iParam0);
	if (!iVar0 == func_39())
	{
		if (iVar0 == func_161(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_161(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_39();
}

var func_162()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

bool func_163(bool bParam0)
{
	return func_59(PLAYER::PLAYER_ID(), bParam0);
}

int func_164()
{
	func_172(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_171())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_170())
	{
		return 1;
	}
	if (func_169(159))
	{
		if (!func_168())
		{
			return 1;
		}
	}
	if (func_169(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_165() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_165()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_165()
{
	switch (func_167())
	{
		case 0:
			return func_166();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_166()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_167()
{
	return Global_30768;
}

bool func_168()
{
	return Global_2450632.f_598;
}

int func_169(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_170()
{
	return Global_2460680;
}

bool func_171()
{
	return Global_2450632.f_593;
}

void func_172(var uParam0)
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
					func_173(iVar0);
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

void func_173(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_38(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_174(uVar4, &bVar5))
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

int func_174(int iParam0, var uParam1)
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

void func_175()
{
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != 5)
	{
		if (func_182(5, 0, 1))
		{
			if (NETWORK::_0xCB215C4B56A7FAE7(0) <= 5)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != 3)
	{
		if (func_176(3, 0, 1))
		{
			if (NETWORK::_0x0CD9AB83489430EA(0) <= 3)
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
			}
		}
	}
}

bool func_176(int iParam0, bool bParam1, bool bParam2)
{
	return func_177(1, iParam0, 1, bParam1, bParam2);
}

int func_177(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!GAMEPLAY::IS_BIT_SET(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_181(iParam0) - func_180(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_180(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_181(iParam0) - func_179(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_180(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_181(iParam0) - func_180(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[PLAYER::PLAYER_ID()] != 3)
		{
			iVar1 = (iVar1 - func_178(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_178(int iParam0)
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

int func_179(int iParam0)
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

int func_180(int iParam0, bool bParam1)
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

int func_181(int iParam0)
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

bool func_182(int iParam0, bool bParam1, bool bParam2)
{
	return func_177(0, iParam0, 1, bParam1, bParam2);
}

void func_183()
{
	SYSTEM::WAIT(0);
}

void func_184()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_129())
			{
				func_130();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UI::DOES_BLIP_EXIST(Local_369.f_172[iVar0]))
		{
			UI::REMOVE_BLIP(&(Local_369.f_172[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_557)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		iLocal_557 = 0;
	}
	Global_1687623 = 0;
	func_186();
	func_185();
}

void func_185()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_186()
{
	if (!Local_369.f_176)
	{
		return;
	}
	if (STREAMING::HAS_MODEL_LOADED(1702441027))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1702441027);
	}
	if (STREAMING::HAS_MODEL_LOADED(-1281684762))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1281684762);
	}
	if (STREAMING::HAS_MODEL_LOADED(-1422914553))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1422914553);
	}
}

void func_187(struct<21> Param0)
{
	func_191(func_192(Param0), Param0);
	func_189(0, -1, 0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_85, 27);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_112, 257);
	GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_188())
	{
		func_184();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_184();
	}
	Global_2537071.f_6564 = 0;
}

int func_188()
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
		if (func_171())
		{
			return 0;
		}
		if (func_169(157))
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

int func_189(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_185();
			}
			else
			{
				return 0;
			}
		}
		if (!func_190())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_185();
					}
					else
					{
						return 0;
					}
				}
				if (func_171())
				{
					if (!bParam2)
					{
						func_185();
					}
					else
					{
						return 0;
					}
				}
				if (func_169(157))
				{
					if (!bParam2)
					{
						func_185();
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
					func_185();
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
				func_185();
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
			func_185();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_190()
{
	return Global_1312854;
}

void func_191(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_185();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_192(int iParam0)
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
