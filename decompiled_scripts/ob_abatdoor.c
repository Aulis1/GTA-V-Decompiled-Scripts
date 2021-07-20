#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	struct<3> Local_4 = { 0, 0, 0 } ;
	struct<3> Local_7 = { 0, 0, 0 } ;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (unk_0x4210287E2833D44B(2))
	{
		func_4();
	}
	if (unk_0x419E13582192CFEA(uScriptParam_0))
	{
		unk_0xA2C015B68CE01357(uScriptParam_0, 1);
		Local_4 = { unk_0xD6E677FAD7521410(uScriptParam_0, 1) };
		Local_7 = { unk_0x4BB6BF4A85268A22(uScriptParam_0, 2) };
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0x419E13582192CFEA(uScriptParam_0))
		{
			if (unk_0xF03E9E22B505CC07(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x1861D54BAC877B58(uScriptParam_0))
						{
							unk_0x16E516CA9C88FF48(joaat("p_abat_roller_1_col"));
							if (unk_0xA9C0BBFB9CBB66F1(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0x795434E153F90E41(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0xBDDCDEC7B6205897(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x1861D54BAC877B58(uScriptParam_0))
						{
							if (unk_0x636F1F53CC61D2C9(joaat("michael2")) > 0)
							{
								unk_0x068BDE31F7D112BB("map_objects");
								if (unk_0x0EC2B29D4172D225("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x1861D54BAC877B58(uScriptParam_0))
						{
							if (unk_0x636F1F53CC61D2C9(joaat("michael2")) > 0)
							{
								if (Global_95801)
								{
									if (unk_0x0EC2B29D4172D225("map_objects"))
									{
										unk_0xFFE2CF1579FA5C68(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x419E13582192CFEA(uLocal_3))
						{
							Var3 = { unk_0xD6E677FAD7521410(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0x78CDDD1E6367978D(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x7FF6ACE380ED166C()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_95802 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(struct<3> Param0)
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

int func_2(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

bool func_3(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_4()
{
	if (unk_0x419E13582192CFEA(uLocal_3))
	{
		unk_0x04F4D55F2C0C756D(&uLocal_3);
	}
	unk_0x824F744352C8BC82(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x4BFE89D21F9885DC();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0xDA654EB115F9FF7D(uParam0, uParam0))
	{
	}
}

