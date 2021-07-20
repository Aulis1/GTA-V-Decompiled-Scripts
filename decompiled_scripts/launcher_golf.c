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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	struct<16> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char cLocal_69[64] = "";
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	float fLocal_117 = 0f;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
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
	Local_45 = { 500f, 500f, 500f };
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	iLocal_118 = 6;
	iLocal_119 = 18;
	Local_90 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_90 = { Local_90 };
	uLocal_86 = uLocal_86;
	cLocal_69 = { cLocal_69 };
	bVar0 = false;
	if (unk_0x4210287E2833D44B(82))
	{
		func_94(1);
	}
	uLocal_85 = unk_0xD56332194D622ECE(unk_0x1146A9AE09CE2B14());
	iLocal_95 = 0;
	func_92(&Global_110944, 0);
	func_89();
	if (func_88(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_37777)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_88(uLocal_94, 8))
	{
		if (!func_86(iLocal_100))
		{
			if (func_85(0, iLocal_99))
			{
				func_94(0);
			}
			else
			{
				func_94(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_85(0, iLocal_99))
		{
			func_94(1);
		}
	}
	if (func_88(uLocal_94, 8388608))
	{
		func_94(1);
	}
	if (func_88(uLocal_94, 524288) && (func_84() && !func_83()))
	{
		func_94(1);
	}
	if (unk_0x636F1F53CC61D2C9(unk_0xC34DC2DC2423B647()) > 1 && !func_88(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_82(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_81(10);
	}
	while (true)
	{
		uLocal_85 = unk_0xD56332194D622ECE(unk_0x1146A9AE09CE2B14());
		if (func_88(uLocal_94, 1048576))
		{
			if (unk_0xE50EB54E0F21BED0(uLocal_85, 0))
			{
				func_94(1);
			}
		}
		if (unk_0x419E13582192CFEA(uLocal_85) && !unk_0xE50EB54E0F21BED0(iLocal_85, 0))
		{
			Local_87 = { unk_0xD6E677FAD7521410(iLocal_85, 1) };
			fLocal_93 = SYSTEM::VDIST2(Local_87, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			Local_111 = { Local_87 };
			Local_114 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_111.f_2 = 0f;
			Local_114.f_2 = 0f;
			fLocal_110 = SYSTEM::VDIST2(Local_111, Local_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_86(iLocal_100) || (func_88(uLocal_94, 16) && !func_88(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_80();
						func_81(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_82(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_81(10);
						}
						if ((Local_87.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_79())
					{
						iLocal_103 = iLocal_103;
						func_81(3);
					}
					else
					{
						func_80();
					}
					break;
				
				case 3:
					if (unk_0x930F75DAF7DE892B())
					{
						func_94(1);
						return;
					}
					if (!func_86(iLocal_100))
					{
						if (!func_88(uLocal_94, 8))
						{
							bVar1 = true;
							if (unk_0xDA654EB115F9FF7D(&(Global_99370.f_3), &cLocal_69))
							{
								cLocal_69 = { Local_53 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_94(0);
								break;
							}
						}
					}
					if (!func_88(uLocal_94, 4))
					{
						func_78();
						func_77(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_99404)
					{
						if (iLocal_105 != 263)
						{
							if (func_76(6) && !func_75(iLocal_105))
							{
							}
							else
							{
								func_82(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_81(10);
					}
					else
					{
						cLocal_69 = { Local_53 };
						bVar2 = !func_88(uLocal_94, 64);
						func_92(&uLocal_94, 128);
						if (!func_74(3) && !Global_99404)
						{
							if (func_88(uLocal_94, 2097152))
							{
								if ((!func_88(uLocal_94, 1) || !unk_0x419E13582192CFEA(func_73())) && !Global_99404)
								{
									func_81(10);
									break;
								}
							}
						}
						if (func_88(uLocal_94, 524288) && (func_84() && !func_83()))
						{
							func_94(1);
						}
						if (func_72())
						{
							func_94(1);
						}
						if ((!func_64(6) || Global_111340) || func_63())
						{
							bVar2 = false;
						}
						if (func_88(uLocal_94, 1))
						{
							if (!func_62())
							{
								func_60(&uLocal_94, 128);
								bVar2 = false;
							}
						}
						if (func_59(1))
						{
							bVar2 = false;
						}
						if (Global_77248)
						{
							bVar2 = false;
						}
						if (func_58())
						{
							bVar2 = false;
						}
						if (unk_0xF471787D45ADC2C1())
						{
							bVar2 = false;
						}
						if (func_57() || func_56(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0xCAE2D0DD92A9241E(unk_0x1146A9AE09CE2B14()))
						{
							bVar2 = false;
						}
						if (!unk_0xF153D8DD47F1DEBD(unk_0x1146A9AE09CE2B14()))
						{
							bVar2 = false;
						}
						if (func_55(0) || func_54())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (unk_0xC49311A2A500FF09(iLocal_85, 0))
							{
								if (!unk_0x591190E69BE43117(unk_0x75B58B38E45C6F9A(iLocal_85, 0), ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 20f, 0, 0, iLocal_103))
								{
									bVar2 = false;
								}
							}
							else if (!unk_0x591190E69BE43117(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
							{
								bVar2 = false;
							}
							if (!unk_0x591190E69BE43117(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, 0))
							{
								func_60(&uLocal_94, 128);
								bVar2 = false;
							}
							iVar3 = unk_0xCA86FAB7FADC8353();
							if (iLocal_118 > iLocal_119)
							{
								if (iVar3 < iLocal_118 && iVar3 >= iLocal_119)
								{
									func_60(&uLocal_94, 128);
									bVar2 = false;
									if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
									{
										if (!func_88(uLocal_94, 134217728))
										{
											func_53("MG_NA_TIME", iLocal_118, iLocal_119);
											func_60(&uLocal_94, 134217728);
										}
									}
									else
									{
										func_92(&uLocal_94, 134217728);
									}
								}
							}
							else if (iVar3 < iLocal_118 || iVar3 >= iLocal_119)
							{
								func_60(&uLocal_94, 128);
								bVar2 = false;
								if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
								{
									if (!func_88(uLocal_94, 134217728))
									{
										func_53("MG_NA_TIME", iLocal_118, iLocal_119);
										func_60(&uLocal_94, 134217728);
									}
								}
								else
								{
									func_92(&uLocal_94, 134217728);
								}
							}
							if (bVar2 && func_46(func_47()) < iLocal_120)
							{
								func_60(&uLocal_94, 128);
								bVar2 = false;
								if (!func_88(uLocal_94, 33554432))
								{
									func_45("MG_YOU_IS_BROKE", iLocal_120, -1);
									func_60(&uLocal_94, 33554432);
								}
							}
							else
							{
								func_92(&uLocal_94, 33554432);
							}
							if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0x203739B163D4D88E(0, 51);
								if (func_44(uLocal_86))
								{
									if (iLocal_96 == -1)
									{
										if (iLocal_120 > 0)
										{
											func_43(&iLocal_96, 4, "", 1, 0, 0, 0);
											func_42(sLocal_101, iLocal_120);
											func_60(&uLocal_94, 2048);
										}
										else
										{
											func_43(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
											func_60(&uLocal_94, 2048);
										}
									}
									else if (!func_88(uLocal_94, 2048) || !unk_0xE8FFE38E2BA32BD6())
									{
										func_41(&iLocal_96);
										func_92(&uLocal_94, 2048);
									}
									if (func_39(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_41(&iLocal_96);
										func_92(&uLocal_94, 2048);
										if (func_88(uLocal_94, 2048))
										{
											if (unk_0xE8FFE38E2BA32BD6())
											{
												func_92(&uLocal_94, 2048);
												unk_0x66AE54CE92457FEE(0);
											}
										}
										unk_0xA7988ABD4140D469(&cLocal_69);
										unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 0, 56);
										func_81(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_41(&iLocal_96);
									func_92(&uLocal_94, 2048);
									if (func_88(uLocal_94, 2048))
									{
										if (unk_0xE8FFE38E2BA32BD6())
										{
											func_92(&uLocal_94, 2048);
											unk_0x66AE54CE92457FEE(0);
										}
									}
									unk_0xA7988ABD4140D469(&cLocal_69);
									unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 0, 56);
									func_81(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_96 != -1)
							{
								if (unk_0xE8FFE38E2BA32BD6())
								{
									func_41(&iLocal_96);
									func_92(&uLocal_94, 2048);
									unk_0x66AE54CE92457FEE(0);
								}
							}
						}
					}
					func_37();
					break;
				
				case 5:
					unk_0x203739B163D4D88E(0, 51);
					if (unk_0x79CDCC8ABB331B8C(&cLocal_69))
					{
						if (iLocal_96 != -1)
						{
							func_41(&iLocal_96);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_88(uLocal_94, 1))
						{
							if (func_76(6) || func_76(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_34(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
							{
								unk_0x1CA32AD653DA7B78(unk_0x1146A9AE09CE2B14());
							}
							func_33();
							if (Global_43182)
							{
								func_24(unk_0x7D2B9E6A64637269());
							}
							unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 56);
							iLocal_52 = SYSTEM::START_NEW_SCRIPT(&cLocal_69, iLocal_97);
							unk_0xFC3890D22570A26E(&cLocal_69);
							Local_53 = { cLocal_69 };
							StringCopy(&cLocal_69, "", 64);
							func_92(&uLocal_94, 4);
							func_23();
							func_60(&uLocal_94, 2);
							func_81(6);
							func_19(&uLocal_107);
							if (iLocal_99 != -1)
							{
								func_18(iLocal_99);
								func_15(func_17(iLocal_99), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_14();
						}
						else if (iVar4 == 0)
						{
							func_81(10);
						}
					}
					else
					{
						func_14();
					}
					break;
				
				case 6:
					if (func_88(Global_110944, 262144))
					{
						func_92(&Global_110944, 262144);
						func_13();
					}
					if (func_88(uLocal_94, 2097152))
					{
						if (!func_74(3) && !unk_0x4BE697D014536271(iLocal_52))
						{
							func_81(10);
						}
					}
					if (!unk_0x4BE697D014536271(iLocal_52))
					{
						unk_0xCD3872DF8178C437(SYSTEM::ROUND((func_9(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_8(&uLocal_107);
						func_92(&uLocal_94, 256);
						func_7();
						if (bVar0)
						{
							func_92(&uLocal_94, 2);
						}
						else if (func_88(uLocal_94, 2))
						{
							if (func_88(Global_110944, 0))
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_92(&uLocal_94, 2);
							}
							else
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_92(&uLocal_94, 2);
							}
						}
						func_81(0);
						if (iLocal_99 != -1)
						{
							if (func_88(Global_110944, 0))
							{
								unk_0xB1DADBFE243A3F87(func_17(iLocal_99), 0, Global_99407, 0);
								func_5(func_17(iLocal_99), 0, Global_99407, 1, 0);
							}
							else
							{
								unk_0xB1DADBFE243A3F87(func_17(iLocal_99), 0, Global_99407, 0);
								func_5(func_17(iLocal_99), 0, Global_99407, 0, 0);
							}
						}
						func_4();
						func_92(&Global_110944, 0);
						if (func_88(uLocal_94, 16777216))
						{
							func_94(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_112293.f_9083)
							{
								if (!func_85(0, iLocal_99))
								{
									func_94(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_81(0);
					break;
				
				case 10:
					func_94(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_82(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_81(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_82(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_41(&iLocal_96);
					}
					if (!unk_0xAB6A270F84A8781E(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							unk_0x66AE54CE92457FEE(1);
						}
					}
					func_81(4);
					break;
				
				case 4:
					if ((iLocal_104 % 150) == 0)
					{
						if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
						{
							if (iLocal_106 == 2)
							{
								if (iLocal_106 == 2)
								{
									if (func_86(iLocal_100) && func_85(0, iLocal_99))
									{
										func_89();
										if (iLocal_105 != 263)
										{
											func_82(iLocal_105, 1, 0);
										}
										func_81(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_82(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_81(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_89();
									if (iLocal_105 != 263)
									{
										func_82(iLocal_105, 1, 0);
									}
									func_81(0);
								}
							}
						}
						else
						{
							func_82(iLocal_105, 1, 0);
						}
					}
					else
					{
						iLocal_104++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

void func_2()
{
}

void func_3()
{
}

void func_4()
{
}

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0xAB6A270F84A8781E(&Global_96440))
	{
		return;
	}
	if (unk_0xE907BE2B8D7631B3(sParam0, &Global_96440, 0, -1) != 0)
	{
		return;
	}
	unk_0x0EEF1F9AA800357B(sParam0, iParam1, iParam2, iParam3, iParam4, Global_93547);
	StringCopy(&Global_96440, "", 64);
}

void func_6(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_41971)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_41970 = 0;
	Global_41972 = 0;
	Global_42009 = 15;
	Global_62095 = 0;
	Global_62096 = 0;
}

void func_7()
{
	char cVar0[24];
	
	if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
	{
		unk_0x5BC0C4A5DB4DFC65(StackVal, 0, 0, 0);
	}
	else if (unk_0xDC39E4D9D73B0D14() || unk_0xE22116C6D321FECA())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x9AA45EB0997539A2(0, &cVar0);
	}
}

void func_8(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_9(var uParam0)
{
	if (func_12(uParam0))
	{
		if (func_11(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_10(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_10(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0xDFB7BFA6482FEE1E());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x02BFF15CAA701972())
	{
		iVar2 = unk_0x551F46B3C7DFB654();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0xDFB7BFA6482FEE1E()) / 1000f);
}

bool func_11(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 2);
}

bool func_12(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 1);
}

int func_13()
{
	return 1;
}

void func_14()
{
}

void func_15(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xAB6A270F84A8781E(&Global_96440))
	{
		unk_0x0EEF1F9AA800357B(&Global_96440, 0, 0, 0, 1, 0);
		StringCopy(&Global_96440, "", 64);
	}
	StringCopy(&Global_96440, sParam0, 64);
	unk_0x3413996A2603AE97(sParam0, iParam1, iParam2, func_16(0));
}

bool func_16(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

char* func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_18(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
	{
		uVar0 = iParam0;
		unk_0x5BC0C4A5DB4DFC65(8, &uVar0, 1, 1);
	}
	else if (unk_0xDC39E4D9D73B0D14() || unk_0xE22116C6D321FECA())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x9AA45EB0997539A2(8, &cVar1);
	}
}

void func_19(var uParam0)
{
	if (!func_12(uParam0))
	{
		func_22(uParam0);
	}
	else
	{
		func_20(uParam0);
	}
}

void func_20(var uParam0)
{
	func_21(uParam0, 0f);
}

void func_21(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_10(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - fParam1);
	unk_0x191DDA30577F440A(uParam0, 1);
	unk_0xC664C0067EEAB8D1(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_22(var uParam0)
{
	if (!func_12(uParam0))
	{
		func_20(uParam0);
	}
}

void func_23()
{
	var uVar0;
	var uVar1[100];
	int iVar102;
	int iVar103;
	
	if (unk_0x61CB990E8973DFE6(-1370.625f, 56.1227f, 52.7033f, 100f, 1, 1, &uVar0, 0, 0, -1))
	{
		if (!unk_0xECEC7528A52B4EE8(uVar0))
		{
			iVar102 = unk_0x65C60F47A52ECB92(iVar0, &uVar1, -1);
			unk_0xCA089CD1A17D76DF(iVar0);
		}
		if (iVar102 == 0)
		{
		}
		iVar103 = 0;
		iVar103 = 0;
		while (iVar103 < iVar102)
		{
			if (!unk_0xECEC7528A52B4EE8(uVar1[iVar103]))
			{
				unk_0xCA089CD1A17D76DF(uVar1[iVar103]);
			}
			iVar103++;
		}
	}
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return;
	}
	iVar0 = func_32(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42969[iVar0 /*5*/];
		func_27(1, iVar1, 1);
		return;
	}
	iVar2 = func_26(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_25(iVar2);
}

void func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42943[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42943[iParam0 /*5*/].f_1 == unk_0x7D2B9E6A64637269())
		{
			Global_43180 = 0;
		}
	}
	Global_42943[iParam0 /*5*/] = 13;
	Global_42943[iParam0 /*5*/].f_1 = 0;
	Global_42943[iParam0 /*5*/].f_2 = 0;
	Global_42943[iParam0 /*5*/].f_3 = 0;
	Global_42943[iParam0 /*5*/].f_4 = 0;
	Global_42941 = (Global_42941 - 1);
	if (Global_42941 < 0)
	{
		Global_42941 = 0;
	}
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42943[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0, int iParam1, int iParam2)
{
	func_28(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_30(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_29();
	if (iVar0 == -1)
	{
		return;
	}
	Global_43050[iVar0 /*6*/] = iParam0;
	Global_43050[iVar0 /*6*/].f_1 = iParam1;
	Global_43050[iVar0 /*6*/].f_2 = iParam2;
	Global_43050[iVar0 /*6*/].f_3 = iParam3;
	Global_43050[iVar0 /*6*/].f_4 = iParam4;
	Global_43050[iVar0 /*6*/].f_5 = iParam5;
}

int func_29()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_43050[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_30(int iParam0, int iParam1, int iParam2)
{
	if (func_31(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_43050[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_43050[iVar0 /*6*/])
			{
				if (iParam1 == Global_43050[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_32(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42969[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42969[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_33()
{
	if (Global_8473[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8473[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8473[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8473[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8473[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8473[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xC664C0067EEAB8D1(&Global_7668, 25);
	unk_0x191DDA30577F440A(&Global_7669, 11);
}

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96848.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_36(0))
		{
			return 0;
		}
		Global_41973++;
		*iParam0 = Global_41973;
		unk_0x03903A362E41A74F(unk_0x638BDC79E655C1C2(), 0);
		Global_22531.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x4A8177C3950CBBB7(8);
		}
		Global_42009 = iParam2;
		Global_41971 = *iParam0;
		Global_41972 = iParam4;
		Global_41970 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_41970 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41970)
			{
				if (Global_41976[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41971 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_86(iParam2))
		{
			return 0;
		}
		if (Global_41970 == 8)
		{
			return 0;
		}
		Global_41973++;
		*iParam0 = Global_41973;
		Global_41976[Global_41970 /*4*/] = Global_41973;
		Global_41976[Global_41970 /*4*/].f_1 = iParam1;
		Global_41976[Global_41970 /*4*/].f_2 = iParam2;
		Global_41976[Global_41970 /*4*/].f_3 = 0;
		Global_41970++;
		if (iParam4 != 0)
		{
			func_35(iParam0, iParam4);
		}
	}
	return 2;
}

void func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41970 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41970)
	{
		if (Global_41976[iVar0 /*4*/] == *uParam0)
		{
			Global_41976[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_36(int iParam0)
{
	if (Global_42009 == 15)
	{
		return 0;
	}
	if (func_86(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_37()
{
	if (unk_0x591190E69BE43117(iLocal_85, Local_90, fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
	{
		unk_0x366E7F593105797F(0, 46, 1);
	}
	if (iLocal_120 > 0)
	{
		if (func_38(8) == func_47())
		{
			iLocal_120 = 0;
			sLocal_101 = "PLAY_GOLF";
		}
	}
}

int func_38(int iParam0)
{
	return Global_112293.f_24902[iParam0 /*4*/];
}

int func_39(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_40(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xCAD1755E530A6012(unk_0x638BDC79E655C1C2()))
	{
		return 0;
	}
	if (func_55(0))
	{
		return 0;
	}
	if (unk_0x2CA4B93E310C1860())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42737[iVar0 /*32*/] == 1 && Global_42737[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42737[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42737[iVar0 /*32*/].f_5 = 1;
			Global_42737[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42737[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42737[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42737[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_41(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_40(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42737[iVar0 /*32*/])
		{
			Global_42737[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_42(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x38CD3C04C877C35F(iParam1);
	unk_0x4A5DC2FF6E0B609F(0, 1, 1, -1);
}

void func_43(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x636F1F53CC61D2C9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xF471787D45ADC2C1())
	{
		if (!*iParam0 == -1)
		{
			func_41(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42737[iVar0 /*32*/])
		{
			Global_42737[iVar0 /*32*/] = 1;
			Global_42737[iVar0 /*32*/].f_1 = Global_42938;
			Global_42938++;
			Global_42737[iVar0 /*32*/].f_4 = 0;
			Global_42737[iVar0 /*32*/].f_29 = 0;
			Global_42737[iVar0 /*32*/].f_5 = 0;
			Global_42737[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42737[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42737[iVar0 /*32*/].f_6 = iParam3;
			Global_42737[iVar0 /*32*/].f_31 = unk_0x62D18D65FE22FF39();
			Global_42737[iVar0 /*32*/].f_7 = 0;
			Global_42737[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xAB6A270F84A8781E(sParam4))
			{
				Global_42737[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42737[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42737[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42737[iVar0 /*32*/].f_12 = 0;
				Global_42737[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_42737[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_44(var uParam0)
{
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		uParam0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (!unk_0x397C98A5552886EB(uParam0) && unk_0x3B89994312445DE5(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_45(char* sParam0, int iParam1, int iParam2)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x38CD3C04C877C35F(iParam1);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam2);
}

int func_46(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xD885BEFA31A18D47(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xD885BEFA31A18D47(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xD885BEFA31A18D47(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_47()
{
	func_48();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_48()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_51(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_50(unk_0x7D2B9E6A64637269());
			if (func_49(iVar0) && (!func_76(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_49(Global_112293.f_2361.f_539.f_4321))
				{
					Global_112293.f_2361.f_539.f_4322 = Global_112293.f_2361.f_539.f_4321;
				}
				Global_112293.f_2361.f_539.f_4323 = iVar0;
				Global_112293.f_2361.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112293.f_2361.f_539.f_4321 != 145)
			{
				Global_112293.f_2361.f_539.f_4323 = Global_112293.f_2361.f_539.f_4321;
			}
			return;
		}
	}
	Global_112293.f_2361.f_539.f_4321 = 145;
}

bool func_49(int iParam0)
{
	return iParam0 < 3;
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_51(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_51(int iParam0)
{
	if (func_49(iParam0))
	{
		return func_52(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_52(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_53(char* sParam0, int iParam1, int iParam2)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x38CD3C04C877C35F(iParam1);
	unk_0x38CD3C04C877C35F(iParam2);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, -1);
}

var func_54()
{
	return Global_74428;
}

int func_55(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19798.f_1 > 3)
		{
			if (unk_0x234B68AC2E35ED5A(Global_7668, 14))
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
	if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19798.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_56(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1379108.f_203[iParam1];
			}
			break;
	}
	return unk_0x234B68AC2E35ED5A(Global_1379108.f_1048, iParam0);
}

bool func_57()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

int func_58()
{
	if (unk_0x636F1F53CC61D2C9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_59(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22531.f_4 && Global_22531.f_104 == 4);
	}
	return Global_22531.f_4;
}

void func_60(var uParam0, int iParam1)
{
	func_61(uParam0, iParam1);
}

void func_61(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_62()
{
	if (func_76(6) || func_76(7))
	{
		return func_75(68);
	}
	return 1;
}

bool func_63()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		return ((((bVar1 && unk_0x5C6675393464A814(0, 69)) || (bVar1 && unk_0x5C6675393464A814(0, 70))) || (bVar1 && unk_0x5C6675393464A814(0, 68))) || unk_0xAE07F5C5D7B878C1(unk_0x1146A9AE09CE2B14()));
	}
	return (((((bVar1 && unk_0x5C6675393464A814(0, 24)) || (bVar1 && unk_0x5C6675393464A814(0, 25))) || (bVar1 && unk_0x5C6675393464A814(0, 47))) || unk_0x0EF09B31D2D655FC(unk_0x7D2B9E6A64637269())) || unk_0xAE07F5C5D7B878C1(unk_0x1146A9AE09CE2B14()));
}

int func_64(int iParam0)
{
	int iVar0;
	
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				iVar0 = func_47();
				if (!func_49(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14()) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x195733224245A760(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0)) || func_71()) || Global_111340) || Global_31348) || func_70()) || func_56(8, -1)) || func_69()) || func_68()) || func_67()) || func_58()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1) || func_71()) || Global_31348) || func_70()) || func_56(8, -1)) || func_67()) || func_69()) || func_68()) || func_58()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14()) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x195733224245A760(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0)) || func_71()) || Global_111340) || Global_31348) || func_70()) || func_56(8, -1)) || func_67()) || func_69()) || func_68()) || func_58()) || Global_112293.f_7686.f_919[iVar0] == 5) || Global_42556 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0)) || func_71()) || Global_111340) || Global_31348) || func_70()) || func_56(8, -1)) || func_69()) || func_68()) || func_58()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_71() || unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0) || func_56(8, -1)) || func_58()) || func_66()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_56(8, -1) || func_69()) || func_68()) || func_66()) || func_65())
						{
							return 0;
						}
						if ((unk_0xF471787D45ADC2C1() && unk_0xC50751593572DDAE() != 3) && unk_0xE544790FBAA57D4F() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
						{
							if ((((((((((((((unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0) || unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || func_71()) || Global_31348) || func_70()) || func_56(8, -1)) || func_68()) || func_67()) || func_58()) || Global_112293.f_7686.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0) || !unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14())) || !unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14())) || !unk_0xE0A6F16F546C8274()) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || func_71()) || func_68()) || Global_111340) || Global_31348) || func_70()) || Global_43182) || func_56(8, -1)) || func_67()) || func_66()) || func_58()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0) || !unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14())) || !unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14())) || !unk_0xE0A6F16F546C8274()) || unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0)) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1)) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x32FBDF1C2B7942F9(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || func_71()) || Global_111340) || Global_31348) || func_70()) || func_56(8, -1)) || func_67()) || func_66()) || func_69()) || func_68()) || func_58())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_65()
{
	return Global_99409.f_1;
}

int func_66()
{
	if (Global_96292 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_90158[Global_96292 /*34*/].f_15, 13);
	}
	return 0;
}

int func_67()
{
	if (Global_77508)
	{
		return 1;
	}
	else if (Global_62092 && !Global_62098)
	{
		return 1;
	}
	return 0;
}

bool func_68()
{
	return Global_99422.f_364 > 0;
}

bool func_69()
{
	return Global_99422.f_363 > 0;
}

var func_70()
{
	return Global_1312902;
}

int func_71()
{
	if (!unk_0x02BFF15CAA701972())
	{
		return Global_96848.f_44 == 1;
	}
	return 0;
}

int func_72()
{
	if (unk_0x636F1F53CC61D2C9(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_73()
{
	return Global_95202;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_76(6) || func_76(7))
			{
				return 1;
			}
			else
			{
				return func_74(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_86(5))
			{
				if (func_64(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x575B7C28D81C0B4D(Global_31724[iVar0 /*23*/].f_19);
}

bool func_76(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_77(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_78()
{
}

int func_79()
{
	return 1;
}

void func_80()
{
}

void func_81(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_82(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0x234B68AC2E35ED5A(Global_31724[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x234B68AC2E35ED5A(Global_31724[iVar0 /*23*/].f_11, 0))
	{
		unk_0x191DDA30577F440A(&(Global_31724[iVar0 /*23*/].f_11), 18);
		if (Global_31721 == 1)
		{
			Global_31722 = 1;
		}
		Global_31721 = 1;
	}
	if (bParam1)
	{
		unk_0x191DDA30577F440A(&(Global_31724[iVar0 /*23*/].f_11), 0);
		unk_0x191DDA30577F440A(&(Global_31724[iVar0 /*23*/].f_11), 15);
		unk_0x191DDA30577F440A(&(Global_31724[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_31724[iVar0 /*23*/].f_11), 0);
		unk_0xC664C0067EEAB8D1(&(Global_31724[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x234B68AC2E35ED5A(Global_31724[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x575B7C28D81C0B4D(Global_31724[iVar0 /*23*/].f_19))
		{
			unk_0xAE9FE38DB6527FDA(1);
			unk_0x1AD5BCFEC31BB8D9(&(Global_31724[iVar0 /*23*/].f_19));
			unk_0xAE9FE38DB6527FDA(0);
		}
	}
}

int func_83()
{
	if (unk_0x3640D836D145B814())
	{
		if (unk_0xC1D06696CC3E719B() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_84()
{
	if (Global_96292 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_90158[Global_96292 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_85(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0x234B68AC2E35ED5A(Global_112293.f_9083.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_86(int iParam0)
{
	return func_87(iParam0, Global_42009);
}

int func_87(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_88(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_89()
{
	StringCopy(&Local_53, "golf", 64);
	iLocal_99 = 2;
	fLocal_117 = 7f;
	func_77(&uLocal_94, 1);
	if (func_76(6) || func_76(7))
	{
		iLocal_103 = 0;
	}
	if (func_38(8) == func_47())
	{
		iLocal_120 = 0;
		sLocal_101 = "PLAY_GOLF";
	}
	else
	{
		iLocal_120 = func_91(unk_0x419E13582192CFEA(func_73()));
		sLocal_101 = "PAY_PLAY_GOLF";
	}
	iLocal_105 = 68;
	fLocal_102 = (SYSTEM::TO_FLOAT(func_90(iLocal_105)) + 5f);
	iLocal_97 = 41500;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_91(bool bParam0)
{
	if (bParam0)
	{
		return 200;
	}
	return 100;
}

void func_92(var uParam0, int iParam1)
{
	func_93(uParam0, iParam1);
}

void func_93(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_94(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_82(iLocal_105, 0, 0);
		}
	}
	func_41(&iLocal_96);
	if (func_88(uLocal_94, 2048))
	{
		if (func_97(sLocal_101, iLocal_120))
		{
			func_92(&uLocal_94, 2048);
			unk_0x66AE54CE92457FEE(0);
		}
	}
	if (func_88(uLocal_94, 2))
	{
		func_4();
		func_92(&uLocal_94, 2);
		func_6(&iLocal_98);
	}
	iLocal_98 = -1;
	func_95();
	unk_0x4BFE89D21F9885DC();
}

void func_95()
{
	func_92(&uLocal_94, 4);
	func_96();
	if (unk_0x4BE697D014536271(iLocal_52))
	{
		unk_0x0571333E2C22FC64(iLocal_52, 3);
	}
	if (!unk_0x4030103C8B148AFC(&cLocal_69))
	{
		if (unk_0xA3A3E3B836DB6D5B(&cLocal_69) != 0)
		{
			unk_0xFC3890D22570A26E(&cLocal_69);
		}
	}
}

void func_96()
{
}

bool func_97(char* sParam0, int iParam1)
{
	unk_0x4A4799828818A508(sParam0);
	unk_0x38CD3C04C877C35F(uParam1);
	return unk_0x0222F263F70347A8(0);
}

