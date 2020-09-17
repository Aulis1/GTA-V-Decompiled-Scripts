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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	Local_127 = { 1967.042f, 3116.005f, 45.8901f };
	Local_130 = { 1967.042f, 3116.005f, 45.8901f };
	Local_133 = { 1967.042f, 3116.005f, 45.8901f };
	sLocal_136 = "Stage Setup";
	sLocal_137 = "Race";
	sLocal_138 = "Complete";
	sLocal_139 = "";
	Local_181 = { 8.669f, -5.9084f, 0.0428f };
	iLocal_2127 = PLAYER::PLAYER_PED_ID();
	GAMEPLAY::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_352(1, 0, 1, 0);
	}
	func_342();
	func_333();
	while (true)
	{
		if (iLocal_1975 != 3)
		{
			func_286();
		}
		switch (iLocal_1975)
		{
			case 0:
				func_262();
				break;
			
			case 1:
				func_227();
				break;
			
			case 2:
				func_60();
				break;
			
			case 3:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
	func_53(0);
	switch (iLocal_174)
	{
		case 0:
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
			iLocal_174++;
			break;
		
		case 1:
			if (func_25(&uLocal_2120, &uLocal_1981, "CRACEFAIL", sLocal_180, &bLocal_141, 78, 7, 1, 1097859072, 1))
			{
				if (bLocal_141)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_2(1, 0);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					CAM::DO_SCREEN_FADE_OUT(500);
					SYSTEM::SETTIMERA(0);
					iLocal_174++;
				}
			}
			break;
		
		case 2:
			if (SYSTEM::TIMERA() > 1500)
			{
				func_352(1, 1, 0, 0);
			}
			break;
	}
}

void func_2(int iParam0, int iParam1)
{
	CAM::DO_SCREEN_FADE_OUT(500);
	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
		SYSTEM::WAIT(0);
	}
	func_24();
	func_352(0, 1, iParam1, 0);
	func_333();
	switch (iParam0)
	{
		case 0:
			func_23(iLocal_2127, Local_127, 103.4f, 1, 1);
			func_22();
			break;
		
		case 1:
			func_23(iLocal_2127, Local_130, 103.4f, 1, 1);
			func_7();
			break;
		
		case 2:
			func_23(iLocal_2127, Local_133, 103.4f, 1, 1);
			func_6();
			break;
	}
	func_4(ENTITY::GET_ENTITY_COORDS(iLocal_2127, 1), 1112014848, 12, 5000, 0, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	func_3(500);
}

void func_3(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
		SYSTEM::WAIT(0);
	}
}

void func_4(struct<3> Param0, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	uVar0 = STREAMING::FORMAT_FOCUS_HEADING(Param0, iParam3, iParam4, 127);
	if (STREAMING::_0x07C313F94746702C(uVar0))
	{
		iVar1 = (GAMEPLAY::GET_GAME_TIMER() + iParam5);
		while (!STREAMING::_0x7D41E9D2D17C5B2D(uVar0) && GAMEPLAY::GET_GAME_TIMER() < iVar1)
		{
			if (bParam7)
			{
				func_53(0);
			}
			if (bParam6)
			{
				func_5();
			}
			SYSTEM::WAIT(0);
		}
		if (GAMEPLAY::GET_GAME_TIMER() < iVar1)
		{
		}
		STREAMING::_0x1EE7D8DF4425F053(uVar0);
	}
}

void func_5()
{
	Global_22211.f_6 = 1;
}

void func_6()
{
	Local_46.f_6 = 1;
	AI::REQUEST_WAYPOINT_RECORDING(Local_54.f_64);
	while (!AI::GET_IS_WAYPOINT_RECORDING_LOADED(Local_54.f_64))
	{
		SYSTEM::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		iLocal_2129 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2129, 1, 0);
	}
	else
	{
		STREAMING::REQUEST_MODEL(-1800170043);
		while (!STREAMING::HAS_MODEL_LOADED(-1800170043))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_2129 = VEHICLE::CREATE_VEHICLE(-1800170043, Local_54[5], Local_54.f_54[8], 1, 1, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1800170043);
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2129, -1);
	}
	func_23(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_54[5], Local_54.f_54[1], 0, 1);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 30f);
	iLocal_1975 = 2;
}

void func_7()
{
	func_21(&Local_46);
	while (!func_20(&Local_46))
	{
		SYSTEM::WAIT(0);
	}
	func_12(197, 1, 0, 1, 0);
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		func_9(&(Local_196[iVar0]), 1, 0);
		iVar0++;
	}
	if (!func_8(iLocal_2129))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			iLocal_2129 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2129, 1, 0);
		}
		else
		{
			STREAMING::REQUEST_MODEL(-1800170043);
			while (!STREAMING::HAS_MODEL_LOADED(-1800170043))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_2129 = VEHICLE::CREATE_VEHICLE(-1800170043, Local_54.f_26[8], Local_54.f_54[8], 1, 1, 0);
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2129, -1);
		}
	}
	else
	{
		func_23(iLocal_2129, Local_54.f_26[8], Local_54.f_54[8], 0, 1);
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2129, -1);
	}
	VEHICLE::SET_VEHICLE_FIXED(iLocal_2129);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2129, 4);
	VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_2129, 1);
	AI::REQUEST_WAYPOINT_RECORDING(Local_54.f_64);
	while (!AI::GET_IS_WAYPOINT_RECORDING_LOADED(Local_54.f_64))
	{
		SYSTEM::WAIT(0);
	}
	func_23(iLocal_2129, Local_54.f_26[8], Local_54.f_54[8], 0, 1);
	iLocal_1975 = 1;
}

int func_8(int iParam0)
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

void func_9(var uParam0, bool bParam1, int iParam2)
{
	if (!uParam0->f_41)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_3);
		if (bParam1)
		{
			while (!STREAMING::HAS_MODEL_LOADED(uParam0->f_3))
			{
				SYSTEM::WAIT(0);
			}
		}
		STREAMING::REQUEST_MODEL(uParam0->f_5.f_2);
		if (bParam1)
		{
			while (!STREAMING::HAS_MODEL_LOADED(uParam0->f_5.f_2))
			{
				SYSTEM::WAIT(0);
			}
		}
		iVar0 = 0;
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_3) && STREAMING::HAS_MODEL_LOADED(uParam0->f_5.f_2))
		{
			iVar0 = 1;
		}
		if (iVar0 && (iParam2 == 0 || (iParam2 == 1 && !CAM::IS_SPHERE_VISIBLE(uParam0->f_37, 2f))))
		{
			uParam0->f_5.f_3 = { uParam0->f_37 };
			uParam0->f_5.f_6 = uParam0->f_40;
			uParam0->f_5 = VEHICLE::CREATE_VEHICLE(uParam0->f_5.f_2, uParam0->f_37, uParam0->f_40, 1, 1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_5.f_2);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_5, 1, 1, 0);
			uParam0->f_5.f_7 = 1;
			*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_5, 26, uParam0->f_3, -1, 1, 1);
			func_11(uParam0);
			VEHICLE::_0x1AA8A837D2169D94(uParam0->f_5, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::SET_PED_ACCURACY(*uParam0, 20);
				PED::SET_PED_ALERTNESS(*uParam0, 3);
				PED::SET_PED_COMBAT_ABILITY(*uParam0, 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 28, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 52, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 35, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 14, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, 1);
				PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 281, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 132, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 188, 1);
				PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 1);
				PED::SET_PED_KEEP_TASK(*uParam0, 1);
				PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_46));
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, uParam0->f_4);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
				uParam0->f_42 = 0;
				uParam0->f_41 = 1;
				uParam0->f_44 = 0;
				if (uParam0->f_17.f_11 == 1)
				{
					func_10(*uParam0);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_3);
			}
		}
	}
}

void func_10(var uParam0)
{
	switch (Global_111638.f_25068)
	{
		case 0:
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 10, 0, 0, 0);
			break;
		
		case 1:
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 7, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 6, 0, 4, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 10, 0, 1, 0);
			break;
		
		case 2:
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 0, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 6, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 10, 0, 2, 0);
			break;
		
		case 3:
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 6, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 10, 0, 0, 0);
			break;
		
		case 4:
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 6, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0, 10, 0, 0, 0);
			break;
	}
}

void func_11(var uParam0)
{
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	iVar5 = -1;
	iVar6 = -1;
	iVar7 = -1;
	iVar8 = -1;
	iVar9 = -1;
	iVar10 = -1;
	iVar11 = -1;
	iVar12 = -1;
	iVar13 = 3;
	iVar14 = 2;
	iVar15 = 2;
	iVar16 = 3;
	iVar17 = -1;
	iVar18 = -1;
	iVar19 = -1;
	iVar20 = -1;
	iVar21 = -1;
	switch (Global_111638.f_25068)
	{
		case 0:
			switch (uParam0->f_17.f_11)
			{
				case 0:
					iVar0 = 6;
					iVar1 = 1;
					iVar2 = -1;
					iVar3 = 0;
					iVar4 = 1;
					iVar5 = -1;
					iVar6 = -1;
					iVar7 = -1;
					iVar8 = 0;
					iVar9 = 3;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = 0;
					iVar13 = 3;
					iVar14 = 2;
					iVar15 = 2;
					iVar16 = 3;
					iVar17 = 6;
					iVar18 = 0;
					iVar19 = 27;
					iVar20 = 0;
					iVar21 = 120;
					break;
				
				case 2:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = -1;
					iVar3 = 2;
					iVar4 = 0;
					iVar5 = -1;
					iVar6 = 0;
					iVar7 = 1;
					iVar8 = 0;
					iVar9 = -1;
					iVar10 = 0;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 3;
					iVar14 = 2;
					iVar15 = 2;
					iVar16 = -1;
					iVar17 = 1;
					iVar18 = 24;
					iVar19 = 0;
					iVar20 = 0;
					iVar21 = 132;
					VEHICLE::SET_CONVERTIBLE_ROOF(uParam0->f_5, 0);
					break;
				
				case 3:
					iVar0 = 0;
					iVar1 = 1;
					iVar2 = -1;
					iVar3 = 0;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = 0;
					iVar7 = -1;
					iVar8 = -1;
					iVar9 = 0;
					iVar10 = 1;
					iVar11 = 0;
					iVar12 = -1;
					iVar13 = 2;
					iVar14 = 2;
					iVar15 = 2;
					iVar16 = -1;
					iVar17 = 10;
					iVar18 = 147;
					iVar19 = 16;
					iVar20 = 20;
					iVar21 = 119;
					break;
				
				case 4:
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 1;
					iVar3 = 0;
					iVar4 = 0;
					iVar5 = -1;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = 0;
					iVar9 = 3;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 2;
					iVar14 = 1;
					iVar15 = 1;
					iVar16 = -1;
					iVar17 = 8;
					iVar18 = 60;
					iVar19 = 113;
					iVar20 = 19;
					iVar21 = 113;
					break;
				
				case 5:
					iVar0 = 10;
					iVar1 = 2;
					iVar2 = 1;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = 0;
					iVar7 = -1;
					iVar8 = -1;
					iVar9 = 0;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = 0;
					iVar13 = 2;
					iVar14 = 1;
					iVar15 = 1;
					iVar16 = 2;
					iVar17 = 11;
					iVar18 = 138;
					iVar19 = 0;
					iVar20 = 1;
					iVar21 = 138;
					break;
				
				case 6:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 3;
					iVar3 = 1;
					iVar4 = 0;
					iVar5 = 1;
					iVar6 = 3;
					iVar7 = 0;
					iVar8 = 2;
					iVar9 = 1;
					iVar10 = 1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 2;
					iVar14 = 0;
					iVar15 = 2;
					iVar16 = 1;
					iVar17 = 23;
					iVar18 = 64;
					iVar19 = 13;
					iVar20 = 13;
					iVar21 = 67;
					break;
				
				case 7:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = -1;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = 2;
					iVar9 = 2;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 2;
					iVar14 = 1;
					iVar15 = 2;
					iVar16 = 1;
					iVar17 = 11;
					iVar18 = 39;
					iVar19 = 107;
					iVar20 = 0;
					iVar21 = 156;
					break;
			}
			break;
		
		case 1:
			switch (uParam0->f_17.f_11)
			{
				case 0:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 0;
					iVar5 = 0;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = -1;
					iVar9 = 0;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = 2;
					iVar13 = 1;
					iVar14 = 0;
					iVar15 = 0;
					iVar16 = -1;
					iVar17 = 14;
					iVar18 = 11;
					iVar19 = 36;
					iVar20 = 0;
					iVar21 = 36;
					break;
				
				case 2:
					iVar0 = 0;
					iVar1 = 4;
					iVar2 = 0;
					iVar3 = 3;
					iVar4 = 0;
					iVar5 = -1;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = 1;
					iVar9 = 1;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 2;
					iVar14 = 2;
					iVar15 = 0;
					iVar16 = 3;
					iVar17 = 12;
					iVar18 = 24;
					iVar19 = 64;
					iVar20 = 0;
					iVar21 = 24;
					break;
				
				case 3:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 0;
					iVar5 = 0;
					iVar6 = 0;
					iVar7 = -1;
					iVar8 = -1;
					iVar9 = -1;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 3;
					iVar14 = 2;
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 23;
					iVar18 = 120;
					iVar19 = 120;
					iVar20 = 120;
					iVar21 = 120;
					break;
				
				case 4:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 3;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = 3;
					iVar7 = -1;
					iVar8 = -1;
					iVar9 = 1;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 2;
					iVar14 = 1;
					iVar15 = 2;
					iVar16 = 2;
					iVar17 = 3;
					iVar18 = 40;
					iVar19 = 42;
					iVar20 = 7;
					iVar21 = 156;
					break;
				
				case 5:
					iVar0 = 7;
					iVar1 = 0;
					iVar2 = -1;
					iVar3 = 0;
					iVar4 = 1;
					iVar5 = -1;
					iVar6 = 1;
					iVar7 = 0;
					iVar8 = -1;
					iVar9 = 0;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 1;
					iVar14 = 2;
					iVar15 = 0;
					iVar16 = -1;
					iVar17 = 22;
					iVar18 = 62;
					iVar19 = 91;
					iVar20 = 6;
					iVar21 = 156;
					VEHICLE::SET_CONVERTIBLE_ROOF(uParam0->f_5, 1);
					break;
				
				case 6:
					iVar0 = 0;
					iVar1 = 1;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = 1;
					iVar7 = 1;
					iVar8 = -1;
					iVar9 = 2;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = 0;
					iVar13 = 2;
					iVar14 = 1;
					iVar15 = 0;
					iVar16 = 1;
					iVar17 = 11;
					iVar18 = 50;
					iVar19 = 120;
					iVar20 = 134;
					iVar21 = 156;
					break;
				
				case 7:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 1;
					iVar3 = 1;
					iVar4 = -1;
					iVar5 = 0;
					iVar6 = 0;
					iVar7 = -1;
					iVar8 = 0;
					iVar9 = 1;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 3;
					iVar14 = 2;
					iVar15 = 0;
					iVar16 = 3;
					iVar17 = 8;
					iVar18 = 36;
					iVar19 = 25;
					iVar20 = 6;
					iVar21 = 156;
					break;
			}
			break;
		
		case 2:
			switch (uParam0->f_17.f_11)
			{
				case 0:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 0;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = 1;
					iVar7 = -1;
					iVar8 = -1;
					iVar9 = 0;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 3;
					iVar14 = 2;
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 7;
					iVar18 = 64;
					iVar19 = 2;
					iVar20 = 6;
					iVar21 = 2;
					break;
				
				case 2:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 2;
					iVar3 = 1;
					iVar4 = 2;
					iVar5 = 0;
					iVar6 = 2;
					iVar7 = 0;
					iVar8 = 1;
					iVar9 = -1;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = 0;
					iVar13 = 2;
					iVar14 = 2;
					iVar15 = 1;
					iVar16 = 3;
					iVar17 = 5;
					iVar18 = 52;
					iVar19 = 5;
					iVar20 = 26;
					iVar21 = 106;
					break;
				
				case 3:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 0;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = -1;
					iVar7 = 0;
					iVar8 = -1;
					iVar9 = 0;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 2;
					iVar14 = 0;
					iVar15 = 0;
					iVar16 = 1;
					iVar17 = 15;
					iVar18 = 72;
					iVar19 = 38;
					iVar20 = 46;
					iVar21 = 156;
					break;
				
				case 4:
					iVar0 = 0;
					iVar1 = 1;
					iVar2 = 1;
					iVar3 = 1;
					iVar4 = 0;
					iVar5 = 0;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = -1;
					iVar9 = 0;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = 0;
					iVar13 = 0;
					iVar14 = 0;
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 10;
					iVar18 = 62;
					iVar19 = 126;
					iVar20 = 15;
					iVar21 = 126;
					break;
				
				case 5:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = 1;
					iVar7 = -1;
					iVar8 = -1;
					iVar9 = 2;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = 0;
					iVar13 = 1;
					iVar14 = 1;
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 11;
					iVar18 = 29;
					iVar19 = 9;
					iVar20 = 6;
					iVar21 = 9;
					break;
				
				case 6:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 0;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = 0;
					iVar7 = -1;
					iVar8 = -1;
					iVar9 = 3;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 1;
					iVar14 = 0;
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 15;
					iVar18 = 143;
					iVar19 = 8;
					iVar20 = 1;
					iVar21 = 143;
					break;
				
				case 7:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 0;
					iVar3 = 2;
					iVar4 = 0;
					iVar5 = -1;
					iVar6 = 1;
					iVar7 = 0;
					iVar8 = -1;
					iVar9 = 0;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 1;
					iVar14 = 0;
					iVar15 = 0;
					iVar16 = 3;
					iVar17 = 4;
					iVar18 = 15;
					iVar19 = 120;
					iVar20 = 120;
					iVar21 = 120;
					break;
			}
			break;
		
		case 3:
			switch (uParam0->f_17.f_11)
			{
				case 0:
					iVar0 = -1;
					iVar2 = -1;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = -1;
					iVar7 = -1;
					iVar8 = -1;
					iVar12 = -1;
					iVar9 = -1;
					iVar13 = -1;
					iVar14 = -1;
					iVar15 = -1;
					iVar16 = -1;
					iVar18 = 140;
					iVar19 = 122;
					iVar20 = 58;
					iVar21 = 17;
					break;
				
				case 2:
					iVar0 = -1;
					iVar2 = -1;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = -1;
					iVar7 = -1;
					iVar8 = -1;
					iVar12 = -1;
					iVar9 = -1;
					iVar13 = -1;
					iVar14 = -1;
					iVar15 = -1;
					iVar16 = -1;
					iVar18 = 149;
					iVar19 = 122;
					iVar20 = 114;
					iVar21 = 92;
					break;
				
				case 3:
					iVar0 = -1;
					iVar2 = 1;
					iVar3 = 0;
					iVar4 = 0;
					iVar5 = 0;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = 0;
					iVar12 = 2;
					iVar9 = 0;
					iVar13 = -1;
					iVar14 = -1;
					iVar15 = -1;
					iVar16 = -1;
					iVar18 = 27;
					iVar19 = 134;
					iVar20 = 28;
					iVar21 = 126;
					break;
				
				case 4:
					iVar0 = -1;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 0;
					iVar5 = 0;
					iVar6 = 0;
					iVar7 = -1;
					iVar8 = -1;
					iVar12 = 0;
					iVar9 = -1;
					iVar13 = -1;
					iVar14 = -1;
					iVar15 = -1;
					iVar16 = -1;
					break;
				
				case 5:
					iVar0 = -1;
					iVar2 = -1;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = -1;
					iVar7 = -1;
					iVar8 = -1;
					iVar12 = -1;
					iVar9 = -1;
					iVar13 = -1;
					iVar14 = -1;
					iVar15 = -1;
					iVar16 = -1;
					iVar18 = 88;
					iVar19 = 40;
					iVar20 = 14;
					iVar21 = 123;
					break;
				
				case 6:
					iVar0 = -1;
					iVar2 = -1;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = -1;
					iVar7 = -1;
					iVar8 = -1;
					iVar12 = -1;
					iVar9 = -1;
					iVar13 = -1;
					iVar14 = -1;
					iVar15 = -1;
					iVar16 = -1;
					iVar18 = 55;
					iVar19 = 40;
					iVar20 = 14;
					iVar21 = 0;
					break;
				
				case 7:
					iVar0 = -1;
					iVar2 = -1;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = -1;
					iVar7 = -1;
					iVar8 = -1;
					iVar12 = -1;
					iVar9 = -1;
					iVar18 = 38;
					iVar19 = 121;
					iVar20 = 123;
					iVar21 = 132;
					break;
			}
			break;
		
		case 4:
			switch (uParam0->f_17.f_11)
			{
				case 0:
					iVar18 = 140;
					iVar19 = 124;
					iVar20 = 134;
					iVar21 = 89;
					break;
				
				case 1:
					iVar18 = 135;
					iVar19 = 134;
					iVar20 = 134;
					iVar21 = 121;
					break;
				
				case 2:
					break;
				
				case 3:
					iVar18 = 0;
					iVar19 = 134;
					iVar20 = 134;
					iVar21 = 0;
					break;
				
				case 4:
					iVar18 = 57;
					iVar19 = 134;
					iVar20 = 134;
					iVar21 = 67;
					break;
				
				case 5:
					break;
				
				case 6:
					iVar18 = 141;
					iVar19 = 134;
					iVar20 = 134;
					iVar21 = 127;
					break;
				
				case 7:
					iVar18 = 39;
					iVar19 = 95;
					iVar20 = 124;
					iVar21 = 88;
					break;
			}
			break;
	}
	if (uParam0->f_17.f_11 == 1)
	{
		iVar16 = 3;
	}
	iVar13 = (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 11) - 1);
	iVar14 = (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 12) - 1);
	iVar15 = (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 13) - 1);
	if (func_8(uParam0->f_5))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_5) > 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_5, 0);
			if (iVar0 != -1)
			{
				if (iVar0 < VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(uParam0->f_5))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_5, iVar0);
				}
			}
			if (iVar18 != -1 || iVar19 != -1)
			{
				VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_5, iVar18, iVar19);
			}
			if (iVar20 != -1 || iVar21 != -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_5, iVar20, iVar21);
			}
			if (iVar1 != -1)
			{
				VEHICLE::SET_VEHICLE_WINDOW_TINT(uParam0->f_5, iVar1);
			}
			if (iVar2 != -1)
			{
				if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 0) > iVar2)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_5, 0, iVar2, 0);
				}
			}
			if (iVar3 != -1)
			{
				if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 1) > iVar3)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_5, 1, iVar3, 0);
				}
			}
			if (iVar4 != -1)
			{
				if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 2) > iVar4)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_5, 2, iVar4, 0);
				}
			}
			if (iVar5 != -1)
			{
				if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 3) > iVar5)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_5, 3, iVar5, 0);
				}
			}
			if (iVar6 != -1)
			{
				if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 4) > iVar6)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_5, 4, iVar6, 0);
				}
			}
			if (iVar7 != -1)
			{
				if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 5) > iVar7)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_5, 5, iVar7, 0);
				}
			}
			if (iVar8 != -1)
			{
				if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 6) > iVar8)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_5, 6, iVar8, 0);
				}
			}
			if (iVar9 != -1)
			{
				if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 7) > iVar9)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_5, 7, iVar9, 0);
				}
			}
			if (iVar10 != -1)
			{
				if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 8) > iVar10)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_5, 8, iVar10, 0);
				}
			}
			if (iVar11 != -1)
			{
				if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 9) > iVar11)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_5, 9, iVar11, 0);
				}
			}
			if (iVar12 != -1)
			{
				if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 10) > iVar12)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_5, 10, iVar12, 0);
				}
			}
			if (iVar13 != -1)
			{
				if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 11) > iVar13)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_5, 11, iVar13, 0);
				}
			}
			if (iVar14 != -1)
			{
				if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 12) > iVar14)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_5, 12, iVar14, 0);
				}
			}
			if (iVar15 != -1)
			{
				if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 13) > iVar15)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_5, 13, iVar15, 0);
				}
			}
			if (iVar16 != -1)
			{
				if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 15) > iVar16)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_5, 15, iVar16, 0);
				}
			}
			if (iVar17 != -1)
			{
				if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_5, 23) > iVar17)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_5, 23, iVar17, 0);
				}
			}
			VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_5, 18, 1);
			VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_5, 17, 1);
			VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_5, 22, 1);
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(uParam0->f_5, 0))
		{
			VEHICLE::SET_CONVERTIBLE_ROOF(uParam0->f_5, 1);
		}
	}
}

void func_12(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_76622)
		{
			Global_2439138.f_75.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_111638.f_7256.f_227[iParam0] = iParam1;
		}
		Global_38398[iParam0] = iParam2;
		Global_38597[iParam0] = 1;
		func_15(iParam0, bParam3, iParam4, 0);
		func_13(iParam0, iParam1);
	}
}

void func_13(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_14(0, 0);
			}
			else
			{
				func_14(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				AUDIO::_0xB4BBFD9CD8B3922B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&Global_110276, iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_110276, iParam0);
	}
	Global_110275 = 1;
}

