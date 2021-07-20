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
	int iLocal_19[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	struct<6> Local_84[165];
	struct<6> Local_1075[165];
	struct<8> Local_2066[19];
	int iLocal_2219 = 0;
#endregion

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
	unk_0x5B2BDC877F7E8802();
	if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) == 0)
	{
		func_55();
	}
	func_46();
	Global_22191 = 0;
	Global_112293.f_14049[Global_19798 /*20*/].f_18 = 0;
	Global_19983 = 0;
	func_45(Global_19779, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_43();
	func_42();
	if (Global_19798.f_1 > 3)
	{
		Global_19798.f_1 = 7;
	}
	iLocal_65 = unk_0xDFB7BFA6482FEE1E();
	Global_19802 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_64 == 0)
		{
			iLocal_66 = unk_0xDFB7BFA6482FEE1E();
			if ((iLocal_66 - iLocal_65) > 500)
			{
				iLocal_64 = 1;
			}
		}
		if (Global_19798.f_1 != 9)
		{
			switch (Global_19798.f_1)
			{
				case 7:
					if (Global_22191 == 0)
					{
						if (Global_2554341 == 0)
						{
							func_37();
							func_33();
						}
					}
					break;
				
				case 8:
					if (Global_22191 == 1)
					{
						func_5();
						func_37();
					}
					break;
				
				default:
					break;
			}
			if (Global_22191 == 0)
			{
				if (func_4())
				{
					func_55();
				}
			}
			else if (func_3(2, Global_19766, 0) || unk_0x234B68AC2E35ED5A(Global_7669, 12))
			{
				if (unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iLocal_58 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					unk_0xC664C0067EEAB8D1(&Global_7669, 12);
					func_2();
					Global_19776 = 1;
					Global_22191 = 0;
					if (Global_19798.f_1 > 3)
					{
						Global_19798.f_1 = 7;
					}
					if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) == 0)
					{
						func_55();
					}
					func_45(Global_19779, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_43();
					func_42();
					if (Global_112293.f_14139[iLocal_58 /*104*/].f_29 > 0)
					{
						if (Global_112293.f_14139[iLocal_58 /*104*/].f_31 == 1)
						{
							Global_112293.f_14139[iLocal_58 /*104*/].f_29 = 4;
							Global_112293.f_14139[iLocal_58 /*104*/].f_24 = 1;
						}
						else
						{
							Global_112293.f_14139[iLocal_58 /*104*/].f_29 = 4;
							Global_112293.f_14139[iLocal_58 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) == 0)
		{
			func_55();
		}
		if (func_1())
		{
			func_55();
		}
	}
}

int func_1()
{
	if (((Global_19798.f_1 == 1 || Global_19798.f_1 == 3) || Global_19798.f_1 == 0) || Global_19742 == 1)
	{
		Global_19785 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x9B0169E27978C1A2(-1, "Menu_Back", &Global_19787, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x86AF801D34E482FF(iParam0, uParam1) || (iParam2 == 1 && unk_0x96DF114B59E81B9C(iParam0, iParam1)))
	{
		if (unk_0x3640D836D145B814())
		{
			if (unk_0x4793CFF25F0D14B5() == 0 || (unk_0xFEABE4F1525A0A08() && unk_0x0D901EFDFD7EF9D5(2)))
			{
				return 0;
			}
		}
		if (unk_0xA300BD5F71A8C704() || unk_0xD76BEAE1A33E3251())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	if (Global_8274 == 1 || Global_19798.f_1 < 7)
	{
		Global_19785 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	func_6();
}

void func_6()
{
	if (Global_112293.f_14139[iLocal_58 /*104*/].f_24 == 1)
	{
		if (Global_19776 == 0)
		{
			if (unk_0x86AF801D34E482FF(2, Global_19769))
			{
				func_2();
				Global_19776 = 1;
				func_26();
				if (Global_112293.f_14139[iLocal_58 /*104*/].f_27 == 1)
				{
					Global_112293.f_14139[iLocal_58 /*104*/].f_99[0] = 0;
					Global_112293.f_14139[iLocal_58 /*104*/].f_99[1] = 0;
					Global_112293.f_14139[iLocal_58 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_112293.f_14139[iLocal_58 /*104*/].f_99[Global_19798] = 0;
				}
				if (func_25(iLocal_58))
				{
				}
				else
				{
					Global_112293.f_14139[iLocal_58 /*104*/].f_24 = 0;
					Global_112293.f_14139[iLocal_58 /*104*/].f_28 = 0;
				}
				unk_0xAE77D1668DA754A8(Global_112293.f_14139[iLocal_58 /*104*/].f_16);
				func_45(Global_19779, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				if (iLocal_56 > 0)
				{
					iLocal_56 = (iLocal_56 - 1);
				}
				func_42();
				if (Global_19798.f_1 > 3)
				{
					Global_19798.f_1 = 7;
					Global_22191 = 0;
				}
			}
		}
	}
	else if (Global_19776 == 0)
	{
		if (unk_0x5C6675393464A814(2, Global_19770))
		{
			if (iLocal_60 == 1)
			{
				if (Global_19798.f_1 > 3)
				{
					StringCopy(&Global_74412, unk_0x3A2A8DAFDBEC4CFE(&Global_22166), 64);
					Global_74541 = 7;
					unk_0x191DDA30577F440A(&Global_7669, 10);
					Global_19798.f_1 = 6;
				}
				func_55();
			}
		}
	}
	if (Global_112293.f_14139[iLocal_58 /*104*/].f_31 == 1)
	{
		if (Global_19776 == 0)
		{
			if (func_3(2, Global_19770, 0))
			{
				func_22();
				Global_19776 = 1;
				Global_112293.f_14139[iLocal_58 /*104*/].f_29 = 2;
				Global_112293.f_14139[iLocal_58 /*104*/].f_24 = 1;
				Global_112293.f_14139[iLocal_58 /*104*/].f_31 = 0;
				unk_0xC664C0067EEAB8D1(&Global_7668, 17);
				Global_22191 = 0;
				if (Global_19798.f_1 > 3)
				{
					Global_19798.f_1 = 7;
				}
				func_45(Global_19779, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				func_42();
			}
		}
	}
	if (Global_19776 == 0 && iLocal_64 == 1)
	{
		if (func_3(2, Global_19767, 0))
		{
			Global_19776 = 1;
			if (Global_112293.f_14139[iLocal_58 /*104*/].f_29 > 0)
			{
				func_22();
				Global_112293.f_14139[iLocal_58 /*104*/].f_29 = 3;
				Global_112293.f_14139[iLocal_58 /*104*/].f_24 = 1;
				Global_22191 = 0;
				if (Global_19798.f_1 > 3)
				{
					Global_19798.f_1 = 7;
				}
				func_45(Global_19779, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				func_42();
			}
			else if (Global_112293.f_14139[iLocal_58 /*104*/].f_30 == 1)
			{
				func_22();
				Global_6983 = 144;
				if (Global_19798.f_1 > 3)
				{
					Global_19798.f_1 = 10;
					if (func_21() == 0)
					{
						func_19();
					}
				}
				func_18("appContacts");
				Global_19796 = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				unk_0xFC3890D22570A26E("appContacts");
				Global_6983 = Global_112293.f_14139[iLocal_58 /*104*/].f_17;
				if (func_17(Global_6983, Global_19798) == 0)
				{
					func_16(Global_19779, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6983 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_16(Global_19779, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_7), "CELL_211", &(Global_1878[Global_6983 /*29*/].f_3), 0);
				}
				func_7();
				func_55();
			}
		}
	}
}

void func_7()
{
	char cVar0[24];
	
	if (Global_19781 == 1)
	{
		return;
	}
	if (Global_19798.f_1 < 4)
	{
		return;
	}
	while (!unk_0xDAE4BC89A198A6AF(Global_19779))
	{
		if (Global_77248)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_19798.f_1)
	{
		case 6:
			func_45(Global_19779, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_14(Global_8273);
			if (Global_8273 == 1)
			{
				func_45(Global_19779, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19802), -1082130432, -1082130432, -1082130432);
				Global_19778 = Global_19802;
			}
			else
			{
				func_45(Global_19779, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19803), -1082130432, -1082130432, -1082130432);
				Global_19778 = Global_19803;
			}
			if (Global_19786)
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_16(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_16(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19986 == 0)
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			}
			else if (Global_77248)
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			}
			else
			{
				if (Global_19985 == 1)
				{
					if (Global_19786)
					{
						func_16(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19786)
				{
					func_16(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_16(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x191DDA30577F440A(&Global_7668, 17);
			}
			if (Global_77248)
			{
				func_12();
				unk_0xC664C0067EEAB8D1(&Global_7670, 9);
				func_45(Global_19779, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19802), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_45(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_16(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_16(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			if (unk_0x234B68AC2E35ED5A(Global_7668, 20))
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19786)
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19741)
				{
					func_16(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19797 == 1)
			{
				func_11();
				func_45(Global_19779, "SET_THEME", SYSTEM::TO_FLOAT(Global_112293.f_14049[Global_19798 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21138)
				{
					unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
					unk_0x9E3D03981E2E9AD9(4);
					unk_0x9E3D03981E2E9AD9(0);
					unk_0x9E3D03981E2E9AD9(2);
					unk_0x35CA0C119E6A2A27("CELL_CONDFON");
					unk_0xA91D83F2CC1345A6(&Global_21140);
					unk_0xD4B2C39F7AD5A6A6();
					func_10("CELL_300");
					func_10("CELL_217");
					func_10("CELL_217");
					unk_0x392841D58D2EED1D();
				}
				else if (func_17(Global_6983, Global_19798) == 0)
				{
					func_16(Global_19779, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_6983 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_16(Global_19779, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_7), "CELL_217", &(Global_1878[Global_6983 /*29*/].f_3), 0);
				}
				func_45(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21125 == 4 || Global_21125 == 3)
			{
				func_45(Global_19779, "SET_THEME", SYSTEM::TO_FLOAT(Global_112293.f_14049[Global_19798 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_11();
				if (Global_21138)
				{
					unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
					unk_0x9E3D03981E2E9AD9(4);
					unk_0x9E3D03981E2E9AD9(0);
					unk_0x9E3D03981E2E9AD9(2);
					unk_0x35CA0C119E6A2A27("CELL_CONDFON");
					unk_0xA91D83F2CC1345A6(&Global_21140);
					unk_0xD4B2C39F7AD5A6A6();
					func_10("CELL_300");
					func_10("CELL_219");
					func_10("CELL_219");
					unk_0x392841D58D2EED1D();
				}
				else
				{
					if (Global_21383)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_17(Global_6983, Global_19798) == 0)
					{
						func_45(Global_19779, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_16(Global_19779, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6983 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_45(Global_19779, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_16(Global_19779, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_7), &cVar0, &(Global_1878[Global_6983 /*29*/].f_3), 0);
					}
				}
				func_45(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()
{
	if (unk_0xDAE4BC89A198A6AF(Global_19779))
	{
		func_9();
		if (Global_19797 == 1)
		{
			if (Global_19786)
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21172)
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_7668, 20))
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19786)
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC664C0067EEAB8D1(&Global_7668, 17);
		}
		else
		{
			func_16(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_16(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			if (unk_0x234B68AC2E35ED5A(Global_7668, 20))
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19786)
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19741)
				{
					func_16(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9()
{
	if (Global_77248)
	{
		func_16(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xC664C0067EEAB8D1(&Global_7668, 17);
	}
}

void func_10(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_11()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (Global_19798 == 0)
		{
			switch (Global_112293.f_14049[Global_19798 /*20*/].f_6)
			{
				case 1:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 0);
					break;
				
				case 2:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 1);
					break;
				
				case 3:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 2);
					break;
				
				case 4:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 3);
					break;
				
				case 5:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 4);
					break;
				
				case 6:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 5);
					break;
				
				case 7:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19798 == 1)
		{
			switch (Global_112293.f_14049[Global_19798 /*20*/].f_6)
			{
				case 1:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 6);
					break;
				
				case 2:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 0);
					break;
				
				case 3:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 1);
					break;
				
				case 4:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 2);
					break;
				
				case 5:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 3);
					break;
				
				case 6:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 4);
					break;
				
				case 7:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19798 == 2)
		{
			switch (Global_112293.f_14049[Global_19798 /*20*/].f_6)
			{
				case 1:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 5);
					break;
				
				case 2:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 6);
					break;
				
				case 3:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 1);
					break;
				
				case 4:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 0);
					break;
				
				case 5:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 2);
					break;
				
				case 6:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 3);
					break;
				
				case 7:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19798 == 3)
		{
			switch (Global_4272755)
			{
				case 1:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 0);
					break;
				
				case 2:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 1);
					break;
				
				case 3:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 2);
					break;
				
				case 4:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 3);
					break;
				
				case 5:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 4);
					break;
				
				case 6:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 5);
					break;
				
				case 7:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_12()
{
	if (Global_77248)
	{
		if (func_13() == 0)
		{
			return;
		}
		func_16(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x191DDA30577F440A(&Global_7668, 17);
	}
}

int func_13()
{
	return 0;
}

void func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_22193 = 0;
	Global_8273 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8237[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_15(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7675[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7675[iVar1 /*15*/].f_4)
					{
						if (Global_8237[iVar0] == 0)
						{
							Global_8201[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 3))
								{
									iVar2 = 42;
									Global_19988 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19988 = 0;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_10(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar2);
								unk_0x392841D58D2EED1D();
							}
							if (Global_2463492)
							{
								if (iVar1 == 14)
								{
									func_16(Global_19779, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7675[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8237[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7675[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7675[iVar1 /*15*/].f_4)
					{
						if (Global_8237[iVar0] == 0)
						{
							Global_8201[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_112293.f_14139[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_112293.f_14139[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_112293.f_14139[iVar3 /*104*/].f_99[Global_19798] == 1)
											{
												Global_22193++;
											}
										}
									}
									iVar3++;
								}
								func_16(Global_19779, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7675[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22193), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_77248)
								{
									iVar4 = 0;
									iVar4 = Global_4271213;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4271214[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4271214[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4271214[iVar5 /*104*/].f_99[Global_19798] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_16(Global_19779, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7675[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19798)
									{
										case 0:
											iVar6 = Global_43193;
											break;
										
										case 1:
											iVar6 = Global_43194;
											break;
										
										case 2:
											iVar6 = Global_43195;
											break;
										
										default:
											break;
									}
									func_16(Global_19779, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7675[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_16(Global_19779, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7675[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_10(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(Global_7674);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_10(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar7);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 3))
								{
									iVar8 = 42;
									Global_19988 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19988 = 0;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_10(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar8);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 8)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_10(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(42);
								unk_0x392841D58D2EED1D();
							}
							else if ((iVar1 == 23 && unk_0xDA654EB115F9FF7D(&(Global_7675[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x234B68AC2E35ED5A(Global_7669, 6))
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_10(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(42);
								unk_0x392841D58D2EED1D();
							}
							else if (Global_7675[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627190.f_1;
								func_16(Global_19779, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7675[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_16(Global_19779, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7675[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8237[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_15(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_16(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	unk_0x9E3D03981E2E9AD9(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(SYSTEM::ROUND(fParam6));
	}
	if (!unk_0xAB6A270F84A8781E(sParam7))
	{
		func_10(sParam7);
	}
	if (!unk_0xAB6A270F84A8781E(sParam8))
	{
		func_10(sParam8);
	}
	if (!unk_0xAB6A270F84A8781E(sParam9))
	{
		func_10(sParam9);
	}
	if (!unk_0xAB6A270F84A8781E(sParam10))
	{
		func_10(sParam10);
	}
	if (!unk_0xAB6A270F84A8781E(sParam11))
	{
		func_10(sParam11);
	}
	unk_0x392841D58D2EED1D();
}

int func_17(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_24[iParam1];
}

void func_18(char* sParam0)
{
	unk_0xA7988ABD4140D469(sParam0);
	while (!unk_0x79CDCC8ABB331B8C(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (func_20() && unk_0xFBDBB3A9CC11C141(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_77248)
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && iVar1 == 0)
		{
			iVar2 = unk_0x228A4ED518554B3F(unk_0x7D2B9E6A64637269(), 0);
			if (Global_77248)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xB22628F56B3EAA2E(unk_0x7D2B9E6A64637269()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xB22628F56B3EAA2E(unk_0x7D2B9E6A64637269()))
			{
				iVar0 = 1;
			}
			if (!Global_19741)
			{
				if (Global_6983 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
						{
							if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
							{
							}
							else
							{
								if (Global_77248)
								{
									unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 244, 0);
									unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 243, 0);
									unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 242, 0);
								}
								unk_0x191DDA30577F440A(&Global_7668, 11);
								unk_0x1D87FC6C9DC6D4B1(unk_0x7D2B9E6A64637269(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_20()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x264EE27FDED1DCA1();
	iVar1 = unk_0x5F95E51ABC3FC59A(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
		{
			if (Global_19741 == 0)
			{
				if (Global_6983 != 128)
				{
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						if (Global_21125 != 2)
						{
						}
					}
				}
			}
		}
		if (func_15(14))
		{
			return 0;
		}
		if (unk_0xFBDBB3A9CC11C141(unk_0x7D2B9E6A64637269(), 0))
		{
			return 0;
		}
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (!unk_0xEF482630D7014464())
			{
				if (unk_0x0297E633EADA2182(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x32FBDF1C2B7942F9(unk_0x7D2B9E6A64637269()) || unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269())) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || (unk_0x14EE58C04CEAE6C4(unk_0x7D2B9E6A64637269()) && !(unk_0x234B68AC2E35ED5A(Global_4456448.f_37, 17) && (unk_0xE45310E861787FC2() || Global_1660795))))
		{
			return 0;
		}
		if (Global_111341)
		{
			return 0;
		}
	}
	if (Global_77248)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x264EE27FDED1DCA1();
	iVar1 = unk_0x5F95E51ABC3FC59A(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xEF482630D7014464()))
	{
		iVar2 = 1;
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				uVar3 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
				if ((((((((unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(uVar3)) || unk_0x2F040F7AF0534E16(unk_0x6471F4759775FCA4(uVar3))) || unk_0x3DA0AF866B552ECB(unk_0x6471F4759775FCA4(uVar3))) || unk_0x6471F4759775FCA4(uVar3) == joaat("seashark")) || unk_0x6471F4759775FCA4(uVar3) == joaat("seashark2")) || unk_0x6471F4759775FCA4(uVar3) == joaat("rhino")) || unk_0x6471F4759775FCA4(uVar3) == joaat("submersible")) || unk_0x6471F4759775FCA4(uVar3) == joaat("submersible2")) || unk_0x6471F4759775FCA4(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4272757 || iVar2 == 1)
	{
		if (unk_0x636F1F53CC61D2C9(joaat("apptrackify")) > 0 || Global_112293.f_14049.f_89)
		{
			if (unk_0x636F1F53CC61D2C9(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_22()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x9B0169E27978C1A2(-1, "Menu_Accept", &Global_19787, 1);
		func_23();
	}
}

void func_23()
{
	if (func_24())
	{
		unk_0x63E7B2FCB3D2ECBB(5);
	}
}

int func_24()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77248)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x264EE27FDED1DCA1();
	iVar1 = unk_0x5F95E51ABC3FC59A(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4272757 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_25(int iParam0)
{
	if ((Global_112293.f_14139[iParam0 /*104*/].f_99[0] == 1 || Global_112293.f_14139[iParam0 /*104*/].f_99[1] == 1) || Global_112293.f_14139[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	if (func_15(14))
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[0 /*29*/])
			{
				Global_19798 = 0;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[1 /*29*/])
			{
				Global_19798 = 1;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[2 /*29*/])
			{
				Global_19798 = 2;
			}
			else
			{
				Global_19798 = 0;
			}
		}
	}
	else
	{
		Global_19798 = func_27();
		if (Global_19798 == 145)
		{
			Global_19798 = 3;
		}
		if (Global_77248)
		{
			Global_19798 = 3;
		}
		if (Global_19798 > 3)
		{
			Global_19798 = 3;
		}
	}
}

var func_27()
{
	func_28();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_28()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_31(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_30(unk_0x7D2B9E6A64637269());
			if (func_29(iVar0) && (!func_15(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_29(Global_112293.f_2361.f_539.f_4321))
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

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)
{
	if (func_29(iParam0))
	{
		return func_32(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_32(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_33()
{
	struct<16> Var0;
	char* sVar16;
	int iVar17;
	
	if (Global_19776 == 0)
	{
		if ((func_3(2, Global_19767, 0) || Global_112293.f_14049[Global_19798 /*20*/].f_17 == 1) || Global_22185 == 1)
		{
			if (Global_112293.f_14049[Global_19798 /*20*/].f_17 == 0 && Global_22185 == 0)
			{
				func_22();
			}
			Global_19776 = 1;
			iLocal_64 = 0;
			iLocal_58 = iLocal_19[iLocal_56];
			if (Global_112293.f_14139[iLocal_58 /*104*/].f_24 != 0)
			{
				if (Global_19798.f_1 > 3)
				{
					func_16(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xC664C0067EEAB8D1(&Global_7668, 17);
					Global_19798.f_1 = 8;
				}
				if (Global_112293.f_14049[Global_19798 /*20*/].f_17 == 1 || Global_22185 == 1)
				{
					iLocal_58 = iLocal_19[0];
					iLocal_57 = 0;
					if (Global_112293.f_14049[Global_19798 /*20*/].f_17 == 1)
					{
					}
					Global_22185 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_62 = 0;
					unk_0x704F8697BB515627(Global_19779, "GET_CURRENT_SELECTION");
					uLocal_67 = unk_0x4E45F52E0261CADA();
					while (!unk_0xCCBB1074CAAE000A(uLocal_67) && iLocal_62 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_62 = 1;
						}
					}
					if (iLocal_62 == 1)
					{
						iLocal_63 = 0;
					}
					else
					{
						iLocal_63 = unk_0x399B6D3F817B71F1(uLocal_67);
					}
					if (iLocal_63 < 0)
					{
						iLocal_63 = 0;
					}
					iLocal_58 = iLocal_19[iLocal_63];
					iLocal_57 = iLocal_63;
				}
				Global_112293.f_14139[iLocal_58 /*104*/].f_28 = 1;
				iLocal_60 = 0;
				StringCopy(&Global_22166, "NO_HYPERLINK", 64);
				Var0 = { Global_112293.f_14139[iLocal_58 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x49875FC4498CDA9A(&Var0))
				{
					Global_22166 = { Var0 };
					iLocal_60 = 1;
					if (Global_19786)
					{
						func_16(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x191DDA30577F440A(&Global_7668, 17);
					Global_112293.f_14139[iLocal_58 /*104*/].f_26 = 1;
					Global_112293.f_14139[iLocal_58 /*104*/].f_24 = 2;
				}
				if (Global_112293.f_14139[iLocal_58 /*104*/].f_26 == 0)
				{
					Global_112293.f_14139[iLocal_58 /*104*/].f_24 = 1;
				}
				func_36();
				unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
				unk_0x9E3D03981E2E9AD9(7);
				unk_0x9E3D03981E2E9AD9(0);
				if (Global_112293.f_14139[iLocal_58 /*104*/].f_17 == 145)
				{
					unk_0x35CA0C119E6A2A27("CELL_2000");
					unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iLocal_58 /*104*/].f_50));
					unk_0xD4B2C39F7AD5A6A6();
				}
				else
				{
					func_10(&(Global_1878[Global_112293.f_14139[iLocal_58 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_112293.f_14139[iLocal_58 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_112293.f_14139[iLocal_58 /*104*/]));
						break;
					
					case 1:
						unk_0x35CA0C119E6A2A27(&(Global_112293.f_14139[iLocal_58 /*104*/]));
						unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iLocal_58 /*104*/].f_33));
						if (Global_112293.f_14139[iLocal_58 /*104*/].f_66 == 1 && !unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iLocal_58 /*104*/].f_67), "NULL"))
						{
							unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iLocal_58 /*104*/].f_67));
						}
						if ((Global_112293.f_14139[iLocal_58 /*104*/].f_66 == 2 && !unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iLocal_58 /*104*/].f_67), "NULL")) && !unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iLocal_58 /*104*/].f_83), "NULL"))
						{
							if (unk_0x49875FC4498CDA9A(&(Global_112293.f_14139[iLocal_58 /*104*/].f_67)))
							{
								unk_0x1896EC0B030A48A2(&(Global_112293.f_14139[iLocal_58 /*104*/].f_67));
							}
							else
							{
								unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iLocal_58 /*104*/].f_67));
							}
							if (unk_0x49875FC4498CDA9A(&(Global_112293.f_14139[iLocal_58 /*104*/].f_83)))
							{
								unk_0x1896EC0B030A48A2(&(Global_112293.f_14139[iLocal_58 /*104*/].f_83));
							}
							else
							{
								unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iLocal_58 /*104*/].f_83));
							}
						}
						unk_0xD4B2C39F7AD5A6A6();
						break;
					
					case 2:
						unk_0x35CA0C119E6A2A27(&(Global_112293.f_14139[iLocal_58 /*104*/]));
						unk_0x38CD3C04C877C35F(Global_112293.f_14139[iLocal_58 /*104*/].f_49);
						unk_0xD4B2C39F7AD5A6A6();
						break;
					
					case 3:
						unk_0x35CA0C119E6A2A27(&(Global_112293.f_14139[iLocal_58 /*104*/]));
						unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iLocal_58 /*104*/].f_33));
						unk_0x38CD3C04C877C35F(Global_112293.f_14139[iLocal_58 /*104*/].f_49);
						if (Global_112293.f_14139[iLocal_58 /*104*/].f_66 == 1 && !unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iLocal_58 /*104*/].f_67), "NULL"))
						{
							unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iLocal_58 /*104*/].f_67));
						}
						if ((Global_112293.f_14139[iLocal_58 /*104*/].f_66 == 2 && !unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iLocal_58 /*104*/].f_67), "NULL")) && !unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iLocal_58 /*104*/].f_83), "NULL"))
						{
							if (unk_0x49875FC4498CDA9A(&(Global_112293.f_14139[iLocal_58 /*104*/].f_67)))
							{
								unk_0x1896EC0B030A48A2(&(Global_112293.f_14139[iLocal_58 /*104*/].f_67));
							}
							else
							{
								unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iLocal_58 /*104*/].f_67));
							}
							if (unk_0x49875FC4498CDA9A(&(Global_112293.f_14139[iLocal_58 /*104*/].f_83)))
							{
								unk_0x1896EC0B030A48A2(&(Global_112293.f_14139[iLocal_58 /*104*/].f_83));
							}
							else
							{
								unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iLocal_58 /*104*/].f_83));
							}
						}
						unk_0xD4B2C39F7AD5A6A6();
						break;
					
					case 4:
						func_35(iLocal_58);
						break;
					
					case 5:
						func_35(iLocal_58);
						break;
					
					case 6:
						func_35(iLocal_58);
						break;
					
					case 7:
						func_35(iLocal_58);
						break;
					
					case 8:
						func_35(iLocal_58);
						break;
					
					case 9:
						func_35(iLocal_58);
						break;
					
					case 10:
						func_35(iLocal_58);
						break;
					
					case 11:
						func_35(iLocal_58);
						break;
				}
				if (Global_22194[iLocal_58] == 0)
				{
					if (Global_112293.f_14139[iLocal_58 /*104*/].f_17 == 159)
					{
						func_10("CELL_COMIC_P");
					}
					else
					{
						func_10(&(Global_1878[Global_112293.f_14139[iLocal_58 /*104*/].f_17 /*29*/].f_7));
					}
				}
				else
				{
					if (unk_0xEC92E04062037949(Global_22194[iLocal_58]))
					{
						if (unk_0x80B82FD1974E28E0(Global_22194[iLocal_58]))
						{
							sVar16 = unk_0x05FCBB2D6BF4C399(Global_22194[iLocal_58]);
						}
						else
						{
							sVar16 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar16 = "CHAR_DEFAULT";
					}
					unk_0x35CA0C119E6A2A27("CELL_2000");
					unk_0xA91D83F2CC1345A6(sVar16);
					unk_0xD4B2C39F7AD5A6A6();
				}
				unk_0x392841D58D2EED1D();
				Global_22191 = 1;
				func_45(Global_19779, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_34(Global_19779, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				unk_0xAE77D1668DA754A8(Global_112293.f_14139[iLocal_58 /*104*/].f_16);
				if (Global_112293.f_14139[iLocal_58 /*104*/].f_29 > 0)
				{
					if (Global_19786)
					{
						func_16(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_112293.f_14139[iLocal_58 /*104*/].f_30 == 1)
				{
					if (Global_19786)
					{
						func_16(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_16(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_112293.f_14139[iLocal_58 /*104*/].f_29 > 0)
				{
					if (unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iLocal_58 /*104*/]), "CELL_FINV"))
					{
						if (Global_19786)
						{
							func_16(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_16(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_19786)
					{
						func_16(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19786)
				{
					func_16(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_16(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_112293.f_14139[iLocal_58 /*104*/].f_24 == 2)
				{
					if (Global_112293.f_14139[iLocal_58 /*104*/].f_31 == 1)
					{
						iLocal_60 = 0;
						if (Global_19786)
						{
							func_16(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_16(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0x191DDA30577F440A(&Global_7668, 17);
					}
					else if (iLocal_60 == 0)
					{
						func_16(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xC664C0067EEAB8D1(&Global_7668, 17);
					}
				}
				else if (Global_19786)
				{
					func_16(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0x191DDA30577F440A(&Global_7668, 17);
				}
				else
				{
					func_16(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x191DDA30577F440A(&Global_7668, 17);
				}
				Global_112293.f_14049[Global_19798 /*20*/].f_18 = 0;
				Global_112293.f_14049[Global_19798 /*20*/].f_17 = 0;
			}
			else
			{
				iVar17 = 0;
				if (Global_112293.f_14049[Global_19798 /*20*/].f_17 == 1 || Global_22185 == 1)
				{
					if (Global_22185)
					{
					}
					iVar17 = 1;
				}
				Global_112293.f_14049[Global_19798 /*20*/].f_18 = 0;
				Global_112293.f_14049[Global_19798 /*20*/].f_17 = 0;
				if (iVar17 == 1)
				{
					iVar17 = 0;
					Global_19798.f_1 = 3;
				}
			}
		}
		if (Global_2554341 == 0)
		{
			if (Global_77248)
			{
				unk_0x203739B163D4D88E(0, Global_19770);
				if (func_3(2, Global_19770, 0))
				{
					Global_19776 = 1;
					Global_2554341 = 1;
				}
			}
		}
	}
}

void func_34(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	func_10(sParam2);
	if (!unk_0xAB6A270F84A8781E(sParam3))
	{
		func_10(sParam3);
	}
	if (!unk_0xAB6A270F84A8781E(sParam4))
	{
		func_10(sParam4);
	}
	if (!unk_0xAB6A270F84A8781E(sParam5))
	{
		func_10(sParam5);
	}
	if (!unk_0xAB6A270F84A8781E(sParam6))
	{
		func_10(sParam6);
	}
	unk_0x392841D58D2EED1D();
}

void func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_112293.f_14139[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x35CA0C119E6A2A27("CELL_CL01");
			break;
		
		case 2:
			unk_0x35CA0C119E6A2A27("CELL_CL02");
			break;
		
		case 3:
			unk_0x35CA0C119E6A2A27("CELL_CL03");
			break;
		
		case 4:
			unk_0x35CA0C119E6A2A27("CELL_CL04");
			break;
		
		case 5:
			unk_0x35CA0C119E6A2A27("CELL_CL05");
			break;
		
		case 6:
			unk_0x35CA0C119E6A2A27("CELL_CL06");
			break;
		
		case 7:
			unk_0x35CA0C119E6A2A27("CELL_CL07");
			break;
		
		case 8:
			unk_0x35CA0C119E6A2A27("CELL_CL08");
			break;
		
		case 9:
			unk_0x35CA0C119E6A2A27("CELL_CL09");
			break;
	}
	unk_0x1896EC0B030A48A2(&(Global_112293.f_14139[iParam0 /*104*/]));
	while (iVar0 < Global_112293.f_14139[iParam0 /*104*/].f_49)
	{
		switch (Global_112293.f_14139[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0x1896EC0B030A48A2(&(Global_2544210.f_1725[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0x1896EC0B030A48A2(&(Global_1669346[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0x1896EC0B030A48A2(&(Global_1669387[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0x1896EC0B030A48A2(&(Global_1669408[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0x1896EC0B030A48A2(&(Global_1669425[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0x1896EC0B030A48A2(&(Global_1669438[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0x1896EC0B030A48A2(&(Global_1669451[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0x1896EC0B030A48A2(&(Global_1669464[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0xD4B2C39F7AD5A6A6();
}

void func_36()
{
	int iVar0;
	
	if (iLocal_2219)
	{
		unk_0xB5F867E143F78583(&uLocal_68);
	}
	iLocal_2219 = 0;
	if (Global_112293.f_14139[iLocal_58 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 165)
		{
			if (unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iLocal_58 /*104*/]), &(Local_84[iVar0 /*6*/])))
			{
				if (iVar0 < 19)
				{
					MemCopy(&uLocal_68, {Local_2066[iVar0 /*8*/]}, 16);
				}
				else
				{
					MemCopy(&uLocal_68, {Local_1075[iVar0 /*6*/]}, 16);
				}
				iLocal_2219 = 1;
				unk_0xA08F3C300F9E3468(&uLocal_68, 0);
				while (!unk_0xAD9D75DD073BF477(&uLocal_68))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

void func_37()
{
	if (iLocal_61)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_61 = 0;
		}
	}
	if (iLocal_61 == 0)
	{
		if (func_3(2, Global_19774, 0) || unk_0x86AF801D34E482FF(2, 181))
		{
			if (iLocal_56 > 0)
			{
				iLocal_56 = (iLocal_56 - 1);
			}
			func_40();
			iLocal_61 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_19775, 0) || unk_0x86AF801D34E482FF(2, 180))
		{
			iLocal_56++;
			if (iLocal_56 == iLocal_55)
			{
				iLocal_56 = 0;
			}
			func_38();
			iLocal_61 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_38()
{
	func_45(Global_19779, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
	func_39();
}

void func_39()
{
	if (func_24())
	{
		if (Global_19989 == 0)
		{
			unk_0x63E7B2FCB3D2ECBB(2);
		}
		else
		{
			unk_0x63E7B2FCB3D2ECBB(1);
		}
	}
}

void func_40()
{
	func_45(Global_19779, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
	func_41();
}

void func_41()
{
	if (func_24())
	{
		if (Global_19989 == 0)
		{
			unk_0x63E7B2FCB3D2ECBB(1);
		}
		else
		{
			unk_0x63E7B2FCB3D2ECBB(2);
		}
	}
}

void func_42()
{
	if (Global_112293.f_14049[Global_19798 /*20*/].f_17 == 0)
	{
		if (iLocal_57 < 0)
		{
			iLocal_57 = 0;
		}
		func_45(Global_19779, "DISPLAY_VIEW", 6f, SYSTEM::TO_FLOAT(iLocal_57), -1082130432, -1082130432, -1082130432);
		func_34(Global_19779, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_19786)
		{
			if (iLocal_55 > 0)
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_55 > 0)
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_77248)
		{
			func_16(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC664C0067EEAB8D1(&Global_7668, 17);
		}
		else
		{
			func_16(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC664C0067EEAB8D1(&Global_7668, 17);
		}
	}
	else
	{
		iLocal_57 = 0;
	}
}

void func_43()
{
	int iVar0[35];
	int iVar36;
	int iVar37;
	int iVar38;
	
	iLocal_55 = 0;
	func_26();
	iVar36 = 0;
	while (iVar36 < 34)
	{
		if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) == 0)
		{
			func_55();
		}
		iVar37 = 0;
		iVar38 = 34;
		Global_112293.f_14139[iVar38 /*104*/].f_18 = -1;
		Global_112293.f_14139[iVar38 /*104*/].f_18.f_1 = 0;
		Global_112293.f_14139[iVar38 /*104*/].f_18.f_2 = 0;
		Global_112293.f_14139[iVar38 /*104*/].f_18.f_3 = 0;
		Global_112293.f_14139[iVar38 /*104*/].f_18.f_5 = 0;
		while (iVar37 < 35)
		{
			if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) == 0)
			{
				func_55();
			}
			if (iVar0[iVar37] == 0)
			{
				if (Global_112293.f_14139[iVar37 /*104*/].f_24 != 0)
				{
					if (Global_112293.f_14139[iVar37 /*104*/].f_99[Global_19798] == 1)
					{
						if (func_44(Global_112293.f_14139[iVar37 /*104*/].f_18, Global_112293.f_14139[iVar38 /*104*/].f_18))
						{
							iVar38 = iVar37;
							if (Global_112293.f_14139[iVar38 /*104*/].f_28 == 0)
							{
								iLocal_59 = 33;
							}
							else
							{
								iLocal_59 = 34;
							}
						}
					}
				}
			}
			iVar37++;
		}
		iLocal_19[iVar36] = iVar38;
		iVar0[iVar38] = 1;
		if (Global_112293.f_14139[iVar38 /*104*/].f_24 != 0)
		{
			if (Global_112293.f_14139[iVar38 /*104*/].f_99[Global_19798] == 1)
			{
				unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
				unk_0x9E3D03981E2E9AD9(6);
				unk_0x9E3D03981E2E9AD9(iVar36);
				unk_0x9E3D03981E2E9AD9(Global_112293.f_14139[iVar38 /*104*/].f_18.f_2);
				unk_0x9E3D03981E2E9AD9(Global_112293.f_14139[iVar38 /*104*/].f_18.f_1);
				unk_0x9E3D03981E2E9AD9(iLocal_59);
				if (Global_112293.f_14139[iVar38 /*104*/].f_17 == 145)
				{
					unk_0x35CA0C119E6A2A27("CELL_CONDFNH");
					unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iVar38 /*104*/].f_50));
					unk_0xD4B2C39F7AD5A6A6();
				}
				else
				{
					func_10(&(Global_1878[Global_112293.f_14139[iVar38 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_112293.f_14139[iVar38 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_112293.f_14139[iVar38 /*104*/]));
						break;
					
					case 1:
						unk_0x35CA0C119E6A2A27(&(Global_112293.f_14139[iVar38 /*104*/]));
						unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iVar38 /*104*/].f_33));
						if (Global_112293.f_14139[iVar38 /*104*/].f_66 == 1 && !unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iVar38 /*104*/].f_67), "NULL"))
						{
							unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iVar38 /*104*/].f_67));
						}
						if ((Global_112293.f_14139[iVar38 /*104*/].f_66 == 2 && !unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iVar38 /*104*/].f_67), "NULL")) && !unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iVar38 /*104*/].f_83), "NULL"))
						{
							if (unk_0x49875FC4498CDA9A(&(Global_112293.f_14139[iVar38 /*104*/].f_67)))
							{
								unk_0x1896EC0B030A48A2(&(Global_112293.f_14139[iVar38 /*104*/].f_67));
							}
							else
							{
								unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iVar38 /*104*/].f_67));
							}
							if (unk_0x49875FC4498CDA9A(&(Global_112293.f_14139[iVar38 /*104*/].f_83)))
							{
								unk_0x1896EC0B030A48A2(&(Global_112293.f_14139[iVar38 /*104*/].f_83));
							}
							else
							{
								unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iVar38 /*104*/].f_83));
							}
						}
						unk_0xD4B2C39F7AD5A6A6();
						break;
					
					case 2:
						unk_0x35CA0C119E6A2A27(&(Global_112293.f_14139[iVar38 /*104*/]));
						unk_0x38CD3C04C877C35F(Global_112293.f_14139[iVar38 /*104*/].f_49);
						unk_0xD4B2C39F7AD5A6A6();
						break;
					
					case 3:
						unk_0x35CA0C119E6A2A27(&(Global_112293.f_14139[iVar38 /*104*/]));
						unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iVar38 /*104*/].f_33));
						unk_0x38CD3C04C877C35F(Global_112293.f_14139[iVar38 /*104*/].f_49);
						if (Global_112293.f_14139[iVar38 /*104*/].f_66 == 1 && !unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iVar38 /*104*/].f_67), "NULL"))
						{
							unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iVar38 /*104*/].f_67));
						}
						if ((Global_112293.f_14139[iVar38 /*104*/].f_66 == 2 && !unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iVar38 /*104*/].f_67), "NULL")) && !unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iVar38 /*104*/].f_83), "NULL"))
						{
							if (unk_0x49875FC4498CDA9A(&(Global_112293.f_14139[iVar38 /*104*/].f_67)))
							{
								unk_0x1896EC0B030A48A2(&(Global_112293.f_14139[iVar38 /*104*/].f_67));
							}
							else
							{
								unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iVar38 /*104*/].f_67));
							}
							if (unk_0x49875FC4498CDA9A(&(Global_112293.f_14139[iVar38 /*104*/].f_83)))
							{
								unk_0x1896EC0B030A48A2(&(Global_112293.f_14139[iVar38 /*104*/].f_83));
							}
							else
							{
								unk_0xA91D83F2CC1345A6(&(Global_112293.f_14139[iVar38 /*104*/].f_83));
							}
						}
						unk_0xD4B2C39F7AD5A6A6();
						break;
					
					case 4:
						func_35(iVar38);
						break;
					
					case 5:
						func_35(iVar38);
						break;
					
					case 6:
						func_35(iVar38);
						break;
					
					case 7:
						func_35(iVar38);
						break;
					
					case 8:
						func_35(iVar38);
						break;
					
					case 9:
						func_35(iVar38);
						break;
					
					case 10:
						func_35(iVar38);
						break;
					
					case 11:
						func_35(iVar38);
						break;
				}
				unk_0x392841D58D2EED1D();
			}
		}
		if (Global_112293.f_14139[iVar36 /*104*/].f_24 != 0)
		{
			if (Global_112293.f_14139[iVar36 /*104*/].f_99[Global_19798] == 1)
			{
				iLocal_55++;
			}
		}
		iVar36++;
	}
}

int func_44(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_45(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	unk_0x9E3D03981E2E9AD9(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(SYSTEM::ROUND(fParam6));
	}
	unk_0x392841D58D2EED1D();
}

void func_46()
{
	StringCopy(&(Local_84[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_2066[0 /*8*/]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_2066[1 /*8*/]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_2066[2 /*8*/]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_2066[3 /*8*/]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_84[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_2066[4 /*8*/]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_84[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_2066[5 /*8*/]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_84[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_2066[6 /*8*/]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_2066[7 /*8*/]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_2066[8 /*8*/]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_2066[9 /*8*/]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_2066[10 /*8*/]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_2066[11 /*8*/]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_2066[12 /*8*/]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_84[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_2066[13 /*8*/]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_84[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_2066[14 /*8*/]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_84[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_2066[15 /*8*/]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_2066[16 /*8*/]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_2066[17 /*8*/]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_2066[18 /*8*/]), "executiveproducer", 32);
	StringCopy(&(Local_84[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_1075[19 /*6*/]), "mt_phone_image_1", 24);
	StringCopy(&(Local_84[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_1075[20 /*6*/]), "mt_phone_image_2", 24);
	StringCopy(&(Local_84[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_1075[21 /*6*/]), "mt_phone_image_3", 24);
	StringCopy(&(Local_84[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_1075[22 /*6*/]), "mt_phone_image_4", 24);
	StringCopy(&(Local_84[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_1075[23 /*6*/]), "mt_phone_image_5", 24);
	StringCopy(&(Local_84[24 /*6*/]), "SAD_SMS_0", 24);
	StringCopy(&(Local_1075[24 /*6*/]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_84[25 /*6*/]), "SAD_SMS_1", 24);
	StringCopy(&(Local_1075[25 /*6*/]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_84[26 /*6*/]), "SAD_SMS_2", 24);
	StringCopy(&(Local_1075[26 /*6*/]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_84[27 /*6*/]), "SAD_SMS_3", 24);
	StringCopy(&(Local_1075[27 /*6*/]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_84[28 /*6*/]), "SAD_SMS_4", 24);
	StringCopy(&(Local_1075[28 /*6*/]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_84[29 /*6*/]), "SAD_SMS_5", 24);
	StringCopy(&(Local_1075[29 /*6*/]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_84[30 /*6*/]), "SAD_SMS_6", 24);
	StringCopy(&(Local_1075[30 /*6*/]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_84[31 /*6*/]), "SAD_SMS_7", 24);
	StringCopy(&(Local_1075[31 /*6*/]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_84[32 /*6*/]), "SAD_SMS_8", 24);
	StringCopy(&(Local_1075[32 /*6*/]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_84[33 /*6*/]), "SAD_SMS_9", 24);
	StringCopy(&(Local_1075[33 /*6*/]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_84[34 /*6*/]), "SAD_SMS_10", 24);
	StringCopy(&(Local_1075[34 /*6*/]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_84[35 /*6*/]), "SAD_SMS_11", 24);
	StringCopy(&(Local_1075[35 /*6*/]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_84[36 /*6*/]), "SAD_SMS_12", 24);
	StringCopy(&(Local_1075[36 /*6*/]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_84[37 /*6*/]), "SAD_SMS_13", 24);
	StringCopy(&(Local_1075[37 /*6*/]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_84[38 /*6*/]), "SAD_SMS_14", 24);
	StringCopy(&(Local_1075[38 /*6*/]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_84[39 /*6*/]), "SAD_SMS_15", 24);
	StringCopy(&(Local_1075[39 /*6*/]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_84[40 /*6*/]), "SAD_SMS_16", 24);
	StringCopy(&(Local_1075[40 /*6*/]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_84[41 /*6*/]), "SAD_SMS_17", 24);
	StringCopy(&(Local_1075[41 /*6*/]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_84[42 /*6*/]), "SAD_SMS_18", 24);
	StringCopy(&(Local_1075[42 /*6*/]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_84[43 /*6*/]), "SAD_SMS_19", 24);
	StringCopy(&(Local_1075[43 /*6*/]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_84[44 /*6*/]), "VEX_PM_PHOTO0", 24);
	StringCopy(&(Local_1075[44 /*6*/]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_84[45 /*6*/]), "VEX_PM_PHOTO1", 24);
	StringCopy(&(Local_1075[45 /*6*/]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_84[46 /*6*/]), "VEX_PM_PHOTO2", 24);
	StringCopy(&(Local_1075[46 /*6*/]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_84[47 /*6*/]), "VEX_PM_PHOTO3", 24);
	StringCopy(&(Local_1075[47 /*6*/]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_84[48 /*6*/]), "VEX_PM_PHOTO4", 24);
	StringCopy(&(Local_1075[48 /*6*/]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_84[49 /*6*/]), "VEX_PM_PHOTO5", 24);
	StringCopy(&(Local_1075[49 /*6*/]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_84[50 /*6*/]), "VEX_PM_PHOTO6", 24);
	StringCopy(&(Local_1075[50 /*6*/]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_84[51 /*6*/]), "VEX_PM_PHOTO7", 24);
	StringCopy(&(Local_1075[51 /*6*/]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_84[52 /*6*/]), "VEX_PM_PHOTO8", 24);
	StringCopy(&(Local_1075[52 /*6*/]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_84[53 /*6*/]), "VEX_PM_PHOTO9", 24);
	StringCopy(&(Local_1075[53 /*6*/]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_84[54 /*6*/]), "VEX_PM_PHOTO10", 24);
	StringCopy(&(Local_1075[54 /*6*/]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_84[55 /*6*/]), "VEX_PM_PHOTO11", 24);
	StringCopy(&(Local_1075[55 /*6*/]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_84[56 /*6*/]), "VEX_PM_PHOTO12", 24);
	StringCopy(&(Local_1075[56 /*6*/]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_84[57 /*6*/]), "VEX_PM_PHOTO13", 24);
	StringCopy(&(Local_1075[57 /*6*/]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_84[58 /*6*/]), "VEX_1_PROTO", 24);
	StringCopy(&(Local_1075[58 /*6*/]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_84[59 /*6*/]), "VEX_2_PROTO", 24);
	StringCopy(&(Local_1075[59 /*6*/]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_84[60 /*6*/]), "VEX_3_PROTO", 24);
	StringCopy(&(Local_1075[60 /*6*/]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_84[61 /*6*/]), "VEX_4_TYRUS", 24);
	StringCopy(&(Local_1075[61 /*6*/]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_84[62 /*6*/]), "VEX_5_TYRUS", 24);
	StringCopy(&(Local_1075[62 /*6*/]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_84[63 /*6*/]), "VEX_6_TYRUS", 24);
	StringCopy(&(Local_1075[63 /*6*/]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_84[64 /*6*/]), "VEX_7_BESTIA", 24);
	StringCopy(&(Local_1075[64 /*6*/]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_84[65 /*6*/]), "VEX_8_BESTIA", 24);
	StringCopy(&(Local_1075[65 /*6*/]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_84[66 /*6*/]), "VEX_9_BESTIA", 24);
	StringCopy(&(Local_1075[66 /*6*/]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_84[67 /*6*/]), "VEX_10_T20", 24);
	StringCopy(&(Local_1075[67 /*6*/]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_84[68 /*6*/]), "VEX_11_T20", 24);
	StringCopy(&(Local_1075[68 /*6*/]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_84[69 /*6*/]), "VEX_12_T20", 24);
	StringCopy(&(Local_1075[69 /*6*/]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_84[70 /*6*/]), "VEX_13_SHEAVA", 24);
	StringCopy(&(Local_1075[70 /*6*/]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_84[71 /*6*/]), "VEX_14_SHEAVA", 24);
	StringCopy(&(Local_1075[71 /*6*/]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_84[72 /*6*/]), "VEX_15_SHEAVA", 24);
	StringCopy(&(Local_1075[72 /*6*/]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_84[73 /*6*/]), "VEX_16_OSIRIS", 24);
	StringCopy(&(Local_1075[73 /*6*/]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_84[74 /*6*/]), "VEX_17_OSIRIS", 24);
	StringCopy(&(Local_1075[74 /*6*/]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_84[75 /*6*/]), "VEX_18_OSIRIS", 24);
	StringCopy(&(Local_1075[75 /*6*/]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_84[76 /*6*/]), "VEX_19_FMJ", 24);
	StringCopy(&(Local_1075[76 /*6*/]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_84[77 /*6*/]), "VEX_20_FMJ", 24);
	StringCopy(&(Local_1075[77 /*6*/]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_84[78 /*6*/]), "VEX_21_FMJ", 24);
	StringCopy(&(Local_1075[78 /*6*/]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_84[79 /*6*/]), "VEX_22_REAPER", 24);
	StringCopy(&(Local_1075[79 /*6*/]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_84[80 /*6*/]), "VEX_23_REAPER", 24);
	StringCopy(&(Local_1075[80 /*6*/]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_84[81 /*6*/]), "VEX_24_REAPER", 24);
	StringCopy(&(Local_1075[81 /*6*/]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_84[82 /*6*/]), "VEX_25_PFISTER", 24);
	StringCopy(&(Local_1075[82 /*6*/]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_84[83 /*6*/]), "VEX_26_PFISTER", 24);
	StringCopy(&(Local_1075[83 /*6*/]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_84[84 /*6*/]), "VEX_27_PFISTER", 24);
	StringCopy(&(Local_1075[84 /*6*/]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_84[85 /*6*/]), "VEX_28_ALPHA", 24);
	StringCopy(&(Local_1075[85 /*6*/]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_84[86 /*6*/]), "VEX_29_ALPHA", 24);
	StringCopy(&(Local_1075[86 /*6*/]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_84[87 /*6*/]), "VEX_30_ALPHA", 24);
	StringCopy(&(Local_1075[87 /*6*/]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_84[88 /*6*/]), "VEX_31_MAMBA", 24);
	StringCopy(&(Local_1075[88 /*6*/]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_84[89 /*6*/]), "VEX_32_MAMBA", 24);
	StringCopy(&(Local_1075[89 /*6*/]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_84[90 /*6*/]), "VEX_33_MAMBA", 24);
	StringCopy(&(Local_1075[90 /*6*/]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_84[91 /*6*/]), "VEX_34_TAMPA", 24);
	StringCopy(&(Local_1075[91 /*6*/]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_84[92 /*6*/]), "VEX_35_TAMPA", 24);
	StringCopy(&(Local_1075[92 /*6*/]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_84[93 /*6*/]), "VEX_36_TAMPA", 24);
	StringCopy(&(Local_1075[93 /*6*/]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_84[94 /*6*/]), "VEX_37_BTYPE", 24);
	StringCopy(&(Local_1075[94 /*6*/]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_84[95 /*6*/]), "VEX_38_BTYPE", 24);
	StringCopy(&(Local_1075[95 /*6*/]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_84[96 /*6*/]), "VEX_39_BTYPE", 24);
	StringCopy(&(Local_1075[96 /*6*/]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_84[97 /*6*/]), "VEX_40_FELTZ3", 24);
	StringCopy(&(Local_1075[97 /*6*/]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_84[98 /*6*/]), "VEX_41_FELTZ3", 24);
	StringCopy(&(Local_1075[98 /*6*/]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_84[99 /*6*/]), "VEX_42_FELTZ3", 24);
	StringCopy(&(Local_1075[99 /*6*/]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_84[100 /*6*/]), "VEX_43_ZTYPE", 24);
	StringCopy(&(Local_1075[100 /*6*/]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_84[101 /*6*/]), "VEX_44_ZTYPE", 24);
	StringCopy(&(Local_1075[101 /*6*/]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_84[102 /*6*/]), "VEX_45_ZTYPE", 24);
	StringCopy(&(Local_1075[102 /*6*/]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_84[103 /*6*/]), "VEX_46_TROPOS", 24);
	StringCopy(&(Local_1075[103 /*6*/]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_84[104 /*6*/]), "VEX_47_TROPOS", 24);
	StringCopy(&(Local_1075[104 /*6*/]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_84[105 /*6*/]), "VEX_48_TROPOS", 24);
	StringCopy(&(Local_1075[105 /*6*/]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_84[106 /*6*/]), "VEX_49_ENTITYXF", 24);
	StringCopy(&(Local_1075[106 /*6*/]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_84[107 /*6*/]), "VEX_50_ENTITYXF", 24);
	StringCopy(&(Local_1075[107 /*6*/]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_84[108 /*6*/]), "VEX_51_ENTITYXF", 24);
	StringCopy(&(Local_1075[108 /*6*/]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_84[109 /*6*/]), "VEX_52_SULTANRS", 24);
	StringCopy(&(Local_1075[109 /*6*/]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_84[110 /*6*/]), "VEX_53_SULTANRS", 24);
	StringCopy(&(Local_1075[110 /*6*/]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_84[111 /*6*/]), "VEX_54_SULTANRS", 24);
	StringCopy(&(Local_1075[111 /*6*/]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_84[112 /*6*/]), "VEX_55_ZENTORNO", 24);
	StringCopy(&(Local_1075[112 /*6*/]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_84[113 /*6*/]), "VEX_56_ZENTORNO", 24);
	StringCopy(&(Local_1075[113 /*6*/]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_84[114 /*6*/]), "VEX_57_ZENTORNO", 24);
	StringCopy(&(Local_1075[114 /*6*/]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_84[115 /*6*/]), "VEX_58_OMNIS", 24);
	StringCopy(&(Local_1075[115 /*6*/]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_84[116 /*6*/]), "VEX_59_OMNIS", 24);
	StringCopy(&(Local_1075[116 /*6*/]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_84[117 /*6*/]), "VEX_60_OMNIS", 24);
	StringCopy(&(Local_1075[117 /*6*/]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_84[118 /*6*/]), "VEX_61_COQUET3", 24);
	StringCopy(&(Local_1075[118 /*6*/]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_84[119 /*6*/]), "VEX_62_COQUET3", 24);
	StringCopy(&(Local_1075[119 /*6*/]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_84[120 /*6*/]), "VEX_63_COQUET3", 24);
	StringCopy(&(Local_1075[120 /*6*/]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_84[121 /*6*/]), "VEX_64_SEVEN70", 24);
	StringCopy(&(Local_1075[121 /*6*/]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_84[122 /*6*/]), "VEX_65_SEVEN70", 24);
	StringCopy(&(Local_1075[122 /*6*/]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_84[123 /*6*/]), "VEX_66_SEVEN70", 24);
	StringCopy(&(Local_1075[123 /*6*/]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_84[124 /*6*/]), "VEX_67_VERLI", 24);
	StringCopy(&(Local_1075[124 /*6*/]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_84[125 /*6*/]), "VEX_68_VERLI", 24);
	StringCopy(&(Local_1075[125 /*6*/]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_84[126 /*6*/]), "VEX_69_VERLI", 24);
	StringCopy(&(Local_1075[126 /*6*/]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_84[127 /*6*/]), "VEX_70_FELTZ2", 24);
	StringCopy(&(Local_1075[127 /*6*/]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_84[128 /*6*/]), "VEX_71_FELTZ2", 24);
	StringCopy(&(Local_1075[128 /*6*/]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_84[129 /*6*/]), "VEX_72_FELTZ2", 24);
	StringCopy(&(Local_1075[129 /*6*/]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_84[130 /*6*/]), "VEX_73_COQUET2", 24);
	StringCopy(&(Local_1075[130 /*6*/]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_84[131 /*6*/]), "VEX_74_COQUET2", 24);
	StringCopy(&(Local_1075[131 /*6*/]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_84[132 /*6*/]), "VEX_75_COQUET2", 24);
	StringCopy(&(Local_1075[132 /*6*/]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_84[133 /*6*/]), "VEX_76_CHEETAH", 24);
	StringCopy(&(Local_1075[133 /*6*/]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_84[134 /*6*/]), "VEX_77_CHEETAH", 24);
	StringCopy(&(Local_1075[134 /*6*/]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_84[135 /*6*/]), "VEX_78_CHEETAH", 24);
	StringCopy(&(Local_1075[135 /*6*/]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_84[136 /*6*/]), "VEX_79_NSHADE", 24);
	StringCopy(&(Local_1075[136 /*6*/]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_84[137 /*6*/]), "VEX_80_NSHADE", 24);
	StringCopy(&(Local_1075[137 /*6*/]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_84[138 /*6*/]), "VEX_81_NSHADE", 24);
	StringCopy(&(Local_1075[138 /*6*/]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_84[139 /*6*/]), "VEX_82_BANSH2", 24);
	StringCopy(&(Local_1075[139 /*6*/]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_84[140 /*6*/]), "VEX_83_BANSH2", 24);
	StringCopy(&(Local_1075[140 /*6*/]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_84[141 /*6*/]), "VEX_84_BANSH2", 24);
	StringCopy(&(Local_1075[141 /*6*/]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_84[142 /*6*/]), "VEX_82_TURIS", 24);
	StringCopy(&(Local_1075[142 /*6*/]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_84[143 /*6*/]), "VEX_86_TURIS", 24);
	StringCopy(&(Local_1075[143 /*6*/]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_84[144 /*6*/]), "VEX_87_TURIS", 24);
	StringCopy(&(Local_1075[144 /*6*/]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_84[145 /*6*/]), "VEX_88_MASS", 24);
	StringCopy(&(Local_1075[145 /*6*/]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_84[146 /*6*/]), "VEX_89_MASS", 24);
	StringCopy(&(Local_1075[146 /*6*/]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_84[147 /*6*/]), "VEX_90_MASS", 24);
	StringCopy(&(Local_1075[147 /*6*/]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_84[148 /*6*/]), "VEX_91_SABRE2", 24);
	StringCopy(&(Local_1075[148 /*6*/]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_84[149 /*6*/]), "VEX_92_SABRE2", 24);
	StringCopy(&(Local_1075[149 /*6*/]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_84[150 /*6*/]), "VEX_93_SABRE2", 24);
	StringCopy(&(Local_1075[150 /*6*/]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_84[151 /*6*/]), "VEX_94_JESTER", 24);
	StringCopy(&(Local_1075[151 /*6*/]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_84[152 /*6*/]), "VEX_95_JESTER", 24);
	StringCopy(&(Local_1075[152 /*6*/]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_84[153 /*6*/]), "VEX_96_JESTER", 24);
	StringCopy(&(Local_1075[153 /*6*/]), "IE_TEXTVECH_96", 24);
	StringCopy(&(Local_84[154 /*6*/]), "GO_AS_PICM", 24);
	StringCopy(&(Local_1075[154 /*6*/]), "NHP_prep_autosalvage", 24);
	StringCopy(&(Local_84[155 /*6*/]), "GO_DR_PICM", 24);
	StringCopy(&(Local_1075[155 /*6*/]), "nhp_prep_daylightrob", 24);
	StringCopy(&(Local_84[156 /*6*/]), "FHTXT_DDR00M", 24);
	StringCopy(&(Local_1075[156 /*6*/]), "NHP_prep_deaddrop", 24);
	StringCopy(&(Local_84[157 /*6*/]), "BBTXT_CPS00M", 24);
	StringCopy(&(Local_1075[157 /*6*/]), "BAT_carpark_1", 24);
	StringCopy(&(Local_84[158 /*6*/]), "BBTXT_CPS10M", 24);
	StringCopy(&(Local_1075[158 /*6*/]), "BAT_carpark_2", 24);
	StringCopy(&(Local_84[159 /*6*/]), "BBTXT_CPS20M", 24);
	StringCopy(&(Local_1075[159 /*6*/]), "BAT_carpark_3", 24);
	StringCopy(&(Local_84[160 /*6*/]), "ICEBR_EMAIL", 24);
	StringCopy(&(Local_1075[160 /*6*/]), "ib_aircon", 24);
	if (func_54(unk_0x1146A9AE09CE2B14()) == 19)
	{
		StringCopy(&(Local_84[44 /*6*/]), "SNP_IMG_0_0", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[45 /*6*/]), "SNP_IMG_0_1", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[46 /*6*/]), "SNP_IMG_0_2", 24);
		StringCopy(&(Local_1075[46 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[47 /*6*/]), "SNP_IMG_0_3", 24);
		StringCopy(&(Local_1075[47 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[48 /*6*/]), "SNP_IMG_0_4", 24);
		StringCopy(&(Local_1075[48 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[49 /*6*/]), "SNP_IMG_0_5", 24);
		StringCopy(&(Local_1075[49 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[50 /*6*/]), "SNP_IMG_0_6", 24);
		StringCopy(&(Local_1075[50 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[51 /*6*/]), "SNP_IMG_0_7", 24);
		StringCopy(&(Local_1075[51 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[52 /*6*/]), "SNP_IMG_0_8", 24);
		StringCopy(&(Local_1075[52 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[53 /*6*/]), "SNP_IMG_0_9", 24);
		StringCopy(&(Local_1075[53 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[54 /*6*/]), "SNP_IMG_1_0", 24);
		StringCopy(&(Local_1075[54 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[55 /*6*/]), "SNP_IMG_1_1", 24);
		StringCopy(&(Local_1075[55 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[56 /*6*/]), "SNP_IMG_1_2", 24);
		StringCopy(&(Local_1075[56 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[57 /*6*/]), "SNP_IMG_1_3", 24);
		StringCopy(&(Local_1075[57 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[58 /*6*/]), "SNP_IMG_1_4", 24);
		StringCopy(&(Local_1075[58 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[59 /*6*/]), "SNP_IMG_1_5", 24);
		StringCopy(&(Local_1075[59 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[60 /*6*/]), "SNP_IMG_1_6", 24);
		StringCopy(&(Local_1075[60 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[61 /*6*/]), "SNP_IMG_1_7", 24);
		StringCopy(&(Local_1075[61 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[62 /*6*/]), "SNP_IMG_1_8", 24);
		StringCopy(&(Local_1075[62 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[64 /*6*/]), "SNP_IMG_1_9", 24);
		StringCopy(&(Local_1075[64 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[65 /*6*/]), "SNP_IMG_2_0", 24);
		StringCopy(&(Local_1075[65 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[66 /*6*/]), "SNP_IMG_2_1", 24);
		StringCopy(&(Local_1075[66 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[67 /*6*/]), "SNP_IMG_2_2", 24);
		StringCopy(&(Local_1075[67 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[68 /*6*/]), "SNP_IMG_2_3", 24);
		StringCopy(&(Local_1075[68 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[69 /*6*/]), "SNP_IMG_2_4", 24);
		StringCopy(&(Local_1075[69 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[70 /*6*/]), "SNP_IMG_2_5", 24);
		StringCopy(&(Local_1075[70 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[71 /*6*/]), "SNP_IMG_2_6", 24);
		StringCopy(&(Local_1075[71 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[72 /*6*/]), "SNP_IMG_2_7", 24);
		StringCopy(&(Local_1075[72 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[73 /*6*/]), "SNP_IMG_2_8", 24);
		StringCopy(&(Local_1075[73 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[74 /*6*/]), "SNP_IMG_2_9", 24);
		StringCopy(&(Local_1075[74 /*6*/]), "SCLUB_3", 24);
	}
	else if (func_53(unk_0x1146A9AE09CE2B14()) == 14)
	{
		StringCopy(&(Local_84[44 /*6*/]), "GBC_TM_TC100", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[45 /*6*/]), "GBC_TM_TC101", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[46 /*6*/]), "GBC_TM_TC102", 24);
		StringCopy(&(Local_1075[46 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[47 /*6*/]), "GBC_TM_TC103", 24);
		StringCopy(&(Local_1075[47 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[48 /*6*/]), "GBC_TM_TC104", 24);
		StringCopy(&(Local_1075[48 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[49 /*6*/]), "GBC_TM_TC105", 24);
		StringCopy(&(Local_1075[49 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[50 /*6*/]), "GBC_TM_TC110", 24);
		StringCopy(&(Local_1075[50 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[51 /*6*/]), "GBC_TM_TC111", 24);
		StringCopy(&(Local_1075[51 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[52 /*6*/]), "GBC_TM_TC120", 24);
		StringCopy(&(Local_1075[52 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[53 /*6*/]), "GBC_TM_TC121", 24);
		StringCopy(&(Local_1075[53 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[54 /*6*/]), "GBC_TM_TC130", 24);
		StringCopy(&(Local_1075[54 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[55 /*6*/]), "GBC_TM_TC140", 24);
		StringCopy(&(Local_1075[55 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[56 /*6*/]), "GBC_TM_TC200", 24);
		StringCopy(&(Local_1075[56 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[57 /*6*/]), "GBC_TM_TC201", 24);
		StringCopy(&(Local_1075[57 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[58 /*6*/]), "GBC_TM_TC202", 24);
		StringCopy(&(Local_1075[58 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[59 /*6*/]), "GBC_TM_TC203", 24);
		StringCopy(&(Local_1075[59 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[60 /*6*/]), "GBC_TM_TC204", 24);
		StringCopy(&(Local_1075[60 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[61 /*6*/]), "GBC_TM_TC205", 24);
		StringCopy(&(Local_1075[61 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[62 /*6*/]), "GBC_TM_TC210", 24);
		StringCopy(&(Local_1075[62 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[63 /*6*/]), "GBC_TM_TC211", 24);
		StringCopy(&(Local_1075[63 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[64 /*6*/]), "GBC_TM_TC220", 24);
		StringCopy(&(Local_1075[64 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[65 /*6*/]), "GBC_TM_TC221", 24);
		StringCopy(&(Local_1075[65 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[66 /*6*/]), "GBC_TM_TC230", 24);
		StringCopy(&(Local_1075[66 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[67 /*6*/]), "GBC_TM_TC240", 24);
		StringCopy(&(Local_1075[67 /*6*/]), "VC_TC_CASINOCCTV", 24);
	}
	else if (func_52(unk_0x1146A9AE09CE2B14()) == 30)
	{
		StringCopy(&(Local_84[44 /*6*/]), "CSH_TXT_MD_01M", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "heist3_prep_maid01", 24);
		StringCopy(&(Local_84[45 /*6*/]), "CSH_TXT_MD_02M", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "heist3_prep_maid02", 24);
	}
	else if (func_52(unk_0x1146A9AE09CE2B14()) == 32)
	{
		StringCopy(&(Local_84[44 /*6*/]), "CSHT_IMC_00M", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "heist3_cashier1", 24);
		StringCopy(&(Local_84[45 /*6*/]), "CSHT_IMC_10M", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "heist3_cashier2", 24);
		StringCopy(&(Local_84[46 /*6*/]), "CSHT_IMC_20M", 24);
		StringCopy(&(Local_1075[46 /*6*/]), "heist3_cashier3", 24);
		StringCopy(&(Local_84[47 /*6*/]), "CSHT_IMC_30M", 24);
		StringCopy(&(Local_1075[47 /*6*/]), "heist3_cashier4", 24);
	}
	else if (func_51(unk_0x1146A9AE09CE2B14()) == 17)
	{
		StringCopy(&(Local_84[44 /*6*/]), "ILHTEXT_SFE00M", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "heist4_sec_guard", 24);
	}
	else if (func_47(unk_0x1146A9AE09CE2B14()) == 4)
	{
		StringCopy(&(Local_84[44 /*6*/]), "TR_TXT_CV1", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "TUNER_TEXT_IMG_VIRUS", 24);
		StringCopy(&(Local_84[45 /*6*/]), "TR_TXT_CV2", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "TUNER_TEXT_IMG_VIRUS_02", 24);
		StringCopy(&(Local_84[46 /*6*/]), "TR_TXT_CV3", 24);
		StringCopy(&(Local_1075[46 /*6*/]), "TUNER_TEXT_IMG_VIRUS_03", 24);
	}
	else if (func_47(unk_0x1146A9AE09CE2B14()) == 11)
	{
		StringCopy(&(Local_84[44 /*6*/]), "ROBTEXT_IAA00M", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "TUNER_TEXT_IMG_IAA", 24);
	}
}

int func_47(int iParam0)
{
	if (func_50(iParam0) == 271)
	{
		return func_48(iParam0);
	}
	return -1;
}

int func_48(int iParam0)
{
	if (func_49(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_49(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0)
{
	if (func_49(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_51(int iParam0)
{
	if (func_50(iParam0) == 256)
	{
		return func_48(iParam0);
	}
	return -1;
}

int func_52(int iParam0)
{
	if (func_50(iParam0) == 158)
	{
		return func_48(iParam0);
	}
	return -1;
}

int func_53(int iParam0)
{
	if (func_50(iParam0) == 243)
	{
		return func_48(iParam0);
	}
	return -1;
}

int func_54(int iParam0)
{
	if (func_50(iParam0) == 237 || func_50(iParam0) == 250)
	{
		return func_48(iParam0);
	}
	return -1;
}

void func_55()
{
	if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) == 0)
	{
		func_56(0);
	}
	if (iLocal_2219)
	{
		unk_0xB5F867E143F78583(&uLocal_68);
	}
	unk_0x4BFE89D21F9885DC();
}

void func_56(int iParam0)
{
	if (func_61())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_60())
		{
			func_58(1, 1);
		}
		else
		{
			func_58(0, 0);
		}
	}
	if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
	{
		unk_0x191DDA30577F440A(&Global_7669, 16);
	}
	if (unk_0x8820F6FCD373F9F7())
	{
		unk_0x75B41F5020877259(0);
	}
	Global_21125 = 5;
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 30);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 30);
	}
	if (!func_57())
	{
		Global_19798.f_1 = 3;
	}
}

int func_57()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_58(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_59(0))
		{
			Global_19984 = 1;
			if (bParam1)
			{
				unk_0x3AEC124A3999B3D1(&Global_19735);
			}
			Global_19726 = { Global_19744[Global_19743 /*3*/] };
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
	else if (Global_19984 == 1)
	{
		Global_19984 = 0;
		Global_19726 = { Global_19751[Global_19743 /*3*/] };
		if (bParam1)
		{
			unk_0xA48FA5CE681A5230(Global_19735);
		}
		else
		{
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
}

int func_59(int iParam0)
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

bool func_60()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_61()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

