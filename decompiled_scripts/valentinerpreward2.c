#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	var uLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	struct<3> Local_17 = { 0, 0, 0 } ;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.55.02";
	iLocal_21 = -1;
	iLocal_22 = -1;
	unk_0x87F1904AB605184A(0);
	unk_0x5B2BDC877F7E8802();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1315833 = unk_0x15173FB88ABC94F9(sLocal_0);
	iVar0 = unk_0xDFB7BFA6482FEE1E() + 10000;
	while (unk_0xDFB7BFA6482FEE1E() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		if (func_114())
		{
			func_112();
		}
		if (unk_0x02BFF15CAA701972() && Global_2461742.f_3)
		{
			func_111();
			func_110();
			func_107();
			func_105();
			func_104();
			func_103();
			func_99();
			func_95();
			func_92();
			func_91();
			func_83();
			func_81();
			func_80();
			func_79();
			func_67();
			if (unk_0xE45310E861787FC2())
			{
				func_66();
				func_65();
			}
			func_64();
			func_63();
			func_61();
			func_53();
			func_41();
			func_35();
			func_12();
		}
		func_1();
		SYSTEM::WAIT(0);
	}
	unk_0x4BFE89D21F9885DC();
}

void func_1()
{
	bool bVar0;
	
	if (unk_0x02BFF15CAA701972() && Global_2461742.f_3)
	{
		switch (iLocal_28)
		{
			case 0:
				if (unk_0xE45310E861787FC2())
				{
					return;
				}
				if (Global_1683970.f_480 && func_11(Global_1683970.f_3268))
				{
					func_9(1);
					iLocal_28 = 1;
				}
				break;
			
			case 1:
				func_9(1);
				if ((!func_8() && func_6()) && Global_1683964 == 7)
				{
					bVar0 = true;
				}
				else if (unk_0xE45310E861787FC2())
				{
					bVar0 = true;
				}
				else if ((func_6() && !func_5(unk_0x1146A9AE09CE2B14())) && !func_2(unk_0x1146A9AE09CE2B14()))
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					iLocal_28 = 2;
				}
				break;
			
			case 2:
				func_9(0);
				iLocal_28 = 0;
				break;
		}
	}
	else if (iLocal_28 != 0)
	{
		func_9(0);
		iLocal_28 = 0;
	}
}

int func_2(int iParam0)
{
	if (iParam0 != func_4() && func_3(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 4);
	}
	return 0;
}

int func_3(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCAD1755E530A6012(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2441237.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	return -1;
}

int func_5(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_3(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
		else if ((Global_1312902 && iParam0 == unk_0x1146A9AE09CE2B14()) && func_3(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_6()
{
	if (func_7() == 0)
	{
		return 1;
	}
	return 0;
}

int func_7()
{
	return Global_1312485.f_18;
}

bool func_8()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_192 != 0;
}

void func_9(bool bParam0)
{
	func_10(bParam0);
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1683970.f_9), 21);
		unk_0x191DDA30577F440A(&(Global_1683970.f_9), 20);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_1683970.f_9), 21);
		unk_0xC664C0067EEAB8D1(&(Global_1683970.f_9), 20);
	}
}

void func_10(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1683970.f_4), 7);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_1683970.f_4), 7);
	}
}

int func_11(int iParam0)
{
	if ((((iParam0 == 150 || iParam0 == 148) || iParam0 == 152) || iParam0 == 151) || iParam0 == 149)
	{
		return 1;
	}
	return 0;
}

