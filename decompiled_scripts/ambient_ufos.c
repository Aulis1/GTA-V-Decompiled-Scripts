#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	struct<3> Local_64 = { 0, 0, 0 } ;
	float fLocal_67 = 0f;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	struct<3> Local_78[2];
	bool bLocal_85 = 0;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_44 = 1;
	iLocal_45 = 65;
	iLocal_46 = 49;
	iLocal_47 = 64;
	Local_64 = { -1124.392f, -514.7001f, 33.21493f };
	fLocal_67 = 200f;
	Local_68 = { 2490f, 3777f, 2402.879f };
	Local_71 = { -2052f, 3237f, 1450.078f };
	iLocal_74 = -1;
	iLocal_76 = -1;
	bLocal_85 = true;
	fLocal_86 = 10f;
	fLocal_87 = 90f;
	fLocal_88 = 35f;
	fLocal_89 = 60f;
	fLocal_90 = 275f;
	iLocal_91 = 1500;
	iLocal_92 = -1;
	iLocal_94 = 3000;
	iLocal_95 = 708;
	iLocal_96 = 377;
	iLocal_97 = 1000;
	iLocal_98 = 2093;
	iLocal_101 = -1;
	iLocal_102 = -1;
	bLocal_103 = true;
	bLocal_104 = true;
	if (unk_0x4210287E2833D44B(3))
	{
		func_12();
	}
	while (unk_0x8B6A925F148E0E94())
	{
		SYSTEM::WAIT(0);
	}
	if (!unk_0xD17A6DB35E21C90C("ufo"))
	{
		unk_0xD0051FAE2E1BB4C8("ufo");
	}
	Local_78[0 /*3*/] = { Local_68 };
	Local_78[1 /*3*/] = { Local_71 };
	while (true)
	{
		func_11(unk_0x7D2B9E6A64637269());
		if (Global_31350 == 1)
		{
			func_12();
		}
		if (bLocal_85)
		{
			if (!func_10(unk_0x7D2B9E6A64637269(), Local_78[0 /*3*/], (290f + 50f)))
			{
				if (!func_10(unk_0x7D2B9E6A64637269(), Local_78[1 /*3*/], (290f + 50f)))
				{
					func_12();
				}
			}
			if (iLocal_77 != 0)
			{
				if (!func_10(unk_0x7D2B9E6A64637269(), Local_78[0 /*3*/], (fLocal_90 + 50f)))
				{
					if (!func_10(unk_0x7D2B9E6A64637269(), Local_78[1 /*3*/], (fLocal_90 + 50f)))
					{
						unk_0x44095C938FBA7E09("AZ_SPECIAL_UFO_01", 0, 1);
						unk_0x44095C938FBA7E09("AZ_SPECIAL_UFO_02", 0, 1);
						iLocal_77 = 0;
						iLocal_76 = -1;
					}
				}
			}
		}
		func_8();
		switch (iLocal_77)
		{
			case 0:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_78.x)
				{
					if (func_10(unk_0x7D2B9E6A64637269(), Local_78[iVar0 /*3*/], fLocal_90))
					{
						iLocal_76 = iVar0;
						iLocal_77 = 1;
						unk_0x44095C938FBA7E09("AZ_SPECIAL_UFO_01", 1, 1);
						unk_0x44095C938FBA7E09("AZ_SPECIAL_UFO_02", 1, 1);
					}
					iVar0++;
				}
				break;
			
			case 1:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_78.x)
				{
					if (func_10(unk_0x7D2B9E6A64637269(), Local_78[iVar0 /*3*/], fLocal_87))
					{
						iLocal_76 = iVar0;
						iLocal_77 = 2;
					}
					iVar0++;
				}
				break;
			
			case 2:
				if (iLocal_76 == -1)
				{
					iLocal_77 = 1;
				}
				else
				{
					iLocal_74 = unk_0xDFB7BFA6482FEE1E();
					iLocal_75 = 0;
					iLocal_77 = 3;
				}
				break;
			
			case 3:
				if (func_10(unk_0x7D2B9E6A64637269(), Local_78[iLocal_76 /*3*/], fLocal_87))
				{
					iLocal_75 = (unk_0xDFB7BFA6482FEE1E() - iLocal_74);
					if (iLocal_75 >= iLocal_91)
					{
						iLocal_77 = 4;
						iLocal_92 = unk_0x5AD02BBC63E31E46();
						iLocal_93 = unk_0xDFB7BFA6482FEE1E();
						if (iLocal_76 == 0)
						{
							unk_0x4569EA65F1B056ED(iLocal_92, "SPECIAL_EVIL_UFO_DEATH_RAY", Local_78[iLocal_76 /*3*/], 0, 0, 0, 0);
						}
						else
						{
							unk_0x4569EA65F1B056ED(iLocal_92, "SPECIAL_EVIL_UFO_DEATH_RAY_3", Local_78[iLocal_76 /*3*/], 0, 0, 0, 0);
						}
						func_7();
						func_6();
					}
				}
				else
				{
					iLocal_77 = 1;
				}
				break;
			
			case 4:
				func_5();
				func_7();
				func_6();
				if (unk_0xDFB7BFA6482FEE1E() > (iLocal_93 + iLocal_94))
				{
					func_4(&iLocal_92);
				}
				if (!func_10(unk_0x7D2B9E6A64637269(), Local_78[iLocal_76 /*3*/], fLocal_90))
				{
					func_1();
					iLocal_76 = -1;
					iLocal_77 = 0;
					func_4(&iLocal_102);
					func_4(&iLocal_101);
					unk_0x44095C938FBA7E09("AZ_SPECIAL_UFO_01", 0, 1);
					unk_0x44095C938FBA7E09("AZ_SPECIAL_UFO_02", 0, 1);
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	var uVar0;
	
	if (func_11(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			uVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (func_2(uVar0))
			{
				unk_0x89E171705EA920DA(uVar0, 1, 0, 0);
			}
		}
	}
}

