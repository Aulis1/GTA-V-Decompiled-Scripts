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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_94 = -1;
	fLocal_96 = 0.5f;
	iLocal_158 = -1;
	fLocal_989 = 1.69f;
	fLocal_990 = -5.812f;
	fLocal_991 = -4.84f;
	fLocal_992 = 0.14f;
	fLocal_994 = -70.0027f;
	fLocal_995 = 10.784f;
	fLocal_996 = -70.0027f;
	fLocal_997 = 2.1277f;
	fLocal_998 = -70.0027f;
	fLocal_999 = 7.9032f;
	iLocal_1000 = 1;
	iLocal_1005 = -1;
	iLocal_1006 = -1;
	iLocal_1007 = -1;
	iLocal_1008 = -1;
	iLocal_1009 = -1;
	iLocal_1010 = -1;
	fLocal_1014 = 3.5f;
	fLocal_1015 = 4.5f;
	bLocal_1016 = true;
	iLocal_1017 = 25000;
	iLocal_1030 = 3;
	iLocal_1643 = -1;
	iLocal_1656 = -1;
	iLocal_1657 = -1;
	iLocal_1742 = -1;
	iLocal_1746 = -1;
	iLocal_1749 = -1;
	iLocal_1785 = -1;
	iLocal_1786 = -1;
	iLocal_1787 = -1;
	fLocal_1819 = 0.395f;
	fLocal_1820 = 0.35f;
	fLocal_1821 = 0.5f;
	fLocal_1822 = 1f;
	fLocal_1823 = 0.315f;
	fLocal_1824 = 0.35f;
	fLocal_1825 = 0.5f;
	fLocal_1826 = 1f;
	fLocal_1827 = 0.4f;
	fLocal_1828 = 0.35f;
	fLocal_1829 = 0.7f;
	fLocal_1830 = 0.75f;
	Local_2733 = { -0.0677f, -53.2476f, -11f };
	if (func_1187())
	{
		func_1179();
	}
	func_1178();
	if (!func_1172())
	{
		func_1179();
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(3);
	func_1171(&(Global_2546095.f_78), 1, 0);
	iLocal_1653 = Global_2462101;
	Local_184.f_794 = 1;
	Local_184.f_796 = iLocal_1642;
	Local_184.f_711 = func_1170(iLocal_1642);
	if (Local_184.f_711 > -1)
	{
	}
	func_1169();
	Global_2513255 = 0;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_1168(0);
	}
	while (true)
	{
		func_1167();
		func_1100();
		if (func_1099(&uLocal_1649))
		{
			if (!func_1098(&uLocal_1649, 500, 1))
			{
				CONTROLS::SET_INPUT_EXCLUSIVE(2, 202);
				CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
			}
			else
			{
				func_1097(&uLocal_1649);
			}
		}
		iLocal_1645 = 0;
		if (func_1187())
		{
			if (iLocal_1636 >= 4)
			{
				func_1095();
			}
			func_1179();
		}
		if (func_1094(PLAYER::PLAYER_ID(), 1, 1))
		{
			if ((iLocal_1636 <= 3 && GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_1093(PLAYER::PLAYER_ID()), Local_1639, 0) > 325f) && !func_1089(iLocal_1642, 325))
			{
				if ((!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() && !func_1088()) && !func_1087(PLAYER::PLAYER_ID()))
				{
					func_1179();
				}
			}
		}
		iVar2 = func_1086(PLAYER::PLAYER_ID());
		if (func_1085(iVar2))
		{
			if (func_1083(PLAYER::PLAYER_ID(), iVar2, 1120403456) || func_1082(PLAYER::PLAYER_ID(), iVar2, 0, 0))
			{
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				if (CONTROLS::IS_CONTROL_PRESSED(2, 173) && GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 25))
				{
					GAMEPLAY::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26), 25);
				}
				else if (((((((!GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 25) && !func_1081(0)) && !func_1080(PLAYER::PLAYER_ID())) && !func_1079(PLAYER::PLAYER_ID())) && !func_1078()) && !func_1077()) && !func_1076(1)) && !func_1075())
				{
					func_1072(iVar2, &uLocal_160);
				}
			}
		}
		if (!func_1071(iLocal_1642))
		{
			if ((!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() && !func_1088()) && !func_1087(PLAYER::PLAYER_ID()))
			{
				func_1179();
			}
		}
		func_1067();
		if (Global_1573323 >= 0)
		{
			if (!func_1066(Local_1599))
			{
				if (func_1094(PLAYER::INT_TO_PLAYERINDEX(Global_1573323), 1, 1))
				{
					Local_1599 = { func_1065(PLAYER::INT_TO_PLAYERINDEX(Global_1573323)) };
				}
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Local_1558.f_8, 1))
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (func_1094(iVar1, 0, 0))
					{
						if (NETWORK::IS_PLAYER_IN_CUTSCENE(iVar1))
						{
							NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, 1);
						}
					}
				}
				iVar0++;
			}
		}
		func_1059();
		if (func_1058())
		{
			func_1057(&Local_1630, 1, 0);
		}
		else if (func_1056(Local_1630, 1500, 1))
		{
			func_1097(&Local_1630);
		}
		if (GAMEPLAY::IS_BIT_SET(Local_1879.f_433, 0))
		{
			if (func_1055())
			{
				GAMEPLAY::CLEAR_BIT(&(Local_1879.f_433), 0);
			}
		}
		else
		{
			func_1054();
		}
		func_1053();
		func_1032();
		func_970();
		func_960();
		func_956();
		func_955();
		func_904();
		func_887();
		func_884();
		func_880();
		func_878();
		switch (iLocal_1636)
		{
			case 0:
				if ((func_877() && func_876()) && func_872())
				{
					func_861();
					func_858();
					func_856(&Local_1251);
					func_854(1);
				}
				break;
			
			case 1:
				func_832();
				if (!func_831())
				{
					func_818();
				}
				if (!func_817())
				{
					func_361();
				}
				func_360();
				if (func_359(PLAYER::PLAYER_ID(), 1, 0) || Global_1652630)
				{
					if (((!Global_1590184.f_26 && !Global_1652631) && Global_1590184.f_19 <= 0) && !func_1089(iLocal_1642, 325))
					{
						func_1179();
						break;
					}
				}
				func_357();
				if (Global_1652631)
				{
					iLocal_176 = 1;
				}
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 2);
				bLocal_175 = false;
				GAMEPLAY::CLEAR_BIT(&iLocal_1638, 8);
				if ((PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || func_1088()) || func_1087(PLAYER::PLAYER_ID()))
				{
					func_1057(&(Global_2546095.f_78), 1, 0);
				}
				if (func_348(60, 0, 0))
				{
					iLocal_1646 = 0;
					if (func_1094(PLAYER::PLAYER_ID(), 1, 1))
					{
						if (func_332(0))
						{
							if (!Global_1652631)
							{
								if ((((((((((((((!func_1058() && !func_331(8, -1)) && !func_1075()) && !func_1077()) && !NETWORK::_0x2EAC52B4019E2782()) && !UI::_0x2F057596F2BD0061()) && !func_1099(&Local_1630)) && !func_1078()) && !func_321()) && !func_320()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !GAMEPLAY::IS_BIT_SET(Global_2537071.f_393.f_5, 0)) && !func_319()) && !Global_2537071.f_28.f_37) && !func_318())
								{
									func_268();
								}
								else
								{
									GAMEPLAY::SET_BIT(&iLocal_1638, 2);
									bLocal_175 = true;
								}
							}
						}
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 2))
				{
					if (GAMEPLAY::IS_BIT_SET(iLocal_1637, 7))
					{
						if (((((((((((func_267("CUST_GAR_WH") || func_267("CUST_YACHT_WH")) || func_267("CUST_GAR_MISO")) || func_267("CUST_YAC_MISO")) || func_267("CUST_PROP_W")) || func_267("PROP_GAR_HEI_WOH")) || func_267("PROP_YACHT_HEI_WOH")) || func_267("PPA_GENYACHT0")) || func_267("PPA_GEN1")) || func_267("PPA_BEAST0")) || func_267("PPA_BEAST1")) || func_267("PPA_CONTRA3"))
						{
							UI::CLEAR_HELP(1);
						}
						GAMEPLAY::CLEAR_BIT(&iLocal_1637, 7);
					}
				}
				if (!bLocal_175)
				{
					if (iLocal_1653 != 0)
					{
						if (((!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() && !func_1088()) && !Global_1652631) && !func_1087(PLAYER::PLAYER_ID()))
						{
							if (iLocal_176)
							{
								func_1057(&(Global_2546095.f_78), 1, 0);
								iLocal_176 = 0;
							}
							func_266();
						}
					}
					if (iLocal_1656 != -1)
					{
						func_264(&iLocal_1656);
					}
					func_263();
				}
				if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 2) || bLocal_175)
				{
					if ((GAMEPLAY::IS_BIT_SET(iLocal_1637, 7) || GAMEPLAY::IS_BIT_SET(iLocal_1637, 21)) || func_262())
					{
						if (iLocal_1657 == -1 && iLocal_1656 == -1)
						{
							func_261();
						}
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 8))
				{
					if (iLocal_1657 != -1)
					{
						func_264(&iLocal_1657);
					}
				}
				break;
			
			case 2:
				if (iLocal_1656 != -1)
				{
					func_264(&iLocal_1656);
				}
				if (iLocal_1657 != -1)
				{
					func_264(&iLocal_1657);
				}
				func_260(0);
				if ((((((func_1094(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !Global_1312791) && !Global_1312799) && !Global_2451426.f_3473.f_32) && func_332(0)) && !func_321())
				{
					if (!func_259())
					{
						func_258();
						GAMEPLAY::SET_BIT(&iLocal_1637, 20);
					}
					CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 23, 1);
					if (iLocal_1635 == 0)
					{
						if (func_257())
						{
							if (CAM::DOES_CAM_EXIST(Local_1558.f_1[0]))
							{
								CAM::DESTROY_CAM(Local_1558.f_1[0], 0);
							}
							UI::DISPLAY_RADAR(0);
							iLocal_178 = 1;
							func_248(PLAYER::PLAYER_ID(), 0, 68096, 0);
							GAMEPLAY::SET_BIT(&iLocal_1637, 6);
							Global_1590184.f_3 = func_247();
							Global_1590184.f_26 = 0;
							Global_1590535[PLAYER::PLAYER_ID()].f_274.f_27 = 0;
							if (!CAM::DOES_CAM_EXIST(uLocal_1651))
							{
								uLocal_1651 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Global_3934119[iLocal_1642].f_24, Global_3934119[iLocal_1642].f_24.f_3, Global_3934119[iLocal_1642].f_24.f_6, 0, 2);
								CAM::SET_CAM_ACTIVE(uLocal_1651, 1);
								CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
							}
							Global_1590184.f_17 = 0;
							GAMEPLAY::CLEAR_BIT(&iLocal_1638, 13);
							func_854(3);
						}
					}
					else if (Global_3934119[iLocal_1642].f_38[iLocal_1644].f_26 != 2)
					{
						func_243(1, 1);
						if (!func_232(1, 1))
						{
							break;
						}
					}
					else
					{
						if (Global_3934119[iLocal_1642].f_38[iLocal_1644].f_26 != 2)
						{
							GAMEPLAY::SET_BIT(&iLocal_1638, 9);
						}
						UI::DISPLAY_RADAR(0);
						iLocal_178 = 1;
						func_248(PLAYER::PLAYER_ID(), 0, 68096, 0);
						GAMEPLAY::SET_BIT(&iLocal_1637, 6);
						if (!CAM::DOES_CAM_EXIST(uLocal_1651))
						{
							uLocal_1651 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Global_3934119[iLocal_1642].f_24, Global_3934119[iLocal_1642].f_24.f_3, Global_3934119[iLocal_1642].f_24.f_6, 0, 2);
							CAM::SET_CAM_ACTIVE(uLocal_1651, 1);
							CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						}
						Global_1590184.f_17 = 0;
						func_854(3);
					}
				}
				else
				{
					if (Global_1312799)
					{
					}
					func_206();
				}
				break;
			
			case 3:
				GAMEPLAY::CLEAR_BIT(&iLocal_1637, 14);
				GAMEPLAY::CLEAR_BIT(&iLocal_1637, 15);
				func_260(0);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 23, 1);
				GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26), 15);
				if (((((((((func_1094(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !UI::_0x2F057596F2BD0061()) && !Global_1312791) && !Global_1312799) && !Global_2451426.f_3473.f_32) && func_332(0)) && !GAMEPLAY::IS_BIT_SET(Global_2537071.f_393.f_5, 0)) && !func_321()) && !GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 13))
				{
					if (!func_259())
					{
						func_258();
						GAMEPLAY::SET_BIT(&iLocal_1637, 20);
					}
					func_129();
					func_128();
				}
				else
				{
					if (Global_1312799)
					{
					}
					if (CAM::IS_SCREEN_FADING_OUT() && GAMEPLAY::IS_BIT_SET(Global_2537071.f_393.f_5, 0))
					{
					}
					else if (iLocal_1635 == 0)
					{
						if (!Global_1590184.f_26 && !GAMEPLAY::IS_BIT_SET(Global_2537071.f_393.f_5, 0))
						{
							Global_1590184.f_26 = 1;
						}
						else
						{
							func_206();
						}
					}
					else
					{
						func_206();
					}
				}
				break;
			
			case 4:
				GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26), 15);
				if (!func_259())
				{
					func_258();
					GAMEPLAY::SET_BIT(&iLocal_1637, 20);
				}
				iLocal_174 = 0;
				if (iLocal_1656 != -1)
				{
					func_264(&iLocal_1656);
				}
				func_260(0);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
				if (!iLocal_179)
				{
					NETWORK::SET_STORE_ENABLED(0);
					iLocal_179 = 1;
				}
				if (((func_1094(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && (func_332(0) || GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 8))) && !func_321())
				{
					if (func_127())
					{
						iLocal_1643 = iLocal_1642;
						OBJECT::_0x0BF3B3BD47D79C08(0, 0);
					}
					if (!iLocal_180)
					{
						NETWORK::_0x715135F4B82AC90D(PLAYER::PLAYER_PED_ID(), 0);
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
								{
									NETWORK::_0x715135F4B82AC90D(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
								}
							}
						}
						iLocal_180 = 1;
					}
					func_112();
					GAMEPLAY::SET_BIT(&iLocal_1637, 3);
					if (!iLocal_177)
					{
						Global_1590184.f_19 = 86;
						Global_1590184.f_183 = iLocal_1642;
						Global_1590184.f_3 = PLAYER::PLAYER_ID();
						Global_1590184.f_4 = { func_1065(PLAYER::PLAYER_ID()) };
						GAMEPLAY::SET_BIT(&(Global_1590184.f_22), 7);
						Global_1590184.f_20 = iLocal_1644;
						GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26), 11);
						func_111(86);
						if (iLocal_1644 > Global_3934119[iLocal_1642].f_36)
						{
							Global_1590184.f_20 = 0;
						}
						STREAMING::_SET_FOCUS_AREA(func_1093(PLAYER::PLAYER_ID()), 0f, 0f, 0f);
						iLocal_177 = 1;
						func_248(PLAYER::PLAYER_ID(), 0, 0, 0);
						GAMEPLAY::SET_BIT(&iLocal_1637, 6);
						func_854(5);
					}
				}
				else
				{
					if (Global_1652630 || GAMEPLAY::IS_BIT_SET(Global_1048576.f_8, 0))
					{
						Global_1590184.f_26 = 1;
					}
					func_206();
				}
				break;
			
			case 6:
				iVar3 = 0;
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_1739)
				{
					iVar6 = 0;
					Var7 = { 0f, 0f, 0f };
					Var10 = { 0f, 0f, 0f };
					iVar13 = 0;
					if (iLocal_1740 == 0)
					{
						Var14 = { 0f, -4f, 0f };
					}
					else if (iLocal_1740 == 1)
					{
						Var14 = { -2.83f, -2.83f, 0f };
					}
					else if (iLocal_1740 == 2)
					{
						Var14 = { 2.83f, -2.83f, 0f };
					}
					else if (iLocal_1740 == 3)
					{
						Var14 = { -4f, 0f, 0f };
					}
					else if (iLocal_1740 == 4)
					{
						Var14 = { 4f, 0f, 0f };
					}
					else
					{
						Var14 = { 0f, 0f, 0f };
					}
					fVar17 = -0.25f;
					fVar18 = 0.5f;
					Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Var14 / Vector(4f, 4f, 4f)) + Vector(fVar17, 0f, 0f) };
					Var22 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Var14) + Vector(fVar17, 0f, 0f) };
					fVar25 = 0f;
					fVar26 = 0f;
					GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var19 + Vector(1f, 0f, 0f), &fVar25, 0, 0);
					if (Var19.z < fVar25)
					{
						fVar25 = 0f;
					}
					GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var22 + Vector(1f, 0f, 0f), &fVar26, 0, 0);
					if (Var22.z < fVar26)
					{
						fVar26 = 0f;
					}
					if (!iLocal_181)
					{
						if ((fVar25 != 0f && fVar26 != 0f) && GAMEPLAY::ABSF((fVar26 - fVar25)) < 2f)
						{
							uVar4 = WORLDPROBE::START_SHAPE_TEST_CAPSULE(Var19.x, Var19.y, (fVar25 + 1f), Var22.x, Var22.y, (fVar26 + 1f), fVar18, 511, PLAYER::PLAYER_PED_ID(), 4);
							iLocal_181 = 1;
						}
						else
						{
							iLocal_1740++;
						}
					}
					if (iLocal_181)
					{
						iVar5 = WORLDPROBE::GET_SHAPE_TEST_RESULT(uVar4, &iVar6, &Var7, &Var10, &iVar13);
						if (iVar5 != 1)
						{
							if (iVar5 == 2)
							{
								if (iVar6 == 1 || ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									iLocal_1740++;
									iLocal_181 = 0;
								}
								else
								{
									iLocal_181 = 0;
									iVar3 = 1;
								}
							}
						}
					}
				}
				if (((func_1094(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && GAMEPLAY::GET_GAME_TIMER() > iLocal_1739) && (iVar3 || iLocal_1740 >= 5))
				{
					func_206();
					if (iLocal_1740 == 0)
					{
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 180f, 1, 0);
					}
					else if (iLocal_1740 == 1)
					{
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 135f, 1, 0);
					}
					else if (iLocal_1740 == 2)
					{
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 225f, 1, 0);
					}
					else if (iLocal_1740 == 3)
					{
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 90f, 1, 0);
					}
					else if (iLocal_1740 == 4)
					{
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 270f, 1, 0);
					}
					func_1057(&(Global_2546095.f_78), 1, 0);
				}
				break;
			
			case 5:
				func_260(0);
				GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26), 15);
				if (!func_1094(PLAYER::PLAYER_ID(), 1, 1) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_206();
				}
				func_109();
				if (Global_1590184.f_27)
				{
					if (Global_1590184.f_28 == 1)
					{
						Global_1590184.f_27 = 0;
						STREAMING::CLEAR_FOCUS();
						iLocal_177 = 0;
						func_107();
					}
				}
				else if (Global_1590184.f_25)
				{
					func_106(0);
					if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_393.f_5, 1))
					{
						Global_1590184.f_25 = 0;
					}
					Global_1590184.f_24 = 0;
					Global_1590184.f_27 = 0;
					UI::DISPLAY_RADAR(1);
					iLocal_178 = 0;
					func_1179();
				}
				break;
			
			case 7:
				if (!func_1094(PLAYER::PLAYER_ID(), 1, 1) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_206();
				}
				func_260(0);
				Global_1590184.f_28 = 1;
				if (Global_1590184.f_25)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_393.f_5, 1))
					{
						Global_1590184.f_25 = 0;
					}
					Global_1590184.f_24 = 0;
					UI::DISPLAY_RADAR(1);
					iLocal_178 = 0;
					func_1179();
				}
				break;
		}
		func_93();
		if (iLocal_1831)
		{
			func_77();
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_76(&(Local_2313[iLocal_1556].f_1), &(Local_1879.f_1), &iLocal_1556);
			switch (Local_1879)
			{
				case 0:
					if (func_64())
					{
						Local_1879 = 1;
					}
					break;
				
				case 1:
					func_63();
					if (iLocal_1642 > -1)
					{
						if ((GAMEPLAY::GET_FRAME_COUNT() % 60) == 0)
						{
						}
						Local_1879.f_344.f_49 = 1;
						Local_1879.f_344.f_3 = iLocal_1642;
						func_62(1);
						func_1(&(Local_1879.f_344), &(Local_2313[Local_184.f_9].f_4), &Local_184, &Global_3932160);
						func_62(0);
					}
					else if ((GAMEPLAY::GET_FRAME_COUNT() % 60) == 0)
					{
					}
					break;
				}
		}
	}
}

void func_1(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (Global_1662010 == 1)
	{
		if (uParam0->f_50 != 1)
		{
			func_61(uParam0, 1, 0);
		}
		if (uParam0->f_1 != 27)
		{
			uParam0->f_1 = 27;
		}
		Global_1662010 = 0;
	}
	switch (uParam0->f_50)
	{
		case 0:
			uParam0->f_53 = uParam2->f_712;
			uParam0->f_54 = uParam2->f_713;
			bVar0 = false;
			if ((((((((func_60(uParam3->f_31) || func_59(uParam3->f_31, -1)) || func_58(uParam3->f_31)) || func_57(uParam3->f_31)) || func_56(PLAYER::PLAYER_ID())) || func_52(uParam3->f_31, 0, 0)) || func_51(PLAYER::PLAYER_ID())) || uParam0->f_49) || func_50(PLAYER::PLAYER_ID()))
			{
				bVar0 = true;
				if (uParam0->f_4 == 1)
				{
					if (func_34(uParam2, uParam0, uParam3, 0))
					{
						bVar0 = false;
					}
				}
				else
				{
					func_27(uParam2, uParam0, uParam3);
				}
			}
			if (func_60(uParam3->f_31))
			{
			}
			if (!bVar0)
			{
				if (!Global_1590386)
				{
					if (uParam0->f_49 == 0)
					{
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::INT_TO_PLAYERINDEX(uParam2->f_9)))
						{
							if (uParam2->f_711 == PLAYER::INT_TO_PLAYERINDEX(uParam2->f_9))
							{
								if (GAMEPLAY::IS_BIT_SET(*uParam1, 1))
								{
									uParam0->f_1 = uParam2->f_801;
									if (GAMEPLAY::IS_BIT_SET(*uParam1, 2) && !Global_1590386)
									{
										func_61(uParam0, 1, 0);
									}
									else
									{
										func_61(uParam0, 2, 0);
									}
								}
							}
							else if (uParam2->f_711 > -1)
							{
							}
						}
						else if (uParam2->f_9 > -1 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(uParam2->f_9)))
						{
							if (uParam2->f_711 == PLAYER::INT_TO_PLAYERINDEX(uParam2->f_9))
							{
								if (!GAMEPLAY::IS_BIT_SET(*uParam1, 1))
								{
									GAMEPLAY::SET_BIT(uParam1, 1);
									uParam0->f_1 = Global_1628237[uParam2->f_9].f_604;
									if (Global_1628237[uParam2->f_9].f_605 == 1)
									{
										GAMEPLAY::SET_BIT(uParam1, 2);
									}
									else if (Global_1628237[uParam2->f_9].f_605 == 0)
									{
										GAMEPLAY::CLEAR_BIT(uParam1, 2);
									}
									if (GAMEPLAY::IS_BIT_SET(*uParam1, 2) && !Global_1590386)
									{
										func_61(uParam0, 1, 0);
									}
									else
									{
										func_61(uParam0, 2, 0);
									}
								}
							}
						}
					}
					else if (uParam2->f_711 == PLAYER::INT_TO_PLAYERINDEX(uParam2->f_9))
					{
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::INT_TO_PLAYERINDEX(uParam2->f_9)))
						{
							if (GAMEPLAY::IS_BIT_SET(*uParam1, 1))
							{
								uParam0->f_1 = uParam2->f_801;
								if (GAMEPLAY::IS_BIT_SET(*uParam1, 2) && !Global_1590386)
								{
									func_61(uParam0, 1, 0);
								}
								else
								{
									func_61(uParam0, 2, 0);
								}
							}
						}
						else
						{
							uParam0->f_1 = 11;
							func_61(uParam0, 2, 0);
						}
					}
					else if (uParam2->f_711 > -1)
					{
					}
				}
				else
				{
					uParam0->f_1 = 0;
					func_61(uParam0, 2, 0);
				}
			}
			break;
		
		case 1:
			if ((GAMEPLAY::IS_BIT_SET(func_26(*uParam1), 1) && !GAMEPLAY::IS_BIT_SET(*uParam1, 0)) || Global_1590386)
			{
				func_61(uParam0, 2, 0);
			}
			else
			{
				func_22(uParam0, uParam1, uParam2, 0);
			}
			break;
		
		case 2:
			if ((((GAMEPLAY::IS_BIT_SET(func_26(*uParam1), 0) && !GAMEPLAY::IS_BIT_SET(*uParam1, 0)) || GAMEPLAY::IS_BIT_SET(*uParam2, 8)) && !Global_1590386) || func_1088())
			{
				func_61(uParam0, 1, 0);
			}
			break;
	}
	if ((((((((((!func_59(uParam3->f_31, -1) && !func_58(uParam3->f_31)) && !func_60(uParam3->f_31)) && !func_57(uParam3->f_31)) && !func_56(PLAYER::PLAYER_ID())) && !func_51(PLAYER::PLAYER_ID())) && !func_50(PLAYER::PLAYER_ID())) && !func_21(PLAYER::PLAYER_ID())) && !func_19(PLAYER::PLAYER_ID())) && !uParam2->f_803) && !uParam2->f_804)
	{
		switch (uParam0->f_52)
		{
			case 0:
				if (!Global_1590386)
				{
					if (func_1094(PLAYER::INT_TO_PLAYERINDEX(uParam2->f_9), 0, 0))
					{
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::INT_TO_PLAYERINDEX(uParam2->f_9)))
						{
							if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() == NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::INT_TO_PLAYERINDEX(uParam2->f_9)))
							{
								if (uParam3->f_33 == 10)
								{
									if (GAMEPLAY::IS_BIT_SET(*uParam1, 2) && !Global_1590386)
									{
										func_18(uParam0, 3, 0);
									}
									else
									{
										func_18(uParam0, 4, 0);
									}
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_1 = 0;
					func_18(uParam0, 4, 0);
				}
				break;
			
			case 3:
				if (GAMEPLAY::IS_BIT_SET(func_17(*uParam1), 5) || Global_1590386)
				{
					func_18(uParam0, 4, 0);
				}
				else
				{
					func_22(uParam0, uParam1, uParam2, 0);
				}
				if (func_15())
				{
					func_2(uParam1, uParam2);
				}
				break;
			
			case 4:
				if ((GAMEPLAY::IS_BIT_SET(func_17(*uParam1), 4) && !Global_1590386) || func_1088())
				{
					func_18(uParam0, 3, 0);
				}
				break;
			}
	}
	switch (uParam0->f_51)
	{
		case 0:
			if (!Global_1590386)
			{
				if (func_1094(PLAYER::INT_TO_PLAYERINDEX(uParam2->f_9), 0, 0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::INT_TO_PLAYERINDEX(uParam2->f_9)))
					{
						if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() == NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::INT_TO_PLAYERINDEX(uParam2->f_9)))
						{
							if (GAMEPLAY::IS_BIT_SET(*uParam1, 1))
							{
								uParam0->f_2 = uParam2->f_802;
								if (GAMEPLAY::IS_BIT_SET(*uParam1, 4) && !Global_1590386)
								{
									func_61(uParam0, 1, 1);
								}
								else
								{
									func_61(uParam0, 2, 1);
								}
							}
						}
					}
				}
			}
			else
			{
				uParam0->f_2 = 0;
				func_61(uParam0, 2, 1);
			}
			break;
		
		case 1:
			if ((GAMEPLAY::IS_BIT_SET(func_26(*uParam1), 1) && GAMEPLAY::IS_BIT_SET(*uParam1, 0)) || Global_1590386)
			{
				func_61(uParam0, 2, 1);
			}
			else
			{
				func_22(uParam0, uParam1, uParam2, 1);
			}
			break;
		
		case 2:
			if ((GAMEPLAY::IS_BIT_SET(func_26(*uParam1), 0) && GAMEPLAY::IS_BIT_SET(*uParam1, 0)) && !Global_1590386)
			{
				func_61(uParam0, 1, 1);
			}
			break;
	}
	uParam2->f_9++;
	if (uParam2->f_9 >= 32)
	{
		uParam2->f_9 = 0;
	}
}

void func_2(var uParam0, var uParam1)
{
	Global_31037 = 0;
	Global_31038 = 0;
	func_3(uParam1);
	GAMEPLAY::CLEAR_BIT(uParam0, 15);
	func_264(&(uParam1->f_1));
	func_264(&(uParam1->f_2));
	*uParam1 = 0;
	uParam1->f_3 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam1->f_799 = 0;
	uParam1->f_800 = 0;
	uParam1->f_797 = 0;
	uParam1->f_798 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_714))
	{
		AUDIO::SET_STATIC_EMITTER_ENABLED("se_xm_int_02_bedroom_radio", 0);
		OBJECT::DELETE_OBJECT(&(uParam1->f_714));
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam1->f_714));
		uParam1->f_714 = 0;
	}
}

void func_3(var uParam0)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		AI::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (GAMEPLAY::IS_BIT_SET(*uParam0, 10))
	{
		AUDIO::STOP_AUDIO_SCENE("MP_APT_STRIPPER_SCENE");
		GAMEPLAY::CLEAR_BIT(uParam0, 10);
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_710));
	GAMEPLAY::CLEAR_BIT(&Global_2359302, 15);
	func_14();
	func_12();
	func_4();
}

void func_4()
{
	func_5(0);
}

void func_5(bool bParam0)
{
	if (bParam0)
	{
		func_11();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			GAMEPLAY::SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_1081(0))
		{
			func_6(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_6(int iParam0)
{
	if (func_10())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_9())
		{
			func_8(1, 1);
		}
		else
		{
			func_8(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_7())
	{
		Global_19486.f_1 = 3;
	}
}

int func_7()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_8(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_1081(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

bool func_9()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

bool func_10()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

void func_11()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_12()
{
	func_13(PLAYER::PLAYER_ID(), 0);
}

void func_13(int iParam0, int iParam1)
{
	Global_2425662[iParam0].f_63.f_3 = iParam1;
}

void func_14()
{
	Global_2439138.f_1156.f_10 = 0;
}

int func_15()
{
	if (func_16() == 1 || func_16() == 4)
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	return Global_1312467.f_18;
}

int func_17(var uParam0)
{
	return GAMEPLAY::GET_BITS_IN_RANGE(uParam0, 23, 28);
}

void func_18(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		uParam0->f_51 = iParam1;
	}
	else
	{
		uParam0->f_52 = iParam1;
	}
}

int func_19(int iParam0)
{
	if (iParam0 != func_247())
	{
		if (func_1094(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_20(int iParam0)
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

int func_21(int iParam0)
{
	if (iParam0 != func_247())
	{
		if (func_1094(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

void func_22(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	bVar0 = false;
	bVar1 = false;
	bVar3 = false;
	if (bParam3)
	{
		iVar2 = uParam0->f_2;
		if (!GAMEPLAY::IS_BIT_SET(*uParam2, 3) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam2->f_8) > 1000)
		{
			bVar0 = true;
			if (GAMEPLAY::IS_BIT_SET(*uParam1, 0))
			{
				if (uParam1->f_1 == iVar2)
				{
					bVar3 = true;
				}
			}
		}
	}
	else
	{
		iVar2 = uParam0->f_1;
		if (!GAMEPLAY::IS_BIT_SET(*uParam2, 1) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam2->f_7) > 1000)
		{
			bVar0 = true;
			if (!GAMEPLAY::IS_BIT_SET(*uParam1, 0))
			{
				if (uParam1->f_1 == iVar2)
				{
					bVar3 = true;
				}
			}
		}
	}
	if (bVar0)
	{
		if (bVar3)
		{
			if (GAMEPLAY::IS_BIT_SET(func_26(*uParam1), 2) || GAMEPLAY::IS_BIT_SET(func_17(*uParam1), 2))
			{
				func_25(uParam0, bParam3);
				bVar1 = true;
			}
			else if (GAMEPLAY::IS_BIT_SET(func_26(*uParam1), 3) || GAMEPLAY::IS_BIT_SET(func_17(*uParam1), 3))
			{
				func_23(uParam0, bParam3);
				bVar1 = true;
			}
		}
	}
	if (bVar1)
	{
		if (bParam3)
		{
			iVar2 = uParam0->f_2;
		}
		else
		{
			iVar2 = uParam0->f_1;
		}
		if (bParam3)
		{
			uParam2->f_8 = NETWORK::GET_NETWORK_TIME();
			GAMEPLAY::SET_BIT(uParam2, 3);
		}
		else
		{
			uParam2->f_7 = NETWORK::GET_NETWORK_TIME();
			GAMEPLAY::SET_BIT(uParam2, 1);
		}
	}
}

void func_23(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = uParam0->f_2;
	}
	else
	{
		iVar0 = uParam0->f_1;
	}
	iVar1 = iVar0;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 == 0)
	{
		iVar1 = (iVar1 - 1);
		if (iVar1 < 0)
		{
			iVar1 = (AUDIO::_MAX_RADIO_STATION_INDEX() - 1);
		}
		if (iVar1 == iVar0)
		{
			iVar3 = 1;
		}
		else
		{
			iVar2 = iVar1;
			iVar3 = 1;
		}
	}
	if (iVar2 != -1)
	{
		func_24(uParam0, bParam1, iVar2);
	}
}

void func_24(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		uParam0->f_2 = iParam2;
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = uParam0->f_2;
	}
	else
	{
		iVar0 = uParam0->f_1;
	}
	iVar1 = iVar0;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 == 0)
	{
		iVar1++;
		if (iVar1 > (AUDIO::_MAX_RADIO_STATION_INDEX() - 1))
		{
			iVar1 = 0;
		}
		if (iVar1 == iVar0)
		{
			iVar3 = 1;
		}
		else
		{
			iVar2 = iVar1;
			iVar3 = 1;
		}
	}
	if (iVar2 != -1)
	{
		func_24(uParam0, bParam1, iVar2);
	}
}

int func_26(var uParam0)
{
	return GAMEPLAY::GET_BITS_IN_RANGE(uParam0, 17, 22);
}

void func_27(var uParam0, var uParam1, var uParam2)
{
	if (uParam1->f_4 == 0)
	{
		if (func_60(uParam2->f_31) && !uParam1->f_49)
		{
			if (func_28(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 4, 0, 1))
			{
				unk_0x797F9C5E661D920E(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 4);
				uParam1->f_4 = 1;
			}
		}
		else if (uParam1->f_49)
		{
			if (func_28(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 4, 0, 1))
			{
				unk_0x797F9C5E661D920E(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 4);
				uParam1->f_4 = 1;
			}
		}
		else if (func_59(uParam2->f_31, -1))
		{
			if (func_28(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 6, 0, 1))
			{
				unk_0x797F9C5E661D920E(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 6);
				uParam1->f_4 = 1;
			}
		}
		else if (func_58(uParam2->f_31))
		{
			if (func_28(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 3, 0, 1))
			{
				unk_0x797F9C5E661D920E(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 3);
				uParam1->f_4 = 1;
			}
		}
		else if (func_52(uParam2->f_31, 0, 0))
		{
			if (func_28(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 2, 0, 1))
			{
				unk_0x797F9C5E661D920E(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 2);
				uParam1->f_4 = 1;
			}
		}
		else if ((((((func_57(uParam2->f_31) || func_56(PLAYER::PLAYER_ID())) || func_51(PLAYER::PLAYER_ID())) || func_50(PLAYER::PLAYER_ID())) || func_21(PLAYER::PLAYER_ID())) || uParam0->f_803) || uParam0->f_804)
		{
			if (func_28(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
			{
				unk_0x797F9C5E661D920E(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
				uParam1->f_4 = 1;
			}
		}
		else if (func_19(PLAYER::PLAYER_ID()))
		{
			if (func_28(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 2, 0, 1))
			{
				unk_0x797F9C5E661D920E(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 2);
				uParam1->f_4 = 1;
			}
		}
	}
}

bool func_28(int iParam0, bool bParam1, bool bParam2)
{
	return func_29(2, iParam0, 1, bParam1, bParam2);
}

int func_29(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!GAMEPLAY::IS_BIT_SET(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_33(iParam0) - func_32(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_32(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_33(iParam0) - func_31(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_32(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_33(iParam0) - func_32(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[PLAYER::PLAYER_ID()] != 3)
		{
			iVar1 = (iVar1 - func_30(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_30(int iParam0)
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

int func_31(int iParam0)
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

int func_32(int iParam0, bool bParam1)
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

int func_33(int iParam0)
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

int func_34(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		NETWORK::_0xAAA553E7DD28A457(1);
	}
	if (func_19(PLAYER::PLAYER_ID()))
	{
		if (!func_49(Global_1590380))
		{
			AUDIO::SET_STATIC_EMITTER_ENABLED("se_xm_int_02_lounge_radio", iParam3);
		}
		if (func_46())
		{
			AUDIO::SET_STATIC_EMITTER_ENABLED("se_xm_int_02_bedroom_radio", iParam3);
		}
	}
	if (func_60(uParam2->f_31) && !uParam1->f_49)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_5))
		{
			if (func_45(1729911864))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					if (func_44(PLAYER::PLAYER_ID(), 0) >= 0)
					{
						func_42(func_44(PLAYER::PLAYER_ID(), 0), 421, &Var0, 0);
						uParam1->f_9 = { Var0 };
						uParam1->f_5 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(1729911864, uParam1->f_9, 1, 1, 0));
						AUDIO::SET_STATIC_EMITTER_ENABLED("SE_DLC_APT_Yacht_Bar", iParam3);
						unk_0x651D3228960D08AF("SE_DLC_APT_Yacht_Bar", NETWORK::NET_TO_ENT(uParam1->f_5));
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_5), 1);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_5), true);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(uParam1->f_5), false, 0);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam1->f_5), false, 0);
						NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_5), 1);
					}
				}
			}
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_6))
		{
			if (func_45(1729911864))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					if (func_44(PLAYER::PLAYER_ID(), 0) >= 0)
					{
						func_42(func_44(PLAYER::PLAYER_ID(), 0), 420, &Var6, 0);
						uParam1->f_12 = { Var6 };
						uParam1->f_6 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(1729911864, uParam1->f_12, 1, 1, 0));
						AUDIO::SET_STATIC_EMITTER_ENABLED("SE_DLC_APT_Yacht_Bedroom", iParam3);
						unk_0x651D3228960D08AF("SE_DLC_APT_Yacht_Bedroom", NETWORK::NET_TO_ENT(uParam1->f_6));
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_6), 1);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_6), true);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(uParam1->f_6), false, 0);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam1->f_6), false, 0);
						NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_6), 1);
					}
				}
			}
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_7))
		{
			if (func_45(1729911864))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					if (func_44(PLAYER::PLAYER_ID(), 0) >= 0)
					{
						func_42(func_44(PLAYER::PLAYER_ID(), 0), 586, &Var12, 0);
						uParam1->f_15 = { Var12 };
						uParam1->f_7 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(1729911864, uParam1->f_15, 1, 1, 0));
						AUDIO::SET_STATIC_EMITTER_ENABLED("SE_DLC_APT_Yacht_Bedroom_02", iParam3);
						unk_0x651D3228960D08AF("SE_DLC_APT_Yacht_Bedroom_02", NETWORK::NET_TO_ENT(uParam1->f_7));
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_7), 1);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_7), true);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(uParam1->f_7), false, 0);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam1->f_7), false, 0);
						NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_7), 1);
					}
				}
			}
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_8))
		{
			if (func_45(1729911864))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					if (func_44(PLAYER::PLAYER_ID(), 0) >= 0)
					{
						func_42(func_44(PLAYER::PLAYER_ID(), 0), 585, &Var18, 0);
						uParam1->f_18 = { Var18 };
						uParam1->f_8 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(1729911864, uParam1->f_18, 1, 1, 0));
						AUDIO::SET_STATIC_EMITTER_ENABLED("SE_DLC_APT_Yacht_Bedroom_03", iParam3);
						unk_0x651D3228960D08AF("SE_DLC_APT_Yacht_Bedroom_03", NETWORK::NET_TO_ENT(uParam1->f_8));
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_8), 1);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_8), true);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(uParam1->f_8), false, 0);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam1->f_8), false, 0);
						NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_8), 1);
					}
				}
			}
		}
	}
	else if (uParam1->f_49)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_24))
		{
			if (func_45(1729911864))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					func_42(uParam1->f_3, 550, &Var24, 0);
					uParam1->f_37 = { Var24 };
					uParam1->f_24 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(1729911864, uParam1->f_37, 1, 1, 0));
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(uParam1->f_24), Var24.f_3, 2, 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_DLC_APT_Yacht_Exterior_01", iParam3);
					unk_0x651D3228960D08AF("SE_DLC_APT_Yacht_Exterior_01", NETWORK::NET_TO_ENT(uParam1->f_24));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_24), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_24), true);
					NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_24), 1);
				}
			}
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_25))
		{
			if (func_45(1729911864))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					func_42(uParam1->f_3, 551, &Var30, 0);
					uParam1->f_40 = { Var30 };
					uParam1->f_25 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(1729911864, uParam1->f_40, 1, 1, 0));
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_DLC_APT_Yacht_Exterior_02", iParam3);
					unk_0x651D3228960D08AF("SE_DLC_APT_Yacht_Exterior_02", NETWORK::NET_TO_ENT(uParam1->f_25));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_25), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_25), true);
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(uParam1->f_25), false, 0);
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam1->f_25), false, 0);
					NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_25), 1);
				}
			}
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_26))
		{
			if (func_45(1729911864))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					func_42(uParam1->f_3, 552, &Var36, 0);
					uParam1->f_43 = { Var36 };
					uParam1->f_26 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(1729911864, uParam1->f_43, 1, 1, 0));
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(uParam1->f_26), Var36.f_3, 2, 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_DLC_APT_Yacht_Exterior_03", iParam3);
					unk_0x651D3228960D08AF("SE_DLC_APT_Yacht_Exterior_03", NETWORK::NET_TO_ENT(uParam1->f_26));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_26), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_26), true);
					NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_26), 1);
				}
			}
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_27))
		{
			if (func_45(1729911864))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					func_42(uParam1->f_3, 553, &Var42, 0);
					uParam1->f_46 = { Var42 };
					uParam1->f_27 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(1729911864, uParam1->f_46, 1, 1, 0));
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(uParam1->f_27), Var42.f_3, 2, 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_DLC_APT_Yacht_Exterior_04", iParam3);
					unk_0x651D3228960D08AF("SE_DLC_APT_Yacht_Exterior_04", NETWORK::NET_TO_ENT(uParam1->f_27));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_27), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_27), true);
					NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_27), 1);
				}
			}
		}
	}
	else if (func_59(uParam2->f_31, -1) || func_58(uParam2->f_31))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_22))
		{
			if (func_45(1729911864))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					func_36(uParam2->f_31, 474, &Var48, func_41(uParam2->f_31), 0);
					uParam1->f_34 = { Var48 };
					uParam1->f_22 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(1729911864, uParam1->f_34, 1, 1, 0));
					AUDIO::SET_STATIC_EMITTER_ENABLED(func_35(uParam0, uParam2->f_31, 1, 0, 0, 0, 0, 0, 0), iParam3);
					unk_0x651D3228960D08AF(func_35(uParam0, uParam2->f_31, 1, 0, 0, 0, 0, 0, 0), NETWORK::NET_TO_ENT(uParam1->f_22));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_22), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_22), true);
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(uParam1->f_22), false, 0);
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam1->f_22), false, 0);
					NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_22), 1);
				}
			}
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_21))
		{
			if (func_45(1729911864))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					func_36(uParam2->f_31, 473, &Var54, func_41(uParam2->f_31), 0);
					uParam1->f_31 = { Var54 };
					uParam1->f_21 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(1729911864, uParam1->f_31, 1, 1, 0));
					AUDIO::SET_STATIC_EMITTER_ENABLED(func_35(uParam0, uParam2->f_31, 2, 0, 0, 0, 0, 0, 0), iParam3);
					unk_0x651D3228960D08AF(func_35(uParam0, uParam2->f_31, 2, 0, 0, 0, 0, 0, 0), NETWORK::NET_TO_ENT(uParam1->f_21));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_21), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_21), true);
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(uParam1->f_21), false, 0);
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam1->f_21), false, 0);
					NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_21), 1);
				}
			}
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_23))
		{
			if (func_45(1729911864))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					func_36(uParam2->f_31, 475, &Var60, func_41(uParam2->f_31), 0);
					uParam1->f_28 = { Var60 };
					uParam1->f_23 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(1729911864, uParam1->f_28, 1, 1, 0));
					AUDIO::SET_STATIC_EMITTER_ENABLED(func_35(uParam0, uParam2->f_31, 3, 0, 0, 0, 0, 0, 0), iParam3);
					unk_0x651D3228960D08AF(func_35(uParam0, uParam2->f_31, 3, 0, 0, 0, 0, 0, 0), NETWORK::NET_TO_ENT(uParam1->f_23));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_23), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_23), true);
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(uParam1->f_23), false, 0);
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam1->f_23), false, 0);
					NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_23), 1);
				}
			}
		}
	}
	else if (func_57(uParam2->f_31))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_22))
		{
			if (func_45(1729911864))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					func_36(uParam2->f_31, 474, &Var66, func_41(uParam2->f_31), 0);
					uParam1->f_34 = { Var66 };
					uParam1->f_22 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(1729911864, uParam1->f_34, 1, 1, 0));
					AUDIO::SET_STATIC_EMITTER_ENABLED(func_35(uParam0, uParam2->f_31, 1, 0, 0, 0, 0, 0, 0), iParam3);
					unk_0x651D3228960D08AF(func_35(uParam0, uParam2->f_31, 1, 0, 0, 0, 0, 0, 0), NETWORK::NET_TO_ENT(uParam1->f_22));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_22), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_22), true);
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(uParam1->f_22), false, 0);
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam1->f_22), false, 0);
					NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_22), 1);
				}
			}
		}
	}
	else if (func_52(uParam2->f_31, 0, 0))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_22))
		{
			if (func_45(1729911864))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					func_36(uParam2->f_31, 474, &Var72, func_41(uParam2->f_31), 0);
					uParam1->f_34 = { Var72 };
					uParam1->f_22 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(1729911864, uParam1->f_34, 1, 1, 0));
					AUDIO::SET_STATIC_EMITTER_ENABLED(func_35(uParam0, uParam2->f_31, 4, 0, 0, 0, 0, 0, 0), iParam3);
					unk_0x651D3228960D08AF(func_35(uParam0, uParam2->f_31, 4, 0, 0, 0, 0, 0, 0), NETWORK::NET_TO_ENT(uParam1->f_22));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_22), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_22), true);
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(uParam1->f_22), false, 0);
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam1->f_22), false, 0);
					NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_22), 1);
				}
			}
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_21))
		{
			if (func_45(1729911864))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					func_36(uParam2->f_31, 473, &Var78, func_41(uParam2->f_31), 1);
					uParam1->f_31 = { Var78 };
					uParam1->f_21 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(1729911864, uParam1->f_31, 1, 1, 0));
					AUDIO::SET_STATIC_EMITTER_ENABLED(func_35(uParam0, uParam2->f_31, 5, 0, 0, 0, 0, 0, 0), iParam3);
					unk_0x651D3228960D08AF(func_35(uParam0, uParam2->f_31, 5, 0, 0, 0, 0, 0, 0), NETWORK::NET_TO_ENT(uParam1->f_21));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_21), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_21), true);
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(uParam1->f_21), false, 0);
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam1->f_21), false, 0);
					NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_21), 1);
				}
			}
		}
	}
	else if (func_56(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_22))
		{
			if (func_45(1729911864))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					if (uParam1->f_53 == 111)
					{
						uParam1->f_34 = { 995.6363f, -3098.016f, -38.3565f };
					}
					else if (uParam1->f_53 == 42)
					{
						uParam1->f_34 = { 1048.328f, -3100.148f, -38.3521f };
					}
					else if (uParam1->f_53 == 16)
					{
						uParam1->f_34 = { 1087.526f, -3100.677f, -38.4417f };
					}
					uParam1->f_22 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(1729911864, uParam1->f_34, 1, 1, 0));
					AUDIO::SET_STATIC_EMITTER_ENABLED(func_35(uParam0, uParam2->f_31, 1, 1, uParam1->f_53, 0, 0, 0, 0), iParam3);
					unk_0x651D3228960D08AF(func_35(uParam0, uParam2->f_31, 1, 1, uParam1->f_53, 0, 0, 0, 0), NETWORK::NET_TO_ENT(uParam1->f_22));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_22), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_22), true);
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(uParam1->f_22), false, 0);
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam1->f_22), false, 0);
					NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_22), 1);
				}
			}
		}
	}
	else if (func_51(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_22))
		{
			if (func_45(2057223314))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					if (uParam1->f_54 == 3)
					{
						uParam1->f_34 = { 1001.94f, -3193.765f, -39.106f };
						fVar84 = 0f;
					}
					else if (uParam1->f_54 == 1)
					{
						uParam1->f_34 = { 1030.66f, -3204.52f, -38.2192f };
						fVar84 = 75.52f;
					}
					else if (uParam1->f_54 == 4)
					{
						uParam1->f_34 = { 1086.06f, -3195.56f, -39.11f };
						fVar84 = 90f;
					}
					else if (uParam1->f_54 == 2)
					{
						uParam1->f_34 = { 1130.093f, -3193.262f, -40.4976f };
						fVar84 = 0f;
					}
					else if (uParam1->f_54 == 0)
					{
						uParam1->f_34 = { 1156.18f, -3196.333f, -38.0976f };
						fVar84 = 90f;
					}
					uParam1->f_22 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(2057223314, uParam1->f_34, 1, 1, 0));
					AUDIO::SET_STATIC_EMITTER_ENABLED(func_35(uParam0, uParam2->f_31, 1, 0, 0, 1, uParam1->f_54, 0, 0), iParam3);
					unk_0x651D3228960D08AF(func_35(uParam0, uParam2->f_31, 1, 0, 0, 1, uParam1->f_54, 0, 0), NETWORK::NET_TO_ENT(uParam1->f_22));
					ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_ENT(uParam1->f_22), fVar84);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_22), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_22), true);
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam1->f_22), true, 0);
					NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_22), 1);
				}
			}
		}
	}
	else if (func_50(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_22))
		{
			if (func_45(1729911864))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					uParam1->f_34 = { 965.5109f, -2991.265f, -39.7606f };
					uParam1->f_22 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(1729911864, uParam1->f_34, 1, 1, 0));
					AUDIO::SET_STATIC_EMITTER_ENABLED(func_35(uParam0, uParam2->f_31, 1, 0, 0, 0, uParam1->f_54, 1, 0), iParam3);
					unk_0x651D3228960D08AF(func_35(uParam0, uParam2->f_31, 1, 0, 0, 0, uParam1->f_54, 1, 0), NETWORK::NET_TO_ENT(uParam1->f_22));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uParam1->f_22), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(uParam1->f_22), true);
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(uParam1->f_22), false, 0);
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam1->f_22), false, 0);
					NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_ENT(uParam1->f_22), 1);
				}
			}
		}
	}
	if (func_60(uParam2->f_31) && !uParam1->f_49)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_5) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_6))
		{
			return 1;
		}
	}
	else if (uParam1->f_49)
	{
		if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_25) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_26)) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_27)) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_24))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (func_59(uParam2->f_31, -1))
	{
		if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_23) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_21)) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_22))
		{
			return 1;
		}
	}
	else if (func_58(uParam2->f_31))
	{
		if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_23) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_21)) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_22))
		{
			return 1;
		}
	}
	else if (func_52(uParam2->f_31, 0, 0))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_22) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_21))
		{
			return 1;
		}
	}
	else if (((func_57(uParam2->f_31) || func_56(PLAYER::PLAYER_ID())) || func_51(PLAYER::PLAYER_ID())) || func_50(PLAYER::PLAYER_ID()))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_22))
		{
			return 1;
		}
	}
	return 0;
}

char* func_35(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8)
{
	sVar0 = "";
	if (bParam7)
	{
		sVar0 = "DLC_IE_Warehouse_Radio_01";
	}
	if (uParam0->f_803)
	{
		switch (iParam8)
		{
			case 0:
				return "se_vw_dlc_casino_apart_Apart_Default_Room_radio";
			
			case 1:
				return "se_vw_dlc_casino_apart_Apart_Lounge_Room_radio";
			}
		
		default:
	}
	if (uParam0->f_804)
	{
		switch (iParam8)
		{
			case 0:
				return "se_vw_dlc_casino_apart_Apart_Arcade_Room_radio";
			}
		
		default:
	}
	if (func_19(PLAYER::PLAYER_ID()))
	{
		switch (iParam8)
		{
			case 0:
				return "se_xm_int_02_bedroom_radio";
			
			case 1:
				return "se_xm_int_02_lounge_radio";
			}
		
		default:
	}
	if (func_21(PLAYER::PLAYER_ID()))
	{
		switch (iParam2)
		{
			case 1:
				switch (iParam8)
				{
					case 0:
						sVar0 = "SE_DLC_SM_Hangar_Radio_Living_Quarters_01";
						break;
					
					case 1:
						sVar0 = "SE_DLC_SM_Hangar_Radio_Living_Quarters_02";
						break;
				}
				break;
			
			case 2:
				switch (iParam8)
				{
					case 0:
						sVar0 = "SE_DLC_SM_Hangar_Radio_Office_01";
						break;
					
					case 1:
						sVar0 = "SE_DLC_SM_Hangar_Radio_Office_02";
						break;
					
					case 2:
						sVar0 = "SE_DLC_SM_Hangar_Radio_Office_03";
						break;
					
					case 3:
						sVar0 = "SE_DLC_SM_Hangar_Radio_Office_04";
						break;
				}
				break;
			
			case 3:
				switch (iParam8)
				{
					case 0:
						sVar0 = "SE_DLC_SM_Hangar_Radio_Mechanic";
						break;
				}
				break;
			}
	}
	if (bParam5)
	{
		if (iParam6 == 3)
		{
			sVar0 = "SE_DLC_Biker_Meth_Warehouse_Radio";
		}
		else if (iParam6 == 1)
		{
			sVar0 = "SE_DLC_Biker_Weed_Warehouse_Radio";
		}
		else if (iParam6 == 4)
		{
			sVar0 = "SE_DLC_Biker_Crack_Warehouse_Radio";
		}
		else if (iParam6 == 2)
		{
			sVar0 = "SE_DLC_Biker_Cash_Warehouse_Radio";
		}
		else if (iParam6 == 0)
		{
			sVar0 = "SE_DLC_Biker_FakeID_Warehouse_Radio";
		}
	}
	if (bParam3)
	{
		if (iParam4 == 16)
		{
			sVar0 = "SE_EXEC_WH_S_RADIO";
		}
		else if (iParam4 == 42)
		{
			sVar0 = "SE_EXEC_WH_M_RADIO";
		}
		else if (iParam4 == 111)
		{
			sVar0 = "SE_EXEC_WH_L_RADIO";
		}
	}
	switch (iParam2)
	{
		case 1:
			switch (func_41(iParam1))
			{
				case 77:
					sVar0 = "SE_DLC_APT_Stilts_A_Living_Room";
					break;
				
				case 73:
					sVar0 = "SE_DLC_APT_Stilts_B_Living_Room";
					break;
				
				case 83:
					sVar0 = "SE_DLC_APT_Custom_Living_Room";
					break;
				
				case 88:
					switch (Global_3934112)
					{
						case 1:
							sVar0 = "SE_ex_int_office_01a_Radio_01";
							break;
						
						case 2:
							sVar0 = "SE_ex_int_office_01b_Radio_01";
							break;
						
						case 3:
							sVar0 = "SE_ex_int_office_01c_Radio_01";
							break;
						
						case 4:
							sVar0 = "SE_ex_int_office_02a_Radio_01";
							break;
						
						case 5:
							sVar0 = "SE_ex_int_office_02b_Radio_01";
							break;
						
						case 6:
							sVar0 = "SE_ex_int_office_02c_Radio_01";
							break;
						
						case 7:
							sVar0 = "SE_ex_int_office_03a_Radio_01";
							break;
						
						case 8:
							sVar0 = "SE_ex_int_office_03b_Radio_01";
							break;
						
						case 9:
							sVar0 = "SE_ex_int_office_03c_Radio_01";
							break;
					}
					break;
			}
			break;
		
		case 2:
			switch (func_41(iParam1))
			{
				case 77:
					sVar0 = "SE_DLC_APT_Stilts_A_Bedroom";
					break;
				
				case 73:
					sVar0 = "SE_DLC_APT_Stilts_B_Bedroom";
					break;
				
				case 83:
					sVar0 = "SE_DLC_APT_Custom_Bedroom";
					break;
			}
			break;
		
		case 3:
			switch (func_41(iParam1))
			{
				case 77:
					sVar0 = "SE_DLC_APT_Stilts_A_Heist_Room";
					break;
				
				case 73:
					sVar0 = "SE_DLC_APT_Stilts_B_Heist_Room";
					break;
				
				case 83:
					sVar0 = "SE_DLC_APT_Custom_Heist_Room";
					break;
			}
			break;
		
		case 4:
			switch (func_41(iParam1))
			{
				case 109:
					sVar0 = "DLC_IE_Office_Garage_Radio_01";
					break;
			}
			break;
		
		case 5:
			switch (func_41(iParam1))
			{
				case 109:
					sVar0 = "DLC_IE_Office_Garage_Mod_Shop_Radio_01";
					break;
			}
			break;
	}
	return sVar0;
}

void func_36(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	Var0[0] = { func_40(iParam3, bParam4) };
	Var0[1] = { func_40(iParam0, bParam4) };
	*uParam2 = { func_38(iParam1, iParam3) };
	Var13 = { *uParam2 - Var0[0] };
	Var13 = { func_37(Var13, -Var0[0].f_3.f_2) };
	Var13 = { func_37(Var13, Var0[1].f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0[1], 0f, Var13) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
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
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
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
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
		case 688:
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 1013:
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_37(struct<3> Param0, float fParam3)
{
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.y * fVar3));
	Var0.y = ((Param0.x * fVar3) + (Param0.y * fVar4));
	Var0.z = Param0.z;
	return Var0;
}

struct<6> func_38(var uParam0, int iParam1)
{
	iVar23 = 0;
	if (func_39(iParam1, &uVar6))
	{
		iVar23 = 1;
	}
	if (iVar23 && GAMEPLAY::_0xB335F761606DB47C(&Var0, &(Var0.f_3), uParam0, uVar6))
	{
		return Var0;
	}
	return Var0;
}

int func_39(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_40(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 69:
		case 68:
		case 66:
		case 67:
			return 8;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 17;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 61;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			return 73;
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			return 77;
			break;
		
		case 83:
		case 84:
		case 85:
			return 83;
			break;
		
		case 86:
			return 86;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 88;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			return 91;
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 97;
			break;
		
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
			return 109;
			break;
	}
	return -1;
}

void func_42(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		Var0[0] = { func_43(-1) };
	}
	else
	{
		Var0[0] = { Global_4008564[iParam0].f_4 };
		Var0[0].f_3 = { 0f, 0f, Global_4008564[iParam0].f_7 };
	}
	if (!bParam3)
	{
		Var0[1] = { func_43(iParam0) };
	}
	else
	{
		Var0[1] = { Global_4008564[iParam0].f_4 };
		Var0[1].f_3 = { 0f, 0f, Global_4008564[iParam0].f_7 };
	}
	*uParam2 = { func_38(iParam1, 86) };
	Var13 = { *uParam2 - Var0[0] };
	Var13 = { func_37(Var13, -Var0[0].f_3.f_2) };
	Var13 = { func_37(Var13, Var0[1].f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0[1], 0f, Var13) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 560:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 343:
		case 349:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
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
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 201:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 311:
		case 340:
		case 391:
		case 392:
		case 393:
		case 394:
		case 395:
		case 396:
		case 397:
		case 398:
		case 399:
		case 400:
		case 401:
		case 402:
		case 403:
		case 404:
		case 405:
		case 406:
		case 407:
		case 408:
		case 409:
		case 410:
		case 411:
		case 412:
		case 413:
		case 414:
		case 415:
		case 416:
		case 417:
		case 418:
		case 419:
		case 438:
		case 439:
		case 440:
		case 441:
		case 442:
		case 443:
		case 357:
		case 358:
		case 359:
		case 467:
		case 468:
		case 469:
		case 497:
		case 498:
		case 499:
		case 503:
		case 598:
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 362:
		case 363:
		case 364:
		case 365:
		case 366:
		case 367:
		case 368:
		case 360:
		case 361:
		case 383:
		case 386:
		case 372:
		case 373:
		case 374:
		case 375:
		case 376:
		case 377:
		case 378:
		case 370:
		case 371:
		case 384:
		case 387:
		case 486:
		case 487:
		case 488:
		case 489:
		case 490:
		case 491:
		case 492:
		case 485:
		case 544:
		case 543:
		case 545:
		case 516:
		case 517:
		case 583:
		case 584:
		case 518:
		case 519:
		case 520:
		case 521:
		case 522:
		case 523:
		case 524:
		case 525:
		case 526:
		case 527:
		case 553:
		case 552:
		case 551:
		case 550:
		case 556:
		case 555:
		case 593:
		case 594:
		case 595:
		case 596:
		case 554:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 597:
		case 118:
		case 117:
		case 599:
		case 600:
		case 601:
		case 602:
		case 603:
		case 604:
		case 605:
		case 606:
		case 607:
		case 608:
		case 609:
		case 610:
		case 612:
		case 618:
		case 624:
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

struct<6> func_43(int iParam0)
{
	switch (iParam0)
	{
		case -1:
		case default:
			Var0 = { -1478.436f, -3753.538f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		
		case 0:
			Var0 = { -3555.115f, 1473.013f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		
		case 1:
			Var0 = { -3147.049f, 2827.088f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		
		case 2:
			Var0 = { -3277.473f, 2159.85f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		
		case 3:
			Var0 = { -2822.419f, 4054.84f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		
		case 4:
			Var0 = { -3249.849f, 3704.681f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 5:
			Var0 = { -2383.193f, 4685.003f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		
		case 6:
			Var0 = { -3224.686f, -215.9825f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		
		case 7:
			Var0 = { -3447.876f, 291.9275f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 97f };
			break;
		
		case 8:
			Var0 = { -2713.098f, -528.3185f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -33f };
			break;
		
		case 9:
			Var0 = { -1981.618f, -1537.269f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 142f };
			break;
		
		case 10:
			Var0 = { -2100.817f, -2533.233f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -143f };
			break;
		
		case 11:
			Var0 = { -1599.642f, -1891.277f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 112f };
			break;
		
		case 12:
			Var0 = { -733.6151f, -3916.985f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -168f };
			break;
		
		case 13:
			Var0 = { -363.3534f, -3568.56f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		
		case 14:
			Var0 = { -1478.436f, -3753.538f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		
		case 15:
			Var0 = { 1535.974f, -3061.877f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 62f };
			break;
		
		case 16:
			Var0 = { 2471.418f, -2430.93f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 12f };
			break;
		
		case 17:
			Var0 = { 2067.371f, -2813.01f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		
		case 18:
			Var0 = { 3021.088f, -1513.602f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		
		case 19:
			Var0 = { 3025.956f, -704.3854f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 20:
			Var0 = { 2961.863f, -2007.631f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		
		case 21:
			Var0 = { 3398.169f, 1958.521f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 77f };
			break;
		
		case 22:
			Var0 = { 3428.681f, 1202.06f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		
		case 23:
			Var0 = { 3787.83f, 2567.884f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		
		case 24:
			Var0 = { 4235.946f, 4004.252f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -118f };
			break;
		
		case 25:
			Var0 = { 4245.151f, 4595.375f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -68f };
			break;
		
		case 26:
			Var0 = { 4209.057f, 3392.705f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 27:
			Var0 = { 3738.81f, 5768.252f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -43f };
			break;
		
		case 28:
			Var0 = { 3472.966f, 6315.245f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -23f };
			break;
		
		case 29:
			Var0 = { 3693.468f, 5194.659f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 122f };
			break;
		
		case 30:
			Var0 = { 572.9806f, 7142.138f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -58f };
			break;
		
		case 31:
			Var0 = { 2024.036f, 6907.536f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -173f };
			break;
		
		case 32:
			Var0 = { 1377.296f, 6863.23f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		
		case 33:
			Var0 = { -1169.36f, 6000.214f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		
		case 34:
			Var0 = { -759.2205f, 6573.955f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -153f };
			break;
		
		case 35:
			Var0 = { -373.8432f, 6964.86f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -108f };
			break;
		
		case 36:
			Var0 = { 3634.999f, -4781.017f, 9.7065f };
			Var0.f_3 = { 0f, 0f, -179.95f };
			break;
	}
	return Var0;
}

int func_44(int iParam0, bool bParam1)
{
	if (func_1094(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			return Global_2425662[iParam0].f_261.f_14;
		}
		else
		{
			return Global_2425662[iParam0].f_261.f_16;
		}
	}
	return -1;
}

bool func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_46()
{
	return (func_48(Global_1590380) || func_47(Global_1590380));
}

bool func_47(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_271.f_1, 2);
}

bool func_48(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_271.f_1, 1);
}

bool func_49(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_271.f_1, 24);
}

int func_50(int iParam0)
{
	if (iParam0 != func_247())
	{
		if (func_1094(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_51(int iParam0)
{
	if (iParam0 != func_247())
	{
		if (func_1094(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_52(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_53(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_53(PLAYER::PLAYER_ID(), 0))
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

bool func_53(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_247())
	{
		if (!func_55(Global_1590373))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590373)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2425662[Global_1590373].f_195, 24) || func_54(Global_1590373))
				{
					return 1;
				}
			}
		}
	}
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 24);
}

int func_54(int iParam0)
{
	if (iParam0 != func_247())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 9);
	}
	return 0;
}

int func_55(int iParam0)
{
	if (iParam0 != func_247())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 2);
	}
	return 0;
}

int func_56(int iParam0)
{
	if (iParam0 != func_247())
	{
		if (func_1094(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_57(int iParam0)
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

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
		case 85:
			return 1;
			break;
	}
	return 0;
}

int func_59(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 73:
			case 77:
			case 74:
			case 75:
			case 76:
			case 78:
			case 79:
			case 80:
			case 81:
			case 82:
				return 1;
			
			default:
		}
	}
	else if (iParam1 == 77)
	{
		switch (iParam0)
		{
			case 77:
			case 78:
			case 79:
			case 80:
			case 81:
			case 82:
				return 1;
			
			default:
		}
	}
	else if (iParam1 == 73)
	{
		switch (iParam0)
		{
			case 73:
			case 74:
			case 75:
			case 76:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 1;
			break;
	}
	return 0;
}

void func_61(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		uParam0->f_51 = iParam1;
	}
	else
	{
		uParam0->f_50 = iParam1;
	}
}

void func_62(bool bParam0)
{
	if (bParam0)
	{
		iLocal_159 = 0;
		if (Global_3932160.f_31 != 86)
		{
			iLocal_159 = Global_3932160.f_31;
			Global_3932160.f_31 = 86;
		}
	}
	else if (iLocal_159 != 86 && iLocal_159 > 0)
	{
		Global_3932160.f_31 = iLocal_159;
	}
}

void func_63()
{
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iLocal_1834);
	if (func_1094(iVar0, 0, 1))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_2313[iLocal_1834], 1))
		{
			iLocal_1839 = 1;
		}
	}
	iLocal_1834++;
	if (iLocal_1834 >= 32)
	{
		iLocal_1834 = 0;
		if (iLocal_1839)
		{
			func_1171(&uLocal_1837, 1, 0);
			iLocal_1839 = 0;
		}
		else
		{
			func_1097(&uLocal_1837);
			if (Local_1879.f_399)
			{
				Local_1879.f_399 = 0;
			}
		}
	}
	if (func_1099(&uLocal_1837))
	{
		if (func_1098(&uLocal_1837, 5000, 1))
		{
			if (!Local_1879.f_399)
			{
				Local_1879.f_399 = 1;
			}
		}
	}
}

int func_64()
{
	if (!func_817())
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_1056, 2))
		{
			func_75();
			func_861();
			func_74();
			GAMEPLAY::SET_BIT(&iLocal_1056, 2);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_1056, 2))
		{
			if (func_65())
			{
				return 1;
			}
		}
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_65()
{
	if (iLocal_1029 == 1)
	{
		if (func_67())
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
		func_66();
	}
	return 0;
}

void func_66()
{
	if (iLocal_1029 == 0)
	{
		if (func_28((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + iLocal_1030), 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + iLocal_1030));
			iLocal_1029 = 1;
		}
	}
}

int func_67()
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (Local_1879.f_199[iVar0].f_1 == 1)
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1879.f_199[iVar0].f_3))
			{
				STREAMING::REQUEST_ANIM_DICT(func_71(iVar0, 0));
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_71(iVar0, 0)))
				{
					if (func_45(350726832))
					{
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::_0xAAA553E7DD28A457(1);
							}
							Local_1879.f_199[iVar0].f_6 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_71(iVar0, 0), "idle_d_prop_cigar", func_70(iVar0, &uLocal_1058), func_69(iVar0, &uLocal_1058), 0, 2) };
							Local_1879.f_199[iVar0].f_9 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_71(iVar0, 0), "idle_d_prop_cigar", func_70(iVar0, &uLocal_1058), func_69(iVar0, &uLocal_1058), 0, 2) };
							func_68(&(Local_1879.f_199[iVar0].f_3), 350726832, Local_1879.f_199[iVar0].f_6, 1, 1, 0, 1, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_1879.f_199[iVar0].f_3), Local_1879.f_199[iVar0].f_9, 2, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_1879.f_199[iVar0].f_3), 1);
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_1879.f_199[iVar0].f_3), true);
							ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_1879.f_199[iVar0].f_3), false, 0);
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::_0xAAA553E7DD28A457(0);
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1879.f_199[iVar0].f_4))
			{
				STREAMING::REQUEST_ANIM_DICT(func_71(iVar0, 0));
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_71(iVar0, 0)))
				{
					if (func_45(1195632828))
					{
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::_0xAAA553E7DD28A457(1);
							}
							Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_71(iVar0, 0), "idle_d_prop_ashtray", func_70(iVar0, &uLocal_1058), func_69(iVar0, &uLocal_1058), 0, 2) };
							Var4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_71(iVar0, 0), "idle_d_prop_ashtray", func_70(iVar0, &uLocal_1058), func_69(iVar0, &uLocal_1058), 0, 2) };
							func_68(&(Local_1879.f_199[iVar0].f_4), 1195632828, Var1, 1, 1, 0, 1, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_1879.f_199[iVar0].f_4), Var4, 2, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_1879.f_199[iVar0].f_4), 1);
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_1879.f_199[iVar0].f_4), true);
							ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_1879.f_199[iVar0].f_4), false, 0);
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::_0xAAA553E7DD28A457(0);
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
		if (Local_1879.f_199[iVar0].f_2 == 1)
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1879.f_199[iVar0].f_5))
			{
				STREAMING::REQUEST_ANIM_DICT(func_71(iVar0, 0));
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_71(iVar0, 0)))
				{
					if (func_45(-509544655))
					{
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::_0xAAA553E7DD28A457(1);
							}
							Local_1879.f_199[iVar0].f_12 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_71(iVar0, 0), "idle_e_prop_cup", func_70(iVar0, &uLocal_1058), func_69(iVar0, &uLocal_1058), 0, 2) };
							Local_1879.f_199[iVar0].f_15 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_71(iVar0, 0), "idle_e_prop_cup", func_70(iVar0, &uLocal_1058), func_69(iVar0, &uLocal_1058), 0, 2) };
							func_68(&(Local_1879.f_199[iVar0].f_5), -509544655, Local_1879.f_199[iVar0].f_12, 1, 1, 0, 1, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_1879.f_199[iVar0].f_5), Local_1879.f_199[iVar0].f_15, 2, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_1879.f_199[iVar0].f_5), 1);
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_1879.f_199[iVar0].f_5), true);
							ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_1879.f_199[iVar0].f_5), false, 0);
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::_0xAAA553E7DD28A457(0);
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (Local_1879.f_199[iVar0].f_1 == 1)
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1879.f_199[iVar0].f_3) || !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1879.f_199[iVar0].f_4))
			{
				return 0;
			}
		}
		if (Local_1879.f_199[iVar0].f_2 == 1)
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1879.f_199[iVar0].f_5))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_68(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)
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

Vector3 func_69(int iParam0, var uParam1)
{
	if (iParam0 > -1 && iParam0 < 8)
	{
		return uParam1[iParam0]->f_3;
	}
	return 0f, 0f, 0f;
}

Vector3 func_70(int iParam0, var uParam1)
{
	if (iParam0 > -1 && iParam0 < 8)
	{
		return *uParam1[iParam0];
	}
	return 0f, 0f, 0f;
}

char* func_71(int iParam0, bool bParam1)
{
	if (iParam0 <= 5)
	{
		sVar0 = func_73(Local_2538[iParam0], bParam1);
	}
	else
	{
		sVar0 = func_72(Local_2538[iParam0], bParam1);
	}
	return sVar0;
}

char* func_72(int iParam0, int iParam1)
{
	sVar0 = "";
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "anim@amb@yacht@jacuzzi@standing@male@variation_01@";
				break;
			
			case 1:
				sVar0 = "anim@amb@yacht@jacuzzi@standing@male@variation_02@";
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "anim@amb@yacht@jacuzzi@standing@female@variation_01@";
				break;
			
			case 1:
				sVar0 = "anim@amb@yacht@jacuzzi@standing@female@variation_02@";
				break;
			}
	}
	return sVar0;
}

char* func_73(int iParam0, int iParam1)
{
	sVar0 = "";
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "anim@amb@yacht@jacuzzi@seated@male@variation_01@";
				break;
			
			case 1:
				sVar0 = "anim@amb@yacht@jacuzzi@seated@male@variation_02@";
				break;
			
			case 2:
				sVar0 = "anim@amb@yacht@jacuzzi@seated@male@variation_03@";
				break;
			
			case 3:
				sVar0 = "anim@amb@yacht@jacuzzi@seated@male@variation_04@";
				break;
			
			case 4:
				sVar0 = "anim@amb@yacht@jacuzzi@seated@male@variation_05@";
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "anim@amb@yacht@jacuzzi@seated@female@variation_01@";
				break;
			
			case 1:
				sVar0 = "anim@amb@yacht@jacuzzi@seated@female@variation_02@";
				break;
			
			case 2:
				sVar0 = "anim@amb@yacht@jacuzzi@seated@female@variation_03@";
				break;
			
			case 3:
				sVar0 = "anim@amb@yacht@jacuzzi@seated@female@variation_04@";
				break;
			
			case 4:
				sVar0 = "anim@amb@yacht@jacuzzi@seated@female@variation_05@";
				break;
			}
	}
	return sVar0;
}

void func_74()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_2538[iVar0] = Local_1879.f_199[iVar0];
		iVar0++;
	}
}

void func_75()
{
	iVar0[0] = 0;
	iVar0[1] = 1;
	iVar0[2] = 2;
	iVar0[3] = 0;
	iVar0[4] = 1;
	iVar0[5] = 2;
	iVar9 = 5;
	while (iVar9 != 0)
	{
		if (iVar9 != 0)
		{
			iVar10 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar9 + 1);
			iVar11 = iVar0[iVar10];
			iVar0[iVar10] = iVar0[iVar9];
			iVar0[iVar9] = iVar11;
		}
		iVar9 = (iVar9 - 1);
	}
	iVar0[6] = 0;
	iVar0[7] = 1;
	iVar9 = 0;
	while (iVar9 <= 7)
	{
		Local_1879.f_199[iVar9] = iVar0[iVar9];
		iVar9++;
	}
	iVar12 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(2, 3);
	iLocal_1030 = iVar12 * 2;
	iVar13 = 0;
	iVar13 = 0;
	while (iVar13 < iVar12)
	{
		iVar14 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 8);
		while (Local_1879.f_199[iVar14].f_1 == 1)
		{
			iVar14 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 8);
		}
		if (iVar14 < 6)
		{
			while (iVar0[iVar14] == 0)
			{
				iVar14 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6);
			}
		}
		Local_1879.f_199[iVar14].f_1 = 1;
		iVar13++;
	}
	iVar15 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 3);
	iLocal_1030 = (iLocal_1030 + iVar15);
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 < iVar15)
	{
		iVar17 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6);
		while (Local_1879.f_199[iVar17].f_1 == 1 || iVar0[iVar17] == 0)
		{
			iVar17 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6);
		}
		Local_1879.f_199[iVar17].f_2 = 1;
		iVar16++;
	}
	iVar16 = 0;
	while (iVar16 < 32)
	{
		Local_1879.f_400[iVar16] = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6);
		iVar16++;
	}
}

void func_76(var uParam0, var uParam1, int iParam2)
{
	if (*uParam0 > 0)
	{
		if ((*uParam1)[*uParam0] == 0)
		{
			if (func_1094(PLAYER::INT_TO_PLAYERINDEX(*iParam2), 1, 1))
			{
				GAMEPLAY::SET_BIT(uParam1[*uParam0], *iParam2);
			}
		}
	}
	iParam2->f_1 = 0;
	iParam2->f_1 = 0;
	while (iParam2->f_1 < 197)
	{
		if ((*uParam1)[iParam2->f_1] != 0)
		{
			if (GAMEPLAY::IS_BIT_SET((*uParam1)[iParam2->f_1], *iParam2))
			{
				if (!func_1094(PLAYER::INT_TO_PLAYERINDEX(*iParam2), 0, 1))
				{
					GAMEPLAY::CLEAR_BIT(uParam1[iParam2->f_1], *iParam2);
				}
				else
				{
					if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::INT_TO_PLAYERINDEX(*iParam2)))
					{
						GAMEPLAY::CLEAR_BIT(uParam1[iParam2->f_1], *iParam2);
					}
					if (*uParam0 != iParam2->f_1)
					{
						GAMEPLAY::CLEAR_BIT(uParam1[iParam2->f_1], *iParam2);
					}
				}
			}
		}
		iParam2->f_1++;
	}
	*iParam2++;
	if (*iParam2 >= 32)
	{
		*iParam2 = 0;
	}
}

void func_77()
{
	if (func_92(&uLocal_1832, 1600, 0))
	{
		GAMEPLAY::SET_BIT(&iLocal_1750, 1);
		func_78(func_91(iLocal_1751));
		uLocal_1754 = NETWORK::GET_NETWORK_TIME();
		GAMEPLAY::CLEAR_BIT(&iLocal_1750, 4);
		iLocal_1831 = 0;
	}
}

void func_78(int iParam0)
{
	Global_2405072.f_2847 = func_89();
	Global_2405072.f_2848 = iParam0;
	Var0 = { func_88(iParam0) };
	func_84(Var0);
	iVar3 = func_82(Var0, 0);
	if (iVar3 != 36)
	{
		func_79(10018, iVar3 + 1, -1, 1, 0);
	}
	Global_2425662[PLAYER::PLAYER_ID()].f_261.f_5 = 1;
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_80(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_80(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_81();
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

int func_81()
{
	return Global_1312745;
}

int func_82(struct<3> Param0, int iParam3)
{
	iVar0 = 36;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iVar0 = 37;
	}
	fVar1 = 999999.9f;
	iVar2 = -1;
	iVar4 = 0;
	while (iVar4 < iVar0)
	{
		if (func_1071(iVar4) || iParam3 == 0)
		{
			fVar3 = SYSTEM::VDIST(func_83(iVar4), Param0);
			if (fVar3 < fVar1)
			{
				iVar2 = iVar4;
				fVar1 = fVar3;
			}
		}
		iVar4++;
	}
	return iVar2;
}

Vector3 func_83(int iParam0)
{
	return Global_4008564[iParam0].f_4;
}

void func_84(struct<3> Param0)
{
	Var0.x = 330919319;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 27, func_85(1, 1));
}

int func_85(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_1094(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_86(iVar2, 0))
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_86(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_87(-1, 0) == 8;
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

int func_87(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_81();
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

Vector3 func_88(int iParam0)
{
	return Global_4010471[iParam0];
}

int func_89()
{
	return func_90(PLAYER::PLAYER_ID());
}

int func_90(int iParam0)
{
	return Global_2420771[iParam0];
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 3;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 5;
			break;
		
		case 5:
			return 6;
			break;
		
		case 6:
			return 7;
			break;
		
		case 7:
			return 8;
			break;
		
		case 8:
			return 9;
			break;
		
		case 9:
			return 10;
			break;
		
		case 10:
			return 11;
			break;
		
		case 11:
			return 12;
			break;
	}
	return 0;
}

int func_92(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_1171(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_1097(uParam0);
			return 1;
		}
	}
	else if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_1097(uParam0);
		return 1;
	}
	return 0;
}

void func_93()
{
	func_103();
	if (func_101(iLocal_1642))
	{
		func_94();
	}
}

void func_94()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_1056, 8))
	{
		if (Local_1034.f_12 == -1)
		{
			Local_1034.f_12 = AUDIO::GET_SOUND_ID();
		}
		if (Local_1034.f_14 == -1)
		{
			Local_1034.f_14 = AUDIO::GET_SOUND_ID();
		}
	}
	else
	{
		if (Local_1034.f_12 != -1)
		{
			AUDIO::RELEASE_SOUND_ID(Local_1034.f_12);
			Local_1034.f_12 = -1;
		}
		if (Local_1034.f_14 != -1)
		{
			AUDIO::RELEASE_SOUND_ID(Local_1034.f_14);
			Local_1034.f_14 = -1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1056, 7))
	{
		fVar0 = 0f;
		fVar2 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (fVar2 > 0f)
		{
			Var7 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 14201)) };
			fVar10 = (fLocal_993 - Local_1011.z);
			fVar1 = func_100(0f, GAMEPLAY::ABSF((fLocal_993 - Var7.z)));
			fVar3 = (fVar1 / fVar10);
			fVar0 = func_99(1f, ((fVar3 + (fVar2 * 0.5f)) * 0.5f));
		}
		if (fVar2 > 0.1f && fVar0 > 0f)
		{
			Var11 = { Var4.x, Var4.y, fLocal_993 };
			func_98(&Var11);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(Local_1034.f_6, Var11, 0f, 0f, 0f);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_1034.f_6, "size", fVar0, 1);
		}
		else
		{
			func_97();
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_1034, 3))
		{
			GAMEPLAY::SET_BIT(&Local_1034, 3);
		}
		bVar18 = false;
		iVar19[0] = 14201;
		iVar19[1] = 52301;
		iVar19[2] = 61163;
		iVar19[3] = 28252;
		iVar19[4] = 0;
		iVar19[5] = 31086;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			Var15 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), iVar19[iVar14])) };
			if (Var15.z <= fLocal_993)
			{
				bVar18 = true;
			}
			else
			{
				iVar14++;
			}
		}
		if (bVar18)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_1034, 4))
			{
				Var26 = { ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()) };
				fVar29 = GAMEPLAY::ABSF(Var26.z);
				if (fVar29 > 5.5f)
				{
					Local_1034.f_11 = 3;
				}
				else if (fVar29 > 4f)
				{
					Local_1034.f_11 = 2;
				}
				else if (fVar29 > 2f)
				{
					Local_1034.f_11 = 1;
				}
				else if (fVar29 > 0.5f)
				{
					Local_1034.f_11 = 0;
				}
				else
				{
					Local_1034.f_11 = -1;
				}
				GAMEPLAY::SET_BIT(&Local_1034, 4);
				GAMEPLAY::SET_BIT(&Local_1034, 7);
			}
			else
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_1034, 5) && AUDIO::HAS_SOUND_FINISHED(Local_1034.f_12))
				{
					fVar30 = (Var4.z - Local_1034.f_15.f_2);
					if (fVar30 < -0.04f)
					{
						Local_1034.f_11 = 0;
						if (fVar30 < -0.06f)
						{
							Local_1034.f_11 = 1;
						}
						GAMEPLAY::SET_BIT(&Local_1034, 7);
					}
				}
				if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_1034, 8))
					{
						AUDIO::STOP_SOUND(Local_1034.f_14);
						AUDIO::PLAY_SOUND_FROM_ENTITY(Local_1034.f_14, "ExitWater", PLAYER::PLAYER_PED_ID(), "GTAO_Hot_Tub_PED_INSIDE_WATER", 1, 0);
						GAMEPLAY::SET_BIT(&Local_1034, 8);
					}
				}
			}
		}
		Local_1034.f_15 = { Var4 };
		if (GAMEPLAY::IS_BIT_SET(Local_1034, 7))
		{
			GAMEPLAY::SET_BIT(&Local_1034, 6);
			AUDIO::STOP_SOUND(Local_1034.f_12);
			sVar31 = "";
			switch (Local_1034.f_11)
			{
				case 0:
					sVar31 = "FallingInWaterSmall";
					break;
				
				case 1:
					sVar31 = "FallingInWaterMedium";
					break;
				
				case 2:
					sVar31 = "FallingInWaterHeavy";
					break;
				
				case 3:
					sVar31 = "DiveInWater";
					break;
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_1034.f_12, sVar31, PLAYER::PLAYER_PED_ID(), "PED_INSIDE_WATER", 1, 0);
			GAMEPLAY::CLEAR_BIT(&Local_1034, 7);
		}
		if ((GAMEPLAY::IS_BIT_SET(Local_1034, 6) && !GAMEPLAY::IS_BIT_SET(Local_1034, 5)) && Local_1034.f_11 > 0)
		{
			if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_apartment_mp"))
			{
				Var32 = { Var4 };
				Var32.z = (fLocal_993 + 0.1f);
				fVar35 = 1f;
				switch (Local_1034.f_11)
				{
					case 1:
						fVar35 = 1.25f;
						break;
					
					case 2:
						fVar35 = 1.66f;
						break;
					
					case 3:
						fVar35 = 2f;
						break;
				}
				GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL("scr_apartment_mp");
				Local_1034.f_7 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_apa_jacuzzi_wade", Var32, 0f, 0f, 0f, fVar35, 0, 0, 0, 1);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_1034.f_7, "size", 1f, 1);
				Local_1034.f_13 = NETWORK::GET_NETWORK_TIME();
				GAMEPLAY::SET_BIT(&Local_1034, 5);
				GAMEPLAY::CLEAR_BIT(&Local_1034, 6);
			}
		}
	}
	else
	{
		func_97();
		if (GAMEPLAY::IS_BIT_SET(Local_1034, 3))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_1034, 2))
			{
				Local_1034.f_10 = NETWORK::GET_NETWORK_TIME();
			}
			func_96();
			if (GAMEPLAY::IS_BIT_SET(Local_1034, 2))
			{
				GAMEPLAY::CLEAR_BIT(&Local_1034, 3);
			}
			GAMEPLAY::CLEAR_BIT(&Local_1034, 4);
		}
		GAMEPLAY::CLEAR_BIT(&Local_1034, 4);
	}
	if (GAMEPLAY::IS_BIT_SET(Local_1034, 2))
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_1034.f_10)) > 7000)
		{
			func_95();
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_1034, 5))
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_1034.f_13)) > 920)
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_1034.f_7, 0);
			GAMEPLAY::CLEAR_BIT(&Local_1034, 5);
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_1034, 8))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_1034.f_14))
		{
			GAMEPLAY::CLEAR_BIT(&Local_1034, 8);
		}
	}
}

void func_95()
{
	if (GAMEPLAY::IS_BIT_SET(Local_1034, 2))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_1034.f_8, 1);
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_1034.f_9, 1);
		GAMEPLAY::CLEAR_BIT(&Local_1034, 2);
	}
}

void func_96()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_1034, 2))
	{
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_apartment_mp"))
		{
			GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL("scr_apartment_mp");
			Local_1034.f_8 = GRAPHICS::_START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_apa_jacuzzi_drips", PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 18905), 1065353216, 0, 0, 0);
			GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL("scr_apartment_mp");
			Local_1034.f_9 = GRAPHICS::_START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_apa_jacuzzi_drips", PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 57005), 1065353216, 0, 0, 0);
			GAMEPLAY::SET_BIT(&Local_1034, 2);
			Local_1034.f_10 = NETWORK::GET_NETWORK_TIME();
		}
	}
}

void func_97()
{
	if (GAMEPLAY::IS_BIT_SET(Local_1034, 1))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_1034.f_6, 1);
		GAMEPLAY::CLEAR_BIT(&Local_1034, 1);
	}
}

void func_98(var uParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(Local_1034, 1))
	{
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_apartment_mp"))
		{
			GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL("scr_apartment_mp");
			Local_1034.f_6 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_apa_jacuzzi_wade", *uParam0, 0f, 0f, 0f, 1f, 0, 0, 0, 1);
			GAMEPLAY::SET_BIT(&Local_1034, 1);
		}
	}
}

float func_99(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_100(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_101(int iParam0)
{
	if (func_1085(iParam0))
	{
		if (func_1071(iParam0))
		{
			return func_102(iParam0) != 0;
		}
	}
	return 0;
}

int func_102(int iParam0)
{
	return Global_2420771.f_97[iParam0].f_6;
}

void func_103()
{
	if (GAMEPLAY::IS_BIT_SET(Local_1034, 0))
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_1056, 11))
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_1034, 9))
	{
		Local_1034.f_2 = AUDIO::GET_SOUND_ID();
		Local_1034.f_3 = AUDIO::GET_SOUND_ID();
		Local_1034.f_4 = AUDIO::GET_SOUND_ID();
		if (func_101(iLocal_1642))
		{
			Local_1034.f_1 = AUDIO::GET_SOUND_ID();
		}
		GAMEPLAY::SET_BIT(&Local_1034, 9);
	}
	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_APARTMENT/APT_Yacht_01", 0, -1) && STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_apartment_mp"))
	{
		Var0 = { func_104(iLocal_1642, -0.3605f, -58.7587f, -8.957f) };
		Var3 = { func_104(iLocal_1642, -0.2356f, -24.0488f, 0.5037f) };
		Var6 = { func_104(iLocal_1642, -0.0944f, 28.8718f, -2.3929f) };
		Var9 = { func_104(iLocal_1642, -0.15f, -52.47f, -5.82f) };
		Var12 = { Var9.x, Var9.y, fLocal_993 };
		AUDIO::PLAY_SOUND_FROM_COORD(Local_1034.f_2, "Engine", Var0, "DLC_Apt_Yacht_Ambient_Soundset", 0, 0, 1);
		AUDIO::PLAY_SOUND_FROM_COORD(Local_1034.f_3, "Deck", Var3, "DLC_Apt_Yacht_Ambient_Soundset", 0, 0, 1);
		AUDIO::PLAY_SOUND_FROM_COORD(Local_1034.f_4, "Deck", Var6, "DLC_Apt_Yacht_Ambient_Soundset", 0, 0, 1);
		if (func_101(iLocal_1642))
		{
			AUDIO::PLAY_SOUND_FROM_COORD(Local_1034.f_1, "Hot_Tub_Loop", Var12, "GTAO_Yacht_SoundSet", 0, 0, 1);
			GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL("scr_apartment_mp");
			Local_1034.f_5 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_apa_jacuzzi_steam", Var9, 0f, 0f, 0f, 1f, 0, 0, 0, 1);
		}
		GAMEPLAY::SET_BIT(&Local_1034, 0);
	}
}

Vector3 func_104(int iParam0, struct<3> Param1)
{
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_83(iParam0), func_105(iParam0), Param1);
}

float func_105(int iParam0)
{
	return Global_4008564[iParam0].f_7;
}

void func_106(bool bParam0)
{
	if (bParam0)
	{
		func_248(PLAYER::PLAYER_ID(), 1, 0, 0);
		GAMEPLAY::CLEAR_BIT(&iLocal_1637, 6);
		GAMEPLAY::CLEAR_BIT(&(Local_1558.f_8), 2);
	}
	Global_1590184.f_28 = 1;
	iLocal_1625 = 0;
	func_107();
}

void func_107()
{
	func_108(&uLocal_1651);
	func_108(&uLocal_1652);
}

void func_108(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 4))
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		}
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, 0);
		}
		CAM::DESTROY_CAM(*uParam0, 0);
	}
}

int func_109()
{
	if (func_110())
	{
		return 1;
	}
	return 0;
}

int func_110()
{
	if (!func_1094(PLAYER::PLAYER_ID(), 1, 1) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		iLocal_1625 = 5;
	}
	if (iLocal_1625 <= 1)
	{
		func_112();
	}
	switch (iLocal_1625)
	{
		case 0:
			Global_1590184.f_28 = 0;
			if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 9))
			{
				if (func_232(1, 0))
				{
					iLocal_1625 = 4;
					GAMEPLAY::SET_BIT(&iLocal_1638, 9);
				}
			}
			else
			{
				iLocal_1625 = 4;
			}
			break;
		
		case 4:
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (Global_1590184.f_28 == 0)
			{
				Global_1590184.f_28 = 1;
			}
			break;
		
		case 5:
			func_106(1);
			return 1;
			break;
	}
	return 0;
}

void func_111(int iParam0)
{
	Global_1590535[PLAYER::PLAYER_ID()].f_741 = 1;
	Global_1590535[PLAYER::PLAYER_ID()].f_743 = iParam0;
}

void func_112()
{
	if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (func_90(PLAYER::PLAYER_ID()) == iLocal_1642)
		{
			iVar1 = 1;
		}
		iVar2 = 0;
		while (iVar2 < Global_3934119[iLocal_1642].f_36)
		{
			bVar3 = false;
			fVar0 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_1093(PLAYER::PLAYER_ID()), Global_3934119[iLocal_1642].f_38[iVar2].f_23, 1);
			if (fVar0 <= 30f)
			{
				if (!bVar3)
				{
					if (func_115(&iLocal_1645, iLocal_1642) || iVar1)
					{
						func_113(iVar2);
					}
				}
			}
			iVar2++;
		}
	}
}

void func_113(int iParam0)
{
	if (func_114() == 0)
	{
		if (uLocal_2683[iParam0] == 0f)
		{
			GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Global_3934119[iLocal_1642].f_38[iParam0].f_12 + Vector(0.5f, 0f, 0f), &(uLocal_2683[iParam0]), 0, 0);
		}
		UI::GET_HUD_COLOUR(9, &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0xE82728F0DE75D13A(1, Vector(uLocal_2683[iParam0], Global_3934119[iLocal_1642].f_38[iParam0].f_12.f_1, Global_3934119[iLocal_1642].f_38[iParam0].f_12) + Vector(-0.25f, 0f, 0f), 0f, 0f, 0f, 0f, 0f, 0f, 0.75f, 0.75f, 0.75f, uVar0, uVar1, uVar2, 255, 0, 0, 2, 0, 0, 0, 0, 0, 0);
	}
}

int func_114()
{
	return Global_1312467.f_19;
}

int func_115(int iParam0, int iParam1)
{
	if (*iParam0 < 3)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				if (func_1094(iVar1, 0, 1))
				{
					if ((func_90(iVar1) == iParam1 && Global_1590535[iVar1].f_274.f_28 == 86) && func_116(iVar1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
					{
						GAMEPLAY::SET_BIT(iParam0, 1);
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 1;
	}
	if (*iParam0 != 0)
	{
		return 1;
	}
	return 0;
}

int func_116(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_56(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_51(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_50(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_126(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_21(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_19(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_125(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_124(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_123(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_122(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_121(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_120(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_119(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_118(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_117(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_117(int iParam0)
{
	if (iParam0 != func_247())
	{
		if (func_1094(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_118(int iParam0)
{
	if (iParam0 != func_247())
	{
		if (func_1094(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_119(int iParam0)
{
	if (iParam0 != func_247())
	{
		if (func_1094(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	if (iParam0 != func_247())
	{
		if (func_1094(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	if (iParam0 != func_247())
	{
		if (func_1094(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_122(int iParam0, bool bParam1)
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
	if (iParam0 != func_247())
	{
		if (func_1094(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_247())
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	if (iParam0 != func_247())
	{
		if (func_1094(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	if (iParam0 != func_247())
	{
		if (func_1094(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_125(int iParam0)
{
	if (iParam0 != func_247())
	{
		if (func_1094(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_247())
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_126(int iParam0)
{
	if (iParam0 != func_247())
	{
		if (func_1094(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_20(Global_2425662[iParam0].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

bool func_127()
{
	return Global_1573342;
}

void func_128()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_1637, 9))
	{
		if (func_1094(Global_2546095[Global_2546095.f_82], 0, 1))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_27, Global_2546095[Global_2546095.f_82]))
			{
				if ((!func_359(Global_2546095[Global_2546095.f_82], 0, 0) || Global_1590535[Global_2546095[Global_2546095.f_82]].f_274.f_28 <= 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[Global_2546095[Global_2546095.f_82]].f_274.f_26, 14))
				{
					GAMEPLAY::CLEAR_BIT(&iLocal_1637, 9);
					GAMEPLAY::CLEAR_BIT(&iLocal_1637, 5);
					NETWORK::NETWORK_CLEAR_VOICE_CHANNEL();
					func_1097(&uLocal_1647);
					Global_1590535[PLAYER::PLAYER_ID()].f_274.f_27 = 0;
					Global_1590184.f_26 = 1;
				}
				else if (Global_1590535[Global_2546095[Global_2546095.f_82]].f_274.f_32[PLAYER::PLAYER_ID()] == 1)
				{
					Global_1590184.f_3 = Global_2546095[Global_2546095.f_82];
					Global_1590184.f_4 = { func_1065(Global_2546095[Global_2546095.f_82]) };
					GAMEPLAY::SET_BIT(&iLocal_1638, 5);
					Global_1590184.f_20 = 0;
					Global_1590184.f_19 = Global_1590535[Global_2546095[Global_2546095.f_82]].f_274.f_28;
					Global_1590184.f_183 = iLocal_1642;
					Global_1590184.f_24 = 1;
					UI::DISPLAY_RADAR(0);
					iLocal_178 = 1;
					func_854(7);
					GAMEPLAY::CLEAR_BIT(&iLocal_1637, 9);
					return;
				}
				else if (Global_1590535[Global_2546095[Global_2546095.f_82]].f_274.f_32[PLAYER::PLAYER_ID()] == 2)
				{
					GAMEPLAY::SET_BIT(&iLocal_1646, Global_2546095[Global_2546095.f_82]);
					GAMEPLAY::CLEAR_BIT(&iLocal_1637, 9);
					GAMEPLAY::CLEAR_BIT(&iLocal_1637, 5);
					NETWORK::NETWORK_CLEAR_VOICE_CHANNEL();
					func_1097(&uLocal_1647);
					Global_1590184.f_26 = 1;
					Global_1590535[PLAYER::PLAYER_ID()].f_274.f_27 = 0;
					return;
				}
			}
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1637, 9);
			GAMEPLAY::CLEAR_BIT(&iLocal_1637, 5);
			Global_1590184.f_26 = 1;
			NETWORK::NETWORK_CLEAR_VOICE_CHANNEL();
			func_1097(&uLocal_1647);
			Global_1590535[PLAYER::PLAYER_ID()].f_274.f_27 = 0;
		}
	}
}

void func_129()
{
	UI::HIDE_HELP_TEXT_THIS_FRAME();
	func_205();
	func_204();
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 202);
	func_1057(&uLocal_1649, 1, 0);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 201);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 189);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 190);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 188);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 187);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 241);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 242);
	iVar0 = 0;
	iVar1 = 0;
	if (iLocal_1635 == 0 && Global_3934119[iLocal_1642].f_38[iLocal_1644].f_26 != 2)
	{
		func_201(0, 0, 0, 1);
		if (CONTROLS::_IS_INPUT_DISABLED(0))
		{
			UI::_SHOW_CURSOR_THIS_FRAME();
			if (func_200())
			{
				if (Global_4268497 != Global_2546095.f_82)
				{
					Global_2546095.f_82 = Global_4268497;
				}
				else
				{
					iVar0 = 1;
				}
			}
			iVar1 = 1;
		}
	}
	bVar3 = false;
	if (NETWORK::_0x2EAC52B4019E2782() || UI::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1745, 1))
	{
		if (!Global_98796.f_1417)
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1745, 0);
			GAMEPLAY::CLEAR_BIT(&iLocal_1745, 1);
			GAMEPLAY::CLEAR_BIT(&(Global_2546095.f_83), 2);
		}
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_1637, 19))
	{
		if (func_1075())
		{
			func_206();
			return;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_393.f_5, 0))
	{
		func_206();
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 13))
	{
		func_206();
		return;
	}
	if (func_198(0, -1, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_1637, 19))
		{
			GAMEPLAY::SET_BIT(&iLocal_1637, 19);
		}
		if (!GAMEPLAY::IS_BIT_SET(iLocal_1637, 5))
		{
			UI::CLEAR_HELP(1);
			func_181(iLocal_1635);
			GAMEPLAY::SET_BIT(&iLocal_1637, 5);
			func_178(iLocal_1635);
			func_145(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		else
		{
			if (!UI::IS_PAUSE_MENU_ACTIVE() && !func_331(8, -1))
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2546095.f_83, 0))
				{
					if (((CONTROLS::IS_CONTROL_PRESSED(2, 201) || iVar0 == 1) && func_144()) && !bVar3)
					{
						bVar3 = true;
						if (Global_1590184.f_26 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1783227588) > 0)
						{
							func_178(iLocal_1635);
							func_145(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
							return;
						}
						switch (iLocal_1635)
						{
							case 0:
								if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1783227588) > 0)
								{
									func_178(iLocal_1635);
									func_145(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
									return;
								}
								GAMEPLAY::SET_BIT(&(Global_2546095.f_83), 0);
								if (Global_2546095[Global_2546095.f_82] == PLAYER::PLAYER_ID() && Global_2546095.f_37[Global_2546095.f_82] > 0)
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", 1);
									Global_1590535[PLAYER::PLAYER_ID()].f_274.f_27 = 0;
									CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
									if (Global_2546095.f_82 == Global_2546095.f_112)
									{
										GAMEPLAY::SET_BIT(&(Global_1590184.f_22), 15);
										func_140(func_141(func_1093(PLAYER::PLAYER_ID()), 15, 1, 0, 0, 0, 0, 0, 0), 86, -1, iLocal_1642, 0, 0, -1, 0);
									}
									else if (Global_2546095.f_82 == Global_2546095.f_111)
									{
										func_140(func_141(func_1093(PLAYER::PLAYER_ID()), 15, 0, 1, 1, 0, 0, 0, 0), 86, -1, iLocal_1642, 0, 0, -1, 0);
										GAMEPLAY::SET_BIT(&(Global_1590184.f_22), 14);
									}
									else if (Global_2546095.f_82 == Global_2546095.f_116)
									{
										func_140(func_141(func_1093(PLAYER::PLAYER_ID()), 15, 0, 0, 0, 0, 0, 1, 0), 86, -1, iLocal_1642, 0, 0, -1, 0);
										GAMEPLAY::SET_BIT(&(Global_1590184.f_22), 21);
									}
									func_854(4);
								}
								else
								{
									if (iLocal_1742 == -1)
									{
										iLocal_1742 = AUDIO::GET_SOUND_ID();
										AUDIO::PLAY_SOUND_FRONTEND(iLocal_1742, "DOOR_BUZZ", "MP_PLAYER_APARTMENT", 1);
									}
									else if (AUDIO::HAS_SOUND_FINISHED(iLocal_1742))
									{
										AUDIO::PLAY_SOUND_FRONTEND(iLocal_1742, "DOOR_BUZZ", "MP_PLAYER_APARTMENT", 1);
									}
									if (!GAMEPLAY::IS_BIT_SET(iLocal_1637, 9))
									{
										if (Global_2546095[Global_2546095.f_82] != func_247() && func_1094(Global_2546095[Global_2546095.f_82], 1, 1))
										{
											if (!GAMEPLAY::IS_BIT_SET(iLocal_1646, Global_2546095[Global_2546095.f_82]) && Global_1590535[Global_2546095[Global_2546095.f_82]].f_274.f_28 > 0)
											{
												if (iLocal_1642 > 0)
												{
													GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_27), Global_2546095[Global_2546095.f_82]);
													GAMEPLAY::SET_BIT(&iLocal_1637, 9);
													iVar4 = iLocal_1642;
													if (iVar4 > 0)
													{
													}
													Global_1590184.f_3 = Global_2546095[Global_2546095.f_82];
													Global_1590184.f_4 = { func_1065(Global_2546095[Global_2546095.f_82]) };
													Global_1590184.f_19 = Global_1590535[Global_2546095[Global_2546095.f_82]].f_274.f_28;
													Global_1590184.f_183 = iLocal_1642;
													Global_1590184.f_20 = 0;
													GAMEPLAY::SET_BIT(&iLocal_1638, 5);
													GAMEPLAY::SET_BIT(&(Global_1590184.f_22), 6);
													Global_1590184.f_19 = 86;
													NETWORK::NETWORK_SET_TALKER_PROXIMITY(0f);
													func_1057(&uLocal_1647, 0, 0);
												}
												else
												{
													func_854(6);
													if (GAMEPLAY::IS_BIT_SET(iLocal_1637, 9))
													{
														Global_1590184.f_3 = func_247();
														Global_1590535[PLAYER::PLAYER_ID()].f_274.f_27 = 0;
														NETWORK::NETWORK_CLEAR_VOICE_CHANNEL();
														func_1097(&uLocal_1647);
														Global_1590184.f_26 = 1;
													}
													GAMEPLAY::CLEAR_BIT(&iLocal_1637, 9);
													return;
												}
											}
											else
											{
												func_139(1);
											}
										}
									}
								}
								break;
							
							case 2:
								if (Global_2546095[Global_2546095.f_82] == PLAYER::PLAYER_ID())
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", 1);
									Global_1590535[PLAYER::PLAYER_ID()].f_274.f_27 = 0;
									CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
									if (Global_2546095.f_82 == Global_2546095.f_112)
									{
										GAMEPLAY::SET_BIT(&(Global_1590184.f_22), 15);
										func_140(func_141(func_1093(PLAYER::PLAYER_ID()), 15, 1, 0, 0, 0, 0, 0, 0), 86, -1, iLocal_1642, 0, 0, -1, 0);
									}
									else if (Global_2546095.f_82 == Global_2546095.f_111)
									{
										func_140(func_141(func_1093(PLAYER::PLAYER_ID()), 15, 0, 1, 1, 0, 0, 0, 0), 86, -1, iLocal_1642, 0, 0, -1, 0);
										GAMEPLAY::SET_BIT(&(Global_1590184.f_22), 14);
									}
									else if (Global_2546095.f_82 == Global_2546095.f_116)
									{
										func_140(func_141(func_1093(PLAYER::PLAYER_ID()), 15, 0, 0, 0, 0, 0, 1, 0), 86, -1, iLocal_1642, 0, 0, -1, 0);
										GAMEPLAY::SET_BIT(&(Global_1590184.f_22), 21);
									}
									func_854(4);
								}
								break;
						}
						GAMEPLAY::SET_BIT(&(Global_2546095.f_83), 0);
					}
				}
				else if (!CONTROLS::IS_CONTROL_PRESSED(2, 201) || (iVar1 && iVar0 == 0))
				{
					GAMEPLAY::CLEAR_BIT(&(Global_2546095.f_83), 0);
				}
				if (!GAMEPLAY::IS_BIT_SET(Global_2546095.f_83, 1))
				{
					if ((CONTROLS::IS_CONTROL_PRESSED(2, 202) && func_144()) && !bVar3)
					{
						bVar3 = true;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", 1);
						if (!GAMEPLAY::IS_BIT_SET(Global_2546095.f_83, 2))
						{
							Global_1590184.f_26 = 1;
							switch (iLocal_1635)
							{
								case 0:
									func_854(6);
									if (GAMEPLAY::IS_BIT_SET(iLocal_1637, 9))
									{
										Global_1590184.f_3 = func_247();
										Global_1590535[PLAYER::PLAYER_ID()].f_274.f_27 = 0;
										NETWORK::NETWORK_CLEAR_VOICE_CHANNEL();
										func_1097(&uLocal_1647);
										Global_1590184.f_26 = 1;
									}
									GAMEPLAY::CLEAR_BIT(&iLocal_1637, 9);
									return;
									break;
								
								case 2:
									func_178(iLocal_1635);
									func_145(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
									iLocal_1635 = 0;
									GAMEPLAY::CLEAR_BIT(&iLocal_1637, 5);
									return;
									break;
							}
							return;
						}
						else
						{
							GAMEPLAY::CLEAR_BIT(&(Global_2546095.f_83), 2);
						}
						GAMEPLAY::SET_BIT(&(Global_2546095.f_83), 1);
					}
				}
				else if (!CONTROLS::IS_CONTROL_PRESSED(2, 202))
				{
					GAMEPLAY::CLEAR_BIT(&(Global_2546095.f_83), 1);
				}
				iVar2 = Global_2546095.f_82;
				if ((Global_2546095.f_81 > 0 && !GAMEPLAY::IS_BIT_SET(iLocal_1637, 9)) && !GAMEPLAY::IS_BIT_SET(Global_2546095.f_83, 2))
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_2546095.f_83, 4))
					{
						if (((CONTROLS::IS_CONTROL_PRESSED(2, 188) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188)) || (((CONTROLS::_IS_INPUT_DISABLED(2) && iLocal_1635 == 0) && Global_3934119[iLocal_1642].f_38[iLocal_1644].f_26 != 2) && CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 241))) && !bVar3)
						{
							bVar3 = true;
							Global_2546095.f_82 = (Global_2546095.f_82 - 1);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							GAMEPLAY::SET_BIT(&(Global_2546095.f_83), 4);
							func_1097(&(Global_2546095.f_76));
						}
					}
					else if (func_138(188))
					{
						GAMEPLAY::CLEAR_BIT(&(Global_2546095.f_83), 4);
					}
					if (!GAMEPLAY::IS_BIT_SET(Global_2546095.f_83, 5))
					{
						if (((CONTROLS::IS_CONTROL_PRESSED(2, 187) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187)) || (((CONTROLS::_IS_INPUT_DISABLED(2) && iLocal_1635 == 0) && Global_3934119[iLocal_1642].f_38[iLocal_1644].f_26 != 2) && CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 242))) && !bVar3)
						{
							bVar3 = true;
							Global_2546095.f_82++;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							GAMEPLAY::SET_BIT(&(Global_2546095.f_83), 5);
							func_1097(&(Global_2546095.f_76));
						}
					}
					else if (func_138(187))
					{
						GAMEPLAY::CLEAR_BIT(&(Global_2546095.f_83), 5);
					}
					if (Global_2546095.f_82 > (Global_2546095.f_81 - 1))
					{
						Global_2546095.f_82 = 0;
					}
					if (Global_2546095.f_82 < 0)
					{
						Global_2546095.f_82 = (Global_2546095.f_81 - 1);
					}
					if (Global_2546095.f_82 != iVar2)
					{
						Global_2546095.f_80 = 0;
						GAMEPLAY::CLEAR_BIT(&iLocal_1637, 5);
					}
				}
				func_178(iLocal_1635);
				func_145(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			if (func_130())
			{
				GAMEPLAY::CLEAR_BIT(&iLocal_1637, 5);
			}
		}
	}
}

int func_130()
{
	switch (iLocal_1635)
	{
		case 0:
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iLocal_1692);
			if (iVar0 != PLAYER::PLAYER_ID())
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_1658, iVar0))
				{
					if (func_1094(iVar0, 0, 1))
					{
						if (((Global_1590535[iVar0].f_274.f_28 == 86 && func_90(iVar0) == iLocal_1642) && GAMEPLAY::IS_BIT_SET(Global_1590535[iVar0].f_274.f_26, 0)) && !GAMEPLAY::IS_BIT_SET(Global_1590535[iVar0].f_274.f_26, 14))
						{
							return 1;
						}
					}
				}
				else if (func_1094(iVar0, 1, 1))
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_1590535[iVar0].f_274.f_26, 0))
					{
						return 1;
					}
					else
					{
						if (Global_1590535[iVar0].f_274.f_28 != iLocal_1659[iLocal_1692])
						{
							return 1;
						}
						if (GAMEPLAY::IS_BIT_SET(Global_1590535[iVar0].f_274.f_26, 14))
						{
							return 1;
						}
					}
				}
				else
				{
					return 1;
				}
			}
			if (CONTROLS::_0x6CD79468A1E595C6(2))
			{
				return 1;
			}
			break;
	}
	iLocal_1692++;
	if (iLocal_1692 >= 32)
	{
		iLocal_1692 = 0;
	}
	if ((Global_2546095.f_112 != -1 || Global_2546095.f_111 != -1) || Global_2546095.f_116 != -1)
	{
		if (func_132(Global_3934119[iLocal_1642].f_3[iLocal_1644], &(Global_2546095.f_113), &(Global_2546095.f_117), 86, iLocal_1644, 1097859072, iLocal_1642))
		{
			if ((func_1080(PLAYER::PLAYER_ID()) || func_1079(PLAYER::PLAYER_ID())) || func_131(PLAYER::PLAYER_ID()))
			{
				if (Global_2546095.f_112 == -1)
				{
					return 1;
				}
			}
			if (Global_2546095.f_113)
			{
				if (Global_2546095.f_111 == -1)
				{
					return 1;
				}
			}
			if (Global_2546095.f_117)
			{
				if (Global_2546095.f_116 == -1)
				{
					return 1;
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

bool func_131(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 1;
}

int func_132(struct<3> Param0, var uParam3, var uParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	*uParam3 = 0;
	*uParam4 = 0;
	if ((Global_1049922[iParam5].f_38[iParam6].f_26 == 1 || ((iParam5 == 86 && iParam8 >= 0) && Global_3934119[iParam8].f_38[iParam6].f_26 == 1)) || (func_57(iParam5) && Global_1049922[iParam5].f_38[iParam6].f_26 == 2))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (func_1094(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (!func_136(iVar1))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 1) };
					if (Var3.z < -100f)
					{
						Var3.z = Param0.z;
					}
					if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var3, Param0, 1) <= fParam7)
					{
						if ((!GAMEPLAY::IS_BIT_SET(Global_1590535[iVar1].f_274.f_26, 4) && !func_135(iVar1)) && !func_116(iVar1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
						{
							iVar2 = 1;
							if (Global_1628237[iVar1].f_11 != func_247() && Global_1628237[iVar1].f_11 == Global_1628237[PLAYER::PLAYER_ID()].f_11)
							{
								*uParam4 = 1;
							}
							Global_2513148 = { func_133(PLAYER::PLAYER_ID()) };
							Global_2513183 = { func_133(iVar1) };
							if (Global_2513148 == Global_2513183)
							{
								*uParam3 = 1;
							}
							else
							{
								Global_2513218 = { func_1065(iVar1) };
								if (func_1066(Global_2513218))
								{
									if (NETWORK::NETWORK_IS_FRIEND(&Global_2513218))
									{
										*uParam3 = 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (((((func_1080(PLAYER::PLAYER_ID()) || func_1079(PLAYER::PLAYER_ID())) || func_131(PLAYER::PLAYER_ID())) || *uParam4) || *uParam3) && iVar2)
		{
			return 1;
		}
	}
	return 0;
}

struct<35> func_133(int iParam0)
{
	if (func_134(iParam0))
	{
		return Global_1312909[PLAYER::PLAYER_ID()];
	}
	Var0 = { func_1065(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_134(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 14))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0)
{
	if (func_86(iParam0, 0))
	{
		return 1;
	}
	if (func_137())
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

bool func_137()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_138(int iParam0)
{
	if ((!CONTROLS::IS_CONTROL_PRESSED(2, iParam0) && !CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, iParam0)) || func_1098(&(Global_2546095.f_76), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_139(int iParam0)
{
	func_1057(&(Global_2546095.f_74), 0, 0);
	GAMEPLAY::SET_BIT(&(Global_2546095.f_80), iParam0);
}

void func_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	Var0.f_3 = -1;
	Var0 = -1253256204;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (iParam6 < 0)
	{
		Var0.f_2 = PLAYER::PLAYER_ID();
	}
	else
	{
		Var0.f_2 = PLAYER::INT_TO_PLAYERINDEX(iParam6);
	}
	Var0.f_5 = iParam1;
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = iParam3;
	Var0.f_4 = iParam2;
	if (bParam7)
	{
		GAMEPLAY::SET_BIT(&(Var0.f_8), 0);
	}
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 9, iParam0);
	}
}

int func_141(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		Global_2513148 = { func_143(PLAYER::PLAYER_ID()) };
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_1094(iVar2, 1, 1))
		{
			if (iParam8 || !func_142(iVar2))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam7)
				{
					if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar2), 1), Param0, 1) <= IntToFloat(iParam3))
					{
						if (iParam10 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar2), 0))
						{
						}
						else if (bParam4)
						{
							GAMEPLAY::SET_BIT(&iVar0, iVar1);
						}
						else
						{
							Global_2513218 = { func_1065(iVar2) };
							if (func_1066(Global_2513218))
							{
								if (bParam5)
								{
									if (NETWORK::NETWORK_IS_FRIEND(&Global_2513218))
									{
										GAMEPLAY::SET_BIT(&iVar0, iVar2);
									}
								}
								if (bParam6 && !GAMEPLAY::IS_BIT_SET(iVar0, iVar2))
								{
									Global_2513183 = { func_143(iVar2) };
									if (Global_2513148 == Global_2513183)
									{
										GAMEPLAY::SET_BIT(&iVar0, iVar2);
									}
								}
								if (iParam9 && !GAMEPLAY::IS_BIT_SET(iVar0, iVar2))
								{
									if (Global_1628237[iVar2].f_11 != func_247() && Global_1628237[iVar2].f_11 == Global_1628237[PLAYER::PLAYER_ID()].f_11)
									{
										GAMEPLAY::SET_BIT(&iVar0, iVar2);
									}
								}
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_142(int iParam0)
{
	if (PLAYER::PLAYER_ID() == iParam0)
	{
		return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
	}
	if (func_86(iParam0, 0))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
	{
		return 1;
	}
	return 0;
}

struct<35> func_143(int iParam0)
{
	if (func_134(iParam0))
	{
		return Global_1312909[PLAYER::PLAYER_ID()];
	}
	Global_2513218 = { func_1065(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513113, 0, &Global_2513218);
	return Global_2513113;
}

int func_144()
{
	if (func_1099(&uLocal_1632))
	{
		if (func_1098(&uLocal_1632, iLocal_1634, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_145(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_177(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_175(0, bParam6))
	{
		return;
	}
	GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_173(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_1)) == GAMEPLAY::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_22348;
	}
	else
	{
		fVar59 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar60, &iVar61);
		fVar63 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_172())
		{
			iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(iVar60) / SYSTEM::TO_FLOAT(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_172())
		{
			fVar62 = 1f;
		}
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar62));
		iVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) / fVar62));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_168(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_1)) == GAMEPLAY::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar65, func_167(29), 64);
					StringCopy(&cVar81, func_165(29, 1), 64);
					if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[29])) == -1487683087)
					{
						func_164(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8387)
				{
					iVar1 = Global_22350.f_8383;
					iVar2 = Global_22350.f_8384;
					iVar3 = Global_22350.f_8385;
					iVar4 = Global_22350.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_164(Global_22347, (Global_22348 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
				if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_1)) != 0)
				{
					func_163();
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						iVar14++;
					}
					UI::END_TEXT_COMMAND_DISPLAY_TEXT((Global_22347 + 0.00390625f), ((Global_22348 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_163();
					func_161((((Global_22347 + fParam5) - 0.00390625f) - func_162("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_163();
						func_161((((Global_22347 + fParam5) - 0.00390625f) - func_162("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22350.f_8397)
			{
				iVar1 = Global_22350.f_8393;
				iVar2 = Global_22350.f_8394;
				iVar3 = Global_22350.f_8395;
				iVar4 = Global_22350.f_8396;
			}
			else
			{
				UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22350.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar97 + ((fVar51 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8402)
				{
					iVar1 = Global_22350.f_8398;
					iVar2 = Global_22350.f_8399;
					iVar3 = Global_22350.f_8400;
					iVar4 = Global_22350.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_164(Global_22347, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.x = (Var38.x * (0.5f / fVar62));
				Var38.y = (Var38.y * (0.5f / fVar62));
				if (Global_22350.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					UI::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.x / 1280f) * fVar62), ((Var38.y / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_173(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_160(fVar42);
				UI::_SET_TEXT_GXT_ENTRY(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UI::_GET_TEXT_SCREEN_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				UI::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_164(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_160(fVar42);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_173(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_159(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_167(Global_22350.f_4768), func_165(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((GAMEPLAY::GET_GAME_TIMER() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_4268421.f_21)) != 0 && Global_4268421.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_4268421.f_67 != 0)
				{
					func_173(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_160(fVar42);
				UI::_SET_TEXT_GXT_ENTRY(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UI::_GET_TEXT_SCREEN_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				UI::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_164(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_160(fVar42);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4268421.f_67 != 0)
				{
					func_173(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_159(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_167(Global_4268421.f_67), func_165(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268421.f_65 > 0)
				{
					if ((GAMEPLAY::GET_GAME_TIMER() - Global_4268421.f_66) > Global_4268421.f_65)
					{
						StringCopy(&(Global_4268421.f_21), "", 16);
						Global_4268421.f_65 = -1;
					}
				}
			}
			func_154(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar98 = (Global_22350.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_22350.f_8409)
					{
						UI::GET_HUD_COLOUR(Global_22350.f_8408, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						UI::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_22350.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22350.f_5226)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_22350.f_5089[iVar6], iVar8) || Global_22350.f_5056[iVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar20 = Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar21 = Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar22 = Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar23 = Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)];
						}
						else
						{
							Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar19;
							Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar20;
							Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar21;
							Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar22;
							Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22350.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0.0046875f) + Global_22350.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22350.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[iVar8 + 1])
						{
							fVar46 = (Global_22350.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22347 + Global_22349) - 0.0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[iVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22350.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22350.f_2124[iVar24][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_152(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											UI::_SET_TEXT_ENTRY_FOR_WIDTH(&(Global_22350.f_73[iVar24]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 1)
											{
												iVar25++;
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												iVar25++;
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 5)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 6)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 7)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 2)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 3)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
										{
											fVar43 = UI::_GET_TEXT_SCREEN_WIDTH(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_173(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 51) || Global_22350.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
										Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22350.f_5083[iVar101] == 2)
												{
													Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] = (Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] - Global_22350.f_5068[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_173(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_173(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_159(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_167(26), func_165(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_173(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_173(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_159(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_167(27), func_165(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_152(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_151(bVar32);
										}
										UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_73[iVar24]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24][iVar14] == 1)
										{
											iVar25++;
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 8)
										{
											iVar25++;
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 5)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 6)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 7)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 9)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 2)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 3)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 51) || Global_22350.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_173(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_173(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_159(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_167(Global_22350.f_4433[(iVar22 + iVar28)]), func_165(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_167(Global_22350.f_4433[(iVar22 + iVar28)]), func_165(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[iVar8] == 2)
										{
											UI::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											UI::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_150() && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1768762336) > 0)
											{
												if (iVar8 == 0)
												{
													func_152(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													UI::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													UI::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), 0);
													UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													UI::ADD_TEXT_COMPONENT_INTEGER((Global_22350.f_5738 + iVar30));
													UI::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 51) && Global_22350.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_173(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_173(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_159(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_167(Global_22350.f_4433[(iVar22 + iVar14)]), func_165(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_167(Global_22350.f_4433[(iVar22 + iVar14)]), func_165(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_167(Global_22350.f_4433[(iVar22 + iVar14)]), func_165(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_152(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_151(bVar32);
										}
										UI::_SET_TEXT_ENTRY_FOR_WIDTH("NUMBER");
										UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[iVar20]);
										fVar43 = UI::_GET_TEXT_SCREEN_WIDTH(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_173(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_173(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_159(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_167(26), func_165(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_173(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_173(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_159(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_167(27), func_165(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_152(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_149((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_152(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_151(bVar32);
										}
										UI::_SET_TEXT_ENTRY_FOR_WIDTH("NUMBER");
										UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar43 = UI::_GET_TEXT_SCREEN_WIDTH(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_173(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_173(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_159(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_167(26), func_165(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_173(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_173(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_159(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_167(27), func_165(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									func_152(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_148((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_173(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22350.f_5083[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
											Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
											fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
										}
										if (bVar54)
										{
											if (func_173(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_173(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_159(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_167(26), func_165(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_173(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_173(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_159(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_167(27), func_165(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_173(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_159(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_167(Global_22350.f_4433[iVar22]), func_165(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_147(Global_22350.f_4433[iVar22])), (fVar37 * func_147(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22350.f_5056[iVar8] == 5)
						{
							if (Global_22350.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							if (Global_22350.f_5075[iVar8])
							{
								if (func_173(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22350.f_8038[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar51;
	Global_22350.f_5878 = GAMEPLAY::GET_GAME_TIMER();
	UI::_0x55598D21339CB998(Global_22350.f_5876);
	if (!Global_22350.f_8382)
	{
		func_260(0);
	}
	Global_22350.f_8382 = 0;
	if (bParam2)
	{
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_146(1);
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

void func_146(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

float func_147(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_148(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_149(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_150()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

void func_151(bool bParam0)
{
	if (bParam0)
	{
		UI::GET_HUD_COLOUR(Global_22350.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		UI::GET_HUD_COLOUR(Global_22350.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_152(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (bParam2)
	{
		if (bParam3)
		{
			func_153(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				UI::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				UI::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			UI::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			UI::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			UI::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		UI::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		UI::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		UI::SET_TEXT_SCALE(0f, 0.425f);
		UI::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		UI::SET_TEXT_SCALE(0f, 0.425f);
		UI::SET_TEXT_FONT(6);
	}
	else
	{
		UI::SET_TEXT_FONT(0);
	}
	UI::SET_TEXT_WRAP(0f, 1f);
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_153(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!func_177(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_175(bParam4, bParam8))
	{
		return;
	}
	if (func_157())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_86(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (CONTROLS::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5026[iVar1], 1), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), CONTROLS::_0x80C2FD58D720C801(2, Global_22350.f_5039[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "CLEAR_ALL");
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_MAX_WIDTH");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT((1f - (Global_22350.f_5081 / 100f)));
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			if (GAMEPLAY::IS_PC_VERSION())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_4964[iVar1])) != GAMEPLAY::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
					func_156(&(Global_22350.f_4771[iVar1]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_4964[iVar2])) == GAMEPLAY::GET_HASH_KEY("PREV"))
					{
						func_156(&(Global_22350.f_4771[iVar2]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_155(&(Global_22350.f_4964[iVar1]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_22350.f_4964[iVar1]));
						if (bParam5)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (Global_22350.f_5026[iVar1] != 361 && GAMEPLAY::IS_BIT_SET(Global_22350.f_5052, iVar1))
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_22350.f_5026[iVar1]);
						}
						else
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(361);
						}
					}
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				iVar1++;
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_4268421.f_16)) != GAMEPLAY::GET_HASH_KEY(""))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_22350.f_4769);
				func_156(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_155(&(Global_4268421.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_4268421.f_16));
					if (bParam5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_BACKGROUND_COLOUR");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(80);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_22350.f_4964[iVar1]));
					if (bParam5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
			}
			iVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_4268421.f_16));
				if (bParam5)
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
		GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 66);
		GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				UI::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			UI::RESET_HUD_COMPONENT_VALUES(15);
			Global_22350.f_8417 = 0;
		}
		GRAPHICS::_SCREEN_DRAW_POSITION_END();
		if (Global_22350.f_5055)
		{
			GRAPHICS::_SET_SCREEN_DRAW_POSITION(82, 66);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_22350.f_5660[iVar0], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::_SCREEN_DRAW_POSITION_END();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22350.f_5660[iVar0], 255, 255, 255, 255, 0);
		}
	}
}

void func_155(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_156(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

int func_157()
{
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_158())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_19431 == 0)
		{
			if (Var0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_158()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	return 0;
}

void func_159(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	UI::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			UI::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_160(float fParam0)
{
	UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_LEADING(2);
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	UI::SET_TEXT_WRAP(fParam0, ((Global_22347 + Global_22349) - 0.0046875f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_161(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_162(char* sParam0, int iParam1, int iParam2)
{
	if (!GAMEPLAY::IS_STRING_NULL(sParam0))
	{
		if (GAMEPLAY::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_163();
	UI::_SET_TEXT_ENTRY_FOR_WIDTH(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return UI::_GET_TEXT_SCREEN_WIDTH(1);
}

void func_163()
{
	UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22350.f_8392)
	{
		iVar0 = Global_22350.f_8388;
		iVar1 = Global_22350.f_8389;
		iVar2 = Global_22350.f_8390;
		iVar3 = Global_22350.f_8391;
	}
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	UI::SET_TEXT_WRAP((Global_22347 + 0.0046875f), ((Global_22347 + Global_22349) - 0.0046875f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_164(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_165(int iParam0, bool bParam1)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_7029[iParam0])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_1065(PLAYER::PLAYER_ID()) };
			if (NETWORK::_0x5835D9CD92E83184(&Var19, &uVar3))
			{
				return func_166(&uVar3);
			}
		}
		else
		{
			return func_166(&(Global_22350.f_7029[iParam0]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_166(var uParam0)
{
	return uParam0;
}

char* func_167(int iParam0)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_6020[iParam0])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_1065(PLAYER::PLAYER_ID()) };
			NETWORK::_0x5835D9CD92E83184(&Var16, &uVar0);
			return func_166(&uVar0);
		}
		else
		{
			return func_166(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_168(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220]), sParam1, 24);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1) && !UI::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_171(Global_22350.f_5218, 1);
	}
	else
	{
		func_171(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_170(&(Global_22350.f_73[Global_22350.f_5220]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_173(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_169(&(Global_22350.f_73[Global_22350.f_5220]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	GAMEPLAY::SET_BIT(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_169(char* sParam0)
{
	if (!UI::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_170(char* sParam0)
{
	if (!GAMEPLAY::IS_STRING_NULL(sParam0))
	{
		if (GAMEPLAY::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_152(0, 1, 0, 0, 0, 0, 0);
	UI::_SET_TEXT_ENTRY_FOR_WIDTH(sParam0);
	return UI::_GET_TEXT_SCREEN_WIDTH(1);
}

void func_171(int iParam0, bool bParam1)
{
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_172()
{
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_173(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_167(iParam0), 64);
	StringCopy(&cVar16, func_165(iParam0, bParam1), 64);
	if (GAMEPLAY::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_172())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_172())
			{
				fVar34 = 1f;
			}
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-892862129) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
		}
		Var37 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		Var37.x = (Var37.x * (func_174(iParam0) / fVar34));
		Var37.y = (Var37.y * (func_174(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.x = (Var37.x - 2f);
			Var37.y = (Var37.y - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.x = 288f;
			Var37.y = 106f;
		}
		if (iParam0 == 29 && GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[29])) == -1487683087)
		{
			Var37.x = 106f;
			Var37.y = 106f;
		}
		*fParam3 = ((Var37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.y / IntToFloat(iVar33)) / (Var37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_174(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_175(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_331(8, -1) && func_176() != 65)) || (UI::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::_0x2EAC52B4019E2782()) || Global_76882) || Global_22350.f_8416) || UI::IS_WARNING_MESSAGE_ACTIVE()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_176()
{
	return Global_1312812;
}

int func_177(var uParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = GAMEPLAY::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_178(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_2546095.f_80 == 0)
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_1637, 9))
				{
					if (Global_2546095.f_82 == Global_2546095.f_112)
					{
						func_180("PROP_HEI_Y_0b", 100, 0);
					}
					else if (Global_2546095.f_82 == Global_2546095.f_111)
					{
						func_180("PROP_HEI_Y_2b", 100, 0);
					}
					else if (Global_2546095.f_82 == Global_2546095.f_116)
					{
						func_180("PROP_HEI_I_3b2", 100, 0);
					}
					else if (Global_2546095[Global_2546095.f_82] == PLAYER::PLAYER_ID())
					{
						func_180("MP_PROP_MENU0c", 100, 0);
					}
					else if (Global_2546095[Global_2546095.f_82] != func_247())
					{
						func_180("MP_PROP_MENUyb", 100, 0);
						func_179(PLAYER::GET_PLAYER_NAME(Global_2546095[Global_2546095.f_82]));
					}
				}
				else if (Global_2546095[Global_2546095.f_82] != func_247())
				{
					func_180("MP_PROP_MENU1c", 100, 0);
					func_179(PLAYER::GET_PLAYER_NAME(Global_2546095[Global_2546095.f_82]));
				}
			}
			else
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2546095.f_80, 1))
				{
					func_180("MP_PROP_DES0", 100, 0);
				}
				if (func_1098(&(Global_2546095.f_74), 2000, 0))
				{
					func_1097(&(Global_2546095.f_74));
					Global_2546095.f_80 = 0;
				}
			}
			break;
		
		case 2:
			if (Global_2546095.f_80 == 0)
			{
				if (Global_2546095.f_82 == Global_2546095.f_112)
				{
					func_180("PROP_HEI_Y_0b", 100, 0);
				}
				else if (Global_2546095.f_82 == Global_2546095.f_111)
				{
					func_180("PROP_HEI_Y_2b", 100, 0);
				}
				else if (Global_2546095.f_82 == Global_2546095.f_116)
				{
					func_180("PROP_HEI_I_3b2", 100, 0);
				}
				else
				{
					func_180("MP_PROP_MENU0c", 100, 0);
				}
			}
			break;
	}
}

void func_179(char* sParam0)
{
	if (Global_22350.f_4765 >= 3 || Global_22350.f_4762 >= 4)
	{
		return;
	}
	Global_22350.f_4696[Global_22350.f_4762] = 5;
	Global_22350.f_4762++;
	StringCopy(&(Global_22350.f_4713[Global_22350.f_4765]), sParam0, 64);
	Global_22350.f_4765++;
}

void func_180(char* sParam0, int iParam1, int iParam2)
{
	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = GAMEPLAY::GET_GAME_TIMER();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_181(int iParam0)
{
	iVar0 = 0;
	Global_2546095.f_112 = -1;
	Global_2546095.f_111 = -1;
	Global_2546095.f_116 = -1;
	Global_2546095.f_81 = 0;
	func_197(0, 0);
	iVar1 = 0;
	while (iVar1 < 36)
	{
		Global_2546095[iVar1] = func_247();
		Global_2546095.f_37[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	func_196(1, 1, 0, 0, 0);
	func_195(1, 2, 1, 1, 1);
	func_194(0, 0, 0, 0, 0);
	switch (iParam0)
	{
		case 0:
			func_193("MP_PROP_YACHT");
			if (func_192(iLocal_1642))
			{
				if (func_132(Global_3934119[iLocal_1642].f_3[iLocal_1644], &(Global_2546095.f_113), &(Global_2546095.f_117), 86, iLocal_1644, 1097859072, iLocal_1642))
				{
					if (Global_2546095.f_117)
					{
						func_168(iVar0, "PROP_HEI_E_3", 0, 1, 0, 0);
						Global_2546095[iVar0] = PLAYER::PLAYER_ID();
						Global_2546095.f_37[iVar0] = 86;
						Global_2546095.f_116 = iVar0;
						iVar0++;
					}
					if ((func_1080(PLAYER::PLAYER_ID()) || func_1079(PLAYER::PLAYER_ID())) || func_131(PLAYER::PLAYER_ID()))
					{
						func_168(iVar0, "PROP_HEI_E_0", 0, 1, 0, 0);
						Global_2546095[iVar0] = PLAYER::PLAYER_ID();
						Global_2546095.f_37[iVar0] = 86;
						Global_2546095.f_112 = iVar0;
						iVar0++;
					}
					if (Global_2546095.f_113)
					{
						func_168(iVar0, "PROP_HEI_E_2", 0, 1, 0, 0);
						Global_2546095[iVar0] = PLAYER::PLAYER_ID();
						Global_2546095.f_37[iVar0] = 86;
						Global_2546095.f_111 = iVar0;
						iVar0++;
					}
				}
				func_168(iVar0, "PROP_YACHT", 0, 1, 0, 0);
				Global_2546095[iVar0] = PLAYER::PLAYER_ID();
				Global_2546095.f_37[iVar0] = 86;
				iVar0++;
			}
			iVar1 = 0;
			if (!iLocal_174)
			{
				iVar1 = 0;
				while (iVar1 < 32)
				{
					iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
					if (iVar2 != PLAYER::PLAYER_ID())
					{
						if (func_1094(iVar2, 0, 1))
						{
							bVar3 = false;
							if (((Global_1590535[iVar2].f_274.f_28 == 86 && func_90(iVar2) == iLocal_1642) && GAMEPLAY::IS_BIT_SET(Global_1590535[iVar2].f_274.f_26, 0)) && !GAMEPLAY::IS_BIT_SET(Global_1590535[iVar2].f_274.f_26, 14))
							{
								bVar3 = true;
								GAMEPLAY::SET_BIT(&iLocal_1658, iVar2);
								iLocal_1659[iVar1] = func_90(iVar2);
								Global_2546095[iVar0] = iVar2;
								func_187(&iVar0, iVar2, 0);
							}
							if (!bVar3)
							{
								GAMEPLAY::CLEAR_BIT(&iLocal_1658, iVar2);
							}
						}
						else
						{
							GAMEPLAY::CLEAR_BIT(&iLocal_1658, iVar2);
						}
					}
					iVar1++;
				}
			}
			Global_2546095.f_81 = iVar0;
			func_186(Global_2546095.f_82, 1, 1);
			func_185(-1);
			if (iVar0 > 0)
			{
				func_184(201, "BB_SELECT", -1, 0);
			}
			func_184(202, "BB_BACK", -1, 0);
			break;
		
		case 2:
			func_193(&(Global_3934119[Global_2546095.f_84].f_16));
			if (func_132(Global_3934119[iLocal_1642].f_3[iLocal_1644], &(Global_2546095.f_113), &(Global_2546095.f_117), 86, iLocal_1644, 1097859072, iLocal_1642))
			{
				if (Global_2546095.f_117)
				{
					func_168(iVar0, "PROP_HEI_E_3", 0, 1, 0, 0);
					Global_2546095[iVar0] = PLAYER::PLAYER_ID();
					Global_2546095.f_37[iVar0] = Global_2546095.f_84;
					Global_2546095.f_116 = iVar0;
					iVar0++;
				}
				if ((func_1080(PLAYER::PLAYER_ID()) || func_1079(PLAYER::PLAYER_ID())) || func_131(PLAYER::PLAYER_ID()))
				{
					func_168(iVar0, "PROP_HEI_E_0", 0, 1, 0, 0);
					Global_2546095[iVar0] = PLAYER::PLAYER_ID();
					Global_2546095.f_37[iVar0] = Global_2546095.f_84;
					Global_2546095.f_112 = iVar0;
					iVar0++;
				}
				if (Global_2546095.f_113)
				{
					func_168(iVar0, "PROP_HEI_E_2", 0, 1, 0, 0);
					Global_2546095[iVar0] = PLAYER::PLAYER_ID();
					Global_2546095.f_37[iVar0] = Global_2546095.f_84;
					Global_2546095.f_111 = iVar0;
					iVar0++;
				}
			}
			func_168(iVar0, "PROP_HEI_E_1", 0, 1, 0, 0);
			Global_2546095[iVar0] = PLAYER::PLAYER_ID();
			Global_2546095.f_37[iVar0] = Global_2546095.f_84;
			iVar0++;
			Global_2546095.f_81 = iVar0;
			func_186(Global_2546095.f_82, 1, 1);
			func_185(-1);
			func_183(201, "BB_SELECT", -1);
			func_183(202, "BB_BACK", -1);
			func_182(7, "HUD_INPUT1C", -1);
			break;
	}
}

void func_182(int iParam0, char* sParam1, int iParam2)
{
	sVar0 = CONTROLS::_0x80C2FD58D720C801(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = 361;
	Global_22350.f_5039[Global_22350.f_4769] = iParam0;
	Global_22350.f_4769++;
}

void func_183(int iParam0, char* sParam1, int iParam2)
{
	sVar0 = CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_184(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	sVar0 = CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		GAMEPLAY::SET_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_185(int iParam0)
{
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_22350.f_5052 = 0;
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (!func_177(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar1], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

void func_186(int iParam0, bool bParam1, int iParam2)
{
	Global_22350.f_5739 = iParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268421.f_21), "", 16);
	}
}

void func_187(int iParam0, int iParam1, bool bParam2)
{
	func_168(*iParam0, "MP_PROP_MENU1", 1, 1, 0, 0);
	func_191(PLAYER::GET_PLAYER_NAME(iParam1), 0, 0, 0);
	if (bParam2)
	{
		func_168(*iParam0, "", 1, 1, 0, 0);
		func_188(4, 0);
	}
	*iParam0++;
}

void func_188(int iParam0, bool bParam1)
{
	if (Global_22350.f_5224 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	Global_22350.f_4433[Global_22350.f_5224] = iParam0;
	Global_22350.f_5224++;
	Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 4;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_190();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_173(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_189();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

float func_189()
{
	iVar0 = 0;
	while (iVar0 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_173(Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_190()
{
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 1)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 8)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_152(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
	{
		UI::_SET_TEXT_ENTRY_FOR_WIDTH(&(Global_22350.f_73[Global_22350.f_5742]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 1)
		{
			iVar8++;
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8)]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 8)
		{
			iVar8++;
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8)]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 2)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[((Global_22350.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 3)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[((Global_22350.f_5223 - iVar4) + iVar10)], Global_22350.f_4304[((Global_22350.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 5)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 6)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 7)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 9)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
	{
		fVar0 = UI::_GET_TEXT_SCREEN_WIDTH(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_173(Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_191(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (Global_22350.f_5221 >= 32)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	StringCopy(&(Global_2461220[Global_22350.f_5221]), sParam0, 64);
	Global_22350.f_5221++;
	if (bParam3)
	{
		Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 9;
	}
	else
	{
		Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 7;
	}
	Global_22350.f_5743++;
	fVar0 = func_190();
	if (bParam2)
	{
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_190();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_173(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_189();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

int func_192(int iParam0)
{
	if (iParam0 == func_90(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_193(char* sParam0)
{
	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_194(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5075[0] = iParam0;
	Global_22350.f_5075[1] = iParam1;
	Global_22350.f_5075[2] = iParam2;
	Global_22350.f_5075[3] = iParam3;
	Global_22350.f_5075[4] = iParam4;
}

void func_195(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_196(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_197(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2461220[iVar0]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22350.f_6020[iVar0]), "", 64);
		StringCopy(&(Global_22350.f_7029[iVar0]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268421.f_21), "", 16);
	Global_4268421.f_61 = 0;
	Global_4268421.f_62 = 0;
	Global_4268421.f_63 = 0;
	Global_4268421.f_64 = 0;
	Global_4268421.f_65 = 0;
	Global_4268421.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268421.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268421.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8392 = 0;
	Global_22350.f_8387 = 0;
	Global_22350.f_8397 = 0;
	Global_22350.f_8402 = 0;
	Global_22350.f_8407 = 0;
	Global_22350.f_8409 = 0;
	Global_22350.f_8415 = 0;
	Global_22347 = 0.05f;
	Global_22348 = 0.05f;
	Global_22349 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0.225f;
	}
}

bool func_198(char* sParam0, int iParam1, bool bParam2)
{
	if (!func_177(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0]), sParam0, 16);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_5635[iVar0])))
	{
		UI::REQUEST_ADDITIONAL_TEXT(&(Global_22350.f_5635[iVar0]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!UI::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22350.f_5635[iVar0]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0].f_1), "instructional_buttons", 24);
	bVar2 = func_199(&(Global_22350.f_5660[iVar0]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_199(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

int func_200()
{
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (Global_4268497 > -1)
		{
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_201(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!CONTROLS::_IS_INPUT_DISABLED(2))
	{
		Global_4268497 = -1;
		return;
	}
	CONTROLS::_0x5B73C77D9EB66E24(1);
	fVar0 = Global_22347;
	fVar2 = (fVar0 + Global_22349);
	fVar3 = Global_22350.f_5730;
	fVar1 = (Global_22350.f_5730 - (IntToFloat(Global_22350.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22350.f_5732 < 1)
	{
		fVar1 = (Global_22350.f_5730 - 0.034722f);
	}
	GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
	func_203();
	if (Global_4268497 == -6)
	{
		return;
	}
	Global_4268497 = -1;
	fVar7 = Global_4268491;
	fVar8 = Global_4268492;
	if (Global_22350.f_5733 > Global_22350.f_5732)
	{
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= fVar3) && Global_4268492 < (fVar3 + fVar6))
		{
			Global_4268497 = -2;
			if (bParam3)
			{
				func_202(0);
			}
			return;
		}
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= (fVar3 + fVar6)) && Global_4268492 < (fVar3 + 0.034722f))
		{
			Global_4268497 = -3;
			if (bParam3)
			{
				func_202(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_22350.f_5733 == -1)
		{
			Global_4268497 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22350.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
				GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
				func_164(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22349, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::_SCREEN_DRAW_POSITION_END();
			}
		}
		Global_4268497 = Global_22350.f_8038[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4268497 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4268497 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4268497 = -4;
		return;
	}
	Global_4268497 = -1;
}

void func_202(bool bParam0)
{
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_22347;
	fVar1 = Global_22350.f_5730;
	GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	if (Global_4268497 == -2)
	{
		func_164(fVar0, fVar1, Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4268497 == -3)
	{
		func_164(fVar0, (fVar1 + fVar2), Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

void func_203()
{
	Global_4268493 = Global_4268491;
	Global_4268494 = Global_4268492;
	Global_4268491 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4268492 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4268495 = (Global_4268491 - Global_4268493);
	Global_4268496 = (Global_4268492 - Global_4268494);
}

void func_204()
{
	Global_22211.f_6 = 1;
}

void func_205()
{
	Global_2537071.f_4532 = 0;
}

void func_206()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_1637, 20))
	{
		func_231();
		GAMEPLAY::CLEAR_BIT(&iLocal_1637, 20);
	}
	GAMEPLAY::CLEAR_BIT(&iLocal_1637, 12);
	GAMEPLAY::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26), 15);
	GAMEPLAY::CLEAR_BIT(&iLocal_1638, 9);
	GAMEPLAY::CLEAR_BIT(&iLocal_1638, 1);
	func_211();
	if (GAMEPLAY::IS_BIT_SET(iLocal_1637, 6) || GAMEPLAY::IS_BIT_SET(Local_1558.f_8, 2))
	{
		if (((SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1783227588) <= 0 && !Global_1652630) || Global_1590184.f_26) || iLocal_182)
		{
			if ((!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() && !func_1088()) && !func_1087(PLAYER::PLAYER_ID()))
			{
				func_248(PLAYER::PLAYER_ID(), 1, 0, 0);
				GAMEPLAY::CLEAR_BIT(&iLocal_1637, 6);
				GAMEPLAY::CLEAR_BIT(&(Local_1558.f_8), 2);
			}
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_1637, 6);
			GAMEPLAY::CLEAR_BIT(&(Local_1558.f_8), 2);
		}
	}
	iLocal_182 = 0;
	if (GAMEPLAY::IS_BIT_SET(iLocal_1637, 0))
	{
		if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_1637, 0);
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1590184.f_22), 8);
	if (Global_1590184.f_23 == iLocal_1642)
	{
		Global_1590184.f_23 = -1;
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1637, 13))
	{
		STREAMING::REMOVE_ANIM_DICT(Local_1558.f_9);
		GAMEPLAY::CLEAR_BIT(&iLocal_1637, 13);
	}
	func_854(1);
	func_263();
	func_210();
	func_107();
	func_207();
	func_1097(&uLocal_1654);
	if (iLocal_1657 != -1)
	{
		func_264(&iLocal_1657);
	}
	if (iLocal_178)
	{
		UI::DISPLAY_RADAR(1);
	}
	if (iLocal_177 == 1)
	{
		STREAMING::CLEAR_FOCUS();
	}
	iLocal_178 = 0;
	GAMEPLAY::CLEAR_BIT(&iLocal_1637, 14);
	GAMEPLAY::CLEAR_BIT(&iLocal_1637, 15);
	if (Global_1590184.f_26 || iLocal_177)
	{
		if ((!Global_1652630 && !GAMEPLAY::IS_BIT_SET(Global_2537071.f_393.f_5, 0)) && !GAMEPLAY::IS_BIT_SET(Global_1048576.f_8, 0))
		{
			if (Global_1590184.f_26)
			{
			}
			else if (iLocal_177)
			{
			}
			func_1095();
			GAMEPLAY::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26), 4);
		}
	}
	iLocal_177 = 0;
	if (iLocal_179)
	{
		NETWORK::SET_STORE_ENABLED(1);
		iLocal_179 = 0;
	}
	iLocal_174 = 0;
	if (CAM::DOES_CAM_EXIST(uLocal_1651))
	{
		CAM::DESTROY_CAM(uLocal_1651, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_1652))
	{
		CAM::DESTROY_CAM(uLocal_1652, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26), 11);
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1783227588) <= 0 && !Global_1652630)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1590184.f_22), 8);
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 6))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1590184.f_22, 11))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0) == PLAYER::PLAYER_PED_ID())
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar0, true, 0);
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, 0);
					GAMEPLAY::CLEAR_BIT(&(Global_1590184.f_22), 11);
				}
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, 0);
				NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(0);
				GAMEPLAY::CLEAR_BIT(&(Global_1590184.f_22), 11);
			}
			GAMEPLAY::CLEAR_BIT(&iLocal_1638, 6);
		}
	}
	if ((SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1783227588) <= 0 && !Global_1652630) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (Global_1393138)
		{
			if (func_1094(PLAYER::PLAYER_ID(), 1, 0))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == PLAYER::PLAYER_PED_ID())
					{
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, 1);
					}
				}
			}
			Global_1393138 = 0;
		}
	}
}

void func_207()
{
	func_208(1, -1);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_2546095[iVar0] = func_247();
		iVar0++;
	}
	func_1097(&(Global_2546095.f_74));
	func_1097(&(Global_2546095.f_76));
	Global_2546095.f_80 = 0;
	Global_2546095.f_81 = 0;
	Global_2546095.f_82 = 0;
	Global_2546095.f_83 = 0;
	Global_2546095.f_84 = -1;
	Global_2546095.f_86 = -1;
	Global_2546095.f_108 = -1;
	Global_2546095.f_110 = -1;
	if (GAMEPLAY::IS_BIT_SET(iLocal_1637, 9))
	{
		Global_1590535[PLAYER::PLAYER_ID()].f_274.f_27 = 0;
	}
	GAMEPLAY::CLEAR_BIT(&iLocal_1637, 5);
	GAMEPLAY::CLEAR_BIT(&iLocal_1637, 9);
	GAMEPLAY::CLEAR_BIT(&iLocal_1637, 17);
	GAMEPLAY::CLEAR_BIT(&iLocal_1637, 18);
	GAMEPLAY::CLEAR_BIT(&iLocal_1637, 19);
}

void func_208(bool bParam0, int iParam1)
{
	if (!func_177(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		UI::RESET_HUD_COMPONENT_VALUES(15);
		Global_22350.f_8417 = 0;
	}
	UI::_0x55598D21339CB998(0f);
	if (Global_22350.f_5628[iVar0])
	{
		UI::CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_209(&(Global_22350.f_5660[iVar0]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_209(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

void func_210()
{
	Local_1693 = 0;
	Local_1693.f_4 = 0;
	Local_1693.f_5 = 0;
	Local_1693.f_1 = -1;
	Local_1693.f_6 = 0;
}

void func_211()
{
	if (Local_1558.f_7 >= 0)
	{
		if (!PED::IS_PED_INJURED(Local_1558))
		{
			AI::CLEAR_PED_TASKS(Local_1558);
		}
		Local_1558.f_7 = -1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1558))
	{
		PED::DELETE_PED(&Local_1558);
	}
	func_1097(&(Local_1558.f_4));
	if (CAM::DOES_CAM_EXIST(Local_1558.f_1[0]))
	{
		CAM::DESTROY_CAM(Local_1558.f_1[0], 0);
	}
	Local_1558.f_6 = 0;
	if (GAMEPLAY::IS_BIT_SET(Local_1558.f_8, 1))
	{
		if (!Global_2450632.f_786)
		{
			func_212(0, 0, 0, 1);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1558.f_10[iVar0] = "";
		iVar0++;
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_1637, 13))
	{
		STREAMING::REMOVE_ANIM_DICT(Local_1558.f_9);
		GAMEPLAY::CLEAR_BIT(&iLocal_1637, 13);
	}
	Local_1558.f_9 = "";
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_1558.f_14[iVar0] = { 0f, 0f, 0f };
		Local_1558.f_21[iVar0] = { 0f, 0f, 0f };
		Local_1558.f_28[iVar0] = 0f;
		iVar0++;
	}
	Local_1558.f_31 = { 0f, 0f, 0f };
	Local_1558.f_34 = { 0f, 0f, 0f };
	if (ENTITY::DOES_ENTITY_EXIST(Local_1558))
	{
		PED::DELETE_PED(&Local_1558);
	}
	Local_1558.f_8 = 0;
	if (Local_1558.f_38 >= 0)
	{
		AUDIO::STOP_SOUND(Local_1558.f_38);
	}
}

void func_212(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_229();
	if (bParam0)
	{
		func_227(1);
		UI::CLEAR_HELP(1);
	}
	UI::CLEAR_PRINTS();
	func_4();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(0);
	func_224(0, 1, 1, 0, 0, bParam2);
	func_223();
	func_222(12, 0, -1);
	func_221(1);
	CAM::SET_WIDESCREEN_BORDERS(0, -1);
	UI::DISPLAY_RADAR(1);
	UI::DISPLAY_HUD(1);
	func_220();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam3)
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(0, 0);
			}
		}
	}
	func_219(0);
	if (((((func_218() == 0 && func_217() == 0) && iParam1) && !func_136(PLAYER::PLAYER_ID())) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && func_216())
	{
		func_248(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	Global_2439138.f_3747 = 0;
	func_213();
}

void func_213()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1099(&Global_2546022))
	{
		if (!func_1098(&Global_2546022, 3500, 1) || NETWORK::_0x631DC5DFF4B110E3(PLAYER::PLAYER_ID()))
		{
			if (!func_215())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_1057(&Global_2546022, 1, 0);
				}
				else if (!func_86(PLAYER::PLAYER_ID(), 0))
				{
					if (AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1992968846) != 1 && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1992968846) != 0)
					{
						NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(1);
						NETWORK::SET_PLAYER_VISIBLE_LOCALLY(PLAYER::PLAYER_ID(), 1);
					}
					ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, 0);
				}
			}
			else
			{
				func_1057(&Global_2546022, 1, 0);
			}
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID());
			}
			func_1097(&Global_2546022);
		}
	}
	if (Global_2546026 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2546026, iVar0))
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (func_1094(iVar1, 1, 1))
				{
					func_214(iVar1);
				}
			}
			iVar0++;
		}
	}
}

void func_214(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_2546026, iParam0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_1098(&(Global_2546027[iParam0]), 3500, 1) || NETWORK::_0x631DC5DFF4B110E3(iParam0))
		{
			if (!func_215())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_1057(&(Global_2546027[iParam0]), 1, 0);
				}
				else if (!func_86(iParam0, 0))
				{
					NETWORK::SET_PLAYER_VISIBLE_LOCALLY(iParam0, 1);
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
					{
						ENTITY::SET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(iParam0), 255, 0);
					}
				}
			}
			else
			{
				func_1057(&(Global_2546027[iParam0]), 1, 0);
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(iParam0));
			}
			func_1097(&(Global_2546027[iParam0]));
			GAMEPLAY::CLEAR_BIT(&Global_2546026, iParam0);
		}
	}
}

int func_215()
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING() || NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	return 0;
}

int func_216()
{
	if (func_16() == 0)
	{
		return 1;
	}
	return 0;
}

bool func_217()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 7);
}

int func_218()
{
	return Global_1312877;
}

void func_219(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 13);
	}
}

void func_220()
{
	Global_22211.f_5 = 0;
}

void func_221(int iParam0)
{
	Global_2537071.f_4531 = iParam0;
}

void func_222(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1377170.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				GAMEPLAY::SET_BIT(&(Global_1377170.f_1046), iParam0);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1377170.f_1046), iParam0);
			}
			break;
	}
}

void func_223()
{
	func_221(1);
	func_222(4, 0, -1);
	func_222(6, 0, -1);
	func_222(7, 0, -1);
	func_222(3, 0, -1);
	func_222(1, 0, -1);
	func_222(2, 0, -1);
	func_222(11, 0, -1);
	func_222(13, 0, -1);
	func_222(14, 0, -1);
	func_222(16, 0, -1);
}

void func_224(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_219(1);
		UI::_0xA8FDB297A8D25FBA();
		UI::_0xFDB423997FA30340();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_7())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_226(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_219(0);
		UI::_0xE1CD1E48E025E661();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_226(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_136(PLAYER::PLAYER_ID())) && !func_86(PLAYER::PLAYER_ID(), 0)) && !func_225()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_136(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_225()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

int func_226(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_227(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_110290)
	{
		UI::CLEAR_FLOATING_HELP(iVar0, iParam0);
		func_228(iVar0);
		iVar0++;
	}
}

void func_228(int iParam0)
{
	Global_110290[iParam0].f_21 = 0;
	StringCopy(&(Global_110290[iParam0]), "", 16);
	StringCopy(&(Global_110290[iParam0].f_4), "", 64);
	Global_110290[iParam0].f_23 = 0;
	Global_110290[iParam0].f_24 = { 0f, 0f, 0f };
	Global_110290[iParam0].f_27 = 0;
	Global_110290[iParam0].f_20 = 0;
	Global_110290[iParam0].f_22 = 0;
}

void func_229()
{
	if (!Global_1312575)
	{
		return;
	}
	func_230();
}

void func_230()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

void func_231()
{
	if (Global_1662476)
	{
	}
	Global_1662476 = 0;
}

int func_232(int iParam0, bool bParam1)
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 13))
	{
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	fVar0 = 0f;
	if (iParam0 == 1 && Local_1558.f_6 < 4)
	{
		func_240();
		fVar0 = 0.15f;
	}
	if (iParam0 == 0)
	{
		func_238();
		if (!PED::IS_PED_INJURED(Local_1558))
		{
			PED::SET_PED_RESET_FLAG(Local_1558, 351, 1);
		}
	}
	switch (Local_1558.f_6)
	{
		case 0:
			iLocal_2688 = 0;
			GAMEPLAY::SET_BIT(&iLocal_1637, 13);
			if (func_243(iParam0, bParam1))
			{
				STREAMING::REQUEST_ANIM_DICT(Local_1558.f_9);
				if (STREAMING::HAS_ANIM_DICT_LOADED(Local_1558.f_9))
				{
					func_1057(&(Local_1558.f_4), 1, 0);
					func_237(1);
				}
			}
			break;
		
		case 1:
			if (!func_1098(&(Local_1558.f_4), 5000, 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1558))
				{
					if (!PED::IS_PED_INJURED(Local_1558))
					{
						if (!PED::_0x7350823473013C02(Local_1558))
						{
							return 0;
						}
						if (!PED::HAS_PED_HEAD_BLEND_FINISHED(Local_1558))
						{
							return 0;
						}
					}
				}
			}
			func_237(5);
			break;
		
		case 5:
			func_248(PLAYER::PLAYER_ID(), 0, 573440, 0);
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
			GAMEPLAY::CLEAR_AREA_OF_PROJECTILES(Local_1558.f_31, 2f, 0);
			GAMEPLAY::SET_BIT(&(Local_1558.f_8), 2);
			NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(0, 1);
			func_234(1, 1);
			GAMEPLAY::SET_BIT(&(Local_1558.f_8), 1);
			func_237(2);
		
		case 2:
			if (CAM::DOES_CAM_EXIST(Local_1558.f_1[0]))
			{
				CAM::DESTROY_CAM(Local_1558.f_1[0], 0);
			}
			if (iParam0 == 1)
			{
				GAMEPLAY::SET_BIT(&(Local_1558.f_8), 4);
			}
			Local_1558.f_1[0] = CAM::CREATE_CAMERA(26379945, 1);
			CAM::SET_CAM_PARAMS(Local_1558.f_1[0], Local_1558.f_14[0], Local_1558.f_21[0], Local_1558.f_28[0], 0, 1, 1, 2);
			CAM::SET_CAM_FAR_CLIP(Local_1558.f_1[0], 1000f);
			CAM::SHAKE_CAM(Local_1558.f_1[0], "HAND_SHAKE", 0.25f);
			GAMEPLAY::SET_BIT(&(Local_1558.f_8), 1);
			func_1057(&(Local_1558.f_4), 1, 0);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(Local_1558, false);
			Local_1558.f_7 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1558.f_31, Local_1558.f_34, 2);
			if (!PED::IS_PED_INJURED(Local_1558))
			{
				AI::TASK_SYNCHRONIZED_SCENE(Local_1558, Local_1558.f_7, Local_1558.f_9, Local_1558.f_10[0], 1000f, -1000f, 4, 0, 1148846080, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1598) && iParam0 == 1)
			{
				ENTITY::PLAY_ENTITY_ANIM(iLocal_1598, Local_1558.f_10[1], Local_1558.f_9, 1000f, 0, 0, 0, 0f, 524288);
			}
			PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_1558.f_7, fVar0);
			func_237(3);
			break;
		
		case 3:
			if (func_1098(&(Local_1558.f_4), 5000, 1))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_1558.f_8, 3))
				{
					func_1057(&uLocal_1628, 1, 0);
					func_1057(&uLocal_1626, 1, 0);
					func_233(&uLocal_1651, &uLocal_1652);
					if (!PED::IS_PED_INJURED(Local_1558) && iParam0 == 1)
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_1558, false, 0);
					}
					func_237(4);
					iLocal_1597 = 0;
				}
				else
				{
					return 1;
				}
			}
			if (Local_1558.f_7 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1558.f_7))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1558.f_7) > Local_1558.f_37)
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_1558.f_8, 6))
						{
							if (iParam0 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_1598))
							{
								ENTITY::STOP_ENTITY_ANIM(iLocal_1598, Local_1558.f_10[1], Local_1558.f_9, -1000f);
							}
							GAMEPLAY::SET_BIT(&(Local_1558.f_8), 6);
						}
						else if (GAMEPLAY::IS_BIT_SET(Local_1558.f_8, 3))
						{
							func_1057(&uLocal_1628, 1, 0);
							func_1057(&uLocal_1626, 1, 0);
							func_233(&uLocal_1651, &uLocal_1652);
							if (!PED::IS_PED_INJURED(Local_1558) && iParam0 == 1)
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_1558, false, 0);
							}
							iLocal_1597 = 0;
							func_237(4);
						}
						else
						{
							return 1;
						}
					}
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_1558.f_8, 3))
			{
				func_1057(&uLocal_1628, 1, 0);
				func_1057(&uLocal_1626, 1, 0);
				func_233(&uLocal_1651, &uLocal_1652);
				if (!PED::IS_PED_INJURED(Local_1558) && iParam0 == 1)
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_1558, false, 0);
				}
				iLocal_1597 = 0;
				func_237(4);
			}
			else
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_1098(&uLocal_1628, SYSTEM::ROUND(((5f + 0.5f) * 1000f)), 1))
			{
				if (Local_1558.f_38 >= 0)
				{
					AUDIO::STOP_SOUND(Local_1558.f_38);
				}
				return 1;
			}
			else if (iParam0 == 1)
			{
				if (!iLocal_1597)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Closed", "DLC_APT_YACHT_DOOR_SOUNDS", 1);
					iLocal_1597 = 1;
				}
				func_240();
			}
			break;
	}
	return 0;
}

int func_233(var uParam0, var uParam1)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
	}
	if (CAM::DOES_CAM_EXIST(*uParam1))
	{
		CAM::DESTROY_CAM(*uParam1, 0);
	}
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	*uParam1 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	if (CAM::DOES_CAM_EXIST(*uParam0) && CAM::DOES_CAM_EXIST(*uParam1))
	{
		CAM::SET_CAM_COORD(*uParam0, Global_3934119[iLocal_1642].f_1991);
		CAM::SET_CAM_ROT(*uParam0, Global_3934119[iLocal_1642].f_1991.f_3, 2);
		CAM::SET_CAM_FOV(*uParam0, 50f);
		CAM::SET_CAM_COORD(*uParam1, Global_3934119[iLocal_1642].f_1997);
		CAM::SET_CAM_ROT(*uParam1, Global_3934119[iLocal_1642].f_1997.f_3, 2);
		CAM::SET_CAM_FOV(*uParam1, 50f);
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.25f);
		CAM::SHAKE_CAM(*uParam1, "HAND_SHAKE", 0.25f);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(*uParam1, *uParam0, SYSTEM::ROUND((5f * 1000f)), 1, 1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_234(bool bParam0, int iParam1)
{
	func_236();
	func_227(1);
	UI::CLEAR_HELP(1);
	UI::CLEAR_PRINTS();
	func_224(1, 1, 1, 0, 0, 0);
	func_235();
	func_222(12, 1, -1);
	func_221(0);
	CAM::SET_WIDESCREEN_BORDERS(1, -1);
	UI::DISPLAY_RADAR(0);
	UI::DISPLAY_HUD(0);
	func_227(1);
	func_219(1);
	Global_2439138.f_3747 = 1;
	if (bParam0)
	{
		if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(1, iParam1);
		}
	}
}

void func_235()
{
	func_221(0);
	func_222(4, 1, -1);
	func_222(6, 1, -1);
	func_222(7, 1, -1);
	func_222(3, 1, -1);
	func_222(1, 1, -1);
	func_222(2, 1, -1);
	func_222(11, 1, -1);
	func_222(13, 1, -1);
	func_222(14, 1, -1);
	func_222(16, 1, -1);
}

void func_236()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312575.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312575.f_1));
}

void func_237(int iParam0)
{
	Local_1558.f_6 = iParam0;
}

void func_238()
{
	if (func_239(iLocal_1642) == 6)
	{
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(Local_1558.f_10[0]))
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_1558.f_10[0], "Buzz_Short"))
			{
				fVar0 = 0.353f;
			}
			else if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_1558.f_10[0], "Buzz_Reg"))
			{
				fVar0 = 0.32f;
			}
			else
			{
				fVar0 = 0.373f;
			}
		}
		if (Local_1558.f_7 >= 0)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1558.f_7))
			{
				switch (iLocal_2688)
				{
					case 0:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1558.f_7) >= fVar0)
						{
							if (!PED::IS_PED_INJURED(Local_1558))
							{
								if (Local_1558.f_38 < 0)
								{
									Local_1558.f_38 = AUDIO::GET_SOUND_ID();
								}
								AUDIO::PLAY_SOUND_FROM_ENTITY(Local_1558.f_38, "DOOR_BUZZ_ONESHOT_MASTER", Local_1558, "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS", 0, 0);
							}
							iLocal_2688++;
						}
						break;
					}
				}
			}
	}
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 8;
			break;
		
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
			return 10;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 9;
			break;
		
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
			return 7;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
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
		case 84:
		case 85:
			return 6;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			return 5;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 4;
			break;
		
		case 24:
		case 26:
		case 27:
		case 54:
		case 56:
		case 57:
			return 3;
			break;
		
		case 25:
		case 28:
		case 32:
		case 33:
		case 50:
		case 52:
		case 53:
		case 55:
			return 2;
			break;
		
		case 29:
		case 30:
		case 31:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 51:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

void func_240()
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(Local_1558.f_9))
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_1558.f_9, "anim@apt_trans@hinge_l"))
		{
			fVar0 = 0.271f;
			fVar1 = 0.411f;
		}
		else
		{
			fVar0 = 0.242f;
			fVar1 = 0.418f;
		}
	}
	if (Local_1558.f_7 >= 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1558.f_7))
		{
			switch (iLocal_2687)
			{
				case 0:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1558.f_7) >= fVar0)
					{
						if (Local_1558.f_38 < 0)
						{
							Local_1558.f_38 = AUDIO::GET_SOUND_ID();
						}
						if ((((((func_242(iLocal_1642) == 51 || func_242(iLocal_1642) == 52) || func_242(iLocal_1642) == 53) || func_242(iLocal_1642) == 54) || func_242(iLocal_1642) == 55) || func_242(iLocal_1642) == 56) || func_242(iLocal_1642) == 57)
						{
							AUDIO::PLAY_SOUND_FRONTEND(Local_1558.f_38, "WOODEN_DOOR_OPEN_NO_HANDLE_AT", 0, 1);
						}
						else if (func_241(PLAYER::PLAYER_ID(), 0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(Local_1558.f_38, "PUSH", "DLC_APT_YACHT_DOOR_SOUNDS", 1);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND(Local_1558.f_38, "PUSH", "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS", 1);
						}
						iLocal_2687++;
					}
					break;
				
				case 1:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1558.f_7) >= fVar1)
					{
						if (Local_1558.f_38 < 0)
						{
							Local_1558.f_38 = AUDIO::GET_SOUND_ID();
						}
						if ((((((func_242(iLocal_1642) == 51 || func_242(iLocal_1642) == 52) || func_242(iLocal_1642) == 53) || func_242(iLocal_1642) == 54) || func_242(iLocal_1642) == 55) || func_242(iLocal_1642) == 56) || func_242(iLocal_1642) == 57)
						{
						}
						else if (func_241(PLAYER::PLAYER_ID(), 0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(Local_1558.f_38, "LIMIT", "DLC_APT_YACHT_DOOR_SOUNDS", 1);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND(Local_1558.f_38, "LIMIT", "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS", 1);
						}
						iLocal_2687++;
					}
					break;
				}
			}
	}
}

int func_241(int iParam0, bool bParam1)
{
	if (func_1094(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			if (!Global_2425662[iParam0].f_261.f_14 == -1)
			{
				return 1;
			}
		}
		else if (!Global_2425662[iParam0].f_261.f_16 == -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_242(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 61:
		case 83:
		case 84:
		case 85:
			return 1;
			break;
		
		case 5:
		case 6:
			return 2;
			break;
		
		case 7:
		case 34:
		case 62:
			return 3;
			break;
		
		case 35:
		case 36:
		case 37:
			return 4;
			break;
		
		case 38:
		case 39:
		case 65:
			return 5;
			break;
		
		case 40:
		case 41:
		case 63:
			return 6;
			break;
		
		case 42:
		case 43:
		case 64:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
		
		case 15:
			return 15;
			break;
		
		case 16:
			return 16;
			break;
		
		case 17:
			return 17;
			break;
		
		case 18:
			return 18;
			break;
		
		case 19:
			return 19;
			break;
		
		case 20:
			return 20;
			break;
		
		case 21:
			return 21;
			break;
		
		case 22:
			return 22;
			break;
		
		case 23:
			return 23;
			break;
		
		case 24:
			return 24;
			break;
		
		case 25:
			return 25;
			break;
		
		case 26:
			return 26;
			break;
		
		case 27:
			return 27;
			break;
		
		case 28:
			return 28;
			break;
		
		case 29:
			return 29;
			break;
		
		case 30:
			return 30;
			break;
		
		case 31:
			return 31;
			break;
		
		case 32:
			return 32;
			break;
		
		case 33:
			return 33;
			break;
		
		case 44:
			return 34;
			break;
		
		case 45:
			return 35;
			break;
		
		case 46:
			return 36;
			break;
		
		case 47:
			return 37;
			break;
		
		case 48:
			return 38;
			break;
		
		case 49:
			return 39;
			break;
		
		case 50:
			return 40;
			break;
		
		case 51:
			return 41;
			break;
		
		case 52:
			return 42;
			break;
		
		case 53:
			return 43;
			break;
		
		case 54:
			return 44;
			break;
		
		case 55:
			return 45;
			break;
		
		case 56:
			return 46;
			break;
		
		case 57:
			return 47;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 49;
			break;
		
		case 60:
			return 50;
			break;
		
		case 66:
			return 51;
			break;
		
		case 67:
			return 52;
			break;
		
		case 68:
			return 53;
			break;
		
		case 69:
			return 54;
			break;
		
		case 70:
			return 55;
			break;
		
		case 71:
			return 56;
			break;
		
		case 72:
			return 57;
			break;
		
		case 73:
			return 58;
			break;
		
		case 74:
			return 59;
			break;
		
		case 75:
			return 60;
			break;
		
		case 76:
			return 61;
			break;
		
		case 77:
			return 62;
			break;
		
		case 78:
			return 63;
			break;
		
		case 79:
			return 64;
			break;
		
		case 80:
			return 65;
			break;
		
		case 81:
			return 66;
			break;
		
		case 82:
			return 67;
			break;
		
		case 87:
		case 103:
		case 104:
		case 105:
			return 68;
			break;
		
		case 88:
		case 106:
		case 107:
		case 108:
			return 69;
			break;
		
		case 89:
		case 109:
		case 110:
		case 111:
			return 70;
			break;
		
		case 90:
		case 112:
		case 113:
		case 114:
			return 71;
			break;
		
		case 91:
			return 72;
			break;
		
		case 92:
			return 73;
			break;
		
		case 93:
			return 74;
			break;
		
		case 94:
			return 75;
			break;
		
		case 95:
			return 76;
			break;
		
		case 96:
			return 77;
			break;
		
		case 97:
			return 78;
			break;
		
		case 98:
			return 79;
			break;
		
		case 99:
			return 80;
			break;
		
		case 100:
			return 81;
			break;
		
		case 101:
			return 82;
			break;
		
		case 102:
			return 83;
			break;
	}
	return 0;
}

int func_243(int iParam0, bool bParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(Local_1558.f_8, 0))
	{
		iLocal_2687 = 0;
		switch (iParam0)
		{
			case 0:
				Local_1558.f_9 = "ANIM@APT_TRANS@BUZZER";
				Local_1558.f_10[0] = "buzz_reg";
				Local_1618 = { Global_3934119[iLocal_1642].f_1959 };
				Local_1558.f_14[0] = { Local_1618 };
				Local_1558.f_21[0] = { Local_1618.f_3 };
				Local_1558.f_28[0] = SYSTEM::TO_FLOAT(Local_1618.f_6);
				Local_1612 = { Global_3934119[iLocal_1642].f_1966 };
				Local_1558.f_31 = { Local_1612 };
				Local_1558.f_34 = { Local_1612.f_3 };
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1558))
				{
					if (!func_245())
					{
						Local_1558 = PED::CREATE_PED(4, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(-10f, 0f, 0f), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0, 0);
					}
					else
					{
						Local_1558 = PED::CREATE_PED(5, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(-10f, 0f, 0f), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0, 0);
					}
					PED::CLONE_PED_TO_TARGET(PLAYER::PLAYER_PED_ID(), Local_1558);
				}
				ENTITY::FREEZE_ENTITY_POSITION(Local_1558, true);
				ENTITY::SET_ENTITY_PROOFS(Local_1558, 1, 1, 1, 1, 1, 1, 0, 0);
				Local_1558.f_37 = 0.6f;
				break;
			
			case 1:
				Local_1558.f_9 = "anim@apt_trans@hinge_l";
				Local_1558.f_10[0] = "ext_player";
				Local_1558.f_10[1] = "ext_door";
				if (func_244(iLocal_1642) == 0)
				{
					iVar0 = -1203965791;
				}
				else
				{
					iVar0 = -1788250883;
				}
				if (iVar0 != 0)
				{
				}
				if (!func_45(iVar0))
				{
					return 0;
				}
				Local_1618 = { 0f, 0f, 0f };
				Local_1618.f_3 = { 0f, 0f, 0f };
				Local_1618.f_6 = 0;
				Local_1618 = { Global_3934119[iLocal_1642].f_1972 };
				Local_1558.f_14[0] = { Local_1618 };
				Local_1558.f_21[0] = { Local_1618.f_3 };
				Local_1558.f_28[0] = SYSTEM::TO_FLOAT(Local_1618.f_6);
				Local_1612 = { Global_3934119[iLocal_1642].f_1979 };
				Local_1558.f_31 = { Local_1612 };
				Local_1558.f_34 = { Local_1612.f_3 };
				GAMEPLAY::SET_BIT(&(Local_1558.f_8), 3);
				if (bParam1)
				{
					GAMEPLAY::CLEAR_BIT(&(Local_1558.f_8), 3);
				}
				if (!func_245())
				{
					Local_1558 = PED::CREATE_PED(4, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(-10f, 0f, 0f), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0, 0);
				}
				else
				{
					Local_1558 = PED::CREATE_PED(5, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(-10f, 0f, 0f), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0, 0);
				}
				PED::CLONE_PED_TO_TARGET(PLAYER::PLAYER_PED_ID(), Local_1558);
				ENTITY::FREEZE_ENTITY_POSITION(Local_1558, true);
				ENTITY::SET_ENTITY_PROOFS(Local_1558, 1, 1, 1, 1, 1, 1, 0, 0);
				Local_1558.f_37 = 0.6f;
				break;
		}
		GAMEPLAY::SET_BIT(&(Local_1558.f_8), 0);
	}
	return 1;
}

int func_244(int iParam0)
{
	return Global_2420771.f_97[iParam0].f_6.f_3;
}

bool func_245()
{
	return func_246(PLAYER::PLAYER_ID());
}

int func_246(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

int func_247()
{
	return -1;
}

void func_248(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_256())
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
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_216())
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
				else if (bVar14 || (!func_86(PLAYER::PLAYER_ID(), 0) && !func_137()))
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
					func_253(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_252(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					ENTITY::_SET_ENTITY_REGISTER(iVar27, 1);
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
					func_251();
					func_250();
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
				if (!func_252(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
							ENTITY::_SET_ENTITY_REGISTER(iVar27, 1);
						}
					}
					if (func_249(Global_4456448.f_232883))
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

bool func_249(int iParam0)
{
	return iParam0 == 17;
}

void func_250()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_251()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_252(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
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

void func_253(int iParam0, int iParam1, int iParam2)
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
				func_255();
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
		if (func_86(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::_0x419594E137637120(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		UI::KEY_HUD_COLOUR(iParam0, iParam1);
		func_254(-2008016205, iParam0);
	}
}

void func_254(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_255()
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

int func_256()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_257()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 13))
	{
	}
	if (func_115(&iLocal_1645, iLocal_1642) && !GAMEPLAY::IS_BIT_SET(iLocal_1638, 13))
	{
		func_243(0, 0);
		if (!func_232(0, 0))
		{
			GAMEPLAY::SET_BIT(&iLocal_1638, 9);
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		func_243(1, 1);
		if (!func_232(1, 1))
		{
			GAMEPLAY::SET_BIT(&iLocal_1638, 9);
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_258()
{
	if (!Global_1662476)
	{
	}
	Global_1662476 = 1;
}

bool func_259()
{
	return Global_1662476;
}

void func_260(int iParam0)
{
	if (func_10())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_1081(0))
		{
			func_6(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_7357, 2);
	}
}

void func_261()
{
	Global_42350 = 1;
}

int func_262()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_263()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_1637, 21))
	{
		if (((((((((((((func_267("MP_PROP_IVD_VEH") || func_267("MP_PROP_IVD_VEH1")) || func_267("MP_PROP_IVD_VEH2")) || func_267("MP_PROP_IVD_3a")) || func_267("MP_PROP_IVD_3b")) || func_267("MP_PROP_IVD_3d")) || func_267("MP_PROP_IVD_3e")) || func_267("MP_PROP_IVD_3f")) || func_267("MP_PROP_IVD_3g")) || func_267("PPA_GENYACHT0")) || func_267("PPA_GEN1")) || func_267("PPA_BEAST0")) || func_267("PPA_BEAST1")) || func_267("PPA_CONTRA3"))
		{
			UI::CLEAR_HELP(1);
		}
	}
	GAMEPLAY::CLEAR_BIT(&iLocal_1637, 21);
}

void func_264(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_265(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			Global_42151[iVar0].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_265(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_266()
{
	if (!func_1099(&(Global_2546095.f_78)) || (func_1099(&(Global_2546095.f_78)) && func_1056(Global_2546095.f_78, 2000, 1)))
	{
		if (iLocal_1653 != 0)
		{
			iLocal_1653 = 0;
			iLocal_176 = 0;
		}
	}
}

bool func_267(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_268()
{
	if ((!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() && !func_1088()) && !func_1087(PLAYER::PLAYER_ID()))
	{
		if (func_90(PLAYER::PLAYER_ID()) == iLocal_1642)
		{
			bVar2 = true;
		}
		iVar0 = 0;
		while (iVar0 < Global_3934119[iLocal_1642].f_36)
		{
			iLocal_1644 = iVar0;
			fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_1093(PLAYER::PLAYER_ID()), Global_3934119[iLocal_1642].f_38[iVar0].f_23, 1);
			if (fVar1 <= 30f)
			{
				if (func_115(&iLocal_1645, iLocal_1642) || bVar2)
				{
					func_113(iVar0);
					if (func_317(iVar0))
					{
						if (bVar2 && iLocal_1645 == 0)
						{
							if (!func_316())
							{
								if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0 || PLAYER::ARE_PLAYER_STARS_GREYED_OUT(PLAYER::PLAYER_ID())) && !Global_1661851)
								{
									if (func_127() || func_280(0, 0))
									{
										if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											if (!GAMEPLAY::IS_BIT_SET(iLocal_1637, 7))
											{
												if (func_280(0, 0))
												{
													func_276(0);
												}
												else
												{
													func_275("CUST_YAC_MISO", -1);
												}
												GAMEPLAY::SET_BIT(&iLocal_1637, 7);
											}
										}
									}
									else
									{
										GAMEPLAY::CLEAR_BIT(&iLocal_1637, 7);
										if (Global_3934119[iLocal_1642].f_38[iLocal_1644].f_26 == 1 && func_132(Global_3934119[iLocal_1642].f_3[iLocal_1644], &(Global_2546095.f_113), &(Global_2546095.f_117), 86, iLocal_1644, 1097859072, iLocal_1642))
										{
											func_854(2);
											iLocal_1635 = 0;
										}
										else
										{
											func_854(4);
										}
										CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
										Global_1590184.f_3 = func_247();
										func_208(1, -1);
										return;
									}
								}
								else if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (!GAMEPLAY::IS_BIT_SET(iLocal_1637, 7))
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
										{
											func_275("CUST_YACHT_WH", -1);
										}
										else if (Global_1661851)
										{
											func_275("PROP_YACHT_HEI_WOH", -1);
										}
										GAMEPLAY::SET_BIT(&iLocal_1637, 7);
									}
								}
							}
						}
						else
						{
							iLocal_1644 = iVar0;
							if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0 || PLAYER::ARE_PLAYER_STARS_GREYED_OUT(PLAYER::PLAYER_ID())) && !Global_1661851)
							{
								if (func_127() || func_280(0, 0))
								{
									if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										if (!GAMEPLAY::IS_BIT_SET(iLocal_1637, 7))
										{
											if (func_280(0, 0))
											{
												func_276(0);
											}
											else
											{
												func_275("CUST_YAC_MISO", -1);
											}
											GAMEPLAY::SET_BIT(&iLocal_1637, 7);
										}
									}
								}
								else
								{
									if (iLocal_1656 == -1)
									{
										if (Global_3934119[iLocal_1642].f_38[iVar0].f_26 == 1)
										{
											func_274(&iLocal_1656, 3, "MP_BUZZ2_Y", 0, 0, 0, 0);
										}
										else
										{
											func_274(&iLocal_1656, 3, "MP_BUZZ2_Y", 0, 0, 0, 0);
										}
									}
									if (func_273(iLocal_1656, 1))
									{
										iVar0 = Global_3934119[iLocal_1642].f_36;
										func_264(&iLocal_1656);
										func_854(2);
										iLocal_1635 = 0;
										func_208(1, -1);
										return;
									}
								}
							}
							else if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								if (!GAMEPLAY::IS_BIT_SET(iLocal_1637, 7))
								{
									if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
									{
										func_275("CUST_YACHT_WH", -1);
									}
									else if (Global_1661851)
									{
										func_275("PROP_YACHT_HEI_WOH", -1);
									}
									GAMEPLAY::SET_BIT(&iLocal_1637, 7);
								}
							}
						}
					}
				}
			}
			if (fVar1 <= 10f)
			{
				iLocal_1644 = iVar0;
				if (bVar2)
				{
					if (func_269() && !func_317(iLocal_1644))
					{
						if (bVar2)
						{
							if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0 || PLAYER::ARE_PLAYER_STARS_GREYED_OUT(PLAYER::PLAYER_ID())) && !Global_1661851)
							{
								if (func_127() || func_280(0, 0))
								{
									if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										if (!GAMEPLAY::IS_BIT_SET(iLocal_1637, 7))
										{
											if (func_280(0, 0))
											{
												func_276(0);
											}
											else
											{
												func_275("CUST_YAC_MISO", -1);
											}
											GAMEPLAY::SET_BIT(&iLocal_1637, 7);
										}
									}
								}
								else
								{
									GAMEPLAY::CLEAR_BIT(&iLocal_1637, 7);
									if (Global_3934119[iLocal_1642].f_38[iLocal_1644].f_26 == 1 && func_132(Global_3934119[iLocal_1642].f_3[iLocal_1644], &(Global_2546095.f_113), &(Global_2546095.f_117), 86, iLocal_1644, 1097859072, iLocal_1642))
									{
										GAMEPLAY::SET_BIT(&iLocal_1638, 13);
										iLocal_174 = 1;
										func_854(2);
										iLocal_1635 = 0;
									}
									else
									{
										func_854(4);
									}
									CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
									func_248(PLAYER::PLAYER_ID(), 0, 0, 0);
									GAMEPLAY::SET_BIT(&iLocal_1637, 6);
									Global_1590184.f_3 = func_247();
									func_208(1, -1);
									return;
								}
							}
							else if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								if (!GAMEPLAY::IS_BIT_SET(iLocal_1637, 7))
								{
									if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
									{
										func_275("CUST_YACHT_WH", -1);
									}
									else if (Global_1661851)
									{
										func_275("PROP_YACHT_HEI_WOH", -1);
									}
									GAMEPLAY::SET_BIT(&iLocal_1637, 7);
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_269()
{
	if ((((!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() && !func_272(PLAYER::PLAYER_ID())) && !func_1088()) && !func_1087(PLAYER::PLAYER_ID())) && !GAMEPLAY::IS_BIT_SET(Global_2537071.f_393.f_5, 0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Global_3934119[iLocal_1642].f_38[iLocal_1644], Global_3934119[iLocal_1642].f_38[iLocal_1644].f_3, Global_3934119[iLocal_1642].f_38[iLocal_1644].f_6, 0, 1, 1))
		{
			bLocal_175 = true;
			GAMEPLAY::SET_BIT(&iLocal_1638, 2);
			if ((func_127() && Global_3934119[iLocal_1642].f_38[iLocal_1644].f_26 != 1) || func_280(0, 0))
			{
				if ((!UI::IS_PAUSE_MENU_ACTIVE() && !func_331(8, -1)) && !func_1075())
				{
					if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_1637, 21))
						{
							if (func_280(0, 0))
							{
								func_276(0);
							}
							else
							{
								func_275("CUST_GAR_MISO", -1);
							}
							GAMEPLAY::SET_BIT(&iLocal_1637, 21);
						}
					}
				}
			}
			else
			{
				if (func_316())
				{
					return 0;
				}
				if (func_271(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Global_3934119[iLocal_1642].f_38[iLocal_1644].f_7, 30f))
				{
					if (!func_272(PLAYER::PLAYER_ID()) && !func_270())
					{
						if (!func_1099(&(Global_2546095.f_78)) || func_1056(Global_2546095.f_78, 1000, 1))
						{
							if (!func_270())
							{
								func_263();
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

int func_270()
{
	if (func_1094(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (AI::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			return 1;
		}
		if (func_252(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_271(float fParam0, float fParam1, float fParam2)
{
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_272(int iParam0)
{
	if (func_1094(iParam0, 1, 1))
	{
		iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
		if (AI::GET_IS_TASK_ACTIVE(iVar1, 2))
		{
			return 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 1))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return 1;
			}
		}
		if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iVar1))
		{
			return 1;
		}
		if (AI::GET_SCRIPT_TASK_STATUS(iVar1, -1794415470) == 1 || AI::GET_SCRIPT_TASK_STATUS(iVar1, -1794415470) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_273(int iParam0, bool bParam1)
{
	iVar0 = func_265(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_1081(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0] == 1 && Global_42151[iVar0].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0].f_29)
				{
					return 0;
				}
			}
			Global_42151[iVar0].f_5 = 1;
			Global_42151[iVar0].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42151[iVar0] == 0)
			{
			}
			if (Global_42151[iVar0].f_7)
			{
			}
		}
	}
	return 0;
}

void func_274(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1974937116) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_264(iParam0);
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
		if (!Global_42151[iVar0])
		{
			Global_42151[iVar0] = 1;
			Global_42151[iVar0].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0].f_4 = 0;
			Global_42151[iVar0].f_29 = 0;
			Global_42151[iVar0].f_5 = 0;
			Global_42151[iVar0].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0].f_8), sParam2, 16);
			Global_42151[iVar0].f_6 = iParam3;
			Global_42151[iVar0].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_42151[iVar0].f_7 = 0;
			Global_42151[iVar0].f_3 = iParam5;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_42151[iVar0].f_12 = 1;
				StringCopy(&(Global_42151[iVar0].f_13), sParam4, 64);
				Global_42151[iVar0].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0].f_12 = 0;
				Global_42151[iVar0].f_30 = 0;
			}
			*iParam0 = Global_42151[iVar0].f_1;
			return;
		}
		iVar0++;
	}
}

void func_275(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_276(bool bParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_1573344, 1))
	{
		if (bParam0)
		{
			func_279("PPA_BEAST1", -1);
			func_277(1);
			return;
		}
		func_279("PPA_BEAST0", -1);
		func_277(1);
		return;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1573344, 4))
	{
		func_279("PPA_CONTRA3", -1);
		return;
	}
	if (bParam0)
	{
		func_275("PPA_GEN1", -1);
		return;
	}
	func_275("PPA_GENYACHT0", -1);
}

void func_277(int iParam0)
{
	unk_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_278())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

bool func_278()
{
	return Global_2439138.f_2723[0].f_1 != 0;
}

void func_279(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}

int func_280(bool bParam0, int iParam1)
{
	bVar0 = false;
	bVar1 = false;
	if (iParam1 == 1)
	{
		bVar1 = true;
	}
	else if (iParam1 == 2)
	{
		bVar0 = true;
	}
	if (Global_1573344 != 0)
	{
		if (!bVar0 && iParam1 != 4)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		else if (bVar0)
		{
			iVar2 = Global_1573344;
			GAMEPLAY::CLEAR_BIT(&iVar2, 4);
			if (iVar2 > 0)
			{
				if (bParam0)
				{
				}
				return 1;
			}
		}
		else if (iParam1 == 4)
		{
			iVar3 = Global_1573344;
			GAMEPLAY::CLEAR_BIT(&iVar3, 6);
			if (iVar3 > 0)
			{
				if (bParam0)
				{
				}
				return 1;
			}
		}
		else if (iParam1 == 6)
		{
			uVar4 = Global_1573344;
			GAMEPLAY::CLEAR_BIT(&uVar4, 7);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 8)
		{
			uVar5 = Global_1573344;
			GAMEPLAY::CLEAR_BIT(&uVar5, 8);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 9)
		{
			uVar6 = Global_1573344;
			GAMEPLAY::CLEAR_BIT(&uVar6, 9);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 10)
		{
			uVar7 = Global_1573344;
			GAMEPLAY::CLEAR_BIT(&uVar7, 10);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 11)
		{
			uVar8 = Global_1573344;
			GAMEPLAY::CLEAR_BIT(&uVar8, 11);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 12)
		{
			uVar9 = Global_1573344;
			GAMEPLAY::CLEAR_BIT(&uVar9, 12);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 13)
		{
			uVar10 = Global_1573344;
			GAMEPLAY::CLEAR_BIT(&uVar10, 14);
			if (bParam0)
			{
			}
			return 1;
		}
	}
	if (((((((((((func_312(PLAYER::PLAYER_ID()) && !func_310()) && !(iParam1 == 4 && func_308(PLAYER::PLAYER_ID()))) && !(iParam1 == 3 && func_305())) && !(iParam1 == 6 && func_303())) && !(iParam1 == 7 && func_303())) && !(iParam1 == 8 && func_301())) && !(iParam1 == 9 && func_299())) && !(iParam1 == 10 && func_297())) && !(iParam1 == 11 && func_296())) && !(iParam1 == 12 && func_294())) && !(iParam1 == 13 && func_287()))
	{
		return 1;
	}
	if (func_286(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (func_285(PLAYER::PLAYER_ID(), 21))
	{
		return 1;
	}
	if (func_285(PLAYER::PLAYER_ID(), 25))
	{
		return 1;
	}
	if (func_282() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bParam0)
		{
		}
		return 1;
	}
	if (func_281(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (bVar1)
	{
		if (Global_1590535[PLAYER::PLAYER_ID()] == 9 || Global_4456448.f_2 == 2)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		if (Global_262145.f_15353)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		if (func_1080(PLAYER::PLAYER_ID()) || func_1079(PLAYER::PLAYER_ID()))
		{
			if (bParam0)
			{
			}
			return 1;
		}
	}
	return 0;
}

int func_281(int iParam0)
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

int func_282()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_284();
	}
	return func_283(Global_4456448.f_194990);
}

int func_283(int iParam0)
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

var func_284()
{
	return Global_2450632.f_15;
}

bool func_285(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_208, iParam1);
}

int func_286(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (DLC1::_0x341DE7ED1D2A1BFD(DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11)), 1148412551, 0))
	{
		return 1;
	}
	return 0;
}

int func_287()
{
	return func_288(PLAYER::PLAYER_ID());
}

int func_288(int iParam0)
{
	if (iParam0 != func_247())
	{
		if (func_293(iParam0, 0))
		{
			if ((func_292(iParam0) == 237 && !func_289(iParam0)) || func_292(iParam0) == 238)
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_289(int iParam0)
{
	if (iParam0 == func_247())
	{
		return 0;
	}
	iVar0 = func_290(iParam0);
	if (((((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5)
	{
		return 1;
	}
	return 0;
}

int func_290(int iParam0)
{
	if (func_292(iParam0) == 237 || func_292(iParam0) == 250)
	{
		return func_291(iParam0);
	}
	return -1;
}

int func_291(int iParam0)
{
	if (func_293(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_292(int iParam0)
{
	if (func_293(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_293(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_294()
{
	return func_295(PLAYER::PLAYER_ID());
}

int func_295(int iParam0)
{
	if (iParam0 != func_247())
	{
		return 1;
	}
	return 0;
}

int func_296()
{
	return func_288(PLAYER::PLAYER_ID());
}

int func_297()
{
	return func_298(PLAYER::PLAYER_ID());
}

int func_298(int iParam0)
{
	if (iParam0 != func_247())
	{
		return 1;
	}
	return 0;
}

int func_299()
{
	return func_300(PLAYER::PLAYER_ID());
}

int func_300(int iParam0)
{
	if (func_293(iParam0, 0))
	{
		if (func_292(iParam0) == 233)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_301()
{
	return func_302(PLAYER::PLAYER_ID());
}

int func_302(int iParam0)
{
	if (func_293(iParam0, 0))
	{
		if (func_292(iParam0) == 229)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_303()
{
	return func_304(PLAYER::PLAYER_ID());
}

int func_304(int iParam0)
{
	if (func_292(iParam0) == 225)
	{
		return 1;
	}
	return 0;
}

int func_305()
{
	return func_306(PLAYER::PLAYER_ID());
}

int func_306(int iParam0)
{
	if (func_293(iParam0, 0))
	{
		if (func_307(func_292(iParam0)))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_307(int iParam0)
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

int func_308(int iParam0)
{
	return func_309(func_292(iParam0));
}

int func_309(int iParam0)
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

bool func_310()
{
	return func_311(PLAYER::PLAYER_ID());
}

int func_311(int iParam0)
{
	if (((func_292(iParam0) == 167 || func_292(iParam0) == 168) || func_292(iParam0) == 190) || func_292(iParam0) == 178)
	{
		return 1;
	}
	return 0;
}

int func_312(int iParam0)
{
	if (func_315(iParam0))
	{
		return 1;
	}
	if (func_313(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_313(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_314(iParam0, 9);
	}
	return 0;
}

bool func_314(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_315(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_316()
{
	if (iLocal_1653 != 0)
	{
		return 1;
	}
	return 0;
}

int func_317(int iParam0)
{
	Var0 = { 1f, 1f, 2f };
	if (((!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() && !func_1088()) && !func_1087(PLAYER::PLAYER_ID())) && !GAMEPLAY::IS_BIT_SET(Global_2537071.f_393.f_5, 0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Global_3934119[iLocal_1642].f_38[iParam0].f_12, Var0, 0, 1, 1))
		{
			GAMEPLAY::SET_BIT(&iLocal_1638, 2);
			bLocal_175 = true;
			if (func_270())
			{
				return 0;
			}
			if (func_272(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
			if (!func_1099(&(Global_2546095.f_78)) || func_1056(Global_2546095.f_78, 2000, 1))
			{
				return 1;
			}
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Global_3934119[iLocal_1642].f_38[iParam0].f_12, Var0, 0, 1, 1))
	{
		GAMEPLAY::SET_BIT(&iLocal_1638, 2);
		bLocal_175 = true;
	}
	return 0;
}

int func_318()
{
	if (func_314(PLAYER::PLAYER_ID(), 19) && Global_2537071.f_5896 == iLocal_1642)
	{
		return 1;
	}
	if (Global_262145.f_12613)
	{
		return 1;
	}
	return 0;
}

bool func_319()
{
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_4591, 26);
}

int func_320()
{
	if (SCRIPT::DOES_SCRIPT_EXIST("appMPJobListNEW") && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-880265645) > 0)
	{
		func_1057(&Local_1630, 1, 0);
		return 1;
	}
	if (SCRIPT::DOES_SCRIPT_EXIST("appJIPMP") && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1371023026) > 0)
	{
		func_1057(&Local_1630, 1, 0);
		return 1;
	}
	return 0;
}

int func_321()
{
	if (((((((((func_330() || func_329()) || func_328()) || func_1088()) || (func_327() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_324() && !func_323())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_322() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_322()
{
	return Global_968397;
}

bool func_323()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632.f_2, 27);
}

int func_324()
{
	if (func_326() || func_325())
	{
		return Global_1590535[PLAYER::PLAYER_ID()].f_98 == 8;
	}
	return 0;
}

var func_325()
{
	return Global_2450632.f_635;
}

bool func_326()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632.f_2, 11);
}

bool func_327()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 5);
}

bool func_328()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 2);
}

bool func_329()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 20);
}

bool func_330()
{
	return Global_2450632.f_598;
}

bool func_331(int iParam0, int iParam1)
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

int func_332(bool bParam0)
{
	if (!func_348(60, 0, 0) && !bParam0)
	{
		return 0;
	}
	if (func_347(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_346(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_345(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_344())
	{
		return 0;
	}
	if (func_343())
	{
		return 0;
	}
	if (Global_1590535[PLAYER::PLAYER_ID()] == 1 || Global_1590535[PLAYER::PLAYER_ID()] == 3)
	{
		return 0;
	}
	if (Global_1590535[PLAYER::PLAYER_ID()] == 32)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_342() || func_341())
		{
			return 0;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_33, 23))
	{
		return 0;
	}
	if (func_339(PLAYER::PLAYER_ID(), 158))
	{
		return 1;
	}
	if (func_336(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 0;
	}
	if (func_335())
	{
		return 0;
	}
	if (func_334())
	{
		return 0;
	}
	if (Global_1574575)
	{
		return 0;
	}
	if (func_333())
	{
		return 0;
	}
	if (func_136(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_281(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_333()
{
	return Global_1312854;
}

bool func_334()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 0);
}

int func_335()
{
	iVar0 = Global_2439138;
	if (GAMEPLAY::IS_BIT_SET(Global_1627020[iVar0].f_14, 0) && Global_1627020[iVar0].f_23 == 2)
	{
		return 1;
	}
	return 0;
}

int func_336(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_337(iParam0))
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

bool func_337(int iParam0)
{
	return func_338(iParam0);
}

bool func_338(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_13.f_1, 0);
}

bool func_339(int iParam0, int iParam1)
{
	return iParam1 == func_340(iParam0);
}

int func_340(int iParam0)
{
	if (func_1094(iParam0, 0, 1))
	{
		return Global_2425662[iParam0].f_1;
	}
	return 0;
}

var func_341()
{
	return Global_2450632.f_19;
}

var func_342()
{
	return Global_2450632.f_18;
}

bool func_343()
{
	return Global_1590535[PLAYER::PLAYER_ID()] == 148;
}

bool func_344()
{
	return Global_1590535[PLAYER::PLAYER_ID()] == 5;
}

bool func_345(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 4;
}

bool func_346(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 6;
}

bool func_347(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 5;
}

bool func_348(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_262145.f_7686 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_352(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4718 == 1)
		{
			return 1;
		}
	}
	if (func_351() || func_350())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_349())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1574637[iVar1], iVar0);
}

int func_349()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1731, 23))
	{
		return 1;
	}
	if (func_351())
	{
		return 1;
	}
	if (func_350())
	{
		return 1;
	}
	iVar0 = Global_1388048[func_80(-1)];
	if (GAMEPLAY::IS_BIT_SET(iVar0, 7))
	{
		GAMEPLAY::SET_BIT(&(Global_2537071.f_1731), 23);
		return 1;
	}
	return 0;
}

bool func_350()
{
	return Global_1312865;
}

bool func_351()
{
	return Global_1312867;
}

bool func_352(int iParam0, int iParam1)
{
	if (!func_355())
	{
		return 0;
	}
	if (func_354())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_353(iParam1);
	iVar1 = uVar0;
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_730, iVar1);
}

int func_353(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		default:
	}
	return 1;
}

bool func_354()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_146, 3);
}

int func_355()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_351())
	{
		return 1;
	}
	if (func_350())
	{
		return 1;
	}
	return func_356(120, -1);
}

int func_356(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_80(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_357()
{
	Var0 = { Global_3934119[iLocal_1642].f_146.f_47 };
	fVar3 = 200f;
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1783227588) <= 0 && !func_358())
	{
		if (iLocal_1746 == -1)
		{
			iLocal_1746 = WATER::_0xFDBF4CDBC07E1706((Var0.x - fVar3), (Var0.y - fVar3), (Var0.x + fVar3), (Var0.y + fVar3), 0.02f);
			unk_0x547237AA71AB44DE(0.02f);
		}
	}
	else if (!func_136(PLAYER::PLAYER_ID()))
	{
		if (iLocal_1746 != -1)
		{
			WATER::_0xB1252E3E59A82AAF(iLocal_1746);
			unk_0x547237AA71AB44DE(1f);
			iLocal_1746 = -1;
		}
	}
}

int func_358()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_333())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_238365[0].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_359(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_247())
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

void func_360()
{
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_1011, 2.6f) > 0)
	{
		FIRE::STOP_FIRE_IN_RANGE(Local_1011, 2.6f);
	}
}

void func_361()
{
	if (func_816(PLAYER::PLAYER_ID()))
	{
		func_815();
		return;
	}
	func_814();
	func_812();
	func_811();
	func_810();
	func_398();
	switch (iLocal_1001)
	{
		case 0:
			if (Local_1879 > 0)
			{
				func_397();
				func_396(&iLocal_1001, 1);
			}
			break;
		
		case 1:
			func_395();
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_394(iLocal_1031, &uLocal_1058), func_393(iLocal_1031, &uLocal_1058), 1f, 0, 1, 0))
			{
				func_396(&iLocal_1001, 2);
			}
			else if (iLocal_1031 >= 8)
			{
				iLocal_1031 = 0;
			}
			else
			{
				iLocal_1031++;
			}
			break;
		
		case 2:
			iLocal_1054 = (18 + iLocal_1031);
			if (((((!func_392(func_394(iLocal_1031, &uLocal_1058), func_393(iLocal_1031, &uLocal_1058)) && !func_391()) && func_390(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && !func_1077())
			{
				if (func_387(iLocal_1054, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &(Local_1879.f_1)))
				{
					func_386(iLocal_1031, func_245());
					if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_1081(0))
					{
						if (!func_385())
						{
							GAMEPLAY::CLEAR_BIT(&iLocal_1056, 1);
						}
						if (!GAMEPLAY::IS_BIT_SET(iLocal_1056, 1))
						{
							GAMEPLAY::SET_BIT(&iLocal_1056, 1);
							func_384(iLocal_1031 >= 6);
						}
					}
					else
					{
						if (func_1081(0))
						{
							if (func_385())
							{
								UI::CLEAR_HELP(1);
							}
						}
						GAMEPLAY::CLEAR_BIT(&iLocal_1056, 1);
					}
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 51))
					{
						iLocal_1032 = iLocal_1031;
						if (func_385())
						{
							UI::CLEAR_HELP(1);
						}
						GAMEPLAY::CLEAR_BIT(&iLocal_1056, 1);
						func_382(157);
						func_396(&iLocal_1001, 3);
					}
				}
			}
			else
			{
				if (func_385())
				{
					UI::CLEAR_HELP(1);
				}
				GAMEPLAY::CLEAR_BIT(&iLocal_1056, 1);
			}
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_394(iLocal_1031, &uLocal_1058), func_393(iLocal_1031, &uLocal_1058), 1f, 0, 1, 0))
			{
				if (func_385())
				{
					UI::CLEAR_HELP(1);
				}
				GAMEPLAY::CLEAR_BIT(&iLocal_1056, 1);
				func_396(&iLocal_1001, 1);
			}
			break;
		
		case 3:
			iVar0 = 0;
			if (func_381(iLocal_1054, &iVar0, &(Local_2313[PLAYER::PLAYER_ID()].f_1), &(Local_1879.f_1)))
			{
				if (iVar0 == 2)
				{
					func_380(&(Local_2313[PLAYER::PLAYER_ID()].f_1));
					func_396(&iLocal_1001, 1);
				}
				else if (iVar0 == 1)
				{
					sLocal_1052 = func_71(iLocal_1032, func_245());
					func_396(&iLocal_1001, 8);
				}
			}
			break;
		
		case 8:
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1052))
			{
				return;
			}
			Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_1052, "enter", func_379(iLocal_1032, &uLocal_1058), func_69(iLocal_1032, &uLocal_1058), 0, 2) };
			Var4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_1052, "enter", func_70(iLocal_1032, &uLocal_1058), func_69(iLocal_1032, &uLocal_1058), 0, 2) };
			uVar7 = Var4.z;
			AI::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var1, 1f, 100, uVar7, 0.05f);
			func_396(&iLocal_1001, 4);
			break;
		
		case 4:
			PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.1f);
			if (func_377(iLocal_1032))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1)
				{
					if (CAM::_0xEE778F8C7E1142E2(0) == 4)
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_1638, 16))
						{
							CAM::_0x2A2173E46DAECD12(0, 1);
							GAMEPLAY::SET_BIT(&iLocal_1638, 16);
						}
					}
					uLocal_1002 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iLocal_1032, &uLocal_1058), func_69(iLocal_1032, &uLocal_1058), 2, 1, 0, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1002, sLocal_1052, "enter", 1.5f, -1.5f, 13, 16, 1.5f, 4);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_1002);
					unk_0xC388A0F065F5BC34(PLAYER::GET_PLAYER_INDEX(), 1f);
					func_396(&iLocal_1001, 5);
					Local_2313[PLAYER::PLAYER_ID()].f_3 = iLocal_1032;
				}
			}
			break;
		
		case 5:
			if (func_376())
			{
				UI::CLEAR_HELP(1);
			}
			GAMEPLAY::CLEAR_BIT(&iLocal_1056, 1);
			iVar8 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uLocal_1002);
			if (iVar8 != -1)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 0.99f)
				{
					if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 16) && CAM::_0xEE778F8C7E1142E2(0) == 1)
					{
						CAM::_0x2A2173E46DAECD12(0, 4);
						GAMEPLAY::CLEAR_BIT(&iLocal_1638, 16);
					}
					uLocal_1002 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iLocal_1032, &uLocal_1058), func_69(iLocal_1032, &uLocal_1058), 2, 1, 0, 1065353216, 0, 1065353216);
					func_375();
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1002, sLocal_1052, func_374(iLocal_1020[iLocal_1025]), 4f, -1.5f, 13, 16, 1000f, 4);
					iLocal_1025++;
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_1002);
					GAMEPLAY::CLEAR_BIT(&(Local_2313[PLAYER::PLAYER_ID()]), 0);
					func_396(&iLocal_1001, 6);
				}
			}
			break;
		
		case 6:
			iVar9 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uLocal_1002);
			if (iVar9 != -1)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar9) >= 0.99f)
				{
					uLocal_1002 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iLocal_1032, &uLocal_1058), func_69(iLocal_1032, &uLocal_1058), 2, 1, 0, 1065353216, 0, 1065353216);
					if (iLocal_1025 < iLocal_1024)
					{
						sLocal_1026 = func_374(iLocal_1020[iLocal_1025]);
						iLocal_1025++;
					}
					else if (func_372() == 0)
					{
						sLocal_1026 = func_374(func_371());
					}
					else
					{
						iLocal_1025 = 0;
						iLocal_1024 = 0;
						sLocal_1026 = func_366();
						GAMEPLAY::SET_BIT(&(Local_2313[PLAYER::PLAYER_ID()]), 0);
						func_396(&iLocal_1001, 5);
					}
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1002, sLocal_1052, sLocal_1026, 4f, -1.5f, 13, 16, 1000f, 4);
					if (GAMEPLAY::COMPARE_STRINGS(sLocal_1026, "idle_e", 0, -1) == 0)
					{
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_1879.f_199[iLocal_1032].f_5), false);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT(Local_1879.f_199[iLocal_1032].f_5), uLocal_1002, sLocal_1052, "idle_e_prop_cup", 6f, -4f, 137);
					}
					else if (GAMEPLAY::COMPARE_STRINGS(sLocal_1026, "idle_d", 0, -1) == 0)
					{
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_1879.f_199[iLocal_1032].f_3), false);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT(Local_1879.f_199[iLocal_1032].f_3), uLocal_1002, sLocal_1052, "idle_d_prop_cigar", 6f, -4f, 137);
					}
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_1002);
				}
			}
			if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!func_376())
				{
					GAMEPLAY::CLEAR_BIT(&iLocal_1056, 1);
				}
				if (!GAMEPLAY::IS_BIT_SET(iLocal_1056, 1))
				{
					GAMEPLAY::SET_BIT(&iLocal_1056, 1);
					func_364(iLocal_1032 >= 6);
				}
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&iLocal_1056, 1);
			}
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 51))
			{
				uLocal_1002 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iLocal_1032, &uLocal_1058), func_69(iLocal_1032, &uLocal_1058), 2, 0, 0, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1002, sLocal_1052, "exit", 4f, -4f, 13, 16, 1000f, 4);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_1002);
				if (func_376())
				{
					UI::CLEAR_HELP(1);
				}
				GAMEPLAY::CLEAR_BIT(&iLocal_1056, 1);
				func_396(&iLocal_1001, 9);
			}
			break;
		
		case 9:
			iVar9 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uLocal_1002);
			if (iVar9 != -1)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar9) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 364629851))
				{
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uLocal_1002);
					func_396(&iLocal_1001, 10);
					func_362();
				}
			}
			else
			{
				func_396(&iLocal_1001, 1);
				func_362();
			}
			Local_2313[PLAYER::PLAYER_ID()].f_3 = -1;
			break;
		
		case 10:
			func_396(&iLocal_1001, 1);
			break;
	}
}

void func_362()
{
	func_363(iLocal_1032);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 0, 1);
	func_815();
	GAMEPLAY::CLEAR_BIT(&iLocal_1056, 1);
	sLocal_1052 = "";
	unk_0xC388A0F065F5BC34(PLAYER::GET_PLAYER_INDEX(), 0.5f);
	GAMEPLAY::CLEAR_BIT(&iLocal_1056, 1);
	func_380(&(Local_2313[PLAYER::PLAYER_ID()].f_1));
	iLocal_1025 = 0;
	iLocal_1024 = 0;
	func_396(&iLocal_1001, 1);
	iLocal_1031 = 0;
	iLocal_1032 = 0;
	Global_31036 = 0;
	if (GAMEPLAY::IS_BIT_SET(iLocal_1638, 16))
	{
		GAMEPLAY::CLEAR_BIT(&iLocal_1638, 16);
	}
}

void func_363(int iParam0)
{
	if (iParam0 > -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1879.f_199[iParam0].f_5))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_ENT(Local_1879.f_199[iParam0].f_5)))
			{
				ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_1879.f_199[iParam0].f_5), true, 0);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1879.f_199[iParam0].f_3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_ENT(Local_1879.f_199[iParam0].f_3)))
			{
				ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_1879.f_199[iParam0].f_3), true, 0);
			}
		}
	}
}

void func_364(bool bParam0)
{
	if (bParam0)
	{
		func_365("MPJAC_UNLEAN");
	}
	else
	{
		func_365("MPJAC_EXIT");
	}
}

void func_365(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

var func_366()
{
	return func_367(func_368());
}

char* func_367(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "idle_a";
			break;
		
		case 1:
			sVar0 = "idle_b";
			break;
		
		case 2:
			sVar0 = "idle_c";
			break;
		
		case 3:
			sVar0 = "idle_d";
			break;
		
		case 4:
			sVar0 = "idle_e";
			break;
	}
	return sVar0;
}

int func_368()
{
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 5);
	if (!bLocal_1016)
	{
		while ((iVar0 < 0 || iVar0 > 4) || ((iVar0 == iLocal_1005 || iVar0 == iLocal_1006) || func_369(iLocal_1032, iVar0) == 0))
		{
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 5);
		}
		iLocal_1006 = iLocal_1005;
		iLocal_1005 = iVar0;
	}
	else if (!func_1098(&uLocal_1018, iLocal_1017, 1) || (!func_369(iLocal_1032, 3) && !func_369(iLocal_1032, 4)))
	{
		if (!func_369(iLocal_1032, 3) && !func_369(iLocal_1032, 4))
		{
		}
		while ((iVar0 < 0 || iVar0 > 4) || (((iVar0 == iLocal_1005 || iVar0 == iLocal_1006) || iVar0 == 3) || iVar0 == 4))
		{
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 5);
		}
		iLocal_1006 = iLocal_1005;
		iLocal_1005 = iVar0;
	}
	else
	{
		func_1057(&uLocal_1018, 1, 0);
		if (func_369(iLocal_1032, 3))
		{
			iVar0 = 3;
		}
		else if (func_369(iLocal_1032, 4))
		{
			iVar0 = 4;
		}
	}
	return iVar0;
}

int func_369(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			return 1;
			break;
		
		case 3:
			if (Local_1879.f_199[iParam0].f_1)
			{
				if (func_370(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_1879.f_199[iParam0].f_3), 1), Local_1879.f_199[iParam0].f_6, 0.1f, 0))
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
			break;
		
		case 4:
			if (Local_1879.f_199[iParam0].f_2)
			{
				if (func_370(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_1879.f_199[iParam0].f_5), 1), Local_1879.f_199[iParam0].f_12, 0.05f, 0))
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
			break;
	}
	return 1;
}

int func_370(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

int func_371()
{
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3);
	while ((iVar0 < 0 || iVar0 > 2) || (iVar0 == iLocal_1007 || iVar0 == iLocal_1008))
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	iLocal_1008 = iLocal_1007;
	iLocal_1007 = iVar0;
	return iVar0;
}

bool func_372()
{
	if ((iLocal_1054 != 21 && iLocal_1054 != 20) && iLocal_1054 != 19)
	{
		return 1;
	}
	bVar0 = true;
	switch (iLocal_1054)
	{
		case 21:
			bVar0 = !func_373(2);
			break;
		
		case 20:
			bVar0 = (!func_373(3) && !func_373(1));
			break;
		
		case 19:
			bVar0 = !func_373(2);
			break;
	}
	return bVar0;
}

int func_373(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_2313[iVar0].f_3 == iParam0)
			{
				return GAMEPLAY::IS_BIT_SET(Local_2313[iVar0], 0);
			}
		}
		iVar0++;
	}
	return 0;
}

char* func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "base_a";
			break;
		
		case 1:
			sVar0 = "base_b";
			break;
		
		case 2:
			sVar0 = "base_c";
			break;
	}
	return sVar0;
}

void func_375()
{
	iVar1 = func_371();
	fVar0 = ENTITY::_GET_ENTITY_ANIM_DURATION(sLocal_1052, func_374(iVar1));
	fVar2 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(8f, 10f);
	fLocal_1004 = (fVar2 / fVar0);
	if (fLocal_1004 > 1f)
	{
		while (fLocal_1004 > 1f && iLocal_1024 < 3)
		{
			iLocal_1020[iLocal_1024] = iVar1;
			iLocal_1024++;
			fVar2 = (fVar2 - fVar0);
			iVar1 = func_371();
			fVar0 = ENTITY::_GET_ENTITY_ANIM_DURATION(sLocal_1052, func_374(iVar1));
			fLocal_1004 = (fVar2 / fVar0);
			if (fLocal_1004 < 1f)
			{
				if (iLocal_1024 < 3)
				{
					iLocal_1020[iLocal_1024] = iVar1;
					iLocal_1024++;
				}
			}
		}
	}
	else
	{
		iLocal_1020[iLocal_1024] = iVar1;
		iLocal_1024++;
	}
}

bool func_376()
{
	return (func_267("MPJAC_EXIT") || func_267("MPJAC_UNLEAN"));
}

int func_377(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Local_1879.f_199[iParam0].f_1 == 1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1879.f_199[iParam0].f_3))
			{
				if (func_378(Local_1879.f_199[iParam0].f_3))
				{
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_1879.f_199[iParam0].f_3), false, 0);
					return 1;
				}
			}
			else
			{
				return 0;
			}
		}
		if (Local_1879.f_199[iParam0].f_2 == 1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1879.f_199[iParam0].f_5))
			{
				if (func_378(Local_1879.f_199[iParam0].f_5))
				{
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_1879.f_199[iParam0].f_5), false, 0);
					return 1;
				}
			}
			else
			{
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	if (Local_1879.f_199[iParam0].f_1 == 0 && Local_1879.f_199[iParam0].f_2 == 0)
	{
		return 1;
	}
	return 0;
}

int func_378(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

Vector3 func_379(int iParam0, var uParam1)
{
	if (iParam0 > -1 && iParam0 < 8)
	{
		return uParam1->f_147[iParam0];
	}
	return 0f, 0f, 0f;
}

void func_380(var uParam0)
{
	*uParam0 = 0;
}

int func_381(int iParam0, int iParam1, var uParam2, var uParam3)
{
	*uParam2 = iParam0;
	if ((*uParam3)[iParam0] != 0)
	{
		if (GAMEPLAY::IS_BIT_SET((*uParam3)[iParam0], PLAYER::PLAYER_ID()))
		{
			*iParam1 = 1;
			return 1;
		}
		else
		{
			*iParam1 = 2;
			return 1;
		}
	}
	return 0;
}

void func_382(int iParam0)
{
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_383()].f_6174.f_4111[iVar0] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_383()
{
	iVar0 = 0;
	return iVar0;
}

void func_384(bool bParam0)
{
	if (bParam0)
	{
		func_365("MPJAC_LEAN");
	}
	else
	{
		func_365("MPJAC_SIT");
	}
}

bool func_385()
{
	return (func_267("MPJAC_SIT") || func_267("MPJAC_LEAN"));
}

void func_386(int iParam0, bool bParam1)
{
	if (iParam0 <= 5)
	{
		sVar0 = func_73(Local_2538[iParam0], bParam1);
		STREAMING::REQUEST_ANIM_DICT(sVar0);
	}
	else
	{
		sVar0 = func_72(Local_2538[iParam0], bParam1);
		STREAMING::REQUEST_ANIM_DICT(sVar0);
	}
}

int func_387(int iParam0, struct<3> Param1, var uParam4)
{
	if (!func_389(iParam0, Param1, uParam4))
	{
		return 0;
	}
	if (!func_388())
	{
		return 0;
	}
	return 1;
}

int func_388()
{
	if (((((((((((((((((!func_1094(PLAYER::PLAYER_ID(), 1, 1) || func_391()) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GOING_INTO_COVER(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FATALLY_INJURED(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::_0xDCCA191DF9980FD7(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	return 1;
}

int func_389(int iParam0, struct<3> Param1, var uParam4)
{
	if ((*uParam4)[iParam0] != 0 && !GAMEPLAY::IS_BIT_SET((*uParam4)[iParam0], PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (GAMEPLAY::IS_POSITION_OCCUPIED(Param1, 0.05f, 0, 1, 0, 0, 0, 0, 0) || GAMEPLAY::IS_POSITION_OCCUPIED(Param1, 0.05f, 0, 0, 1, 0, 0, PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(iVar1), Param1, 0.5f, 0.5f, 0.5f, 0, 1, 0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_390(int iParam0)
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

int func_391()
{
	if (Global_4254512.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

int func_392(struct<3> Param0, struct<3> Param3)
{
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				if (func_1094(iVar1, 1, 1))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iVar1), Param0, Param3, 1f, 0, 1, 0))
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

Vector3 func_393(int iParam0, var uParam1)
{
	if (iParam0 > -1 && iParam0 < 8)
	{
		return uParam1->f_98[iParam0];
	}
	return 0f, 0f, 0f;
}

Vector3 func_394(int iParam0, var uParam1)
{
	if (iParam0 > -1 && iParam0 < 8)
	{
		return uParam1->f_49[iParam0];
	}
	return 0f, 0f, 0f;
}

void func_395()
{
	if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_1093(PLAYER::PLAYER_ID()), Local_1011, 1) <= fLocal_1014)
	{
		if (!Global_31036)
		{
			Global_31036 = 1;
			if (!func_86(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::_0xFF300C7649724A0B(PLAYER::PLAYER_ID(), 0);
				NETWORK::_0xC505036A35AFD01B(1);
			}
		}
		GAMEPLAY::SET_BIT(&iLocal_1056, 7);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&iLocal_1056, 6);
		GAMEPLAY::CLEAR_BIT(&iLocal_1056, 7);
	}
	if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_1093(PLAYER::PLAYER_ID()), Local_1011, 1) > fLocal_1015)
	{
		if (Global_31036)
		{
			Global_31036 = 0;
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_1056, 6);
		GAMEPLAY::SET_BIT(&iLocal_1056, 8);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&iLocal_1056, 8);
		if (!GAMEPLAY::IS_BIT_SET(iLocal_1056, 7) && !GAMEPLAY::IS_BIT_SET(iLocal_1056, 8))
		{
			GAMEPLAY::SET_BIT(&iLocal_1056, 6);
		}
	}
}

void func_396(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_397()
{
	func_74();
}

void func_398()
{
	if (!func_806())
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_1056, 7))
		{
			if (func_805(iLocal_1642))
			{
				func_800(1);
			}
			else
			{
				func_399(1);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iLocal_1056, 8))
		{
			func_399(1);
		}
	}
}

void func_399(bool bParam0)
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_1056, 3))
	{
		iLocal_2964 = 0;
		if (func_799(PLAYER::PLAYER_ID()) && func_797() != 0)
		{
			func_739(func_797(), 1, 0);
			GAMEPLAY::CLEAR_BIT(&iLocal_1056, 3);
			GAMEPLAY::CLEAR_BIT(&iLocal_2963, 1);
			GAMEPLAY::CLEAR_BIT(&iLocal_2963, 0);
		}
		else if (func_737(0) && func_797() != 0)
		{
			func_734(0);
			GAMEPLAY::CLEAR_BIT(&iLocal_1056, 3);
			GAMEPLAY::CLEAR_BIT(&iLocal_2963, 1);
			GAMEPLAY::CLEAR_BIT(&iLocal_2963, 0);
		}
		else if (GAMEPLAY::IS_BIT_SET(iLocal_2963, 1) || GAMEPLAY::IS_BIT_SET(iLocal_2963, 0))
		{
			func_734(1);
			func_613(-1, 0);
			GAMEPLAY::CLEAR_BIT(&iLocal_1056, 3);
			GAMEPLAY::CLEAR_BIT(&iLocal_2963, 1);
			GAMEPLAY::CLEAR_BIT(&iLocal_2963, 0);
		}
		else
		{
			if (bParam0)
			{
				if (!func_612(PLAYER::PLAYER_PED_ID(), 20, 1))
				{
					return;
				}
			}
			func_536(PLAYER::PLAYER_PED_ID(), 20, 0, 1);
			func_535(20, 1);
			func_521(PLAYER::PLAYER_PED_ID(), 11, func_533(PLAYER::PLAYER_PED_ID(), 11), 0, 0);
			func_400(PLAYER::PLAYER_PED_ID(), 0, 0);
			GAMEPLAY::CLEAR_BIT(&iLocal_1056, 3);
		}
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Clothes_On", PLAYER::PLAYER_PED_ID(), "GTAO_Hot_Tub_Sounds", 0, 0);
	}
}

void func_400(int iParam0, bool bParam1, bool bParam2)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_76431;
		PED::_CLEAR_PED_FACIAL_DECORATIONS(iParam0);
		iVar14 = func_520(iParam0);
		bVar15 = func_515(iParam0, 0);
		bVar16 = func_511(iParam0);
		bVar17 = func_440(iParam0);
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
			if (func_437(iVar18, iVar0))
			{
				if (func_430(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (func_427(iParam0, &Var1, iVar18, Var1.f_4, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::_SET_PED_DECORATION(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (func_437(123, iVar0))
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
					if (func_437(iVar36, iVar0))
					{
						if (func_427(iParam0, &(Var21.f_7), iVar36, Var21.f_2, Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							if (!func_402(Var21.f_2, Var21.f_3, iVar36))
							{
								PED::_SET_PED_DECORATION(iParam0, Var21.f_2, Var21.f_3);
								func_401(iParam0, Var21.f_2, Var21.f_3);
							}
						}
					}
				}
			}
			iVar19++;
		}
	}
}

void func_401(int iParam0, int iParam1, int iParam2)
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

int func_402(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case -1265443416:
				case 676807987:
					if (func_424(30260, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1265443416);
					break;
				
				case 1888753218:
				case 272160153:
					if (func_424(30261, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1888753218);
					break;
				
				case -552467991:
				case 1593344440:
					if (func_424(30262, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -552467991);
					break;
				
				case -1655919948:
				case 546222390:
					if (func_424(30263, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1655919948);
					break;
				
				case -917106601:
				case 1983375900:
					if (func_424(30264, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -917106601);
					break;
				
				case 1595446967:
				case -620589387:
					if (func_424(30265, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1595446967);
					break;
				
				case -530593323:
				case 383923929:
					if (func_424(30266, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -530593323);
					break;
				
				case 561619447:
				case -1703406594:
					if (func_424(30267, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 561619447);
					break;
				
				case -1913656173:
				case -398286533:
					if (func_424(30268, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1913656173);
					break;
				
				case -1766901922:
				case -80478106:
					if (func_424(30269, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1766901922);
					break;
				
				case 2091781849:
				case 1835331655:
					if (func_424(30270, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 2091781849);
					break;
				
				case 1824588341:
				case -1650596870:
					if (func_424(30271, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1824588341);
					break;
				
				case 242597641:
				case 1231926496:
					if (func_424(30272, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 242597641);
					break;
				
				case 566785691:
				case -1506181253:
					if (func_424(30273, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 566785691);
					break;
				
				case -2091312957:
				case -1737145605:
					if (func_424(30274, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -2091312957);
					break;
				
				case -2079214831:
				case 1673851512:
					if (func_424(30275, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -2079214831);
					break;
				
				case 1359156274:
				case 1023339598:
					if (func_424(30276, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1359156274);
					break;
				
				case 1904247246:
				case -163738770:
					if (func_424(30277, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1904247246);
					break;
				
				case -1351518396:
				case 1863218823:
					if (func_424(30278, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1351518396);
					break;
				
				case -797874817:
				case 333966447:
					if (func_424(30279, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -797874817);
					break;
				
				case -385507297:
				case 1412626052:
					if (func_424(30280, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -385507297);
					break;
				
				case 2011910758:
				case -39100956:
					if (func_424(30281, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 2011910758);
					break;
				
				case -1953985443:
				case 1631533003:
					if (func_424(30282, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1953985443);
					break;
				
				case -1124222352:
				case 1493430918:
					if (func_424(30283, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1124222352);
					break;
				
				case -1806994767:
				case -196693334:
					if (func_424(30284, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1806994767);
					break;
				
				case -1445761968:
				case 553507495:
					if (func_424(30285, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1445761968);
					break;
				
				case -89186417:
				case 2003474700:
					if (func_424(30286, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -89186417);
					break;
				
				case -308083083:
				case 1121792228:
					if (func_424(30287, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -308083083);
					break;
				
				case 667714507:
				case -1424651669:
					if (func_424(30288, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 667714507);
					break;
				
				case -1610210252:
				case -1454164346:
					if (func_424(30289, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1610210252);
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
					if (func_424(28255, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -417116499);
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
					if (func_420(89, -1) || func_424(30254, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1246110729);
					break;
				
				case 461575135:
				case 1250161120:
					if (func_420(90, -1) || func_424(30255, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 461575135);
					break;
				
				case -386163163:
				case 1288201657:
					if (func_420(92, -1) || func_424(30256, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -386163163);
					break;
				
				case -1414541879:
				case 111412152:
					if ((((func_420(89, -1) && func_420(90, -1)) && func_420(92, -1)) && func_420(91, -1)) || func_424(30257, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1414541879);
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
					if (func_420(78, -1) || func_424(28199, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1413356029);
					break;
				
				case 836015556:
				case -1849502305:
					if (((func_420(77, -1) && func_420(78, -1)) && func_419(92, -1) >= func_418(92, 5, 9)) || func_424(28200, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1849502305);
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
					if (((func_419(93, -1) >= func_418(93, 5, 9) && func_420(79, -1)) && func_420(80, -1)) || func_424(28204, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, ((iParam1 == 1505693935 || iParam1 == -1551981580) || iParam1 == 1572497951));
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
					if (func_420(81, -1) || func_424(28206, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -965460704);
					break;
				
				case 223413431:
				case -1917254263:
					if (func_419(94, -1) >= func_418(94, 5, 9) || func_424(28207, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1917254263);
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
					if (((func_420(84, -1) && func_420(85, -1)) && func_419(97, -1) >= func_418(97, 5, 9)) || func_424(28212, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1777785544);
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
					if (func_424(28249, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -2062177771);
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
					if (func_424(28183, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1921321590);
					break;
				
				case -1843193891:
				case -822177429:
					if (func_424(28182, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -822177429);
					break;
				
				case -1224204417:
				case -531271155:
					if (func_424(28184, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -531271155);
					break;
				
				case 921109652:
				case 412829693:
					if (func_424(28181, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 412829693);
					break;
				
				case -1009122462:
				case -1411787934:
					if (func_424(28178, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1411787934);
					break;
				
				case -2143877160:
				case 653645139:
					if (func_424(28177, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 653645139);
					break;
				
				case 985961343:
				case 1848048195:
					if (func_424(28176, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1848048195);
					break;
				
				case 906071982:
				case -781400442:
					if (func_424(28180, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -781400442);
					break;
				
				case 566663142:
				case 1507919906:
					if (func_424(28179, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1507919906);
					break;
				
				case 764251611:
				case -1381102054:
					if (((((((((func_424(28176, -1, -1) && func_424(28177, -1, -1)) && func_424(28178, -1, -1)) && func_424(28179, -1, -1)) && func_424(28180, -1, -1)) && func_424(28181, -1, -1)) && func_424(28182, -1, -1)) && func_424(28183, -1, -1)) && func_424(28184, -1, -1)) || func_424(28221, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1381102054);
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
					if (func_424(28191, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 565394453);
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
					if (func_424(28190, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -498335731);
					break;
				
				case -1643354138:
				case -137061435:
					if (func_424(28189, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -137061435);
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
					if (func_415(0, 1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 2077453849);
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
					if ((((((((((((((((((func_420(77, -1) && func_420(78, -1)) && func_419(92, -1) >= func_418(92, 5, 9)) && func_419(93, -1) >= func_418(93, 5, 9)) && func_420(79, -1)) && func_420(80, -1)) && func_420(81, -1)) && func_419(94, -1) >= func_418(94, 5, 9)) && func_419(95, -1) >= func_418(95, 5, 9)) && func_420(82, -1)) && func_420(83, -1)) && func_419(96, -1) >= func_418(96, 5, 9)) && func_420(84, -1)) && func_420(85, -1)) && func_419(97, -1) >= func_418(97, 5, 9)) && func_420(86, -1)) && func_420(87, -1)) && func_420(88, -1)) || func_424(28222, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 585832887);
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
					return !func_421(iParam2, iParam1, iParam1 == 1352224647);
					break;
				
				case 1857392409:
				case -524815620:
					return !func_421(iParam2, iParam1, iParam1 == 1857392409);
					break;
				
				case 580667351:
				case -1790763503:
					if (func_424(27109, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 580667351);
					break;
				
				case -1355259635:
				case -384612940:
					if (func_424(27110, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1355259635);
					break;
				
				case 711356870:
				case 697971620:
					if (func_424(27111, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 711356870);
					break;
				
				case 588276502:
				case 70412493:
					if (func_424(27112, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 588276502);
					break;
				
				case 1184770609:
				case -496458438:
					if (func_424(27113, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1184770609);
					break;
				
				case -893208491:
				case -346765569:
					if (func_424(27114, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -893208491);
					break;
				
				case 1538832911:
				case -1550271812:
					if (func_424(27115, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1538832911);
					break;
			}
			break;
		
		case -2145114209:
			switch (iParam1)
			{
				case -1015392647:
				case 1817749559:
					if (func_424(25032, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1015392647);
					break;
				
				case 1742471685:
				case 1403640225:
					if (func_424(25033, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1742471685);
					break;
				
				case 408116861:
				case 1306937694:
					if (func_424(25034, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 408116861);
					break;
				
				case -1855327598:
				case -95533995:
					if (func_424(25035, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1855327598);
					break;
				
				case 1578402908:
				case -1871451886:
					if (func_424(25036, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1578402908);
					break;
				
				case -1423366674:
				case -1120843246:
					if (func_424(25037, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1423366674);
					break;
				
				case 1611107047:
				case 2081997561:
					if (func_424(25038, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1611107047);
					break;
				
				case 742927305:
				case -1339214923:
					if (func_424(25039, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 742927305);
					break;
				
				case -1578833665:
				case 9807447:
					if (func_424(25040, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1578833665);
					break;
				
				case 773738667:
				case -236005319:
					if (func_424(25041, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 773738667);
					break;
				
				case 213007702:
				case -1470794594:
					if (func_424(25042, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 213007702);
					break;
				
				case 432208089:
				case -2100868384:
					if (func_424(25043, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 432208089);
					break;
				
				case 35817542:
				case 805626890:
					if (func_424(25044, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 35817542);
					break;
				
				case -1786080093:
				case -438487729:
					if (func_424(25045, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1786080093);
					break;
				
				case -215923306:
				case 1258452311:
					if (func_424(25046, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -215923306);
					break;
				
				case 1275581512:
				case -1387587887:
					if (func_424(25047, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1275581512);
					break;
				
				case -1214009019:
				case 390131826:
					if (func_424(25048, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1214009019);
					break;
				
				case 1639713863:
				case -933865090:
					if (func_424(25049, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1639713863);
					break;
				
				case 529311368:
				case 42888304:
					if (func_424(25050, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 529311368);
					break;
				
				case -1033895864:
				case -1512618189:
					if (func_424(25051, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1033895864);
					break;
				
				case 924043677:
				case 1805955770:
					if (func_424(25052, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 924043677);
					break;
				
				case -574749266:
				case 2040741242:
					if (func_424(25053, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -574749266);
					break;
				
				case 519463901:
				case -1572115827:
					if (func_424(25054, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 519463901);
					break;
				
				case -643353187:
				case -2101278774:
					if (func_424(25055, -1, -1))
					{
						return 0;
					}
					if (func_424(27077, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -643353187);
					break;
				
				case 1571011017:
				case -2006216868:
					if (func_424(25056, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1571011017);
					break;
				
				case -94540936:
				case 1445470992:
					if (func_424(25057, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -94540936);
					break;
				
				case 1884218662:
				case 31459402:
					if (func_424(25058, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1884218662);
					break;
				
				case -345261869:
				case 850282323:
					if (func_424(25059, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -345261869);
					break;
				
				case -1022859058:
				case 1518409673:
					if (func_424(25060, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1022859058);
					break;
				
				case -1786322924:
				case 576453072:
					if (func_424(25061, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1786322924);
					break;
				
				case 2085269022:
				case 1343575520:
					if (func_424(25062, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 2085269022);
					break;
				
				case 1511882653:
				case -1244055789:
					if (func_424(25063, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1511882653);
					break;
				
				case -506986385:
				case 1650491806:
					if (func_424(25064, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -506986385);
					break;
				
				case -874081588:
				case 507754313:
					if (func_424(25065, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -874081588);
					break;
				
				case -2043405937:
				case -1168735793:
					if (func_424(25066, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -2043405937);
					break;
				
				case 59038842:
				case 539301314:
					if (func_424(25067, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 59038842);
					break;
				
				case 1101237057:
				case 485114319:
					if (func_424(25068, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1101237057);
					break;
				
				case -657535677:
				case 1397146165:
					if (func_424(25069, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -657535677);
					break;
				
				case -2093585025:
				case -922912500:
					if (func_424(25070, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -2093585025);
					break;
				
				case 908383468:
				case 898093918:
					if (func_424(25071, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 908383468);
					break;
				
				case -1608760399:
				case -513817029:
					if (func_424(25072, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1608760399);
					break;
				
				case 1373660540:
				case 134762953:
					if (func_424(25073, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1373660540);
					break;
				
				case 1854316713:
				case 252404144:
					if (func_424(25074, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1854316713);
					break;
				
				case -119951196:
				case 168579849:
					if (func_424(25075, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -119951196);
					break;
				
				case -1649842228:
				case 1888095634:
					if (func_424(25076, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1649842228);
					break;
				
				case -1640764925:
				case -1046236786:
					if (func_424(25077, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1640764925);
					break;
				
				case 1787927716:
				case 33901453:
					if (func_424(25078, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1787927716);
					break;
				
				case 104283481:
				case -2043232938:
					if (func_424(25079, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 104283481);
					break;
				
				case 378263500:
				case 1113927554:
					if (func_424(25080, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 378263500);
					break;
				
				case -1061215309:
				case -1602559301:
					if (func_424(25081, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1061215309);
					break;
				
				case 1034166199:
				case -1167812298:
					if (func_424(25082, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1034166199);
					break;
				
				case 1828057305:
				case 1912961832:
					if (func_424(25083, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1828057305);
					break;
				
				case -1486297381:
				case 647456058:
					if (func_424(25084, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1486297381);
					break;
				
				case -540767159:
				case -717523161:
					if (func_424(25085, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -540767159);
					break;
				
				case -1235960692:
				case -1641870267:
					if (func_424(25086, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1235960692);
					break;
				
				case -329316995:
				case 1857030685:
					if (func_424(25087, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -329316995);
					break;
				
				case -581880272:
				case -1074922646:
					if (func_424(25088, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -581880272);
					break;
				
				case -1807345434:
				case -1544308671:
					if (func_424(25089, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1807345434);
					break;
				
				case -1018409435:
				case -480375220:
					if (func_424(25090, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1018409435);
					break;
				
				case -136011898:
				case -1158306419:
					if (func_424(25091, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -136011898);
					break;
				
				case -2069494727:
				case 808115088:
					if (func_424(25092, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -2069494727);
					break;
				
				case -642887005:
				case 1544542048:
					if (func_424(25093, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -642887005);
					break;
				
				case -1810837638:
				case 212713658:
					if (func_424(25094, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1810837638);
					break;
				
				case 1034484576:
				case -537477127:
					if (func_424(25095, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1034484576);
					break;
				
				case 1979445594:
				case -2067132678:
					if (func_424(25096, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1979445594);
					break;
				
				case -1533877336:
				case 1060051174:
					if (func_424(25097, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1533877336);
					break;
				
				case -892254987:
				case 2038375002:
					if (func_424(25098, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -892254987);
					break;
				
				case -654222260:
				case -256374303:
					if (func_424(25099, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -654222260);
					break;
				
				case 450544862:
				case -964420554:
					return !func_421(iParam2, iParam1, iParam1 == 450544862);
					break;
			}
			break;
		
		case 202420620:
			switch (iParam1)
			{
				case 1495413374:
				case -1214222467:
					if (func_424(22108, -1, -1) || func_424(25006, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1495413374);
					break;
				
				case 370906922:
				case -1079776812:
					if (func_424(9481, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 370906922);
					break;
				
				case 531742637:
				case -948990166:
					if (func_424(9470, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 531742637);
					break;
				
				case -225805790:
				case 1382201813:
					if (func_424(9475, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -225805790);
					break;
				
				case -624586952:
				case 1576375706:
					if (func_424(9472, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -624586952);
					break;
				
				case 915144902:
				case -1356500517:
					if (func_424(9465, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 915144902);
					break;
				
				case -242746043:
				case 1838019927:
					if (func_424(9463, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -242746043);
					break;
				
				case 1620048835:
				case 618955885:
					if (func_424(9464, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1620048835);
					break;
				
				case -1097603268:
				case 909858453:
					if (func_424(9468, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1097603268);
					break;
				
				case -660672539:
				case 1809389163:
					if (func_424(9469, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -660672539);
					break;
				
				case -4642188:
				case -382370447:
					if (func_424(9479, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -4642188);
					break;
				
				case 1855977539:
				case -290949038:
					if (func_424(9473, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1855977539);
					break;
				
				case 1537270222:
				case 381474823:
					if (func_424(9480, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1537270222);
					break;
				
				case -1226569770:
				case 570088958:
					if (func_424(9476, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1226569770);
					break;
				
				case 1641457991:
				case 1093167087:
					if (func_424(9477, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1641457991);
					break;
				
				case 1366312361:
				case -1327397746:
					if (func_424(9471, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1366312361);
					break;
				
				case -1557113221:
				case 655777349:
					if (func_424(9474, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1557113221);
					break;
				
				case -1690570414:
				case -1496905620:
					if (func_424(9467, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1690570414);
					break;
				
				case -507204255:
				case -1043010182:
					if (func_424(9478, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -507204255);
					break;
				
				case -1804897639:
				case -1326077011:
					if (func_424(9462, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1804897639)
					{
						if (func_424(27085, -1, -1))
						{
							return 0;
						}
					}
					else if (func_424(27084, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1804897639);
					break;
				
				case -1375233423:
				case -1120323372:
					if (func_424(9466, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1375233423);
					break;
				
				case 490066935:
				case -1583620927:
					if (func_424(22126, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 490066935);
					break;
				
				case 1193725595:
				case 1407674396:
					if (func_424(22127, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1193725595);
					break;
				
				case 628493116:
				case -244079832:
					if (func_424(22128, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 628493116);
					break;
				
				case -2112155518:
				case 1055951410:
					if (func_424(22124, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -2112155518);
					break;
				
				case 1511337702:
				case 1092910333:
					if (func_424(22130, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1511337702);
					break;
				
				case -627666528:
				case -1874854660:
					if (func_424(22125, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -627666528);
					break;
				
				case 768324163:
				case -1379192256:
					if (func_424(22129, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 768324163);
					break;
				
				case -1448761813:
				case 1435106801:
					if (func_424(22131, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1448761813);
					break;
				
				case 868551738:
				case -1252683947:
					if (func_424(22132, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 868551738);
					break;
			}
			switch (iParam1)
			{
				case -1021262861:
				case -1380607703:
					if (func_424(22147, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1021262861);
					break;
				
				case -264447931:
				case 1010167914:
					if (func_424(22148, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -264447931);
					break;
				
				case -652127435:
				case 1059266367:
					if (func_424(22149, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -652127435);
					break;
				
				case -610014599:
				case 1869746711:
					if (func_424(22150, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -610014599);
					break;
				
				case 848073973:
				case 167494616:
					if (func_424(22151, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 848073973);
					break;
				
				case 1561087717:
				case 231256171:
					if (func_424(22152, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1561087717);
					break;
				
				case 2067249852:
				case -2041196288:
					if (func_424(22153, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 2067249852);
					break;
				
				case 1963924398:
				case -231795220:
					if (func_424(22154, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1963924398);
					break;
				
				case -898550276:
				case -1207463639:
					if (func_424(22155, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -898550276);
					break;
				
				case -1074178691:
				case 2023442158:
					if (func_424(22156, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1074178691);
					break;
				
				case -368616744:
				case -1293194083:
					if (func_424(22157, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -368616744);
					break;
				
				case -78566501:
				case 767365246:
					if (func_424(22158, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -78566501);
					break;
				
				case 1623651387:
				case -318042939:
					if (func_424(22159, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1623651387);
					break;
				
				case -1229980240:
				case -740608006:
					if (func_424(22160, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1229980240);
					break;
				
				case -1558321426:
				case 126660566:
					if (func_424(22161, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1558321426);
					break;
				
				case 518190097:
				case -252733393:
					if (func_424(22162, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 518190097);
					break;
				
				case -1996043294:
				case -1044136613:
					if (func_424(22163, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1996043294);
					break;
				
				case 1720844546:
				case -891762294:
					if (func_424(22164, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1720844546);
					break;
				
				case -20709979:
				case 1410738248:
					if (func_424(22165, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -20709979);
					break;
				
				case -1617383579:
				case -1978727490:
					if (func_424(22166, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1617383579);
					break;
				
				case -525135065:
				case 1684642458:
					if (func_424(22167, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -525135065);
					break;
				
				case 1796039054:
				case -147490340:
					if (func_424(22168, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1796039054);
					break;
				
				case 1250030109:
				case -1422117996:
					if (func_424(22169, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1250030109);
					break;
				
				case -1195876295:
				case -313931425:
					if (func_424(22170, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1195876295);
					break;
				
				case 672890092:
				case 211076563:
					if (func_424(22171, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 672890092);
					break;
				
				case 413298313:
				case 355035035:
					if (func_424(22172, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 413298313);
					break;
				
				case 1157302328:
				case -1447308868:
					if (func_424(22173, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1157302328);
					break;
				
				case -1564457471:
				case 1802655618:
					if (func_424(22174, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1564457471);
					break;
				
				case 1152621988:
				case -1063742156:
					if (func_424(22175, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1152621988);
					break;
				
				case -1961291349:
				case 1988028531:
					if (func_424(22176, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1961291349);
					break;
				
				case -1912591074:
				case 73898487:
					if (func_424(22177, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1912591074);
					break;
				
				case 1049766626:
				case -1041813118:
					if (func_424(22178, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1049766626);
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam1)
			{
				case -2123485438:
				case 1457900554:
					if (func_424(15426, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -2123485438);
					break;
				
				case -815706791:
				case -1066127505:
					if (func_424(15422, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -815706791);
					break;
				
				case -1318802347:
				case -1366750043:
					if (func_424(15423, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1318802347);
					break;
				
				case 306110040:
				case 1944822196:
					if (func_424(15421, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 306110040);
					break;
				
				case 1828101251:
				case -1639289459:
					if (func_424(15427, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1828101251);
					break;
				
				case -919314748:
				case 1282565442:
					if (func_424(15419, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -919314748);
					break;
				
				case 1971111649:
				case -884280700:
					if (func_424(15420, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1971111649);
					break;
			}
			switch (iParam1)
			{
				case 1029334921:
				case -322091380:
					if (func_424(15394, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1029334921);
					break;
				
				case -534855486:
				case -1168575065:
					if (func_356(209, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -534855486);
					break;
				
				case -516333262:
				case 756873456:
					if (func_424(15406, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -516333262);
					break;
				
				case 485135095:
				case -730037708:
					if (func_424(15395, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 485135095);
					break;
				
				case 1713551997:
				case -970458486:
					if (func_356(209, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1713551997);
					break;
				
				case -1490658501:
				case 975601953:
					if (func_424(15410, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1490658501);
					break;
				
				case -1735635238:
				case 1614208560:
					if (func_424(15407, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1735635238);
					break;
				
				case 1931303956:
				case -726032561:
					if (func_356(209, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1931303956);
					break;
				
				case -1931617488:
				case -1824987162:
					if (func_356(209, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1931617488);
					break;
				
				case -1726332301:
				case 417579524:
					if (func_424(15414, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1726332301);
					break;
				
				case -1382922530:
				case 734151492:
					if (func_424(15415, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1382922530);
					break;
				
				case 452778672:
				case -1766862320:
					if (func_424(15399, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 452778672);
					break;
				
				case -1776790350:
				case 579562906:
					if (func_424(15404, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1776790350);
					break;
				
				case -1988057295:
				case -619754931:
					if (func_356(209, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1988057295);
					break;
				
				case 816707921:
				case 1424441799:
					if (func_424(15392, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 816707921);
					break;
				
				case 744446190:
				case -1405036369:
					if (func_424(15390, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 744446190);
					break;
				
				case 917772807:
				case 1929056908:
					if (func_424(15402, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 917772807);
					break;
				
				case -292922355:
				case -34538790:
					if (func_424(15416, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -292922355);
					break;
				
				case -1495432685:
				case 1898518287:
					if (func_356(209, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1495432685);
					break;
			}
			break;
		
		case -240234547:
			switch (iParam1)
			{
				case 769964545:
				case 1916093085:
					if (func_424(9366, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 769964545);
					break;
				
				case 1424500982:
				case -701486200:
					if (func_424(9367, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1424500982);
					break;
				
				case -1810785185:
				case 1951718630:
					if (func_424(9369, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1810785185);
					break;
				
				case 837990279:
				case -1981978861:
					if (func_424(9368, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 837990279);
					break;
				
				case 1752551314:
				case 468661890:
					if (func_424(9365, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1752551314);
					break;
				
				case 735155845:
				case 1907925586:
					if (func_424(9364, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 735155845);
					break;
				
				case 1863251462:
				case 646243571:
					if (func_424(27078, -1, -1))
					{
						return 0;
					}
					if (func_424(9363, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1863251462);
					break;
				
				case -2142058763:
				case 1953935161:
					if (func_424(9362, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -2142058763);
					break;
				
				case -207591105:
				case 874867224:
					if (func_424(9370, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -207591105);
					break;
				
				case -932813887:
				case 1344008898:
					if (func_424(9371, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -932813887);
					break;
				
				case -313503199:
				case 1297781304:
					if (func_424(9372, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -313503199);
					break;
				
				case 718936417:
				case 1977233252:
					if (func_424(9373, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 718936417);
					break;
				
				case -1107649605:
				case -194410344:
					if (func_424(9374, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1107649605);
					break;
				
				case 39090475:
				case 392012609:
					if (func_424(9384, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 39090475);
					break;
				
				case 1628251208:
				case 705148450:
					if (func_424(9385, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1628251208);
					break;
			}
			break;
		
		case -1194930348:
			switch (iParam1)
			{
				case -621355603:
				case -46521805:
					if (func_424(7551, -1, -1) || func_414(3789, -1, 0) >= Global_262145.f_16308)
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -621355603);
					break;
				
				case -1006202521:
				case -1549217620:
					if (func_424(7467, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1006202521);
					break;
				
				case -1834049539:
				case 1674429052:
					if (func_424(7468, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1834049539)
					{
						if (func_424(27083, -1, -1))
						{
							return 0;
						}
					}
					else if (func_424(27086, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1834049539);
					break;
				
				case -2060372580:
				case -254669596:
					if (func_424(7469, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -2060372580);
					break;
				
				case 1057304170:
				case 1802602254:
					if (func_424(7470, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1057304170);
					break;
				
				case 1421572640:
				case -941072260:
					if (func_424(7471, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1421572640);
					break;
				
				case 481259621:
				case -1844749517:
					if (func_424(7472, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 481259621);
					break;
				
				case 1227497670:
				case 82745424:
					if (func_424(7473, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1227497670);
					break;
				
				case 319276780:
				case -673460083:
					if (func_424(7474, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 319276780);
					break;
				
				case 2070827921:
				case -99954496:
					if (func_424(7475, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 2070827921);
					break;
				
				case 1433629991:
				case 2078163456:
					if (func_424(7476, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1433629991);
					break;
				
				case -1712994650:
				case 1362343227:
					if (func_424(7477, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1712994650);
					break;
				
				case 2125094286:
				case 1176005743:
					if (func_424(7478, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 2125094286);
					break;
				
				case 712298404:
				case -1504557219:
					if (func_424(7479, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 712298404);
					break;
				
				case 1998072324:
				case 367912881:
					if (func_424(7480, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1998072324);
					break;
				
				case 1249206960:
				case -836343280:
					if (func_424(7481, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1249206960);
					break;
			}
			break;
		
		case -1907832850:
			switch (iParam1)
			{
				case 2062186390:
				case 283190173:
					if (func_424(4260, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 283190173);
					break;
				
				case -60867780:
				case 1528527015:
					if (func_424(4257, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1528527015);
					break;
				
				case 926967912:
				case -1690029966:
					if (func_424(4269, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1690029966);
					break;
				
				case -1886278590:
				case -1685994466:
					if (func_424(4261, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1685994466);
					break;
				
				case -1314959708:
				case 255166927:
					if (func_424(4259, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 255166927);
					break;
				
				case -1696774529:
				case -271257487:
					if (func_424(4268, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -271257487);
					break;
				
				case -356446484:
				case 1885215284:
					if (func_424(4265, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1885215284);
					break;
				
				case 857810380:
				case -1935156988:
					if (func_424(4258, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1935156988);
					break;
				
				case -629676646:
				case 1061465906:
					if (func_424(4264, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 1061465906);
					break;
				
				case -1879530481:
				case -871031729:
					if (func_424(4267, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -871031729);
					break;
				
				case -1265847311:
				case -101171485:
					if (func_424(4262, -1, -1))
					{
						return 0;
					}
					if (func_424(27079, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -101171485);
					break;
				
				case 32094424:
				case -1590298770:
					if (func_424(4263, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -1590298770);
					break;
				
				case 1969286744:
				case 303441856:
					if (func_424(4266, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == 303441856);
					break;
			}
			break;
		
		case 62137527:
			switch (iParam1)
			{
				case 386581472:
				case 1466454525:
					if (func_414(2931, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == 1466454525)
					{
						if (func_424(27068, -1, -1))
						{
							return 0;
						}
					}
					return !func_421(iParam2, iParam1, 1);
					break;
				
				case 979307144:
				case -473732439:
					if (func_414(2931, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == -473732439)
					{
						if (func_424(27068, -1, -1))
						{
							return 0;
						}
					}
					return !func_421(iParam2, iParam1, 0);
					break;
			}
			break;
		
		case -1542189594:
			switch (iParam1)
			{
				case -2049689650:
				case 560620683:
					if (func_424(113, -1, -1))
					{
						return 0;
					}
					return !func_421(iParam2, iParam1, iParam1 == -2049689650);
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
						if (func_424(27082, -1, -1))
						{
							return 0;
						}
						if (func_424(3770, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1682346315)
					{
						if (func_424(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1021952654)
					{
						if (func_424(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1319396867)
					{
						if (func_424(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 560794517)
					{
						if (func_424(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 858697496)
					{
						if (func_424(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -30981230)
					{
						if (func_424(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -328032215)
					{
						if (func_424(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -1451681225)
					{
						if (func_424(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 267904819)
					{
						if (func_424(3779, -1, -1) || func_424(27084, -1, -1))
						{
							return 0;
						}
					}
					return !func_421(iParam2, iParam1, 1);
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
						if (func_424(3770, -1, -1))
						{
							return 0;
						}
						if (func_424(27082, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -2140814897)
					{
						if (func_424(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 223468453)
					{
						if (func_424(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -83970305)
					{
						if (func_424(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -406843262)
					{
						if (func_424(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -954740942)
					{
						if (func_424(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -1675526854)
					{
						if (func_424(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2111717556)
					{
						if (func_424(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -415395003)
					{
						if (func_424(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 427521984)
					{
						if (func_424(3779, -1, -1) || func_424(27083, -1, -1))
						{
							return 0;
						}
					}
					return !func_421(iParam2, iParam1, 0);
					break;
				
				case -863391184:
				case 671171671:
				case 1675446188:
				case 1911627074:
					if ((((func_424(3765, -1, -1) && func_424(3766, -1, -1)) && func_424(3767, -1, -1)) && func_424(3768, -1, -1)) && func_424(3769, -1, -1))
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
					return !func_424(3593, -1, -1);
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
					return (!func_356(152, -1) && !func_424(9440, -1, -1));
					break;
				
				case 210195800:
				case 7463306:
					return (!func_356(151, -1) && !func_424(9430, -1, -1));
					break;
				
				case 953986562:
					return (!func_404(func_411(iParam1, 3), -1) && !func_424(9426, -1, -1));
					break;
				
				case 585335312:
					return (!func_404(func_411(iParam1, 3), -1) && !func_424(9427, -1, -1));
					break;
				
				case 489617063:
					return (!func_404(func_411(iParam1, 3), -1) && !func_424(9428, -1, -1));
					break;
				
				case 1843402776:
					return (!func_404(func_411(iParam1, 3), -1) && !func_424(9431, -1, -1));
					break;
				
				case -1600520821:
					return (!func_404(func_411(iParam1, 3), -1) && !func_424(9432, -1, -1));
					break;
				
				case 1399087889:
					return (!func_404(func_411(iParam1, 3), -1) && !func_424(9433, -1, -1));
					break;
				
				case 1169344430:
					return (!func_404(func_411(iParam1, 3), -1) && !func_424(9439, -1, -1));
					break;
				
				case -2028647818:
					return (!func_404(func_411(iParam1, 3), -1) && !func_424(9434, -1, -1));
					break;
				
				case -1335845620:
					return (!func_404(func_411(iParam1, 3), -1) && !func_424(9435, -1, -1));
					break;
				
				case -1209849091:
					return (!func_404(func_411(iParam1, 3), -1) && !func_424(9436, -1, -1));
					break;
				
				case 2065609077:
					return (!func_404(func_411(iParam1, 3), -1) && !func_424(9429, -1, -1));
					break;
				
				case -664245241:
					return (!func_404(func_411(iParam1, 3), -1) && !func_424(9437, -1, -1));
					break;
				
				case 1531057961:
					return (!func_404(func_411(iParam1, 4), -1) && !func_424(9426, -1, -1));
					break;
				
				case 1986678137:
					return (!func_404(func_411(iParam1, 4), -1) && !func_424(9427, -1, -1));
					break;
				
				case 2142789653:
					return (!func_404(func_411(iParam1, 4), -1) && !func_424(9428, -1, -1));
					break;
				
				case 308053343:
					return (!func_404(func_411(iParam1, 4), -1) && !func_424(9431, -1, -1));
					break;
				
				case 753842819:
					return (!func_404(func_411(iParam1, 4), -1) && !func_424(9432, -1, -1));
					break;
				
				case 1052794406:
					return (!func_404(func_411(iParam1, 4), -1) && !func_424(9433, -1, -1));
					break;
				
				case -695726661:
					return (!func_404(func_411(iParam1, 4), -1) && !func_424(9439, -1, -1));
					break;
				
				case -1001821890:
					return (!func_404(func_411(iParam1, 4), -1) && !func_424(9434, -1, -1));
					break;
				
				case -1425459522:
					return (!func_404(func_411(iParam1, 4), -1) && !func_424(9435, -1, -1));
					break;
				
				case 1163510365:
					return (!func_404(func_411(iParam1, 4), -1) && !func_424(9436, -1, -1));
					break;
				
				case 933242602:
					return (!func_404(func_411(iParam1, 4), -1) && !func_424(9429, -1, -1));
					break;
				
				case -1347021116:
					return (!func_404(func_411(iParam1, 4), -1) && !func_424(9437, -1, -1));
					break;
				
				case 1676130538:
				case -1730534702:
				case -1767432596:
				case 1297354841:
				case -839806574:
				case -542100209:
					return !func_150();
					break;
			}
			break;
		
		case -1684351737:
			switch (iParam1)
			{
				case -190040148:
				case -11341151:
					return !func_424(3608, -1, -1);
					break;
			}
			break;
		
		case -1677471575:
			switch (iParam1)
			{
				case 42936837:
				case 516055815:
					return (!func_424(3615, -1, -1) && !func_424(9438, -1, -1));
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
					return !func_424(3783, -1, -1);
					break;
				
				case -282875325:
				case 1185175875:
					return !func_424(3784, -1, -1);
					break;
				
				case 2079623104:
				case 155591269:
					return !func_424(3785, -1, -1);
					break;
				
				case 1088443427:
				case -1057958846:
					return !func_424(3786, -1, -1);
					break;
				
				case 200001600:
				case -1853795495:
					return !func_424(3787, -1, -1);
					break;
				
				case 1620729159:
				case -1860485560:
					return !func_424(3788, -1, -1);
					break;
				
				case -1713274238:
				case 499288642:
					if (func_424(27081, -1, -1))
					{
						return 0;
					}
					return !func_424(3789, -1, -1);
					break;
				
				case -1571590969:
				case -7887054:
					return !func_424(3790, -1, -1);
					break;
				
				case -457639374:
				case -1553041502:
					return !func_424(3791, -1, -1);
					break;
				
				case 64160805:
				case -1080591445:
					return !func_424(3792, -1, -1);
					break;
				
				case 776078819:
				case -1303573005:
					if (iParam1 == 776078819)
					{
						iVar0 = func_414(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == -1303573005)
					{
						iVar1 = func_414(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar1, 18))
						{
							return 0;
						}
					}
					return !func_424(3793, -1, -1);
					break;
				
				case -1069464482:
				case 2085207152:
					if (iParam1 == -1069464482)
					{
						iVar2 = func_414(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2085207152)
					{
						iVar3 = func_414(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar3, 19))
						{
							return 0;
						}
					}
					return !func_424(3794, -1, -1);
					break;
				
				case -1342875239:
				case 857137150:
					if (iParam1 == -1342875239)
					{
						iVar4 = func_414(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == 857137150)
					{
						iVar5 = func_414(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar5, 20))
						{
							return 0;
						}
					}
					return !func_424(3795, -1, -1);
					break;
				
				case 1967892405:
				case 535952639:
					if (iParam1 == 1967892405)
					{
						iVar6 = func_414(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == 535952639)
					{
						iVar7 = func_414(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar7, 21))
						{
							return 0;
						}
					}
					return !func_424(3796, -1, -1);
					break;
				
				case 642864781:
				case -1974657401:
					if (iParam1 == 642864781)
					{
						iVar8 = func_414(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == -1974657401)
					{
						iVar9 = func_414(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar9, 22))
						{
							return 0;
						}
					}
					return !func_424(3797, -1, -1);
					break;
				
				case 1270860039:
				case 129909013:
					if (iParam1 == 1270860039)
					{
						iVar10 = func_414(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == 129909013)
					{
						iVar11 = func_414(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar11, 23))
						{
							return 0;
						}
					}
					return !func_424(3798, -1, -1);
					break;
				
				case -1290780406:
				case -1499060170:
					if (iParam1 == -1290780406)
					{
						iVar12 = func_414(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == -1499060170)
					{
						iVar13 = func_414(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar13, 24))
						{
							return 0;
						}
					}
					return !func_424(3799, -1, -1);
					break;
				
				case 1127641545:
				case 412032123:
					if (iParam1 == 1127641545)
					{
						iVar14 = func_414(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == 412032123)
					{
						iVar15 = func_414(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar15, 25))
						{
							return 0;
						}
					}
					return !func_424(3800, -1, -1);
					break;
				
				case -1221948530:
				case 915049044:
					if (iParam1 == -1221948530)
					{
						iVar16 = func_414(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == 915049044)
					{
						iVar17 = func_414(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar17, 26))
						{
							return 0;
						}
					}
					return !func_424(3801, -1, -1);
					break;
				
				case 1954153055:
				case 456478679:
					if (iParam1 == 1954153055)
					{
						iVar18 = func_414(2442, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == 456478679)
					{
						iVar19 = func_414(2422, -1, 0);
						if (GAMEPLAY::IS_BIT_SET(iVar19, 27))
						{
							return 0;
						}
					}
					return !func_424(3802, -1, -1);
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
					return !func_403();
					break;
			}
			break;
	}
	return 0;
}

int func_403()
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

bool func_404(int iParam0, int iParam1)
{
	if (func_407(iParam0) == 11511)
	{
		return 0;
	}
	uVar0 = func_406(iParam0, iParam1);
	iVar1 = iParam0;
	return GAMEPLAY::IS_BIT_SET(uVar0, func_405(iVar1));
}

int func_405(int iParam0)
{
	return (iParam0 % 32);
}

var func_406(var uParam0, int iParam1)
{
	uVar0 = func_414(func_407(uParam0), iParam1, 0);
	return uVar0;
}

int func_407(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_410(iVar0);
	if ((func_409() == 0 || func_408() == 0) || (func_409() == 999 && func_408() == 999))
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

int func_408()
{
	return Global_30769;
}

int func_409()
{
	return Global_30768;
}

int func_410(int iParam0)
{
	return (iParam0 / 32);
}

int func_411(int iParam0, int iParam1)
{
	if (iParam1 == 3)
	{
		if (func_413(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	else if (iParam1 == 4)
	{
		if (func_412(iParam0, &uVar0))
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

int func_412(int iParam0, var uParam1)
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

int func_413(int iParam0, var uParam1)
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

int func_414(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_80(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_415(int iParam0, bool bParam1)
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
		if (!func_417(iVar2) || iParam0)
		{
			if (!func_416(PLAYER::PLAYER_ID(), iVar2))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_416(int iParam0, int iParam1)
{
	if (iParam0 != func_247())
	{
		iVar0 = iParam1;
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_399, iVar0);
	}
	return 0;
}

int func_417(int iParam0)
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

int func_418(int iParam0, int iParam1, int iParam2)
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

int func_419(int iParam0, int iParam1)
{
	iVar0 = Global_2585280[iParam0][func_80(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_420(int iParam0, int iParam1)
{
	uVar0 = Global_2585647[iParam0][func_80(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_421(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (bParam2)
		{
			iParam0 = func_411(iParam1, 3);
		}
		else
		{
			iParam0 = func_411(iParam1, 4);
		}
	}
	return (func_404(iParam0, -1) || func_422(iParam0, -1));
}

int func_422(int iParam0, int iParam1)
{
	return func_424(func_423(iParam0), iParam1, -1);
}

int func_423(int iParam0)
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

int func_424(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_81();
	}
	iVar1 = func_426(iParam0, iParam1);
	uVar2 = func_425(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_425(int iParam0)
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

int func_426(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_81();
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

int func_427(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam4 == 0)
	{
		iVar1 = func_429(iVar0, sParam1, iParam4);
		iParam4 = GAMEPLAY::GET_HASH_KEY(func_428(iVar1));
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
							if (func_437(13, -1))
							{
								return 0;
							}
							else if (func_437(14, -1))
							{
								return 0;
							}
							else if (func_437(15, -1))
							{
								return 0;
							}
							else if (func_437(16, -1))
							{
								return 0;
							}
							else if (func_437(71, -1))
							{
								return 0;
							}
							else if (func_437(72, -1))
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
							if (func_437(13, -1))
							{
								return 0;
							}
							else if (func_437(14, -1))
							{
								return 0;
							}
							else if (func_437(15, -1))
							{
								return 0;
							}
							else if (func_437(16, -1))
							{
								return 0;
							}
							else if (func_437(71, -1))
							{
								return 0;
							}
							else if (func_437(72, -1))
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
							if (func_437(13, -1))
							{
							}
							else if (func_437(14, -1))
							{
								return 0;
							}
							else if (func_437(15, -1))
							{
								return 0;
							}
							else if (func_437(16, -1))
							{
							}
							else if (func_437(71, -1))
							{
								return 0;
							}
							else if (func_437(72, -1))
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
							if (func_437(13, -1))
							{
							}
							else if (func_437(14, -1))
							{
							}
							else if (func_437(15, -1))
							{
							}
							else if (func_437(16, -1))
							{
							}
							else if (func_437(71, -1))
							{
							}
							else if (func_437(72, -1))
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
						if (func_437(13, -1))
						{
						}
						else if (func_437(14, -1))
						{
						}
						else if (func_437(15, -1))
						{
							return 0;
						}
						else if (func_437(16, -1))
						{
						}
						else if (func_437(71, -1))
						{
						}
						else if (func_437(72, -1))
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
							if (func_437(15, -1))
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
						if (func_437(13, -1))
						{
							return 0;
						}
						else if (func_437(14, -1))
						{
							return 0;
						}
						else if (func_437(15, -1))
						{
							if (!GAMEPLAY::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB"))
							{
								return 0;
							}
						}
						else if (func_437(16, -1))
						{
						}
						else if (func_437(71, -1))
						{
						}
						else if (func_437(72, -1))
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
							if (func_437(13, -1))
							{
							}
							else if (func_437(14, -1))
							{
							}
							else if (func_437(15, -1))
							{
							}
							else if (func_437(16, -1))
							{
							}
							else if (func_437(71, -1))
							{
							}
							else if (func_437(72, -1))
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

char* func_428(int iParam0)
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
			return "ARM_RIGHT_UPPER_BICEP";
			break;
		
		case 22:
			return "ARM_RIGHT_SHOULDER";
			break;
		
		case 23:
			return "ARM_RIGHT_ELBOW";
			break;
		
		case 24:
			return "HAND_LEFT";
			break;
		
		case 25:
			return "HAND_RIGHT";
			break;
		
		case 26:
			return "BACK_FULL";
			break;
		
		case 27:
			return "BACK_FULL_ARMS_FULL_BACK";
			break;
		
		case 28:
			return "BACK_FULL_SHORT";
			break;
		
		case 29:
			return "BACK_MID";
			break;
		
		case 30:
			return "BACK_UPPER";
			break;
		
		case 31:
			return "BACK_UPPER_LEFT";
			break;
		
		case 32:
			return "BACK_UPPER_RIGHT";
			break;
		
		case 33:
			return "BACK_LOWER";
			break;
		
		case 34:
			return "BACK_LOWER_LEFT";
			break;
		
		case 35:
			return "BACK_LOWER_MID";
			break;
		
		case 36:
			return "BACK_LOWER_RIGHT";
			break;
		
		case 37:
			return "CHEST_FULL";
			break;
		
		case 38:
			return "CHEST_STOM";
			break;
		
		case 39:
			return "CHEST_STOM_FULL";
			break;
		
		case 40:
			return "CHEST_LEFT";
			break;
		
		case 41:
			return "CHEST_UPPER_LEFT";
			break;
		
		case 42:
			return "CHEST_RIGHT";
			break;
		
		case 43:
			return "CHEST_UPPER_RIGHT";
			break;
		
		case 44:
			return "CHEST_MID";
			break;
		
		case 45:
			return "TORSO_SIDE_RIGHT";
			break;
		
		case 46:
			return "TORSO_SIDE_LEFT";
			break;
		
		case 47:
			return "STOMACH_FULL";
			break;
		
		case 48:
			return "STOMACH_UPPER";
			break;
		
		case 49:
			return "STOMACH_UPPER_LEFT";
			break;
		
		case 50:
			return "STOMACH_UPPER_RIGHT";
			break;
		
		case 51:
			return "STOMACH_LOWER";
			break;
		
		case 52:
			return "STOMACH_LOWER_LEFT";
			break;
		
		case 53:
			return "STOMACH_LOWER_RIGHT";
			break;
		
		case 54:
			return "STOMACH_LEFT";
			break;
		
		case 55:
			return "STOMACH_RIGHT";
			break;
		
		case 56:
			return "FACE";
			break;
		
		case 57:
			return "HEAD_LEFT";
			break;
		
		case 58:
			return "HEAD_RIGHT";
			break;
		
		case 59:
			return "NECK_FRONT";
			break;
		
		case 60:
			return "NECK_BACK";
			break;
		
		case 61:
			return "NECK_LEFT_FULL";
			break;
		
		case 62:
			return "NECK_LEFT_BACK";
			break;
		
		case 63:
			return "NECK_RIGHT_FULL";
			break;
		
		case 64:
			return "NECK_RIGHT_BACK";
			break;
		
		case 65:
			return "LEG_LEFT_FULL_SLEEVE";
			break;
		
		case 66:
			return "LEG_LEFT_FULL_FRONT";
			break;
		
		case 67:
			return "LEG_LEFT_FULL_BACK";
			break;
		
		case 68:
			return "LEG_LEFT_UPPER_SLEEVE";
			break;
		
		case 69:
			return "LEG_LEFT_UPPER_FRONT";
			break;
		
		case 70:
			return "LEG_LEFT_UPPER_BACK";
			break;
		
		case 71:
			return "LEG_LEFT_UPPER_OUTER";
			break;
		
		case 72:
			return "LEG_LEFT_UPPER_INNER";
			break;
		
		case 73:
			return "LEG_LEFT_LOWER_SLEEVE";
			break;
		
		case 74:
			return "LEG_LEFT_LOWER_FRONT";
			break;
		
		case 75:
			return "LEG_LEFT_LOWER_BACK";
			break;
		
		case 76:
			return "LEG_LEFT_LOWER_OUTER";
			break;
		
		case 77:
			return "LEG_LEFT_LOWER_INNER";
			break;
		
		case 78:
			return "LEG_LEFT_KNEE";
			break;
		
		case 79:
			return "LEG_LEFT_ANKLE";
			break;
		
		case 80:
			return "LEG_LEFT_CALF";
			break;
		
		case 81:
			return "LEG_RIGHT_FULL_SLEEVE";
			break;
		
		case 82:
			return "LEG_RIGHT_FULL_FRONT";
			break;
		
		case 83:
			return "LEG_RIGHT_FULL_BACK";
			break;
		
		case 84:
			return "LEG_RIGHT_UPPER_SLEEVE";
			break;
		
		case 85:
			return "LEG_RIGHT_UPPER_FRONT";
			break;
		
		case 86:
			return "LEG_RIGHT_UPPER_BACK";
			break;
		
		case 87:
			return "LEG_RIGHT_UPPER_OUTER";
			break;
		
		case 88:
			return "LEG_RIGHT_UPPER_INNER";
			break;
		
		case 89:
			return "LEG_RIGHT_LOWER_SLEEVE";
			break;
		
		case 90:
			return "LEG_RIGHT_LOWER_FRONT";
			break;
		
		case 91:
			return "LEG_RIGHT_LOWER_BACK";
			break;
		
		case 92:
			return "LEG_RIGHT_LOWER_OUTER";
			break;
		
		case 93:
			return "LEG_RIGHT_LOWER_INNER";
			break;
		
		case 94:
			return "LEG_RIGHT_KNEE";
			break;
		
		case 95:
			return "LEG_RIGHT_ANKLE";
			break;
		
		case 96:
			return "LEG_RIGHT_CALF";
			break;
		
		case 97:
			return "FOOT_LEFT";
			break;
		
		case 98:
			return "FOOT_RIGHT";
			break;
	}
	return "";
}

int func_429(int iParam0, char* sParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1019352240:
		case 2140335355:
		case 277073536:
			return -1;
			break;
	}
	switch (iParam2)
	{
		case -1775023605:
			return 0;
			break;
		
		case 917950949:
			return 1;
			break;
		
		case -1684314297:
			return 2;
			break;
		
		case -1546663824:
			return 3;
			break;
		
		case -2119253768:
			return 4;
			break;
		
		case 1639951086:
			return 5;
			break;
		
		case 1372660034:
			return 6;
			break;
		
		case -1524227787:
			return 7;
			break;
		
		case -311742370:
			return 8;
			break;
		
		case -2057190659:
			return 9;
			break;
		
		case -686545645:
			return 10;
			break;
		
		case -80377674:
			return 11;
			break;
		
		case -1055976551:
			return 12;
			break;
		
		case 1963750528:
			return 13;
			break;
		
		case 796226384:
			return 14;
			break;
		
		case 123428314:
			return 15;
			break;
		
		case 1944550961:
			return 16;
			break;
		
		case 2136911405:
			return 17;
			break;
		
		case -1309595991:
			return 18;
			break;
		
		case 1470319061:
			return 19;
			break;
		
		case -1716562576:
			return 20;
			break;
		
		case -1940582056:
			return 21;
			break;
		
		case 1089807219:
			return 22;
			break;
		
		case -1073830579:
			return 23;
			break;
		
		case 1071134407:
			return 24;
			break;
		
		case 1455567330:
			return 25;
			break;
		
		case 711089605:
			return 26;
			break;
		
		case 1206993109:
			return 27;
			break;
		
		case 32564956:
			return 28;
			break;
		
		case 314326195:
			return 29;
			break;
		
		case 1928884106:
			return 30;
			break;
		
		case 1565386395:
			return 31;
			break;
		
		case 2107621060:
			return 32;
			break;
		
		case 1618133209:
			return 33;
			break;
		
		case -951899470:
			return 34;
			break;
		
		case 2048696626:
			return 35;
			break;
		
		case 74017048:
			return 36;
			break;
		
		case -793495770:
			return 37;
			break;
		
		case 849089063:
			return 38;
			break;
		
		case 1192230427:
			return 39;
			break;
		
		case -763917073:
			return 40;
			break;
		
		case 337552605:
			return 41;
			break;
		
		case -2066166276:
			return 42;
			break;
		
		case 100935796:
			return 43;
			break;
		
		case -1409061796:
			return 44;
			break;
		
		case 1548327796:
			return 45;
			break;
		
		case -1459967458:
			return 46;
			break;
		
		case 129912816:
			return 47;
			break;
		
		case 1387715942:
			return 48;
			break;
		
		case -1871804242:
			return 49;
			break;
		
		case 1603728616:
			return 50;
			break;
		
		case -742053244:
			return 51;
			break;
		
		case 1586504577:
			return 52;
			break;
		
		case 1753976524:
			return 53;
			break;
		
		case -1469750959:
			return 54;
			break;
		
		case -388268096:
			return 55;
			break;
		
		case -1538681432:
			return 56;
			break;
		
		case -737856380:
			return 57;
			break;
		
		case 1261643197:
			return 58;
			break;
		
		case 436139458:
			return 59;
			break;
		
		case 1012782925:
			return 60;
			break;
		
		case -277214012:
			return 61;
			break;
		
		case -484264198:
			return 62;
			break;
		
		case 1708200656:
			return 63;
			break;
		
		case 758827473:
			return 64;
			break;
		
		case 1039283199:
			return 65;
			break;
		
		case 325801797:
			return 66;
			break;
		
		case -1946435033:
			return 67;
			break;
		
		case -1917346117:
			return 68;
			break;
		
		case -382139768:
			return 69;
			break;
		
		case 1725561361:
			return 70;
			break;
		
		case -266913369:
			return 71;
			break;
		
		case 511433871:
			return 72;
			break;
		
		case -1399656601:
			return 73;
			break;
		
		case -1560441083:
			return 74;
			break;
		
		case 1034503747:
			return 75;
			break;
		
		case -1170681301:
			return 76;
			break;
		
		case 660577126:
			return 77;
			break;
		
		case -818089340:
			return 78;
			break;
		
		case 1052642087:
			return 79;
			break;
		
		case 134497037:
			return 80;
			break;
		
		case -624267373:
			return 81;
			break;
		
		case -1178847967:
			return 82;
			break;
		
		case -197292861:
			return 83;
			break;
		
		case 730193962:
			return 84;
			break;
		
		case 1469472731:
			return 85;
			break;
		
		case -1918884694:
			return 86;
			break;
		
		case -1670727628:
			return 87;
			break;
		
		case -1389296468:
			return 88;
			break;
		
		case -405262373:
			return 89;
			break;
		
		case -1619609833:
			return 90;
			break;
		
		case 2060550302:
			return 91;
			break;
		
		case -1202647020:
			return 92;
			break;
		
		case 12584588:
			return 93;
			break;
		
		case -1559605744:
			return 94;
			break;
		
		case -88374898:
			return 95;
			break;
		
		case -292219126:
			return 96;
			break;
		
		case -634232984:
			return 97;
			break;
		
		case -1259754598:
			return 98;
			break;
	}
	switch (GAMEPLAY::GET_HASH_KEY(sParam1))
	{
		case 1948764112:
			return -1;
			break;
		
		case 1099734529:
			return 12;
			break;
		
		case 1875475066:
			return 12;
			break;
		
		case -2027116220:
			if (iParam0 == 1885233650)
			{
				return 75;
			}
			else
			{
				return 65;
			}
			break;
		
		case 973279522:
			return 26;
			break;
		
		case -344656041:
			return 47;
			break;
		
		case 437243648:
			return 1;
			break;
		
		case -1636967950:
			return 75;
			break;
		
		case -1759426263:
			return 1;
			break;
		
		case 1702259548:
			return 89;
			break;
		
		case 1471205329:
			return 73;
			break;
		
		case -33154131:
			return 22;
			break;
		
		case -1364624791:
			return 91;
			break;
		
		case 2048169112:
			return 26;
			break;
		
		case -2132107540:
			return 73;
			break;
		
		case -2097372400:
			return 38;
			break;
		
		case -106785870:
			if (iParam0 == 1885233650)
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case 1116120433:
			return 31;
			break;
		
		case 118598456:
			return 42;
			break;
		
		case 1480281490:
			return 47;
			break;
		
		case -652292269:
			return 75;
			break;
		
		case -1179283327:
			return 20;
			break;
		
		case 860620540:
			return 32;
			break;
		
		case -880004050:
			return 14;
			break;
		
		case -1386676768:
			return 52;
			break;
		
		case 2104696341:
			return 30;
			break;
		
		case -1952728474:
			return 6;
			break;
		
		case 1464947154:
			return 80;
			break;
		
		case -1134718043:
			return 13;
			break;
		
		case -440373586:
			if (iParam0 == 1885233650)
			{
				return 67;
			}
			else
			{
				return 75;
			}
			break;
		
		case -1282504117:
			if (iParam0 == 1885233650)
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case -1035884623:
			return 73;
			break;
		
		case -1877294236:
			return 47;
			break;
		
		case 1289632992:
			return 73;
			break;
		
		case 1152623695:
			return 10;
			break;
		
		case 1705208746:
			return 26;
			break;
		
		case 1774176944:
			return 42;
			break;
		
		case -2016202731:
			return 89;
			break;
		
		case 474241973:
			return 16;
			break;
		
		case 1549424756:
			return 91;
			break;
		
		case 1915520024:
			return 82;
			break;
		
		case -654914345:
			return 13;
			break;
		
		case -1745115353:
			return 75;
			break;
		
		case 1466027815:
			return 26;
			break;
		
		case -161772432:
			return 10;
			break;
		
		case 74131599:
			return 90;
			break;
		
		case 363383562:
			return 89;
			break;
		
		case 736950162:
			return 38;
			break;
		
		case 1291882802:
			return 20;
			break;
		
		case -281772534:
			return 26;
			break;
		
		case -837798134:
			return 18;
			break;
		
		case 62456:
			return 56;
			break;
		
		case -800320369:
			return 3;
			break;
		
		case 1363941829:
			return 47;
			break;
		
		case 1586377801:
			if (iParam0 == 1885233650)
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case -1514257748:
			return 89;
			break;
		
		case -1023836894:
			return 6;
			break;
		
		case -1974105125:
			return 33;
			break;
		
		case -558386018:
			return 16;
			break;
		
		case -328314869:
			return 40;
			break;
		
		case -1903783095:
			return 40;
			break;
		
		case -1674924399:
			return 40;
			break;
		
		case -252323802:
			return 33;
			break;
		
		case 11466648:
			return 6;
			break;
		
		case 927130819:
			if (iParam0 == 1885233650)
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case -978943608:
			if (iParam0 == 1885233650)
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 452144164:
			if (iParam0 == 1885233650)
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 691194019:
			if (iParam0 == 1885233650)
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case -1516865571:
			return 44;
			break;
		
		case 2130586285:
			return 32;
			break;
		
		case 386521802:
			return 3;
			break;
		
		case 579924440:
			return 33;
			break;
		
		case 741770527:
			return 31;
			break;
		
		case 1173403795:
			return 33;
			break;
		
		case -569087776:
			return 45;
			break;
		
		case -1344959389:
			return 89;
			break;
		
		case -211217527:
			return 64;
			break;
		
		case 86488838:
			return 53;
			break;
		
		case 705494964:
			return 52;
			break;
		
		case -137684175:
			return 30;
			break;
		
		case -979388709:
			return 41;
			break;
		
		case 324653646:
			return 43;
			break;
		
		case -518820414:
			return 52;
			break;
		
		case -1361737401:
			return 20;
			break;
		
		case 2010946386:
			return 8;
			break;
		
		case -894811920:
			return 10;
			break;
		
		case 165068612:
			return 28;
			break;
		
		case 1549427782:
			return 40;
			break;
		
		case -927613913:
			return 42;
			break;
		
		case 385144996:
			return 56;
			break;
		
		case -814626401:
			return 57;
			break;
		
		case -1248225809:
			return 52;
			break;
		
		case 1910378101:
			return 8;
			break;
		
		case -2124501642:
			return 91;
			break;
		
		case -1943747838:
			return 20;
			break;
		
		case -1570115700:
			return 75;
			break;
		
		case 931699147:
			return 62;
			break;
		
		case 1019520067:
			return 63;
			break;
		
		case -859358814:
			return 20;
			break;
		
		case -1157818866:
			return 58;
			break;
		
		case -247856505:
			return 47;
			break;
		
		case -1628534963:
			return 37;
			break;
		
		case -1051898870:
			return 33;
			break;
		
		case 1334929540:
			return 80;
			break;
		
		case 1097124907:
			return 64;
			break;
		
		case 747545215:
			return 62;
			break;
		
		case 61892743:
			return 96;
			break;
		
		case 501548332:
			return 15;
			break;
		
		case -244169717:
			return 48;
			break;
		
		case 421886905:
			return 37;
			break;
		
		case -1398791504:
			return 33;
			break;
		
		case -106152761:
			return 3;
			break;
		
		case 125491300:
			return 41;
			break;
		
		case -1576950557:
			return 52;
			break;
		
		case -1815115649:
			return 53;
			break;
		
		case -1043396870:
			return 59;
			break;
		
		case -1388618285:
			return 3;
			break;
		
		case -948484638:
			return 48;
			break;
		
		case 643387405:
			return 33;
			break;
		
		case 979630098:
			return 64;
			break;
		
		case 211688583:
			return 62;
			break;
		
		case 1343791995:
			return 60;
			break;
		
		case 576309246:
			return 20;
			break;
		
		case 949154944:
			return 40;
			break;
		
		case -622511834:
			return 42;
			break;
		
		case -275651969:
			return 11;
			break;
		
		case -1256283855:
			return 15;
			break;
		
		case 955525350:
			return 40;
			break;
		
		case 1252641873:
			return 22;
			break;
		
		case -2034766264:
			return 40;
			break;
		
		case 1748021562:
			return 22;
			break;
		
		case -657146050:
			return 30;
			break;
		
		case -955835485:
			return 19;
			break;
		
		case -1269959119:
			return 40;
			break;
		
		case -1478763187:
			return 4;
			break;
		
		case -1881592504:
			return 15;
			break;
		
		case 2115996117:
			return 62;
			break;
		
		case 1824417551:
			return 45;
			break;
		
		case 1502068898:
			return 24;
			break;
		
		case -2019287742:
			return 22;
			break;
		
		case -1780827729:
			return 80;
			break;
		
		case -1966497207:
			return 25;
			break;
		
		case -2126999769:
			return 30;
			break;
		
		case 2014772448:
			return 30;
			break;
		
		case 1705760778:
			return 44;
			break;
		
		case 497993745:
			return 15;
			break;
		
		case 1142887665:
			return 9;
			break;
		
		case 22777707:
			return 3;
			break;
		
		case 799173624:
			return 16;
			break;
		
		case -410297401:
			return 17;
			break;
		
		case 214410819:
			return 75;
			break;
		
		case -2098342992:
			return 23;
			break;
		
		case -1280920283:
			return 64;
			break;
		
		case -1501455653:
			return 16;
			break;
		
		case 2117454408:
			return 25;
			break;
		
		case -1945704982:
			return 32;
			break;
		
		case -1581870771:
			return 31;
			break;
		
		case -1350521631:
			return 10;
			break;
		
		case -954508266:
			return 5;
			break;
		
		case -716244867:
			return 4;
			break;
		
		case 185361399:
			return 52;
			break;
		
		case -1208107213:
			return 35;
			break;
		
		case -812421538:
			return 30;
			break;
		
		case -566096965:
			return 32;
			break;
		
		case -316757644:
			return 38;
			break;
		
		case -103496992:
			return 24;
			break;
		
		case 391708136:
			return 52;
			break;
		
		case 616667309:
			return 20;
			break;
		
		case 870102755:
			return 10;
			break;
		
		case 1093030262:
			return 92;
			break;
		
		case 1378218869:
			return 0;
			break;
		
		case 332555747:
			return 80;
			break;
		
		case 1077526193:
			return 34;
			break;
		
		case 1332632858:
			return 91;
			break;
		
		case 1556379590:
			return 10;
			break;
		
		case 1780093553:
			return 22;
			break;
		
		case 2001284303:
			return 14;
			break;
		
		case -2059941716:
			return 30;
			break;
		
		case -1759875983:
			return 40;
			break;
		
		case -1521153818:
			return 24;
			break;
	}
	if (iParam2 == 0 && GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return -1;
	}
	switch (iParam2)
	{
		case -518474626:
			return -1;
			break;
	}
	return -1;
}

bool func_430(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_436(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
	}
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_435() || func_434())
					{
						iVar1 = 400;
						if (func_403() && (func_433() || func_432()))
						{
							iVar1 = 0;
						}
						func_436(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_436(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_431(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_435() || func_434())
					{
						iVar1 = 450;
						if (func_403() && (func_433() || func_432()))
						{
							iVar1 = 0;
						}
						func_436(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_436(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_431(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_435() || func_434())
					{
						iVar1 = 380;
						if (func_403() && (func_433() || func_432()))
						{
							iVar1 = 0;
						}
						func_436(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_436(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_431(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(20000) * Global_262145.f_2907)), 0);
					break;
				
				case 1:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1400) * Global_262145.f_2908)), 2);
					break;
				
				case 2:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(9750) * Global_262145.f_2909)), 3);
					break;
				
				case 3:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2150) * Global_262145.f_2910)), 0);
					break;
				
				case 4:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2911)), 0);
					break;
				
				case 54:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12400) * Global_262145.f_2912)), 1);
					break;
				
				case 5:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_262145.f_2913)), 0);
					break;
				
				case 6:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2914)), 2);
					break;
				
				case 55:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1350) * Global_262145.f_2915)), 1);
					break;
				
				case 7:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1450) * Global_262145.f_2916)), 0);
					break;
				
				case 8:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2700) * Global_262145.f_2917)), 7);
					break;
				
				case 9:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1200) * Global_262145.f_2918)), 0);
					break;
				
				case 10:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1500) * Global_262145.f_2919)), 0);
					break;
				
				case 11:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2650) * Global_262145.f_2920)), 0);
					break;
				
				case 56:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_262145.f_2921)), 1);
					break;
				
				case 12:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2922)), 2);
					break;
				
				case 57:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_262145.f_2923)), 1);
					break;
				
				case 58:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2924)), 1);
					break;
				
				case 59:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7400) * Global_262145.f_2925)), 1);
					break;
				
				case 60:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2926)), 1);
					break;
				
				case 17:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_262145.f_2931)), 2);
					break;
				
				case 18:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2932)), 2);
					break;
				
				case 19:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3600) * Global_262145.f_2933)), 2);
					break;
				
				case 20:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2934)), 3);
					break;
				
				case 21:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12500) * Global_262145.f_2935)), 3);
					break;
				
				case 22:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2936)), 3);
					break;
				
				case 23:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2937)), 3);
					break;
				
				case 24:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2938)), 3);
					break;
				
				case 25:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_262145.f_2939)), 2);
					break;
				
				case 26:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_262145.f_2940)), 3);
					break;
				
				case 27:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4800) * Global_262145.f_2941)), 3);
					break;
				
				case 28:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_262145.f_2942)), 3);
					break;
				
				case 61:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12350) * Global_262145.f_2943)), 1);
					break;
				
				case 62:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_262145.f_2944)), 1);
					break;
				
				case 63:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4500) * Global_262145.f_2945)), 1);
					break;
				
				case 64:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_262145.f_2946)), 1);
					break;
				
				case 65:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12300) * Global_262145.f_2947)), 1);
					break;
				
				case 29:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2948)), 0);
					break;
				
				case 30:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2949)), 0);
					break;
				
				case 31:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2950)), 0);
					break;
				
				case 66:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2951)), 1);
					break;
				
				case 32:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2952)), 2);
					break;
				
				case 33:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_262145.f_2953)), 3);
					break;
				
				case 34:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7250) * Global_262145.f_2954)), 2);
					break;
				
				case 35:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(11900) * Global_262145.f_2955)), 0);
					break;
				
				case 36:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2750) * Global_262145.f_2956)), 0);
					break;
				
				case 37:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1750) * Global_262145.f_2957)), 0);
					break;
				
				case 38:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_262145.f_2958)), 3);
					break;
				
				case 39:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3250) * Global_262145.f_2959)), 2);
					break;
				
				case 40:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_262145.f_2960)), 0);
					break;
				
				case 67:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2961)), 1);
					break;
				
				case 41:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2962)), 2);
					break;
				
				case 68:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2963)), 1);
					break;
				
				case 42:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5050) * Global_262145.f_2964)), 0);
					break;
				
				case 43:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2450) * Global_262145.f_2965)), 2);
					break;
				
				case 44:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2966)), 0);
					break;
				
				case 45:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2967)), 0);
					break;
				
				case 46:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_262145.f_2968)), 0);
					break;
				
				case 47:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1150) * Global_262145.f_2969)), 3);
					break;
				
				case 48:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2970)), 3);
					break;
				
				case 49:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7600) * Global_262145.f_2971)), 3);
					break;
				
				case 50:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2600) * Global_262145.f_2972)), 2);
					break;
				
				case 51:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2973)), 3);
					break;
				
				case 52:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7450) * Global_262145.f_2974)), 3);
					break;
				
				case 53:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2975)), 0);
					break;
				
				case 69:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2976)), 1);
					break;
				
				case 70:
					func_436(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2977)), 2);
					break;
			}
			if (iVar0 == 1885233650)
			{
				switch (iParam1)
				{
					case 73:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2978)), 0);
						break;
					
					case 88:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2979)), 0);
						break;
					
					case 89:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2980)), 0);
						break;
					
					case 93:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_436(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2927)), 0);
						break;
					
					case 14:
						func_436(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2928)), 0);
						break;
					
					case 15:
						func_436(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2929)), 2);
						break;
					
					case 16:
						func_436(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2930)), 0);
						break;
					
					case 71:
						func_436(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2930)), 0);
						break;
					
					case 72:
						func_436(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2930)), 0);
						break;
				}
			}
			else if (iVar0 == -1667301416)
			{
				switch (iParam1)
				{
					case 73:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2978)), 0);
						break;
					
					case 88:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2979)), 0);
						break;
					
					case 89:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2980)), 0);
						break;
					
					case 93:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_436(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_436(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2927)), 0);
						break;
					
					case 14:
						func_436(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2928)), 0);
						break;
					
					case 15:
						func_436(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2929)), 2);
						break;
					
					case 16:
						func_436(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2930)), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_431(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		sParam0->f_7 *= 2;
	}
	return sParam0->f_11 != -1;
}

void func_431(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = (iParam2 - iParam3);
	iVar1 = DLC1::_GET_NUM_DECORATIONS(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1)
	{
		if (DLC1::_0xFF56381874F82086(iParam1, iVar0, &Var2))
		{
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var2))
			{
				sParam0->f_11 = iParam2;
				MemCopy(sParam0, {Var2.f_7}, 4);
				sParam0->f_5 = Var2.f_3;
				sParam0->f_4 = Var2.f_2;
				sParam0->f_8 = Var2.f_6;
				sParam0->f_6 = iParam1;
				sParam0->f_7 = Var2.f_4;
				sParam0->f_9 = (iParam2 / 32);
				sParam0->f_10 = (iParam2 % 32);
				sParam0->f_12 = Var2.f_5;
			}
		}
	}
}

int func_432()
{
	if (GAMEPLAY::IS_BIT_SET(Global_25, 5))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_25, 1) || GAMEPLAY::IS_BIT_SET(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(1571103992, &uVar0, -1))
	{
		if (GAMEPLAY::IS_BIT_SET(uVar0, 5))
		{
			if (GAMEPLAY::IS_BIT_SET(iVar0, 1) || GAMEPLAY::IS_BIT_SET(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_150473.f_3)
		{
			iVar2 = 1035124638;
			if (STATS::STAT_GET_INT(iVar2, &uVar1, -1))
			{
				if (GAMEPLAY::IS_BIT_SET(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
	{
		uVar3 = GAMEPLAY::GET_PROFILE_SETTING(866);
		if (GAMEPLAY::IS_BIT_SET(uVar3, 1) || GAMEPLAY::IS_BIT_SET(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(1571103992, &uVar4, -1);
				GAMEPLAY::SET_BIT(&uVar4, 1);
				GAMEPLAY::SET_BIT(&uVar4, 3);
				GAMEPLAY::SET_BIT(&uVar4, 5);
				GAMEPLAY::SET_BIT(&Global_25, 1);
				GAMEPLAY::SET_BIT(&Global_25, 3);
				GAMEPLAY::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(1571103992, uVar4, 1);
				if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
				{
					iVar4 = GAMEPLAY::GET_PROFILE_SETTING(866);
					GAMEPLAY::SET_BIT(&iVar4, 1);
					GAMEPLAY::SET_BIT(&iVar4, 3);
					STATS::_0xDAC073C7901F9E15(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_433()
{
	if (GAMEPLAY::IS_BIT_SET(Global_25, 6))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_25, 2) || GAMEPLAY::IS_BIT_SET(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(1571103992, &uVar0, -1))
	{
		if (GAMEPLAY::IS_BIT_SET(uVar0, 6))
		{
			if (GAMEPLAY::IS_BIT_SET(iVar0, 2) || GAMEPLAY::IS_BIT_SET(iVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_150473.f_3)
		{
			iVar2 = 1035124638;
			if (STATS::STAT_GET_INT(iVar2, &uVar1, -1))
			{
				if (GAMEPLAY::IS_BIT_SET(uVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
	{
		uVar3 = GAMEPLAY::GET_PROFILE_SETTING(866);
		if (GAMEPLAY::IS_BIT_SET(uVar3, 2) || GAMEPLAY::IS_BIT_SET(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_434()
{
	return 1;
}

int func_435()
{
	return 1;
}

void func_436(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)
{
	sParam0->f_11 = iParam1;
	StringCopy(sParam0, sParam3, 16);
	sParam0->f_4 = GAMEPLAY::GET_HASH_KEY(sParam4);
	sParam0->f_5 = GAMEPLAY::GET_HASH_KEY(sParam5);
	sParam0->f_8 = GAMEPLAY::GET_HASH_KEY(sParam6);
	sParam0->f_6 = iParam7;
	sParam0->f_7 = iParam8;
	sParam0->f_9 = (iParam1 / 32);
	sParam0->f_10 = (iParam1 % 32);
	sParam0->f_12 = iParam9;
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_INJURED(iParam2))
	{
		if ((sParam0->f_6 == 0 || sParam0->f_6 == 1) || sParam0->f_6 == 2)
		{
		}
		else if (sParam0->f_6 == 3 || sParam0->f_6 == 4)
		{
			StringCopy(&cVar0, "", 32);
			if (((((sParam0->f_11 == 13 || sParam0->f_11 == 14) || sParam0->f_11 == 15) || sParam0->f_11 == 16) || sParam0->f_11 == 71) || sParam0->f_11 == 72)
			{
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == 1885233650)
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam6, "torsoDecal") || GAMEPLAY::ARE_STRINGS_EQUAL(sParam6, "hairOverlay"))
			{
				StringCopy(&cVar0, sParam5, 32);
			}
			else
			{
				if (((((((((((((((((((sParam0->f_11 == 0 || sParam0->f_11 == 1) || sParam0->f_11 == 2) || sParam0->f_11 == 4) || sParam0->f_11 == 3) || sParam0->f_11 == 54) || sParam0->f_11 == 5) || sParam0->f_11 == 6) || sParam0->f_11 == 55) || sParam0->f_11 == 7) || sParam0->f_11 == 8) || sParam0->f_11 == 9) || sParam0->f_11 == 10) || sParam0->f_11 == 11) || sParam0->f_11 == 56) || sParam0->f_11 == 12) || sParam0->f_11 == 57) || sParam0->f_11 == 58) || sParam0->f_11 == 59) || sParam0->f_11 == 60)
				{
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else
				{
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == 1885233650 || sParam0->f_11 == 20)
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			sParam0->f_5 = GAMEPLAY::GET_HASH_KEY(&cVar0);
			if (PED::_GET_TATTOO_ZONE(sParam0->f_4, sParam0->f_5) == 7)
			{
				sParam0->f_11 = -1;
			}
		}
	}
}

bool func_437(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	uVar0 = func_438(iParam0, iParam1);
	iVar1 = func_405(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(uVar0, iVar1);
}

int func_438(int iParam0, int iParam1)
{
	iVar0 = func_439(iParam0);
	if (iVar0 == 11511)
	{
		if (func_409() == 2 && func_408() == 2)
		{
			return 0;
		}
		else
		{
			return 0;
		}
	}
	iVar1 = func_414(iVar0, iParam1, 0);
	return iVar1;
}

int func_439(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = func_410(iVar0);
	if ((func_409() == 0 || func_408() == 0) || (func_409() == 999 && func_408() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1048;
				break;
			
			case 1:
				return 1049;
				break;
			
			case 2:
				return 1050;
				break;
			
			case 3:
				return 1051;
				break;
			
			case 4:
				return 1052;
				break;
			
			case 5:
				return 1053;
				break;
			
			case 6:
				return 1487;
				break;
			
			case 7:
				return 1488;
				break;
			
			case 8:
				return 1489;
				break;
			
			case 9:
				return 1490;
				break;
			
			case 10:
				return 1947;
				break;
			
			case 11:
				return 1948;
				break;
			
			case 12:
				return 1949;
				break;
			
			case 13:
				return 2423;
				break;
			
			case 14:
				return 2443;
				break;
			
			case 15:
				return 2446;
				break;
			
			case 16:
				return 2449;
				break;
			
			case 17:
				return 2612;
				break;
			
			case 18:
				return 2615;
				break;
			
			case 19:
				return 2618;
				break;
			
			case 20:
				return 3784;
				break;
			
			case 21:
				return 3787;
				break;
			
			case 22:
				return 3862;
				break;
			
			case 23:
				return 3865;
				break;
			
			case 24:
				return 3868;
				break;
			
			case 25:
				return 3871;
				break;
			
			case 26:
				return 5362;
			
			case 27:
				return 5365;
				break;
			
			case 28:
				return 5467;
				break;
			
			case 29:
				return 5470;
				break;
			
			case 30:
				return 6429;
				break;
			
			case 31:
				return 6432;
				break;
			
			case 32:
				return 7253;
				break;
			
			case 33:
				return 7256;
				break;
			
			case 34:
				return 7259;
				break;
			
			case 35:
				return 7968;
				break;
			
			case 36:
				return 7971;
				break;
			
			case 37:
				return 7974;
				break;
			
			case 38:
				return 7977;
				break;
			
			case 39:
				return 8499;
				break;
			
			case 40:
				return 8502;
				break;
			
			case 41:
				return 8505;
				break;
			
			case 42:
				return 8508;
				break;
			
			case 43:
				return 8902;
				break;
			
			case 44:
				return 8905;
				break;
			
			case 45:
				return 8908;
				break;
			
			case 46:
				break;
		}
		return 11511;
	}
	if (func_409() == 2 && func_408() == 2)
	{
		return 11511;
	}
	return 11511;
}

int func_440(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == 1885233650)
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar2 = func_414(1757, -1, 0);
			if (iVar0 > 15)
			{
				iVar3 = func_445(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = func_441(1885233650, iVar3, 11, 3);
					if ((DLC1::_0x341DE7ED1D2A1BFD(iVar4, 1113995558, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1467682989, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar4, 362493804, 0))
					{
						if (iVar2 == 671171671)
						{
							return 1;
						}
						if (iVar2 == 1495413374)
						{
							return 1;
						}
					}
					else if (DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1393156190, 0) && !DLC1::_0x341DE7ED1D2A1BFD(iVar4, -1237899132, 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == -1667301416)
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			iVar2 = func_414(1757, -1, 0);
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_445(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = func_441(-1667301416, iVar5, 11, 4);
					if ((DLC1::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, -1467682989, 0)) || DLC1::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0))
					{
						if (iVar2 == 1911627074)
						{
							return 1;
						}
						if (iVar2 == -1214222467)
						{
							return 1;
						}
					}
					else if (DLC1::_0x341DE7ED1D2A1BFD(iVar6, -1393156190, 0) && !DLC1::_0x341DE7ED1D2A1BFD(iVar6, -1237899132, 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
	}
	return 0;
}

int func_441(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar19 = (iParam1 - func_444(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = DLC1::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			DLC1::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		DLC1::INIT_SHOP_PED_COMPONENT(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_442(iParam0, func_443(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76556.f_26[iParam2] && iParam1 == Global_76556[iParam2]) && Global_76556.f_13[iParam2] != 0)
		{
			return Global_76556.f_13[iParam2];
		}
		iVar41 = DLC1::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 0, -1, func_443(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			DLC1::GET_SHOP_PED_QUERY_COMPONENT(iVar38, &Var21);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_76556.f_13[iParam2] = Var21.f_1;
					Global_76556[iParam2] = iParam1;
					Global_76556.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_442(int iParam0, int iParam1)
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

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
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
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_444(int iParam0)
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

int func_445(int iParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_451(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_451(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_446(iParam0, iParam2);
			}
		}
		else
		{
			return func_533(iParam0, iParam1);
		}
	}
	return -99;
}

int func_446(int iParam0, int iParam1)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_450(iParam1);
	}
	iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	return func_447(iParam0, iVar0, iVar1, iParam1);
}

int func_447(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -1)
	{
		return func_450(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = DLC1::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == 1885233650)
		{
			return func_449(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == -1667301416)
		{
			return func_449(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_448(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_450(iParam3);
}

int func_448(int iParam0, int iParam1)
{
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
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
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case 1885233650:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_449(int iParam0, int iParam1, int iParam2, int iParam3)
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
					return (func_444(iParam0) + iVar18);
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
		iVar39 = DLC1::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 0, -1, func_443(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			DLC1::GET_SHOP_PED_QUERY_COMPONENT(iVar37, &Var20);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_442(iParam0, func_443(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_450(int iParam0)
{
	switch (iParam0)
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
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_451(int iParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_76434[1] = { func_467(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!GAMEPLAY::IS_BIT_SET(Global_76434[1].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_463(iVar0, iParam2) };
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
				if (!func_451(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar25 = { func_460(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_451(iParam0, 14, uVar25[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_76434[2] = { func_467(iVar0, 14, iVar6, -1) };
									if (Global_76434[2].f_12 == iVar5)
									{
										if (func_451(iParam0, 14, iVar6))
										{
											if (!func_455(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_76434[2])))
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
						iVar1 = func_533(iParam0, iVar4);
						Global_76434[2] = { func_467(iVar0, iVar4, iVar1, -1) };
						if (!func_455(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_76434[2])))
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
			if (func_414(1757, Global_76431, 0) != uVar8[10])
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
		uVar36 = { func_460(iVar0, iParam2) };
		iVar35 = 0;
		while (iVar35 <= 8)
		{
			if (!func_451(iParam0, 14, uVar36[iVar35]))
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
		if (Global_76434[1].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_443(iParam1)) && Global_76434[1].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_443(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_76433++;
			if (Global_76433 == 1)
			{
				if (func_454(iVar0, 11, func_533(iParam0, 11), -1))
				{
					if (func_453(iVar0, 4, iParam2, &uVar68))
					{
						return func_451(iParam0, 4, uVar68);
					}
				}
				else if (func_452(iVar0, 4, iParam2, &uVar68))
				{
					return func_451(iParam0, 4, uVar68);
				}
			}
			Global_76433 = (Global_76433 - 1);
		}
	}
	return 0;
}

int func_452(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_441(iParam0, iParam2, iParam1, 4);
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
											*uParam3 = func_449(iParam0, iVar3, iParam1, 4);
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

int func_453(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_441(iParam0, iParam2, iParam1, 4);
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
											*uParam3 = func_449(iParam0, iVar3, iParam1, 4);
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

int func_454(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_441(iParam0, iParam2, 11, 4);
						}
						return DLC1::_0x341DE7ED1D2A1BFD(iParam3, -530089825, 0);
					}
					break;
			}
			break;
	}
	return 0;
}

int func_455(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
		uVar0 = { func_460(iParam0, (*uParam4)[13]) };
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
	if (func_459(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == 225514697)
	{
		if (func_458(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_457(iParam0, iParam2, iParam3, -1))
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
		else if (func_456(iParam0, iParam2, iParam3, -1))
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
		if (func_458(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_457(iParam0, iParam2, iParam3, -1))
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
		else if (func_456(iParam0, iParam2, iParam3, -1))
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
		if (func_458(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_457(iParam0, iParam2, iParam3, -1))
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
		else if (func_456(iParam0, iParam2, iParam3, -1))
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

int func_456(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_441(iParam0, iParam2, 14, 3);
						}
						return (DLC1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) || DLC1::_0x341DE7ED1D2A1BFD(func_441(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_441(iParam0, iParam2, 1, 3);
						}
						return (DLC1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) || DLC1::_0x341DE7ED1D2A1BFD(func_441(iParam0, iParam2, 1, 3), -1842686353, 0));
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
							iParam3 = func_441(iParam0, iParam2, 14, 4);
						}
						return (DLC1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) || DLC1::_0x341DE7ED1D2A1BFD(func_441(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_441(iParam0, iParam2, 1, 4);
						}
						return (DLC1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) || DLC1::_0x341DE7ED1D2A1BFD(func_441(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_457(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_441(iParam0, iParam2, 1, 3);
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
						iParam3 = func_441(iParam0, iParam2, 1, 4);
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

int func_458(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_441(iParam0, iParam2, 14, 3);
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
						iParam3 = func_441(iParam0, iParam2, 14, 4);
					}
					return DLC1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_459(int iParam0, int iParam1, int iParam2)
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

struct<10> func_460(int iParam0, int iParam1)
{
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 31:
					func_462(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_462(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_462(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_462(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_462(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_462(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_462(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_462(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_462(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_462(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_462(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_461(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 31:
					func_462(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_462(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_462(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_462(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_462(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_462(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_462(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_462(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_462(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_462(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_461(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 31:
					func_462(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_462(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_462(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_462(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_462(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_462(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_462(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_462(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_462(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_462(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_461(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case 1885233650:
			switch (iParam1)
			{
				case 31:
					func_462(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_462(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_462(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_462(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_462(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_462(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_462(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_462(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_462(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_462(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_462(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_462(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_462(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_462(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_462(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_462(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_462(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_462(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_462(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_462(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_462(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_462(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_462(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_462(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_462(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_462(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_461(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 31:
					func_462(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_462(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_462(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_462(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_462(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_462(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_462(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_462(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_462(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_462(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_462(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_462(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_462(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_462(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_462(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_462(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_462(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_462(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_462(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_462(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_462(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_462(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_462(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_462(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_462(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_461(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_461(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == 225514697)
		{
			iVar0 = 0;
		}
		else if (iParam1 == -1692214353)
		{
			iVar0 = 1;
		}
		else if (iParam1 == -1686040670)
		{
			iVar0 = 2;
		}
		else if (iParam1 == 1885233650)
		{
			iVar0 = 3;
		}
		else if (iParam1 == -1667301416)
		{
			iVar0 = 4;
		}
		DLC1::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
		if (!DLC1::_IS_DLC_DATA_EMPTY(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (DLC1::_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar19, &Var16) && Var16.z != -1)
				{
					if ((Var16.x != 0 && Var16.x != -1) && Var16.x != 1849449579)
					{
						(*iParam0)[Var16.z] = func_449(iParam1, Var16.x, 14, iVar0);
					}
					else if (Var16.y != -1)
					{
						(*iParam0)[Var16.z] = Var16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_462(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_463(int iParam0, int iParam1)
{
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 0:
					if (Global_111638.f_9080.f_99.f_58[120])
					{
						func_466(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_466(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_466(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_466(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_466(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_466(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_466(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[0], Global_111638.f_2358.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_466(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_466(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_466(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_466(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_466(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_466(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_466(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_466(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_466(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_466(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_466(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_466(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_466(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_466(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_466(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_466(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_466(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_466(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_466(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_466(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_466(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_466(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_466(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_466(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_466(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_466(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_466(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_466(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_466(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_466(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_466(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_466(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_466(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_466(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_466(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_466(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_466(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_466(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_466(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_466(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_466(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_466(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_466(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_466(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_466(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_466(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_466(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_464(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 0:
					func_466(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_466(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_466(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[1], Global_111638.f_2358.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_466(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_466(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_466(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_466(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_466(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_466(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_466(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_466(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_466(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_466(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_466(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_466(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_466(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_466(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_466(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_466(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_466(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_466(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_466(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_466(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_466(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_466(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_466(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_466(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_466(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_466(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_466(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_466(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_466(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_466(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_466(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_466(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_466(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_466(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_466(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_466(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_466(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_466(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_466(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_466(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_466(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_466(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_466(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_466(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_464(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 0:
					func_466(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_466(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_466(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_466(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_466(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[2], Global_111638.f_2358.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_466(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_466(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_466(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_466(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_466(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_466(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_466(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_466(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_466(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_466(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_466(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_466(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_466(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_466(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_466(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_466(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_466(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_466(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_466(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_466(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_466(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_466(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_466(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_466(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_466(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_466(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_466(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_466(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_466(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_466(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_466(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_466(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_466(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_466(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_466(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_466(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_466(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_466(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_466(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_466(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_466(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_466(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_466(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_464(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case 1885233650:
			switch (iParam1)
			{
				case 0:
					func_466(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_466(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_466(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_466(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_466(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_466(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_466(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_466(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_466(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_466(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_466(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_466(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_466(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_466(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_466(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_466(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_466(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_466(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_466(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_466(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_466(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_466(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_466(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_466(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_466(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_466(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_464(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 0:
					func_466(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_466(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_466(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_466(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_466(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_466(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_466(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_466(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_466(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_466(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_466(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_466(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_466(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_466(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_466(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_466(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_466(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_466(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_466(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_466(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_466(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_466(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_466(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_466(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_466(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_466(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_466(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_466(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_464(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_464(var uParam0, int iParam1, int iParam2, int iParam3)
{
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == 225514697)
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == -1692214353)
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == -1686040670)
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == 1885233650)
	{
		iVar0 = 3;
	}
	else if (iParam1 == -1667301416)
	{
		iVar0 = 4;
	}
	DLC1::_0xF3FBE2D50A6A8C28(iVar0, 0);
	DLC1::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
	if (!DLC1::_IS_DLC_DATA_EMPTY(Var1))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (DLC1::_GET_PROP_FROM_OUTFIT(Var1.f_1, iVar36, &Var16))
			{
				if ((Var16.x != 0 && Var16.x != -1) && Var16.x != 1849449579)
				{
					if (Var16.z == 10)
					{
						DLC1::INIT_SHOP_PED_COMPONENT(&Var19);
						DLC1::GET_SHOP_PED_COMPONENT(Var16.x, &Var19);
						if (Var16.x != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var16.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_465(Var16.z)] = Var16.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_465(Var16.z)] = func_449(iParam1, Var16.x, func_465(Var16.z), iVar0);
					}
				}
				else if (Var16.y != -1)
				{
					(*uParam0)[func_465(Var16.z)] = Var16.y;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
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
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_466(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

struct<14> func_467(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_510();
	if (iParam0 == 1885233650)
	{
		func_494(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == -1667301416)
	{
		func_468(iParam1, iParam2, iParam3);
	}
	return Global_76434[0];
}

void func_468(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_493(iParam1, iParam2);
			break;
		
		case 11:
			func_492(iParam1, iParam2);
			break;
		
		case 8:
			func_491(iParam1, iParam2);
			break;
		
		case 9:
			func_490(iParam1, iParam2);
			break;
		
		case 3:
			func_489(iParam1, iParam2);
			break;
		
		case 4:
			func_488(iParam1, iParam2);
			break;
		
		case 6:
			func_487(iParam1, iParam2);
			break;
		
		case 1:
			func_486(iParam1, iParam2);
			break;
		
		case 7:
			func_485(iParam1, iParam2);
			break;
		
		case 10:
			func_484(iParam1, iParam2);
			break;
		
		case 14:
			func_483(iParam1, iParam2);
			break;
		
		case 12:
			func_482(iParam1, iParam2);
			break;
		
		case 5:
			func_481(iParam1, iParam2);
			break;
		
		case 0:
			func_479(iParam1, iParam2);
			break;
		
		case 13:
			func_469(iParam1);
			break;
	}
}

void func_469(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_470(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_470(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_478(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (GAMEPLAY::GET_HASH_KEY(sParam3) != GAMEPLAY::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		GAMEPLAY::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		GAMEPLAY::SET_BIT(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_6), 5);
		}
		GAMEPLAY::SET_BIT(&(uParam0->f_6), 1);
		GAMEPLAY::SET_BIT(&(uParam0->f_6), 2);
		GAMEPLAY::SET_BIT(&(uParam0->f_6), 6);
		if (func_477(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, 0))
			{
				GAMEPLAY::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_475(Global_2621444, 1, 1, 1, -1))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_475(Global_2621444, 2, 1, 1, -1))
			{
				GAMEPLAY::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_475(Global_2621444, 1, 1, 1, -1))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_475(Global_2621444, 2, 1, 1, -1))
			{
				GAMEPLAY::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_475(Global_2621444, 1, 1, 1, -1))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_475(Global_2621444, 2, 1, 1, -1))
			{
				GAMEPLAY::SET_BIT(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		GAMEPLAY::SET_BIT(&(uParam0->f_6), 0);
		GAMEPLAY::SET_BIT(&(uParam0->f_6), 5);
		if (func_474(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_474(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_474(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_477(14))
			{
				return;
			}
			uVar0 = func_414(func_473(iParam1, uParam0->f_2), Global_76431, 0);
			if (GAMEPLAY::IS_BIT_SET(uVar0, uParam0->f_1))
			{
				GAMEPLAY::SET_BIT(&(uParam0->f_6), 1);
			}
			iVar0 = func_414(func_472(iParam1, uParam0->f_2), Global_76431, 0);
			if (GAMEPLAY::IS_BIT_SET(iVar0, uParam0->f_1))
			{
				GAMEPLAY::SET_BIT(&(uParam0->f_6), 2);
			}
			if (func_471(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_414(iVar1, Global_76431, 0);
				if (!GAMEPLAY::IS_BIT_SET(iVar0, uParam0->f_1))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_6), 1);
			GAMEPLAY::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_6), 1);
			GAMEPLAY::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

bool func_471(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

int func_472(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

int func_473(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

int func_474(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1][iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_4[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_8[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_12[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_16[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_20[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_24[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_28[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_32[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_36[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_40[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_44[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_48[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_52[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_56[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_60[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_64[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_68[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_72[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_76[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_80[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_84[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_88[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_92[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_96[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_100[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_104[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_108[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_112[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_116[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_120[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_124[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_128[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_132[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_136[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_140[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_144[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_148[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_152[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_156[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_2358[iParam1].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_2358[iParam1].f_160[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_111638.f_2358[iParam1].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_475(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_476(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_414(iVar2, iVar0, 0);
		return GAMEPLAY::IS_BIT_SET(uVar3, iVar1);
	}
	return 0;
}

bool func_476(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam2 = 11511;
	if ((bParam4 && Global_4267094) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4267094)
		{
			iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else
		{
			iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else
	{
		iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1785;
					break;
				
				case 14:
					*uParam2 = 1786;
					break;
				
				case 15:
					*uParam2 = 1887;
					break;
				
				case 16:
					*uParam2 = 1888;
					break;
				
				case 17:
					*uParam2 = 1919;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2041;
					break;
				
				case 24:
					*uParam2 = 2042;
					break;
				
				case 25:
					*uParam2 = 2068;
					break;
				
				case 26:
					*uParam2 = 2069;
					break;
				
				case 27:
					*uParam2 = 2070;
					break;
				
				case 28:
					*uParam2 = 2071;
					break;
				
				case 29:
					*uParam2 = 2072;
					break;
				
				case 30:
					*uParam2 = 2073;
					break;
				
				case 31:
					*uParam2 = 2074;
					break;
				
				case 32:
					*uParam2 = 2075;
					break;
				
				case 33:
					*uParam2 = 2076;
					break;
				
				case 34:
					*uParam2 = 2077;
					break;
				
				case 35:
					*uParam2 = 2324;
					break;
				
				case 36:
					*uParam2 = 2325;
					break;
				
				case 37:
					*uParam2 = 2389;
					break;
				
				case 38:
					*uParam2 = 2390;
					break;
				
				case 39:
					*uParam2 = 2391;
					break;
				
				case 40:
					*uParam2 = 2392;
					break;
				
				case 41:
					*uParam2 = 2451;
					break;
				
				case 42:
					*uParam2 = 2452;
					break;
				
				case 43:
					*uParam2 = 2453;
					break;
				
				case 44:
					*uParam2 = 2454;
					break;
				
				case 45:
					*uParam2 = 2455;
					break;
				
				case 46:
					*uParam2 = 2456;
					break;
				
				case 47:
					*uParam2 = 2457;
					break;
				
				case 48:
					*uParam2 = 2458;
					break;
				
				case 49:
					*uParam2 = 2459;
					break;
				
				case 50:
					*uParam2 = 2460;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3196;
					break;
				
				case 63:
					*uParam2 = 3197;
					break;
				
				case 64:
					*uParam2 = 3198;
					break;
				
				case 65:
					*uParam2 = 3199;
					break;
				
				case 66:
					*uParam2 = 3200;
					break;
				
				case 67:
					*uParam2 = 3201;
					break;
				
				case 68:
					*uParam2 = 3669;
					break;
				
				case 69:
					*uParam2 = 3670;
					break;
				
				case 70:
					*uParam2 = 3671;
					break;
				
				case 71:
					*uParam2 = 3672;
					break;
				
				case 72:
					*uParam2 = 3673;
					break;
				
				case 73:
					*uParam2 = 3674;
					break;
				
				case 74:
					*uParam2 = 3675;
					break;
				
				case 75:
					*uParam2 = 3676;
					break;
				
				case 76:
					*uParam2 = 3677;
					break;
				
				case 77:
					*uParam2 = 3678;
					break;
				
				case 78:
					*uParam2 = 3792;
					break;
				
				case 79:
					*uParam2 = 3793;
					break;
				
				case 80:
					*uParam2 = 3794;
					break;
				
				case 81:
					*uParam2 = 3795;
					break;
				
				case 82:
					*uParam2 = 3796;
					break;
				
				case 83:
					*uParam2 = 3797;
					break;
				
				case 84:
					*uParam2 = 3798;
					break;
				
				case 85:
					*uParam2 = 3799;
					break;
				
				case 86:
					*uParam2 = 3902;
					break;
				
				case 87:
					*uParam2 = 3903;
					break;
				
				case 88:
					*uParam2 = 3904;
					break;
				
				case 89:
					*uParam2 = 5337;
					break;
				
				case 90:
					*uParam2 = 5338;
					break;
				
				case 91:
					*uParam2 = 5339;
					break;
				
				case 92:
					*uParam2 = 5340;
					break;
				
				case 93:
					*uParam2 = 5341;
					break;
				
				case 94:
					*uParam2 = 5342;
					break;
				
				case 95:
					*uParam2 = 5343;
					break;
				
				case 96:
					*uParam2 = 5344;
					break;
				
				case 97:
					*uParam2 = 5345;
					break;
				
				case 98:
					*uParam2 = 5346;
					break;
				
				case 99:
					*uParam2 = 5347;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5348;
					break;
				
				case 101:
					*uParam2 = 5394;
					break;
				
				case 102:
					*uParam2 = 5395;
					break;
				
				case 103:
					*uParam2 = 5396;
					break;
				
				case 104:
					*uParam2 = 5397;
					break;
				
				case 105:
					*uParam2 = 5398;
					break;
				
				case 106:
					*uParam2 = 5399;
					break;
				
				case 107:
					*uParam2 = 5400;
					break;
				
				case 108:
					*uParam2 = 5401;
					break;
				
				case 109:
					*uParam2 = 5402;
					break;
				
				case 110:
					*uParam2 = 5403;
					break;
				
				case 111:
					*uParam2 = 5404;
					break;
				
				case 112:
					*uParam2 = 5405;
					break;
				
				case 113:
					*uParam2 = 5406;
					break;
				
				case 114:
					*uParam2 = 5407;
					break;
				
				case 115:
					*uParam2 = 5408;
					break;
				
				case 116:
					*uParam2 = 5409;
					break;
				
				case 117:
					*uParam2 = 5410;
					break;
				
				case 118:
					*uParam2 = 5411;
					break;
				
				case 119:
					*uParam2 = 5412;
					break;
				
				case 120:
					*uParam2 = 5413;
					break;
				
				case 121:
					*uParam2 = 5414;
					break;
				
				case 122:
					*uParam2 = 5415;
					break;
				
				case 123:
					*uParam2 = 5416;
					break;
				
				case 124:
					*uParam2 = 6122;
					break;
				
				case 125:
					*uParam2 = 6123;
					break;
				
				case 126:
					*uParam2 = 6124;
					break;
				
				case 127:
					*uParam2 = 6125;
					break;
				
				case 128:
					*uParam2 = 6126;
					break;
				
				case 129:
					*uParam2 = 6127;
					break;
				
				case 130:
					*uParam2 = 6128;
					break;
				
				case 131:
					*uParam2 = 6129;
					break;
				
				case 132:
					*uParam2 = 6130;
					break;
				
				case 133:
					*uParam2 = 6131;
					break;
				
				case 134:
					*uParam2 = 6132;
					break;
				
				case 135:
					*uParam2 = 6133;
					break;
				
				case 136:
					*uParam2 = 6134;
					break;
				
				case 137:
					*uParam2 = 6135;
					break;
				
				case 138:
					*uParam2 = 6136;
					break;
				
				case 139:
					*uParam2 = 6435;
					break;
				
				case 140:
					*uParam2 = 6436;
					break;
				
				case 141:
					*uParam2 = 6437;
					break;
				
				case 142:
					*uParam2 = 6438;
					break;
				
				case 143:
					*uParam2 = 6439;
					break;
				
				case 144:
					*uParam2 = 6440;
					break;
				
				case 145:
					*uParam2 = 6441;
					break;
				
				case 146:
					*uParam2 = 6442;
					break;
				
				case 147:
					*uParam2 = 6443;
					break;
				
				case 148:
					*uParam2 = 6444;
					break;
				
				case 149:
					*uParam2 = 6445;
					break;
				
				case 150:
					*uParam2 = 6446;
					break;
				
				case 151:
					*uParam2 = 6447;
					break;
				
				case 152:
					*uParam2 = 6448;
					break;
				
				case 153:
					*uParam2 = 6449;
					break;
				
				case 154:
					*uParam2 = 7266;
					break;
				
				case 155:
					*uParam2 = 7267;
					break;
				
				case 156:
					*uParam2 = 7268;
					break;
				
				case 157:
					*uParam2 = 7269;
					break;
				
				case 158:
					*uParam2 = 7270;
					break;
				
				case 159:
					*uParam2 = 7271;
					break;
				
				case 160:
					*uParam2 = 7272;
					break;
				
				case 161:
					*uParam2 = 7879;
					break;
				
				case 162:
					*uParam2 = 7880;
					break;
				
				case 163:
					*uParam2 = 7881;
					break;
				
				case 164:
					*uParam2 = 7882;
					break;
				
				case 165:
					*uParam2 = 7883;
					break;
				
				case 166:
					*uParam2 = 7884;
					break;
				
				case 167:
					*uParam2 = 7885;
					break;
				
				case 168:
					*uParam2 = 7886;
					break;
				
				case 169:
					*uParam2 = 7887;
					break;
				
				case 170:
					*uParam2 = 7888;
					break;
				
				case 171:
					*uParam2 = 7889;
					break;
				
				case 172:
					*uParam2 = 7890;
					break;
				
				case 173:
					*uParam2 = 7891;
					break;
				
				case 174:
					*uParam2 = 7892;
					break;
				
				case 175:
					*uParam2 = 7893;
					break;
				
				case 176:
					*uParam2 = 8299;
					break;
				
				case 177:
					*uParam2 = 8300;
					break;
				
				case 178:
					*uParam2 = 8301;
					break;
				
				case 179:
					*uParam2 = 8302;
					break;
				
				case 180:
					*uParam2 = 8303;
					break;
				
				case 181:
					*uParam2 = 8304;
					break;
				
				case 182:
					*uParam2 = 8305;
					break;
				
				case 183:
					*uParam2 = 8306;
					break;
				
				case 184:
					*uParam2 = 8307;
					break;
				
				case 185:
					*uParam2 = 8308;
					break;
				
				case 186:
					*uParam2 = 8309;
					break;
				
				case 187:
					*uParam2 = 8310;
					break;
				
				case 188:
					*uParam2 = 8311;
					break;
				
				case 189:
					*uParam2 = 8312;
					break;
				
				case 190:
					*uParam2 = 8313;
					break;
				
				case 191:
					*uParam2 = 8314;
					break;
				
				case 192:
					*uParam2 = 8315;
					break;
				
				case 193:
					*uParam2 = 8316;
					break;
				
				case 194:
					*uParam2 = 8317;
					break;
				
				case 195:
					*uParam2 = 8318;
					break;
				
				case 196:
					*uParam2 = 8319;
					break;
				
				case 197:
					*uParam2 = 8320;
					break;
				
				case 198:
					*uParam2 = 8321;
					break;
				
				case 199:
					*uParam2 = 8322;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8323;
					break;
				
				case 201:
					*uParam2 = 8936;
					break;
				
				case 202:
					*uParam2 = 8937;
					break;
				
				case 203:
					*uParam2 = 8938;
					break;
				
				case 204:
					*uParam2 = 8939;
					break;
				
				case 205:
					*uParam2 = 8940;
					break;
				
				case 206:
					*uParam2 = 9419;
					break;
				
				case 207:
					*uParam2 = 9420;
					break;
				
				case 208:
					*uParam2 = 9421;
					break;
				
				case 209:
					*uParam2 = 9422;
					break;
				
				case 210:
					*uParam2 = 9423;
					break;
				
				case 211:
					*uParam2 = 9424;
					break;
				
				case 212:
					*uParam2 = 9425;
					break;
				
				case 213:
					*uParam2 = 9426;
					break;
				
				case 214:
					*uParam2 = 9427;
					break;
				
				case 215:
					*uParam2 = 9428;
					break;
				
				case 216:
					*uParam2 = 9429;
					break;
				
				case 217:
					*uParam2 = 9430;
					break;
				
				case 218:
					*uParam2 = 9431;
					break;
				
				case 219:
					*uParam2 = 9432;
					break;
				
				case 220:
					*uParam2 = 9433;
					break;
				
				case 221:
					*uParam2 = 9434;
					break;
				
				case 222:
					*uParam2 = 9435;
					break;
				
				case 223:
					*uParam2 = 9436;
					break;
				
				case 224:
					*uParam2 = 9437;
					break;
				
				case 225:
					*uParam2 = 9438;
					break;
				
				case 226:
					*uParam2 = 9439;
					break;
				
				case 227:
					*uParam2 = 9440;
					break;
				
				case 228:
					*uParam2 = 9441;
					break;
				
				case 229:
					*uParam2 = 9442;
					break;
				
				case 230:
					*uParam2 = 9443;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1765;
					break;
				
				case 1:
					*uParam2 = 1766;
					break;
				
				case 2:
					*uParam2 = 1767;
					break;
				
				case 3:
					*uParam2 = 1768;
					break;
				
				case 4:
					*uParam2 = 1769;
					break;
				
				case 5:
					*uParam2 = 1770;
					break;
				
				case 6:
					*uParam2 = 1778;
					break;
				
				case 7:
					*uParam2 = 1779;
					break;
				
				case 8:
					*uParam2 = 1780;
					break;
				
				case 9:
					*uParam2 = 1781;
					break;
				
				case 10:
					*uParam2 = 1782;
					break;
				
				case 11:
					*uParam2 = 1783;
					break;
				
				case 12:
					*uParam2 = 1784;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1938;
					break;
				
				case 19:
					*uParam2 = 1939;
					break;
				
				case 20:
					*uParam2 = 1940;
					break;
				
				case 21:
					*uParam2 = 1941;
					break;
				
				case 22:
					*uParam2 = 1942;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2078;
					break;
				
				case 26:
					*uParam2 = 2079;
					break;
				
				case 27:
					*uParam2 = 2080;
					break;
				
				case 28:
					*uParam2 = 2081;
					break;
				
				case 29:
					*uParam2 = 2082;
					break;
				
				case 30:
					*uParam2 = 2083;
					break;
				
				case 31:
					*uParam2 = 2084;
					break;
				
				case 32:
					*uParam2 = 2085;
					break;
				
				case 33:
					*uParam2 = 2086;
					break;
				
				case 34:
					*uParam2 = 2087;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2393;
					break;
				
				case 38:
					*uParam2 = 2394;
					break;
				
				case 39:
					*uParam2 = 2395;
					break;
				
				case 40:
					*uParam2 = 2396;
					break;
				
				case 41:
					*uParam2 = 2461;
					break;
				
				case 42:
					*uParam2 = 2462;
					break;
				
				case 43:
					*uParam2 = 2463;
					break;
				
				case 44:
					*uParam2 = 2464;
					break;
				
				case 45:
					*uParam2 = 2465;
					break;
				
				case 46:
					*uParam2 = 2466;
					break;
				
				case 47:
					*uParam2 = 2467;
					break;
				
				case 48:
					*uParam2 = 2468;
					break;
				
				case 49:
					*uParam2 = 2469;
					break;
				
				case 50:
					*uParam2 = 2470;
					break;
				
				case 51:
					*uParam2 = 2600;
					break;
				
				case 52:
					*uParam2 = 2601;
					break;
				
				case 53:
					*uParam2 = 2602;
					break;
				
				case 54:
					*uParam2 = 2603;
					break;
				
				case 55:
					*uParam2 = 2604;
					break;
				
				case 56:
					*uParam2 = 2605;
					break;
				
				case 57:
					*uParam2 = 2606;
					break;
				
				case 58:
					*uParam2 = 2607;
					break;
				
				case 59:
					*uParam2 = 2608;
					break;
				
				case 60:
					*uParam2 = 2609;
					break;
				
				case 61:
					*uParam2 = 2610;
					break;
				
				case 62:
					*uParam2 = 3202;
					break;
				
				case 63:
					*uParam2 = 3203;
					break;
				
				case 64:
					*uParam2 = 3204;
					break;
				
				case 65:
					*uParam2 = 3205;
					break;
				
				case 66:
					*uParam2 = 3206;
					break;
				
				case 67:
					*uParam2 = 3207;
					break;
				
				case 68:
					*uParam2 = 3679;
					break;
				
				case 69:
					*uParam2 = 3680;
					break;
				
				case 70:
					*uParam2 = 3681;
					break;
				
				case 71:
					*uParam2 = 3682;
					break;
				
				case 72:
					*uParam2 = 3683;
					break;
				
				case 73:
					*uParam2 = 3684;
					break;
				
				case 74:
					*uParam2 = 3685;
					break;
				
				case 75:
					*uParam2 = 3686;
					break;
				
				case 76:
					*uParam2 = 3687;
					break;
				
				case 77:
					*uParam2 = 3688;
					break;
				
				case 78:
					*uParam2 = 3800;
					break;
				
				case 79:
					*uParam2 = 3801;
					break;
				
				case 80:
					*uParam2 = 3802;
					break;
				
				case 81:
					*uParam2 = 3803;
					break;
				
				case 82:
					*uParam2 = 3804;
					break;
				
				case 83:
					*uParam2 = 3805;
					break;
				
				case 84:
					*uParam2 = 3806;
					break;
				
				case 85:
					*uParam2 = 3807;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5349;
					break;
				
				case 90:
					*uParam2 = 5350;
					break;
				
				case 91:
					*uParam2 = 5351;
					break;
				
				case 92:
					*uParam2 = 5352;
					break;
				
				case 93:
					*uParam2 = 5353;
					break;
				
				case 94:
					*uParam2 = 5354;
					break;
				
				case 95:
					*uParam2 = 5355;
					break;
				
				case 96:
					*uParam2 = 5356;
					break;
				
				case 97:
					*uParam2 = 5357;
					break;
				
				case 98:
					*uParam2 = 5358;
					break;
				
				case 99:
					*uParam2 = 5359;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5360;
					break;
				
				case 101:
					*uParam2 = 5417;
					break;
				
				case 102:
					*uParam2 = 5418;
					break;
				
				case 103:
					*uParam2 = 5419;
					break;
				
				case 104:
					*uParam2 = 5420;
					break;
				
				case 105:
					*uParam2 = 5421;
					break;
				
				case 106:
					*uParam2 = 5422;
					break;
				
				case 107:
					*uParam2 = 5423;
					break;
				
				case 108:
					*uParam2 = 5424;
					break;
				
				case 109:
					*uParam2 = 5425;
					break;
				
				case 110:
					*uParam2 = 5426;
					break;
				
				case 111:
					*uParam2 = 5427;
					break;
				
				case 112:
					*uParam2 = 5428;
					break;
				
				case 113:
					*uParam2 = 5429;
					break;
				
				case 114:
					*uParam2 = 5430;
					break;
				
				case 115:
					*uParam2 = 5431;
					break;
				
				case 116:
					*uParam2 = 5432;
					break;
				
				case 117:
					*uParam2 = 5433;
					break;
				
				case 118:
					*uParam2 = 5434;
					break;
				
				case 119:
					*uParam2 = 5435;
					break;
				
				case 120:
					*uParam2 = 5436;
					break;
				
				case 121:
					*uParam2 = 5437;
					break;
				
				case 122:
					*uParam2 = 5438;
					break;
				
				case 123:
					*uParam2 = 5439;
					break;
				
				case 124:
					*uParam2 = 6137;
					break;
				
				case 125:
					*uParam2 = 6138;
					break;
				
				case 126:
					*uParam2 = 6139;
					break;
				
				case 127:
					*uParam2 = 6140;
					break;
				
				case 128:
					*uParam2 = 6141;
					break;
				
				case 129:
					*uParam2 = 6142;
					break;
				
				case 130:
					*uParam2 = 6143;
					break;
				
				case 131:
					*uParam2 = 6144;
					break;
				
				case 132:
					*uParam2 = 6145;
					break;
				
				case 133:
					*uParam2 = 6146;
					break;
				
				case 134:
					*uParam2 = 6147;
					break;
				
				case 135:
					*uParam2 = 6148;
					break;
				
				case 136:
					*uParam2 = 6149;
					break;
				
				case 137:
					*uParam2 = 6150;
					break;
				
				case 138:
					*uParam2 = 6151;
					break;
				
				case 139:
					*uParam2 = 6450;
					break;
				
				case 140:
					*uParam2 = 6451;
					break;
				
				case 141:
					*uParam2 = 6452;
					break;
				
				case 142:
					*uParam2 = 6453;
					break;
				
				case 143:
					*uParam2 = 6454;
					break;
				
				case 144:
					*uParam2 = 6455;
					break;
				
				case 145:
					*uParam2 = 6456;
					break;
				
				case 146:
					*uParam2 = 6457;
					break;
				
				case 147:
					*uParam2 = 6458;
					break;
				
				case 148:
					*uParam2 = 6459;
					break;
				
				case 149:
					*uParam2 = 6460;
					break;
				
				case 150:
					*uParam2 = 6461;
					break;
				
				case 151:
					*uParam2 = 6462;
					break;
				
				case 152:
					*uParam2 = 6463;
					break;
				
				case 153:
					*uParam2 = 6464;
					break;
				
				case 154:
					*uParam2 = 7273;
					break;
				
				case 155:
					*uParam2 = 7274;
					break;
				
				case 156:
					*uParam2 = 7275;
					break;
				
				case 157:
					*uParam2 = 7276;
					break;
				
				case 158:
					*uParam2 = 7277;
					break;
				
				case 159:
					*uParam2 = 7278;
					break;
				
				case 160:
					*uParam2 = 7279;
					break;
				
				case 161:
					*uParam2 = 7894;
					break;
				
				case 162:
					*uParam2 = 7895;
					break;
				
				case 163:
					*uParam2 = 7896;
					break;
				
				case 164:
					*uParam2 = 7897;
					break;
				
				case 165:
					*uParam2 = 7898;
					break;
				
				case 166:
					*uParam2 = 7899;
					break;
				
				case 167:
					*uParam2 = 7900;
					break;
				
				case 168:
					*uParam2 = 7901;
					break;
				
				case 169:
					*uParam2 = 7902;
					break;
				
				case 170:
					*uParam2 = 7903;
					break;
				
				case 171:
					*uParam2 = 7904;
					break;
				
				case 172:
					*uParam2 = 7905;
					break;
				
				case 173:
					*uParam2 = 7906;
					break;
				
				case 174:
					*uParam2 = 7907;
					break;
				
				case 175:
					*uParam2 = 7908;
					break;
				
				case 176:
					*uParam2 = 8324;
					break;
				
				case 177:
					*uParam2 = 8325;
					break;
				
				case 178:
					*uParam2 = 8326;
					break;
				
				case 179:
					*uParam2 = 8327;
					break;
				
				case 180:
					*uParam2 = 8328;
					break;
				
				case 181:
					*uParam2 = 8329;
					break;
				
				case 182:
					*uParam2 = 8330;
					break;
				
				case 183:
					*uParam2 = 8331;
					break;
				
				case 184:
					*uParam2 = 8332;
					break;
				
				case 185:
					*uParam2 = 8333;
					break;
				
				case 186:
					*uParam2 = 8334;
					break;
				
				case 187:
					*uParam2 = 8335;
					break;
				
				case 188:
					*uParam2 = 8336;
					break;
				
				case 189:
					*uParam2 = 8337;
					break;
				
				case 190:
					*uParam2 = 8338;
					break;
				
				case 191:
					*uParam2 = 8339;
					break;
				
				case 192:
					*uParam2 = 8340;
					break;
				
				case 193:
					*uParam2 = 8341;
					break;
				
				case 194:
					*uParam2 = 8342;
					break;
				
				case 195:
					*uParam2 = 8343;
					break;
				
				case 196:
					*uParam2 = 8344;
					break;
				
				case 197:
					*uParam2 = 8345;
					break;
				
				case 198:
					*uParam2 = 8346;
					break;
				
				case 199:
					*uParam2 = 8347;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8348;
					break;
				
				case 201:
					*uParam2 = 8941;
					break;
				
				case 202:
					*uParam2 = 8942;
					break;
				
				case 203:
					*uParam2 = 8943;
					break;
				
				case 204:
					*uParam2 = 8944;
					break;
				
				case 205:
					*uParam2 = 8945;
					break;
				
				case 206:
					*uParam2 = 9444;
					break;
				
				case 207:
					*uParam2 = 9445;
					break;
				
				case 208:
					*uParam2 = 9446;
					break;
				
				case 209:
					*uParam2 = 9447;
					break;
				
				case 210:
					*uParam2 = 9448;
					break;
				
				case 211:
					*uParam2 = 9449;
					break;
				
				case 212:
					*uParam2 = 9450;
					break;
				
				case 213:
					*uParam2 = 9451;
					break;
				
				case 214:
					*uParam2 = 9452;
					break;
				
				case 215:
					*uParam2 = 9453;
					break;
				
				case 216:
					*uParam2 = 9454;
					break;
				
				case 217:
					*uParam2 = 9455;
					break;
				
				case 218:
					*uParam2 = 9456;
					break;
				
				case 219:
					*uParam2 = 9457;
					break;
				
				case 220:
					*uParam2 = 9458;
					break;
				
				case 221:
					*uParam2 = 9459;
					break;
				
				case 222:
					*uParam2 = 9460;
					break;
				
				case 223:
					*uParam2 = 9461;
					break;
				
				case 224:
					*uParam2 = 9462;
					break;
				
				case 225:
					*uParam2 = 9463;
					break;
				
				case 226:
					*uParam2 = 9464;
					break;
				
				case 227:
					*uParam2 = 9465;
					break;
				
				case 228:
					*uParam2 = 9466;
					break;
				
				case 229:
					*uParam2 = 9467;
					break;
				
				case 230:
					*uParam2 = 9468;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 11511;
}

bool func_477(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_478(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
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
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_479(int iParam0, int iParam1)
{
	iVar0 = 0;
	Global_76434[0].f_5 = 4;
	func_480(iVar0, iParam0, 0, iParam1);
}

void func_480(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_76434[0].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = DLC1::_0xF3FBE2D50A6A8C28(uVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			DLC1::GET_SHOP_PED_QUERY_OUTFIT(iVar17, &Var2);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var2))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_470(&(Global_76434[0]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_470(&(Global_76434[0]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		DLC1::INIT_SHOP_PED_PROP(&Var20);
		iVar39 = 0;
		iVar40 = DLC1::_GET_NUM_PROPS_FROM_OUTFIT(iVar1, 7, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			DLC1::GET_SHOP_PED_QUERY_PROP(iVar38, &Var20);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var20))
			{
				if (iVar39 == (iParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_470(&(Global_76434[0]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, DLC1::_0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		DLC1::INIT_SHOP_PED_COMPONENT(&Var41);
		if (iParam3 != -1 && Global_76603)
		{
			DLC1::GET_SHOP_PED_COMPONENT(iParam3, &Var41);
			Global_2621444 = Var41.f_1;
			Global_2621445 = Var41;
			func_470(&(Global_76434[0]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, DLC1::_0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
			return;
		}
		iVar59 = 0;
		iVar60 = DLC1::_GET_NUM_PROPS_FROM_OUTFIT(iVar1, 7, -1, 0, -1, func_443(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			DLC1::GET_SHOP_PED_QUERY_COMPONENT(iVar58, &Var41);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var41))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_470(&(Global_76434[0]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, DLC1::_0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_481(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_480(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_470(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_482(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_480(iVar10, iParam0, 28, iParam1);
			return;
			break;
	}
	func_470(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_483(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 400;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 375;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 325;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 255;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 360;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 3970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1355;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 515;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 545;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 1440;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 50;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 575;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 605;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 285;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 2125;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 295;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 855;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1615;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 1130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 390;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 970;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1125;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 740;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 805;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 6250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 3585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 4075;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 4935;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 5600;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 4790;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 2245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 1205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 2215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 4815;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 4795;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 4965;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 480;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 465;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 2390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 2005;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 570;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 525;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4275;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 3660;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 4165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 3670;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 3620;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 3610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 4140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 1490;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 1105;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 825;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2044[iVar12]) * Global_291063.f_26));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2165[iVar13]) * Global_291063.f_27));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2190[iVar14]) * Global_291063.f_56));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 10)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2319[iVar15]) * Global_291063.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_76434[0].f_5 = 4;
		func_480(iVar10, iParam0, 327, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(Global_2621444, -1757550583, 1))
			{
				Global_76434[0].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_76434[0].f_7) * Global_291063.f_26));
			}
			else if (DLC1::_0x341DE7ED1D2A1BFD(Global_2621444, 97230661, 1))
			{
				Global_76434[0].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_76434[0].f_7) * Global_291063.f_56));
			}
			else if (DLC1::_0x341DE7ED1D2A1BFD(Global_2621444, 1147826474, 1))
			{
				Global_76434[0].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_76434[0].f_7) * Global_291063.f_28));
			}
		}
	}
	else
	{
		func_470(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_484(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_480(iVar10, iParam0, 6, iParam1);
			return;
			break;
	}
	func_470(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_485(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			if (Global_262145.f_4141 != -1)
			{
				iVar1 = Global_262145.f_4141;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			if (Global_262145.f_4142 != -1)
			{
				iVar1 = Global_262145.f_4142;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			if (Global_262145.f_4143 != -1)
			{
				iVar1 = Global_262145.f_4143;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			if (Global_262145.f_4144 != -1)
			{
				iVar1 = Global_262145.f_4144;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			if (Global_262145.f_4145 != -1)
			{
				iVar1 = Global_262145.f_4145;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			if (Global_262145.f_4146 != -1)
			{
				iVar1 = Global_262145.f_4146;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			if (Global_262145.f_4147 != -1)
			{
				iVar1 = Global_262145.f_4147;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 4;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 5;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 0;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_480(iVar10, iParam0, 55, iParam1);
			if (Global_76434[0].f_7 > 0)
			{
				Global_76434[0].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_76434[0].f_7) * Global_291063.f_58));
			}
			return;
			break;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_291063.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_470(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_486(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_480(iVar10, iParam0, 26, iParam1);
			if (Global_76434[0].f_7 > 0)
			{
				Global_76434[0].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_76434[0].f_7) * Global_291063.f_29));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2017[iVar11]) * Global_291063.f_29));
	}
	func_470(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_487(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1760[iVar11]) * Global_291063.f_25));
	}
	if (iParam0 >= 256)
	{
		Global_76434[0].f_5 = 4;
		func_480(iVar10, iParam0, 256, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_76434[0].f_7) * Global_291063.f_25));
		}
	}
	else
	{
		func_470(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_488(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1246[iVar11]) * Global_291063.f_23));
	}
	if (iParam0 >= 256)
	{
		Global_76434[0].f_5 = 4;
		func_480(iVar10, iParam0, 256, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_76434[0].f_7) * Global_291063.f_23));
		}
	}
	else
	{
		func_470(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_489(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_76434[0].f_5 = 4;
		func_480(iVar10, iParam0, 16, iParam1);
		return;
	}
	func_470(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_490(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_76434[0].f_5 = 4;
		func_480(iVar10, iParam0, 36, iParam1);
		return;
	}
	func_470(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_491(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 33:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[78]));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[81]));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[87]));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[89]));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 67:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 68:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 69:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 70:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[178]));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[187]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[191]));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[201]));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[223]));
			break;
		
		case 119:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[240]));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[243]));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[251]));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_480(iVar10, iParam0, 136, iParam1);
			if (Global_76434[0].f_7 > 0)
			{
				Global_76434[0].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_76434[0].f_7) * Global_291063.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_404(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2980));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1503[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2979));
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_404(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2978));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1503[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[iVar11]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar12 = (iParam0 - 16);
		if (iVar12 >= 0 && iVar12 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[iVar12]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_291063.f_24));
	func_470(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_492(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 4)
	{
		if (func_404(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2980) * Global_291063.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1503[4]) * Global_291063.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2979) * Global_291063.f_24));
	}
	else if (iParam0 == 9)
	{
		if (func_404(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2978) * Global_291063.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1503[9]) * Global_291063.f_24));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[iVar11]) * Global_291063.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_76434[0].f_5 = 4;
		func_480(iVar10, iParam0, 256, iParam1);
		if (Global_76434[0].f_7 > 0)
		{
			Global_76434[0].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_76434[0].f_7) * Global_291063.f_24));
		}
	}
	else
	{
		func_470(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_493(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[15]));
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[16]));
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[17]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[18]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[19]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[20]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[21]));
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[22]));
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[23]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[24]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[25]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[26]));
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[27]));
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[28]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[29]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[30]));
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[31]));
			break;
		
		case 36:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[32]));
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[33]));
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[34]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[35]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 41:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[36]));
			break;
		
		case 42:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[37]));
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[38]));
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[39]));
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[40]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 47:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[41]));
			break;
		
		case 48:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[42]));
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[43]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[44]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[45]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[46]));
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[47]));
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[48]));
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[49]));
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[50]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[51]));
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[52]));
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[53]));
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[54]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[55]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 67:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[56]));
			break;
		
		case 68:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[57]));
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[58]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[59]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[60]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 73:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[61]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[62]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[63]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[64]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[65]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 79:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[66]));
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[67]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[68]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[69]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[70]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		default:
			Global_76434[0].f_5 = 4;
			func_480(iVar10, iParam0, 92, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_470(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_494(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_509(iParam1, iParam2);
			break;
		
		case 11:
			func_508(iParam1, iParam2);
			break;
		
		case 8:
			func_507(iParam1, iParam2);
			break;
		
		case 9:
			func_506(iParam1, iParam2);
			break;
		
		case 3:
			func_505(iParam1, iParam2);
			break;
		
		case 4:
			func_504(iParam1, iParam2);
			break;
		
		case 6:
			func_503(iParam1, iParam2);
			break;
		
		case 1:
			func_502(iParam1, iParam2);
			break;
		
		case 7:
			func_501(iParam1, iParam2);
			break;
		
		case 10:
			func_500(iParam1, iParam2);
			break;
		
		case 14:
			func_499(iParam1, iParam2);
			break;
		
		case 12:
			func_498(iParam1, iParam2);
			break;
		
		case 5:
			func_497(iParam1, iParam2);
			break;
		
		case 0:
			func_496(iParam1, iParam2);
			break;
		
		case 13:
			func_495(iParam1);
			break;
	}
}

void func_495(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_470(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_496(int iParam0, int iParam1)
{
	iVar0 = 0;
	Global_76434[0].f_5 = 3;
	func_480(iVar0, iParam0, 0, iParam1);
}

void func_497(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_480(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_470(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_498(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S9", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P1", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P2", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P3", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P4", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P5", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P6", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P7", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P8", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B1", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B2", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B3", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B4", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B5", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B6", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B7", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B8", 16);
			break;
		
		default:
			Global_76434[0].f_5 = 3;
			func_480(iVar10, iParam0, 26, iParam1);
			return;
			break;
	}
	func_470(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_499(int iParam0, int iParam1)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 320;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 245;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 415;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 315;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 265;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 570;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 560;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 260;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 100;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1715;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 3900;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1550;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 4250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 4460;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 4970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 290;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 305;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 4170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 335;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 4940;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 275;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 3620;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 350;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 365;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 380;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			iVar6 = 17;
			iVar7 = 7;
		