void func_12()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar46;
	float fVar47;
	struct<3> Var48;
	
	if (func_34(&uLocal_15))
	{
		unk_0x191DDA30577F440A(&Global_7669, 2);
		if (func_33(&uLocal_15, 60000, 0))
		{
			func_32(&uLocal_15, 0, 0);
			func_31(&uLocal_15);
		}
	}
	if (func_34(&uLocal_13) && func_33(&uLocal_13, 1000, 0))
	{
		if (iLocal_22 == -1)
		{
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				iLocal_22 = unk_0x5AD02BBC63E31E46();
				unk_0xE2D24A37AFCF27BF(iLocal_22, "05", unk_0x7D2B9E6A64637269(), "DLC_GR_CS2_Sounds", 0, 0);
			}
		}
		else if (func_33(&uLocal_13, 4000, 0))
		{
			if (!unk_0x964C4D363AF812CB(iLocal_22))
			{
				unk_0x791B4C3811D53DFA(iLocal_22);
			}
			unk_0xBAB6F7501A822416(iLocal_22);
			iLocal_22 = -1;
			unk_0xC0BBE340BE2AA02D("DLC_GR_CS2_General_Scene");
			func_32(&uLocal_13, 0, 0);
			func_31(&uLocal_13);
		}
	}
	if (!iLocal_7 && !func_24())
	{
		return;
	}
	iLocal_7 = 1;
	unk_0x191DDA30577F440A(&Global_7669, 2);
	if (!unk_0x419E13582192CFEA(uLocal_6))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		unk_0x16E516CA9C88FF48(iVar0);
		if (unk_0xA9C0BBFB9CBB66F1(iVar0))
		{
			uLocal_6 = unk_0x0358AFF5157FE26F(iVar0, 360.8759f, 5623.427f, 780.1747f, 0, 0, 1);
			unk_0x824F744352C8BC82(iVar0);
			unk_0xA2C015B68CE01357(uLocal_6, 1);
			unk_0x83E421E5A4A2A512(uLocal_6, 8000);
			iVar1 = func_23(7868, -1, 0);
			func_20(7868, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2 = 24;
			unk_0x25A7052BD3A74454(&Var2);
			Local_17 = { unk_0xD6E677FAD7521410(uLocal_6, 0) };
			iLocal_20 = 0;
		}
	}
	else
	{
		func_19();
		if (unk_0xE0A6F16F546C8274() || unk_0x07BE48DF95787FCB())
		{
			if (iLocal_21 == -1)
			{
				unk_0xB84B43B766630B5C("DLC_GR_CS2_General_Scene");
				iLocal_21 = unk_0x5AD02BBC63E31E46();
				unk_0xE2D24A37AFCF27BF(iLocal_21, "07", uLocal_6, "DLC_GR_CS2_Sounds", 0, 0);
			}
			if (!iLocal_8)
			{
				if (func_33(&uLocal_9, 4500, 0))
				{
					unk_0xA2C015B68CE01357(uLocal_6, 0);
					func_32(&uLocal_9, 0, 0);
					func_31(&uLocal_9);
					func_18(&uLocal_11, 0, 0);
					iLocal_8 = 1;
				}
			}
			else
			{
				fVar46 = (SYSTEM::TO_FLOAT(func_17(&uLocal_11, 0, 0)) / SYSTEM::TO_FLOAT(func_16()));
				fVar47 = (SYSTEM::TO_FLOAT(func_17(&uLocal_9, 0, 0)) / SYSTEM::TO_FLOAT(func_15()));
				fVar47 = (fVar47 * fVar46);
				Var48 = { func_13(Local_17, func_14(), fVar47) };
				unk_0x78CDDD1E6367978D(uLocal_6, Var48, 1, 0, 0, 1);
				if (fVar47 >= 1f)
				{
					iLocal_20++;
					Local_17 = { unk_0xD6E677FAD7521410(uLocal_6, 0) };
					func_32(&uLocal_9, 0, 0);
					func_31(&uLocal_9);
					if (func_15() == -1)
					{
						unk_0x04F4D55F2C0C756D(&uLocal_6);
						unk_0x0BE9A992AC49F59F();
						if (!unk_0x964C4D363AF812CB(iLocal_21))
						{
							unk_0x791B4C3811D53DFA(iLocal_21);
						}
						unk_0xBAB6F7501A822416(iLocal_21);
						iLocal_21 = -1;
						func_18(&uLocal_13, 0, 0);
						func_18(&uLocal_15, 0, 0);
						func_32(&uLocal_11, 0, 0);
						func_31(&uLocal_11);
						Local_17 = { 0f, 0f, 0f };
						iLocal_20 = 0;
						iLocal_7 = 0;
						iLocal_8 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_13(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_14()
{
	switch (iLocal_20)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
		
		case 1:
			return -1082.865f, 6390.52f, 924.2493f;
		
		case 2:
			return -2542.874f, 7217.514f, 1051.333f;
		
		case 3:
			return -4139.106f, 8143.302f, 1412.694f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_15()
{
	switch (iLocal_20)
	{
		case 0:
			return 2000;
		
		case 1:
			return 1000;
		
		case 2:
			return 100;
		
		case 3:
			return 50;
		
		default:
	}
	return -1;
}

int func_16()
{
	return 3150;
}

var func_17(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x02BFF15CAA701972() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0);
		}
		else
		{
			return unk_0x2D57EADCBEDDB2AA(unk_0xCB3024ED32EBF9EC(), *uParam0);
		}
	}
	return unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), *uParam0);
}

void func_18(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x02BFF15CAA701972() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x551F46B3C7DFB654();
			}
			else
			{
				*uParam0 = unk_0xCB3024ED32EBF9EC();
			}
		}
		else
		{
			*uParam0 = unk_0xDFB7BFA6482FEE1E();
		}
		uParam0->f_1 = 1;
	}
}