int func_2(var uParam0)
{
	if (func_3(uParam0))
	{
		if (unk_0xBFCE58B2B3249999(uParam0, 0))
		{
			if (!unk_0x2AB8EC6521549BAD(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
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

void func_4(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0x791B4C3811D53DFA(*iParam0);
		unk_0xBAB6F7501A822416(*iParam0);
		*iParam0 = -1;
	}
}

void func_5()
{
	var uVar0;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		uVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (func_2(uVar0))
		{
			unk_0x89E171705EA920DA(uVar0, 0, 0, 0);
			unk_0xBC5268D1B5C5B73B(uVar0, 2, 0f, 0f, -fLocal_86, 0f, 1f, 0f, 0, 0, 1, 1, 0, 1);
		}
	}
}

void func_6()
{
	if (bLocal_104)
	{
		if (unk_0xDFB7BFA6482FEE1E() > iLocal_99)
		{
			if (iLocal_101 != -1)
			{
				func_4(&iLocal_101);
				iLocal_99 = (unk_0xDFB7BFA6482FEE1E() + iLocal_98);
			}
			else
			{
				iLocal_101 = unk_0x5AD02BBC63E31E46();
				unk_0xD043E8A8264D756C(iLocal_101, "ent_amb_elec_crackle", 0, 0, 0, 1);
				iLocal_99 = (unk_0xDFB7BFA6482FEE1E() + iLocal_96);
			}
		}
	}
}

void func_7()
{
	if (bLocal_103)
	{
		if (unk_0xDFB7BFA6482FEE1E() > iLocal_100)
		{
			if (iLocal_102 != -1)
			{
				func_4(&iLocal_102);
				iLocal_100 = (unk_0xDFB7BFA6482FEE1E() + iLocal_97);
			}
			else
			{
				iLocal_102 = unk_0x5AD02BBC63E31E46();
				unk_0xD043E8A8264D756C(iLocal_102, "spl_stun_npc_master", 0, 0, 0, 1);
				iLocal_100 = (unk_0xDFB7BFA6482FEE1E() + iLocal_95);
			}
		}
	}
}

void func_8()
{
	struct<3> Var0;
	
	if (iLocal_76 == -1)
	{
		return;
	}
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		return;
	}
	if (!func_10(unk_0x7D2B9E6A64637269(), Local_78[iLocal_76 /*3*/], fLocal_88))
	{
		return;
	}
	Var0 = { func_9(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) - Local_78[iLocal_76 /*3*/]) * Vector(fLocal_89, fLocal_89, fLocal_89) };
	unk_0xBC5268D1B5C5B73B(unk_0x7D2B9E6A64637269(), 2, Var0, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
}

Vector3 func_9(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_10(var uParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(unk_0xD6E677FAD7521410(uParam0, 1), Param1) <= (fParam4 * fParam4);
}

bool func_11(var uParam0)
{
	if (!unk_0x419E13582192CFEA(uParam0))
	{
		return 0;
	}
	return !unk_0xE50EB54E0F21BED0(uParam0, 0);
}

void func_12()
{
	if (unk_0xD17A6DB35E21C90C("ufo"))
	{
		unk_0x43D3344EE0A5162E("ufo");
	}
	func_4(&iLocal_102);
	func_4(&iLocal_101);
	func_4(&iLocal_92);
	unk_0x44095C938FBA7E09("AZ_SPECIAL_UFO_01", 0, 1);
	unk_0x44095C938FBA7E09("AZ_SPECIAL_UFO_02", 0, 1);
	func_1();
	unk_0x4BFE89D21F9885DC();
}