bool func_15(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	Global_1652615 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_19(&Var3, iParam0);
	if (func_16())
	{
		iVar1 = Global_111638.f_7256.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2439138.f_75.f_227[iParam0];
	}
	iVar2 = Global_38796[iParam0];
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3)
	{
		Global_1652615 = 1;
	}
	else
	{
		bVar99 = true;
		if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != GAMEPLAY::GET_HASH_KEY("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_38398[iParam0] && GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3, 1) < 200f)
				{
					bVar99 = false;
					Global_1652615 = 1;
				}
				if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || AI::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						bVar99 = false;
						Global_1652615 = 1;
					}
				}
			}
		}
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() != 5))
		{
			bVar99 = false;
			Global_1652615 = 1;
		}
		if (bVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							ENTITY::REMOVE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							ENTITY::CREATE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_39992[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[1])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[1])) != GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[iVar1])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1]));
								Global_1652615 = 1;
							}
						}
						if ((GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2])) != GAMEPLAY::GET_HASH_KEY("REMOVE_ALL_STATES")) && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2])) != GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[iVar1])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2]));
								Global_1652615 = 1;
							}
						}
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[0])) != GAMEPLAY::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[0]));
								Global_1652615 = 1;
							}
						}
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_34)) != GAMEPLAY::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_34));
								Global_1652615 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_34)) != GAMEPLAY::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_34));
							}
						}
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[0])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[0])) != GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[iVar1])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0]));
							}
						}
						if ((GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2])) != GAMEPLAY::GET_HASH_KEY("REMOVE_ALL_STATES")) && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2])) != GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[iVar1])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2]));
							}
						}
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[1])) != GAMEPLAY::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[1]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_34)) != GAMEPLAY::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_34));
							}
						}
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[0])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[0])) != GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[iVar1])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0]));
							}
						}
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[1])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[1])) != GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[iVar1])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1]));
							}
						}
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2])) != GAMEPLAY::GET_HASH_KEY("REMOVE_ALL_STATES"))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[2]));
							}
						}
					}
					Global_39793[iParam0] = 1;
					Global_39992[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_50)) != GAMEPLAY::GET_HASH_KEY(""))
						{
							if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar100, &(Var3.f_50)))
							{
								INTERIOR::_DISABLE_INTERIOR_PROP(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[1])) != GAMEPLAY::GET_HASH_KEY(""))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar100, &(Var3.f_8[1])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar100, &(Var3.f_8[1]));
								}
							}
							if ((GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2])) != GAMEPLAY::GET_HASH_KEY("REMOVE_ALL_STATES")) && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2])) != GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[iVar1])))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar100, &(Var3.f_8[2])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar100, &(Var3.f_8[2]));
								}
							}
							if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[0])) != GAMEPLAY::GET_HASH_KEY(""))
							{
								if (!INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar100, &(Var3.f_8[0])))
								{
									INTERIOR::_ENABLE_INTERIOR_PROP(iVar100, &(Var3.f_8[0]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[0])) != GAMEPLAY::GET_HASH_KEY(""))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar100, &(Var3.f_8[0])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar100, &(Var3.f_8[0]));
								}
							}
							if ((GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2])) != GAMEPLAY::GET_HASH_KEY("REMOVE_ALL_STATES")) && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2])) != GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[iVar1])))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar100, &(Var3.f_8[2])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar100, &(Var3.f_8[2]));
								}
							}
							if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[1])) != GAMEPLAY::GET_HASH_KEY(""))
							{
								if (!INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar100, &(Var3.f_8[1])))
								{
									INTERIOR::_ENABLE_INTERIOR_PROP(iVar100, &(Var3.f_8[1]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[0])) != GAMEPLAY::GET_HASH_KEY(""))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar100, &(Var3.f_8[0])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar100, &(Var3.f_8[0]));
								}
							}
							if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[1])) != GAMEPLAY::GET_HASH_KEY(""))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar100, &(Var3.f_8[1])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar100, &(Var3.f_8[1]));
								}
							}
							if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2])) != GAMEPLAY::GET_HASH_KEY("REMOVE_ALL_STATES"))
							{
								if (!INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar100, &(Var3.f_8[2])))
								{
									INTERIOR::_ENABLE_INTERIOR_PROP(iVar100, &(Var3.f_8[2]));
								}
							}
						}
						if (bParam1)
						{
							INTERIOR::REFRESH_INTERIOR(iVar100);
						}
					}
					Global_39992[iParam0] = 1;
					Global_39793[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 250f)
					{
						uVar98 = OBJECT::_0xB48FCED898292E52(Var3, 25f, &(Var3.f_8[0]));
						if (OBJECT::_0x52AF537A0C5B8AAD(uVar98))
						{
							if (iVar1 == 0)
							{
								OBJECT::_0x5C29F698D404C5E1(uVar98, 3);
								Global_39992[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((OBJECT::_0x899BA936634A322E(uVar98) != 6 && OBJECT::_0x899BA936634A322E(uVar98) != 7) && OBJECT::_0x899BA936634A322E(uVar98) != 8)
								{
									OBJECT::_0x5C29F698D404C5E1(uVar98, 10);
									Global_39992[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						ENTITY::REMOVE_MODEL_SWAP(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						GAMEPLAY::CLEAR_BIT(&(Global_38144[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						ENTITY::CREATE_MODEL_SWAP(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						GAMEPLAY::SET_BIT(&(Global_38144[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_38597[iParam0] = 0;
				Global_38796[iParam0] = iVar1;
				if (!func_16())
				{
					if (!Global_39393[iParam0])
					{
						Global_39393[iParam0] = 1;
						Global_39592++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_16()
{
	if ((func_18() == -1 || func_18() == 999) && !func_17() == 0)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	return Global_30769;
}

int func_18()
{
	return Global_30768;
}

int func_19(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -842986252;
			uParam0->f_4[1] = -1404869155;
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = -519800699;
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -186270611;
			uParam0->f_4[1] = -1701919363;
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "farm", 32);
			StringCopy(&(uParam0->f_8[1]), "farm", 32);
			StringCopy(&(uParam0->f_8[2]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0]), "locked", 32);
			StringCopy(&(uParam0->f_8[1]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0]), "", 32);
			StringCopy(&(uParam0->f_8[1]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

bool func_20(var uParam0)
{
	return (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", 0, -1));
}

void func_21(var uParam0)
{
	*uParam0 = unk_0x67D02A194A2FC2BD("COUNTDOWN");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", 0, -1);
}

void func_22()
{
	if (!func_8(iLocal_2129))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			iLocal_2129 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2129, 1, 0);
		}
		else
		{
			STREAMING::REQUEST_MODEL(-1800170043);
			while (!STREAMING::HAS_MODEL_LOADED(-1800170043))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_2129 = VEHICLE::CREATE_VEHICLE(-1800170043, Local_54.f_26[8] + Local_181, Local_54.f_54[8], 1, 1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1800170043);
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2129, -1);
		}
	}
	else
	{
		func_23(iLocal_2129, Local_54.f_26[8] + Local_181, Local_54.f_54[8], 0, 1);
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2129, -1);
	}
	func_23(iLocal_2129, Local_54.f_26[8] + Local_181, Local_54.f_54[8], 0, 1);
	iLocal_1975 = 0;
}

int func_23(int iParam0, struct<3> Param1, float fParam4, bool bParam5, int iParam6)
{
	bVar0 = false;
	if (func_8(iParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar1, 0, 0);
			if (bVar0)
			{
				Param1.z = fVar1;
			}
		}
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, 1, 0, 0, iParam6);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_24()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.x, Var0.y, (Var0.z + 1f), 1, 0, 0, 1);
		}
	}
}

int func_25(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(2500);
				UNK1::_0xEB2D525B57F42B40();
			}
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(1);
			}
			GAMEPLAY::SET_TIME_SCALE(0.2f);
			if (func_52(iParam5, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("generic_failed", 0, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
			UI::_SET_NOTIFACTION_COLOR_NEXT(6);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			func_51(sParam3);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(100);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
			if (func_52(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "TRANSITION_UP");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(uParam1->f_134);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					uParam1->f_136 = 1;
				}
			}
			if (!func_52(iParam5, 1))
			{
				CONTROLS::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			func_50(&(uParam1->f_10), 0, 1, 1, 1);
			func_49(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_49(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_52(iParam5, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_52(iParam5, 8))
			{
				switch (func_42())
				{
					case 0:
						GRAPHICS::_START_SCREEN_EFFECT("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						GRAPHICS::_START_SCREEN_EFFECT("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						GRAPHICS::_START_SCREEN_EFFECT("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_41(&(uParam1->f_1)))
			{
				func_40(&(uParam1->f_1));
			}
			if (func_52(iParam5, 2))
			{
				if (!func_41(&(uParam1->f_4)))
				{
					func_40(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			UI::HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (func_52(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "TRANSITION_UP");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(uParam1->f_134);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					uParam1->f_136 = 1;
				}
			}
			GRAPHICS::_SET_2D_LAYER(iParam6);
			func_38(uParam0, 0, 0);
			if (!func_52(iParam5, 16) && (func_36(&(uParam1->f_1)) >= uParam1->f_135 || CAM::IS_SCREEN_FADED_OUT()))
			{
				func_30(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				UI::_SHOW_CURSOR_THIS_FRAME();
				if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					uParam1->f_138 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_52(iParam5, 1))
					{
						CONTROLS::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_29(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202))
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_52(iParam5, 1))
					{
						CONTROLS::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_29(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_52(iParam5, 2))
			{
				if (func_36(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_52(iParam5, 1))
					{
						CONTROLS::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_29(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_38(uParam0, 0, 0);
			GAMEPLAY::SET_TIME_SCALE(1f);
			if (uParam1->f_138 || !((GAMEPLAY::ARE_STRINGS_EQUAL("stunt_plane_races", SCRIPT::GET_THIS_SCRIPT_NAME()) || GAMEPLAY::ARE_STRINGS_EQUAL("pilot_school", SCRIPT::GET_THIS_SCRIPT_NAME())) || (GAMEPLAY::ARE_STRINGS_EQUAL("bj", SCRIPT::GET_THIS_SCRIPT_NAME()) && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))))
			{
				CAM::DO_SCREEN_FADE_IN(2500);
			}
			if (func_52(iParam5, 64) && uParam1->f_138)
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			func_26(&(uParam1->f_4));
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_36(&(uParam1->f_4)) <= 0.1f)
			{
				func_38(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_26(var uParam0)
{
	func_27(uParam0, 0f);
}

void func_27(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_28(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - fParam1);
	GAMEPLAY::SET_BIT(uParam0, 1);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_28(bool bParam0)
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

void func_29(var uParam0)
{
	if (*uParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

void func_30(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || GAMEPLAY::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_35(uParam0))
	{
		return;
	}
	UI::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::_SET_2D_LAYER(iParam2);
	if (!func_52(uParam0->f_1, 256) || (func_52(uParam0->f_1, 8192) && CONTROLS::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam1);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam5);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		if (GAMEPLAY::IS_PC_VERSION())
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(func_52(uParam0->f_1, 4096));
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = CONTROLS::_IS_INPUT_DISABLED(2);
					break;
				
				case 2:
					bVar4 = !CONTROLS::_IS_INPUT_DISABLED(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6].f_14)
					{
						iVar0 = uParam0->f_2[iVar6].f_3[iVar7];
						iVar1 = uParam0->f_2[iVar6].f_3[iVar7].f_1;
						bVar2 = GAMEPLAY::IS_BIT_SET(uParam0->f_2[iVar6].f_13, iVar7);
						if (!GAMEPLAY::IS_BIT_SET(uParam0->f_2[iVar6].f_12, iVar7))
						{
							sVar3 = CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = CONTROLS::_0x80C2FD58D720C801(iVar0, iVar1, bVar2);
						}
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar3))
						{
							func_34(sVar3);
						}
						iVar7++;
					}
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6]))
					{
						func_51(uParam0->f_2[iVar6]);
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (func_52(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6].f_1)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_2[iVar6].f_3[0].f_1);
							}
							else
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
							}
						}
					}
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
			}
			iVar6++;
		}
		fVar8 = func_33(bParam4, func_33(func_52(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fVar8);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(80f);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		func_32(&(uParam0->f_1), 256);
		func_31(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_31(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_32(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_33(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_34(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

int func_35(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_32(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_36(var uParam0)
{
	if (func_41(uParam0))
	{
		if (func_37(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_28(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_37(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

int func_38(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_41(&(uParam0->f_2)))
	{
		func_26(&(uParam0->f_2));
	}
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	if (!bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (CONTROLS::IS_CONTROL_PRESSED(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_36(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_39(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_39(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_40(var uParam0)
{
	if (!func_41(uParam0))
	{
		func_26(uParam0);
	}
}

bool func_41(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 1);
}

int func_42()
{
	func_43();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_43()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_47(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_46(PLAYER::PLAYER_PED_ID());
			if (func_45(iVar0) && (!func_44(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_45(Global_111638.f_2358.f_539.f_4321))
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

bool func_44(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return func_48(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_48(int iParam0)
{
	return Global_1798[iParam0];
}

int func_49(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1] = sParam1;
		uParam0->f_2[iVar1].f_1 = iVar0;
		uParam0->f_2[iVar1].f_2 = iParam6;
		uParam0->f_2[iVar1].f_12 = 0;
		uParam0->f_2[iVar1].f_13 = 0;
		uParam0->f_2[iVar1].f_14 = 0;
		uParam0->f_2[iVar1].f_3[0] = iParam2;
		uParam0->f_2[iVar1].f_3[0].f_1 = iParam3;
		if (iParam4 == 1)
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_2[iVar1].f_13), 0);
		}
		uParam0->f_2[iVar1].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_50(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_32(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_32(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_32(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_32(&(uParam0->f_1), 8192);
	}
}

void func_51(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

bool func_52(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_53(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_58(0))
		{
			func_54(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_7357, 2);
	}
}

void func_54(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_57())
		{
			func_56(1, 1);
		}
		else
		{
			func_56(0, 0);
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
	if (!func_55())
	{
		Global_19486.f_1 = 3;
	}
}

int func_55()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_58(0))
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

bool func_57()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

int func_58(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 14))
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
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_59()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

void func_60()
{
	switch (iLocal_174)
	{
		case 0:
			func_149(2, sLocal_138, 1, 1, 0, 1);
			AUDIO::START_AUDIO_SCENE("STREET_RACE_OUTRO");
			iLocal_174++;
			break;
		
		case 1:
			uLocal_2125 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1954.776f, 3149.146f, 47.0701f, 4.9054f, -0.0416f, -158.4057f, 52.4461f, 0, 2);
			uLocal_2126 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1954.776f, 3150.146f, 47.0701f, 4.9054f, -0.0416f, -158.4057f, 52.4461f, 0, 2);
			CAM::SET_CAM_ACTIVE(uLocal_2125, 1);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2126, uLocal_2125, 2000, 0, 1);
			switch (func_42())
			{
				case 0:
					GRAPHICS::_START_SCREEN_EFFECT("MinigameEndMichael", 0, 0);
					break;
				
				case 1:
					GRAPHICS::_START_SCREEN_EFFECT("MinigameEndFranklin", 0, 0);
					break;
				
				case 2:
					GRAPHICS::_START_SCREEN_EFFECT("MinigameEndTrevor", 0, 0);
					break;
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			func_137(1, 0, 0, 2000, 1, 0);
			CAM::SET_CINEMATIC_MODE_ACTIVE(0);
			CAM::SHAKE_CAM(uLocal_2126, "HAND_SHAKE", 0.3f);
			AI::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_2127, PED::GET_VEHICLE_PED_IS_IN(iLocal_2127, 0), Local_54.f_64, 786468, 0, 28, -1, 30f, 1, 1073741824);
			if (Local_1943.f_7 == 1)
			{
				STREAMING::REQUEST_MODEL(func_136());
			}
			iLocal_174++;
			break;
		
		case 2:
			if (CAM::DOES_CAM_EXIST(uLocal_2126))
			{
				if (!CAM::IS_CAM_INTERPOLATING(uLocal_2126))
				{
					CAM::DESTROY_CAM(uLocal_2125, 0);
					uLocal_2125 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1954.776f, 3149.146f, 47.0701f, 89.5011f, -0.0416f, -158.4057f, 30f, 0, 2);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2125, uLocal_2126, 600, 1, 1);
					CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_2125, 1f);
					AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					VEHICLE::_SET_VEHICLE_HALT(PED::GET_VEHICLE_PED_IS_IN(iLocal_2127, 0), 10f, 1, 0);
					switch (func_42())
					{
						case 0:
							GRAPHICS::_STOP_SCREEN_EFFECT("MinigameEndMichael");
							break;
						
						case 1:
							GRAPHICS::_STOP_SCREEN_EFFECT("MinigameEndFranklin");
							break;
						
						case 2:
							GRAPHICS::_STOP_SCREEN_EFFECT("MinigameEndTrevor");
							break;
					}
					GRAPHICS::_START_SCREEN_EFFECT("MinigameTransitionIn", 0, 1);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					CAM::DESTROY_CAM(uLocal_2126, 0);
					iLocal_126 = 0;
					iLocal_174++;
				}
			}
			break;
		
		case 3:
			if (CAM::DOES_CAM_EXIST(uLocal_2125))
			{
				if (!CAM::IS_CAM_INTERPOLATING(uLocal_2125))
				{
					iVar0 = 0;
					while (iVar0 <= 7)
					{
						func_135(&(Local_196[iVar0].f_1));
						func_133(&(Local_196[iVar0]), 1);
						func_132(&(Local_196[iVar0].f_5), 1);
						iVar0++;
					}
					func_12(197, 0, 0, 1, 0);
					iVar0 = 0;
					while (iVar0 < Local_597)
					{
						func_133(&(Local_597[iVar0]), 1);
						iVar0++;
					}
				}
			}
			if (func_90(Local_1943, &uLocal_2135, &uLocal_2712, &bLocal_2836))
			{
				if (!bLocal_2836)
				{
					if (Local_1943.f_7 > 1)
					{
						iLocal_174 = 10;
					}
					else
					{
						iLocal_2130 = VEHICLE::CREATE_VEHICLE(func_136(), func_89(), func_88(), 1, 1, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_136());
						if (Global_111638.f_25068 == 4)
						{
							VEHICLE::SET_VEHICLE_LIVERY(iLocal_2130, 0);
							VEHICLE::SET_VEHICLE_COLOURS(iLocal_2130, 44, 83);
							VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_2130, 111, 111);
						}
						iLocal_174++;
					}
				}
				else
				{
					func_2(1, 0);
				}
			}
			break;
		
		case 4:
			CAM::DESTROY_ALL_CAMS(0);
			uLocal_2125 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1971.382f, 3108.135f, 47.2013f, 89.4758f, 0.0478f, 53.1639f, 53.3742f, 0, 2);
			CAM::SET_CAM_ACTIVE(uLocal_2125, 1);
			uLocal_2126 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1971.382f, 3108.135f, 47.2013f, 0.4758f, 0.0478f, 53.1639f, 53.3742f, 0, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2126, uLocal_2125, 600, 1, 1);
			GRAPHICS::_STOP_SCREEN_EFFECT("MinigameTransitionIn");
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_2125, 1f);
			CAM::SHAKE_CAM(uLocal_2125, "HAND_SHAKE", 0.3f);
			CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_2126, 1f);
			CAM::SHAKE_CAM(uLocal_2126, "HAND_SHAKE", 0.3f);
			func_23(iLocal_2129, 1967.471f, 3124.583f, 46.0038f, 186.2056f, 1, 1);
			AI::TASK_VEHICLE_MISSION_COORS_TARGET(PLAYER::PLAYER_PED_ID(), iLocal_2129, 1968.5f, 3113.2f, 45.9001f, 4, 2f, 786469, 1f, -1f, 1);
			GRAPHICS::_STOP_ALL_SCREEN_EFFECTS();
			GRAPHICS::_START_SCREEN_EFFECT("MinigameTransitionOut", 0, 0);
			GAMEPLAY::CLEAR_AREA(func_87(), 100f, 1, 0, 0, 0);
			iLocal_174++;
			break;
		
		case 5:
			if (CAM::DOES_CAM_EXIST(uLocal_2126))
			{
				if (!CAM::IS_CAM_INTERPOLATING(uLocal_2126))
				{
					CAM::DESTROY_CAM(uLocal_2125, 0);
					uLocal_2125 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1971.637f, 3108.429f, 47.201f, 0.1839f, 0.0478f, 40.5043f, 40f, 0, 2);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2125, uLocal_2126, 5000, 1, 1);
					CAM::SHAKE_CAM(uLocal_2125, "HAND_SHAKE", 1f);
					SYSTEM::SETTIMERA(0);
					iLocal_174++;
				}
			}
			break;
		
		case 6:
			if (SYSTEM::TIMERA() > 4700)
			{
				if (CAM::_0xEE778F8C7E1142E2(0) == 4 || CAM::_0xEE778F8C7E1142E2(1) == 4)
				{
					GRAPHICS::_START_SCREEN_EFFECT("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				iLocal_174++;
			}
			break;
		
		case 7:
			if (CAM::DOES_CAM_EXIST(uLocal_2125))
			{
				if (!CAM::IS_CAM_INTERPOLATING(uLocal_2125))
				{
					AI::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					if (CAM::_0xEE778F8C7E1142E2(0) != 4 && CAM::_0xEE778F8C7E1142E2(1) != 4)
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-69.3229f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10.5361f, 1065353216);
					}
					func_137(0, 0, 0, 2000, 1, 0);
					SYSTEM::SETTIMERA(0);
					iLocal_174++;
				}
			}
			break;
		
		case 8:
			GRAPHICS::_STOP_ALL_SCREEN_EFFECTS();
			func_63(iLocal_2130, 145);
			func_62();
			AUDIO::STOP_AUDIO_SCENE("STREET_RACE_OUTRO");
			func_352(1, 0, 1, 0);
			break;
		
		case 10:
			CAM::DESTROY_ALL_CAMS(0);
			uLocal_2125 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1953.31f, 3139.005f, 48.1762f, 89.5003f, -0.0032f, 52.2429f, 25.3742f, 0, 2);
			CAM::SET_CAM_ACTIVE(uLocal_2125, 1);
			uLocal_2126 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1953.31f, 3139.005f, 48.1762f, -7.3963f, -0.0058f, 52.1179f, 45f, 0, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2126, uLocal_2125, 800, 1, 1);
			GRAPHICS::_STOP_SCREEN_EFFECT("MinigameTransitionIn");
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_2125, 1f);
			CAM::SHAKE_CAM(uLocal_2125, "HAND_SHAKE", 0.3f);
			CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_2126, 1f);
			CAM::SHAKE_CAM(uLocal_2126, "HAND_SHAKE", 0.3f);
			func_23(iLocal_2129, 1948.257f, 3142.936f, 45.8642f, 51.7219f, 1, 1);
			AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			GRAPHICS::_START_SCREEN_EFFECT("MinigameTransitionOut", 0, 0);
			GAMEPLAY::CLEAR_AREA(func_87(), 100f, 1, 0, 0, 0);
			SYSTEM::SETTIMERA(0);
			iLocal_174++;
			break;
		
		case 11:
			if (SYSTEM::TIMERA() > 500)
			{
				if (CAM::_0xEE778F8C7E1142E2(1) == 4)
				{
					if (func_8(iLocal_2129))
					{
						CAM::_0x11FA5D3479C7DD47(ENTITY::GET_ENTITY_MODEL(iLocal_2129));
					}
					GRAPHICS::_START_SCREEN_EFFECT("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				iLocal_174++;
			}
			break;
		
		case 12:
			if (SYSTEM::TIMERA() > 790)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				if (func_8(iLocal_2129))
				{
					CAM::_0x11FA5D3479C7DD47(ENTITY::GET_ENTITY_MODEL(iLocal_2129));
				}
				func_137(0, 0, 1, 2000, 1, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_174++;
			}
			break;
		
		case 13:
			if (SYSTEM::TIMERA() > 2000)
			{
				GRAPHICS::_STOP_ALL_SCREEN_EFFECTS();
				func_61();
				AUDIO::STOP_AUDIO_SCENE("STREET_RACE_OUTRO");
				func_352(1, 0, 1, 0);
			}
			break;
	}
}

void func_61()
{
	Global_111635 = 0;
}

void func_62()
{
	Global_111635 = 1;
}

void func_63(int iParam0, int iParam1)
{
	if (!func_69(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == 225514697)
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == -1692214353)
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == -1686040670)
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111638.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_111638.f_32744.f_5038[iVar1][iVar2].f_66)
			{
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_111638.f_32744.f_5038[iVar1][iVar2].f_1)))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_111638.f_32744.f_5038[iVar1][iVar2].f_1)))
					{
						Global_111638.f_32744.f_5038[iVar1][iVar2].f_66 = 0;
						Global_111638.f_32744.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_111638.f_32744.f_5600[iVar1].f_66)
		{
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_111638.f_32744.f_5600[iVar1].f_1)))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_111638.f_32744.f_5600[iVar1].f_1)))
				{
					Global_111638.f_32744.f_5600[iVar1].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111638.f_32744.f_5590 = iParam1;
	Global_76346 = iParam0;
	Global_111638.f_32744.f_5588 = 1;
	func_64(iParam0, &(Global_111638.f_32744.f_5510));
}

void func_64(int iParam0, var uParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_68(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_67(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::_VEHICLE_HAS_LANDING_GEAR(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 23);
						GAMEPLAY::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 23);
						GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						GAMEPLAY::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 12);
		}
		func_66(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_77), func_65(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::_DOES_VEHICLE_HAVE_DECAL(iParam0, 0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_65(int iParam0)
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

int func_66(int iParam0, var uParam1, var uParam2)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_67(int iParam0)
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

void func_68(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_69(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_85(iParam0, 0, 0)) || func_85(iParam0, 1, 0)) || func_85(iParam0, 2, 0)) || func_84(iParam0) != 145) || func_83(iParam0)) || func_82(iParam0)) || func_81(iParam0)) || func_80(iParam0)) || !func_70(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_82(iParam0))
		{
		}
		if (func_82(iParam0))
		{
		}
		if (func_85(iParam0, 0, 0))
		{
		}
		if (func_85(iParam0, 1, 0))
		{
		}
		if (func_85(iParam0, 2, 0))
		{
		}
		if (func_84(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_71(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -713569950:
		case -1961627517:
		case -823509173:
		case -1207431159:
		case 782665360:
		case -1476447243:
		case 1074326203:
		case 1353720154:
		case -845979911:
		case -1323100960:
		case -442313018:
		case 1283517198:
		case -2072933068:
		case -1098802077:
		case 1941029835:
		case 1938952078:
		case -2007026063:
		case 1917016601:
		case 2053223216:
		case 524108981:
		case 850991848:
		case 1518533038:
		case -2140210194:
		case -2137348917:
		case 2112052861:
		case -2076478498:
		case 1886712733:
		case 444583674:
		case 48339065:
		case -1006919392:
		case -2130482718:
		case -784816453:
		case 475220373:
		case -1705304628:
		case -1700801569:
		case -947761570:
		case 1876516712:
		case 1951180813:
		case -1987130134:
		case -233098306:
		case 121658888:
		case -120287622:
		case 904750859:
		case -1050465301:
		case 2046537925:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case -34623805:
		case -1536924937:
		case -1779120616:
		case 456714581:
		case -956048545:
		case 771711535:
		case -1066334226:
		case -845961253:
			return 0;
			break;
	}
	return 1;
}

int func_71(int iParam0, bool bParam1)
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
		if (!func_79())
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
		if ((((!func_78() && !func_77()) && !func_76()) && !func_75()) && !func_79())
		{
			return 0;
		}
	}
	if ((iParam0 == 37348240 || iParam0 == 11251904) || iParam0 == 544021352)
	{
		if ((GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_PC_VERSION()) || GAMEPLAY::IS_ORBIS_VERSION())
		{
		}
		else if (!func_76())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_74(iParam0))
		{
			return 0;
		}
	}
	if (!func_72(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_72(int iParam0)
{
	if (!func_73())
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

int func_73()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_74(int iParam0)
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

int func_75()
{
	return 0;
}

int func_76()
{
	return 1;
}

int func_77()
{
	return 1;
}

int func_78()
{
	if (DLC2::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_79()
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

int func_80(int iParam0)
{
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == -810318068 && GAMEPLAY::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_71(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_81(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96105[iVar0]))
		{
			if (Global_96105[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_82(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96075[iVar0], 0))
			{
				if (Global_96075[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_96075[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_83(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[24]))
	{
		if (iParam0 == Global_75441.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75441.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_84(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == iParam0)
			{
				return Global_96085[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_85(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_86(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || GAMEPLAY::IS_BIT_SET(Global_111638.f_7224[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_86(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_87()
{
	return 1967.042f, 3116.005f, 45.8901f;
}

float func_88()
{
	return 194.8257f;
}

Vector3 func_89()
{
	return 1964.038f, 3114.635f, 46.1319f;
}

int func_90(struct<13> Param0, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22)
{
	switch (iLocal_126)
	{
		case 0:
			func_131(uParam20);
			func_128(uParam21, 1);
			iVar0 = 0;
			switch (Param0.f_7)
			{
				case 1:
					iVar0 = 3;
					break;
				
				case 2:
					iVar0 = 2;
					break;
				
				case 3:
					iVar0 = 1;
					break;
				
				default:
					iVar0 = 0;
					break;
			}
			StringCopy(&Var1, "CRACEP", 16);
			StringIntConCat(&Var1, Param0.f_7, 16);
			StringCopy(&cVar5, "CRACETRACK", 16);
			StringIntConCat(&cVar5, Global_111638.f_25068 + 1, 16);
			func_127(uParam20, &Var1, &cVar5, 0);
			if (Param0.f_12 != 0)
			{
				func_126(uParam20, 18, "CRACETIME", "", Param0.f_12, 0, 0, 0);
			}
			if (Global_111638.f_25068.f_1 != 0)
			{
				func_126(uParam20, 18, "CRACEBTIME", "", Global_111638.f_25068.f_1, 0, 0, 0);
			}
			uParam20->f_561 = 1;
			if (Param0.f_7 <= 3)
			{
				func_125(uParam20, 1, "CRACERES", Param0.f_7, 9, 1, iVar0, 0);
			}
			else
			{
				func_125(uParam20, 0, "CRACERES", Param0.f_7, 9, 1, iVar0, 0);
			}
			SYSTEM::SETTIMERB(0);
			if (Param0.f_7 <= 1)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_UP", "HUD_MINI_GAME_SOUNDSET", 1);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "RACE_PLACED", "HUD_AWARDS", 1);
			}
			iLocal_126 = 1;
			func_121(uParam20, 1, 0);
			uParam20->f_566 = 1;
			break;
		
		case 1:
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			func_96(uParam20, 0, 1065353216, 0, 0, 0);
			func_95(uParam21);
			if (SYSTEM::TIMERB() > 2000)
			{
				if (CONTROLS::_IS_INPUT_DISABLED(2))
				{
					UI::_SHOW_CURSOR_THIS_FRAME();
				}
				if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 216))
				{
					func_94(uParam20);
					iLocal_126 = 2;
					*uParam22 = 1;
				}
				else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 215))
				{
					func_94(uParam20);
					iLocal_126 = 2;
					*uParam22 = 0;
				}
			}
			break;
		
		case 2:
			if (func_96(uParam20, 0, 1065353216, 0, 0, 0))
			{
				func_91(uParam20);
				func_29(uParam21);
				return 1;
			}
			break;
	}
	return 0;
}

void func_91(var uParam0)
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
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_93(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_92(0);
}

void func_92(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_93(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
}

void func_94(var uParam0)
{
	uParam0->f_562 = 0;
	uParam0->f_561 = 0;
	uParam0->f_558 = uParam0->f_572 + 500;
}

void func_95(var uParam0)
{
	func_30(uParam0, 1128792064, 1, 0, 1, 1065353216);
}

int func_96(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	if (GAMEPLAY::GET_FRAME_COUNT() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = GAMEPLAY::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (AI::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(1);
			uParam0->f_564 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			}
		}
	}
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	CONTROLS::DISABLE_CONTROL_ACTION(2, 19, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 21, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 28, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 29, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 171, 1);
	func_53(0);
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (PLAYER::_IS_PLAYER_CAM_CONTROL_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()))
		{
			UI::_SHOW_CURSOR_THIS_FRAME();
		}
	}
	Global_41981 = 1;
	if (!uParam0->f_563)
	{
		switch (func_46(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			case 1:
				GRAPHICS::_START_SCREEN_EFFECT("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				GRAPHICS::_START_SCREEN_EFFECT("SuccessTrevor", 1000, 0);
				break;
			
			default:
				GRAPHICS::_START_SCREEN_EFFECT("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_120(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_120(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_120((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_120(30f) - func_120(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_92(1);
		uParam0->f_572 = (uParam0->f_572 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_99(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_30 = func_98(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_547 = func_98(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "TRANSITION_OUT");
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_548 = func_98(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (CONTROLS::_0x6CD79468A1E595C6(2))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_97(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_97(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				uParam0->f_559 = func_98((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_573 = func_98((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_98((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_573 = func_98((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_92(0);
			}
			return !bVar0;
		}
	}
	func_92(0);
	return 1;
}

void func_97(var uParam0, bool bParam1)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	if (GAMEPLAY::IS_PC_VERSION())
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	func_34(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 215, true));
	func_51("ES_HELP");
	if (GAMEPLAY::IS_PC_VERSION())
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(215);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	if (bParam1)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "SET_DATA_SLOT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
		func_34(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 216, true));
		func_51("ES_XPAND");
		if (GAMEPLAY::IS_PC_VERSION())
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(216);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

float func_98(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_99(var uParam0, float fParam1, bool bParam2)
{
	iVar0 = SYSTEM::ROUND((uParam0->f_547 * 255f));
	fVar1 = (func_119() * 0.25f);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_51(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_118(&(uParam0->f_13));
				}
				else
				{
					func_51(&(uParam0->f_13));
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(150);
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(100);
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
				if (uParam0->f_556 == 4)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT((uParam0->f_56 - 1));
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_56);
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(iParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(69);
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0.15f);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				uParam0->f_3 = 1;
			}
		}
		func_117();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_120((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_119());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_116(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (GRAPHICS::_GET_ASPECT_RATIO(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_116(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_119()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 215);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 216);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 200);
	CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_113((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				UI::HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(2, 188, 1);
				if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				CONTROLS::DISABLE_CONTROL_ACTION(2, 187, 1);
				if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				CONTROLS::DISABLE_CONTROL_ACTION(2, 202, 1);
				if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 215) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	UI::GET_HUD_COLOUR(1, &uVar13, &uVar14, &uVar15, &iVar16);
	UI::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, iVar0);
	UI::SET_TEXT_WRAP(fVar9, fVar10);
	UI::SET_TEXT_JUSTIFICATION(0);
	UI::SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - func_120(6f));
	fVar1 = (fVar1 + (func_120(30f) - func_120((2f * 2f))));
	fVar11 = (fVar2 - func_120((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_98((fVar11 / (0.6f * func_120(25f))), 0f, 1f);
		func_117();
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (func_120((2f - 0.5f)) - 0.001388889f)), fVar6, func_112(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_120((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_120((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_119())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_98((fVar11 / (0.8f * func_120(25f))), 0f, 1f);
			func_109(uParam0, iVar17, (fVar1 + func_120(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_120(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_120((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_119())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_120(2f));
					fVar12 = func_98((fVar11 / (0.6f * func_120(25f))), 0f, 1f);
					func_117();
					GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_120((2f * 0.5f))), fVar6, func_112(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_120((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_120((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_120((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_119())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_120(2f));
			fVar12 = func_98((fVar11 / (0.6f * func_120(25f))), 0f, 1f);
			func_117();
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_120((2f * 0.5f))), fVar6, func_112(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_120((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_119())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_98((fVar11 / (0.8f * func_120(25f))), 0f, 1f);
			UI::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_102(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (UNK::_GET_CURRENT_LANGUAGE_ID() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_119()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_119()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_119()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_119()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				UI::SET_TEXT_WRAP(fVar20, fVar21);
				UI::SET_TEXT_JUSTIFICATION(1);
			}
			else
			{
				fVar20 = 0.5f;
				UI::SET_TEXT_JUSTIFICATION(0);
			}
			UI::SET_TEXT_SCALE(1f, 0.4f);
			func_101(&(uParam0->f_550), fVar20, (fVar1 + func_120((2f * 2f))), 0, 0, 0);
			UI::SET_TEXT_WRAP(fVar20, fVar21);
			UI::SET_TEXT_JUSTIFICATION(2);
			UI::SET_TEXT_SCALE(1f, 0.4f);
			UI::SET_TEXT_CENTRE(0);
			func_117();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			UI::SET_TEXT_WRAP(fVar20, fVar22);
			UI::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_120((2f * 2f))), 0);
					break;
				
				case 1:
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_555);
					UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_120((2f * 2f))), 0);
					break;
				
				case 2:
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_120((2f * 2f))), 0);
					break;
				
				case 5:
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
					UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH(uParam0->f_554, 1);
					UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_120((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						UI::GET_HUD_COLOUR(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						UI::GET_HUD_COLOUR(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						UI::GET_HUD_COLOUR(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_100(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_120(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				GRAPHICS::DRAW_SPRITE(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_120(30f) - 2f));
		}
	}
}

float func_100(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_101(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	UI::SET_TEXT_CENTRE(iParam3);
	UI::SET_TEXT_FONT(iParam5);
	func_117();
	if (bParam4)
	{
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	}
	else
	{
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	}
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_102(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_108(iParam0), 64);
	StringCopy(&cVar16, func_105(iParam0, bParam1), 64);
	if (GAMEPLAY::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_104())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_104())
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
		Var37.x = (Var37.x * (func_103(iParam0) / fVar34));
		Var37.y = (Var37.y * (func_103(iParam0) / fVar34));
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

float func_103(int iParam0)
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

int func_104()
{
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_105(int iParam0, bool bParam1)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_7029[iParam0])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_107(PLAYER::PLAYER_ID()) };
			if (NETWORK::_0x5835D9CD92E83184(&Var19, &uVar3))
			{
				return func_106(&uVar3);
			}
		}
		else
		{
			return func_106(&(Global_22350.f_7029[iParam0]));
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

var func_106(var uParam0)
{
	return uParam0;
}

struct<13> func_107(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_108(int iParam0)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_6020[iParam0])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_107(PLAYER::PLAYER_ID()) };
			NETWORK::_0x5835D9CD92E83184(&Var16, &uVar0);
			return func_106(&uVar0);
		}
		else
		{
			return func_106(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_109(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	UI::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
	UI::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, iParam5);
	UI::SET_TEXT_WRAP(fParam3, fParam4);
	UI::SET_TEXT_JUSTIFICATION(1);
	UI::SET_TEXT_SCALE(1f, func_111(14f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_FONT(0);
	func_117();
	if (uParam0->f_531[iParam1])
	{
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_71[iParam1]));
	}
	else
	{
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_71[iParam1]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_489[iParam1]);
		}
	}
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_102(7, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_105(7, 0), (fParam4 - 0.006f), ((fParam2 + func_120(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_102(5, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_105(5, 0), (fParam4 - 0.006f), ((fParam2 + func_120(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_102(6, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_105(6, 0), (fParam4 - 0.006f), ((fParam2 + func_120(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		UI::SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		UI::SET_TEXT_JUSTIFICATION(2);
	}
	UI::SET_TEXT_SCALE(1f, func_111(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		UI::SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		UI::SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	UI::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, iParam5);
	func_110(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1]), uParam0->f_57[iParam1]);
}

void func_110(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	iVar0 = 1;
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_FONT(0);
	func_117();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			UI::SET_TEXT_SCALE(1f, func_111(18f));
			UI::SET_TEXT_FONT(4);
			if (iParam0 < 0)
			{
				UI::_SET_TEXT_ENTRY_FOR_WIDTH("ESMINDOLLA");
				UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH((-1 * iParam0), 1);
				fVar1 = UI::_GET_TEXT_SCREEN_WIDTH(0);
			}
			else
			{
				UI::_SET_TEXT_ENTRY_FOR_WIDTH("ESDOLLA");
				UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH(iParam0, 1);
				fVar1 = UI::_GET_TEXT_SCREEN_WIDTH(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			UI::SET_TEXT_SCALE(1f, func_111(14f));
			break;
	}
	UI::_SET_NOTIFACTION_COLOR_NEXT(iVar0);
	switch (iParam5)
	{
		case 11:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 1:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM");
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 2:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 4:
		case 5:
			UI::SET_TEXT_SCALE(1f, func_111(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA");
				UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH((-1 * iParam0), 1);
			}
			else
			{
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
				UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH(iParam0, 1);
			}
			break;
		
		case 6:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
		
		case 7:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
			break;
		
		case 8:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
		
		case 9:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
		
		case 10:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 18:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 12:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 13:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 15:
		case 14:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 16:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 20:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			UI::END_TEXT_COMMAND_DISPLAY_TEXT((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			UI::SET_TEXT_SCALE(1f, func_111(14f));
		}
		else
		{
			UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}
}

float func_111(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_112(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_113(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_115(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_114(7, iVar0);
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
		Global_1378678.f_4562.f_357[iVar0] = bParam11;
		Global_1378678.f_4562.f_238[iVar0] = iParam12;
		Global_1378678.f_4562.f_271[iVar0] = iParam13;
		Global_1378678.f_4562.f_368[iVar0] = iParam14;
		Global_1378678.f_4562.f_379[iVar0] = iParam15;
		Global_1378678.f_4562.f_390[iVar0] = iParam16;
		Global_1378678.f_4562.f_227[iVar0] = iParam17;
	}
}

void func_114(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_115(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

float func_116(char* sParam0)
{
	UI::_SET_TEXT_ENTRY_FOR_WIDTH(sParam0);
	return (UI::_GET_TEXT_SCREEN_WIDTH(1) / 2f);
}

void func_117()
{
	GRAPHICS::_SET_2D_LAYER(1);
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::_SET_2D_LAYER(7);
	}
	GRAPHICS::_0xC6372ECD45D73BCD(0);
}

void func_118(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(uParam0);
}

float func_119()
{
	fVar0 = 1f;
	if (GAMEPLAY::IS_PC_VERSION())
	{
	}
	return fVar0;
}

float func_120(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

int func_121(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_124(uParam0);
	func_123(uParam0);
	if (GAMEPLAY::ARE_STRINGS_EQUAL(&(uParam0->f_550), "SPR_RESULT") || (GAMEPLAY::ARE_STRINGS_EQUAL(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", 0);
		uParam0->f_1 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_122(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_97(uParam0, 1);
		}
		else
		{
			func_97(uParam0, 0);
		}
	}
	Global_76883 = 1;
	return 1;
}

void func_122(var uParam0)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	if (GAMEPLAY::IS_PC_VERSION())
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
	func_34(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 188, true));
	func_51("ES_HELP_TU");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
	func_34(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 187, true));
	func_51("ES_HELP_TD");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	func_34(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, true));
	func_51("ES_HELP_AB");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_123(var uParam0)
{
	fVar0 = 0f;
	UI::SET_TEXT_JUSTIFICATION(0);
	UI::SET_TEXT_SCALE(1f, func_111(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			UI::_SET_TEXT_ENTRY_FOR_WIDTH("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_13));
			fVar0 = UI::_GET_TEXT_SCREEN_WIDTH(1);
		}
		else
		{
			UI::_SET_TEXT_ENTRY_FOR_WIDTH(&(uParam0->f_13));
			fVar0 = UI::_GET_TEXT_SCREEN_WIDTH(1);
		}
	}
	else
	{
		UI::_SET_TEXT_ENTRY_FOR_WIDTH("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_36[iVar2]));
					iVar2++;
					break;
				
				case 2:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_36[iVar2]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = UI::_GET_TEXT_SCREEN_WIDTH(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_124(var uParam0)
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

void func_125(var uParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = uParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_126(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0]), sParam3, 64);
	uParam0->f_489[iVar0] = uParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_127(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_128(var uParam0, bool bParam1)
{
	func_50(uParam0, 0, 0, 1, 1);
	func_49(uParam0, "CRACECONT", 2, 215, 1, 1, 0);
	if (bParam1)
	{
		func_49(uParam0, "CRACERET", 2, 216, 1, 1, 0);
	}
	func_130(uParam0, 1);
	func_129(uParam0, 1);
}

void func_129(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_32(&(uParam0->f_1), 16);
	}
	else
	{
		func_31(&(uParam0->f_1), 16);
	}
}

void func_130(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_32(&(uParam0->f_1), 1024);
	}
	else
	{
		func_31(&(uParam0->f_1), 1024);
	}
}

void func_131(var uParam0)
{
	func_124(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_132(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
			}
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, -8f, 1);
			if (ENTITY::IS_ENTITY_ATTACHED(*uParam0))
			{
				ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
			}
		}
		if (bParam1)
		{
			VEHICLE::DELETE_VEHICLE(uParam0);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_133(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(*uParam0))
			{
				if ((ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(*uParam0) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(*uParam0))
				{
					ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
				}
				ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
			{
				ENTITY::SET_ENTITY_COLLISION(*uParam0, 1, 0);
			}
			if (PED::IS_PED_GROUP_MEMBER(*uParam0, func_134()))
			{
				PED::REMOVE_PED_FROM_GROUP(*uParam0);
			}
			if (!bParam1)
			{
				PED::SET_PED_KEEP_TASK(*uParam0, 1);
			}
		}
		if (bParam1)
		{
			PED::DELETE_PED(uParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

var func_134()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_135(var uParam0)
{
	if (UI::DOES_BLIP_EXIST(*uParam0))
	{
		UI::SET_BLIP_ROUTE(*uParam0, 0);
		UI::REMOVE_BLIP(uParam0);
	}
}

int func_136()
{
	switch (Global_111638.f_25068)
	{
		case 0:
			return -401643538;
			break;
		
		case 1:
			return 349315417;
			break;
		
		case 2:
			return -915704871;
			break;
		
		case 3:
			return 237764926;
			break;
		
		case 4:
			return 1233534620;
			break;
	}
	return 237764926;
}

void func_137(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam4)
	{
		CAM::SET_WIDESCREEN_BORDERS(bParam0, 0);
		CAM::RENDER_SCRIPT_CAMS(bParam0, iParam2, iParam3, 1, 0, 0);
	}
	UI::CLEAR_HELP(1);
	func_140(bParam0, 1, 1, 0, 0, 0);
	func_138(bParam0);
	UI::DISPLAY_HUD(!bParam0);
	UI::DISPLAY_RADAR(!bParam0);
	if (func_8(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam5)
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), bParam0);
		}
		else if (!bParam0)
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (!bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam0, 0);
	}
	else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
}

void func_138(bool bParam0)
{
	if (bParam0)
	{
		func_139();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			GAMEPLAY::SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_58(0))
		{
			func_54(0);
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

void func_139()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_140(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_148(1);
		UI::_0xA8FDB297A8D25FBA();
		UI::_0xFDB423997FA30340();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_55())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_147(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_148(0);
		UI::_0xE1CD1E48E025E661();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_147(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_145(PLAYER::PLAYER_ID())) && !func_142(PLAYER::PLAYER_ID(), 0)) && !func_141()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_145(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_141()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_142(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_143(-1, 0) == 8;
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

int func_143(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_144();
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

int func_144()
{
	return Global_1312745;
}

int func_145(int iParam0)
{
	if (func_142(iParam0, 0))
	{
		return 1;
	}
	if (func_146())
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

bool func_146()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_147(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_148(int iParam0)
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

void func_149(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam3 == 1)
	{
		if (!GAMEPLAY::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_98781)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_98781)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_226(1);
		if (iParam0 <= Global_98781)
		{
		}
		iVar1 = func_224(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_111638.f_9080.f_330[iVar1].f_1 = 0;
			uVar2 = func_222(iVar1);
			cVar3 = { Global_89532[iVar1].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_111638.f_9080.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_98781, iParam0);
		}
		else
		{
			iVar5 = func_217(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_111638.f_18569[iVar5].f_4 = 0;
				MemCopy(&uVar6, {func_216(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_98781, iParam0);
			}
			else
			{
				iVar10 = func_215(&(Global_98744.f_3));
				if (iVar10 > -1)
				{
					Global_111638.f_24981.f_4[iVar10] = 0;
				}
			}
		}
		Global_92922 = iParam2;
		Global_98781 = iParam0;
		func_150(iParam0, sParam1, iParam4, iParam5);
		if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_98781)
	{
	}
}

void func_150(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_151(&Global_105187, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_151(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	*uParam0 = func_42();
	uParam0->f_1 = func_204();
	GAMEPLAY::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_177(&(uParam0->f_2884), 0);
		func_176(PLAYER::PLAYER_PED_ID());
		func_169(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == 966099553)
		{
			uParam0->f_2 = -1569615261;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_111638.f_2358.f_539.f_294[iVar1];
		if (iVar1 == func_168())
		{
			func_162(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1][iVar0] = Global_98469[iVar1][iVar0];
				uParam0->f_616[iVar1].f_13[iVar0] = Global_98469[iVar1].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1].f_59 = Global_98469[iVar1].f_59;
			uParam0->f_616[iVar1].f_60 = Global_98469[iVar1].f_60;
			uParam0->f_616[iVar1].f_61 = Global_98469[iVar1].f_61;
			uParam0->f_616[iVar1].f_62 = Global_98469[iVar1].f_62;
			uParam0->f_616[iVar1].f_63 = Global_98469[iVar1].f_63;
			uParam0->f_616[iVar1].f_64 = Global_98469[iVar1].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1].f_39[iVar0] = Global_98469[iVar1].f_39[iVar0];
				uParam0->f_616[iVar1].f_49[iVar0] = Global_98469[iVar1].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1][iVar0] = { Global_111638.f_2358.f_539.f_298[iVar1][iVar0] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1].f_221[iVar0] = { Global_111638.f_2358.f_539.f_298[iVar1].f_221[iVar0] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(-1142440288, &(uParam0->f_2244[iVar1][0]), -1);
				STATS::STAT_GET_INT(-1123368730, &(uParam0->f_2244[iVar1][1]), -1);
				STATS::STAT_GET_INT(1081345962, &(uParam0->f_2244[iVar1].f_5[0]), -1);
				STATS::STAT_GET_INT(-1371118771, &(uParam0->f_2244[iVar1].f_5[1]), -1);
				STATS::STAT_GET_INT(-765547619, &(uParam0->f_2244[iVar1].f_5[2]), -1);
				STATS::STAT_GET_INT(-1080850937, &(uParam0->f_2244[iVar1].f_5[3]), -1);
				STATS::STAT_GET_INT(-2022861412, &(uParam0->f_2244[iVar1].f_5[4]), -1);
				STATS::STAT_GET_INT(-2018548694, &(uParam0->f_2244[iVar1].f_16[0]), -1);
				STATS::STAT_GET_INT(1323790999, &(uParam0->f_2244[iVar1].f_16[1]), -1);
				STATS::STAT_GET_INT(760098661, &(uParam0->f_2244[iVar1].f_16[2]), -1);
				STATS::STAT_GET_INT(-260459075, &(uParam0->f_2244[iVar1].f_16[3]), -1);
				STATS::STAT_GET_INT(1085789752, &(uParam0->f_2244[iVar1].f_16[4]), -1);
				STATS::STAT_GET_INT(334003354, &(uParam0->f_2244[iVar1].f_16[5]), -1);
				STATS::STAT_GET_INT(-500524769, &(uParam0->f_2244[iVar1].f_16[6]), -1);
				STATS::STAT_GET_INT(-1456330957, &(uParam0->f_2244[iVar1].f_16[7]), -1);
				STATS::STAT_GET_INT(-142720058, &(uParam0->f_2244[iVar1].f_16[8]), -1);
				STATS::STAT_GET_INT(-855707956, &(uParam0->f_2244[iVar1].f_16[9]), -1);
				STATS::STAT_GET_INT(-1539506602, &(uParam0->f_2244[iVar1].f_16[10]), -1);
				STATS::STAT_GET_INT(1915755069, &(uParam0->f_2244[iVar1].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(-126492964, &(uParam0->f_2244[iVar1][0]), -1);
				STATS::STAT_GET_INT(190514318, &(uParam0->f_2244[iVar1][1]), -1);
				STATS::STAT_GET_INT(-739329202, &(uParam0->f_2244[iVar1].f_5[0]), -1);
				STATS::STAT_GET_INT(-1185380830, &(uParam0->f_2244[iVar1].f_5[1]), -1);
				STATS::STAT_GET_INT(1030852186, &(uParam0->f_2244[iVar1].f_5[2]), -1);
				STATS::STAT_GET_INT(1801284145, &(uParam0->f_2244[iVar1].f_5[3]), -1);
				STATS::STAT_GET_INT(-1873234909, &(uParam0->f_2244[iVar1].f_5[4]), -1);
				STATS::STAT_GET_INT(-1315299114, &(uParam0->f_2244[iVar1].f_16[0]), -1);
				STATS::STAT_GET_INT(-2073999771, &(uParam0->f_2244[iVar1].f_16[1]), -1);
				STATS::STAT_GET_INT(1865030647, &(uParam0->f_2244[iVar1].f_16[2]), -1);
				STATS::STAT_GET_INT(-419525730, &(uParam0->f_2244[iVar1].f_16[3]), -1);
				STATS::STAT_GET_INT(-121557213, &(uParam0->f_2244[iVar1].f_16[4]), -1);
				STATS::STAT_GET_INT(-1021590567, &(uParam0->f_2244[iVar1].f_16[5]), -1);
				STATS::STAT_GET_INT(-732338604, &(uParam0->f_2244[iVar1].f_16[6]), -1);
				STATS::STAT_GET_INT(758650912, &(uParam0->f_2244[iVar1].f_16[7]), -1);
				STATS::STAT_GET_INT(1090437037, &(uParam0->f_2244[iVar1].f_16[8]), -1);
				STATS::STAT_GET_INT(164057391, &(uParam0->f_2244[iVar1].f_16[9]), -1);
				STATS::STAT_GET_INT(1607797744, &(uParam0->f_2244[iVar1].f_16[10]), -1);
				STATS::STAT_GET_INT(-1852248201, &(uParam0->f_2244[iVar1].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(177632919, &(uParam0->f_2244[iVar1][0]), -1);
				STATS::STAT_GET_INT(-464115177, &(uParam0->f_2244[iVar1][1]), -1);
				STATS::STAT_GET_INT(111865610, &(uParam0->f_2244[iVar1].f_5[0]), -1);
				STATS::STAT_GET_INT(-194950537, &(uParam0->f_2244[iVar1].f_5[1]), -1);
				STATS::STAT_GET_INT(-378588013, &(uParam0->f_2244[iVar1].f_5[2]), -1);
				STATS::STAT_GET_INT(-626223346, &(uParam0->f_2244[iVar1].f_5[3]), -1);
				STATS::STAT_GET_INT(-848331628, &(uParam0->f_2244[iVar1].f_5[4]), -1);
				STATS::STAT_GET_INT(226994293, &(uParam0->f_2244[iVar1].f_16[0]), -1);
				STATS::STAT_GET_INT(-1921832882, &(uParam0->f_2244[iVar1].f_16[1]), -1);
				STATS::STAT_GET_INT(1934357500, &(uParam0->f_2244[iVar1].f_16[2]), -1);
				STATS::STAT_GET_INT(1106022718, &(uParam0->f_2244[iVar1].f_16[3]), -1);
				STATS::STAT_GET_INT(1478409634, &(uParam0->f_2244[iVar1].f_16[4]), -1);
				STATS::STAT_GET_INT(-863918486, &(uParam0->f_2244[iVar1].f_16[5]), -1);
				STATS::STAT_GET_INT(-1699495217, &(uParam0->f_2244[iVar1].f_16[6]), -1);
				STATS::STAT_GET_INT(-1327567067, &(uParam0->f_2244[iVar1].f_16[7]), -1);
				STATS::STAT_GET_INT(2133068720, &(uParam0->f_2244[iVar1].f_16[8]), -1);
				STATS::STAT_GET_INT(-7828357, &(uParam0->f_2244[iVar1].f_16[9]), -1);
				STATS::STAT_GET_INT(-4568869, &(uParam0->f_2244[iVar1].f_16[10]), -1);
				STATS::STAT_GET_INT(-225202546, &(uParam0->f_2244[iVar1].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_111638.f_20559.f_233[iVar1].f_1;
		uParam0->f_13[iVar1] = Global_58686[iVar1];
		uParam0->f_25[0][iVar1] = { Global_111638.f_2358.f_539.f_2407[0][iVar1] };
		uParam0->f_25[1][iVar1] = { Global_111638.f_2358.f_539.f_2407[1][iVar1] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1][iVar0] = Global_111638.f_2358.f_493[iVar1][iVar0];
			uParam0->f_2838[iVar1].f_5[iVar0] = Global_111638.f_2358.f_493[iVar1].f_5[iVar0];
			uParam0->f_2838[iVar1].f_10[iVar0] = Global_111638.f_2358.f_493[iVar1].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1][iVar0] = Global_111638.f_2358[iVar1][iVar0];
			uParam0->f_2345[iVar1].f_4[iVar0] = Global_111638.f_2358[iVar1].f_4[iVar0];
			uParam0->f_2345[iVar1].f_8[iVar0] = Global_111638.f_2358[iVar1].f_8[iVar0];
			uParam0->f_2345[iVar1].f_12[iVar0] = Global_111638.f_2358[iVar1].f_12[iVar0];
			uParam0->f_2345[iVar1].f_16[iVar0] = Global_111638.f_2358[iVar1].f_16[iVar0];
			uParam0->f_2345[iVar1].f_20[iVar0] = Global_111638.f_2358[iVar1].f_20[iVar0];
			uParam0->f_2345[iVar1].f_24[iVar0] = Global_111638.f_2358[iVar1].f_24[iVar0];
			uParam0->f_2345[iVar1].f_28[iVar0] = Global_111638.f_2358[iVar1].f_28[iVar0];
			uParam0->f_2345[iVar1].f_32[iVar0] = Global_111638.f_2358[iVar1].f_32[iVar0];
			uParam0->f_2345[iVar1].f_36[iVar0] = Global_111638.f_2358[iVar1].f_36[iVar0];
			uParam0->f_2345[iVar1].f_40[iVar0] = Global_111638.f_2358[iVar1].f_40[iVar0];
			uParam0->f_2345[iVar1].f_44[iVar0] = Global_111638.f_2358[iVar1].f_44[iVar0];
			uParam0->f_2345[iVar1].f_48[iVar0] = Global_111638.f_2358[iVar1].f_48[iVar0];
			uParam0->f_2345[iVar1].f_52[iVar0] = Global_111638.f_2358[iVar1].f_52[iVar0];
			uParam0->f_2345[iVar1].f_56[iVar0] = Global_111638.f_2358[iVar1].f_56[iVar0];
			uParam0->f_2345[iVar1].f_60[iVar0] = Global_111638.f_2358[iVar1].f_60[iVar0];
			uParam0->f_2345[iVar1].f_64[iVar0] = Global_111638.f_2358[iVar1].f_64[iVar0];
			uParam0->f_2345[iVar1].f_68[iVar0] = Global_111638.f_2358[iVar1].f_68[iVar0];
			uParam0->f_2345[iVar1].f_72[iVar0] = Global_111638.f_2358[iVar1].f_72[iVar0];
			uParam0->f_2345[iVar1].f_76[iVar0] = Global_111638.f_2358[iVar1].f_76[iVar0];
			uParam0->f_2345[iVar1].f_80[iVar0] = Global_111638.f_2358[iVar1].f_80[iVar0];
			uParam0->f_2345[iVar1].f_84[iVar0] = Global_111638.f_2358[iVar1].f_84[iVar0];
			uParam0->f_2345[iVar1].f_88[iVar0] = Global_111638.f_2358[iVar1].f_88[iVar0];
			uParam0->f_2345[iVar1].f_92[iVar0] = Global_111638.f_2358[iVar1].f_92[iVar0];
			uParam0->f_2345[iVar1].f_96[iVar0] = Global_111638.f_2358[iVar1].f_96[iVar0];
			uParam0->f_2345[iVar1].f_100[iVar0] = Global_111638.f_2358[iVar1].f_100[iVar0];
			uParam0->f_2345[iVar1].f_104[iVar0] = Global_111638.f_2358[iVar1].f_104[iVar0];
			uParam0->f_2345[iVar1].f_108[iVar0] = Global_111638.f_2358[iVar1].f_108[iVar0];
			uParam0->f_2345[iVar1].f_112[iVar0] = Global_111638.f_2358[iVar1].f_112[iVar0];
			uParam0->f_2345[iVar1].f_116[iVar0] = Global_111638.f_2358[iVar1].f_116[iVar0];
			uParam0->f_2345[iVar1].f_120[iVar0] = Global_111638.f_2358[iVar1].f_120[iVar0];
			uParam0->f_2345[iVar1].f_124[iVar0] = Global_111638.f_2358[iVar1].f_124[iVar0];
			uParam0->f_2345[iVar1].f_128[iVar0] = Global_111638.f_2358[iVar1].f_128[iVar0];
			uParam0->f_2345[iVar1].f_132[iVar0] = Global_111638.f_2358[iVar1].f_132[iVar0];
			uParam0->f_2345[iVar1].f_136[iVar0] = Global_111638.f_2358[iVar1].f_136[iVar0];
			uParam0->f_2345[iVar1].f_140[iVar0] = Global_111638.f_2358[iVar1].f_140[iVar0];
			uParam0->f_2345[iVar1].f_144[iVar0] = Global_111638.f_2358[iVar1].f_144[iVar0];
			uParam0->f_2345[iVar1].f_148[iVar0] = Global_111638.f_2358[iVar1].f_148[iVar0];
			uParam0->f_2345[iVar1].f_152[iVar0] = Global_111638.f_2358[iVar1].f_152[iVar0];
			uParam0->f_2345[iVar1].f_156[iVar0] = Global_111638.f_2358[iVar1].f_156[iVar0];
			uParam0->f_2345[iVar1].f_160[iVar0] = Global_111638.f_2358[iVar1].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(-589476696, &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(353703542, &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(126871459, &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_153(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_152(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_152(var uParam0)
{
	*uParam0 = Global_94593;
	uParam0->f_1 = Global_94594;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_153(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_46(iParam2);
	}
	if (func_161(iParam2, &iVar0, iParam3, iParam5))
	{
		func_154(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, 1044954915) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				func_154(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_154(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
	{
		func_156(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_155(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_155(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_98744.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_156(var uParam0, int iParam1, int iParam2)
{
	func_64(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_158(iParam1, 145, 0);
	uParam0->f_11 = func_84(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_157(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(iParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_76346 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_157(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[iVar0]))
		{
			if (iParam0 == Global_75441.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_158(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_96085[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_159(iParam1, iParam2))
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

int func_159(int iParam0, int iParam1)
{
	if (func_45(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_160(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_160(int iParam0, var uParam1, int iParam2)
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

int func_161(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
				{
					if (iParam2 == 0 || GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, -956048545))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_85(*uParam1, func_42(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, -150975354))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_162(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_46(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_167(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_166(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_45(iVar0))
		{
			uParam1->f_59 = Global_111638.f_2358.f_539[iVar0].f_59;
			uParam1->f_60 = Global_111638.f_2358.f_539[iVar0].f_60;
			uParam1->f_61 = Global_111638.f_2358.f_539[iVar0].f_61;
			uParam1->f_62 = Global_111638.f_2358.f_539[iVar0].f_62;
			uParam1->f_63 = Global_111638.f_2358.f_539[iVar0].f_63;
			uParam1->f_64 = Global_111638.f_2358.f_539[iVar0].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_165(161, iParam3))
			{
				uParam1->f_59 = func_163(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_163(752, iParam3, 0);
			}
			uParam1->f_60 = func_163(753, iParam3, 0);
			uParam1->f_61 = func_163(754, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_165(161, iParam3))
			{
				uParam1->f_59 = func_163(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_163(752, iParam3, 0);
			}
		}
	}
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_164(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_164(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_144();
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

int func_165(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_164(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_166(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	iVar0 = func_46(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::_0x451294E859ECC018(iParam0) != -1)
				{
					*uParam2 = PED::_0x451294E859ECC018(iParam0);
					*uParam3 = PED::_0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_167(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	iVar0 = func_46(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_168()
{
	func_43();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_169(int iParam0, bool bParam1)
{
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_170(iParam0, &(Global_111638.f_2358.f_539.f_298[iVar0]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111638.f_2358.f_539.f_1730[iVar2][iVar0] = UI::_0xA13E93403F26C812(iVar2);
				if (bParam1)
				{
					iVar1 = UI::_0xA48931185F0536FE();
					if (Global_111638.f_2358.f_539.f_1730[iVar2][iVar0] == iVar1)
					{
						Global_111638.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(-922941372, uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(-753526687, uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(-502936933, uVar3, 1);
			}
		}
	}
}

void func_170(int iParam0, var uParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			uParam1[iVar0]->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_175(iVar0);
			if (iVar3 != 0)
			{
				Var4 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_175(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != -1569615261)
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4);
					if (Var4 == -72657034)
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4);
					Var4.f_4 = unk_0xA2C9AC24B4061285(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1[iVar0]->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_173(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, iVar2))
						{
							GAMEPLAY::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_173(Var4, iVar1);
					}
				}
				*uParam1[iVar0] = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0x4160B65AE085B5A9();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0x310836EE7129BA33(iVar9, &Var11) && !func_172(Var11.f_1)) && iVar72 < 51)
			{
				if (!DLC1::_IS_DLC_DATA_EMPTY(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4, 0))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4);
						Var4.f_4 = unk_0xA2C9AC24B4061285(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0xAD2A7A6DFF55841B(iVar9))
					{
						if (unk_0x31D5E073B6F93CDC(iVar9, iVar1, &Var50))
						{
							if (!func_171(Var50.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, Var50.f_3))
								{
									GAMEPLAY::SET_BIT(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_172(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case -1716589765:
			case -1654528753:
			case -270015777:
				return 0;
				break;
			
			case -102323637:
			case -1076751822:
			case 1627465347:
				return 0;
				break;
			
			case -771403250:
			case -1063057011:
				return 0;
				break;
			
			case 2132975508:
				return 0;
				break;
			
			case -1834847097:
			case 137902532:
				return 0;
				break;
			
			case 2138347493:
			case -1466123874:
				return 0;
				break;
			
			case 984333226:
			case -952879014:
				return 0;
				break;
			
			case 1672152130:
			case -1420407917:
				return 0;
				break;
			
			case 171789620:
			case -656458692:
			case -598887786:
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case 1198879012:
			case -800287667:
			case 126349499:
			case -499989876:
			case -1951375401:
			case -538741184:
			case -1045183535:
			case -275439685:
			case 1649403952:
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
			case 1198256469:
			case -1238556825:
			case -1355376991:
			case -1853920116:
			case 727643628:
				return 1;
				break;
			}
	}
	return 0;
}

int func_173(int iParam0, int iParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 453432689:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -19858063;
					break;
				
				case 2:
					iVar0 = -316253668;
					break;
				
				case 3:
					iVar0 = 899381934;
					break;
				
				case 4:
					iVar0 = 1709866683;
					break;
				
				case 5:
					iVar0 = -684126074;
					break;
			}
			break;
		
		case 1593441988:
			switch (iParam1)
			{
				case 0:
					iVar0 = 119648377;
					break;
				
				case 1:
					iVar0 = -696561875;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
				
				case 4:
					iVar0 = -966439566;
					break;
			}
			break;
		
		case 584646201:
			switch (iParam1)
			{
				case 0:
					iVar0 = 834974250;
					break;
				
				case 1:
					iVar0 = 614078421;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
				
				case 4:
					iVar0 = -1686714580;
					break;
			}
			break;
		
		case 324215364:
			switch (iParam1)
			{
				case 0:
					iVar0 = -884429072;
					break;
				
				case 1:
					iVar0 = 283556395;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1657815255;
					break;
				
				case 4:
					iVar0 = -1489156508;
					break;
				
				case 5:
					iVar0 = 1215999497;
					break;
			}
			break;
		
		case 736523883:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = 643254679;
					break;
				
				case 2:
					iVar0 = 889808635;
					break;
				
				case 3:
					iVar0 = 2043113590;
					break;
				
				case 4:
					iVar0 = 2076495324;
					break;
				
				case 5:
					iVar0 = -1023114086;
					break;
				
				case 6:
					iVar0 = 1019656791;
					break;
				
				case 7:
					iVar0 = 202788691;
					break;
				
				case 8:
					iVar0 = 663170192;
					break;
			}
			break;
		
		case -1074790547:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -1101075946;
					break;
				
				case 2:
					iVar0 = -1323216997;
					break;
				
				case 3:
					iVar0 = -604986051;
					break;
				
				case 4:
					iVar0 = 202788691;
					break;
				
				case 5:
					iVar0 = 2076495324;
					break;
				
				case 6:
					iVar0 = -1657815255;
					break;
				
				case 7:
					iVar0 = -1489156508;
					break;
				
				case 8:
					iVar0 = 1319990579;
					break;
			}
			break;
		
		case -2084633992:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -1614924820;
					break;
				
				case 2:
					iVar0 = -1861183855;
					break;
				
				case 3:
					iVar0 = -1167922891;
					break;
				
				case 4:
					iVar0 = 1967214384;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
				
				case 6:
					iVar0 = 2076495324;
					break;
				
				case 7:
					iVar0 = -1596416958;
					break;
				
				case 8:
					iVar0 = -2089531990;
					break;
				
				case 9:
					iVar0 = -660892072;
					break;
			}
			break;
		
		case -1357824103:
			switch (iParam1)
			{
				case 0:
					iVar0 = -91250417;
					break;
				
				case 1:
					iVar0 = -1899902599;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1439939148;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
				
				case 5:
					iVar0 = 930927479;
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam1)
			{
				case 0:
					iVar0 = -197857404;
					break;
				
				case 1:
					iVar0 = -2112517305;
					break;
				
				case 2:
					iVar0 = 1006677997;
					break;
				
				case 3:
					iVar0 = 202788691;
					break;
				
				case 4:
					iVar0 = -690308418;
					break;
			}
			break;
		
		case 2144741730:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -503336118;
					break;
				
				case 2:
					iVar0 = -691692330;
					break;
				
				case 3:
					iVar0 = 202788691;
					break;
				
				case 4:
					iVar0 = -1596416958;
					break;
				
				case 5:
					iVar0 = -1828795171;
					break;
			}
			break;
		
		case 487013001:
			switch (iParam1)
			{
				case 0:
					iVar0 = -435637410;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1562927653;
					break;
			}
			break;
		
		case -494615257:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1796727865;
					break;
				
				case 1:
					iVar0 = -2034401422;
					break;
				
				case 2:
					iVar0 = 202788691;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
			}
			break;
		
		case 100416529:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1681506167;
					break;
				
				case 1:
					iVar0 = -767279652;
					break;
				
				case 2:
					iVar0 = -1135289737;
					break;
				
				case 3:
					iVar0 = -1489156508;
					break;
				
				case 4:
					iVar0 = 1077065191;
					break;
			}
			break;
		
		case 205991906:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = 1198478068;
					break;
				
				case 2:
					iVar0 = -767279652;
					break;
				
				case 3:
					iVar0 = -1135289737;
					break;
			}
			break;
		
		case -1568386805:
			switch (iParam1)
			{
				case 0:
					iVar0 = 202788691;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1439939148;
					break;
			}
			break;
		
		case 1119849093:
			switch (iParam1)
			{
				case 0:
					iVar0 = -924946682;
					break;
			}
			break;
		
		case -270015777:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1928132688;
					break;
				
				case 1:
					iVar0 = -1152981993;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1657815255;
					break;
				
				case 4:
					iVar0 = -1489156508;
					break;
				
				case 5:
					iVar0 = 663517359;
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam1)
			{
				case 0:
					iVar0 = 202788691;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1489156508;
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam1)
			{
				case 0:
					iVar0 = 580369945;
					break;
				
				case 1:
					iVar0 = -640439150;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1489156508;
					break;
				
				case 4:
					iVar0 = 2008591151;
					break;
			}
			break;
		
		case 171789620:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1125642654;
					break;
				
				case 1:
					iVar0 = 860508675;
					break;
				
				case 2:
					iVar0 = 1857603803;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -1439939148;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
			}
			break;
		
		case 2017895192:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2052698631;
					break;
			}
			break;
		
		case 2132975508:
			switch (iParam1)
			{
				case 0:
					iVar0 = -979292288;
					break;
				
				case 1:
					iVar0 = -1284994289;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1439939148;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
				
				case 6:
					iVar0 = -1470645128;
					break;
			}
			break;
		
		case -1076751822:
			switch (iParam1)
			{
				case 0:
					iVar0 = -125817127;
					break;
				
				case 1:
					iVar0 = 2063610803;
					break;
				
				case 2:
					iVar0 = -2144080721;
					break;
			}
			break;
		
		case -1063057011:
			switch (iParam1)
			{
				case 0:
					iVar0 = -959978111;
					break;
				
				case 1:
					iVar0 = 2089537806;
					break;
				
				case 2:
					iVar0 = 1801039530;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -1596416958;
					break;
				
				case 5:
					iVar0 = -1489156508;
					break;
				
				case 6:
					iVar0 = 202788691;
					break;
				
				case 7:
					iVar0 = 1929467122;
					break;
			}
			break;
		
		case -656458692:
			switch (iParam1)
			{
				case 0:
					iVar0 = -971770235;
					break;
				
				case 1:
					iVar0 = -287703709;
					break;
				
				case 2:
					iVar0 = 1351683121;
					break;
				
				case 3:
					iVar0 = -1755194916;
					break;
				
				case 4:
					iVar0 = 2112683568;
					break;
				
				case 5:
					iVar0 = 1062111910;
					break;
				
				case 6:
					iVar0 = 146278587;
					break;
				
				case 7:
					iVar0 = -494162961;
					break;
				
				case 8:
					iVar0 = 2062808965;
					break;
			}
			break;
		
		case -619010992:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1198425599;
					break;
				
				case 1:
					iVar0 = -1188271751;
					break;
				
				case 2:
					iVar0 = -1444295948;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
			}
			break;
		
		case -538741184:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1530822070;
					break;
				
				case 1:
					iVar0 = -409758110;
					break;
			}
			break;
		
		case -1045183535:
			switch (iParam1)
			{
				case 0:
					iVar0 = -377062173;
					break;
				
				case 1:
					iVar0 = 384708672;
					break;
				
				case 2:
					iVar0 = -1802258419;
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_174(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < DLC1::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (DLC1::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43))
						{
							if (!func_171(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_174(int iParam0, var uParam1)
{
	iVar1 = DLC1::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (DLC1::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_175(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_176(int iParam0)
{
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_111638.f_2358.f_539.f_294[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_177(var uParam0, int iParam1)
{
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(912405861) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_76870, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_76870, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_76870, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_76870, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_181(&iVar0))
		{
			if (func_179(iVar0, &Var1, &uVar4))
			{
				Var1.z = (Var1.z + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_42();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_178(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_178(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param4, sParam3);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_179(int iParam0, var uParam1, var uParam2)
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
	return !func_180(*uParam1, 0f, 0f, 0f, 0);
}

bool func_180(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

int func_181(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_203())
		{
			*uParam0 = func_186(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 6, -1, 0, 1, -1);
			if (func_185(*uParam0) && !func_182(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_182(int iParam0)
{
	return func_183(iParam0, 0, 1);
}

int func_183(int iParam0, int iParam1, bool bParam2)
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
		if (func_18() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_163(func_184(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_184(int iParam0)
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

int func_185(int iParam0)
{
	return func_183(iParam0, 5, 1);
}

int func_186(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_202(iVar0))
		{
			if (!bParam5 || func_201(iVar0))
			{
				fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Param0, func_187(iVar0, 0), 1);
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

Vector3 func_187(int iParam0, bool bParam1)
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
			return func_198(Global_100839);
			break;
		
		case 46:
			if (Global_1590374 != func_197())
			{
				if (func_196(Global_1590374))
				{
					return func_189(2, 2);
				}
				else if (func_188(Global_1590374))
				{
					return func_189(45, 3);
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

int func_188(int iParam0)
{
	if (iParam0 != func_197())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 1)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_189(int iParam0, int iParam1)
{
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_197())
	{
		if (iParam1 == 3)
		{
			if (func_190(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[Global_1590374].f_274.f_259, 4))
			{
				if (func_190(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[Global_1590374].f_274.f_259, 5))
			{
				if (func_190(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_190(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!func_195(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_195(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_193(iParam0) };
	}
	else
	{
		Var12 = { func_192(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_191(Var18, -Var0.f_3.f_2) };
	Var18 = { func_191(Var18, Var6.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_191(struct<3> Param0, float fParam3)
{
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.y * fVar3));
	Var0.y = ((Param0.x * fVar3) + (Param0.y * fVar4));
	Var0.z = Param0.z;
	return Var0;
}

struct<6> func_192(int iParam0)
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

struct<6> func_193(int iParam0)
{
	return func_194(iParam0);
}

struct<6> func_194(int iParam0)
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

int func_195(int iParam0, var uParam1)
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

int func_196(int iParam0)
{
	if (iParam0 != func_197())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 3) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 4)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_197()
{
	return -1;
}

Vector3 func_198(int iParam0)
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
			if (func_199() == 0)
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

int func_199()
{
	return func_200(PLAYER::PLAYER_ID());
}

var func_200(int iParam0)
{
	return GAMEPLAY::GET_BITS_IN_RANGE(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

int func_201(int iParam0)
{
	return func_183(iParam0, 0, 0);
}

int func_202(int iParam0)
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

bool func_203()
{
	return Global_98796.f_345 > 0;
}

var func_204()
{
	func_214(&uVar0, TIME::GET_CLOCK_SECONDS());
	func_213(&uVar0, TIME::GET_CLOCK_MINUTES());
	func_212(&uVar0, TIME::GET_CLOCK_HOURS());
	func_207(&uVar0, TIME::GET_CLOCK_DAY_OF_MONTH());
	func_206(&uVar0, TIME::GET_CLOCK_MONTH());
	func_205(&uVar0, TIME::GET_CLOCK_YEAR());
	return uVar0;
}

void func_205(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_207(var uParam0, int iParam1)
{
	iVar0 = func_211(*uParam0);
	iVar1 = func_209(*uParam0);
	if (iParam1 < 1 || iParam1 > func_208(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_208(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_209(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_210(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_210(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_211(int iParam0)
{
	return iParam0 & 15;
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_213(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_214(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_215(char* sParam0)
{
	if (GAMEPLAY::ARE_STRINGS_EQUAL("BailBond1", sParam0))
	{
		return 0;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL("BailBond2", sParam0))
	{
		return 1;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL("BailBond3", sParam0))
	{
		return 2;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_216(int iParam0)
{
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_217(char* sParam0, int iParam1)
{
	iVar33 = GAMEPLAY::GET_HASH_KEY(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_218(iVar0, &sVar1);
		if (GAMEPLAY::GET_HASH_KEY(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_218(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_219(uParam1, "Abigail1", func_221(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_220(iParam0), 1, 0);
			break;
		
		case 1:
			func_219(uParam1, "Abigail2", func_221(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_220(iParam0), 1, 0);
			break;
		
		case 2:
			func_219(uParam1, "Barry1", func_221(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_220(iParam0), 1, 0);
			break;
		
		case 3:
			func_219(uParam1, "Barry2", func_221(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_220(iParam0), 1, 1);
			break;
		
		case 4:
			func_219(uParam1, "Barry3", func_221(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_220(iParam0), 0, 0);
			break;
		
		case 5:
			func_219(uParam1, "Barry3A", func_221(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 6:
			func_219(uParam1, "Barry3C", func_221(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 7:
			func_219(uParam1, "Barry4", func_221(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_220(iParam0), 0, 0);
			break;
		
		case 8:
			func_219(uParam1, "Dreyfuss1", func_221(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_220(iParam0), 0, 0);
			break;
		
		case 9:
			func_219(uParam1, "Epsilon1", func_221(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_220(iParam0), 0, 0);
			break;
		
		case 10:
			func_219(uParam1, "Epsilon2", func_221(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_220(iParam0), 1, 0);
			break;
		
		case 11:
			func_219(uParam1, "Epsilon3", func_221(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_220(iParam0), 0, 0);
			break;
		
		case 12:
			func_219(uParam1, "Epsilon4", func_221(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_220(iParam0), 0, 0);
			break;
		
		case 13:
			func_219(uParam1, "Epsilon5", func_221(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_220(iParam0), 1, 0);
			break;
		
		case 14:
			func_219(uParam1, "Epsilon6", func_221(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 15:
			func_219(uParam1, "Epsilon7", func_221(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_220(iParam0), 0, 0);
			break;
		
		case 16:
			func_219(uParam1, "Epsilon8", func_221(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_220(iParam0), 1, 0);
			break;
		
		case 17:
			func_219(uParam1, "Extreme1", func_221(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 18:
			func_219(uParam1, "Extreme2", func_221(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 19:
			func_219(uParam1, "Extreme3", func_221(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 20:
			func_219(uParam1, "Extreme4", func_221(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_220(iParam0), 0, 0);
			break;
		
		case 21:
			func_219(uParam1, "Fanatic1", func_221(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_220(iParam0), 1, 0);
			break;
		
		case 22:
			func_219(uParam1, "Fanatic2", func_221(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_220(iParam0), 1, 0);
			break;
		
		case 23:
			func_219(uParam1, "Fanatic3", func_221(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_220(iParam0), 0, 1);
			break;
		
		case 24:
			func_219(uParam1, "Hao1", func_221(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_220(iParam0), 0, 1);
			break;
		
		case 25:
			func_219(uParam1, "Hunting1", func_221(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 26:
			func_219(uParam1, "Hunting2", func_221(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 27:
			func_219(uParam1, "Josh1", func_221(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_220(iParam0), 1, 0);
			break;
		
		case 28:
			func_219(uParam1, "Josh2", func_221(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_220(iParam0), 1, 1);
			break;
		
		case 29:
			func_219(uParam1, "Josh3", func_221(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_220(iParam0), 1, 1);
			break;
		
		case 30:
			func_219(uParam1, "Josh4", func_221(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_220(iParam0), 1, 0);
			break;
		
		case 31:
			func_219(uParam1, "Maude1", func_221(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 32:
			func_219(uParam1, "Minute1", func_221(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 33:
			func_219(uParam1, "Minute2", func_221(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 34:
			func_219(uParam1, "Minute3", func_221(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 35:
			func_219(uParam1, "MrsPhilips1", func_221(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_220(iParam0), 0, 0);
			break;
		
		case 36:
			func_219(uParam1, "MrsPhilips2", func_221(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_220(iParam0), 0, 0);
			break;
		
		case 37:
			func_219(uParam1, "Nigel1", func_221(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_220(iParam0), 1, 0);
			break;
		
		case 38:
			func_219(uParam1, "Nigel1A", func_221(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_220(iParam0), 1, 1);
			break;
		
		case 39:
			func_219(uParam1, "Nigel1B", func_221(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_220(iParam0), 1, 1);
			break;
		
		case 40:
			func_219(uParam1, "Nigel1C", func_221(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_220(iParam0), 1, 1);
			break;
		
		case 41:
			func_219(uParam1, "Nigel1D", func_221(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_220(iParam0), 1, 1);
			break;
		
		case 42:
			func_219(uParam1, "Nigel2", func_221(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_220(iParam0), 1, 1);
			break;
		
		case 43:
			func_219(uParam1, "Nigel3", func_221(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_220(iParam0), 1, 1);
			break;
		
		case 44:
			func_219(uParam1, "Omega1", func_221(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_220(iParam0), 0, 0);
			break;
		
		case 45:
			func_219(uParam1, "Omega2", func_221(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_220(iParam0), 0, 0);
			break;
		
		case 46:
			func_219(uParam1, "Paparazzo1", func_221(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 47:
			func_219(uParam1, "Paparazzo2", func_221(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 48:
			func_219(uParam1, "Paparazzo3", func_221(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_220(iParam0), 0, 0);
			break;
		
		case 49:
			func_219(uParam1, "Paparazzo3A", func_221(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 50:
			func_219(uParam1, "Paparazzo3B", func_221(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 51:
			func_219(uParam1, "Paparazzo4", func_221(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_220(iParam0), 0, 0);
			break;
		
		case 52:
			func_219(uParam1, "Rampage1", func_221(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_220(iParam0), 0, 0);
			break;
		
		case 54:
			func_219(uParam1, "Rampage3", func_221(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_220(iParam0), 1, 0);
			break;
		
		case 55:
			func_219(uParam1, "Rampage4", func_221(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_220(iParam0), 1, 0);
			break;
		
		case 56:
			func_219(uParam1, "Rampage5", func_221(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_220(iParam0), 0, 0);
			break;
		
		case 53:
			func_219(uParam1, "Rampage2", func_221(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_220(iParam0), 1, 0);
			break;
		
		case 57:
			func_219(uParam1, "TheLastOne", func_221(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 58:
			func_219(uParam1, "Tonya1", func_221(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 59:
			func_219(uParam1, "Tonya2", func_221(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 60:
			func_219(uParam1, "Tonya3", func_221(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 61:
			func_219(uParam1, "Tonya4", func_221(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		case 62:
			func_219(uParam1, "Tonya5", func_221(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_219(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_221(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_216(iParam0) };
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_222(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_223(Global_111638.f_9080.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_223(Global_111638.f_9080.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_223(Global_111638.f_9080.f_99.f_205[11]);
			break;
		
		case 90:
			return func_223(Global_111638.f_9080.f_99.f_205[7]);
			break;
		
		case 93:
			return func_223(Global_111638.f_9080.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_224(char* sParam0, bool bParam1)
{
	iVar0 = GAMEPLAY::GET_HASH_KEY(sParam0);
	iVar1 = func_225(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_225(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_89532[iVar0].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_226(bool bParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_3 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1];
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_4 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_1;
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_5 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_227()
{
	switch (iLocal_174)
	{
		case 0:
			func_149(1, sLocal_137, 0, 1, 0, 1);
			func_3(500);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", 0, -1);
			func_260(&(Local_46.f_1), 8);
			func_260(&(Local_46.f_1), 4);
			func_260(&(Local_46.f_1), 2);
			func_260(&(Local_46.f_1), 1);
			func_259();
			uLocal_2120 = func_258();
			func_257(&uLocal_1981, 1050253722, 1073741824);
			if (Global_111638.f_25068.f_2 < 2)
			{
				func_256("FM_IHELP_SLP", -1);
				Global_111638.f_25068.f_2++;
			}
			iLocal_174++;
			break;
		
		case 1:
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Local_46, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (func_250(&Local_46, 1, 0, 1, 3, 1, 0, 0))
			{
				AUDIO::STOP_STREAM();
				func_249(&Local_46);
				iLocal_177 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_174++;
			}
			if (!Local_46.f_5)
			{
				if (func_248(Local_46.f_1, 8))
				{
					Local_46.f_5 = 1;
					if (func_8(iLocal_2129))
					{
						CAM::_0x11FA5D3479C7DD47(ENTITY::GET_ENTITY_MODEL(iLocal_2129));
					}
					func_246(&Local_1963, 0, 1, 2000, 1, 0, 0, 1);
					CAM::DESTROY_ALL_CAMS(0);
					if (func_8(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						VEHICLE::SET_VEHICLE_HANDBRAKE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0);
					}
					UI::DISPLAY_HUD(true);
					UI::DISPLAY_RADAR(true);
					AUDIO::STOP_AUDIO_SCENE("RACE_INTRO_GENERIC");
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
					Local_46.f_7 = GAMEPLAY::GET_GAME_TIMER();
					Local_1943.f_10 = Local_46.f_7;
					AUDIO::START_AUDIO_SCENE("STREET_RACE_DURING_RACE");
					iVar0 = 0;
					while (iVar0 <= 7)
					{
						Local_196[iVar0].f_43 = 1;
						AUDIO::_DYNAMIC_MIXER_RELATED_FN(Local_196[iVar0].f_5, "STREET_RACE_NPC_GENERAL", 0);
						iVar0++;
					}
				}
				else if (SYSTEM::TIMERA() > 2800 && iLocal_178 == 5)
				{
					if (CAM::_0xEE778F8C7E1142E2(1) == 4)
					{
						if (!func_245(2, &iLocal_173))
						{
							if (func_8(iLocal_2129))
							{
								CAM::_0x11FA5D3479C7DD47(ENTITY::GET_ENTITY_MODEL(iLocal_2129));
							}
							GRAPHICS::_START_SCREEN_EFFECT("CamPushInNeutral", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							func_244(2, &iLocal_173);
						}
					}
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_196[iVar0].f_17.f_13)
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iVar1 == 8)
			{
				if (iLocal_179 == 0)
				{
					iLocal_179 = GAMEPLAY::GET_GAME_TIMER();
				}
			}
			if (Local_1943.f_13)
			{
				Local_46.f_6 = 1;
				Local_1943.f_7 = Local_1943.f_6;
				func_243(&Local_1943);
				iLocal_174++;
			}
			if (iLocal_179 != 0 && GAMEPLAY::GET_GAME_TIMER() > iLocal_179 + 30000)
			{
				func_242(3);
				sLocal_180 = "CRACEFAIL1";
			}
			if (func_241(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_2133 < 0)
				{
					iLocal_2133 = (GAMEPLAY::GET_GAME_TIMER() + GAMEPLAY::GET_RANDOM_INT_IN_RANGE(2500, 5000));
				}
				else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_2133)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_2134, "DISTANT_RACERS", Local_196[func_238()].f_5, "ROAD_RACE_SOUNDSET", 0, 0);
					iLocal_2133 = -1;
				}
			}
			else if (iLocal_2133 > 0)
			{
				iLocal_2133 = -1;
			}
			func_231(Local_1943);
			func_228();
			break;
		
		case 3:
			AUDIO::STOP_AUDIO_SCENE("STREET_RACE_DURING_RACE");
			func_242(2);
			break;
	}
}

void func_228()
{
	if (Local_46.f_5 && !Local_46.f_6)
	{
		if (CONTROLS::IS_CONTROL_PRESSED(2, 190))
		{
			if (GAMEPLAY::GET_GAME_TIMER() > iLocal_177 + 500)
			{
				func_230(((GAMEPLAY::GET_GAME_TIMER() - iLocal_177) - 500), 3000, "CRACEQUIT", 6, 0, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1);
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_177 + 3500)
				{
					func_229("CRACEFAIL1");
				}
			}
		}
		else
		{
			iLocal_177 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
}

void func_229(char* sParam0)
{
	func_242(3);
	sLocal_180 = sParam0;
}

void func_230(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_115(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_114(0, iVar0);
		Global_1378678.f_1135[iVar0] = iParam0;
		Global_1378678.f_1135.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1378678.f_1135.f_22[iVar0]), sParam2, 64);
		Global_1378678.f_1135.f_194[iVar0] = iParam3;
		Global_1378678.f_1135.f_183[iVar0] = iParam4;
		Global_1378678.f_1135.f_216[iVar0] = iParam5;
		Global_1378678.f_1135.f_227[iVar0] = fParam6;
		Global_1378678.f_1135.f_227[iVar0].f_1 = fParam7;
		Global_1378678.f_1135.f_258[iVar0] = iParam8;
		Global_1378678.f_1135.f_269[iVar0] = iParam9;
		Global_1378678.f_1135.f_312[iVar0] = iParam10;
		Global_1378678.f_1135.f_323[iVar0] = iParam11;
		Global_1378678.f_1135.f_334[iVar0] = iParam12;
		Global_1378678.f_1135.f_345[iVar0] = iParam13;
		Global_1378678.f_1130 = 1;
		Global_1378678.f_1135.f_356[iVar0] = iParam14;
		Global_1378678.f_1135.f_367[iVar0] = iParam15;
		Global_1378678.f_1135.f_378[iVar0] = iParam16;
		Global_1378678.f_1135.f_389[iVar0] = iParam17;
		Global_1378678.f_1135.f_400[iVar0] = iParam18;
		Global_1378678.f_1135.f_411[iVar0] = iParam19;
		Global_1378678.f_1135.f_422[iVar0] = iParam20;
		Global_1378678.f_1135.f_433[iVar0] = iParam21;
		Global_1378678.f_1135.f_444[iVar0] = iParam22;
		Global_1378678.f_1135.f_455[iVar0] = iParam23;
		Global_1378678.f_1135.f_466[iVar0] = iParam24;
		Global_1378678.f_1135.f_205[iVar0] = iParam25;
		Global_1378678.f_1135.f_477[iVar0] = iParam26;
		Global_1378678.f_1135.f_488[iVar0] = iParam27;
		Global_1378678.f_1135.f_499[iVar0] = iParam28;
		Global_1378678.f_1135.f_510[iVar0] = iParam29;
		Global_1378678.f_1135.f_521[iVar0] = iParam30;
		Global_1378678.f_1135.f_532[iVar0] = iParam31;
		Global_1378678.f_1135.f_543[iVar0] = iParam32;
		Global_1378678.f_1135.f_554[iVar0] = iParam33;
	}
}

void func_231(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19)
{
	if (func_237(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 272, 1);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			AI::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Local_54.f_64, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iVar0);
			AI::WAYPOINT_RECORDING_GET_COORD(Local_54.f_64, iVar0, &Var1);
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				iLocal_122 = 1;
				iLocal_125 = 3;
			}
			if (!func_236("CRACESTUCK"))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					func_235("CRACESTUCK");
					iLocal_123 = GAMEPLAY::GET_GAME_TIMER() + 1000;
				}
				if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2, 15000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1, 3000))
				{
					func_235("CRACESTUCK");
					iLocal_123 = GAMEPLAY::GET_GAME_TIMER() + 1000;
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var1) > 900f)
				{
					func_235("CRACESTUCK");
					iLocal_123 = GAMEPLAY::GET_GAME_TIMER() + 1000;
				}
			}
			else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_123)
			{
				if (((((!ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && !VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2, 15000)) && !VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 3, 30000)) && !VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 10000)) && !VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1, 3000)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var1) < 400f)
				{
					UI::CLEAR_HELP(1);
				}
			}
		}
	}
	if ((CONTROLS::IS_CONTROL_PRESSED(0, 75) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 75)) || iLocal_122 == 1)
	{
		switch (iLocal_125)
		{
			case 0:
				iLocal_124 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_125 = 1;
				break;
			
			case 1:
				if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_124) > 500)
				{
					iLocal_124 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_125 = 2;
				}
				break;
			
			case 2:
				func_230((GAMEPLAY::GET_GAME_TIMER() - iLocal_124), 1500, "RACES_RMETER", 6, 0, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1);
				if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_124) >= 1500)
				{
					CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
					iLocal_125 = 3;
				}
				break;
			
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					if (Param0.f_4 > 0)
					{
						Var12 = { Local_54[(Param0.f_4 - 1)] };
					}
					else
					{
						Var12 = { Local_54[5] };
					}
					AI::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Local_54.f_64, Var12, &iVar4);
					iVar5 = iVar4 + 1;
					AI::WAYPOINT_RECORDING_GET_NUM_POINTS(Local_54.f_64, &iVar15);
					if (iVar5 >= iVar15)
					{
						iVar5 = 0;
					}
					AI::WAYPOINT_RECORDING_GET_COORD(Local_54.f_64, iVar4, &Var6);
					AI::WAYPOINT_RECORDING_GET_COORD(Local_54.f_64, iVar5, &Var9);
					if (!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var6, 5f) || func_234(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Var6, 1) < 5f)
					{
						func_233(500);
						func_23(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Var6, func_232(Var6, Var9), 0, 1);
						VEHICLE::SET_VEHICLE_FIXED(PLAYER::GET_PLAYERS_LAST_VEHICLE());
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
						if (func_236("CRACESTUCK"))
						{
							UI::CLEAR_HELP(1);
						}
						func_3(500);
						iLocal_125 = 4;
					}
				}
				break;
			
			case 4:
				if (!CONTROLS::IS_CONTROL_PRESSED(0, 75) && !CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 75))
				{
					CONTROLS::ENABLE_CONTROL_ACTION(0, 75, 1);
					iLocal_124 = -1;
					iLocal_122 = 0;
					iLocal_125 = 0;
				}
				break;
		}
	}
	else
	{
		iLocal_124 = -1;
		iLocal_122 = 0;
		iLocal_125 = 0;
	}
}

float func_232(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return GAMEPLAY::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_233(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(iParam0);
			while (!CAM::IS_SCREEN_FADED_OUT())
			{
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
				SYSTEM::WAIT(0);
			}
		}
	}
}

float func_234(int iParam0, struct<3> Param1, int iParam4)
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

void func_235(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

bool func_236(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_237(int iParam0)
{
	if (func_8(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_238()
{
	fVar1 = 0f;
	fVar2 = 1E+10f;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_240(Local_196[iVar0].f_5))
		{
			fVar1 = func_239(PLAYER::PLAYER_PED_ID(), Local_196[iVar0].f_5, 1);
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar3;
}

float func_239(int iParam0, int iParam1, int iParam2)
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

int func_240(int iParam0)
{
	if (func_8(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_241(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

void func_242(int iParam0)
{
	iLocal_174 = 0;
	iLocal_1975 = iParam0;
}

void func_243(var uParam0)
{
	if (UI::DOES_BLIP_EXIST(uParam0->f_14))
	{
		UI::REMOVE_BLIP(&(uParam0->f_14));
	}
	if (UI::DOES_BLIP_EXIST(uParam0->f_15))
	{
		UI::REMOVE_BLIP(&(uParam0->f_15));
	}
	if (uParam0->f_16 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(uParam0->f_16);
	}
	if (uParam0->f_17 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(uParam0->f_17);
	}
}

void func_244(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(iParam1, iParam0);
}

bool func_245(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(*iParam1, iParam0);
}

void func_246(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::_0xC819F3CBB62BF692(0, 0, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		UI::CLEAR_HELP(1);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 0);
			}
			CAM::DESTROY_CAM(uParam0->f_4, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, 1, 0);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	func_140(bParam1, 1, 0, 0, 0, 0);
	func_247();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			TIME::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			TIME::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_111638.f_32744.f_4801 != -15)
		{
			Global_111638.f_32744.f_4801 = func_204();
		}
	}
}

void func_247()
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		UI::_REMOVE_NOTIFICATION(Global_111638.f_14136[iVar0].f_16);
		iVar0++;
	}
}

bool func_248(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_249(var uParam0)
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
}

int func_250(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (bParam7)
	{
		func_255(&(uParam0->f_2), 1);
	}
	if (!func_41(&(uParam0->f_2)))
	{
		func_26(&(uParam0->f_2));
	}
	GRAPHICS::_SET_2D_LAYER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	if (bParam7)
	{
		if (func_41(&(uParam0->f_2)))
		{
			if (func_37(&(uParam0->f_2)))
			{
				fVar3 = uParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (func_28(1) - uParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					func_39(&(uParam0->f_2));
					if (func_248(uParam0->f_1, 1))
					{
						func_253(&(uParam0->f_1), 8);
						UI::GET_HUD_COLOUR(18, &iVar5, &iVar6, &iVar7, &uVar8);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_MESSAGE");
						func_51("CNTDWN_GO");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar5);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar6);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
						return 1;
					}
					func_26(&(uParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = uParam0->f_2.f_1;
		}
		iVar4 = SYSTEM::FLOOR(fVar3);
	}
	else
	{
		iVar4 = SYSTEM::FLOOR(func_36(&(uParam0->f_2)));
	}
	iVar9 = (iVar4 - iParam4);
	bVar10 = false;
	if (!func_248(uParam0->f_1, 8))
	{
		if (iVar9 >= -3 && !func_248(uParam0->f_1, 1))
		{
			func_253(&(uParam0->f_1), 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			func_252(uParam0, iVar9);
		}
		else if (iVar9 >= -2 && !func_248(uParam0->f_1, 2))
		{
			func_253(&(uParam0->f_1), 2);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			func_252(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_248(uParam0->f_1, 4))
		{
			func_253(&(uParam0->f_1), 4);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			func_252(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_248(uParam0->f_1, 16))
		{
			if (GAMEPLAY::ABSF((func_36(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_253(&(uParam0->f_1), 16);
					AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
				}
			}
		}
		else if (iVar9 >= 0 && !func_248(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
			}
			func_253(&(uParam0->f_1), 8);
			UI::GET_HUD_COLOUR(18, &iVar11, &iVar12, &iVar13, &uVar14);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_MESSAGE");
			func_51("CNTDWN_GO");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar11);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar12);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar13);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			if (!bParam1)
			{
				bVar10 = true;
			}
		}
	}
	else if (iVar9 == 1)
	{
		bVar10 = true;
	}
	if ((iParam2 && func_251()) || iVar4 > 5)
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			func_39(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}

int func_251()
{
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(0, 18) || CONTROLS::IS_CONTROL_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_252(var uParam0, int iParam1)
{
	UI::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_MESSAGE");
	UI::_SET_NOTIFACTION_COLOR_NEXT(-1);
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("NUMBER");
	UI::ADD_TEXT_COMPONENT_INTEGER(GAMEPLAY::ABSI(iParam1));
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_253(var uParam0, int iParam1)
{
	func_254(uParam0, iParam1);
}

void func_254(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_255(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(uParam0, 4);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(iParam0, 4);
	}
	if (GAMEPLAY::IS_BIT_SET(*iParam0, 4))
	{
	}
}

void func_256(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_257(var uParam0, int iParam1, int iParam2)
{
	if (func_41(&(uParam0->f_1)))
	{
		func_39(&(uParam0->f_1));
	}
	if (func_41(&(uParam0->f_4)))
	{
		func_39(&(uParam0->f_4));
	}
	func_29(&(uParam0->f_10));
	uParam0->f_134 = iParam1;
	uParam0->f_135 = iParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

var func_258()
{
	return unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
}

void func_259()
{
	uLocal_2134 = AUDIO::GET_SOUND_ID();
	iLocal_2133 = -1;
}

void func_260(var uParam0, int iParam1)
{
	func_261(uParam0, iParam1);
}

void func_261(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_262()
{
	switch (iLocal_174)
	{
		case 0:
			func_149(0, sLocal_136, 0, 1, 0, 1);
			iLocal_178 = 0;
			iLocal_174++;
			break;
		
		case 1:
			if (func_263())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
				iVar0 = 0;
				while (iVar0 <= 7)
				{
					if (func_8(Local_196[iVar0]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_196[iVar0], 0);
					}
					if (func_8(Local_196[iVar0].f_5))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_196[iVar0].f_5, 0);
					}
					iVar0++;
				}
				func_3(500);
				iLocal_174++;
			}
			else if (func_245(0, &iLocal_173))
			{
				func_21(&Local_46);
				AI::REQUEST_WAYPOINT_RECORDING(Local_54.f_64);
				func_12(197, 1, 0, 1, 0);
				AUDIO::LOAD_STREAM("STOCK_RACE_INTRO", "ROAD_RACE_SOUNDSET");
				iVar0 = 0;
				while (iVar0 <= 7)
				{
					if (func_8(Local_196[iVar0]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_196[iVar0], 1);
					}
					if (func_8(Local_196[iVar0].f_5))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_196[iVar0].f_5, 1);
					}
					iVar0++;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2129))
				{
					if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f) && !CAM::IS_SPHERE_VISIBLE(Local_54.f_26[8], 2f))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_2129 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2129, 1, 0);
							func_23(iLocal_2129, Local_54.f_26[8] + Local_181, Local_54.f_54[8], 0, 1);
						}
						else
						{
							STREAMING::REQUEST_MODEL(-1800170043);
							if (STREAMING::HAS_MODEL_LOADED(-1800170043))
							{
								iLocal_2129 = VEHICLE::CREATE_VEHICLE(-1800170043, Local_54.f_26[8] + Local_181, Local_54.f_54[8], 1, 1, 0);
							}
						}
						if (func_8(iLocal_2129))
						{
							VEHICLE::SET_VEHICLE_FIXED(iLocal_2129);
						}
					}
				}
				else if (func_8(iLocal_2129))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2129))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2129, -1);
					}
					if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iLocal_2129) != 4)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2129, 4);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				}
			}
			break;
		
		case 2:
			func_242(1);
			break;
	}
}

int func_263()
{
	switch (iLocal_178)
	{
		case 0:
			if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0, -1))
			{
				Local_1963.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(Local_1963.f_4, 2002.693f, 3097.819f, 50.8232f, 5.4256f, 0.0276f, -170.9332f, 10000, 0, 2);
				CAM::ADD_CAM_SPLINE_NODE(Local_1963.f_4, 2002.818f, 3097.488f, 48.0966f, 7.3944f, 0.0276f, -159.5117f, 10000, 0, 2);
				CAM::SET_CAM_FOV(Local_1963.f_4, 40f);
				CAM::SET_CAM_ACTIVE(Local_1963.f_4, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "TIME_LAPSE_MASTER", 0, 1);
				func_246(&Local_1963, 1, 0, 2000, 1, 0, 0, 1);
				GAMEPLAY::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f, 1, 0, 0, 0);
				UI::DISPLAY_HUD(false);
				UI::DISPLAY_RADAR(false);
				SYSTEM::SETTIMERA(0);
				func_244(0, &iLocal_173);
				switch (func_42())
				{
					case 0:
						GRAPHICS::_START_SCREEN_EFFECT("MinigameEndMichael", 5000, 0);
						break;
					
					case 1:
						GRAPHICS::_START_SCREEN_EFFECT("MinigameEndFranklin", 5000, 0);
						break;
					
					case 2:
						GRAPHICS::_START_SCREEN_EFFECT("MinigameEndTrevor", 5000, 0);
						break;
				}
				iLocal_178++;
			}
			break;
		
		case 1:
			if (func_269(func_285(), 0, "", "", &Local_1963, -1082130432, 0, 1, 1065353216))
			{
				AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
				SYSTEM::SETTIMERA(0);
				iLocal_178++;
			}
			break;
		
		case 2:
			if (SYSTEM::TIMERA() > 1500)
			{
				if (func_8(iLocal_2129))
				{
					AI::TASK_VEHICLE_DRIVE_TO_COORD(PLAYER::PLAYER_PED_ID(), iLocal_2129, Local_54.f_26[5], 0.95f, 0, ENTITY::GET_ENTITY_MODEL(iLocal_2129), 786469, 3.5f, -1f);
					AUDIO::SET_RADIO_TO_STATION_NAME("RADIO_01_CLASS_ROCK");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
				{
					AUDIO::STOP_SOUND(Local_1963.f_10);
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
					AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
				}
				AUDIO::_0x774BD811F656A122("RADIO_01_CLASS_ROCK", 1);
				iVar1 = 0;
				while (iVar1 <= 7)
				{
					if (func_8(Local_196[iVar1].f_5))
					{
						VEHICLE::_SET_VEHICLE_LIGHTS_MODE(Local_196[iVar1].f_5, 3);
					}
					iVar1++;
				}
				if (func_268())
				{
					Local_184 = { -0.7054f, 6.3148f, 2.0821f };
					Local_187 = { 0.9495f, 3.9011f, 2.7419f };
					Local_190 = { -0.567f, 2.6724f, 1.2077f };
					Local_193 = { 0.094f, -0.2423f, 0.7483f };
				}
				else if (func_267())
				{
					Local_184 = { -1.6831f, 6.0271f, 4.2228f };
					Local_187 = { -0.0245f, 3.5705f, 4.6855f };
					Local_190 = { -1.0281f, 4.6872f, 1.1868f };
					Local_193 = { -0.185f, 1.8112f, 1.1221f };
				}
				else
				{
					Local_184 = { -1.5802f, 5.8398f, 2.2274f };
					Local_187 = { 0.197f, 3.5006f, 2.8356f };
					Local_190 = { -0.6678f, 1.974f, 0.8876f };
					Local_193 = { 0.144f, -0.9013f, 0.417f };
				}
				uLocal_2125 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
				CAM::SET_CAM_FOV(uLocal_2125, 40f);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_2125, iLocal_2129, Local_184, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_2125, iLocal_2129, Local_187, 1);
				uLocal_2126 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
				CAM::SET_CAM_FOV(uLocal_2126, 40f);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_2126, iLocal_2129, Local_190, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_2126, iLocal_2129, Local_193, 1);
				CAM::SET_CAM_ACTIVE(uLocal_2125, 1);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2126, uLocal_2125, 4000, 1, 1);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 0, 1, 0, 0);
				CAM::SHAKE_CAM(uLocal_2125, "ROAD_VIBRATION_SHAKE", 0.5f);
				CAM::SHAKE_CAM(uLocal_2126, "ROAD_VIBRATION_SHAKE", 0.5f);
				SYSTEM::SETTIMERA(0);
				AUDIO::START_AUDIO_SCENE("RACE_INTRO_GENERIC");
				if (AUDIO::LOAD_STREAM("STOCK_RACE_INTRO", "ROAD_RACE_SOUNDSET"))
				{
					AUDIO::PLAY_STREAM_FRONTEND();
				}
				iLocal_178++;
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > 6000)
			{
				CAM::DESTROY_ALL_CAMS(0);
				uLocal_2125 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1960.154f, 3125.919f, 47.8242f, -2.4987f, 0.0002f, -95.2875f, 25f, 0, 2);
				uLocal_2126 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1963.017f, 3129.43f, 47.481f, -3.0689f, 0.0002f, -114.3019f, 25f, 0, 2);
				CAM::SET_CAM_ACTIVE(uLocal_2125, 1);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2126, uLocal_2125, 7000, 0, 1);
				CAM::SHAKE_CAM(uLocal_2125, "HAND_SHAKE", 0.1f);
				CAM::SHAKE_CAM(uLocal_2126, "HAND_SHAKE", 0.1f);
				SYSTEM::SETTIMERA(0);
				iLocal_178++;
			}
			break;
		
		case 4:
			if (SYSTEM::TIMERA() > 4900)
			{
				if (func_266(PLAYER::PLAYER_PED_ID(), -1817882002, 1))
				{
					AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					if (func_8(iLocal_2129))
					{
						VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_2129, 1);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
			}
			if (SYSTEM::TIMERA() > 7000)
			{
				CAM::DESTROY_ALL_CAMS(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				uLocal_2125 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1990.664f, 3113.482f, 47.1558f, 0.8047f, 0.0484f, 56.7722f, 50f, 1, 2);
				uLocal_2126 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, CAM::GET_GAMEPLAY_CAM_COORD(), CAM::GET_GAMEPLAY_CAM_ROT(2), CAM::GET_GAMEPLAY_CAM_FOV(), 0, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2126, uLocal_2125, 4000, 3, 1);
				SYSTEM::SETTIMERA(0);
				iLocal_178++;
			}
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			if (SYSTEM::TIMERA() > 3000)
			{
				bVar0 = true;
				iVar1 = 0;
				while (iVar1 <= 7)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_196[iVar1]))
					{
						bVar0 = false;
					}
					iVar1++;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2129))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					func_246(&Local_1963, 0, 0, 2000, 1, 0, 0, 1);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
					{
						AUDIO::STOP_SOUND(Local_1963.f_10);
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
						AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
					}
					AUDIO::SET_RADIO_TO_STATION_NAME("RADIO_01_CLASS_ROCK");
					AUDIO::_0x774BD811F656A122("RADIO_01_CLASS_ROCK", 1);
					AUDIO::START_AUDIO_SCENE("RACE_INTRO_GENERIC");
					CAM::DESTROY_ALL_CAMS(0);
					AUDIO::STOP_STREAM();
					return 1;
				}
			}
			break;
	}
	if (func_264(1000))
	{
		func_233(500);
		TIME::SET_CLOCK_TIME(func_285(), 0, 0);
		SYSTEM::SETTIMERA(0);
		if (func_8(iLocal_2129))
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_2129, 1);
			AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			func_23(iLocal_2129, Local_54.f_26[8], Local_54.f_54[8], 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2129, 1084227584);
		}
		iLocal_178 = 6;
	}
	return 0;
}

int func_264(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((GAMEPLAY::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = GAMEPLAY::GET_GAME_TIMER();
		}
		Global_28 = GAMEPLAY::GET_GAME_TIMER();
		if ((GAMEPLAY::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_265())
			{
				Global_27 = GAMEPLAY::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_265()
{
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 18) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_266(int iParam0, int iParam1, bool bParam2)
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

int func_267()
{
	if (func_240(iLocal_2129))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_2129);
		if (iVar0 == GAMEPLAY::GET_HASH_KEY("MONSTER") || iVar0 == GAMEPLAY::GET_HASH_KEY("MARSHALL"))
		{
			return 1;
		}
	}
	return 0;
}

int func_268()
{
	if (func_240(iLocal_2129))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_2129);
		if (((((((((((((((((((((((((((((((iVar0 == -808831384 || iVar0 == 142944341) || iVar0 == -16948145) || iVar0 == 2072156101) || iVar0 == 1739845664) || iVar0 == 1069929536) || iVar0 == 2006918058) || iVar0 == -789894171) || iVar0 == 321739290) || iVar0 == 1177543287) || iVar0 == -394074634) || iVar0 == -1137532101) || iVar0 == -1775728740) || iVar0 == -1543762099) || iVar0 == 1269098716) || iVar0 == 914654722) || iVar0 == -748008636) || iVar0 == -2064372143) || iVar0 == -808457413) || iVar0 == -1651067813) || iVar0 == 1645267888) || iVar0 == 1933662059) || iVar0 == -1207771834) || iVar0 == 2136773105) || iVar0 == -599568815) || iVar0 == 734217681) || iVar0 == -1189015600) || iVar0 == 989381445) || iVar0 == 1221512915) || iVar0 == 1123216662) || iVar0 == GAMEPLAY::GET_HASH_KEY("huntley")) || iVar0 == GAMEPLAY::GET_HASH_KEY("DUBSTA3"))
		{
			return 1;
		}
	}
	return 0;
}

int func_269(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, int iParam8)
{
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_204();
			iVar5 = func_204();
			func_212(&iVar5, iParam0);
			func_213(&iVar5, iParam1);
			func_214(&iVar5, 0);
			if (func_283(*uParam4, iVar5))
			{
				func_281(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_279(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_277((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				GRAPHICS::_0x5F0F3F56635809EF(0.6f);
				GRAPHICS::_SET_FAR_SHADOWS_SUPPRESSED(0);
				GRAPHICS::_0x0AE73D8DF3A762B2(0);
			}
			func_276();
			uParam4->f_10 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			func_247();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4))
				{
					fVar0 = CAM::GET_CAM_SPLINE_PHASE(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (GAMEPLAY::GET_HASH_KEY(sParam2) != 0)
						{
							GAMEPLAY::_SET_WEATHER_TYPE_OVER_TIME(sParam2, iParam8);
						}
						if (GAMEPLAY::GET_HASH_KEY(sParam3) != 0)
						{
							GAMEPLAY::_CLEAR_CLOUD_HAT();
							GAMEPLAY::_SET_CLOUD_HAT_TRANSITION(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_281(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				TIME::SET_CLOCK_TIME(func_275(iVar5), func_274(iVar5), func_273(iVar5));
				if (bParam7)
				{
					GRAPHICS::_0x03FC694AE06C5A20();
				}
				AUDIO::STOP_SOUND(uParam4->f_10);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				if (bParam7)
				{
					GRAPHICS::_0x0AE73D8DF3A762B2(1);
					GRAPHICS::_SET_FAR_SHADOWS_SUPPRESSED(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_98(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			func_281(&iVar5, iVar4, 0, 0, 0, 0, 0);
			TIME::SET_CLOCK_TIME(func_275(iVar5), func_274(iVar5), func_273(iVar5));
			if (func_272(iVar5) != TIME::GET_CLOCK_DAY_OF_MONTH())
			{
				TIME::SET_CLOCK_DATE(func_272(iVar5), func_211(iVar5), func_209(iVar5));
			}
			func_270();
			GRAPHICS::_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return 0;
}

void func_270()
{
	UNK1::_0xEB2D525B57F42B40();
	func_271();
}

void func_271()
{
	Global_22211.f_134 = 1;
}

int func_272(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_273(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_274(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_275(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_276()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
	return 1;
}

void func_277(float fParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_41(&(Global_111638.f_18098.f_175[iVar0].f_5)))
		{
			func_278(&(Global_111638.f_18098.f_175[iVar0].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_41(&(Global_111638.f_18098.f_362[iVar1])))
		{
			func_278(&(Global_111638.f_18098.f_362[iVar1]), (fParam0 * 60f));
		}
		iVar1++;
	}
	AUDIO::SKIP_RADIO_FORWARD();
}

void func_278(var uParam0, float fParam1)
{
	if (func_41(uParam0))
	{
		func_27(uParam0, (func_36(uParam0) + fParam1));
	}
}

void func_279(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_283(iParam0, iParam1))
	{
		iVar0 = func_211(iParam1);
		iVar1 = func_209(iParam0);
		iVar2 = (func_209(iParam0) - func_209(iParam1));
		iVar3 = (func_211(iParam0) - func_211(iParam1));
		iVar4 = (func_272(iParam0) - func_272(iParam1));
		iVar5 = (func_275(iParam0) - func_275(iParam1));
		iVar6 = (func_274(iParam0) - func_274(iParam1));
		iVar7 = (func_273(iParam0) - func_273(iParam1));
	}
	else
	{
		iVar0 = func_211(iParam0);
		iVar1 = func_209(iParam1);
		iVar2 = (func_209(iParam1) - func_209(iParam0));
		iVar3 = (func_211(iParam1) - func_211(iParam0));
		iVar4 = (func_272(iParam1) - func_272(iParam0));
		iVar5 = (func_275(iParam1) - func_275(iParam0));
		iVar6 = (func_274(iParam1) - func_274(iParam0));
		iVar7 = (func_273(iParam1) - func_273(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_208(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_280(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_280(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

void func_281(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_209(*iParam0);
	iVar1 = func_211(*iParam0);
	iVar2 = func_272(*iParam0);
	iVar3 = func_275(*iParam0);
	iVar4 = func_274(*iParam0);
	iVar5 = func_273(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_208(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_208(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_282(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_282(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_214(uParam0, iParam1);
	func_213(uParam0, iParam2);
	func_212(uParam0, iParam3);
	func_206(uParam0, iParam5);
	func_207(uParam0, iParam4);
	func_205(uParam0, iParam6);
}

int func_283(int iParam0, int iParam1)
{
	if (!func_284(iParam1) || !func_284(iParam0))
	{
		return 1;
	}
	iVar0 = func_209(iParam0);
	iVar1 = func_209(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_211(iParam0);
	iVar1 = func_211(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_272(iParam0);
	iVar1 = func_272(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_275(iParam0);
	iVar1 = func_275(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_274(iParam0);
	iVar1 = func_274(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_273(iParam0);
	iVar1 = func_273(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_284(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_273(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_274(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_275(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_209(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_211(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_272(iParam0);
	if (iVar5 < 1 || iVar5 > func_208(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_285()
{
	switch (Global_111638.f_25068)
	{
		case 0:
			return 20;
			break;
		
		case 1:
			return 17;
			break;
		
		case 2:
			return 12;
			break;
		
		case 3:
			return 21;
			break;
		
		case 4:
			return 12;
			break;
	}
	return 18;
}

void func_286()
{
	func_332();
	func_308();
	func_293();
	func_289();
	func_288(&Local_196, &Local_1943);
	func_287(&uLocal_1882, &uLocal_175);
	func_5();
	func_53(0);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 99, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 100, 1);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
}

void func_287(var uParam0, var uParam1)
{
	if (((((*uParam0)[*uParam1] != 0 && ENTITY::DOES_ENTITY_EXIST((*uParam0)[*uParam1])) && uParam0[*uParam1]->f_1 != 0) && ENTITY::DOES_ENTITY_EXIST(uParam0[*uParam1]->f_1)) && uParam0[*uParam1]->f_4)
	{
		if (func_52(uParam0[*uParam1]->f_2, 2))
		{
			uParam0[*uParam1]->f_5 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT((*uParam0)[*uParam1], uParam0[*uParam1]->f_1);
		}
		else
		{
			uParam0[*uParam1]->f_5 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((*uParam0)[*uParam1], uParam0[*uParam1]->f_1, uParam0[*uParam1]->f_3);
		}
	}
	iVar0++;
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	while ((((*uParam0)[*uParam1] == 0 || !ENTITY::DOES_ENTITY_EXIST((*uParam0)[*uParam1])) || (uParam0[*uParam1]->f_1 == 0 || !ENTITY::DOES_ENTITY_EXIST(uParam0[*uParam1]->f_1))) && iVar0 < *uParam0)
	{
		iVar0++;
		*uParam1++;
		if (*uParam1 >= *uParam0)
		{
			*uParam1 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!uParam0[iVar1]->f_4)
		{
			(*uParam0)[iVar1] = 0;
			uParam0[iVar1]->f_1 = 0;
			uParam0[iVar1]->f_2 = 0;
			uParam0[iVar1]->f_3 = 0;
			uParam0[iVar1]->f_5 = 0;
		}
		uParam0[iVar1]->f_4 = 0;
		iVar1++;
	}
}

void func_288(int iParam0, var uParam1)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if (func_8((*iParam0)[iVar1]))
		{
			if (iParam0[iVar1]->f_17.f_13)
			{
				iVar0++;
			}
			else if (iParam0[iVar1]->f_17.f_3 > uParam1->f_3)
			{
				iVar0++;
			}
			else if (iParam0[iVar1]->f_17.f_3 == uParam1->f_3)
			{
				if (iParam0[iVar1]->f_17.f_2 > uParam1->f_2)
				{
					iVar0++;
				}
				else if (iParam0[iVar1]->f_17.f_2 == uParam1->f_2)
				{
					fVar2 = func_234((*iParam0)[iVar1], Local_54[iParam0[iVar1]->f_17.f_4], 1);
					fVar3 = func_234(PLAYER::PLAYER_PED_ID(), Local_54[uParam1->f_4], 1);
					if (fVar2 < fVar3)
					{
						iVar0++;
					}
				}
			}
		}
		iVar1++;
	}
	uParam1->f_6 = iVar0;
}

void func_289()
{
	iVar0 = 0;
	while (iVar0 < Local_597)
	{
		if (!Local_597[iVar0].f_42)
		{
			if (Local_597[iVar0].f_41)
			{
				if (func_8(Local_597[iVar0]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_597[iVar0], 1)) > 40000f)
					{
						func_133(&(Local_597[iVar0]), 1);
						Local_597[iVar0].f_41 = 0;
					}
				}
				else
				{
					func_133(&(Local_597[iVar0]), 0);
					Local_597[iVar0].f_42 = 1;
				}
			}
			else if (func_245(0, &iLocal_173) && !Local_46.f_6)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_597[iVar0].f_37) < 22500f)
				{
					func_292(&(Local_597[iVar0]), 0);
				}
			}
		}
		iVar0++;
	}
	func_290(&Local_597);
}

void func_290(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (func_8((*iParam0)[iVar0]))
		{
			if ((!PED::IS_PED_IN_COMBAT((*iParam0)[iVar0], 0) && !PED::IS_PED_FLEEING((*iParam0)[iVar0])) && !PED::IS_PED_RAGDOLL((*iParam0)[iVar0]))
			{
				PED::SET_IK_TARGET((*iParam0)[iVar0], 1, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0, -1, -1);
				if (!func_266((*iParam0)[iVar0], 242628503, 1))
				{
					AI::OPEN_SEQUENCE_TASK(&(iParam0[iVar0]->f_2));
					AI::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
					AI::TASK_START_SCENARIO_IN_PLACE(0, func_291(iVar0), -1, 1);
					AI::CLOSE_SEQUENCE_TASK(iParam0[iVar0]->f_2);
					AI::TASK_PERFORM_SEQUENCE((*iParam0)[iVar0], iParam0[iVar0]->f_2);
					AI::CLEAR_SEQUENCE_TASK(&(iParam0[iVar0]->f_2));
					iParam0[iVar0]->f_45 = GAMEPLAY::GET_GAME_TIMER();
				}
				else if (iVar0 != 10)
				{
					if ((ENTITY::GET_ENTITY_HEADING((*iParam0)[iVar0]) - func_232(ENTITY::GET_ENTITY_COORDS((*iParam0)[iVar0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1))) > 60f || (ENTITY::GET_ENTITY_HEADING((*iParam0)[iVar0]) - func_232(ENTITY::GET_ENTITY_COORDS((*iParam0)[iVar0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1))) < -60f)
					{
						if (GAMEPLAY::GET_GAME_TIMER() > iParam0[iVar0]->f_45 + 5000)
						{
							AI::CLEAR_PED_TASKS((*iParam0)[iVar0]);
						}
					}
					else if (AI::GET_SEQUENCE_PROGRESS((*iParam0)[iVar0]) > 0)
					{
						if (GAMEPLAY::GET_GAME_TIMER() > iParam0[iVar0]->f_45 + 4000)
						{
							if ((((iVar0 == 2 || iVar0 == 5) || iVar0 == 18) || iVar0 == 7) || iVar0 == 14)
							{
								PED::SET_IK_TARGET((*iParam0)[iVar0], 4, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0, 500, 300);
							}
						}
					}
				}
			}
			else if (PED::IS_PED_RAGDOLL((*iParam0)[iVar0]))
			{
				ENTITY::SET_ENTITY_HEALTH((*iParam0)[iVar0], 0, 0);
			}
			else
			{
				func_133(iParam0[iVar0], 0);
			}
		}
		iVar0++;
	}
}

char* func_291(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
		case 15:
		case 16:
		case 17:
		case 6:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
		case 19:
		case 20:
		case 21:
		case 22:
			return "WORLD_HUMAN_CHEERING";
			break;
		
		case 2:
		case 5:
		case 18:
		case 7:
		case 14:
			return "WORLD_HUMAN_MOBILE_FILM_SHOCKING";
			break;
		
		case 10:
			return "WORLD_HUMAN_STAND_IMPATIENT";
			break;
	}
	return "";
}

void func_292(var uParam0, bool bParam1)
{
	if (!uParam0->f_41)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_3);
		if (bParam1)
		{
			while (!STREAMING::HAS_MODEL_LOADED(uParam0->f_3))
			{
				SYSTEM::WAIT(0);
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_3))
		{
			*uParam0 = PED::CREATE_PED(26, uParam0->f_3, uParam0->f_37, uParam0->f_40, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_46));
				uParam0->f_41 = 1;
				uParam0->f_44 = 0;
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_3);
			}
		}
	}
}

void func_293()
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (!Local_196[iVar0].f_42)
		{
			if (Local_196[iVar0].f_41)
			{
				if (func_8(Local_196[iVar0]))
				{
					bVar1 = true;
					if (iLocal_178 < 3)
					{
						bVar1 = false;
					}
					func_297(&(Local_196[iVar0]), Local_1943, bVar1);
					func_296();
					if (func_8(Local_196[iVar0].f_5))
					{
						if (!UI::DOES_BLIP_EXIST(Local_196[iVar0].f_1))
						{
							func_294(&(Local_196[iVar0].f_1), Local_196[iVar0].f_5, 1, 10f, 1);
							UI::SET_BLIP_NAME_FROM_TEXT_FILE(Local_196[iVar0].f_1, "CRACEBLIP");
						}
						else
						{
							func_294(&(Local_196[iVar0].f_1), Local_196[iVar0].f_5, 1, 10f, 0);
						}
					}
				}
				else
				{
					func_133(&(Local_196[iVar0]), 0);
					func_135(&(Local_196[iVar0].f_1));
					Local_196[iVar0].f_42 = 1;
				}
			}
			else if (!Local_46.f_6 && func_245(0, &iLocal_173))
			{
				func_9(&(Local_196[iVar0]), 0, 1);
			}
		}
		iVar0++;
	}
}

void func_294(var uParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (iParam4 == 1 && !UI::DOES_BLIP_EXIST(*uParam0))
	{
		*uParam0 = func_295(ENTITY::GET_ENTITY_COORDS(iParam1, 1), 0);
		if (bParam2)
		{
			UI::SET_BLIP_COLOUR(*uParam0, 3);
			UI::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "BLIP_FRIEND");
		}
		else
		{
			UI::SET_BLIP_COLOUR(*uParam0, 1);
			UI::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "BLIP_ENEMY");
		}
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			UI::SET_BLIP_SCALE(*uParam0, 0.7f);
		}
	}
	if (UI::DOES_BLIP_EXIST(*uParam0))
	{
		Var0 = { UI::GET_BLIP_COORDS(*uParam0) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		Var0.x = (Var0.x + ((Var3.x - Var0.x) / fParam3));
		Var0.y = (Var0.y + ((Var3.y - Var0.y) / fParam3));
		Var0.z = (Var0.z + ((Var3.z - Var0.z) / fParam3));
		UI::SET_BLIP_COORDS(*uParam0, Var0);
	}
}

var func_295(struct<3> Param0, int iParam3)
{
	uVar0 = UI::ADD_BLIP_FOR_COORD(Param0);
	UI::SET_BLIP_SCALE(uVar0, func_33(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	UI::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

void func_296()
{
	if (GAMEPLAY::GET_GAME_TIMER() > iLocal_2132)
	{
		fVar1 = 1E+07f;
		iVar3 = 0;
		while (iVar3 <= 7)
		{
			if (func_240(Local_196[iVar3].f_5))
			{
				fVar0 = func_239(PLAYER::PLAYER_PED_ID(), Local_196[iVar3].f_5, 1);
				if (fVar0 < fVar1)
				{
					fVar0 = fVar1;
					iVar2 = iVar3;
				}
			}
			iVar3++;
		}
		if (iLocal_2131 > -1 && func_240(Local_196[iLocal_2131].f_5))
		{
			AUDIO::_0x18EB48CFC41F2EA0(Local_196[iLocal_2131].f_5, 0);
			AUDIO::_DYNAMIC_MIXER_RELATED_FN(Local_196[iLocal_2131].f_5, "STREET_RACE_NPC_GENERAL", 0);
		}
		if (func_240(Local_196[iVar2].f_5))
		{
			AUDIO::_DYNAMIC_MIXER_RELATED_FN(Local_196[iVar2].f_5, "STREET_RACE_NPC_CLOSEST", 0);
		}
		iLocal_2131 = iVar2;
		iLocal_2132 = GAMEPLAY::GET_GAME_TIMER() + 2000;
	}
}

void func_297(var uParam0, struct<20> Param1, bool bParam21)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_5, 0))
	{
		iVar0 = 0;
		fVar4 = func_307(*uParam0);
		if (Param1.f_4 < 6)
		{
			uParam0->f_17 = func_234(*uParam0, Local_54[uParam0->f_17.f_4], 1);
			if (GAMEPLAY::GET_GAME_TIMER() > Local_46.f_7 + 7500)
			{
				if (uParam0->f_17.f_2 > Param1.f_2 + 1)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 2500f)
					{
						fVar4 = (fVar4 - (fVar4 * 0.5f));
					}
					else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 625f)
					{
						fVar4 = (fVar4 - (fVar4 * 0.4f));
					}
					else
					{
						fVar4 = (fVar4 - (fVar4 * 0.2f));
					}
				}
				else if (uParam0->f_17.f_2 == Param1.f_2 + 1)
				{
					fVar6 = func_234(PLAYER::PLAYER_PED_ID(), Local_54[uParam0->f_17.f_4], 1);
					fVar5 = (fVar6 - uParam0->f_17);
					if (fVar5 > 50f)
					{
						fVar4 = (fVar4 - (fVar4 * 0.4f));
					}
					else if (fVar5 > 25f)
					{
						fVar4 = (fVar4 - (fVar4 * 0.2f));
					}
				}
				else if (uParam0->f_17.f_2 == Param1.f_2)
				{
					if (Param1 > uParam0->f_17)
					{
						fVar5 = (Param1 - uParam0->f_17);
						if (fVar5 > 50f)
						{
							fVar4 = (fVar4 - (fVar4 * 0.4f));
						}
						else if (fVar5 > 25f)
						{
							fVar4 = (fVar4 - (fVar4 * 0.2f));
						}
					}
					else if (Param1 < uParam0->f_17)
					{
						fVar5 = (uParam0->f_17 - Param1);
						if (fVar5 > 50f)
						{
							fVar4 = (fVar4 + (fVar4 * 1.5f));
							iVar0 = 1;
							Var1 = { 0f, 3f, 0f };
						}
						else if (fVar5 > 25f)
						{
							fVar4 = (fVar4 + (fVar4 * 1f));
							iVar0 = 1;
							Var1 = { 0f, 1.5f, 0f };
						}
						else if (fVar5 > 0f)
						{
							fVar4 = (fVar4 + (fVar4 * 0.5f));
						}
					}
				}
				else if (uParam0->f_17.f_2 == (Param1.f_2 - 1))
				{
					fVar7 = func_234(*uParam0, Local_54[Param1.f_4], 1);
					fVar5 = (fVar7 - Param1);
					if (fVar5 > 50f)
					{
						fVar4 = (fVar4 + (fVar4 * 1.5f));
						iVar0 = 1;
						Var1 = { 0f, 3f, 0f };
					}
					else if (fVar5 > 25f)
					{
						fVar4 = (fVar4 + (fVar4 * 1f));
						iVar0 = 1;
						Var1 = { 0f, 1.5f, 0f };
					}
					else if (fVar5 > 0f)
					{
						fVar4 = (fVar4 + (fVar4 * 0.5f));
					}
				}
				else
				{
					fVar4 = (fVar4 + (fVar4 * 1.7f));
					iVar0 = 1;
					Var1 = { 0f, 4f, 0f };
				}
			}
			else
			{
				fVar4 = 40f;
				if (GAMEPLAY::GET_GAME_TIMER() < Local_46.f_7 + 1000)
				{
					Var1 = { 0f, 10f, 0f };
				}
				else
				{
					Var1 = { 0f, 6f, 0f };
				}
				iVar0 = 1;
			}
			uParam0->f_17.f_1 = func_305(uParam0->f_17.f_1, fVar4, 0.1f, 0);
			AI::SET_DRIVE_TASK_CRUISE_SPEED(*uParam0, uParam0->f_17.f_1);
			AI::SET_DRIVE_TASK_MAX_CRUISE_SPEED(*uParam0, fVar4);
		}
		switch (uParam0->f_44)
		{
			case 0:
				if (func_41(&(Local_46.f_2)))
				{
					uParam0->f_44++;
				}
				else if (bParam21)
				{
					if (!func_266(*uParam0, 242628503, 1))
					{
						AI::OPEN_SEQUENCE_TASK(&(uParam0->f_2));
						AI::TASK_PAUSE(0, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(200, 500));
						AI::TASK_VEHICLE_TEMP_ACTION(0, uParam0->f_5, 31, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(500, 2000));
						AI::CLOSE_SEQUENCE_TASK(uParam0->f_2);
						AI::TASK_PERFORM_SEQUENCE(*uParam0, uParam0->f_2);
						AI::CLEAR_SEQUENCE_TASK(&(uParam0->f_2));
					}
				}
				break;
			
			case 1:
				VEHICLE::STEER_UNLOCK_BIAS(uParam0->f_5, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_5, 2);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
				VEHICLE::SET_VEHICLE_STRONG(uParam0->f_5, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_5, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_5, 1, 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_5, 1, 0, 0);
				VEHICLE::_0x9F3F689B814F2599(uParam0->f_5, 0);
				AI::OPEN_SEQUENCE_TASK(&(uParam0->f_2));
				iVar8 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1100, 1300);
				AI::TASK_PAUSE(0, iVar8);
				iVar8 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(100, 250);
				if (uParam0->f_17.f_11 == 1)
				{
					AI::TASK_VEHICLE_TEMP_ACTION(0, uParam0->f_5, 30, 600);
				}
				else if (uParam0->f_17.f_11 == 2)
				{
					AI::TASK_VEHICLE_TEMP_ACTION(0, uParam0->f_5, 30, 1100);
				}
				else if (uParam0->f_17.f_11 == 5)
				{
					AI::TASK_VEHICLE_TEMP_ACTION(0, uParam0->f_5, 30, 1200);
				}
				else
				{
					AI::TASK_VEHICLE_TEMP_ACTION(0, uParam0->f_5, 30, (1300 + (uParam0->f_17.f_11 + 1 * iVar8)));
				}
				AI::CLOSE_SEQUENCE_TASK(uParam0->f_2);
				AI::TASK_PERFORM_SEQUENCE(*uParam0, uParam0->f_2);
				AI::CLEAR_SEQUENCE_TASK(&(uParam0->f_2));
				uParam0->f_17.f_1 = func_307(*uParam0);
				uParam0->f_44++;
				break;
			
			case 2:
				switch (uParam0->f_17.f_4)
				{
					case 5:
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, Local_54.f_19, Local_54.f_22, Local_54.f_25, 0, 1, 0))
						{
							uParam0->f_17.f_3++;
							uParam0->f_17.f_2++;
							uParam0->f_17.f_4 = 0;
							if (uParam0->f_17.f_3 == Local_54.f_65)
							{
								uParam0->f_17.f_13 = 1;
							}
						}
						break;
					
					default:
						if (Local_46.f_5)
						{
							if (!func_266(*uParam0, 242628503, 1))
							{
								AI::OPEN_SEQUENCE_TASK(&(uParam0->f_2));
								AI::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, uParam0->f_5, Local_54.f_64, 786468, 0, 540, -1, uParam0->f_17.f_1, 1, 1073741824);
								AI::CLOSE_SEQUENCE_TASK(uParam0->f_2);
								AI::TASK_PERFORM_SEQUENCE(*uParam0, uParam0->f_2);
								AI::CLEAR_SEQUENCE_TASK(&(uParam0->f_2));
							}
							bVar9 = false;
							if (uParam0->f_17 < 20f)
							{
								bVar9 = true;
							}
							AI::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Local_54.f_64, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, 1), &iVar10);
							AI::WAYPOINT_RECORDING_GET_COORD(Local_54.f_64, iVar10, &Var11);
							if (SYSTEM::VDIST2(Var11, Local_54[uParam0->f_17.f_4]) < 400f)
							{
								bVar9 = true;
							}
							if (bVar9)
							{
								uParam0->f_17.f_2++;
								uParam0->f_17.f_4++;
							}
						}
						else if (!func_266(*uParam0, 242628503, 1) && !func_266(*uParam0, -1817882002, 1))
						{
							AI::TASK_VEHICLE_DRIVE_TO_COORD(*uParam0, uParam0->f_5, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, 0f, 100f, 0f), 40f, 0, uParam0->f_5.f_2, 786468, 20f, 9999f);
						}
						break;
				}
				if (func_304(uParam0))
				{
					if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, 1), 3f))
					{
						func_303(uParam0);
					}
				}
				if (uParam0->f_17.f_11 == 1)
				{
					if (func_302(uParam0, Param1))
					{
						func_301(uParam0, Param1);
					}
				}
				if (iLocal_121 > GAMEPLAY::GET_GAME_TIMER())
				{
					UNK1::_0xAF66DCEE6609B148();
				}
				break;
			
			case 999:
				break;
		}
		if (Local_46.f_5 && !Local_46.f_6)
		{
			if (iVar0 && !func_300(Var1))
			{
				if (func_299(uParam0->f_5))
				{
					if (GAMEPLAY::GET_GAME_TIMER() > Local_46.f_7 + 1000)
					{
						Var1 = { Var1 * FtoV((IntToFloat(Global_111638.f_25068 + 1) * 0.75f)) };
					}
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(uParam0->f_5, 0, Var1, 0, 1, 1, 1);
				}
			}
			if ((func_298(*uParam0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_5)) && !ENTITY::IS_ENTITY_IN_AIR(uParam0->f_5))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(uParam0->f_5, 0, 0f, 0f, -10f, 0, 1, 1, 1);
				VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(uParam0->f_5, 2f);
			}
		}
	}
}

int func_298(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49)
{
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 1863.932f, 3234.403f, 42.03159f, 1907.052f, 3184.802f, 50.18943f, 25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 2249.526f, 3235.603f, 45.0114f, 2191.436f, 3247.169f, 51.67255f, 25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 2276.412f, 2998.594f, 42.96453f, 2299.795f, 3059.603f, 50.52016f, 25f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_299(int iParam0)
{
	if (func_240(iParam0))
	{
		bVar8 = false;
		iVar9 = 0;
		if (AI::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Local_54.f_64, ENTITY::GET_ENTITY_COORDS(iParam0, 1), &iVar0))
		{
			if (AI::WAYPOINT_RECORDING_GET_COORD(Local_54.f_64, iVar0, &Var1))
			{
				if (AI::WAYPOINT_RECORDING_GET_NUM_POINTS(Local_54.f_64, &iVar4))
				{
					if (iVar0 < iVar4)
					{
						bVar8 = AI::WAYPOINT_RECORDING_GET_COORD(Local_54.f_64, iVar0 + 1, &Var5);
					}
					else
					{
						bVar8 = AI::WAYPOINT_RECORDING_GET_COORD(Local_54.f_64, 0, &Var5);
					}
				}
			}
		}
		if (bVar8)
		{
			if ((func_232(Var1, Var5) - ENTITY::GET_ENTITY_HEADING(iParam0)) < 10f && (func_232(Var1, Var5) - ENTITY::GET_ENTITY_HEADING(iParam0)) > -10f)
			{
				iVar9 = 1;
			}
		}
		if (((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0) && iVar9) && !ENTITY::IS_ENTITY_IN_AIR(iParam0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Var1) < 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_300(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_301(var uParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20)
{
	if (Param1.f_4 == 0)
	{
		Var0 = { Local_54[4] };
	}
	else if (Param1.f_4 == 1)
	{
		Var0 = { Local_54[5] };
	}
	else
	{
		Var0 = { Local_54[(Param1.f_4 - 2)] };
	}
	if (!func_300(Var0))
	{
		if (!CAM::IS_SPHERE_VISIBLE(Var0, 3f) && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, 1), 3f))
		{
			if (GAMEPLAY::GET_GAME_TIMER() > uParam0->f_5.f_11 + 2000 && uParam0->f_5.f_11 != 0)
			{
				if (!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var0, 4f))
				{
					if (Param1.f_4 != 0)
					{
						uParam0->f_17.f_3 = Param1.f_3;
						uParam0->f_17.f_4 = (Param1.f_4 - 1);
					}
					else
					{
						uParam0->f_17.f_3 = (Param1.f_3 - 1);
						uParam0->f_17.f_4 = 5;
					}
					uParam0->f_17.f_2 = (Param1.f_2 - 1);
					func_23(uParam0->f_5, Var0, func_232(Var0, Local_54[uParam0->f_17.f_4]), 1, 1);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_5, 20f);
					AI::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(*uParam0, uParam0->f_5, Local_54.f_64, 786469, 0, 540, -1, uParam0->f_17.f_1, 1, 1073741824);
					iLocal_121 = GAMEPLAY::GET_GAME_TIMER() + 1000;
				}
			}
		}
		else
		{
			uParam0->f_5.f_11 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
}

int func_302(var uParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20)
{
	if (uParam0->f_17.f_2 < (Param1.f_2 - 1) && (uParam0->f_17.f_3 != (Local_54.f_65 - 1) || (uParam0->f_17.f_3 == (Local_54.f_65 - 1) && Param1.f_4 < 4)))
	{
		return 1;
	}
	return 0;
}

void func_303(var uParam0)
{
	AI::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Local_54.f_64, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, 1), &iVar0);
	AI::WAYPOINT_RECORDING_GET_COORD(Local_54.f_64, iVar0, &Var1);
	AI::WAYPOINT_RECORDING_GET_COORD(Local_54.f_64, iVar0 + 1, &Var4);
	if (!CAM::IS_SPHERE_VISIBLE(Var1, 3f))
	{
		if (!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var1, 5f) || func_234(uParam0->f_5, Var1, 1) < 5f)
		{
			func_23(uParam0->f_5, Var1, func_232(Var1, Var4), 0, 1);
			if (!PED::IS_PED_IN_VEHICLE(*uParam0, uParam0->f_5, 0))
			{
				PED::SET_PED_INTO_VEHICLE(*uParam0, uParam0->f_5, -1);
			}
			iLocal_121 = GAMEPLAY::GET_GAME_TIMER() + 1000;
		}
	}
}

int func_304(var uParam0)
{
	if ((ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_5) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_5, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_5, 1, 40000))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_5))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_5, 2, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_5, 3, 7000))
	{
		return 1;
	}
	if (uParam0->f_17.f_4 == uParam0->f_17.f_5)
	{
		if (GAMEPLAY::GET_GAME_TIMER() > (uParam0->f_5.f_10 + 45000))
		{
			return 1;
		}
	}
	else
	{
		uParam0->f_5.f_10 = GAMEPLAY::GET_GAME_TIMER();
		uParam0->f_17.f_5 = uParam0->f_17.f_4;
	}
	return 0;
}

float func_305(float fParam0, float fParam1, float fParam2, int iParam3)
{
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = SYSTEM::POW(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - SYSTEM::POW((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-SYSTEM::COS(func_306((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (SYSTEM::POW(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_305(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_305(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_306(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_307(struct<18> Param0, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49)
{
	switch (Param0.f_17.f_19)
	{
		case 0:
			fVar0 = 32f;
			break;
		
		case 1:
			fVar0 = 36f;
			break;
		
		case 2:
			fVar0 = 40f;
			break;
		
		case 3:
			fVar0 = 44f;
			break;
	}
	fVar0 = (fVar0 + IntToFloat((3 * Global_111638.f_25068)));
	return fVar0;
}

void func_308()
{
	if (Local_46.f_5 && !Local_46.f_6)
	{
		if (Local_1943.f_4 < 6)
		{
			Local_1943 = func_234(iLocal_2127, Local_54[Local_1943.f_4], 1);
		}
		switch (Local_1943.f_4)
		{
			case 5:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_54.f_19, Local_54.f_22, Local_54.f_25, 0, 1, 0))
				{
					Local_1943.f_3++;
					Local_1943.f_2++;
					if (Local_1943.f_3 < Local_54.f_65)
					{
						Local_1943.f_9 = (GAMEPLAY::GET_GAME_TIMER() - Local_1943.f_10);
						if (Local_1943.f_9 < Local_1943.f_8)
						{
							Local_1943.f_8 = Local_1943.f_9;
						}
						Local_1943.f_10 = GAMEPLAY::GET_GAME_TIMER();
						Local_1943.f_4 = 0;
						Local_1978 = 1;
					}
					else
					{
						Local_1943.f_12 = (GAMEPLAY::GET_GAME_TIMER() - Local_46.f_7);
						if (Local_1943.f_12 < Global_111638.f_25068.f_1 || Global_111638.f_25068.f_1 == 0)
						{
							Global_111638.f_25068.f_1 = Local_1943.f_12;
						}
						Local_1943.f_13 = 1;
						Local_46.f_6 = 1;
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
					func_243(&Local_1943);
				}
				break;
			
			default:
				if (Local_1943 < 20f)
				{
					Local_1943.f_2++;
					Local_1943.f_4++;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
					func_243(&Local_1943);
				}
				break;
		}
		if (!Local_46.f_6)
		{
			if (!iLocal_140)
			{
				if (GAMEPLAY::GET_GAME_TIMER() < Local_46.f_7 + 500)
				{
					if (func_299(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						if (CONTROLS::IS_CONTROL_PRESSED(0, 71))
						{
							if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
							{
								AUDIO::SET_VEHICLE_BOOST_ACTIVE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
							}
							iLocal_176 = GAMEPLAY::GET_GAME_TIMER() + 2000;
							GRAPHICS::_START_SCREEN_EFFECT("RaceTurbo", 0, 0);
							iLocal_140 = 1;
						}
					}
				}
			}
			else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_176 || !CONTROLS::IS_CONTROL_PRESSED(0, 71))
			{
				if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
				{
					AUDIO::SET_VEHICLE_BOOST_ACTIVE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
				}
				iLocal_140 = 0;
			}
			else
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 0f, 20f, 0f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			}
			func_331();
			func_330(&Local_1978, Local_1943);
			func_318((GAMEPLAY::GET_GAME_TIMER() - Local_46.f_7), 0, "", Local_1943.f_3 + 1, Local_54.f_65, "", Local_1943.f_6, 9, "", 0, 1, Local_1943.f_2 + 1, 30, "", 1, -1, -1, "", 6, Global_111638.f_25068.f_1, "CRACEBTIME", (GAMEPLAY::GET_GAME_TIMER() - Local_1943.f_10), "", 0, 1, -1, "", -1f, 1, 1, -1f, -1, 0, -1, -1, "", 1);
			if (CONTROLS::IS_CONTROL_PRESSED(0, 20))
			{
				if (!Global_1574184)
				{
					Global_1574184 = 1;
				}
			}
			else if (Global_1574184)
			{
				Global_1574184 = 0;
			}
			func_309(&Local_1943);
		}
	}
}

void func_309(var uParam0)
{
	iVar0 = uParam0->f_4 + 1;
	if (uParam0->f_4 == 5)
	{
		if (uParam0->f_3 + 1 == Local_54.f_65)
		{
			func_311(uParam0, 1, 1);
		}
		else
		{
			func_311(uParam0, 0, 1);
			func_310(uParam0, Local_54[0], 0);
		}
	}
	else
	{
		if (uParam0->f_2 < 1)
		{
			func_311(uParam0, 0, 0);
		}
		else
		{
			func_311(uParam0, 0, 1);
		}
		if (iVar0 == 5)
		{
			func_310(uParam0, Local_54[iVar0], 1);
		}
		else
		{
			func_310(uParam0, Local_54[iVar0], 0);
		}
	}
}

void func_310(var uParam0, struct<3> Param1, bool bParam4)
{
	if (!UI::DOES_BLIP_EXIST(uParam0->f_15))
	{
		uParam0->f_15 = UI::ADD_BLIP_FOR_COORD(Param1);
		UI::_0x75A16C3DA34F1245(uParam0->f_15, 0);
		if (!bParam4)
		{
			UI::SET_BLIP_COLOUR(uParam0->f_15, 5);
			UI::SET_BLIP_SCALE(uParam0->f_15, 0.7f);
		}
		else if (uParam0->f_3 == Local_54.f_65)
		{
			UI::SET_BLIP_SPRITE(uParam0->f_15, 38);
			UI::SET_BLIP_SCALE(uParam0->f_15, 1.2f);
		}
		UI::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_15, "BLIP_CPOINT");
	}
}

void func_311(var uParam0, bool bParam1, bool bParam2)
{
	iVar9 = func_317(uParam0->f_4);
	UI::GET_HUD_COLOUR(12, &uVar0, &uVar1, &uVar2, &uVar3);
	UI::GET_HUD_COLOUR(134, &uVar4, &uVar5, &uVar6, &uVar7);
	uVar3 = func_316(uParam0->f_4);
	if (UI::DOES_BLIP_EXIST(uParam0->f_14))
	{
		if (uParam0->f_16 != 0)
		{
			GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_16, uVar0, uVar1, uVar2, uVar3);
			GRAPHICS::_SET_CHECKPOINT_ICON_RGBA(uParam0->f_16, uVar4, uVar5, uVar6, uVar3);
		}
	}
	else
	{
		fVar19 = (8.5f * 1.333f);
		fVar20 = 6f;
		if (uParam0->f_4 == 5)
		{
			Var13 = { Local_54[0] };
		}
		else
		{
			Var13 = { Local_54[uParam0->f_4 + 1] };
		}
		if (uParam0->f_4 == 0)
		{
			iVar8 = 5;
		}
		else
		{
			iVar8 = (uParam0->f_4 - 1);
		}
		Var10 = { Local_54[uParam0->f_4] };
		Var16 = { Local_54[iVar8] };
		Var10.z = (Var10.z - 1f);
		Var16.z = (Var16.z - 1f);
		if (iVar8 == 5)
		{
			Var16.z = (Var16.z - 2f);
		}
		if (uParam0->f_4 == 5)
		{
			Var10.z = (Var10.z - 2f);
		}
		uParam0->f_14 = UI::ADD_BLIP_FOR_COORD(Var10);
		UI::_0x75A16C3DA34F1245(uParam0->f_14, 0);
		if (!bParam1)
		{
			UI::SET_BLIP_COLOUR(uParam0->f_14, 5);
			UI::SET_BLIP_SCALE(uParam0->f_14, 1.2f);
			UI::SET_BLIP_PRIORITY(uParam0->f_14, 9);
			uParam0->f_16 = GRAPHICS::CREATE_CHECKPOINT(iVar9, Var10 + Vector(fVar20, 0f, 0f), Var13, fVar19, uVar0, uVar1, uVar2, uVar3, 0);
			GRAPHICS::_SET_CHECKPOINT_ICON_RGBA(uParam0->f_16, uVar4, uVar5, uVar6, uVar3);
			func_312(uParam0->f_16, Var10);
		}
		else
		{
			UI::SET_BLIP_SPRITE(uParam0->f_14, 38);
			UI::SET_BLIP_SCALE(uParam0->f_14, 1.2f);
			UI::SET_BLIP_PRIORITY(uParam0->f_14, 9);
			uParam0->f_16 = GRAPHICS::CREATE_CHECKPOINT(10, Var10 + Vector(fVar20, 0f, 0f), Var13, fVar19, uVar0, uVar1, uVar2, uVar3, 0);
			GRAPHICS::_SET_CHECKPOINT_ICON_RGBA(uParam0->f_16, uVar4, uVar5, uVar6, uVar3);
			func_312(uParam0->f_16, Var10);
		}
		if (bParam2)
		{
			iVar9 = func_317(iVar8);
			UI::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &(uParam0->f_18));
			uParam0->f_18 = 180;
			if (uParam0->f_17 != 0)
			{
				GRAPHICS::DELETE_CHECKPOINT(uParam0->f_17);
			}
			Var16 = { Var16 };
			uParam0->f_17 = GRAPHICS::CREATE_CHECKPOINT(iVar9, Var16 + Vector(fVar20, 0f, 0f), Var10, fVar19, uVar0, uVar1, uVar2, uParam0->f_18, 0);
			func_312(uParam0->f_17, Var16);
		}
		GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam0->f_16, 9.5f, 9.5f, 30f);
		GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam0->f_17, 9.5f, 9.5f, 30f);
		UI::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_14, "BLIP_CPOINT");
	}
	if (uParam0->f_17 != 0)
	{
		uParam0->f_18 = (uParam0->f_18 - 10);
		if (uParam0->f_18 > 0)
		{
			UI::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_17, uVar0, uVar1, uVar2, uParam0->f_18);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(uParam0->f_17);
		}
	}
}

void func_312(var uParam0, struct<3> Param1)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		Var1[iVar0] = { Param1 + func_315(iVar0) };
		GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var1[iVar0], &fVar26, 0, 0);
		if (fVar26 < (Param1.z - 2f) || fVar26 > (Param1.z + 2f))
		{
			Var1[iVar0].f_2 = Param1.z;
		}
		else
		{
			Var1[iVar0].f_2 = fVar26;
		}
		iVar0++;
	}
	Var27 = { func_313(&Var1) };
	GRAPHICS::_0xF51D36185993515D(uParam0, Param1 - Vector(0.3f, 0f, 0f), Var27);
}

Vector3 func_313(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var1 = { *uParam0[iVar0] };
		Var4 = { *(uParam0[(iVar0 + 1 % *uParam0)]) };
		Var7.x = (Var7.x + ((Var1.y - Var4.y) * (Var1.z + Var4.z)));
		Var7.y = (Var7.y + ((Var1.z - Var4.z) * (Var1.x + Var4.x)));
		Var7.z = (Var7.z + ((Var1.x - Var4.x) * (Var1.y + Var4.y)));
		iVar0++;
	}
	return func_314(Var7);
}

Vector3 func_314(struct<3> Param0)
{
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.y = 0f;
		Param0.z = 0f;
	}
	return Param0;
}

Vector3 func_315(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 1f;
		
		case 1:
			return (7.5f / 2f), 0f, 1f;
		
		case 2:
			return (-7.5f / 2f), 0f, 1f;
		
		case 3:
			return 0f, (7.5f / 2f), 1f;
		
		case 4:
			return 0f, (-7.5f / 2f), 1f;
		
		case 5:
			return (7.5f / 2f), (7.5f / 2f), 1f;
		
		case 6:
			return (-7.5f / 2f), (-7.5f / 2f), 1f;
		
		case 7:
			return (7.5f / 2f), (-7.5f / 2f), 1f;
		
		case 8:
			return (-7.5f / 2f), (7.5f / 2f), 1f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_316(int iParam0)
{
	iVar1 = 240;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		fVar0 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Local_54[iParam0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
		if (fVar0 > 100f)
		{
			iVar1 = 240;
		}
		else
		{
			iVar1 = SYSTEM::ROUND((fVar0 * 2.4f));
		}
	}
	return iVar1;
}

int func_317(int iParam0)
{
	Var0 = { Local_54[iParam0] };
	if (iParam0 + 1 == 6)
	{
		Var3 = { Local_54[0] };
	}
	else
	{
		Var3 = { Local_54[iParam0 + 1] };
	}
	if ((iParam0 - 1) >= 0)
	{
		Var6 = { Local_54[(iParam0 - 1)] };
	}
	Var9 = { Var6 - Var0 };
	Var12 = { Var3 - Var0 };
	fVar15 = GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(Var9.x, Var9.y, Var12.x, Var12.y);
	if (fVar15 > 180f)
	{
		fVar15 = (360f - fVar15);
	}
	if (fVar15 < fLocal_30)
	{
		return 8;
	}
	else if (fVar15 < fLocal_31)
	{
		return 7;
	}
	else if (fVar15 < fLocal_32)
	{
		return 6;
	}
	else
	{
		return 6;
	}
	return 6;
}

void func_318(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, char* sParam17, int iParam18, int iParam19, char* sParam20, int iParam21, char* sParam22, int iParam23, bool bParam24, int iParam25, char* sParam26, float fParam27, int iParam28, int iParam29, float fParam30, int iParam31, bool bParam32, int iParam33, int iParam34, char* sParam35, bool bParam36)
{
	if (bParam24)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam34 != -1)
	{
		func_113(iParam34, "TIMER_CHALLTIME", iParam9, iVar0, iParam25, 0, 10, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	func_329();
	if (fParam27 > -1f)
	{
		func_326(0, "", iParam25, iParam28, 10, 0, sParam26, 1, fParam27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam15 > -1)
	{
		sVar1 = sParam17;
		if (func_325(sVar1))
		{
			sVar1 = "TIM_DAMAGE";
		}
		func_230(iParam15, iParam16, sVar1, iParam18, iParam25, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1);
	}
	if (!bParam32 || func_324())
	{
		if (iParam6 > -1 && iParam7 > 0)
		{
			sVar2 = sParam8;
			if (func_325(sVar2))
			{
				sVar2 = "TIM_POSIT";
			}
			func_323(iParam6, iParam7, sVar2, iParam10, iParam25, 7, 0, 0, 0, iParam10, 0);
		}
	}
	if (iParam3 > -1)
	{
		sVar3 = sParam5;
		if (func_325(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam3 = iParam3;
		iParam4 = iParam4;
		if (Global_1574184)
		{
			if (func_322())
			{
				func_321(iParam3, iParam4, sVar3, iParam25, 1, 8, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
			}
		}
	}
	if (iParam11 > -1 && iParam12 > -1)
	{
		sVar4 = sParam13;
		if (func_325(sVar4))
		{
			sVar4 = "TIM_CHECKPOIN";
		}
		iParam14 = iParam14;
		if (Global_1574184)
		{
			func_323(iParam11, iParam12, sVar4, iParam14, iParam25, 7, 0, 0, 0, 1, 0);
		}
	}
	if (fParam30 > -1f)
	{
		sVar5 = "TIM_DISTANCE";
		sVar6 = "FMMC_LENGTHM";
		func_326(0, sVar5, -1, 1, 7, 0, sVar6, 1, fParam30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam19 > -1)
	{
		sVar7 = sParam20;
		if (func_325(sVar7))
		{
			sVar7 = "TIMER_BESLAP";
		}
	}
	if ((((Global_4456448.f_75705 != 1 && Global_4456448.f_75705 != 3) && Global_4456448.f_75705 != 5) && Global_4456448.f_75705 != 7) && Global_4456448.f_75705 != 19)
	{
		if (iParam21 > -1)
		{
			if (!func_145(PLAYER::PLAYER_ID()))
			{
				sVar8 = sParam22;
				if (func_325(sVar8))
				{
					sVar8 = "TIMER_CURLAP";
				}
				func_113(iParam21, sVar8, 0, 1, iParam25, iParam23, 6, 0, iParam29, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
	if (func_325(sVar9))
	{
		sVar9 = func_320(iParam1);
	}
	if (!bParam36)
	{
		if ((bParam32 || Global_1574184) || func_319() == 2)
		{
			if (bParam32)
			{
				if (Global_1574184 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam35))
				{
					func_113(iParam31, sParam35, iParam9, 1, iParam25, 0, 5, 1, 1, 0, 0, iParam31 <= 0, 0, 0, 0, 0, 0, -1);
				}
				else if (iParam31 <= 0)
				{
					func_113(iParam31, sVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_113(iParam31, sVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			else if (func_319() == 2 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam35))
			{
				func_113(iParam31, sParam35, iParam9, 1, iParam25, 0, 5, 1, 1, 0, 0, iParam31 <= 0, 0, 0, 0, 0, 0, -1);
			}
			else if (iParam31 <= 0)
			{
				func_113(iParam31, sVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_113(iParam31, sVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
	else if (Global_1574184 || func_319() == 2)
	{
		if (iParam19 <= 0)
		{
			func_113(iParam19, sParam20, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, -1);
		}
		else
		{
			func_113(iParam19, sParam20, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
	sVar10 = sParam2;
	if (func_325(sVar10))
	{
		sVar10 = "TIMER_TIME_RCE";
	}
	if (iParam0 > -1)
	{
		func_113(iParam0, sVar10, iParam9, iVar0, iParam25, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if (func_325(sVar11))
	{
		sVar11 = "TIMER_CHALLTIME";
	}
	iParam33 = iParam33;
}

int func_319()
{
	return Global_1377170.f_68;
}

char* func_320(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TIMER_WORLDTIME";
			break;
		
		case 1:
			return "FRIEND_WORLDTIME";
			break;
		
		case 2:
			return "CREW_WORLDTIME";
			break;
		
		case 3:
			return "PERS_WORLDTIME";
			break;
	}
	return "";
}

void func_321(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_115(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_114(4, iVar0);
		Global_1378678.f_3272[iVar0] = iParam0;
		Global_1378678.f_3272.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1378678.f_3272.f_11[iVar0]), sParam2, 64);
		Global_1378678.f_3272.f_183[iVar0] = iParam3;
		Global_1378678.f_3272.f_216[iVar0] = iParam5;
		Global_1378678.f_3272.f_194[iVar0] = iParam4;
		Global_1378678.f_3272.f_227[iVar0] = iParam6;
		Global_1378678.f_3272.f_270[iVar0] = iParam7;
		Global_1378678.f_3272.f_281[iVar0] = iParam8;
		Global_1378678.f_3272.f_292[iVar0] = iParam9;
		Global_1378678.f_3272.f_303[iVar0] = iParam10;
		Global_1378678.f_3272.f_314[iVar0] = iParam11;
		Global_1378678.f_3272.f_325[iVar0] = iParam13;
		Global_1378678.f_3272.f_336[iVar0] = iParam14;
		Global_1378678.f_3272.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && GAMEPLAY::IS_PC_VERSION()) && iParam12)
		{
			Global_1378678.f_1130 = 1;
		}
	}
}

int func_322()
{
	return 1;
	return 0;
}

void func_323(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_115(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_114(5, iVar0);
		Global_1378678.f_3630[iVar0] = iParam0;
		Global_1378678.f_3630.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1378678.f_3630.f_11[iVar0]), sParam2, 64);
		Global_1378678.f_3630.f_194[iVar0] = uParam3;
		Global_1378678.f_3630.f_183[iVar0] = iParam4;
		Global_1378678.f_3630.f_216[iVar0] = iParam5;
		Global_1378678.f_3630.f_227[iVar0] = iParam6;
		Global_1378678.f_3630.f_270[iVar0] = iParam7;
		Global_1378678.f_3630.f_281[iVar0] = iParam8;
		Global_1378678.f_3630.f_292[iVar0] = iParam9;
		Global_1378678.f_3630.f_303[iVar0] = iParam10;
	}
}

bool func_324()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_142, 2);
}

int func_325(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "") || GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_326(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_115(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_114(6, iVar0);
		Global_1378678.f_3944[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_3944.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_3944.f_183[iVar0] = iParam3;
		Global_1378678.f_3944.f_172[iVar0] = iParam2;
		Global_1378678.f_3944.f_260[iVar0] = iParam4;
		Global_1378678.f_3944.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378678.f_3944.f_282[iVar0]), sParam6, 64);
		Global_1378678.f_3944.f_443[iVar0] = iParam7;
		Global_1378678.f_3944.f_454[iVar0] = fParam8;
		Global_1378678.f_3944.f_497[iVar0] = iParam9;
		Global_1378678.f_3944.f_508[iVar0] = iParam10;
		Global_1378678.f_3944.f_205[iVar0] = iParam11;
		Global_1378678.f_3944.f_216[iVar0] = iParam12;
		Global_1378678.f_3944.f_227[iVar0] = iParam13;
		Global_1378678.f_3944.f_238[iVar0] = iParam14;
		Global_1378678.f_3944.f_249[iVar0] = iParam15;
		Global_1378678.f_3944.f_519[iVar0] = iParam16;
		Global_1378678.f_3944.f_530[iVar0] = iParam17;
		Global_1378678.f_3944.f_541[iVar0] = iParam18;
		Global_1378678.f_3944.f_552[iVar0] = iParam19;
		Global_1378678.f_3944.f_563[iVar0] = iParam20;
		Global_1378678.f_3944.f_574[iVar0] = iParam21;
		Global_1378678.f_3944.f_585[iVar0] = iParam22;
		Global_1378678.f_3944.f_596[iVar0] = iParam23;
		Global_1378678.f_3944.f_607[iVar0] = iParam24;
		Global_1378678.f_3944.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_328())
		{
			Global_1378678.f_1130 = 1;
		}
		if (GAMEPLAY::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1378678.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1378678.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378678.f_1130 = 1;
			}
			if (func_327())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

int func_327()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_328()
{
	if (((UNK::_GET_CURRENT_LANGUAGE_ID() == 8 || UNK::_GET_CURRENT_LANGUAGE_ID() == 9) || UNK::_GET_CURRENT_LANGUAGE_ID() == 10) || UNK::_GET_CURRENT_LANGUAGE_ID() == 12)
	{
		return 1;
	}
	return 0;
}

void func_329()
{
	if ((Global_1312323 == 1 || Global_1312330 == 1) || Global_1312319.f_3 == 1)
	{
		if (Global_1312323 == 1)
		{
			sVar0 = "HUD_SPIKES";
			iVar1 = 1;
		}
		else if (Global_1312330 == 1)
		{
			switch (Global_1312330.f_1)
			{
				case 0:
					iVar1 = 2;
					sVar0 = "HUD_ROCKET";
					break;
				
				case 1:
					iVar1 = 3;
					sVar0 = "HUD_ROCKET_H";
					break;
				
				case 2:
					iVar1 = 2;
					sVar0 = "HUD_ROCKET_NH";
					break;
			}
		}
		else if (Global_1312319.f_3 == 1)
		{
			sVar0 = "HUD_BOOSTS";
			iVar1 = 4;
		}
		func_326(1, sVar0, -1, 1, 5, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, iVar1, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	else if (Global_1312346 == 1)
	{
		sVar0 = "HUD_VEH_GUN";
		iVar1 = 9;
		func_326(Global_1312346.f_1, sVar0, -1, 1, 5, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, iVar1, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
}

void func_330(int iParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20)
{
	switch (*iParam0)
	{
		case 1:
			iParam0->f_2 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_2))
			{
				*iParam0 = 2;
			}
			break;
		
		case 2:
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0->f_2, "SHOW_SHARD_MIDSIZED_MESSAGE");
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("BM_LAP_STR");
			UI::_SET_NOTIFACTION_COLOR_NEXT(1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("BM_LAP");
			UI::_SET_NOTIFACTION_COLOR_NEXT(1);
			UI::ADD_TEXT_COMPONENT_INTEGER(Param1.f_3 + 1);
			UI::_SET_NOTIFACTION_COLOR_NEXT(1);
			UI::ADD_TEXT_COMPONENT_INTEGER(Local_54.f_65);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
			iParam0->f_1 = GAMEPLAY::GET_GAME_TIMER() + 3000;
			*iParam0 = 3;
			break;
		
		case 3:
			if (GAMEPLAY::GET_GAME_TIMER() < (iParam0->f_1 - 500))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_2))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0->f_2, 255, 255, 255, 255, 0);
					GRAPHICS::_SET_2D_LAYER(4);
				}
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0->f_2, "SHARD_ANIM_OUT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0.33f);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				*iParam0 = 4;
			}
			break;
		
		case 4:
			if (GAMEPLAY::GET_GAME_TIMER() < iParam0->f_1)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_2))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0->f_2, 255, 255, 255, 255, 0);
					GRAPHICS::_SET_2D_LAYER(4);
				}
			}
			else
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_2))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam0->f_2));
				}
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam0->f_2));
				*iParam0 = 0;
			}
			break;
	}
}

void func_331()
{
	Global_1378678.f_1130 = 1;
}

void func_332()
{
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1688.299f, 3336.851f, 24.68442f, 2475.163f, 2991.082f, 120.0549f, 480f, 0, 1, 0))
	{
		func_242(3);
		sLocal_180 = "CRACEFAIL1";
	}
}

void func_333()
{
	iLocal_173 = 0;
	iLocal_174 = 0;
	iLocal_179 = 0;
	iLocal_176 = 0;
	iLocal_140 = 0;
	iLocal_178 = 0;
	func_341(&Local_54);
	func_340(&Local_1748);
	func_339(&Local_196, &Local_1748);
	func_338(&Local_597);
	func_337(&Local_1845);
	func_336(&Local_1943);
	func_335(&Local_46);
	func_334();
}

void func_334()
{
	Local_1978 = 0;
	Local_1978.f_1 = 0;
}

void func_335(var uParam0)
{
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
}

void func_336(var uParam0)
{
	*uParam0 = 0f;
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	if (Global_111638.f_25068 != 4)
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == 0)
		{
			uParam0->f_19 = 1;
		}
		else if (iVar0 == 1)
		{
			uParam0->f_19 = 0;
		}
		else if (iVar0 == 2)
		{
			uParam0->f_19 = 2;
		}
	}
	else
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6);
		if (iVar0 == 0)
		{
			uParam0->f_19 = 1;
		}
		else if (iVar0 == 1 || iVar0 == 2)
		{
			uParam0->f_19 = 0;
		}
		else if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			uParam0->f_19 = 2;
		}
	}
}

void func_337(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iParam0[iVar0]->f_9 = 0;
		iParam0[iVar0]->f_10 = 0;
		iVar0++;
	}
}

void func_338(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 23)
	{
		iParam0[iVar0]->f_41 = 0;
		iParam0[iVar0]->f_42 = 0;
		iParam0[iVar0]->f_44 = 0;
		iParam0[iVar0]->f_45 = 0;
		iParam0[iVar0]->f_43 = 0;
		iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (iVar1 == 0)
		{
			iParam0[iVar0]->f_3 = 1446741360;
		}
		else if (iVar1 == 1)
		{
			iParam0[iVar0]->f_3 = -1859912896;
		}
		else if (iVar1 == 2)
		{
			iParam0[iVar0]->f_3 = -929103484;
		}
		else if (iVar1 == 3)
		{
			iParam0[iVar0]->f_3 = 2064532783;
		}
		StringCopy(&(iParam0[iVar0]->f_46), "Ambient Ped ", 16);
		StringIntConCat(&(iParam0[iVar0]->f_46), iVar0, 16);
		switch (iVar0)
		{
			case 0:
				iParam0[iVar0]->f_37 = { 1977.843f, 3129.412f, 45.9792f };
				iParam0[iVar0]->f_40 = 122.9084f;
				break;
			
			case 1:
				iParam0[iVar0]->f_37 = { 1969.595f, 3115.701f, 45.8988f };
				iParam0[iVar0]->f_40 = -32.152f;
				break;
			
			case 2:
				iParam0[iVar0]->f_37 = { 1986.622f, 3123.347f, 46.0496f };
				iParam0[iVar0]->f_40 = 143.293f;
				break;
			
			case 3:
				iParam0[iVar0]->f_37 = { 1968.123f, 3117.722f, 45.9001f };
				iParam0[iVar0]->f_40 = 182.6841f;
				break;
			
			case 4:
				iParam0[iVar0]->f_37 = { 1866.502f, 3220.542f, 44.2959f };
				iParam0[iVar0]->f_40 = 283.4628f;
				break;
			
			case 5:
				iParam0[iVar0]->f_37 = { 1866.734f, 3226.219f, 44.2235f };
				iParam0[iVar0]->f_40 = 253.3484f;
				break;
			
			case 6:
				iParam0[iVar0]->f_37 = { 1932.064f, 3262.209f, 44.7989f };
				iParam0[iVar0]->f_40 = 184.9414f;
				break;
			
			case 7:
				iParam0[iVar0]->f_37 = { 1939.296f, 3269.148f, 45.2262f };
				iParam0[iVar0]->f_40 = 196.2922f;
				break;
			
			case 8:
				iParam0[iVar0]->f_37 = { 1936.04f, 3264.806f, 44.8089f };
				iParam0[iVar0]->f_40 = 179.3959f;
				break;
			
			case 9:
				iParam0[iVar0]->f_37 = { 1938.14f, 3266.329f, 44.8089f };
				iParam0[iVar0]->f_40 = 208.0957f;
				break;
			
			case 10:
				iParam0[iVar0]->f_37 = { 1969.938f, 3262.41f, 44.5866f };
				iParam0[iVar0]->f_40 = 135.3289f;
				break;
			
			case 11:
				iParam0[iVar0]->f_37 = { 2129.336f, 3274.596f, 45.093f };
				iParam0[iVar0]->f_40 = 158.6073f;
				break;
			
			case 12:
				iParam0[iVar0]->f_37 = { 2131.781f, 3273.956f, 45.093f };
				iParam0[iVar0]->f_40 = 144.4747f;
				break;
			
			case 13:
				iParam0[iVar0]->f_37 = { 2135.285f, 3273.007f, 45.1832f };
				iParam0[iVar0]->f_40 = 164.2929f;
				break;
			
			case 14:
				iParam0[iVar0]->f_37 = { 2135.561f, 3274.741f, 45.6104f };
				iParam0[iVar0]->f_40 = 166.3804f;
				break;
			
			case 15:
				iParam0[iVar0]->f_37 = { 2243.927f, 3247.596f, 47.1535f };
				iParam0[iVar0]->f_40 = 113.5077f;
				break;
			
			case 16:
				iParam0[iVar0]->f_37 = { 2242.918f, 3248.862f, 47.1472f };
				iParam0[iVar0]->f_40 = 94.3813f;
				break;
			
			case 17:
				iParam0[iVar0]->f_37 = { 2276.538f, 2995.181f, 44.9018f };
				iParam0[iVar0]->f_40 = 343.2186f;
				break;
			
			case 18:
				iParam0[iVar0]->f_37 = { 2272.339f, 2995.217f, 44.7997f };
				iParam0[iVar0]->f_40 = 354.5168f;
				break;
			
			case 19:
				iParam0[iVar0]->f_37 = { 2008.773f, 3110.642f, 45.9644f };
				iParam0[iVar0]->f_40 = 212.1216f;
				break;
			
			case 20:
				iParam0[iVar0]->f_37 = { 1993.863f, 3099.198f, 45.9635f };
				iParam0[iVar0]->f_40 = 336.9819f;
				break;
			
			case 21:
				iParam0[iVar0]->f_37 = { 1991.992f, 3100.387f, 45.9819f };
				iParam0[iVar0]->f_40 = 332.381f;
				break;
			
			case 22:
				iParam0[iVar0]->f_37 = { 1987.643f, 3102.67f, 46.0614f };
				iParam0[iVar0]->f_40 = 327.4696f;
				break;
		}
		iVar0++;
	}
}

void func_339(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iParam0[iVar0]->f_41 = 0;
		iParam0[iVar0]->f_42 = 0;
		iParam0[iVar0]->f_44 = 0;
		iParam0[iVar0]->f_45 = 0;
		iParam0[iVar0]->f_43 = 1;
		iParam0[iVar0]->f_4 = iLocal_120;
		iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 2);
		if (iVar1 == 0)
		{
			iParam0[iVar0]->f_3 = 1694362237;
		}
		else if (iVar1 == 1)
		{
			iParam0[iVar0]->f_3 = 2007797722;
		}
		iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6);
		if (iVar1 == 0)
		{
			iParam0[iVar0]->f_17.f_19 = 1;
		}
		else if (iVar1 == 1 || iVar1 == 2)
		{
			iParam0[iVar0]->f_17.f_19 = 0;
		}
		else if ((iVar1 == 3 || iVar1 == 4) || iVar1 == 5)
		{
			iParam0[iVar0]->f_17.f_19 = 2;
		}
		StringCopy(&(iParam0[iVar0]->f_46), "Racer ", 16);
		StringIntConCat(&(iParam0[iVar0]->f_46), iVar0, 16);
		iParam0[iVar0]->f_5 = { *iParam1[iVar0] };
		iParam0[iVar0]->f_43 = 0;
		func_336(&(iParam0[iVar0]->f_17));
		iParam0[iVar0]->f_17.f_11 = iVar0;
		iParam0[iVar0]->f_37 = { Local_54.f_26[iVar0] };
		iParam0[iVar0]->f_40 = Local_54.f_54[iVar0];
		if (iVar0 == 1)
		{
			iParam0[iVar0]->f_17.f_19 = 3;
			iParam0[iVar0]->f_3 = 2007797722;
		}
		iVar0++;
	}
}

void func_340(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iParam0[iVar0]->f_7 = 0;
		iParam0[iVar0]->f_8 = 0;
		switch (Global_111638.f_25068)
		{
			case 0:
				switch (iVar0)
				{
					case 0:
						iParam0[iVar0]->f_2 = -682211828;
						break;
					
					case 1:
						iParam0[iVar0]->f_2 = func_136();
						break;
					
					case 2:
						iParam0[iVar0]->f_2 = -2124201592;
						break;
					
					case 3:
						iParam0[iVar0]->f_2 = 464687292;
						break;
					
					case 4:
						iParam0[iVar0]->f_2 = -1205801634;
						break;
					
					case 5:
						iParam0[iVar0]->f_2 = -825837129;
						break;
					
					case 6:
						iParam0[iVar0]->f_2 = 1373123368;
						break;
					
					case 7:
						iParam0[iVar0]->f_2 = 1830407356;
						break;
				}
				break;
			
			case 1:
				switch (iVar0)
				{
					case 0:
						iParam0[iVar0]->f_2 = 80636076;
						break;
					
					case 1:
						iParam0[iVar0]->f_2 = func_136();
						break;
					
					case 2:
						iParam0[iVar0]->f_2 = -1685021548;
						break;
					
					case 3:
						iParam0[iVar0]->f_2 = -304802106;
						break;
					
					case 4:
						iParam0[iVar0]->f_2 = -227741703;
						break;
					
					case 5:
						iParam0[iVar0]->f_2 = 1011753235;
						break;
					
					case 6:
						iParam0[iVar0]->f_2 = 723973206;
						break;
					
					case 7:
						iParam0[iVar0]->f_2 = -2095439403;
						break;
				}
				break;
			
			case 2:
				switch (iVar0)
				{
					case 0:
						iParam0[iVar0]->f_2 = 1078682497;
						break;
					
					case 1:
						iParam0[iVar0]->f_2 = func_136();
						break;
					
					case 2:
						iParam0[iVar0]->f_2 = 2016857647;
						break;
					
					case 3:
						iParam0[iVar0]->f_2 = -1934452204;
						break;
					
					case 4:
						iParam0[iVar0]->f_2 = 970598228;
						break;
					
					case 5:
						iParam0[iVar0]->f_2 = -2095439403;
						break;
					
					case 6:
						iParam0[iVar0]->f_2 = -825837129;
						break;
					
					case 7:
						iParam0[iVar0]->f_2 = -1685021548;
						break;
				}
				break;
			
			case 3:
				switch (iVar0)
				{
					case 0:
						iParam0[iVar0]->f_2 = 349315417;
						break;
					
					case 1:
						iParam0[iVar0]->f_2 = func_136();
						break;
					
					case 2:
						iParam0[iVar0]->f_2 = 349315417;
						break;
					
					case 3:
						iParam0[iVar0]->f_2 = -915704871;
						break;
					
					case 4:
						iParam0[iVar0]->f_2 = -915704871;
						break;
					
					case 5:
						iParam0[iVar0]->f_2 = -401643538;
						break;
					
					case 6:
						iParam0[iVar0]->f_2 = -401643538;
						break;
					
					case 7:
						iParam0[iVar0]->f_2 = -915704871;
						break;
				}
				break;
			
			case 4:
				switch (iVar0)
				{
					case 0:
						iParam0[iVar0]->f_2 = 349315417;
						break;
					
					case 1:
						iParam0[iVar0]->f_2 = -915704871;
						break;
					
					case 2:
						iParam0[iVar0]->f_2 = -401643538;
						break;
					
					case 3:
						iParam0[iVar0]->f_2 = 237764926;
						break;
					
					case 4:
						iParam0[iVar0]->f_2 = 349315417;
						break;
					
					case 5:
						iParam0[iVar0]->f_2 = 237764926;
						break;
					
					case 6:
						iParam0[iVar0]->f_2 = -915704871;
						break;
					
					case 7:
						iParam0[iVar0]->f_2 = 237764926;
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_341(var uParam0)
{
	uParam0->f_64 = "CountryTrack2Backwards";
	uParam0->f_65 = 5;
	uParam0->f_19 = { 1952.027f, 3120.291f, 45.15582f };
	uParam0->f_22 = { 1967.819f, 3145.207f, 50.28004f };
	uParam0->f_25 = 20f;
	*uParam0[0] = { 1874f, 3219.9f, 45.4f };
	*uParam0[1] = { 2003.4f, 3300.5f, 45.7f };
	*uParam0[2] = { 2238.1f, 3239.8f, 48.1f };
	*uParam0[3] = { 2280.9f, 3007f, 46f };
	*uParam0[4] = { 2144.7f, 3034.1f, 45.4f };
	*uParam0[5] = { 1968.9f, 3127.1f, 46.9f };
	uParam0->f_26[0] = { 1969.251f, 3122.565f, 46.0076f };
	uParam0->f_54[0] = 53.7102f;
	uParam0->f_26[1] = { 1971f, 3125.064f, 46.036f };
	uParam0->f_54[1] = 52.6994f;
	uParam0->f_26[2] = { 1972.986f, 3128.541f, 46.0069f };
	uParam0->f_54[2] = 54.9611f;
	uParam0->f_26[3] = { 1975.501f, 3117.38f, 46.0271f };
	uParam0->f_54[3] = 56.1329f;
	uParam0->f_26[4] = { 1977.609f, 3120.305f, 46.0576f };
	uParam0->f_54[4] = 52.8064f;
	uParam0->f_26[5] = { 1979.872f, 3123.513f, 46.0285f };
	uParam0->f_54[5] = 54.0832f;
	uParam0->f_26[6] = { 1981.754f, 3112.13f, 46.0491f };
	uParam0->f_54[6] = 47.3411f;
	uParam0->f_26[7] = { 1984.234f, 3115.164f, 46.0766f };
	uParam0->f_54[7] = 58.6868f;
	uParam0->f_26[8] = { 1986.348f, 3118.184f, 46.0478f };
	uParam0->f_54[8] = 55.8988f;
}

void func_342()
{
	if (func_351())
	{
		func_233(500);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	UI::DISPLAY_RADAR(true);
	UI::DISPLAY_HUD(true);
	GAMEPLAY::SET_TIME_SCALE(1f);
	UI::CLEAR_PRINTS();
	UI::CLEAR_HELP(1);
	func_350();
	func_346(&uLocal_1857, 1, 0);
	iLocal_1975 = 0;
	iLocal_2127 = PLAYER::PLAYER_PED_ID();
	func_345(sLocal_139, 11, 0);
	func_344(Local_54[0], 1000f);
	PED::ADD_SCENARIO_BLOCKING_AREA(2270.041f, 3007f, 44.1942f, 2276.215f, 3010.543f, 48.0713f, 0, 1, 1, 1);
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 100f, 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 100f, 0);
	func_343(1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(2565.207f, 2896.662f, 29.9408f, 1654.53f, 3420.822f, 63.94006f, 470f, 0, 0, 1);
	AI::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BIKER", 0);
	AI::SET_SCENARIO_TYPE_ENABLED("DRIVE", 0);
	AI::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
	AI::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
	STREAMING::SET_PED_POPULATION_BUDGET(0);
	STREAMING::SET_REDUCE_PED_MODEL_BUDGET(1);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(1);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
	PED::SET_CREATE_RANDOM_COPS(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	VEHICLE::_0xE6C0C80B8C867537(1);
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(0);
	}
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
}

void func_343(int iParam0)
{
	Global_75441.f_138 = iParam0;
}

var func_344(struct<3> Param0, float fParam3)
{
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return PED::ADD_SCENARIO_BLOCKING_AREA(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}

void func_345(char* sParam0, int iParam1, bool bParam2)
{
	UI::_REQUEST_ADDITIONAL_TEXT_2(sParam0, iParam1);
	if (bParam2)
	{
		while (!UI::HAS_ADDITIONAL_TEXT_LOADED(iParam1))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_346(var uParam0, bool bParam1, bool bParam2)
{
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_349(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UI::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
		{
			UI::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
		}
		func_348(iVar0, uParam0);
		func_347(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			GAMEPLAY::CLEAR_BIT(&(uParam0->f_13), iVar0);
			GAMEPLAY::CLEAR_BIT(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (UI::DOES_BLIP_EXIST(*uParam0))
	{
		UI::REMOVE_BLIP(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[iVar0], 1);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, 1);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, 0);
			}
			PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_134()) && uParam0->f_17[iVar0] != PLAYER::PLAYER_PED_ID())
				{
					PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(uParam0->f_13, 29))
			{
				PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

void func_347(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_13), 17);
			break;
		
		case 1:
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_13), 18);
			break;
		
		case 2:
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_13), 19);
			break;
	}
}

void func_348(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_13), 14);
			break;
		
		case 1:
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_13), 15);
			break;
		
		case 2:
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_13), 16);
			break;
	}
}

void func_349(var uParam0)
{
	if (UI::DOES_BLIP_EXIST(uParam0->f_5))
	{
		UI::REMOVE_BLIP(&(uParam0->f_5));
	}
}

void func_350()
{
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_1976);
	PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_1977);
	PED::ADD_RELATIONSHIP_GROUP("RACERS", &iLocal_120);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_1976);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_1977);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, iLocal_120);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1977, iLocal_1976);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1977, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_1977, iLocal_120);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1976, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1976, iLocal_1977);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_1976, iLocal_120);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_120, iLocal_1976);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_120, iLocal_1977);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_120, 1862763509);
}

int func_351()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return 1;
	}
	return 0;
}

void func_352(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_366(bParam1);
	func_365(bParam1, iParam2);
	func_363(bParam1);
	func_362();
	func_361();
	func_360();
	if (Local_1943.f_16 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(Local_1943.f_16);
	}
	if (Local_1943.f_17 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(Local_1943.f_17);
	}
	func_359(&uLocal_142);
	func_346(&uLocal_1857, 1, 0);
	func_357();
	func_355();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	UI::DISPLAY_RADAR(true);
	UI::DISPLAY_HUD(true);
	GAMEPLAY::SET_TIME_SCALE(1f);
	func_137(0, 0, 0, 2000, 1, 0);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	ENTITY::SET_ENTITY_VISIBLE(iLocal_2127, 1, 0);
	func_249(&Local_46);
	func_243(&Local_1943);
	if (bParam1)
	{
		GAMEPLAY::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_2127, 1), 1000f, 1, 0, 0, 0);
	}
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
	if (func_8(iLocal_2129))
	{
		VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_2129, 0);
	}
	GRAPHICS::_STOP_ALL_SCREEN_EFFECTS();
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::STOP_STREAM();
	if (bParam0)
	{
		VEHICLE::_0xE6C0C80B8C867537(0);
		func_354();
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 1);
		GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
		STREAMING::SET_PED_POPULATION_BUDGET(2);
		STREAMING::SET_REDUCE_PED_MODEL_BUDGET(0);
		AI::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BIKER", 1);
		AI::SET_SCENARIO_TYPE_ENABLED("DRIVE", 1);
		AI::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 1);
		AI::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", 1);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(2);
		STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(0);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
		PED::SET_CREATE_RANDOM_COPS(1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(2565.207f, 2896.662f, 29.9408f, 1654.53f, 3420.822f, 63.94006f, 470f, 0, 1, 1);
		VEHICLE::_0xE6C0C80B8C867537(0);
		if (func_8(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
			VEHICLE::SET_VEHICLE_HANDBRAKE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0);
		}
		TIME::PAUSE_CLOCK(0);
		SCRIPT::SET_NO_LOADING_SCREEN(0);
		if (!bParam3)
		{
			func_12(197, 0, 0, 1, 0);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_8(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
		}
		else
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		}
		func_3(500);
		func_353(&Global_111636);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_353(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41393)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

void func_354()
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1976);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1977);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_120);
}

void func_355()
{
	Global_19671 = 0;
	func_356();
}

void func_356()
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

void func_357()
{
	Global_19671 = 0;
	func_358();
}

void func_358()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
	}
}

void func_359(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_360()
{
}

void func_361()
{
}

void func_362()
{
	iVar0 = 0;
	while (iVar0 < Local_196)
	{
		func_135(&(Local_196[iVar0].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1748)
	{
		func_135(&(Local_1748[iVar0].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1845)
	{
		func_135(&(Local_1845[iVar0].f_1));
		iVar0++;
	}
	func_135(&(Local_1943.f_14));
	func_135(&(Local_1943.f_15));
}

void func_363(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_1845)
	{
		func_364(&(Local_1845[iVar0]), bParam0);
		iVar0++;
	}
}

void func_364(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(*uParam0))
		{
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
		}
		if (bParam1)
		{
			OBJECT::DELETE_OBJECT(uParam0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_365(bool bParam0, var uParam1)
{
	if (uParam1 && bParam0)
	{
		if (func_8(iLocal_2127) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_2127, 0))
		{
			func_24();
		}
		func_132(&iLocal_2129, bParam0);
	}
	iVar0 = 0;
	while (iVar0 < Local_196)
	{
		func_132(&(Local_196[iVar0].f_5), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1748)
	{
		func_132(&(Local_1748[iVar0]), bParam0);
		iVar0++;
	}
	func_132(&uLocal_2128, bParam0);
	func_132(&iLocal_2130, bParam0);
}

void func_366(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_196)
	{
		func_133(&(Local_196[iVar0]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_597)
	{
		func_133(&(Local_597[iVar0]), 1);
		iVar0++;
	}
}