void func_19()
{
	struct<3> Var0;
	
	Var0 = { unk_0x4BB6BF4A85268A22(uLocal_6, 2) };
	Var0.x = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	unk_0xBDDCDEC7B6205897(uLocal_6, Var0, 2, 1);
}

void func_20(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
		if (iVar1 > -1)
		{
			Global_2555428 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2555428 = 1;
		}
	}
	return iVar0;
}

int func_22()
{
	return Global_1312763;
}

int func_23(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2555716[iParam0 /*3*/][func_21(iParam1)];
	if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_24()
{
	if (((((((func_28(22107, -1, -1) && Global_2409299 == 7) && !unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0)) && func_27(unk_0x7D2B9E6A64637269(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2453903.f_3075.f_178 >= 1) && Global_2453903.f_3075.f_178 < 4) && func_26()) && func_25())
	{
		return 1;
	}
	return 0;
}

int func_25()
{
	if (func_28(15476, -1, -1) && func_23(5452, func_22(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xCDEE919CA17BB8B0(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		if ((iVar0 == 1420204096 || iVar0 == -1233681761) || iVar1 == -1429616491)
		{
			return 1;
		}
	}
	else if ((iVar1 == 1420204096 || iVar1 == -1233681761) || iVar1 == -1429616491)
	{
		return 1;
	}
	return 0;
}

bool func_27(var uParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(unk_0xD6E677FAD7521410(uParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_22();
	}
	iVar1 = func_30(iParam0, iParam1);
	uVar2 = func_29(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_30(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_22();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

void func_31(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_32(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x02BFF15CAA701972() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x551F46B3C7DFB654();
		}
		else
		{
			*uParam0 = unk_0xCB3024ED32EBF9EC();
		}
	}
	else
	{
		*uParam0 = unk_0xDFB7BFA6482FEE1E();
	}
	uParam0->f_1 = 1;
}

int func_33(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
	if (unk_0x02BFF15CAA701972() && !bParam2)
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_34(var uParam0)
{
	return uParam0->f_1;
}

void func_35()
{
	if (func_39(unk_0x1146A9AE09CE2B14()) && !iLocal_40)
	{
		if (((func_8() && func_38()) && func_37(Global_4456448.f_567, 1085.49f, 211.389f, -49.801f, 2.5f, 0)) && Global_4456448.f_86085 == 0)
		{
			iLocal_40 = 1;
			func_36(1);
		}
		else if (iLocal_40 && !Global_1312896)
		{
			iLocal_40 = 0;
		}
	}
	else if (iLocal_40)
	{
		iLocal_40 = 0;
	}
}

void func_36(int iParam0)
{
	Global_1312896 = iParam0;
}

int func_37(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x0BCA9ADE67DF9DD8((Param0.x - Param3.x)) <= fParam6)
		{
			if (unk_0x0BCA9ADE67DF9DD8((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x0BCA9ADE67DF9DD8((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x0BCA9ADE67DF9DD8((Param0.x - Param3.x)) <= fParam6)
	{
		if (unk_0x0BCA9ADE67DF9DD8((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

var func_38()
{
	return Global_2359693.f_3;
}

int func_39(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_3(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_40(Global_2426865[iParam0 /*449*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_40(int iParam0)
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
		case joaat("mpsv_lp0_31"):
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
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
		case 150:
		case 152:
		case 151:
		case 149:
			return 21;
			break;
		
		case 153:
			return 22;
			break;
	}
	return -1;
}

void func_41()
{
	if (func_52(unk_0x1146A9AE09CE2B14()))
	{
		switch (Global_2526974[84 /*66*/][Global_2520218.f_6754])
		{
			case 4:
				if ((((!func_51(unk_0x1146A9AE09CE2B14()) || func_50(unk_0x1146A9AE09CE2B14())) || func_49(unk_0x1146A9AE09CE2B14())) || func_48(unk_0x1146A9AE09CE2B14())) || func_47(unk_0x1146A9AE09CE2B14()))
				{
					func_46(0);
					func_45(1);
					func_44(0);
					func_43(0);
					func_42(0);
				}
				break;
			
			case 5:
				if ((((!func_48(unk_0x1146A9AE09CE2B14()) || func_50(unk_0x1146A9AE09CE2B14())) || func_49(unk_0x1146A9AE09CE2B14())) || func_51(unk_0x1146A9AE09CE2B14())) || func_47(unk_0x1146A9AE09CE2B14()))
				{
					func_46(0);
					func_45(0);
					func_44(0);
					func_43(1);
					func_42(0);
				}
				break;
			
			case 6:
				if (((!func_49(unk_0x1146A9AE09CE2B14()) || func_50(unk_0x1146A9AE09CE2B14())) || func_51(unk_0x1146A9AE09CE2B14())) || func_48(unk_0x1146A9AE09CE2B14()))
				{
					func_46(0);
					func_45(0);
					func_44(0);
					func_43(0);
					func_42(1);
				}
				break;
			}
	}
}

void func_42(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461, 4))
		{
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461), 4);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461, 4))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461), 4);
	}
}

void func_43(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461, 3))
		{
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461), 3);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461, 3))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461), 3);
	}
}

void func_44(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461, 2))
		{
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461), 2);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461, 2))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461), 2);
	}
}

void func_45(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461, 1))
		{
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461), 1);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461, 1))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461), 1);
	}
}

void func_46(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461, 0))
		{
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461), 0);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461, 0))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461), 0);
	}
}

int func_47(int iParam0)
{
	if (iParam0 != func_4())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_461, 2);
	}
	return 0;
}

int func_48(int iParam0)
{
	if (iParam0 != func_4())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_461, 3);
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 != func_4())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_461, 4);
	}
	return 0;
}

int func_50(int iParam0)
{
	if (iParam0 != func_4())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_461, 0);
	}
	return 0;
}

int func_51(int iParam0)
{
	if (iParam0 != func_4())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_461, 1);
	}
	return 0;
}

int func_52(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_3(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_40(Global_2426865[iParam0 /*449*/].f_319.f_6) == 22;
			}
		}
	}
	return 0;
}

void func_53()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!func_60(unk_0x1146A9AE09CE2B14()))
	{
		return;
	}
	if (func_56(unk_0x1146A9AE09CE2B14()) == 16)
	{
		if (iLocal_39 == 0)
		{
			iLocal_39 = 1;
		}
		return;
	}
	else if (iLocal_39)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			uVar3 = unk_0x6750311806FF130A(iVar0);
			if (unk_0xF46EDF82CA845956(uVar3))
			{
				iVar2 = unk_0x539ED6DF32477DE0(uVar3);
				if (iVar2 != unk_0x1146A9AE09CE2B14())
				{
					if (func_3(iVar2, 0, 1))
					{
						iVar1 = iVar2;
						if (func_55(iVar2, 0))
						{
							if (func_54(iVar2) == unk_0x1146A9AE09CE2B14())
							{
								if (Global_1713915[iVar1 /*27*/].f_15 != 0)
								{
									if (Global_1713915[unk_0x61BE49A80917237B() /*27*/].f_15 != Global_1713915[iVar1 /*27*/].f_15)
									{
										Global_1713915[unk_0x61BE49A80917237B() /*27*/].f_15 = Global_1713915[iVar1 /*27*/].f_15;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		iLocal_39 = 0;
	}
}

int func_54(int iParam0)
{
	if (iParam0 != func_4())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_4();
}

bool func_55(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_60(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_4();
}

int func_56(int iParam0)
{
	if (func_59(iParam0) == 271)
	{
		return func_57(iParam0);
	}
	return -1;
}

int func_57(int iParam0)
{
	if (func_58(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_58(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0)
{
	if (func_58(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_60(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_4())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

void func_61()
{
	if (func_52(unk_0x1146A9AE09CE2B14()) && !func_62(unk_0x1146A9AE09CE2B14()))
	{
		if (!iLocal_38)
		{
			unk_0x16E516CA9C88FF48(joaat("ch_prop_ch_side_panel02"));
			if (unk_0xA9C0BBFB9CBB66F1(joaat("ch_prop_ch_side_panel02")))
			{
				if (!unk_0x419E13582192CFEA(uLocal_37))
				{
					uLocal_37 = unk_0x0358AFF5157FE26F(joaat("ch_prop_ch_side_panel02"), -2216.521f, 1133.307f, -22.93f, 0, 0, 0);
					unk_0xDB8D6815E13996A9(uLocal_37, -2216.521f, 1133.307f, -22.93f, 0, 0, 1);
					unk_0xBDDCDEC7B6205897(uLocal_37, 0f, 0f, 166f, 2, 1);
					unk_0x8F160110753EB17B(uLocal_37, 1);
					unk_0xC22CF0F8AABFA658(uLocal_37, 0);
					unk_0x93500360FCCB65F3(uLocal_37, 0, 0);
					unk_0xA2C015B68CE01357(uLocal_37, 1);
				}
				unk_0x824F744352C8BC82(joaat("ch_prop_ch_side_panel02"));
				iLocal_38 = 1;
			}
		}
	}
	else if (iLocal_38)
	{
		if (unk_0x419E13582192CFEA(uLocal_37))
		{
			unk_0x04F4D55F2C0C756D(&uLocal_37);
		}
		iLocal_38 = 0;
	}
}

int func_62(int iParam0)
{
	if (iParam0 != func_4() && func_3(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 3);
	}
	return 0;
}

void func_63()
{
	int iVar0;
	
	if (unk_0x636F1F53CC61D2C9(joaat("fm_mission_controller_2020")) <= 0)
	{
		iLocal_35 = 0;
		return;
	}
	if (!Global_2453009.f_24)
	{
		iLocal_35 = 0;
		return;
	}
	if (iLocal_35)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_17161 - 1))
	{
		if (Global_4718592.f_17162[iVar0 /*221*/].f_1 != 4)
		{
		}
		else
		{
			if (Global_4718592.f_17162[iVar0 /*221*/].f_100 == 0)
			{
				Global_4718592.f_17162[iVar0 /*221*/].f_1 = 0;
				Global_4718592.f_17162[iVar0 /*221*/].f_100 = 0;
				Global_4718592.f_17162[iVar0 /*221*/].f_208[0] = 3;
				Global_4718592.f_17162[iVar0 /*221*/].f_39 = { 0f, 0f, 0f };
			}
			if (unk_0x234B68AC2E35ED5A(Global_969056.f_1, 14))
			{
				if (Global_969056.f_94[0] > 1)
				{
					Global_4718592.f_17162[iVar0 /*221*/].f_1 = 1;
					Global_4718592.f_17162[iVar0 /*221*/].f_99 = 13;
					Global_4718592.f_17162[iVar0 /*221*/].f_100 = 2;
				}
				else
				{
					Global_4718592.f_17162[iVar0 /*221*/].f_1 = 0;
				}
			}
		}
		iVar0++;
	}
	if (unk_0x234B68AC2E35ED5A(Global_969056.f_1, 14))
	{
		iLocal_35 = 1;
	}
}

void func_64()
{
	if (unk_0x636F1F53CC61D2C9(joaat("fm_mission_controller_2020")) > 0)
	{
		if (!iLocal_36)
		{
		}
		iLocal_36 = 1;
		return;
	}
	if (iLocal_36 == 1)
	{
		unk_0x7BFD277DA739DB2B(unk_0x1146A9AE09CE2B14(), 1f);
		iLocal_36 = 0;
	}
}

void func_65()
{
	if (unk_0x636F1F53CC61D2C9(joaat("fm_deathmatch_controler")) == 0)
	{
		return;
	}
	if (Global_4456448.f_133963 == 87 && unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 7))
	{
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_31, 6))
		{
			unk_0xC664C0067EEAB8D1(&(Global_4456448.f_31), 6);
		}
	}
}

void func_66()
{
	var uVar0;
	
	if (!Global_1695762)
	{
		return;
	}
	if (Global_968971 != 6)
	{
		return;
	}
	if (Global_1695570 == -1)
	{
		return;
	}
	uVar0 = unk_0xC228040556B02BEA();
	if (unk_0x419E13582192CFEA(uVar0))
	{
	}
	else
	{
		return;
	}
	switch (Global_4456448.f_109021[Global_1695570 /*1591*/].f_1538)
	{
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
			unk_0xA97EFD0124D68AB9(uVar0);
			break;
	}
}

void func_67()
{
	switch (iLocal_27)
	{
		case 0:
			if (unk_0x234B68AC2E35ED5A(Global_1683970, 6))
			{
				if (unk_0x234B68AC2E35ED5A(Global_2441237.f_502.f_60, 0) && unk_0x636F1F53CC61D2C9(1364765156) > 0)
				{
					iLocal_27 = 1;
				}
			}
			break;
		
		case 1:
			if (Global_1312436.f_1)
			{
				iLocal_27 = 2;
			}
			else if (func_77())
			{
				iLocal_27 = 0;
			}
			break;
		
		case 2:
			if (!Global_1312436.f_1)
			{
				iLocal_27 = 0;
			}
			else if (func_77())
			{
				iLocal_27 = 3;
			}
			break;
		
		case 3:
			iLocal_27 = 0;
			if (Global_1312436.f_1)
			{
				func_68();
			}
			break;
	}
}

void func_68()
{
	if (Global_1312436.f_1 == 1)
	{
		func_69(7, 0, 1);
		Global_1312436.f_1 = 0;
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_9 = 0;
	}
}

void func_69(int iParam0, int iParam1, bool bParam2)
{
	if (func_76())
	{
		if (iParam1 == 1)
		{
			if (Global_2544210.f_4461 == -1)
			{
				Global_2544210.f_4461 = Global_262145.f_26682;
			}
			func_32(&(Global_2544210.f_4459), 0, 0);
			if (bParam2)
			{
				if (Global_2544210.f_4464 == -1)
				{
					Global_2544210.f_4464 = Global_262145.f_26683;
				}
				func_32(&(Global_2544210.f_4462), 0, 0);
			}
			else
			{
				Global_1312436 = 0;
				Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_8 = 0;
				func_75(1);
			}
		}
		else
		{
			Global_1312436 = 0;
			Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_8 = 0;
			func_75(1);
		}
		if ((!unk_0xE45310E861787FC2() && !func_74()) && !func_70(unk_0x1146A9AE09CE2B14()))
		{
			Global_968396 = 0;
		}
		unk_0xE6363D7A51B58AD2(0, -1, -1, iParam0);
	}
}

int func_70(int iParam0)
{
	if (func_71(iParam0, 1))
	{
		if (Global_1590908[iParam0 /*874*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_72(iParam0))
		{
			return 1;
		}
	}
	if (Global_1590908[iParam0 /*874*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_72(int iParam0)
{
	return func_73(iParam0);
}

bool func_73(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

bool func_74()
{
	return Global_2453009.f_840;
}

void func_75(bool bParam0)
{
	if (unk_0x02BFF15CAA701972())
	{
		if (!func_76())
		{
			if (func_3(unk_0x1146A9AE09CE2B14(), 1, 0))
			{
				unk_0x13812A3531901D7E(unk_0x7D2B9E6A64637269(), 1);
				unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 342, 0);
				unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 122, 0);
			}
			unk_0x235C361BD000E938(unk_0x1146A9AE09CE2B14(), 1f);
			unk_0x319666C195174A88(0);
			unk_0x6FB1EB7F73800604(1);
			if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
			{
				Global_1312436.f_2 = 0;
				if (bParam0)
				{
					unk_0x2287F6D727F498F6(0, 0);
				}
			}
		}
		else
		{
			if (func_3(unk_0x1146A9AE09CE2B14(), 1, 1))
			{
				unk_0x13812A3531901D7E(unk_0x7D2B9E6A64637269(), 0);
				unk_0x2FF622571073AA69(unk_0x7D2B9E6A64637269(), joaat("weapon_unarmed"), 1);
				unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 342, 1);
				unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 122, 1);
				unk_0x235C361BD000E938(unk_0x1146A9AE09CE2B14(), 0.5f);
				if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
				{
					unk_0x2287F6D727F498F6(1, 0);
				}
			}
			unk_0x319666C195174A88(1);
			unk_0x6FB1EB7F73800604(0);
		}
	}
}

bool func_76()
{
	return Global_1312436;
}

bool func_77()
{
	return (unk_0x636F1F53CC61D2C9(1364765156) <= 0 && !func_78(unk_0x1146A9AE09CE2B14()));
}

int func_78(int iParam0)
{
	if (iParam0 != func_4())
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319.f_5, 6);
	}
	return 0;
}

void func_79()
{
	if (unk_0x636F1F53CC61D2C9(joaat("fm_mission_controller_2020")) <= 0)
	{
		iLocal_34 = 0;
		func_31(&uLocal_32);
		return;
	}
	if (iLocal_34)
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(Global_969018.f_15, 11))
	{
		return;
	}
	if (Global_2553793)
	{
		return;
	}
	if (func_34(&uLocal_32))
	{
		if (func_33(&uLocal_32, 30000, 0))
		{
			iLocal_34 = 1;
			Global_1590760 = -1;
		}
	}
	else
	{
		func_32(&uLocal_32, 0, 0);
	}
}

void func_80()
{
	if (unk_0x234B68AC2E35ED5A(Global_2518927.f_214, 11) || unk_0x234B68AC2E35ED5A(Global_2518927.f_214, 17))
	{
		if (Global_2518927.f_497 < unk_0xDFB7BFA6482FEE1E() + 200)
		{
			if (iLocal_31 == 0)
			{
				iLocal_31 = 1;
				if (func_3(unk_0x1146A9AE09CE2B14(), 1, 1))
				{
					unk_0x504B26425DFF773C(unk_0x7D2B9E6A64637269(), 0);
					unk_0xCA089CD1A17D76DF(unk_0x7D2B9E6A64637269());
					if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()) == 0)
					{
						unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
					}
				}
			}
		}
	}
	else if (iLocal_31 == 1)
	{
		iLocal_31 = 0;
	}
}

void func_81()
{
	switch (func_82())
	{
		case joaat("lynx"):
			Global_1703116 = 0.85f;
			break;
		
		case joaat("ztype"):
			Global_1703116 = 0.69f;
			break;
		
		case joaat("seminole2"):
			Global_1703116 = 0.64f;
			break;
		
		case joaat("michelli"):
			Global_1703116 = 0.72f;
			break;
	}
}

int func_82()
{
	return Global_262145.f_26274;
}

void func_83()
{
	func_84(&uLocal_30, -2163.247f, 1073.873f, -24.3537f, 0);
}

void func_84(var uParam0, struct<3> Param1, bool bParam4)
{
	if (func_52(unk_0x1146A9AE09CE2B14()) && !func_87())
	{
		if (*uParam0 == 0)
		{
			unk_0x61CB990E8973DFE6(Param1, 0.1f, 0, 1, uParam0, 0, 1, -1);
		}
		else if ((unk_0x2053F6ACFD4ED4BC() % 30) == 0)
		{
			if (func_86(*uParam0))
			{
				if (unk_0xA6BE8F025C6B653F(*uParam0))
				{
					if (!func_85(unk_0xD6E677FAD7521410(*uParam0, 1), Param1, 0))
					{
						unk_0xDB8D6815E13996A9(*uParam0, Param1, 1, 0, 1);
						if (bParam4)
						{
						}
					}
				}
			}
		}
	}
	else if (*uParam0 != 0)
	{
		*uParam0 = 0;
	}
}

bool func_85(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_86(var uParam0)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_87()
{
	return func_88(unk_0x1146A9AE09CE2B14());
}

int func_88(int iParam0)
{
	if (func_52(iParam0) || func_90(unk_0x1146A9AE09CE2B14()) == 153)
	{
		return !func_89(iParam0);
	}
	return 0;
}

int func_89(int iParam0)
{
	if (iParam0 == func_4())
	{
		return 0;
	}
	return Global_2418033.f_903.f_135[iParam0];
}

int func_90(int iParam0)
{
	if (iParam0 != func_4() && func_3(iParam0, 1, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_319.f_16;
	}
	return -1;
}

void func_91()
{
	func_84(&uLocal_29, -2193.595f, 1104.256f, -23.2574f, 1);
}

void func_92()
{
	if (func_93())
	{
		if (!Global_1714802)
		{
			Global_1714800 = 1;
			Global_1714801 = 0;
		}
	}
	else if (Global_1714802)
	{
		Global_1714801 = 1;
		Global_1714800 = 0;
	}
}

int func_93()
{
	if (!unk_0x234B68AC2E35ED5A(Global_2441237.f_502.f_56, 3))
	{
		return 1;
	}
	if (func_94())
	{
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1683970, 6) && Global_1683970.f_3498 == 153)
	{
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_5, 6))
	{
		return 1;
	}
	if (Global_2405077.f_2678 || unk_0x234B68AC2E35ED5A(Global_1683970, 27))
	{
		return 1;
	}
	if (!func_6())
	{
		return 1;
	}
	if (unk_0xE45310E861787FC2())
	{
		return 1;
	}
	return 0;
}

int func_94()
{
	if (func_2(unk_0x1146A9AE09CE2B14()))
	{
		return Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_16 == 153;
	}
	return 0;
}

void func_95()
{
	int iVar0;
	
	if (func_52(unk_0x1146A9AE09CE2B14()))
	{
		if (Global_2544210.f_5191.f_763)
		{
			iVar0 = func_97();
			if ((iVar0 != -1 && iVar0 <= 5000) && !func_34(&uLocal_25))
			{
				func_32(&uLocal_25, 1, 0);
				func_96(1, 1);
			}
		}
	}
	if (func_34(&uLocal_25))
	{
		if (func_33(&uLocal_25, 10000, 1))
		{
			func_31(&uLocal_25);
			func_96(0, 0);
		}
	}
}

void func_96(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!Global_1701707 && bParam0)
		{
			Global_1701707 = 1;
			iLocal_23 = 1;
		}
	}
	else
	{
		if (Global_1701707 && iLocal_23)
		{
			Global_1701707 = 0;
		}
		iLocal_23 = 0;
	}
	if (bParam1)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1683970.f_3, 5))
		{
			unk_0x191DDA30577F440A(&(Global_1683970.f_3), 5);
			iLocal_24 = 1;
		}
	}
	else
	{
		if (unk_0x234B68AC2E35ED5A(Global_1683970.f_3, 5) && iLocal_24)
		{
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_3), 5);
		}
		iLocal_24 = 0;
	}
}

int func_97()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (func_98(7, iVar0))
		{
			if (!unk_0xAB6A270F84A8781E(&(Global_1380638.f_4617.f_11[iVar0 /*16*/])) && unk_0x15173FB88ABC94F9(&(Global_1380638.f_4617.f_11[iVar0 /*16*/])) == 1444771325)
			{
				return Global_1380638.f_4617[iVar0];
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_98(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1380638.f_6736[iParam0], iParam1);
}

void func_99()
{
	if (Global_1683964 == 1)
	{
		if (func_62(unk_0x1146A9AE09CE2B14()))
		{
			if (func_101(unk_0x1146A9AE09CE2B14()) == func_4() && Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9 != func_4())
			{
				if (func_11(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_16) && unk_0x234B68AC2E35ED5A(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319, 4))
				{
					func_100(1, Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_16);
				}
			}
		}
	}
}

void func_100(bool bParam0, var uParam1)
{
	if (bParam0)
	{
		Global_1683970.f_487 = uParam1;
		Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_6 = uParam1;
	}
}

int func_101(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_4())
	{
		return iParam0;
	}
	if (func_102(iParam0) != -1)
	{
		iVar0 = func_40(func_102(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_55(iParam0, 0))
			{
				return func_54(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_4();
		}
		return Global_2426865[iParam0 /*449*/].f_319.f_9;
	}
	return func_4();
}

int func_102(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_3(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
		else if (((Global_1312902 || Global_2405077.f_2678) && iParam0 == unk_0x1146A9AE09CE2B14()) && func_3(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
	}
	return -1;
}

void func_103()
{
	if (!iLocal_3)
	{
		if (!func_52(unk_0x1146A9AE09CE2B14()))
		{
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				if (func_23(9831, -1, 0) == 0)
				{
					if ((((((!func_28(31708, -1, -1) && !func_28(31709, -1, -1)) && !func_28(31710, -1, -1)) && !func_28(31711, -1, -1)) && !func_28(31712, -1, -1)) && !func_28(31713, -1, -1)) && !func_28(31757, -1, -1))
					{
						func_20(9831, 6, -1, 1, 0);
						unk_0x4E0AF9114608257C("RADIO_36_AUDIOPLAYER", "TUNER_AP_SILENCE_MUSIC", 0);
						iLocal_3 = 1;
					}
				}
			}
		}
	}
}

void func_104()
{
	if ((Global_111239 && unk_0x636F1F53CC61D2C9(joaat("director_mode")) <= 0) && func_6())
	{
		unk_0xFBBC34CE79F2A41B();
	}
}

void func_105()
{
	int iVar0;
	
	if (!iLocal_5)
	{
		if (Global_1574226)
		{
			iVar0 = func_106(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10298 = 1;
			}
			iLocal_5 = 1;
		}
	}
	else if (!Global_1574226)
	{
		iLocal_5 = 0;
	}
}

int func_106(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_107()
{
	if (!iLocal_4)
	{
		if (Global_1574226)
		{
			if (func_109() || func_108())
			{
				Global_262145.f_19876 = 1;
			}
			else
			{
				Global_262145.f_19876 = 0;
			}
			iLocal_4 = 1;
		}
	}
	else if (!Global_1574226)
	{
		iLocal_4 = 0;
	}
}

int func_108()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_106(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10407)
	{
		return 0;
	}
	uVar1[0] = func_106(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_106(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_106(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_106(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10403 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10407)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_109()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_106(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10406)
	{
		return 0;
	}
	uVar1[0] = func_106(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_106(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_106(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_106(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10402 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10406)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_110()
{
	int iVar0;
	
	if (unk_0x3640D836D145B814())
	{
		iVar0 = 0;
		while (iVar0 < Global_1590908)
		{
			unk_0x191DDA30577F440A(&(Global_1590908[iVar0 /*874*/].f_752), 1);
			iVar0++;
		}
	}
}

void func_111()
{
	if (Global_262145.f_10382 != 120)
	{
		Global_262145.f_10382 = 120;
	}
}

void func_112()
{
	if (iLocal_1)
	{
		unk_0x9E8B548C035F223D(0f, 0.23f);
		unk_0x968AC0BD45D79791(255, 255, 255, 255);
		func_113(0.69f, 0.06f, "STRING", sLocal_0);
	}
	if (!iLocal_1)
	{
		if (unk_0xA300BD5F71A8C704())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0x86AF801D34E482FF(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 1:
					if (unk_0x86AF801D34E482FF(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (unk_0x86AF801D34E482FF(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (unk_0x86AF801D34E482FF(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (unk_0x86AF801D34E482FF(2, 188))
					{
						iLocal_1 = 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0xA300BD5F71A8C704())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0x86AF801D34E482FF(2, 188))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 1:
				if (unk_0x86AF801D34E482FF(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (unk_0x86AF801D34E482FF(2, 189))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (unk_0x86AF801D34E482FF(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (unk_0x86AF801D34E482FF(2, 189))
				{
					iLocal_1 = 0;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

void func_113(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0xE5A80C83FA218963(sParam2);
	unk_0x5F14E9A3543AFD0E(sParam3);
	unk_0xBC68FBDA73BBB4A6(fParam0, fParam1, 0);
}

bool func_114()
{
	return unk_0x14FA206D9CE730A9(-1762644250);
}

